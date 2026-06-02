;; tree-sitter-brood highlight query.
;; GENERATED from (special-forms) by `nest grammar tree-sitter` — do not hand-edit.

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

;; special forms + core macros in head position (the canonical (special-forms)).
((list . (symbol) @keyword.control)
 (#any-of? @keyword.control "if" "do" "fn" "lambda" "let" "let*" "letrec" "quote" "quasiquote" "when" "unless" "cond" "and" "or" "match" "match*" "try" "catch" "throw" "receive" "binding" "dolist" "doseq" "dotimes" "for" "->" "->>" "spawn" "spawn-link" "remote-spawn" "remote-spawn-sync" "error" "with-out-str" "bench"))

