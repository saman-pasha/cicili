
(source "basic.c" (:std #t :compile #t :link "-L{$CCL} -lhaskell.o -L{$CWD} basic.o -o main")
        (include "../../haskell.h")
        (include "math.h")
        
        ;; \ lambda calculus
        ;; outputs irreducible phrase
        (lambda l0 x
          (lambda l1 y
            (+ x y)))

        (fn add x y
            (+ x y))

        (lambda p0 x
          (lambda p1 y
            (lambda p2 z
              (+ x y z))))

        (fn fp0 x y z
            (+ x y z))

        ;; (a -> a -> a) -> a -> a -> a
        (lambda adder f
          (lambda adder_0 x
            (lambda adder_1 y
              ((f x) y))))

        (fn fadder f x y
            ((f x) y))

        (fn mul x y
            (* x y))

        (fn mult1 n
            (where ((m 2)
                    (f (\\ x y (* x y))))
              ((f m) n)))

        (generic specialize-power (a)
                 (func (<> power_irreducible a) ((a x) (a y))
                       (out a)
                       (return (cast a (pow (cast double x) (cast double y)))))
                 
                 (fn power0 x y
                     ((<> power_irreducible a) x y))

                 (fn power1 x y
                     (cast a (pow (cast double x) (cast double y))))

                 (fn power2 xp yp
                     ('(lambda ((a x) (a y))
                        (out a)
                        (return (cast a (pow (cast double x) (cast double y)))))
                       xp yp)))
        (specialize-power int)

        (decl-data Integer
          (Byte  (char  c))
          (Short (short s))
          (Int   (int   x)))
        (impl-data Integer
          (Byte  (char  c))
          (Short (short s))
          (Int   (int   x))
          (free  (io this ; default destructor, a body without arguments but 'this' instance pointer
                   (* Byte  c  (format #t "Integer was Byte:  %d\n" c))
                   (* Short s  (format #t "Integer was Short: %d\n" s))
                   (* Int   i  (format #t "Integer was Int:   %d\n" i)))))
        
        ;; shared function for haskell data type
        (func (<> show Integer) ((Integer self))
              (match self
                (Byte  c  (format #t "Integer is Byte: %d\n" c))
                (Short sh (format #t "Integer is Short: %d\n" sh))
                (Int   il <!> (< il 1000) (format #t "Integer is Int below 1000: %d\n" il))
                (Int   i <!> (and (>= i 1000) (< i 10000))
                       (format #t "Integer is Int between 1000 and 10000: %d\n" i))
                (default  (format #t "Integer is N/A\n"))))
        
        (decl-Maybe (<> Maybe char))
        (impl-Maybe (<> Maybe char))

        (func print_inside_maybe (((<> Maybe (<> Maybe char)) mb))
              (io mb
                (Nothing (format #t "wrapper Nothing Maybe char: Nothing\n"))
                (Just mc (io mc
                           (Nothing (format #t "wrapper Just Nothing char: Nothing\n"))
                           (Just c  (format #t "wrapper Just Just char: Just %c\n" c))))))

        (func print_inner_maybe (((<> Maybe (<> Maybe char)) imb))
              (io imb
                (Nothing           (format #t "inner Nothing Maybe char: Nothing\n"))
                (Just    (Nothing) (format #t "inner Just Nothing char: Nothing\n"))
                (Just    (Just c)  (format #t "inner Just Just char: Just %c\n" c))))

        (typedef (Tuple int char short) aTuple)
        
        (func print_tuple ((aTuple tup))
              (io tup
                ((\, i c s) <!> (> s 10) (format #t "tuple s > 10: int, char, short = (%d, %c, %d)\n" i c s))
                ((\, fi fc fs) (format #t "tuple: int, char, short = (%d, %c, %d)\n" fi fc fs))))

        (decl-Maybe aTuple)
        (impl-Maybe aTuple)

        (fn fun-with-guard x ; 3 different paths
            (case (== x 1)  (format #t "output of function guard1: %d\n" x)
                  (== x 2)  (format #t "output of function guard2: %d\n" x)
                  otherwise (format #t "output of function guard otherwise: %d\n" x)))

        ;; fn can't be recursive
        ;; instead use func
        (func factorial ((int n))
              (out int)
              (return (case (== n 1)  1
                            otherwise (* n (factorial (- n 1))))))

        (main (format #t "basic test\n")

          (format #t "output of lambda calculus: %d & %d\n" ((l0 2) 3) ((add 2) 3))
          (format #t "output of lambda calculus: %d\n" (((p0 2) 3) 4))

          (format #t "output of lambda closure: %d\n"  (((adder l0) 2) 3))
          (format #t "output of lambda closure: %d\n"  (((adder (p0 2)) 3) 4))

          (format #t "output of function closure: %d\n"  (((fadder add) 2) 3))
          (format #t "output of function closure: %d\n"  (((fadder (fp0 2)) 3) 4))

          (format #t "output of inline where: %d\n"
                  (where ((m 2)
                          (n 3)
                          (f (\\ x y (* x y))))
                    ((f m) n)))
          (format #t "output of where and closure: %d\n"
                  ((where ((m 2)
                           (f (\\ x y (* x y))))
                     (f m))
                   3))
          (format #t "output of function using where: %d\n" (mult1 3))

          (format #t "output of function application: %d\n" ($> mul 3 $ 4))
          (format #t "output of function application: %d\n" ($> mul 3 $ add 2 2))
          (format #t "output of function application: %d\n" ($> mul 3 $ add 2 $ (* 2 5)))

          (format #t "output of reducible function: %d\n" ($> power0 2 $ 16))
          (format #t "output of reducible function: %d\n" ($> power1 2 $ 16))
          (format #t "output of reducible function: %d\n" ($> power2 2 16))
          (format #t "output of reducible function: %d\n"
                  ($> (\\ xp yp
                          ('(lambda ((int x) (int y))
                             (out int)
                             (return (cast int (pow (cast double x) (cast double y)))))
                            xp yp))
                    2 16))
          (format #t "output of function closure with $>: %d\n"  ($> fadder add 2 $ 3))

          
          ;; (\ __h_!_arg595 ((mul 3) ((add 2) __h_!_arg595)))
          (where ((f (!> (mul 3) (add 2)))
                  (g ($> mul 3 ! add 2))) ; function composition
            (block ; unlike progn does not return anything just void like do returns IO in haskel
                (format #t "output of function composition1: %d\n" (f 5))
              (format #t "output of function composition2: %d\n" (g 5))
              (format #t "output of function composition3: %d\n" ($> (!> (mul 3) (add 2)) $ 5))                
              (format #t "output of function composition4: %d\n" ($> mul 3 ! add 2 $ 5))))

          (fun-with-guard 1)
          (fun-with-guard 2)
          (fun-with-guard 3)
          (format #t "factorial of: %d\n" (factorial 4))
          
          ((<> show Integer) (Byte  10))
          ((<> show Integer) (Short 20))
          ((<> show Integer) (Int   30))
          ((<> show Integer) (Int   2000))
          ((<> show Integer) (Int   20000))

          ;; letin will calls 'free' destructor automatically
          (letin ((b (Byte  11))
                  (s (Short 21))
                  (i (Int   31)))
            (printf "test destructure of Integer\n"))

          (let ((aTuple tup0 . '{ 4400 #\A 33 }) ; aTuple define by typedef 
                ((Tuple int char short) tup1 . '{ 4401 #\B 34 })
                (auto tup2 . #'(cast (Tuple int char short) '{ 4402 #\C 35 })))

            ;; Tuple
            (print_tuple tup0)
            (print_tuple (cast-tuple aTuple tup1)) ; use pointer or cast-tuple
            ($> (\\ tup
                    (match tup
                      ((\, i c s) <!> (> s 10) (format #t "tuple s > 10: int, char, short = (%d, %c, %d)\n" i c s))
                      ((\, fi fc fs) (format #t "tuple: int, char, short = (%d, %c, %d)\n" fi fc fs))
                      (default (format #t "No Tuple?!"))))
              tup2))

          (let ((auto m1 . #'((<> Nothing (<> Maybe char))))
                (auto m2 . #'((<> Just (<> Maybe char)) ((<> Nothing char))))
                (auto m3 . #'((<> Just (<> Maybe char)) ((<> Just char) #\G)))
                (auto m4 . #'((<> Just (<> Maybe char)) ((<> Just char) #\H))))
            (print_inside_maybe m1)
            (print_inside_maybe m2)
            (print_inside_maybe m3)
            (print_inner_maybe  m4))

          (io ((<> Just aTuple) (cast aTuple '{ 55 #\D 93 }))
            (Nothing (format #t "tuple inside maybe: Nothing"))
            (Just (= t (\, i c s))
              (io t
                ((\, ii cc ss)
                 (progn
                   (format #t "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n" i c s)
                   (format #t "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n" ii cc ss))))))
          
          (io ((<> Just aTuple) (cast aTuple '{ 56 #\E 94 }))
            (Nothing (format #t "ow tuple inside maybe: Nothing"))
            (Just (\, i c s)
              (format #t "ow tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n" i c s)))

          (letin* ((tt (cast (Tuple int Maybe^char) '{ 5060 (Just^char #\M) })))
            (io tt
              ((\, _ (Nothing)) (format #t "maybe inside tuple: Nothing\n"))
              ((\, i (Just c <!> (> c #\L)))
               (format #t "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n" i c))
              (= t (\, _ (Just cm <!> (< cm #\L)))
                 (io t
                   ((\, im (Just _))
                    (format #t "maybe inside tuple: (c < L) int, Just char: = (%d, %c)\n" im cm))))))
          
          ;; List
          ;; letin evalutes each var once
          ;; var, value, deferer optional, deferer must be a function where accepts pointer of type value
          (letin ((* txt (new^String "Haskell List")))

            (show txt) ; alias to (show^String txt)
            (putchar #\Newline)
            
            (format #t "output of printf match: %d\n"
                    ;; match returns a value and all values returned from each case must be the same type
                    (match ((<> nth String) 3 txt) ; ((\. nth txt) 3 txt)
                      (Just c  (format #t "the 4th element is: %c\n" c))
                      (default (format #t "4th element not found\n"))))

            (where ; where puts exactly the value of each var in place of it, and makes C functions Curry
                ((llen ((\.* len txt) txt)) ; (len txt)
                 (nthf (\\ n ((\.* nth txt) n txt))) ; nth function is reserved for access nth element of an array
                 (show (\\ f n (match (f n) ; lambda in place of declared show function
                                 (Just c  (format #t "the %dth element is: %c\n" n c))
                                 (default (format #t "%dth element not found\n" n))))))
              ;; where accepts only one clause not like letin
              (progn
                ($> show nthf $ 4)
                ($> show nthf $ 5)
                ($> show nthf $ 6)
                ($> show nthf $ llen))) ; n appears 3 times in show lambda so len^String will be called 3 times, bad way

            (format #t "output of letin: %d\n"
                    ;; use letin to prevent repeatition calls for every llen 
                    (letn ((auto llen . #'((\.* len txt) txt)))
                      (where
                          ((nthf (\\ n ((\.* nth txt) n txt))) ; !! nth lambdas to C function to use Curry style
                           (show (\\ f n (match (f n)
                                           (Just c  (format #t "the %dth element is: %c\n" n c))
                                           (default (format #t "%dth element not found\n" n))))))
                        (progn
                          ($> show nthf $ 4)
                          ($> show nthf $ 5)
                          ($> show nthf $ 6)
                          ($> show nthf $ llen)))))
            
            (io txt
              ;; access by path mode
              ;; * means Cons char ctor returns a pointer beacause Lists are classes
              ;; = str at first of any case makes an alias for whole object
              ;; _ for types with only one ctor, last ctor id '_' Default ctor
              (* Cons head tail
                 (format #t "first char is: %c, and length of tail is: %d\n"
                         head ((\.* len tail) tail))))
            
            ;; using list literal constructor
            (letin ((* str5 (new^String '{ #\C #\i #\c #\i #\l #\i })))
              (format #t "has 'Cicili' desired length 5: %d\n" ((\.+ hasLen String) str5 5))
              (format #t "has 'Cicili' desired length 6: %d\n" ((\<> hasLen String) str5 6))
              (format #t "has 'Cicili' desired length 7: %d\n" ((\.* hasLen str5)   str5 7))
              (io str5
                ((\: ch0 (* Cons ch1 (* Cons ch2 tail))) ; multi level inner destructuring
                 (block (format #t "fst snd trd chars and tail from String: %c, %c, %c, " ch0 ch1 ch2)
                   (show^String stdout tail)
                   (putchar #\Newline)))))

            ;; match should have default case
            ;; io can have default case like match
            ;; but io returns void therefor default case is optional
            (format #t "drop 10 of 'Haskell List'\n")
            (io ((\.* drop txt) 10 txt)
              ;; simplified list element access
              ;; (Nothing ^ String (format #t "Nothing String\n"))
              ((\: fst snd trd _) ; _ is tail, if _ be removed trd will be tail
               (format #t "first, second and third char from String: %c %c %c\n" fst snd trd))
              ((\: fst1 snd1 _) ; comment this case for test below case
               (format #t "first and second char from String: %c %c\n" fst1 snd1))
              ((\: fst21 (* Cons ch1 tail1)) ; inner destructuring same the above
               (format #t "first and second char from String: %c, %c, %p\n" fst21 ch1 tail1))
              ((\: fst3 _)
               (format #t "first char from String: %c\n" fst3))
              (default (format #t "default case String\n"))))
          
          ;; letin is only for data or class instantiation  
          (letin* ((intarr (cast (const int []) '{ 8 7 6 }))       ; pure c object could not be defined by normal letin
                   (ilist2 (new^List^int intarr 3) free^List^int)) ; * tells compiler the defined variable is a pointer
            (letin ((* ilist0 (new^List^int '{ 1 2 3 4 }))
                    (* ilist1 (push 5 ilist0))           ; \: 'push' is push^List^int to list function
                    (* ilist3 (append ilist2 ilist1))    ; ++ 'append' is append^List^int
                    (* ilist4 (take 5 ilist3)))          ; take creates a new list by copy of specified's elements
              (format #t "first elem of int list0: %d\n" (match ((\.* head ilist0) ilist0) (Just i i) (default -1)))
              (format #t "first elem of int list1: %d\n" (match ((\.* head ilist0) ilist1) (Just i i) (default -1)))
              (format #t "list0:\n")
              ((\.* show ilist0) stdout  ilist0)
              (format #t "\nlist1 push 5:\n")
              ((\.* show ilist0) stdout ilist1)
              (format #t "\nlist2:\n")
              ((\.* show ilist0) stdout ilist2)
              (format #t "\nlist3:\n")
              ((\.* show ilist0) stdout ilist3)
              (format #t "\nlist4: take 5 of list3:\n")
              ((\.* show ilist0) stdout ilist4)
              (putchar #\Newline)))

          ;; working with ranges
          (letin ((* ra0  (new^Range^int 1 20 3))
                  (* ra1  (take  3 ra0)) ; ((\.* take ra0)  3 ra0)
                  (* ra2  (take  4 ra0))
                  (* rad1 (drop  4 ra0))
                  (* ra4  (take  2 rad1))
                  (* ra5  (take  4 rad1))
                  (* ra3  (take 10 ra0)))
            (format #t "range 1 20 3:\n")
            ((\.* show ra0) stdout ra0)
            ;; range shows only first of range
            ;; needs to take enough from it
            (format #t "\ntake 3  of range 1 20 3:\n")
            ((<> show List^int) stdout ra1)
            (format #t "\ntake 4  of range 1 20 3:\n")
            ((\.* show ra1) stdout ra2)
            (format #t "\ntake 2  of drop  4 range 1 20 3:\n")
            ((\.* show ra1) stdout ra4)
            (format #t "\ntake 4  of drop  4 range 1 20 3:\n")
            ((\.* show ra1) stdout ra5)
            (format #t "\ntake 10 of range 1 20 3:\n")
            ;; access Table by type
            ((\.+ show List^int) stdout ra3))

          ;; casting
          (letin ((* str0 (new^String "Hello World!"))
                  (* str1 (new^List^int '{ 72 101 108 108 111 32 87 111 114 108 100 33 })))
            (format #t "\nString to List^int:\n")
            ((\.+ show List^int) stdout (static-cast List^int str0))
            (format #t "\nString to List^char:\n")
            ((\.+ show List^char) stdout (static-cast List^char str0))
            (format #t "\nList^int to List^char:\n")
            (show^List^char stdout (static-cast List^char str1))
            (format #t "\nList^int to String:\n")
            (show^String stdout (static-cast String str1))
            (putchar #\Newline))
          
          ))
