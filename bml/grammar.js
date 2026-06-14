/**
 * @file BML grammar for tree-sitter
 * @author broodlang
 * @license MIT
 *
 * BML is Hatch's HTML-flavoured template surface (`.bml`), compiled to Brood
 * Hiccup by `web/bml`. It is HTML plus:
 *   - `{expr}` interpolation in text and attribute values — `expr` is Brood, and
 *     `queries/injections.scm` injects the `brood` grammar into it.
 *   - `:if={expr}` / `:for={x <- coll}` directive attributes.
 *   - components: `<.name …>…</.name>` (and `<.name/>`).
 * The grammar is deliberately lenient (a missing close tag parses as a void/empty
 * element) — it exists for highlighting, not validation. Raw-text elements
 * (`<script>`/`<style>`) are NOT special-cased here: making their names keyword
 * tokens would collide with the very common `style=` attribute, so their `{…}`
 * content is (harmlessly) highlighted as interpolation.
 */

const VOID = [
  'area', 'base', 'br', 'col', 'embed', 'hr', 'img',
  'input', 'link', 'meta', 'param', 'source', 'track', 'wbr',
];

module.exports = grammar({
  name: 'bml',

  // Whitespace between tokens is insignificant; significant text rides inside the
  // `text` token, which is not whitespace-bounded.
  extras: _ => [/\s/],

  rules: {
    document: $ => repeat($._node),

    _node: $ => choice(
      $.component,
      $.element,
      $.interpolation,
      $.comment,
      $.text,
    ),

    // Components: <.name …>…</.name> and <.name/>. `<.`/`</.` lex longer than `<`/`</`,
    // so plain elements are unaffected.
    component: $ => choice(
      $.component_self_closing,
      seq($.component_open, repeat($._node), $.component_close),
    ),
    component_open: $ => seq('<.', $.component_name, repeat($.attribute), '>'),
    component_self_closing: $ => seq('<.', $.component_name, repeat($.attribute), '/>'),
    component_close: $ => seq('</.', $.component_name, '>'),
    component_name: _ => /[a-zA-Z][a-zA-Z0-9/_-]*/,

    // Any run that doesn't open a tag or an interpolation. Must start with a
    // non-space char so whitespace-only gaps between tags (and the trailing
    // newline at EOF) fall to `extras` rather than becoming text nodes.
    text: _ => token(prec(-1, /[^<{\s][^<{]*/)),

    comment: _ => token(seq('<!--', /([^-]|-[^-]|--[^>])*/, '-->')),

    // A void element never has children; a self-closing element ends in `/>`;
    // every other element has a body and a matching close tag.
    element: $ => choice(
      $.void_element,
      $.self_closing_element,
      $.full_element,
    ),

    full_element: $ => seq($.start_tag, repeat($._node), $.end_tag),

    // Void names lex as keyword tokens, so they never reach `self_closing_element`;
    // accept both `>` and `/>` here so `<br>` and `<br/>` both parse.
    void_element: $ => seq(
      '<',
      alias(choice(...VOID), $.tag_name),
      repeat($.attribute),
      choice('>', '/>'),
    ),

    self_closing_element: $ => seq('<', $.tag_name, repeat($.attribute), '/>'),

    start_tag: $ => seq('<', $.tag_name, repeat($.attribute), '>'),
    end_tag: $ => seq('</', $.tag_name, '>'),

    tag_name: _ => /[a-zA-Z][a-zA-Z0-9-]*/,

    attribute: $ => seq(
      $.attribute_name,
      optional(seq('=', $._attribute_value)),
    ),

    // Includes directive names like `:if` / `:for` and `data-*`.
    attribute_name: _ => /[^\s/>="'{}]+/,

    _attribute_value: $ => choice($.quoted_value, $.interpolation),

    quoted_value: $ => seq(
      '"',
      repeat(choice($.interpolation, $.attribute_text)),
      '"',
    ),
    attribute_text: _ => token.immediate(prec(1, /[^"{]+/)),

    // `{ … }` with balanced inner braces (Brood maps) and string literals, so the
    // node spans exactly the interpolation; injections.scm parses its inner text
    // as Brood.
    interpolation: $ => seq('{', repeat($._interp_part), '}'),
    _interp_part: $ => choice($.interp_braces, $.interp_string, $.interp_text),
    interp_braces: $ => seq('{', repeat($._interp_part), '}'),
    interp_string: _ => token(seq('"', /(\\.|[^"\\])*/, '"')),
    interp_text: _ => /[^{}"]+/,
  },
});
