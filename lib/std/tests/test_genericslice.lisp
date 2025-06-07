(import "../Slice/generic.lisp")

(GenericSlice "" BorrowableSlice (void *) 16 NIL NIL NIL NIL)

(source "genericslice_test.c" (:std #t :compile #t
                                    :link "-L{$CWD} cicili_borrowableslice.o genericslice_test.o -o genericslice_test")
        (include "cicili_borrowableslice.h")

        (__GENERIC_SLICE_G_ int)
        
        (main
            (let ((int ** arr . #'(alloc 6 (sizeof int)))
                  (@BorrowableSlice * slice . #'(-> BorrowableSlice newFromArray
                                                    (cast (void **) arr) 6)))
              
              (-> slice (<> iterBorrowMut int)
                  '(lambda ((size_t index) (int * value))
                    (set (cof value) 3)))
              
              (-> slice (<> iterBorrow int)
                  '(lambda ((size_t index) (const int * value))
                    (format #t "the borrowed index: %lu, the borrowed value: %d\n" index (cof value))))

              (-> slice (<> borrowMut int)
                  2
                  '(lambda ((size_t index) (int * value))
                    (set (cof value) 12)))
              
              (-> slice (<> borrow int)
                  2
                  '(lambda ((size_t index) (const int * value))
                    (format #t "the borrowed index: %lu, the borrowed value: %d\n" index (cof value))))
              )))
