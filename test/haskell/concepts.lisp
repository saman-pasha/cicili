
(source "concepts.c" (:std #t :compile #t :link "-L{$CCL} -lhaskell.o -L{$CWD} concepts.o -o main")
        (include "../../haskell.h")

        (generic define-reduce (a)
                 
                 (func (<> reduce (<> List a)) (((<> List a) * list))
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

                 (method ((<> List a) . show) ()
                         ((<> show (<> List a)) this))

                 ) ; decl-reduce

        (define-reduce char)
        
        (main
            ;; String is a List^char
            (letin ((chrlst (new^String "Hello List!" 11) free^List^char)
                    (m0     (nth^List^char 3  chrlst))
                    (m1     (nth^List^char 15 chrlst)))

              (show^String chrlst)
              (putchar #\Newline)
              (-> chrlst show)
              (putchar #\Newline)
              (reduce^List^char chrlst)
              (putchar #\Newline)
              
              (io m0
                (Just ch
                  (format #t "4th element is: %c\n" ch))
                (Nothing (format #t "16th element is: Nothing\n")))
              (io m1
                (Just ch
                  (format #t "16th element is: %c\n" ch))
                (Nothing (format #t "16th element is: Nothing\n")))
              )

          (format #t "Sum of List (mconcat) of '{ 1 3 5 7 } is: %d\n"
                  (match (get^Monoid^Sum^int)
                    (_ mempty mappend mconcat
                       (letin ((l ((<> new List int) '{ 1 3 5 7 })))
                         (format #t "mempty is: %d\n" mempty)
                         (format #t "left identity (%d 12) is: %d\n" mempty (mappend mempty 12))
                         (format #t "right identity (12 %d) is: %d\n" mempty (mappend 12 mempty))
                         (format #t "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n"
                                 (mappend 5 (mappend 7 12)) (mappend (mappend 5 7) 12))
                         (mconcat l)))
                    (default -1)))

          (format #t "Product of List (mconcat) of '{ 1 3 5 7 } is: %d\n"
                  (match (get^Monoid^Product^int)
                    (_ mempty mappend mconcat
                       (letin ((l ((<> new List int) '{ 1 3 5 7 })))
                         (format #t "mempty is: %d\n" mempty)
                         (format #t "left identity (%d 12) is: %d\n" mempty (mappend mempty 12))
                         (format #t "right identity (12 %d) is: %d\n" mempty (mappend 12 mempty))
                         (format #t "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n"
                                 (mappend 5 (mappend 7 12)) (mappend (mappend 5 7) 12))
                         (mconcat l)))
                    (default -1)))

            ))
