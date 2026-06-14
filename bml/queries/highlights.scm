;; tree-sitter-bml highlight query.

(comment) @comment
(tag_name) @tag

;; Components (<.name>) read as types/constructors to set them apart from plain tags.
(component_name) @type

(attribute_name) @attribute

;; Directive attributes (:if / :for) read as control keywords.
((attribute_name) @keyword.control
 (#match? @keyword.control "^:(if|for)$"))

(quoted_value) @string
(attribute_text) @string

;; Interpolation delimiters; the inner expression is highlighted by the injected
;; brood grammar (see injections.scm).
(interpolation ["{" "}"] @punctuation.special)
(interp_braces ["{" "}"] @punctuation.bracket)

["<" ">" "</" "/>" "<." "</."] @punctuation.bracket
"=" @operator
