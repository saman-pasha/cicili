;;;; Cicili declarations for <sys/time.h>
;;;; Import from lib/std/prelude.lisp:  (import "./c/posix/sys-time.lisp")
;;;; Requires in target: (include <sys/time.h>)  or  (:std #t)
;;;;
;;;; time_t belongs to time.lisp and suseconds_t belongs to
;;;; posix/sys-types.lisp; both are only used (not repeated) here.
;;;; `struct timeval` has no C typedef, so it is referenced as
;;;; `struct timeval` at use sites, matching real C usage.

(DEFMACRO init-macro ()
  `($$$
     ;;; ---- types ----
     (decl) (struct timeval
              (member time_t      tv_sec)
              (member suseconds_t tv_usec))

     (decl) (struct itimerval
              (member timeval it_interval)
              (member timeval it_value))

     (decl) (struct fd_set)  ; opaque; fd_set has a real C typedef, referenced bare

     ;;; ---- constants: setitimer()/getitimer() which ----
     (typedef int ITIMER_REAL)
     (typedef int ITIMER_VIRTUAL)
     (typedef int ITIMER_PROF)

     ;;; ---- constants: select() ----
     (typedef int FD_SETSIZE)

     ;;; ---- time of day ----
     (decl) (func gettimeofday ((timeval * restrict tv) (void * restrict tz)) (out int)) ; tz obsolete
     (decl) (func settimeofday ((const timeval * tv) (const void * tz)) (out int))        ; tz obsolete

     ;;; ---- interval timers ----
     (decl) (func getitimer ((int which) (itimerval * curr_value)) (out int))
     (decl) (func setitimer ((int which) (const itimerval * restrict new_value) (itimerval * restrict old_value)) (out int))

     ;;; ---- file timestamps ----
     (decl) (func utimes  ((const char * filename) (const timeval * times)) (out int)) ; times is a 2-element array
     (decl) (func futimes ((int fd) (const timeval * times)) (out int))                 ; times is a 2-element array

     ;;; ---- synchronous I/O multiplexing ----
     (decl) (func select ((int nfds) (fd_set * restrict readfds) (fd_set * restrict writefds) (fd_set * restrict errorfds) (timeval * restrict timeout)) (out int))

     ;;; ---- fd_set manipulation (really C macros) ----
     (decl) (func FD_ZERO  ((fd_set * set)))                          ; really a macro
     (decl) (func FD_SET   ((int fd) (fd_set * set)))                 ; really a macro
     (decl) (func FD_CLR   ((int fd) (fd_set * set)))                 ; really a macro
     (decl) (func FD_ISSET ((int fd) (fd_set * set)) (out int))       ; really a macro
     ))
