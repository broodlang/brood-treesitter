/**
 * @file Brood grammar for tree-sitter
 * @author broodlang
 * @license MIT
 *
 * Models Brood's reader (the brood repo's `crates/lisp/src/syntax/reader.rs` +
 * `atom.rs`). Brood is a small Lisp: code is lists `(...)`, data uses vectors
 * `[...]` and maps `{...}`; `'` quote, `` ` `` quasiquote, `~` unquote, `~@`
 * unquote-splicing; `;` line comments; commas are whitespace. Special forms are
 * just symbols in head position — coloured by `queries/highlights.scm` (generated
 * from the language's own `(special-forms)` by `nest grammar tree-sitter`), not by
 * the grammar.
 */

module.exports = grammar({
  name: 'brood',

  // Commas count as whitespace; `;` line comments and whitespace are trivia.
  extras: $ => [/\s/, /,/, $.comment],

  // Atoms are classified by an external scanner (src/scanner.c) that reads a
  // maximal run of non-delimiter characters and decides number / keyword / nil /
  // boolean / symbol — exactly like the reader's `atom::classify`. Doing it in the
  // scanner avoids tree-sitter's lexer pitfalls (where `nil?` would split into
  // `nil` + `?`, or a digit-leading symbol like `1abc` into a number + a symbol).
  externals: $ => [$.number, $.keyword, $.nil, $.boolean, $.symbol],

  rules: {
    source_file: $ => repeat($._form),

    _form: $ => choice(
      $.list,
      $.vector,
      $.map,
      $.quote,
      $.quasiquote,
      $.unquote_splicing,
      $.unquote,
      $.string,
      $.number,
      $.keyword,
      $.boolean,
      $.nil,
      $.symbol,
    ),

    list: $ => seq('(', repeat($._form), ')'),
    vector: $ => seq('[', repeat($._form), ']'),
    map: $ => seq('{', repeat($._form), '}'),

    quote: $ => seq("'", $._form),
    quasiquote: $ => seq('`', $._form),
    // `~@` must be offered before `~` so the longer prefix wins.
    unquote_splicing: $ => seq('~@', $._form),
    unquote: $ => seq('~', $._form),

    string: $ => seq(
      '"',
      repeat(choice($.escape_sequence, $._string_text)),
      '"',
    ),
    _string_text: _ => token.immediate(prec(1, /[^"\\]+/)),
    escape_sequence: _ => token.immediate(/\\./),

    comment: _ => token(/;.*/),

    // number / keyword / nil / boolean / symbol are produced by the external
    // scanner (see `externals` above + src/scanner.c).
  },
});
