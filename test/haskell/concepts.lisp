
(source "concepts.c" (:std #t :compile #t :link "-L{$CCL} -lhaskell.o -L{$CWD} concepts.o -o main")
        (include "../../haskell.h")

        (generic decl-List (a)
                 ;; data List = Nothing | Just head tail
                 (struct (<> List a)
                   (member Maybe __h_ctor)
                   (union
                       (struct (declare Nothing))
                     (struct
                         (member a __h_0_mem)
                       (member (struct (<> List a)) * __h_1_mem)
                       (declare Just))
                     (declare __h_data)))

                 (func (<> Nothing (<> List a)) ()
                       (out (<> List a))
                       (return (cast (<> List a) '{
                                     $__h_ctor
                                     __h_Nothing_t
                                     $__h_data$Nothing
                                     '{ }
                                     })))
                 
                 (func (<> Just (<> List a)) ((a head) ((<> List a) * tail))
                       (out (<> List a))
                       (return (cast (<> List a) '{
                                     $__h_ctor
                                     __h_Just_t
                                     $__h_data$Just
                                     '{ $__h_0_mem head $__h_1_mem tail }
                                     })))

                 (func (<> new (<> List a)) ((const a * buf) (int len))
                       (out (<> List a))
                       (if (null buf)
                           (return ((<> Nothing (<> List a))))
                           (let ((a item . #'(cof buf)))
                             (if (== len 0)
                                 (return ((<> Nothing (<> List a))))
                                 (return ((<> Just (<> List a))
                                          item
                                          (letn (((<> List a) * elem . #'(malloc (sizeof (<> List a))))) 
                                            (set (cof elem) ((<> new (<> List a)) (++ buf) (-- len)))
                                            elem)))))))

                 (func (<> show (<> List a)) (((<> List a) * list))
                       (io list
                         (* Just head tail
                               (block
                                   (io tail
                                     (* Just
                                        (block
                                            (printf "%c" head)
                                          (putchar #\Space)))
                                     (default (printf "%c" head)))
                                 ((<> show (<> List a)) tail)))))

                 (func (<> reduce (<> List a)) (((<> List a) * list))
                       (io list
                         (* Just head1 (= t * Just head2 (* Just head3 tail))
                            (block
                                (printf "%c%c%c " head1 head2 head3)
                              ((<> reduce (<> List a)) t)))
                         (* Just head1 (= t * Just head2 tail)
                            (block
                                (printf "%c%c " head1 head2)
                              ((<> reduce (<> List a)) t)))
                         (* Just head tail
                            (block
                                (printf "%c " head)
                              ((<> reduce (<> List a)) tail)))))
                 
                 (func (<> release (<> List a)) (((<> List a) * list))
                       (io list
                         (* Just _ tail
                            (io tail
                              (* Just
                                 (block
                                     ((<> release (<> List a)) tail)
                                   (free list)))))
                         (* Nothing (free list))))

                 (func (<> free (<> List a)) (((<> List a) * list))
                       (io list
                         (* Just _ tail
                            ((<> release (<> List a)) tail))))
                 
                 )

        (decl-List char)
        
        (main
            (letin ((chrlst ((<> new (<> List char)) "Hello List!" 11) free^List^char))
              (show^List^char (aof chrlst))
              (putchar #\Newline)
              (reduce^List^char (aof chrlst))
              (putchar #\Newline)
              )

            ))
