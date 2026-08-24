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
        'compiler `("glibtool" "--tag=CC" "--mode=compile" "clang" ,@opt ,*verbose*) ; "-Werror" "-Wall" 
        'linker   `("glibtool" "--tag=CC" "--mode=link"    "clang" ,@opt ,*verbose*)
        ;; C++
        'cpp-dumper   '()
        'cpp-compiler `("glibtool" "--tag=CXX" "--mode=compile" "clang++" ,@cpp-opt ,*verbose*) ; "-Werror" "-Wall" 
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


;;;; ---------------------------------------------------------------------
;;;; Toolchain discovery -- {$PYTHON_INCLUDE} and friends
;;;;
;;;; WHY THIS EXISTS. Before it, every target that used Python, numpy or
;;;; libtorch carried the author's own absolute paths:
;;;;
;;;;     "-I/usr/local/opt/python@3.14/Frameworks/Python.framework/Versions/3.14/include/python3.14"
;;;;     "-I/usr/local/opt/numpy/lib/python3.14/site-packages/numpy/_core/include"
;;;;     "-L/usr/local/opt/pytorch/lib"
;;;;
;;;; which is not a path anybody else has. Eight examples in example/ were
;;;; written that way, so none of them built on any machine but one, and the
;;;; instruction in each header was to run three python3 -c commands by hand and
;;;; paste the answers in. That is the single largest thing standing between a
;;;; reader and a working numpy or torch program, and it is not a matter of
;;;; taste: the files were broken for everyone.
;;;;
;;;; So a target writes the token instead, and it is resolved here, on the
;;;; machine doing the building:
;;;;
;;;;     "-I{$PYTHON_INCLUDE}"  "-I{$NUMPY_INCLUDE}"
;;;;     "-L{$PYTHON_LIBDIR}"   "-l{$PYTHON_LIB}"
;;;;     "-I{$TORCH_INCLUDE}"   "-I{$TORCH_API_INCLUDE}"  "-L{$TORCH_LIBDIR}"
;;;;
;;;; The same shape as {$CCL} and {$CWD}, which target.lisp already substituted;
;;;; these join them rather than inventing a second convention.
;;;;
;;;; LAZY, AND CACHED. A token is resolved the first time one appears and not
;;;; before -- a C target that never mentions Python must not pay for a
;;;; subprocess, and a machine with no interpreter at all must still build
;;;; everything that does not ask for one. Resolution is per run, so a suite
;;;; costs one python3 call rather than one per target.
;;;;
;;;; ASKED, NOT GUESSED. The values come from sysconfig and numpy.get_include(),
;;;; which is what the READMEs already told the reader to do by hand. There is no
;;;; table of likely locations here, because a table is wrong on the machine it
;;;; has not met.
;;;;
;;;; AND IT SAYS SO WHEN IT CANNOT. A token that will not resolve is an error
;;;; naming the token, the command that failed and the environment variable that
;;;; overrides it. Falling back to a guess would turn a missing interpreter into
;;;; a compile error twenty lines further on, about a header.

