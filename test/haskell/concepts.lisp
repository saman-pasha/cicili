
(import "haskell/applicative.lisp")

(source "concepts.c" (:std #t :compile #t :link "-L{$CCL} -lhaskell.o -L{$CWD} concepts.o -o main")
        (include "../../haskell.h")

        (generic define-reduce (a)
                 
                 (func (<> reduce (<> List a)) (((<> List a) list))
                       (io list
                         (* Cons head1 (= t * Cons head2 (* Cons head3 tail))
                            (block
                                (printf "%c%c%c " head1 head2 head3)
                              ((<> reduce (<> List a)) t)))
                         (* Cons head1 (= t * Cons head2 tail)
                            (block
                                (printf "%c%c " head1 head2)
                              ((<> reduce (<> List a)) t)))
                         (* Cons head tail
                            (block
                                (printf "%c " head)
                              ((<> reduce (<> List a)) tail)))))

                 ) ; decl-reduce

        (define-reduce char)

        (decl-Either String int)
        (define-Either String int)

        (func divideByZero ((int x) (int y))
              (out (<> Either String int))
              (if (== y 0)
                  (return ((<> Left String int) (new^String "zero division")))
                  (return ((<> Right String int) (/ x y)))))

        ;; (int -> int) -> Maybe int -> Maybe int
        (decl-Functor-Maybe Maybe^int^int int int)
        (define-Functor-Maybe Maybe^int^int int int)
        
        ;; Maybe (Functor (Maybe int) -> (Maybe int))
        (decl-Maybe Functor^Maybe^int^int)
        (define-Maybe Functor^Maybe^int^int)

        ;; Maybe (int -> int) -> Maybe int -> Maybe int
        (decl-Applicative-Maybe Maybe^int^int int int)
        (define-Applicative-Maybe Maybe^int^int int int)
        
        (main
            ;; test Rc
            ;; no needs to manage lists pointers
            ;; use clone Rc to clone each Rc you want to use anywhere
            ;; rc authority is the address who can clone or destroy the wrapped object 
            (rc ((rc0 Rc^List^int (new^List^int '{ 1 2 3 4 }))) ; has authority
              
              (letin* ((rc1 (clone^Rc^List^int rc0) free^Rc^List^int)) ; has authority
                
                ;; (let ((auto rc2 . rc1)) ; pointer copy access same rc
                ;;   ((<> free Rc List int) (aof rc2)))
                
                (format #t "list0:\n")
                (io (deref^Rc^List^int rc0) (_ list0 (show^List^int list0)))
                (putchar #\Newline)
                
                (format #t "list1:\n")
                (io (deref^Rc^List^int rc1) (_ list1 (show^List^int list1)))
                (putchar #\Newline)))

          ;; test Either
          ;; error case
          (io (divideByZero 34 0)
            (Left e (progn
                      (printf "error raised: ")
                      (show^String e)
                      (putchar #\Newline)
                      (free^String (aof e))))
            (Right a (printf "division result: %d\n" a)))

          ;; true case
          (io (divideByZero 34 2)
            (Left e (progn
                      (printf "error raised: ")
                      (show^String e)
                      (putchar #\Newline)
                      (free^String (aof e))))
            (Right a (printf "division result: %d\n" a)))

          ;; String is a List^char
          (letin ((* chrlst (new^String "Hello List!"))
                  (m0     (nth^List^char 3  chrlst))
                  (m1     (nth^List^char 15 chrlst)))

            (show^String chrlst)
            (putchar #\Newline)
            (reduce^List^char chrlst)
            (putchar #\Newline)
            
            (io m0
              (Just ch
                (format #t "4th element is: %c\n" ch))
              (Nothing (format #t "4th element is: Nothing\n")))
            (io m1
              (Just ch
                (format #t "16th element is: %c\n" ch))
              (Nothing (format #t "16th element is: Nothing\n")))
            )

          (format #t "Sum of List (mconcat) of '{ 1 3 5 7 } is: %d\n"
                  (match (get^Monoid^Sum^int)
                    (_ mappend mempty mconcat
                       (letin ((* l ((<> new List int) '{ 1 3 5 7 })))
                         (format #t "Sum mempty is: %d\n" mempty)
                         (format #t "left identity (%d 12) is: %d\n" mempty (mappend mempty 12))
                         (format #t "right identity (12 %d) is: %d\n" mempty (mappend 12 mempty))
                         (format #t "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n"
                                 (mappend 5 (mappend 7 12)) (mappend (mappend 5 7) 12))
                         (mconcat l)))
                    (default -1)))

          (format #t "Product of List (mconcat) of '{ 1 3 5 7 } is: %d\n"
                  (match (get^Monoid^Product^int)
                    (_ mappend mempty mconcat
                       (letin ((* l ((<> new List int) '{ 1 3 5 7 })))
                         (format #t "Product mempty is: %d\n" mempty)
                         (format #t "left identity (%d 12) is: %d\n" mempty (mappend mempty 12))
                         (format #t "right identity (12 %d) is: %d\n" mempty (mappend 12 mempty))
                         (format #t "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n"
                                 (mappend 5 (mappend 7 12)) (mappend (mappend 5 7) 12))
                         (mconcat l)))
                    (default -1)))

          (io (get^Monoid^Concat^List^int)
            (_ _ _ mconcat
               (letin* ((l1 ((<> new List int) '{ 1 3 5 }))
                        (l2 ((<> new List int) '{ 2 4 6 }))
                        (l3 ((<> new List int) '{ 7 8 9 })))
                 (letin ((* result (mconcat (new^List^List^int '{ l1 l2 l3 })))) ; mconcat uses appand function
                   (format #t "Concat of Lists (mconcat Monoid) of '{ 1 3 5 } and '{ 2 4 6 } and '{ 7 8 9 } is:\n")
                   (show^List^int result)
                   (putchar #\Newline)))))

          (io (get^Semigroup^Concat^String^char)
            (_ mappend
               (letin* ((s1 ((<> new String) "Hello "))
                        (s2 ((<> new String) "Cicili!")))
                 (letin ((* result (mappend s1 s2))) ; frees all at once because of using append they are chained together
                   (format #t "Concat of Strings (mappend Semigroup) of 'Hello ' and 'Cicili' is:\n")
                   (show^String result)
                   (putchar #\Newline)))))

          ;; using Functor datatype or fmap directly
          ;; apply irreducible function over list
          (letin* ((ftor_mul_5 (get^Functor^List^int^int  '(lambda ((int value)) (out int) (return (* 5 value)))))
                   (ftor_mod_3 (get^Functor^List^int^Bool '(lambda ((int value))
                                                            (out Bool)
                                                            (return (case (% value 3) (False)
                                                                          otherwise   (True)))))))
            
            (where ((fmap-mul-5 (\\ l (match ftor_mul_5 (_ fmap a_b (fmap a_b l)) (default (Empty^int)))))
                    (fmap-mod-3 (\\ l (match ftor_mod_3 (_ fmap a_b (fmap a_b l)) (default (Empty^Bool))))))
              
              (letin ((* l1 ((<> new List int) '{ 1 2 3 4 5 6 }))
                      ;; (int -> int) -> [int] -> [int]
                      (* r1 (fmap-mul-5 l1))
                      ;; (int -> Bool) -> [int] -> [Bool]
                      (* r2 (fmap-mod-3 r1))
                      ;; bad practice! the middle result won't be freed
                      ;; (* r3 ($> fmap-mod-3 ! fmap-mul-5 $ l1))
                      ;; right way is using curry lambda
                      (* r3 ($> (\\ inp (letin* ((strict_in inp free^List^int)) ; could be defined in where clause instead
                                          (fmap-mod-3 strict_in))) ; a lambda for composition to free middle pointer
                              ! fmap-mul-5 $ l1)))
                
                (format #t "fmap (*5) of { 1 2 3 4 5 6 } is:\n")
                (show^List^int r1)
                (putchar #\Newline)
                (format #t "fmap (%%3) of { 1 2 3 4 5 6 } is:\n")
                (show^List^Bool r2)
                (putchar #\Newline)
                (format #t "fmap (%%3) ! fmap (*5) of { 1 2 3 4 5 6 } is:\n")
                (show^List^Bool r3)
                (putchar #\Newline)

                (io (get^Monoid^All^Bool)
                  (_ _ _ mconcat 
                     (progn
                       (format #t "the result of 'All' monoid is: ")
                       (show^Bool (mconcat r3))
                       (putchar #\Newline))))

                (io (get^Monoid^Any^Bool)
                  (_ _ _ mconcat
                     (progn
                       (format #t "the result of 'Any' monoid is: ")
                       (show^Bool (mconcat r3))
                       (putchar #\Newline))))

                )))

          (letin* ((ftor_mul_15 (get^Functor^Maybe^int^int  '(lambda ((int value)) (out int) (return (* 15 value))))))
            (io (get^Applicative^Maybe^int^int)
              (_ pure ap
                 (io (ap (pure ftor_mul_15) (Just^int 12))
                   (Just output (format #t "the result of 'Applicative for Maybe (*15)' is: Just %d\n" output))
                   (default (format #t "the result of 'Applicative for Maybe (*15)' is: Nothing\n"))))))

          ))
