;;;; Cicili declarations for <float.h>
;;;; Import from lib/std/prelude.lisp:  (import "./c/float.lisp")
;;;; Requires in target: (include <float.h>)  or  (:std #t)
;;;;
;;;; Integer-valued macros (digit/exponent counts, mode flags) are typed
;;;; `int`; magnitude macros are typed `float`/`double`/`real` (Cicili's
;;;; `long double`) to match their C prefix. Values still come from the
;;;; platform's real <float.h> at compile time.

(DEFMACRO init-macro ()
  `($$$
     ;;; ---- radix and rounding ----
     (typedef int FLT_RADIX)        ; base of exponent representation, 2 on mainstream targets
     (typedef int FLT_ROUNDS)       ; current rounding mode
     (typedef int FLT_EVAL_METHOD)  ; evaluation method for intermediate results
     (typedef int DECIMAL_DIG)      ; decimal digits needed to round-trip through `real`

     ;;; ---- float ----
     (typedef int   FLT_MANT_DIG)
     (typedef int   FLT_DIG)
     (typedef int   FLT_MIN_EXP)
     (typedef int   FLT_MAX_EXP)
     (typedef int   FLT_MIN_10_EXP)
     (typedef int   FLT_MAX_10_EXP)
     (typedef int   FLT_DECIMAL_DIG)  ; C11
     (typedef int   FLT_HAS_SUBNORM)  ; C11
     (typedef float FLT_MAX)
     (typedef float FLT_MIN)
     (typedef float FLT_EPSILON)
     (typedef float FLT_TRUE_MIN)     ; C11

     ;;; ---- double ----
     (typedef int    DBL_MANT_DIG)
     (typedef int    DBL_DIG)
     (typedef int    DBL_MIN_EXP)
     (typedef int    DBL_MAX_EXP)
     (typedef int    DBL_MIN_10_EXP)
     (typedef int    DBL_MAX_10_EXP)
     (typedef int    DBL_DECIMAL_DIG)  ; C11
     (typedef int    DBL_HAS_SUBNORM)  ; C11
     (typedef double DBL_MAX)
     (typedef double DBL_MIN)
     (typedef double DBL_EPSILON)
     (typedef double DBL_TRUE_MIN)     ; C11

     ;;; ---- long double ----
     (typedef int  LDBL_MANT_DIG)
     (typedef int  LDBL_DIG)
     (typedef int  LDBL_MIN_EXP)
     (typedef int  LDBL_MAX_EXP)
     (typedef int  LDBL_MIN_10_EXP)
     (typedef int  LDBL_MAX_10_EXP)
     (typedef int  LDBL_DECIMAL_DIG)   ; C11
     (typedef int  LDBL_HAS_SUBNORM)   ; C11
     (typedef real LDBL_MAX)
     (typedef real LDBL_MIN)
     (typedef real LDBL_EPSILON)
     (typedef real LDBL_TRUE_MIN)      ; C11
     ))
