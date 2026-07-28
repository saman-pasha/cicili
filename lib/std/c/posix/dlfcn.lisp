;;;; Cicili declarations for <dlfcn.h>
;;;; Import from lib/std/prelude.lisp:  (import "./c/posix/dlfcn.lisp")
;;;; Requires in target: (include <dlfcn.h>)  or  (:std #t)

(DEFMACRO init-macro ()
  `($$$
     ;;; ---- constants: dlopen() mode flags ----
     (typedef int RTLD_LAZY)
     (typedef int RTLD_NOW)
     (typedef int RTLD_GLOBAL)
     (typedef int RTLD_LOCAL)
     (typedef int RTLD_NODELETE)
     (typedef int RTLD_NOLOAD)

     ;;; ---- constants: dlsym() pseudo-handles ----
     (typedef void * RTLD_DEFAULT)
     (typedef void * RTLD_NEXT)

     ;;; ---- functions ----
     (decl) (func dlopen  ((const char * filename) (int flags)) (out void *))
     (decl) (func dlsym   ((void * restrict handle) (const char * restrict symbol)) (out void *))
     (decl) (func dlclose ((void * handle)) (out int))
     (decl) (func dlerror () (out char *))
     ))
