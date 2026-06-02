#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 26
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_SQUOTE = 7,
  anon_sym_BQUOTE = 8,
  anon_sym_TILDE_AT = 9,
  anon_sym_TILDE = 10,
  anon_sym_DQUOTE = 11,
  sym__string_text = 12,
  sym_escape_sequence = 13,
  sym_comment = 14,
  sym_number = 15,
  sym_keyword = 16,
  sym_nil = 17,
  sym_boolean = 18,
  sym_symbol = 19,
  sym_source_file = 20,
  sym__form = 21,
  sym_list = 22,
  sym_vector = 23,
  sym_map = 24,
  sym_quote = 25,
  sym_quasiquote = 26,
  sym_unquote_splicing = 27,
  sym_unquote = 28,
  sym_string = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_string_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_TILDE_AT] = "~@",
  [anon_sym_TILDE] = "~",
  [anon_sym_DQUOTE] = "\"",
  [sym__string_text] = "_string_text",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_number] = "number",
  [sym_keyword] = "keyword",
  [sym_nil] = "nil",
  [sym_boolean] = "boolean",
  [sym_symbol] = "symbol",
  [sym_source_file] = "source_file",
  [sym__form] = "_form",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_map] = "map",
  [sym_quote] = "quote",
  [sym_quasiquote] = "quasiquote",
  [sym_unquote_splicing] = "unquote_splicing",
  [sym_unquote] = "unquote",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_TILDE_AT] = anon_sym_TILDE_AT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__string_text] = sym__string_text,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_number] = sym_number,
  [sym_keyword] = sym_keyword,
  [sym_nil] = sym_nil,
  [sym_boolean] = sym_boolean,
  [sym_symbol] = sym_symbol,
  [sym_source_file] = sym_source_file,
  [sym__form] = sym__form,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
  [sym_map] = sym_map,
  [sym_quote] = sym_quote,
  [sym_quasiquote] = sym_quasiquote,
  [sym_unquote_splicing] = sym_unquote_splicing,
  [sym_unquote] = sym_unquote,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__string_text] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      ADVANCE_MAP(
        '"', 15,
        '\'', 11,
        '(', 5,
        ')', 6,
        ';', 20,
        '[', 7,
        '\\', 2,
        ']', 8,
        '`', 12,
        '{', 9,
        '}', 10,
        '~', 14,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(3);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      ADVANCE_MAP(
        '"', 15,
        '\'', 11,
        '(', 5,
        ')', 6,
        ';', 20,
        '[', 7,
        ']', 8,
        '`', 12,
        '{', 9,
        '}', 10,
        '~', 14,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_TILDE_AT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '@') ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__string_text);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__string_text);
      if (lookahead == ';') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__string_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_TILDE_AT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym__form] = STATE(6),
    [sym_list] = STATE(6),
    [sym_vector] = STATE(6),
    [sym_map] = STATE(6),
    [sym_quote] = STATE(6),
    [sym_quasiquote] = STATE(6),
    [sym_unquote_splicing] = STATE(6),
    [sym_unquote] = STATE(6),
    [sym_string] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_TILDE_AT] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(23),
    [sym_keyword] = ACTIONS(23),
    [sym_nil] = ACTIONS(23),
    [sym_boolean] = ACTIONS(23),
    [sym_symbol] = ACTIONS(23),
  },
  [2] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_map] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [anon_sym_BQUOTE] = ACTIONS(39),
    [anon_sym_TILDE_AT] = ACTIONS(42),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(51),
    [sym_keyword] = ACTIONS(51),
    [sym_nil] = ACTIONS(51),
    [sym_boolean] = ACTIONS(51),
    [sym_symbol] = ACTIONS(51),
  },
  [3] = {
    [sym__form] = STATE(7),
    [sym_list] = STATE(7),
    [sym_vector] = STATE(7),
    [sym_map] = STATE(7),
    [sym_quote] = STATE(7),
    [sym_quasiquote] = STATE(7),
    [sym_unquote_splicing] = STATE(7),
    [sym_unquote] = STATE(7),
    [sym_string] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_TILDE_AT] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(56),
    [sym_keyword] = ACTIONS(56),
    [sym_nil] = ACTIONS(56),
    [sym_boolean] = ACTIONS(56),
    [sym_symbol] = ACTIONS(56),
  },
  [4] = {
    [sym__form] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_map] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_quasiquote] = STATE(8),
    [sym_unquote_splicing] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym_string] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_TILDE_AT] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(60),
    [sym_keyword] = ACTIONS(60),
    [sym_nil] = ACTIONS(60),
    [sym_boolean] = ACTIONS(60),
    [sym_symbol] = ACTIONS(60),
  },
  [5] = {
    [sym__form] = STATE(9),
    [sym_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_map] = STATE(9),
    [sym_quote] = STATE(9),
    [sym_quasiquote] = STATE(9),
    [sym_unquote_splicing] = STATE(9),
    [sym_unquote] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_TILDE_AT] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(64),
    [sym_keyword] = ACTIONS(64),
    [sym_nil] = ACTIONS(64),
    [sym_boolean] = ACTIONS(64),
    [sym_symbol] = ACTIONS(64),
  },
  [6] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_map] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_TILDE_AT] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(68),
    [sym_keyword] = ACTIONS(68),
    [sym_nil] = ACTIONS(68),
    [sym_boolean] = ACTIONS(68),
    [sym_symbol] = ACTIONS(68),
  },
  [7] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_map] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_TILDE_AT] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(68),
    [sym_keyword] = ACTIONS(68),
    [sym_nil] = ACTIONS(68),
    [sym_boolean] = ACTIONS(68),
    [sym_symbol] = ACTIONS(68),
  },
  [8] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_map] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_TILDE_AT] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(68),
    [sym_keyword] = ACTIONS(68),
    [sym_nil] = ACTIONS(68),
    [sym_boolean] = ACTIONS(68),
    [sym_symbol] = ACTIONS(68),
  },
  [9] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_map] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_TILDE_AT] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(68),
    [sym_keyword] = ACTIONS(68),
    [sym_nil] = ACTIONS(68),
    [sym_boolean] = ACTIONS(68),
    [sym_symbol] = ACTIONS(68),
  },
  [10] = {
    [sym__form] = STATE(20),
    [sym_list] = STATE(20),
    [sym_vector] = STATE(20),
    [sym_map] = STATE(20),
    [sym_quote] = STATE(20),
    [sym_quasiquote] = STATE(20),
    [sym_unquote_splicing] = STATE(20),
    [sym_unquote] = STATE(20),
    [sym_string] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_TILDE_AT] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(76),
    [sym_keyword] = ACTIONS(76),
    [sym_nil] = ACTIONS(76),
    [sym_boolean] = ACTIONS(76),
    [sym_symbol] = ACTIONS(76),
  },
  [11] = {
    [sym__form] = STATE(18),
    [sym_list] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_map] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_quasiquote] = STATE(18),
    [sym_unquote_splicing] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_string] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_TILDE_AT] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(78),
    [sym_keyword] = ACTIONS(78),
    [sym_nil] = ACTIONS(78),
    [sym_boolean] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
  },
  [12] = {
    [sym__form] = STATE(19),
    [sym_list] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_map] = STATE(19),
    [sym_quote] = STATE(19),
    [sym_quasiquote] = STATE(19),
    [sym_unquote_splicing] = STATE(19),
    [sym_unquote] = STATE(19),
    [sym_string] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_TILDE_AT] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(80),
    [sym_keyword] = ACTIONS(80),
    [sym_nil] = ACTIONS(80),
    [sym_boolean] = ACTIONS(80),
    [sym_symbol] = ACTIONS(80),
  },
  [13] = {
    [sym__form] = STATE(16),
    [sym_list] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_map] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_quasiquote] = STATE(16),
    [sym_unquote_splicing] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_string] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_TILDE_AT] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(82),
    [sym_keyword] = ACTIONS(82),
    [sym_nil] = ACTIONS(82),
    [sym_boolean] = ACTIONS(82),
    [sym_symbol] = ACTIONS(82),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(84),
    [anon_sym_BQUOTE] = ACTIONS(84),
    [anon_sym_TILDE_AT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(84),
    [sym_keyword] = ACTIONS(84),
    [sym_nil] = ACTIONS(84),
    [sym_boolean] = ACTIONS(84),
    [sym_symbol] = ACTIONS(84),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_RBRACK] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_SQUOTE] = ACTIONS(88),
    [anon_sym_BQUOTE] = ACTIONS(88),
    [anon_sym_TILDE_AT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(88),
    [sym_keyword] = ACTIONS(88),
    [sym_nil] = ACTIONS(88),
    [sym_boolean] = ACTIONS(88),
    [sym_symbol] = ACTIONS(88),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_BQUOTE] = ACTIONS(92),
    [anon_sym_TILDE_AT] = ACTIONS(92),
    [anon_sym_TILDE] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(92),
    [sym_keyword] = ACTIONS(92),
    [sym_nil] = ACTIONS(92),
    [sym_boolean] = ACTIONS(92),
    [sym_symbol] = ACTIONS(92),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [anon_sym_BQUOTE] = ACTIONS(96),
    [anon_sym_TILDE_AT] = ACTIONS(96),
    [anon_sym_TILDE] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(96),
    [sym_keyword] = ACTIONS(96),
    [sym_nil] = ACTIONS(96),
    [sym_boolean] = ACTIONS(96),
    [sym_symbol] = ACTIONS(96),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(100),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_TILDE_AT] = ACTIONS(100),
    [anon_sym_TILDE] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(100),
    [sym_keyword] = ACTIONS(100),
    [sym_nil] = ACTIONS(100),
    [sym_boolean] = ACTIONS(100),
    [sym_symbol] = ACTIONS(100),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_RBRACK] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(104),
    [anon_sym_BQUOTE] = ACTIONS(104),
    [anon_sym_TILDE_AT] = ACTIONS(104),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(104),
    [sym_keyword] = ACTIONS(104),
    [sym_nil] = ACTIONS(104),
    [sym_boolean] = ACTIONS(104),
    [sym_symbol] = ACTIONS(104),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(108),
    [anon_sym_BQUOTE] = ACTIONS(108),
    [anon_sym_TILDE_AT] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(108),
    [sym_keyword] = ACTIONS(108),
    [sym_nil] = ACTIONS(108),
    [sym_boolean] = ACTIONS(108),
    [sym_symbol] = ACTIONS(108),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [anon_sym_BQUOTE] = ACTIONS(112),
    [anon_sym_TILDE_AT] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(112),
    [sym_keyword] = ACTIONS(112),
    [sym_nil] = ACTIONS(112),
    [sym_boolean] = ACTIONS(112),
    [sym_symbol] = ACTIONS(112),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_TILDE_AT] = ACTIONS(116),
    [anon_sym_TILDE] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(116),
    [sym_keyword] = ACTIONS(116),
    [sym_nil] = ACTIONS(116),
    [sym_boolean] = ACTIONS(116),
    [sym_symbol] = ACTIONS(116),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_TILDE_AT] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(120),
    [sym_keyword] = ACTIONS(120),
    [sym_nil] = ACTIONS(120),
    [sym_boolean] = ACTIONS(120),
    [sym_symbol] = ACTIONS(120),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [anon_sym_BQUOTE] = ACTIONS(124),
    [anon_sym_TILDE_AT] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(124),
    [sym_keyword] = ACTIONS(124),
    [sym_nil] = ACTIONS(124),
    [sym_boolean] = ACTIONS(124),
    [sym_symbol] = ACTIONS(124),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_BQUOTE] = ACTIONS(128),
    [anon_sym_TILDE_AT] = ACTIONS(128),
    [anon_sym_TILDE] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(128),
    [sym_keyword] = ACTIONS(128),
    [sym_nil] = ACTIONS(128),
    [sym_boolean] = ACTIONS(128),
    [sym_symbol] = ACTIONS(128),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_string_repeat1,
    ACTIONS(134), 2,
      sym__string_text,
      sym_escape_sequence,
  [14] = 4,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_repeat1,
    ACTIONS(140), 2,
      sym__string_text,
      sym_escape_sequence,
  [28] = 4,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_repeat1,
    ACTIONS(144), 2,
      sym__string_text,
      sym_escape_sequence,
  [42] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(26)] = 0,
  [SMALL_STATE(27)] = 14,
  [SMALL_STATE(28)] = 28,
  [SMALL_STATE(29)] = 42,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_number = 0,
  ts_external_token_keyword = 1,
  ts_external_token_nil = 2,
  ts_external_token_boolean = 3,
  ts_external_token_symbol = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_number] = sym_number,
  [ts_external_token_keyword] = sym_keyword,
  [ts_external_token_nil] = sym_nil,
  [ts_external_token_boolean] = sym_boolean,
  [ts_external_token_symbol] = sym_symbol,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_number] = true,
    [ts_external_token_keyword] = true,
    [ts_external_token_nil] = true,
    [ts_external_token_boolean] = true,
    [ts_external_token_symbol] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_brood_external_scanner_create(void);
void tree_sitter_brood_external_scanner_destroy(void *);
bool tree_sitter_brood_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_brood_external_scanner_serialize(void *, char *);
void tree_sitter_brood_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_brood(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_brood_external_scanner_create,
      tree_sitter_brood_external_scanner_destroy,
      tree_sitter_brood_external_scanner_scan,
      tree_sitter_brood_external_scanner_serialize,
      tree_sitter_brood_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
