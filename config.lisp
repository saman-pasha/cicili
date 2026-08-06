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
;;;; THE RELEASE SET IS DIFFERENT FOR C AND FOR C++, and the difference is one
;;;; flag:
;;;;
;;;;   C     -O3 -falign-loops=32
;;;;   C++   -O3
;;;;
;;;;   -O3               in, both. The obvious one.
;;;;   -falign-loops=32  C only. clang defaults loops to .p2align 4 -- sixteen
;;;;                     bytes -- and a ~52 byte loop landing 16 off a 32-byte
;;;;                     boundary spans three uop-cache windows instead of two.
;;;;                     Measured up to 20% on test/std/array.cicili, and it is
;;;;                     alignment only: it cannot change what the code does.
;;;;                     It is not in the C++ set because a C++ target here is a
;;;;                     libtorch target, where the loops that matter are inside
;;;;                     the library and were aligned when the library was
;;;;                     built -- so the flag moves nothing and only widens the
;;;;                     difference between what we compile and what we measure.
;;;;   -flto             OUT. Measured BOTH ways: it erased the rc penalty on
;;;;                     the vector benchmark (1104 -> 492 ms) and cost ~14% on
;;;;                     loops whose bounds check had already folded (452 ->
;;;;                     514). And against libtorch it links a binary that dies
;;;;                     in "Accessing empty ModuleHolder" for the conv net
;;;;                     while producing correct ones for the others, which is
;;;;                     worse than failing. Ask for it per target.
;;;;   -ffast-math       OUT, and not negotiable as a default -- it changes
;;;;                     floating point results. It also does not compile
;;;;                     against libtorch at all: activation.h negates
;;;;                     numeric_limits::infinity() for attention masking, and
;;;;                     -Wnan-infinity-disabled under -Werror rejects it.
;;;;
;;;; A target\'s own :compile / :link arguments are appended AFTER these, and
;;;; for a repeated flag the last one wins, so a target asking for -O3
;;;; -ffast-math overrides the base without having to know what the base was.
;;;;
;;;; WHICH IS WHY A BENCHMARK MUST BE BUILT WITH --release AND THE BENCHMARKS
;;;; NOW REFUSE OTHERWISE. benchmark/*.cicili carry `:compile #t\' -- no flags of
;;;; their own -- so without --release they are built at -g -O0 and every number
;;;; from them is meaningless. That is not a hypothetical: it is checkable by
;;;; rebuilding with --release and comparing the binary byte for byte, and the
;;;; benchmarks call (release-only) so the mistake cannot be made silently.
(defun configs< ()
  (let* ((os      (software-type))
         (opt     (if *release* (list "-O3" "-falign-loops=32") (list "-g" "-O0")))
         (cpp-opt (if *release* (list "-O3")                    (list "-g" "-O0"))))
    (cond

      ((string= os "Linux")
       (list
        ;; C
        'dumper   '()
        'compiler `("libtool" "--tag=CC" "--mode=compile" "gcc" ,@opt ,*verbose*)
        'linker   `("libtool" "--tag=CC" "--mode=link"    "gcc" ,@opt ,*verbose*)
        ;; C++
        'cpp-dumper   '("")
        'cpp-compiler `("libtool" "--tag=CXX" "--mode=compile" "g++" ,@cpp-opt ,*verbose*)
        'cpp-linker   `("libtool" "--tag=CXX" "--mode=link"    "g++" ,@cpp-opt ,*verbose*)))

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
        'cpp-compiler `("glibtool" "--tag=CXX" "--mode=compile" "clang++" "-Werror" "-Wall" ,@cpp-opt ,*verbose*)
        'cpp-linker   `("glibtool" "--tag=CXX" "--mode=link"    "clang++" ,@cpp-opt ,*verbose*)))

      (t
       (list
        ;; C
        'dumper   '()
        'compiler `("libtool" "--tag=CC" "--mode=compile" "gcc" ,@opt ,*verbose*)
        'linker   `("libtool" "--tag=CC" "--mode=link"    "gcc" ,@opt ,*verbose*)
        ;; C++
        'cpp-dumper   '()
        'cpp-compiler `("libtool" "--tag=CXX" "--mode=compile" "g++" ,@cpp-opt ,*verbose*)
        'cpp-linker   `("libtool" "--tag=CXX" "--mode=link"    "g++" ,@cpp-opt ,*verbose*))))))
