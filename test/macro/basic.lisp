;;;; macros inclusion
;;; macros are defined outside of targets
(DEFMACRO simple-equal (a b)
  `(== ,a ,b))

;;; all macros inside this file will be registered for the specified namespace (the second argument)
;;; all other arguments will be sent to init function if exists and exported from specified package
(import "bi-helper.lisp" :bi "an initiation arg")
;;; nil as namespace means CL-USER
(import "helper.lisp" nil '(1 3 7 10))

(source "basic-macro.c" (:std #t :compile #t :link #t)
        (include-helpers-files)
        
        (main
         (printf "are equal 3 == 3: %d\n" (simple-equal 3 3))
         (printf "are equal 3 == (+ 1 2): %d\n" (simple-equal 3 (+ 1 2)))

         (let ((int array [5] . '{ 1 3 2 5 4 }))
           (bi.for-each ; bi macros namespace
               i it array 5
               (set (nth i array) (+ (nth i array) 10))
               (for-each ; without namespace means CL-USER
                   j jt array 5
                   (printf "i: %d it: %d, j: %d jt: %d\n" i (cof it) j (cof jt)))))

         (when #t (format #t "when was true\n"))
         (unless #f (format #f "unless was false\n"))
         (format stdout "result from progn %d\n" (progn (* 4 5))) ; returns last form
         (format stderr "result from progn let %d\n" (progn ; let inside progn returns last form
                                                       (let ((int x . 6)
                                                             (int y . 7))
                                                         (* x y))))
         (format #t "result from letn %d\n" (letn ((int x . 8) ; letn returns last form
                                                   (int y . 9))
                                              (* x y)))
         ))
