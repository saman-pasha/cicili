(in-package :cicili)

;; prints too many details about compiling ast
(defparameter *debug-ast* nil)
;; prints resolved members and methods
;; prints verbosity of compilation and link
(defparameter *verbose* "")
;; debug all loaded macros with namespace
(defparameter *debug-macros* nil)
;; debug macroexpand for all recognized macros
(defparameter *debug-macroexpand* nil)
;; supposed all header and source targets are compiled and only need to make binaries
(defparameter *only-link* nil)
;; writes each source in distinct .run#.c file --separate
(defparameter *debug-runs* nil)
;; prints output of c compiler dumps
(defparameter *debug-dump* nil)
;; enables syslog!, debug!, warn!, info! macros
;; syslog! 4, compiles all 4 levels into output code, Cicili core logs
;; debug!  3, compiles 3 levels into output code,     User logs
;; warn!   2, compiles only warn! and info! levels,   User logs
;; info!   1, compiles only info! level,              User logs
(defparameter *debug-warnings* 0)
;; --analyze
;; finds and prints haskell class and box instances where haven't been freed till the end of program
(defparameter *debug-analyze* nil)


;; --release picks the release toolset, anything else gets the debug one.
;; The flag is parsed on the command line AFTER this file loads, which is why
;; the toolset below is a FUNCTION and not a defparameter: a value frozen at
;; load time could not see it. That was already true of *verbose* -- --verbose
;; set it after *configs* had been built, so it never reached the compiler.
(defparameter *release* nil)

(format t "~&software type: ~S~%" (software-type))

;;;; os specific toolset, one set per build type.
;;;;
;;;; WHAT GOES IN `opt\' IS EVERY RELEASE BUILD\'S OPTIMISATION, so it is worth
;;;; saying what is deliberately NOT there:
;;;;
;;;;   -O3               in. The obvious one.
;;;;   -falign-loops=32  in. clang defaults loops to .p2align 4 -- sixteen
;;;;                     bytes -- and a ~52 byte loop landing 16 off a 32-byte
;;;;                     boundary spans three uop-cache windows instead of two.
;;;;                     Measured up to 20% on test/std/array.cicili, and it is
;;;;                     alignment only: it cannot change what the code does.
;;;;   -flto             OUT. Measured BOTH ways: it erased the rc penalty on
;;;;                     the vector benchmark (1104 -> 492 ms) and cost ~14% on
;;;;                     loops whose bounds check had already folded (452 ->
;;;;                     514). Not a default until that is understood; ask for
;;;;                     it per target.
;;;;   -ffast-math       OUT, and not negotiable as a default -- it changes
;;;;                     floating point results. The benchmarks opt in.
;;;;
;;;; A target\'s own :compile / :link arguments are appended AFTER these, and
;;;; for a repeated flag the last one wins, so a target asking for -O3
;;;; -ffast-math overrides the base without having to know what the base was.
(defun configs< ()
  (let* ((os  (software-type))
         (opt (if *release* (list "-O3" "-falign-loops=32") (list "-g" "-O0"))))
    (cond

      ((string= os "Linux")
       (list
        ;; C
        'dumper   '()
        'compiler `("libtool" "--tag=CC" "--mode=compile" "gcc" ,@opt ,*verbose*)
        'linker   `("libtool" "--tag=CC" "--mode=link"    "gcc" ,@opt ,*verbose*)
        ;; C++
        'cpp-dumper   '("")
        'cpp-compiler `("libtool" "--tag=CXX" "--mode=compile" "g++" ,@opt ,*verbose*)
        'cpp-linker   `("libtool" "--tag=CXX" "--mode=link"    "g++" ,@opt ,*verbose*)))

      ((string= os "Darwin")
       (list
        ;; C. clang by name rather than gcc: on macOS `gcc\' is only a shim over
        ;; clang, so naming it directly is what actually runs and keeps the
        ;; benchmark honest about the toolchain it measures.
        'dumper   '()
        'compiler `("glibtool" "--tag=CC" "--mode=compile" "clang" "-Werror" "-Wall" ,@opt ,*verbose*)
        'linker   `("glibtool" "--tag=CC" "--mode=link"    "clang" ,@opt ,*verbose*)
        ;; C++
        'cpp-dumper   '()
        'cpp-compiler `("glibtool" "--tag=CXX" "--mode=compile" "clang++" "-Werror" "-Wall" ,@opt ,*verbose*)
        'cpp-linker   `("glibtool" "--tag=CXX" "--mode=link"    "clang++" ,@opt ,*verbose*)))

      (t
       (list
        ;; C
        'dumper   '()
        'compiler `("libtool" "--tag=CC" "--mode=compile" "gcc" ,@opt ,*verbose*)
        'linker   `("libtool" "--tag=CC" "--mode=link"    "gcc" ,@opt ,*verbose*)
        ;; C++
        'cpp-dumper   '()
        'cpp-compiler `("libtool" "--tag=CXX" "--mode=compile" "g++" ,@opt ,*verbose*)
        'cpp-linker   `("libtool" "--tag=CXX" "--mode=link"    "g++" ,@opt ,*verbose*))))))
