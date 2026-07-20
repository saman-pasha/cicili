(in-package :cicili)

;; prints too many details about compiling ast
(defparameter *debug-ast* nil)
;; prints resolved members and methods
(defparameter *debug-resolve* nil)
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

(format t "~&software type: ~S~%" (software-type))
;;;; os specific toolset
(defparameter *configs*
  (let ((os (software-type)))
    (cond
      
      ((string= os "Linux")
       (list
        ;; C
        'dumper   '()
        'compiler `("libtool" "--tag=CC" "--mode=compile" "gcc" "-g" *verbose*)
        'linker   `("libtool" "--tag=CC" "--mode=link" "gcc" "-g" *verbose*)
        ;; C++
        'cpp-dumper   '("")
        'cpp-compiler `("libtool" "--tag=CXX" "--mode=compile" "g++" "-g" *verbose*)
        'cpp-linker   `("libtool" "--tag=CXX" "--mode=link" "g++" "-g" *verbose*)))
      
      ((string= os "Darwin")
       (list
        ;; C      /usr/local/bin/gcc-16 "-Wno-maybe-uninitialized" "-g"
        'dumper   '()
        'compiler `("glibtool" "--tag=CC" "--mode=compile" "gcc" "-Werror" "-Wall" "-Wno-shadow" *verbose*)
        'linker   `("glibtool" "--tag=CC" "--mode=link" "gcc" *verbose*)
        ;; C++
        'cpp-dumper   '()
        'cpp-compiler `("glibtool" "--tag=CXX" "--mode=compile" "g++" "-O3" "-Werror" *verbose*)
        'cpp-linker   `("glibtool" "--tag=CXX" "--mode=link" "g++" *verbose*)))
      
      (t (list
          ;; C
          'dumper   '()
          'compiler `("libtool" "--tag=CC" "--mode=compile" "gcc" "-g" *verbose*)
          'linker   `("libtool" "--tag=CC" "--mode=link" "gcc" "-g" *verbose*)
          ;; C++
          'cpp-dumper   '()
          'cpp-compiler `("libtool" "--tag=CXX" "--mode=compile" "g++" "-g" *verbose*)
          'cpp-linker   `("libtool" "--tag=CXX" "--mode=link" "g++" "-g" *verbose*))))))