(defvar *toolchain-cache* (make-hash-table :test 'equal))

(defun python-program< ()
  "The interpreter to ask. $PYTHON overrides, for a virtualenv or a second
version installed beside the system one."
  (or (uiop:getenv "PYTHON") "python3"))

(defun ask-python< (expression)
  "Answer what python3 prints for EXPRESSION, or NIL if it could not be asked.
One line, whitespace trimmed; an empty answer counts as no answer, since
sysconfig answers the empty string for a variable it does not have."
  (handler-case
      (let* ((out (with-output-to-string (s)
                    (uiop:run-program (list (python-program<) "-c" expression)
                                      :output s :error-output nil
                                      :ignore-error-status t)))
             (trimmed (string-trim '(#\Space #\Tab #\Newline #\Return) out)))
        (if (string= trimmed "") nil trimmed))
    (error () nil)))

(defun torch-root< ()
  "Where libtorch lives. $LIBTORCH or $TORCH_ROOT first -- that is a standalone
download, which has no interpreter to ask -- then the pip package, whose
directory IS the distribution: include/ and lib/ sit inside it."
  (or (uiop:getenv "LIBTORCH")
      (uiop:getenv "TORCH_ROOT")
      (ask-python< "import torch,os;print(os.path.dirname(torch.__file__))")))

(defun toolchain-value< (token)
  "Resolve one {$...} token, or NIL. Cached for the run."
  (multiple-value-bind (hit found) (gethash token *toolchain-cache*)
    (when found (return-from toolchain-value< hit))
    (let ((value
            (cond
              ((string= token "{$PYTHON_INCLUDE}")
               (ask-python< "import sysconfig;print(sysconfig.get_paths()['include'])"))
              ((string= token "{$PYTHON_LIBDIR}")
               (ask-python< "import sysconfig;print(sysconfig.get_config_var('LIBDIR'))"))
              ;; LDVERSION and not `python_version': it carries the ABI flags, so
              ;; a debug build is python3.11d and linking -lpython3.11 against it
              ;; fails at a stage that does not explain itself.
              ((string= token "{$PYTHON_LIB}")
               (let ((v (ask-python< "import sysconfig;print(sysconfig.get_config_var('LDVERSION'))")))
                 (and v (concatenate 'string "python" v))))
              ((string= token "{$NUMPY_INCLUDE}")
               (ask-python< "import numpy;print(numpy.get_include())"))
              ((string= token "{$TORCH_ROOT}") (torch-root<))
              ((string= token "{$TORCH_INCLUDE}")
               (let ((r (torch-root<))) (and r (concatenate 'string r "/include"))))
              ((string= token "{$TORCH_API_INCLUDE}")
               (let ((r (torch-root<)))
                 (and r (concatenate 'string r "/include/torch/csrc/api/include"))))
              ((string= token "{$TORCH_LIBDIR}")
               (let ((r (torch-root<))) (and r (concatenate 'string r "/lib"))))
              (t nil))))
      (setf (gethash token *toolchain-cache*) value)
      value)))

(defun toolchain-hint< (token)
  (cond
    ((str:starts-with-p "{$PYTHON" token)
     (format nil "no Python development files found. `~A' could not answer, or has no headers.~%~
                  Set $PYTHON to an interpreter that does -- a virtualenv's bin/python3 will do --~%~
                  or install your distribution's python3-dev package."
             (python-program<)))
    ((string= token "{$NUMPY_INCLUDE}")
     (format nil "numpy is not importable from `~A'. Install it (pip install numpy) or set $PYTHON~%~
                  to an interpreter that has it." (python-program<)))
    (t
     (format nil "libtorch was not found. Set $LIBTORCH to the directory holding include/ and lib/,~%~
                  or install the pip package (pip install torch) so `~A' can be asked where it is."
             (python-program<)))))

(defun toolchain-args< (args)
  "The name/value pairs replace-args< needs for whatever {$...} tokens actually
appear in ARGS. Nothing is resolved for a token nobody wrote."
  (let ((wanted '("{$PYTHON_INCLUDE}" "{$PYTHON_LIBDIR}" "{$PYTHON_LIB}"
                  "{$NUMPY_INCLUDE}" "{$TORCH_ROOT}" "{$TORCH_INCLUDE}"
                  "{$TORCH_API_INCLUDE}" "{$TORCH_LIBDIR}"))
        (pairs '()))
    (dolist (token wanted (nreverse pairs))
      (when (some #'(lambda (a) (and (stringp a) (search token a))) args)
        (let ((value (toolchain-value< token)))
          (unless value
            (error (format nil "~A cannot be resolved on this machine.~%~A" token
                           (toolchain-hint< token))))
          (push (list token value) pairs))))))
