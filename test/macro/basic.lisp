;;;; macros are defined outside of targets
(DEFMACRO simple-equal (a b)
  `(== ,a ,b))

;;;; all macros inside this file will be registered for the specified namespace (the second argument)
;;;; all other arguments will be sent to init function if exists and exported from specified package
(import "bi-helper.lisp" :bi "an initiation arg")
;;;; nil as namespace means CL-USER
(import "helper.lisp" nil '(1 3 7 10))

(source "basic-macro.c" (:std #t :compile #t :link #t)
        (func main ()
              (printf "are equal 3 == 3: %d\n" (simple-equal 3 3))
              (printf "are equal 3 == (+ 1 2): %d\n" (simple-equal 3 (+ 1 2)))

              (let ((int array [5] . '{ 1 3 2 5 4 }))
                (bi.for-each ; bi namespace
                    i it array 5
                    (set (nth i array) (+ (nth i array) 10))
                    (for-each ; no namespace means CL-USER
                        j jt array 5
                        (printf "i: %d it: %d, j: %d jt: %d\n" i (cof it) j (cof jt)))))
        ))
