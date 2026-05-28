
(import "../../haskell/box.lisp")

(source "boxing.c" (:std #t :compile #t :link "-L{$CCL} -lhaskell.o -L{$CWD} boxing.o -o main")
        (include "../../haskell.h")

        ;; each item is Boxed inside a Cell data type
        (decl-box (List BoxedList)
          (= Cons (<> BoxedCons char)
             (char head)
             (BoxedList tail))
          (= Nil (<> BoxedNil char))
          (func drop ((int len) (BoxedList list)) (out BoxedList))
          (func show ((BoxedList list)))
          (func pure ((const char * buf) (char len)) (out BoxedList)))

        (impl-box (List BoxedList)
          (= Cons (<> BoxedCons char)
             (char head)
             (BoxedList tail))
          (= Nil (<> BoxedNil char))

          ;; drop returns a part of the main list
          ;; so if main list was freed then returned list shouldn't cause memory error
          ;; boxing keeps safe
          (func drop ((int len) (BoxedList list))
                (out BoxedList)
                (return (case (<= len 0) list
                              otherwise  (match# list
                                           (dead list) ; match box dead case, error handling
                                           (* Cons _ tail ((<> drop BoxedList) (-- len) tail))
                                           (default list)))))

          (func show ((BoxedList list))
                ;; (io ((<> get Box BoxedList) list)
                ;;   (Just unboxed -> unboxed
                ;;         (* Cons head tail
                ;;            (block (format #t "%c" head)
                ;;              ((<> show BoxedList) tail))))))
                ;; use io box instead of above
                (io# list
                  (dead (error! (format #t "string is dead!\n"))) ; in io box dead case is optional
                  (* Cons head tail
                     (block (format #t "%c" head)
                       ((<> show BoxedList) tail)))))

          (func pure ((const char * buf) (char len))
                (out BoxedList)
                (return (case (null buf) ((<> BoxedNil char))
                              otherwise  (letn ((char item . #'(cof buf)))
                                           (case (== len 0) ((<> BoxedNil char))
                                                 otherwise  ((<> BoxedCons char) item ((<> pure BoxedList) (++ buf) (-- len))))))))

          ;; free reciever of boxed types receives unboxed * type
          ;; this referes to unboxed * type
          (free (io this
                  (* Cons head tail
                     (block (format #t "f %c\n" head)
                       ;; tail is boxed so Box destructor is used
                       ((<> free Box BoxedList) &tail))))
            (free this))) ; this is allocated too

        (main (format #t "boxing test\n")

          (letin ((str ((<> pure BoxedList) "Cicili Boxing Model\n" 20))) ; will call destructor of Box deferment
            ((<> show BoxedList) str)
            ((<> show BoxedList) ((<> drop BoxedList) 7 str))
            
            ;; test free before show again
            ((<> free Box BoxedList) &str)

            (format #t "last Cell free is for Nil ctor of BoxedList!\n")
            (format #t "won't show string again! because is dead!\n")
            (format #t "deferred free is called\n")
            ((<> show BoxedList) ((<> drop BoxedList) 7 str)))
          
          )) ; boxing.c
