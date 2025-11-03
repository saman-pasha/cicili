
(import "haskell/monad.lisp")

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


        ;; ap List
        ;; List ((List int) -> (List int))
        (decl-Maybe Functor^List^int^int^a_b_t)
        (impl-Maybe Functor^List^int^int^a_b_t)

        (decl-List List^Functor^List^int^int^a_b_t Functor^List^int^int^a_b_t)
        (impl-List List^Functor^List^int^int^a_b_t Functor^List^int^int^a_b_t (\\ v (printf "%p" v)))
        (import-List new^List^Functor^List^int^int^a_b_t List^Functor^List^int^int^a_b_t Functor^List^int^int^a_b_t)

        ;; List (int -> int) -> List int -> List int
        (decl-Applicative-List List^int^int int int)
        (impl-Applicative-List List^int^int int int)


        ;; ap Maybe
        ;; fmap :: (int -> int) -> Maybe int -> Maybe int
        (decl-Functor-Maybe Maybe^int^int int int)
        (impl-Functor-Maybe Maybe^int^int int int)

        ;; Maybe ((Maybe int) -> (Maybe int))
        (decl-Maybe Functor^Maybe^int^int^a_b_t)
        (impl-Maybe Functor^Maybe^int^int^a_b_t)

        ;; Maybe (int -> int) -> Maybe int -> Maybe int
        (decl-Applicative-Maybe Maybe^int^int int int)
        (impl-Applicative-Maybe Maybe^int^int int int)

        
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
              (Nothing (format #t "16th element is: Nothing\n"))))

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

          ;; use mempty, mappend, mconcat without get datatype
          (letin* ((l1 ((<> new List int) '{ 1 3 5 }))
                   (l2 ((<> new List int) '{ 2 4 6 }))
                   (l3 ((<> new List int) '{ 7 8 9 }))
                   (l4 ((<> new List List int) '{ l1 l2 l3 })))
            (letin ((* result (mconcat^List^int l4))) ; mconcat uses appand function
              (format #t "Concat of Lists (mconcat Monoid) of '{ 1 3 5 } and '{ 2 4 6 } and '{ 7 8 9 } is:\n")
              (show^List^int result)
              (putchar #\Newline)))

          (io (get^Semigroup^String^char)
            (_ mappend
               (letin* ((s1 ((<> new String) "Hello "))
                        (s2 ((<> new String) "Cicili!")))
                 (letin ((* result (mappend s1 s2))) ; frees all at once because of using append they are chained together
                   (format #t "Concat of Strings (mappend Semigroup) of 'Hello ' and 'Cicili' is:\n")
                   (show^String result)
                   (putchar #\Newline)))))

          ;; using Functor datatype or fmap directly
          ;; apply irreducible function over list
          (letin* ((ftor_mul_5 (get^Functor^List^int^int))
                   (ftor_mod_3 (get^Functor^List^int^Bool)))
            
            (where ((fmap-mul-5 (\\ l ((\. fmap (aof ftor_mul_5))
                                       '(lambda ((int value)) (out int) (return (* 5 value)))
                                       l)))
                    (fmap-mod-3 (\\ l ((\. fmap (aof ftor_mod_3))
                                       '(lambda ((int value))
                                         (out Bool)
                                         (return (case (% value 3) (False)
                                                       otherwise   (True))))
                                       l)))
                    ;; use instance directly
                    (fmap-mul-5P (fmap^List^int^int  (\\ value (* 5 value))))
                    (fmap-mod-3P (fmap^List^int^Bool (\\ value (case (% value 3) (False)
                                                                     otherwise   (True))))))
              
              (letin ((* l1 ((<> new List int) '{ 1 2 3 4 5 6 }))
                      ;; (int -> int) -> [int] -> [int]
                      (* r1 (fmap-mul-5 l1))
                      ;; (int -> Bool) -> [int] -> [Bool]
                      (* r2 (fmap-mod-3 r1))
                      ;; bad practice! the middle result won't be freed
                      ;; (* r3 ($> fmap-mod-3 ! fmap-mul-5 $ l1))
                      ;; right way is using curry lambda
                      (* r3 ($> (\\ inp (letin* ((strict_in inp free^List^int)) ; could be defined in where clause instead
                                          (fmap-mod-3P strict_in))) ; a lambda for composition to free middle pointer
                              ! fmap-mul-5P $ l1)))
                
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
                ;; other way access to mconcat for a type
                (format #t "the result of 'Any' monoid is: ")
                (show^Bool (mconcat^Any^Bool r3))
                (putchar #\Newline))))

          (letin* ((mul_15 '(lambda ((int value)) (out int) (return (* 15 value)))))
            (io (get^Applicative^Maybe^int^int)
              (_ pure ap
                 (io (ap (pure mul_15) (Just^int 12))
                   (Just output (format #t "the result of 'Applicative for Maybe (*15) (Just 12)' is: Just %d\n" output))
                   (default (format #t "the result of 'Applicative for Maybe (*15) (Just 12)' is: Nothing\n")))))
            ;; easy access to ap 'tie-fighter'
            (letin* ((wrapped (pure^Maybe^int^int mul_15)))
              (io ($> ap^Maybe^int^int wrapped (Just^int 12))
                (Just output (format #t "the result of easy 'Applicative for Maybe (*15) (Just 12)' is: Just %d\n" output))
                (default (format #t "the result of easy 'Applicative for Maybe (*15) (Just 12)' is: Nothing\n")))
              (io ($> ap^Maybe^int^int wrapped (Nothing^int))
                (Just output (format #t "the result of easy 'Applicative for Maybe (*15) Nothing' is: Just %d\n" output))
                (default (format #t "the result of easy 'Applicative for Maybe (*15) Nothing' is: Nothing\n")))))

          ;; test applicative over List
          (where ((fmap-mul-3 '(lambda ((int value)) (out int) (return (* 3 value))))
                  (fmap-add-4 '(lambda ((int value)) (out int) (return (+ 4 value)))))
              
            (letin ((* lf  (new^List^Functor^List^int^int^a_b_t '{ fmap-mul-3 fmap-add-4 }))
                    (* li  ((<> new List int) '{ 1 2 3 4 5 6 }))
                    (* afi ($> (<> ap List int int) lf li)))
                
                (format #t "applicative [(*3) (+4)] of { 1 2 3 4 5 6 } is:\n")
                (show^List^int afi)
                (putchar #\Newline)))

          ))
