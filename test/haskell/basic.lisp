
(source "basic.c" (:std #t :compile #t :link #t)
        (include "math.h")
        
        ;; ;; data DataType :: DataType
        ;; ;; data DataType =
        ;; ;;     DataType 0 a         -- a value of 'a' type
        ;; ;;   | DataType 1 () -> a   -- a function which returns a value of type 'a'
        ;; (generic DataType (t a)
        ;;          (struct t
        ;;            (member bool isFun)
        ;;            (union
        ;;                (member a val)
        ;;              (member func fun () (out a))))

        ;;          (method (t . next) () (out a)
        ;;                  (return (? (-> this isFun) ((-> this fun)) (-> this val))))

        ;;          ;; traits
        ;;          (func (t . (<> to a)) ((t self)) (out a)
        ;;                (return (? ($ self isFun) (($ self fun)) ($ self val)))))

        ;; ;; add  a :: a -> a -> a
        ;; ;; sub  a :: a -> a -> a
        ;; ;; mul  a :: a -> a -> a
        ;; ;; div  a :: a -> a -> a  -- round down
        ;; ;; quot a :: a -> a -> a  -- round up
        ;; (generic Num (t a)
        ;;          (method (t . add) ((t rhs)) (out a)
        ;;                  (return (+ (-> this next) (-> rhs next))))

        ;;          (method (t . sub) ((t rhs)) (out a)
        ;;                  (return (- (-> this next) (-> rhs next))))

        ;;          (method (t . mul) ((t rhs)) (out a)
        ;;                  (return (* (-> this next) (-> rhs next))))

        ;;          (method (t . div) ((t rhs)) (out a)
        ;;                  (return (/ (-> this next) (-> rhs next))))

        ;;          (method (t . quot) ((t rhs)) (out a)
        ;;                  (let ((a rval . #'(-> rhs next)))
        ;;                    (return (/ (+ (-> this next) (- rval 1)) rval)))))
        
        ;; ;; Int data type
        ;; (DataType IntT int)
        ;; (Num IntT int)
        
        ;; ;; general function add with two parameters
        ;; ;; :: a -> a -> a
        ;; ;; :: a -> (a -> a)
        ;; (generic add (a)
        ;;          (struct (<> add a)
        ;;            (member a arg_0))

        ;;          (generic add_call_0 (lhs)
        ;;                   (method ((<> add a) . call_0) ((a rhs))
        ;;                           (out a)
        ;;                           (format #t "add: %d + %d = %d\n" lhs rhs (+ lhs rhs))
        ;;                           (return (+ lhs rhs))))

        ;;          (add_call_0 (-> this arg_0))

        ;;          ;; (method ((<> add a) . call) ((a lhs)) 
        ;;          ;;         (out func _ (((<> add a) * this) (a lhs)) (out a))
        ;;          ;;         (set (-> this arg_0) lhs)
        ;;          ;;         (return (--> (<> add a) call_0)))

        ;;          (func ((<> add a) . call) ((a lhs)) (out (<> add a) *)
        ;;                (let (((<> add int) * __instance__ . #'(malloc (sizeof (<> add a)))))
        ;;                  (set (cof __instance__) (cast (<> add a) '{ lhs }))
        ;;                  (return __instance__))))

        ;; ;; general function add with two parameters
        ;; ;; :: a -> a -> a -> a
        ;; ;; :: a -> (a -> (a -> a))
        ;; (generic add3 (t a)
        ;;          (struct t
        ;;            (member a arg_0)
        ;;            (member a arg_1))

        ;;          (func (t . call_0) ((a fst))
        ;;                (out (<> add3 a) *)
        ;;                (let ((t * this . #'(malloc (sizeof t))))
        ;;                  (set (-> this arg_0) fst)
        ;;                  (return this)))

        ;;          (method (t . call_1) ((a snd))
        ;;                  (out t *)
        ;;                  (set (-> this arg_1) snd)
        ;;                  (return this))

        ;;          (generic add3_call (fst snd)
        ;;                   (method (t . call) ((a trd))
        ;;                           (out a)
        ;;                           (format #t "add3: %d + %d + %d = %d\n" fst snd trd (+ fst snd trd))
        ;;                           (return (+ fst snd trd))))

        ;;          (add3_call (-> this arg_0) (-> this arg_1)))
        
        ;; ;; ;; instace for int
        ;; (add3 (<> add3 a) int)

        ;; a -> a
        ;; (generic id (a)
        ;;          (func (<> id a) ((const a c)) (out const a)
        ;;                (return c)))

        ;; (id int)

        ;; \ lambda calculus
        ;; outputs irreducible phrase
        ;; (lambda l0 x
        ;;   (lambda l1 y
        ;;     (+ x y)))

        ;; (fn add x y
        ;;     (+ x y))

        ;; (lambda p0 x
        ;;   (lambda p1 y
        ;;     (lambda p2 z
        ;;       (+ x y z))))

        ;; (fn fp0 x y z
        ;;     (+ x y z))

        ;; ;; (a -> a -> a) -> a -> a -> a
        ;; (lambda adder f
        ;;   (lambda adder_0 x
        ;;     (lambda adder_1 y
        ;;       ((f x) y))))

        ;; (fn fadder f x y
        ;;     ((f x) y))

        ;; (fn mul x y
        ;;     (* x y))

        ;; (fn mult1 n
        ;;     (where ((m 2)
        ;;             (f (\\ x y (* x y))))
        ;;       ((f m) n)))

        ;; (generic specialise_power (a)
        ;;          (func (<> power_irreducible a) ((a x) (a y))
        ;;                (out a)
        ;;                (return (cast a (pow (cast double x) (cast double y)))))
                 
        ;;          (fn power0 x y
        ;;              ((<> power_irreducible a) x y))

        ;;          (fn power1 x y
        ;;              (cast a (pow (cast double x) (cast double y))))

        ;;          (fn power2 xp yp
        ;;              ('(lambda ((a x) (a y))
        ;;                 (out a)
        ;;                 (return (cast a (pow (cast double x) (cast double y)))))
        ;;                xp yp)))
        ;; (specialise_power int)

        ;; (data Bool False True)
        
        ;; (data Integer
        ;;   (Byte  (char  c))
        ;;   (Short (short s))
        ;;   (Int   (int   x)))

        ;; ;; shared function for haskell data type
        ;; (func (Integer . show) ((Integer self))
        ;;       (match self
        ;;         (Byte  c  (format #t "Integer is Byte: %d\n" c))
        ;;         (Short sh (format #t "Integer is Short: %d\n" sh))
        ;;         (Int   i  => (< i 1000) (format #t "Integer is Int below 1000: %d\n" i))
        ;;         (Int   i  => (and (>= i 1000) (< i 10000))
        ;;                (format #t "Integer is Int between 1000 and 10000: %d\n" i))
        ;;         (default  (format #t "Integer is N/A\n"))))
        
        ;; ;; method for accessing that shared function from instance
        ;; (method (Integer . show) ()
        ;;         (-> Integer show (cof this)))

        ;; ;; (specialise_Maybe int)
        ;; (guard (<> _H Maybe char)
        ;;   (specialise_Maybe char))
        ;; (specialise_Maybe (<> Maybe char))

        ;; (func print_inside_maybe (((<> Maybe (<> Maybe char)) mb))
        ;;       (io mb
        ;;         ((<> Nothing (<> Maybe char)) (format #t "wrapper Nothing Maybe char: Nothing\n"))
        ;;         ((<> Just    (<> Maybe char)) mc
        ;;          (io mc
        ;;            ((<> Nothing char) (format #t "wrapper Just Nothing char: Nothing\n"))
        ;;            ((<> Just char) c  (format #t "wrapper Just Just char: Just %c\n" c))))))

        ;; (func print_inner_maybe (((<> Maybe (<> Maybe char)) imb))
        ;;       (io imb
        ;;         ((<> Nothing (<> Maybe char)) (format #t "inner Nothing Maybe char: Nothing\n"))
        ;;         ((<> Just    (<> Maybe char)) ((<> Nothing char)) (format #t "inner Just Nothing char: Nothing\n"))
        ;;         ((<> Just    (<> Maybe char)) ((<> Just char) c)  (format #t "inner Just Just char: Just %c\n" c))))

        ;; (typedef (Tuple int char short) aTuple)
        ;; (func print_tuple ((aTuple tup))
        ;;       (io tup
        ;;         ((\, i c s) => (> s 10) (format #t "tuple s > 10: int, char, short = (%d, %c, %d)\n" i c s))
        ;;         ((\, i c s) (format #t "tuple: int, char, short = (%d, %c, %d)\n" i c s))))

        ;; (specialise_Maybe aTuple)

        (specialise_List String char)

        (main
          ;;   (format #t "output of haskelus function: %d\n" (-> (-> (-> (<> add3 int) call_0 2) call_1 3) call 4))

          ;; (format #t "output of lambda calculus: %d & %d\n" ((l0 2) 3) ((add 2) 3))
          ;; (format #t "output of lambda calculus: %d\n" (((p0 2) 3) 4))

          ;; (format #t "output of lambda closure: %d\n"  (((adder l0) 2) 3))
          ;; (format #t "output of lambda closure: %d\n"  (((adder (p0 2)) 3) 4))

          ;; (format #t "output of function closure: %d\n"  (((fadder add) 2) 3))
          ;; (format #t "output of function closure: %d\n"  (((fadder (fp0 2)) 3) 4))

          ;; (format #t "output of inline where: %d\n"
          ;;         (where ((m 2)
          ;;                 (n 3)
          ;;                 (f (\\ x y (* x y))))
          ;;           ((f m) n)))
          ;; (format #t "output of where/letin and closure: %d\n"
          ;;         ((letin ((m 2)
          ;;                  (f (\\ x y (* x y))))
          ;;            (f m))
          ;;          3))
          ;; (format #t "output of function using where: %d\n" (mult1 3))

          ;; (format #t "output of function application: %d\n" ($> mul 3 4))
          ;; (format #t "output of function application: %d\n" ($> mul 3 $ add 2 2))
          ;; (format #t "output of function application: %d\n" ($> mul 3 $ add 2 $ (* 2 5)))

          ;; (format #t "output of reducible function: %d\n" ($> power0 2 16))
          ;; (format #t "output of reducible function: %d\n" ($> power1 2 16))
          ;; (format #t "output of reducible function: %d\n" ($> power2 2 16))
          ;; (format #t "output of reducible function: %d\n"
          ;;         ($> (\\ xp yp
          ;;                 ('(lambda ((int x) (int y))
          ;;                    (out int)
          ;;                    (return (cast int (pow (cast double x) (cast double y)))))
          ;;                   xp yp))
          ;;           2 16))

          ;; (-> Integer show (Byte  10))
          ;; (-> Integer show (Short 20))
          ;; (-> Integer show (Int   30))
          ;; (-> Integer show (Int   2000))
          ;; (-> Integer show (Int   20000))

          ;; (let ((auto integer . #'(Int 3000))
          ;;       ('{ (int dd) } ss . '{ 2 })
          ;;       (aTuple tup0 . '{ 4400 #\A 33 })
          ;;       ((Tuple int char short) tup1 . '{ 4401 #\B 34 })
          ;;       (auto tup2 . #'(cast (Tuple int char short) '{ 4402 #\C 35 })))
          ;;   (-> integer show)

          ;;   (print_tuple tup0)
          ;;   (print_tuple (cast-tuple aTuple tup1)) ; use pointer or cast-tuple
          ;;   ($> (\\ tup
          ;;           (match tup
          ;;             ((\, i c s) => (> s 10) (format #t "tuple s > 10: int, char, short = (%d, %c, %d)\n" i c s))
          ;;             ((\, i c s) (format #t "tuple: int, char, short = (%d, %c, %d)\n" i c s))
          ;;             (default (format #t "No Tuple?!"))))
          ;;     tup2))

          ;; (let ((auto m1 . #'((<> Nothing (<> Maybe char))))
          ;;       (auto m2 . #'((<> Just (<> Maybe char)) ((<> Nothing char))))
          ;;       (auto m3 . #'((<> Just (<> Maybe char)) ((<> Just char) #\G)))
          ;;       (auto m4 . #'((<> Just (<> Maybe char)) ((<> Just char) #\H))))
          ;;   (print_inside_maybe m1)
          ;;   (print_inside_maybe m2)
          ;;   (print_inside_maybe m3)
          ;;   (print_inner_maybe  m4))

          ;; (io ((<> Just aTuple) (cast aTuple '{ 55 #\D 93 }))
          ;;   ((<> Nothing aTuple) (format #t "tuple inside maybe: Nothing"))
          ;;   ((<> Just aTuple) (= t (\, i c s))
          ;;    (io t
          ;;      ((\, ii cc ss)
          ;;       (progn
          ;;         (format #t "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n" i c s)
          ;;         (format #t "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n" ii cc ss))))))
          
            (io (cast (Tuple int Maybe^char) '{ 5060 (Just^char #\M) })
              ((\, _ (Nothing ^ char)) (format #t "maybe inside tuple: Nothing\n"))
              ((\, i (Just ^ char c => (> c #\L)))
               (format #t "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n" i c))
              (= t (\, _ (Just ^ char c => (< c #\L)))
                 (io t
                   ((\, i (Just ^ char _))
                    (format #t "maybe inside tuple: (c < L) int, Just char: = (%d, %c)\n" i c)))))
          
          (show^String (new^String "Haskell List\n"))

          (match (nth^String (new^String "Haskell List\n") 3)
            (Just ^ char c (format #t "the 4th element is: %c\n" c))
            (default (format #t "4th element not found\n")))

          (io (new^String "Haskell List\n")
            ;; access by path mode
            (Just ^ String (= str * Cons ^ char head tail) (format #t "a char: %c\n" head)))

          ;; (io (new.String "Haskell List\n")
          ;;   ;; desired access case by path mode
          ;;   (Just (= str * Cons) head tail) (format #t "a char: %c\n" head))

          (match (new^String "Haskell List\n")
            ;; simplified list element access
            ;; (Just ^ String ((\: fst snd tail)) (format #t "first and second char from String: %c %c\n" fst snd))
            (default (format #t "Nothing String\n")))

        ))

