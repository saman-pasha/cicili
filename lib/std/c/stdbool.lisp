;;;; Cicili declarations for <stdbool.h>
;;;; Import from lib/std/prelude.lisp:  (import "./c/stdbool.lisp")
;;;; Requires in target: (include <stdbool.h>)  or  (:std #t)
;;;;
;;;; `bool` is already a Cicili primitive, so this file only needs to pin
;;;; the two boolean constants. Deliberately tiny: `_Bool`, `__bool_true_false_are_defined`
;;;; and the `bool`/`true`/`false` macro-ness itself have no useful Cicili spelling
;;;; and are skipped.

(DEFMACRO init-macro ()
  `($$$
     ;;; ---- constants ----
     (typedef bool true)
     (typedef bool false)
     ))
