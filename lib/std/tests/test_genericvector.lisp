(import "../Vector/generic.lisp")

(source "genericvector_test.c" (:std #t :compile #t
                                     :link "-L{$CWD}../Vector -lcicili_borrowablevector.o genericvector_test.o -o genericvector_test")

        (include "./../Vector/cicili_borrowablevector.h")

        (__GENERIC_VECTOR_G_ BorrowableVector int)
        
        (main
            (let ((int ** arr . #'(alloc 6 (sizeof int)))
                  (@BorrowableVector * vector . #'(-> BorrowableVector newFromArray
                                                    (cast (void **) arr) 6)))
              
              (-> vector (<> iterBorrowMut int)
                  '(lambda ((size_t index) (int * value))
                    (set (cof value) 3)))
              
              (-> vector (<> iterBorrow int)
                  '(lambda ((size_t index) (const int * value))
                    (format #t "the borrowed index: %lu, the borrowed value: %d\n" index (cof value))))

              (-> vector (<> borrowMut int)
                  2
                  '(lambda ((size_t index) (int * value))
                    (set (cof value) 12)))
              
              (-> vector (<> borrow int)
                  2
                  '(lambda ((size_t index) (const int * value))
                    (format #t "the borrowed index: %lu, the borrowed value: %d\n" index (cof value))))
              )))
