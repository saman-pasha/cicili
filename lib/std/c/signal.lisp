;;;; Cicili declarations for <signal.h>
;;;; Import from lib/std/prelude.lisp:  (import "./c/signal.lisp")
;;;; Requires in target: (include <signal.h>)  or  (:std #t)
;;;;
;;;; pid_t is declared by sys-types.lisp and is only used (not repeated) here.
;;;;
;;;; The `sighandler_t` / `sig_t` function-pointer typedef (a name for the
;;;; type `void (*)(int)`) is not expressible in this grammar -- there is no
;;;; way to spell a *named* function-pointer type alias, only function-pointer
;;;; *parameters* inline on a `func` form -- so it is skipped here. `signal`
;;;; below spells its handler argument out inline instead, per the spec.

(DEFMACRO init-macro ()
  `($$$
     ;;; ---- types ----
     (typedef int sig_atomic_t)
     (decl) (struct sigset_t)                     ; opaque

     ;;; ---- constants: dispositions (really function pointers) ----
     (typedef int SIG_DFL)                        ; really (void (*)(int))
     (typedef int SIG_IGN)                         ; really (void (*)(int))
     (typedef int SIG_ERR)                         ; really (void (*)(int))

     ;;; ---- constants: signals ----
     (typedef int SIGABRT)
     (typedef int SIGALRM)
     (typedef int SIGBUS)
     (typedef int SIGCHLD)
     (typedef int SIGCONT)
     (typedef int SIGFPE)
     (typedef int SIGHUP)
     (typedef int SIGILL)
     (typedef int SIGINT)
     (typedef int SIGKILL)
     (typedef int SIGPIPE)
     (typedef int SIGQUIT)
     (typedef int SIGSEGV)
     (typedef int SIGSTOP)
     (typedef int SIGTERM)
     (typedef int SIGTSTP)
     (typedef int SIGTTIN)
     (typedef int SIGTTOU)
     (typedef int SIGUSR1)
     (typedef int SIGUSR2)
     (typedef int SIGPROF)
     (typedef int SIGSYS)
     (typedef int SIGTRAP)
     (typedef int SIGURG)
     (typedef int SIGVTALRM)
     (typedef int SIGXCPU)
     (typedef int SIGXFSZ)
     (typedef int SIGWINCH)

     ;;; ---- constants: sigprocmask() how ----
     (typedef int SIG_BLOCK)
     (typedef int SIG_UNBLOCK)
     (typedef int SIG_SETMASK)

     ;;; ---- struct sigaction (named sigaction_t here: `sigaction` is also a function) ----
     (decl) (struct sigaction_t                   ; C spelling is `struct sigaction`; see README
              (member void * sa_handler)           ; really void (*)(int)
              (member sigset_t sa_mask)
              (member int sa_flags))

     ;;; ---- functions ----
     (decl) (func signal ((int sig) (func handler ((int signum)))) (out void *)) ; really returns void (*)(int)
     (decl) (func raise  ((int sig)) (out int))
     (decl) (func kill   ((pid_t pid) (int sig)) (out int))                             ; POSIX

     (decl) (func sigaction   ((int sig) (const sigaction_t * restrict act) (sigaction_t * restrict oact)) (out int)) ; POSIX
     (decl) (func sigemptyset ((sigset_t * set)) (out int))                             ; POSIX
     (decl) (func sigfillset  ((sigset_t * set)) (out int))                             ; POSIX
     (decl) (func sigaddset   ((sigset_t * set) (int signo)) (out int))                 ; POSIX
     (decl) (func sigdelset   ((sigset_t * set) (int signo)) (out int))                 ; POSIX
     (decl) (func sigismember ((const sigset_t * set) (int signo)) (out int))           ; POSIX
     (decl) (func sigprocmask ((int how) (const sigset_t * restrict set) (sigset_t * restrict oset)) (out int)) ; POSIX
     (decl) (func sigpending  ((sigset_t * set)) (out int))                             ; POSIX
     (decl) (func sigsuspend  ((const sigset_t * sigmask)) (out int))                   ; POSIX
     (decl) (func sigwait     ((const sigset_t * restrict set) (int * restrict sig)) (out int)) ; POSIX
     (decl) (func alarm       ((uint seconds)) (out uint))                              ; POSIX
     (decl) (func pause       () (out int))                                             ; POSIX
     ))
