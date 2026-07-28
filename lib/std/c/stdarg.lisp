;;;; Cicili declarations for <stdarg.h>
;;;; Import from lib/std/prelude.lisp:  (import "./c/stdarg.lisp")
;;;; Requires in target: (include <stdarg.h>)  or  (:std #t)
;;;;
;;;; `va_start` and `va_arg` are C macros that take a bare (unevaluated) type
;;;; name or the un-decayed last named parameter as an argument -- neither is
;;;; an expression Cicili can type-check or pass through the `func` grammar,
;;;; so both are skipped here. `va_end` and `va_copy` only ever take
;;;; `va_list` expressions, so those are declared as ordinary functions.

(DEFMACRO init-macro ()
  `($$$
     ;;; ---- types ----
     (decl) (struct va_list)                       ; opaque

     ;;; ---- functions ----
     (decl) (func va_end  ((va_list ap)))
     (decl) (func va_copy ((va_list dest) (va_list src)))
     ))
