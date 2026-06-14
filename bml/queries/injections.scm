;; tree-sitter-bml injection query.
;; The contents of every `{ … }` interpolation are Brood — parse them with the
;; brood grammar. The offset trims the surrounding `{` and `}` so only the inner
;; expression text is injected.
((interpolation) @injection.content
 (#set! injection.language "brood")
 (#offset! @injection.content 0 1 0 -1))
