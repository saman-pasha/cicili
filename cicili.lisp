(in-package :cl-user)

(require "asdf")

;;; The following lines added by ql:add-to-init-file:
#-quicklisp
(let ((quicklisp-init (merge-pathnames "quicklisp/setup.lisp"
                                       (user-homedir-pathname))))
  (when (probe-file quicklisp-init)
    (load quicklisp-init)))

;; `--version' ANSWERS ON STDOUT AND NOTHING ELSE DOES, so a script reads
;; V=$(sbcl --script cicili.lisp --version) and gets a bare number. It is
;; answered HERE, before the system is loaded and the prelude read: asking
;; what this is must not cost a transpiler's startup, and the number comes
;; from cicili.asd's :version, which is the only place it is written.
(when (member "--version" (uiop:command-line-arguments) :test #'string=)
  (format t "~A~%" (asdf:component-version (asdf:find-system "cicili")))
  (uiop:quit 0))

;; error handling and debuging
(setf *print-pretty* t)
(setf *print-vector-length* 500)
;; DIAGNOSTICS GO TO STDERR. This line used to print on stdout, ahead of
;; everything a caller might want to read from there.
(format *error-output* "~&sbcl reserved memory size: ~D Bs~%" (sb-ext:dynamic-space-size))

(asdf:load-system "cicili")

(cicili:load-macro-file "builtins.cicili" nil () "CICILI")
(cicili:load-macro-file "cpp.cicili"      nil () "CICILI")
;; One prelude. The algebraic layer used to be a second load parked on this
;; line, because it defined `match' too and whichever loaded second won; it is
;; imported by the std prelude now and builtins' `match' dispatches on the
;; scrutinee, so there is nothing left to park.
(cicili:load-macro-file "lib/std/prelude.cicili" nil () "CICILI")

(let ((argv (uiop:command-line-arguments)))
  (if (> (length argv) 0)
      (progn
        (loop for arg in argv
              with argc = (length argv)
              for i from 1 to argc
              when (> i 0)
              do (progn
                   (format t "arg specified: ~A~%" arg)
                   (cond
                     ((string= arg "--debug-ast")   (setf cicili:*debug-ast*          t))
                     ((string= arg "--verbose")     (setf cicili:*verbose*         "-v"))
                     ((string= arg "--macros")      (setf cicili:*debug-macros*       t))
                     ((string= arg "--macroexpand") (setf cicili:*debug-macroexpand*  t))
                     ((string= arg "--only-link")   (setf cicili:*only-link*          t))
                     ((string= arg "--release")     (setf cicili:*release*            t))
                     ((string= arg "--separate")    (setf cicili:*debug-runs*         t))
                     ((string= arg "--dump")        (setf cicili:*debug-dump*         t))
                     ((string= arg "--syslog")      (setf cicili:*debug-warnings*     4))
                     ((string= arg "--debug")       (setf cicili:*debug-warnings*     3))
                     ((string= arg "--warn")        (setf cicili:*debug-warnings*     2))
                     ((string= arg "--info")        (setf cicili:*debug-warnings*     1))
                     ((string= arg "--no-debug")    (setf cicili:*debug-warnings*     0))
                     ((string= arg "--analyze")     (setf cicili:*debug-analyze*      t))
                     (t (cicili:compile-cicili-file arg))))))
      (error (format nil "at least pass the cicili .lisp file to compile"))))
