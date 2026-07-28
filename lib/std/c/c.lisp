;;;; Cicili declarations for the C17 standard library
;;;;
;;;; Aggregator. Import this from lib/std/prelude.lisp to make every C standard
;;;; header's types, constants and functions visible to Cicili's type inference:
;;;;
;;;;     (import "./c/c.lisp")
;;;;
;;;; Or import only what you need, one header at a time:
;;;;
;;;;     (import "./c/stdio.lisp")
;;;;     (import "./c/string.lisp")
;;;;
;;;; Nothing here emits C. The real declarations still come from the real header
;;;; at compile time -- keep using (include <stdio.h>) or (:std #t) in your target.
;;;;
;;;; Order matters: stddef and stdint first, because every other file's types are
;;;; expressed in terms of size_t / ptrdiff_t / intN_t.

;;; foundation types
(import "./stddef.lisp")
(import "./stdint.lisp")
(import "./stdbool.lisp")
(import "./stdarg.lisp")

;;; limits
(import "./limits.lisp")
(import "./float.lisp")

;;; core library
(import "./stdio.lisp")
(import "./stdlib.lisp")
(import "./string.lisp")
(import "./ctype.lisp")
(import "./errno.lisp")
(import "./assert.lisp")

;;; numerics
(import "./math.lisp")
(import "./fenv.lisp")
(import "./inttypes.lisp")

;;; time and locale
(import "./time.lisp")
(import "./locale.lisp")

;;; control flow
(import "./signal.lisp")
(import "./setjmp.lisp")

;;; wide characters
(import "./wchar.lisp")
(import "./wctype.lisp")
