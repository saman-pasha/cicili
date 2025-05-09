(in-package :cicili)

;; prints too many details about compiling and resolving
(defparameter *debug* nil)
;; prints warning about symbols and function
(defparameter *warn* nil)
;; prints verbosity of compilation and link
(defparameter *verbose* "")
;; debug macroexpand for all recognized macros
(defparameter *macroexpand* nil)
;; debug all loaded macros with namespace
(defparameter *debug-macros* nil)

(format t "software type: ~S~%" (software-type))
;;;; os specific toolset
(defparameter *configs*
  (let ((os (software-type)))
    (cond 
      ((string= os "Linux") (list
                             'dumper   nil ; '("-Xclang" "-ast-dump")
                             'compiler `("libtool" "--tag=CC" "--mode=compile" "clang" "-g" "-O" *verbose*)
                             'linker   `("libtool" "--tag=CC" "--mode=link" "clang" "-g" "-O" *verbose*)))
      ((string= os "Darwin") (list
                              'dumper   nil ; '("-Xclang" "-ast-dump")
                              'compiler `("glibtool" "--tag=CC" "--mode=compile" "clang" "-g" "-O" *verbose*)
                              'linker   `("glibtool" "--tag=CC" "--mode=link" "clang" "-g" "-O" *verbose*)))
      (t (list
          'dumper   nil ; '("-Xclang" "-ast-dump")
          'compiler `("libtool" "--tag=CC" "--mode=compile" "clang" "-g" "-O" *verbose*)
          'linker   `("libtool" "--tag=CC" "--mode=link" "clang" "-g" "-O" *verbose*))))))
