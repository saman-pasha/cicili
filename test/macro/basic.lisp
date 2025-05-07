;;;; macros are defined outside of targets
(DEFMACRO simple-equal (a b)
  `(== ,a ,b))

;;;; cicili file contains many useful macros
(import "builtins.lisp" "cicili")

(source "basic-macro.c" (:std #t :compile #t :link #t)
        (func main ()
              (printf "are equal 3 == 3: %d\n" (simple-equal 3 3))
              (printf "are equal 3 == (+ 1 2): %d\n" (simple-equal 3 (+ 1 2)))

              (let ((int array [5] . '{ 1 3 2 5 4 }))
                (for-each
                    i it array 5
                    (for-each
                        j jt array 5
                        (printf "i: %d it: %d, j: %d jt: %d\n" i (cof it) j (cof jt)))))
        ))
