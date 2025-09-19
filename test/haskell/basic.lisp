
;; (DEFMACRO fn (macro types &REST body)
;;   `(generic ,macro ,types
;;      ,@body))

;; ;; a -> a -> a
;; (fn addP (lhs rhs)
;;     (+ lhs rhs))
;; ;; (a -> a) -> a -> a
;; (fn addZ (adder rhs)
;;     (adder rhs))


(source "basic.c" (:std #t :compile #t :link #t)
        
        ;; data DataType :: DataType
        ;; data DataType =
        ;;     DataType 0 a         -- a value of 'a' type
        ;;   | DataType 1 () -> a   -- a function which returns a value of type 'a'
        (generic DataType (t a)
                 (struct t
                   (member bool isFun)
                   (union
                       (member a val)
                     (member func fun () (out a))))

                 (method (t . next) () (out a)
                         (return (? (-> this isFun) ((-> this fun)) (-> this val))))

                 ;; traits
                 (func (t . (<> to a)) ((t self)) (out a)
                       (return (? ($ self isFun) (($ self fun)) ($ self val)))))

        ;; add  a :: a -> a -> a
        ;; sub  a :: a -> a -> a
        ;; mul  a :: a -> a -> a
        ;; div  a :: a -> a -> a  -- round down
        ;; quot a :: a -> a -> a  -- round up
        (generic Num (t a)
                 (method (t . add) ((t rhs)) (out a)
                         (return (+ (-> this next) (-> rhs next))))

                 (method (t . sub) ((t rhs)) (out a)
                         (return (- (-> this next) (-> rhs next))))

                 (method (t . mul) ((t rhs)) (out a)
                         (return (* (-> this next) (-> rhs next))))

                 (method (t . div) ((t rhs)) (out a)
                         (return (/ (-> this next) (-> rhs next))))

                 (method (t . quot) ((t rhs)) (out a)
                         (let ((a rval . #'(-> rhs next)))
                           (return (/ (+ (-> this next) (- rval 1)) rval)))))
        
        ;; Int data type
        (DataType Int int)
        (Num Int int)
        
        ;; data Maybe =
        ;;     Nothing
        ;;   | Just a
        (generic Maybe (a)
                 (struct Nothing)

                 (struct (<> Just a)
                   (member a arg_0)))
        
        ;; general function add with two parameters
        ;; :: a -> a -> a
        ;; :: a -> (a -> a)
        (generic add (a)
                 (struct (<> add a)
                   (member a arg_0))

                 (generic add_call_0 (lhs)
                          (method ((<> add a) . call_0) ((a rhs))
                                  (out a)
                                  (format #t "add: %d + %d = %d\n" lhs rhs (+ lhs rhs))
                                  (return (+ lhs rhs))))

                 (add_call_0 (-> this arg_0))

                 ;; (method ((<> add a) . call) ((a lhs)) 
                 ;;         (out func _ (((<> add a) * this) (a lhs)) (out a))
                 ;;         (set (-> this arg_0) lhs)
                 ;;         (return (--> (<> add a) call_0)))

                 (func ((<> add a) . call) ((a lhs)) (out (<> add a) *)
                       (let (((<> add int) * __instance__ . #'(malloc (sizeof (<> add a)))))
                         (set (cof __instance__) (cast (<> add a) '{ lhs }))
                         (return __instance__))))

        ;; general function add with two parameters
        ;; :: a -> a -> a -> a
        ;; :: a -> (a -> (a -> a))
        (generic add3 (t a)
                 (struct t
                   (member a arg_0)
                   (member a arg_1))

                 (func (t . call_0) ((a fst))
                       (out (<> add3 a) *)
                       (let ((t * this . #'(malloc (sizeof t))))
                         (set (-> this arg_0) fst)
                         (return this)))

                 (method (t . call_1) ((a snd))
                         (out t *)
                         (set (-> this arg_1) snd)
                         (return this))

                 (generic add3_call (fst snd)
                          (method (t . call) ((a trd))
                                  (out a)
                                  (format #t "add3: %d + %d + %d = %d\n" fst snd trd (+ fst snd trd))
                                  (return (+ fst snd trd))))

                 (add3_call (-> this arg_0) (-> this arg_1)))
        
        ;; ;; instace for int
        (add3 (<> add3 a) int)

        ;; ;; a -> a -> a
        ;; (generic addP (lhs rhs)
        ;;          (+ lhs rhs))
        ;; ;; (a -> a) -> a -> a
        ;; (generic addZ (adder rhs)
        ;;          (adder rhs))

        ;; a -> a
        ;; (generic id (a)
        ;;          (func (<> id a) ((const a c)) (out const a)
        ;;                (return c)))

        ;; (id int)

        ;; \ lambda calculus
        ;; outputs irreducible phrase
        (lambda l0 x
          (lambda l1 y
            (+ x y)))

        (function add x y
                  (+ x y))

        (lambda p0 x
          (lambda p1 y
            (lambda p2 z
              (+ x y z))))

        (function fp0 x y z
                  (+ x y z))

        ;; (a -> a -> a) -> a -> a -> a
        (lambda adder f
          (lambda adder_0 x
            (lambda adder_1 y
              ((f x) y))))

        (function fadder f x y
                  ((f x) y))

        (function mul x y
                  (* x y))

        (function mult1 n
                  (where ((m 2)
                          (f (\\ x y (* x y))))
                    ((f m) n)))
        
        (main
            ;; Partials
            ;; (var (<> add_2 Int) f2)
            ;; (-> f2 call (cast Int '{ 0 2 }) (cast Int '{ 0 3 }))        ; :: a -> a -> a

            ;; (var (<> add_2 Int) f20)
            ;; (-> f20 call (cast Int '{ 0 4 }) (cast Int '{ 1 ($ f2 }))        ; :: a -> a -> a
            
            ;; (var auto adder . #'(-> (<> add int) call 2))
            ;; (format #t "output of haskelus function: %d\n" (-> adder call_0 3))
            (format #t "output of haskelus function: %d\n" (-> (-> (-> (<> add3 int) call_0 2) call_1 3) call 4))

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
          (format #t "output of where/letin and closure: %d\n"
                  ((letin ((m 2)
                           (f (\\ x y (* x y))))
                     (f m))
                   3))
          (format #t "output of function using where: %d\n" (mult1 3))

          (format #t "output of function application: %d\n" ($> mul 3 4))
          (format #t "output of function application: %d\n" ($> mul 3 $ add 2 2))
          (format #t "output of function application: %d\n" ($> mul 3 $ add 2 $ (* 2 5)))

          ;; (var auto adder1 . #'(-> adder call 4))
          ;; (format #t "output of haskelus function: %d\n" (adder1 adder 5))

          ;; (var (<> add_0 int) f0)
          ;; (set ($ f0 arg_0) 2     ; :: a -> (a -> a) 
          ;;      ($ f0 arg_1) 3)    ; :: a -> a
          ;; (-> f0 call)            ; :: a

          ;; Laziness
          
          ;; (format #t "addP: %d\n" (addP (identity 2) (addP (identity 3) (identity 4))))
          ;; (format #t "addZ: %d\n" (addZ (addP (identity 1)) (identity 2)))
          ))
