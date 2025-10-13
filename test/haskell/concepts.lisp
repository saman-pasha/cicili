
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

        ;; (int -> int) -> [int] -> [int]
        (decl-Functor (<> List int) (<> List int) int int)
        (define-Functor (<> List int) (<> List int) int int
                        (match input
                          (* _ head tail
                             ($> (<> Cons int)
                               (atob head)
                               ((<> fmap (<> List int) (<> List int)) atob tail)))
                          (default ((<> Empty int)))))
        
        ;; (int -> Bool) -> [int] -> [Bool]
        (decl-Functor (<> List int) (<> List Bool) int Bool)
        (define-Functor (<> List int) (<> List Bool) int Bool
                        (match input
                          (* _ head tail
                             ($> (<> Cons Bool)
                               (atob head)
                               ((<> fmap (<> List int) (<> List Bool)) atob tail)))
                          (default ((<> Empty Bool)))))
        
        (main
            ;; String is a List^char
            (letin ((chrlst (new^String "Hello List!" 11) free^List^char)
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
                       (letin ((l ((<> new List int) '{ 1 3 5 7 }) free^List^int))
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
                       (letin ((l ((<> new List int) '{ 1 3 5 7 }) free^List^int))
                         (format #t "Product mempty is: %d\n" mempty)
                         (format #t "left identity (%d 12) is: %d\n" mempty (mappend mempty 12))
                         (format #t "right identity (12 %d) is: %d\n" mempty (mappend 12 mempty))
                         (format #t "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n"
                                 (mappend 5 (mappend 7 12)) (mappend (mappend 5 7) 12))
                         (mconcat l)))
                    (default -1)))

          (io (get^Monoid^Concat^List^int)
            (_ _ _ mconcat
               (letin ((l1 ((<> new List int) '{ 1 3 5 }) free^List^int)
                       (l2 ((<> new List int) '{ 2 4 6 }) free^List^int)
                       (l3 ((<> new List int) '{ 7 8 9 }) free^List^int))
                 (format #t "Concat of Lists (mconcat Monoid) of '{ 1 3 5 } and '{ 2 4 6 } and '{ 7 8 9 } is:\n")
                 (show^List^int (mconcat (new^List^List^int '{ l1 l2 l3 })))
                 (putchar #\Newline))))

          (io (get^Semigroup^Concat^String^char)
            (_ mappend
               (letin ((s1 ((<> new String) "Hello ") free^String)
                       (s2 ((<> new String) "Cicili") free^String))
                 (format #t "Concat of Strings (mappend Semigroup) of 'Hello ' and 'Cicili' is:\n")
                 (show^String (mappend s1 s2))
                 (putchar #\Newline))))

          (letin ((l1 ((<> new List int) '{ 1 2 3 4 5 6 }) free^List^int)

                  (r1 ((<> fmap (<> List int) (<> List int))
                       '(lambda ((int v))
                         (out int)
                         (return (* v 3)))
                       l1)
                    free^List^int)
                  
                  (r2 ((<> fmap (<> List int) (<> List Bool))
                       '(lambda ((int v))
                         (out Bool)
                         (return
                           (case (% v 2)   (False)
                                 otherwise (True))))
                       r1)
                    free^List^Bool))
            
            (format #t "fmap (*3) of { 1 2 3 4 5 6 } is:\n")
            (show^List^int r1)
            (putchar #\Newline)
            (format #t "fmap (%%2) . fmap (*3) of { 1 2 3 4 5 6 } is:\n")
            (show^List^Bool r2)
            (putchar #\Newline))

            ))
