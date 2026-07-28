;;;; Cicili declarations for <limits.h>
;;;; Import from lib/std/prelude.lisp:  (import "./c/limits.lisp")
;;;; Requires in target: (include <limits.h>)  or  (:std #t)
;;;;
;;;; Values are picked for a mainstream LP64 target (64-bit Linux/glibc,
;;;; `char` signed, `int` 32-bit, `long`/`long long` 64-bit). The macros
;;;; themselves are declared only for their *type*; the real value still
;;;; comes from the platform's real <limits.h> at compile time.

(DEFMACRO init-macro ()
  `($$$
     ;;; ---- widths ----
     (typedef int CHAR_BIT)      ; bits in a char, 8 on mainstream targets
     (typedef int MB_LEN_MAX)    ; max bytes in a multibyte character

     ;;; ---- char ----
     (typedef char  SCHAR_MIN)
     (typedef char  SCHAR_MAX)
     (typedef uchar UCHAR_MAX)
     (typedef char  CHAR_MIN)    ; plain `char` is signed on mainstream LP64
     (typedef char  CHAR_MAX)

     ;;; ---- short ----
     (typedef short  SHRT_MIN)
     (typedef short  SHRT_MAX)
     (typedef ushort USHRT_MAX)

     ;;; ---- int ----
     (typedef int  INT_MIN)
     (typedef int  INT_MAX)
     (typedef uint UINT_MAX)

     ;;; ---- long ----
     (typedef long  LONG_MIN)
     (typedef long  LONG_MAX)
     (typedef ulong ULONG_MAX)

     ;;; ---- long long ----
     (typedef llong  LLONG_MIN)
     (typedef llong  LLONG_MAX)
     (typedef ullong ULLONG_MAX)
     ))
