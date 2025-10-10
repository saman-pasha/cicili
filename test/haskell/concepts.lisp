
(source "concepts.c" (:std #t :compile #t :link "-L{$CCL} -lhaskell.o -L{$CWD} concepts.o -o main")
        (include "../../haskell.h")

        (generic decl-reduce (a)
                 
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

        (decl-reduce char)
        
        (main
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

            ))
