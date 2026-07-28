;;;; Cicili declarations for the common POSIX headers
;;;;
;;;; Aggregator. Import this from lib/std/prelude.lisp, after ./c/c.lisp:
;;;;
;;;;     (import "./c/c.lisp")
;;;;     (import "./c/posix.lisp")
;;;;
;;;; Or import only what you need:
;;;;
;;;;     (import "./c/posix/sys-types.lisp")
;;;;     (import "./c/posix/unistd.lisp")
;;;;
;;;; These files depend on ./c/c.lisp for size_t, time_t, timespec and sigset_t,
;;;; so import c.lisp (or at least stddef.lisp, time.lisp and signal.lisp) first.
;;;;
;;;; Nothing here emits C. Keep using (include <unistd.h>) etc. in your target,
;;;; and link what you need (-lpthread, -ldl, ...).

;;; foundation types -- everything else uses these
(import "./posix/sys-types.lisp")

;;; files and directories
(import "./posix/unistd.lisp")
(import "./posix/fcntl.lisp")
(import "./posix/sys-stat.lisp")
(import "./posix/dirent.lisp")

;;; processes and time
(import "./posix/sys-wait.lisp")
(import "./posix/sys-time.lisp")

;;; multiplexing
(import "./posix/poll.lisp")

;;; memory and dynamic loading
(import "./posix/sys-mman.lisp")
(import "./posix/dlfcn.lisp")

;;; networking
(import "./posix/socket.lisp")
(import "./posix/netdb.lisp")

;;; threads -- the ergonomic macro layer lives in lib/std/pthread/pthread.lisp
(import "./posix/pthread.lisp")
