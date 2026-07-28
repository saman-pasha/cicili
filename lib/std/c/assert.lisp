;;;; Cicili declarations for <assert.h>
;;;; Import from lib/std/prelude.lisp:  (import "./c/assert.lisp")
;;;; Requires in target: (include <assert.h>)  or  (:std #t)
;;;;
;;;; assert() is a function-like macro (it stringifies its argument and
;;;; expands differently depending on whether NDEBUG is defined), so it
;;;; cannot be typed usefully as a Cicili (func ...) declaration. It stays
;;;; a real C macro and Cicili source is expected to use `assert(...)`
;;;; verbatim; nothing here declares it.
;;;;
;;;; The diagnostic routine assert() expands to when NDEBUG is not defined
;;;; (glibc: __assert_fail; other libcs: similarly named, non-portable
;;;; internals) is platform specific and is intentionally skipped.

(DEFMACRO init-macro ()
  `($$$
     ;;; ---- constants ----
     ;; Feature-test macro: define before including <assert.h> to strip
     ;; assert() down to a no-op. Only the type is pinned here.
     (typedef int NDEBUG)
     ))
