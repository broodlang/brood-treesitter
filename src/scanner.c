// External scanner for Brood atoms — classifies a maximal run of non-delimiter
// characters into number / keyword / nil / boolean / symbol, mirroring the reader's
// `atom::classify` (crates/lisp/src/syntax/atom.rs in the brood repo). Doing this in
// the scanner (rather than as overlapping lexer tokens) is what makes `nil?` one
// symbol (not `nil` + `?`) and `1abc` one symbol (not a number + a symbol).

#include "tree_sitter/parser.h"

#include <stddef.h>
#include <string.h>

enum TokenType {
  NUMBER,
  KEYWORD,
  NIL,
  BOOLEAN,
  SYMBOL,
};

// Terminates an atom (reader `is_delimiter`): whitespace + ( ) [ ] { } " ; ' ` ~ ,
// plus end-of-input (0).
static bool is_delim(int32_t c) {
  switch (c) {
    case 0:
    case ' ': case '\t': case '\n': case '\r': case '\f': case '\v':
    case '(': case ')': case '[': case ']': case '{': case '}':
    case '"': case ';': case '\'': case '`': case '~': case ',':
      return true;
    default:
      return false;
  }
}

// Does `s` (length `n`) look like a Brood number? Optional sign, decimal digits with
// at most one dot, an optional `e`/`E` exponent — and at least one digit. Rejects
// `-`, `->`, `1abc`, `1.2.3`, so those stay symbols (matching `atom::classify`,
// which only treats a token as a number if it actually parses as one).
static bool looks_number(const char *s, unsigned n) {
  unsigned i = 0;
  if (i < n && (s[i] == '+' || s[i] == '-')) i++;
  unsigned digits = 0, dots = 0;
  bool exp_seen = false;
  for (; i < n; i++) {
    char c = s[i];
    if (c >= '0' && c <= '9') {
      digits++;
    } else if (c == '.') {
      if (exp_seen || ++dots > 1) return false;
    } else if (c == 'e' || c == 'E') {
      if (exp_seen || digits == 0) return false;
      exp_seen = true;
      if (i + 1 < n && (s[i + 1] == '+' || s[i + 1] == '-')) i++;
    } else {
      return false;
    }
  }
  return digits > 0;
}

bool tree_sitter_brood_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  (void)payload;
  // Consume leading whitespace + commas (the reader treats commas as whitespace).
  // An external scanner must skip its own leading trivia, or tree-sitter can't get
  // past the space between two atoms (`a b` would otherwise stall on the space).
  for (;;) {
    int32_t c = lexer->lookahead;
    if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' ||
        c == '\v' || c == ',') {
      lexer->advance(lexer, true);
    } else {
      break;
    }
  }
  // Nothing for us here? Let the internal lexer handle the brackets, strings, the
  // quote prefixes, and `;` comments.
  if (is_delim(lexer->lookahead)) return false;
  // In an error-recovery state where no atom is valid, bail out.
  if (!(valid_symbols[NUMBER] || valid_symbols[KEYWORD] || valid_symbols[NIL] ||
        valid_symbols[BOOLEAN] || valid_symbols[SYMBOL])) {
    return false;
  }

  // Read the maximal atom. Buffer a bounded prefix for classification; numbers,
  // keywords, `nil`/`true`/`false` are all short, so an over-long atom is a symbol.
  char buf[64];
  unsigned len = 0;
  while (!is_delim(lexer->lookahead)) {
    if (len < sizeof(buf)) buf[len] = (char)lexer->lookahead;
    len++;
    lexer->advance(lexer, false);
  }
  lexer->mark_end(lexer);

  if (len <= sizeof(buf)) {
    if (len == 3 && memcmp(buf, "nil", 3) == 0) {
      lexer->result_symbol = NIL;
      return true;
    }
    if ((len == 4 && memcmp(buf, "true", 4) == 0) ||
        (len == 5 && memcmp(buf, "false", 5) == 0)) {
      lexer->result_symbol = BOOLEAN;
      return true;
    }
    if (looks_number(buf, len)) {
      lexer->result_symbol = NUMBER;
      return true;
    }
    if (buf[0] == ':' && len > 1) {
      lexer->result_symbol = KEYWORD;
      return true;
    }
  }
  lexer->result_symbol = SYMBOL;
  return true;
}

// Stateless scanner — the create/destroy/serialize/deserialize hooks are no-ops.
void *tree_sitter_brood_external_scanner_create(void) { return NULL; }
void tree_sitter_brood_external_scanner_destroy(void *payload) { (void)payload; }
unsigned tree_sitter_brood_external_scanner_serialize(void *payload, char *buffer) {
  (void)payload;
  (void)buffer;
  return 0;
}
void tree_sitter_brood_external_scanner_deserialize(void *payload, const char *buffer,
                                                    unsigned length) {
  (void)payload;
  (void)buffer;
  (void)length;
}
