;; tree-sitter-brood highlight query.
;; GENERATED from (reflect/special-forms) + (reflect/doc-forms) by `nest grammar tree-sitter` —
;; do not hand-edit.

(comment) @comment
(string) @string
(escape_sequence) @string.escape
(number) @number
(keyword) @constant
(boolean) @constant.builtin
(nil) @constant.builtin

["(" ")" "[" "]" "{" "}"] @punctuation.bracket
["'" "`" "~" "~@"] @operator

;; def… heads: the head reads as a keyword, the defined name as a definition.
((list . (symbol) @keyword (symbol) @function)
 (#match? @keyword "^def"))

;; special forms + core macros in head position (the canonical (reflect/special-forms)).
((list . (symbol) @keyword.control)
 (#any-of? @keyword.control "if" "do" "fn" "let" "letrec" "quote" "quasiquote" "impl" "when" "unless" "cond" "and" "or" "match" "match*" "case" "comment" "try" "catch" "throw" "receive" "binding" "dolist" "doseq" "dotimes" "for" "->" "spawn" "spawn-link" "error" "with-out-str" "with-err-str"))

;; docstrings: in a doc-carrying def… form ((reflect/doc-forms)) the string right after the
;; name — or after the parameter list — DOCUMENTS the definition rather than being a
;; value, so it reads as documentation, not as a string.
((list . (symbol) @_doc-head . (symbol) . (string) @string.documentation)
 (#any-of? @_doc-head "defmacro" "defability" "defmodule" "defserver" "defn" "defn-"))

((list . (symbol) @_doc-head . (symbol) . (list) . (string) @string.documentation)
 (#any-of? @_doc-head "defmacro" "defserver" "defn" "defn-"))

