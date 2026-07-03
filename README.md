# tree-sitter-brood

A [tree-sitter](https://tree-sitter.github.io) grammar for the
[Brood](https://github.com/broodlang) language (`.blsp`) — an incremental parser that
builds a concrete syntax tree, for **Neovim, Helix, Zed, Emacs (tree-sitter mode),
and GitHub** (highlighting, structural editing, code navigation).

This is the *parser* counterpart to the editor integrations that don't need a full
parse: VS Code (`brood-vscode`, a TextMate grammar) and Emacs font-lock (`brood-mode`).
All three keyword lists come from the language's own `(special-forms)` — see below.

## What it models

Brood's reader (`crates/lisp/src/syntax/{reader,atom}.rs` in the brood repo): lists
`(...)`, vectors `[...]`, maps `{...}`; `'` quote, `` ` `` quasiquote, `~` unquote, `~@`
unquote-splicing; strings with escapes; `;` line comments; commas as whitespace; and
atoms classified into **number / keyword (`:foo`) / `nil` / `true`/`false` / symbol** by
a small **external scanner** (`src/scanner.c`) that mirrors the reader's `atom::classify`
exactly — so `nil?` is one symbol (not `nil` + `?`) and `1abc` is one symbol (not a
number + a symbol).

## Develop

```sh
npm install                 # gets tree-sitter-cli
npx tree-sitter generate    # regenerate src/parser.c from grammar.js
npx tree-sitter test        # run the test/corpus cases
npx tree-sitter parse FILE.blsp   # inspect a parse tree
```

The generated `src/` (`parser.c`, `grammar.json`, `node-types.json`) is committed so
consumers don't need the CLI; regenerate it after editing `grammar.js`.

## Highlights query — generated from the language

`queries/highlights.scm` is **generated** from the canonical `(special-forms)` (ADR-092),
not hand-maintained — regenerate it from the brood repo:

```sh
nest grammar tree-sitter > queries/highlights.scm
```

A new special form belongs in the kernel's `SPECIAL_FORMS`, after which every editor
(this grammar, `brood-vscode`, `brood-mode`) regenerates its keyword list in sync.

## Editor install (Neovim example)

Point `nvim-treesitter` at this grammar (until it's upstreamed):

```lua
require('nvim-treesitter.parsers').get_parser_configs().brood = {
  install_info = { url = '~/src/broodlang/brood-treesitter', files = { 'src/parser.c', 'src/scanner.c' } },
  filetype = 'brood',
}
vim.filetype.add({ extension = { blsp = 'brood' } })
```

Then `:TSInstall brood` and copy `queries/highlights.scm` into your runtime's
`queries/brood/`.

## BML — the Hatch template grammar (`bml/`)

A second grammar in [`bml/`](bml/) covers **BML** (`.bml`), Hatch's HTML-flavoured
template surface (compiled to Brood Hiccup by `web/bml`). It models HTML elements,
`{…}` interpolation, and the `:if` / `:for` directive attributes; its
`queries/injections.scm` **injects this brood grammar into every `{…}`**, so the
embedded Brood expressions are highlighted by the same rules as a `.blsp` file.

It is a self-contained grammar with its own `bml/tree-sitter.json` (kept separate from
the root so each grammar's `tree-sitter test` pairs with its own corpus):

```sh
cd bml
npx tree-sitter generate
npx tree-sitter test
npx tree-sitter parse FILE.bml
```

Neovim install (note `location` for the subdir grammar; the brood parser must also be
installed for the injection to resolve):

```lua
require('nvim-treesitter.parsers').get_parser_configs().bml = {
  install_info = { url = '~/src/broodlang/brood-treesitter', location = 'bml', files = { 'src/parser.c' } },
  filetype = 'bml',
}
vim.filetype.add({ extension = { bml = 'bml' } })
```

Then `:TSInstall bml` and copy `bml/queries/{highlights,injections}.scm` into
`queries/bml/`.

## License

Licensed under the MIT License; see [`LICENSE`](LICENSE).
Copyright © 2026 Wilhelm Kirschbaum.
