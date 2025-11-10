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

(format t "~&software type: ~S~%" (software-type))
;;;; os specific toolset
(defparameter *configs*
  (let ((os (software-type)))
    (cond
      
      ((string= os "Linux") (list
                             ;; C
                             'dumper   '("-Xclang" "-ast-dump")
                             'compiler `("libtool" "--tag=CC" "--mode=compile"
                                                   "clang" "-g" "-O" "-ferror-limit=1000" *verbose*)
                             'linker   `("libtool" "--tag=CC" "--mode=link" "clang" "-g" "-O" *verbose*)
                             ;; C++
                             'cpp-dumper   '("-Xclang" "-ast-dump")
                             'cpp-compiler `("libtool" "--tag=CXX" "--mode=compile"
                                                       "clang" "-g" "-O" "-ferror-limit=1000" *verbose*)
                             'cpp-linker   `("libtool" "--tag=CXX" "--mode=link" "clang" "-g" "-O" *verbose*)))
      
      ((string= os "Darwin") (list
                              ;; C
                              ;; gcc
                              'dumper   '()
                              'compiler `("glibtool" "--tag=CC" "--mode=compile"
                                                     "gcc" "-g" "-O" "-Wno-incompatible-pointer-types" *verbose*)
                              'linker   `("glibtool" "--tag=CC" "--mode=link" "gcc" "-g" "-O" *verbose*)

                              ;; ;; clang
                              ;; 'dumper   '("-Xclang" "-ast-dump")
                              ;; 'compiler `("glibtool" "--tag=CC" "--mode=compile"
                              ;;                        "clang" "-g" "-O" "-ferror-limit=1000" *verbose*)
                              ;; 'linker   `("glibtool" "--tag=CC" "--mode=link" "clang" "-g" "-O" *verbose*)

                              ;; C++
                              'cpp-dumper   '("-Xclang" "-ast-dump")
                              'cpp-compiler `("glibtool" "--tag=CXX" "--mode=compile"
                                                         "clang" "-g" "-O" "-ferror-limit=1000" *verbose*)
                              'cpp-linker   `("glibtool" "--tag=CXX" "--mode=link" "clang" "-g" "-O" *verbose*)))
      
      (t (list
          ;; C
          'dumper   '("-Xclang" "-ast-dump")
          'compiler `("libtool" "--tag=CC" "--mode=compile" "clang" "-g" "-O" *verbose*)
          'linker   `("libtool" "--tag=CC" "--mode=link" "clang" "-g" "-O" *verbose*)
          ;; C++
          'cpp-dumper   '("-Xclang" "-ast-dump")
          'cpp-compiler `("libtool" "--tag=CXX" "--mode=compile" "clang" "-g" "-O" *verbose*)
          'cpp-linker   `("libtool" "--tag=CXX" "--mode=link" "clang" "-g" "-O" *verbose*))))))
