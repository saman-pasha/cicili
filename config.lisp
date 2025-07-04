(in-package :cicili)

;; prints too many details about compiling ast
(defparameter *debug* nil)
;; prints resolved members and methods
(defparameter *debug-resolve* nil)
;; prints warning about symbols and function
(defparameter *warn* nil)
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

(format t "software type: ~S~%" (software-type))
;;;; os specific toolset
(defparameter *configs*
  (let ((os (software-type)))
    (cond 
      ((string= os "Linux") (list
                             'dumper   nil ; '("-Xclang" "-ast-dump")
                             'compiler `("libtool" "--tag=CC" "--mode=compile"
                                                   "clang" "-g" "-O" "-ferror-limit=1000" *verbose*)
                             'linker   `("libtool" "--tag=CC" "--mode=link" "clang" "-g" "-O" *verbose*)))
      ((string= os "Darwin") (list
                              'dumper   '("-Xclang" "-ast-dump")
                              'compiler `("glibtool" "--tag=CC" "--mode=compile"
                                                     "clang" "-g" "-O" "-ferror-limit=1000" *verbose*)
                              'linker   `("glibtool" "--tag=CC" "--mode=link" "clang" "-g" "-O" *verbose*)))
      (t (list
          'dumper   nil ; '("-Xclang" "-ast-dump")
          'compiler `("libtool" "--tag=CC" "--mode=compile" "clang" "-g" "-O" *verbose*)
          'linker   `("libtool" "--tag=CC" "--mode=link" "clang" "-g" "-O" *verbose*))))))
