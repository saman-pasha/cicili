(in-package :cl-user)

(require "asdf")

;;; The following lines added by ql:add-to-init-file:
#-quicklisp
(let ((quicklisp-init (merge-pathnames "quicklisp/setup.lisp"
                                       (user-homedir-pathname))))
  (when (probe-file quicklisp-init)
    (load quicklisp-init)))

(asdf:load-system "cicili")

(cicili:load-macro-file "builtins.lisp")

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
                     ((string= arg "--debug")       (setf cicili:*debug*              t))
                     ((string= arg "--resolve")     (setf cicili:*debug-resolve*      t))
                     ((string= arg "--warn")        (setf cicili:*warn*               t))
                     ((string= arg "--verbose")     (setf cicili:*verbose*         "-v"))
                     ((string= arg "--macros")      (setf cicili:*debug-macros*       t))
                     ((string= arg "--macroexpand") (setf cicili:*debug-macroexpand*  t))
                     ((string= arg "--only-link")   (setf cicili:*only-link*          t))
                     (t (cicili:compile-cicili-file arg))))))
      (error (format nil "at least pass the cicili .lisp file to compile"))))
