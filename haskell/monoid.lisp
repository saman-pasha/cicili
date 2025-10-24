;;; foldr, Monoid, Semigroup
;;; each Monoid is a Semigroup too


(generic decl-folds (a)

         (decl) (func (<> foldr a) ((func folder ((a lhs) (a rhs)) (out a))
                                    (a neutral)
                                    ((<> List a) foldable))
                      (out a))

         ) ; decl-folds

(generic define-folds (a)

         (func (<> foldr a) ((func folder ((a lhs) (a rhs)) (out a))
                             (a neutral)
                             ((<> List a) foldable))
               (out a)
               (return
                 (match foldable
                   (* Cons head tail
                      ((<> foldr a) folder (folder neutral head) tail))
                   (default neutral))))
         
         ) ; define-folds




;; binary associative identity operation
;; class Monoid m where
;;   mempty  :: m
;;   mappend :: m -> m -> m
;;   mconcat :: [m] -> m
(generic decl-Monoid (type a)

         (typedef func (<> Monoid type mappend t) ((a lhs) (a rhs)) (out a))
         (typedef func (<> Monoid type mconcat t) (((<> List a) l)) (out a))

         (decl-data (Monoid (<> Monoid type))
           (= Monoid (<> Monoid type ctor)
            ((<> Monoid type mappend t) mappend)
            (a mempty)
            ((<> Monoid type mconcat t) mconcat)))

         (decl-data (Semigroup (<> Semigroup type))
           (= Semigroup (<> Semigroup type ctor)
            ((<> Monoid type mappend t) mappend)))

         (decl) (func (<> Monoid type mappend) ((a lhs) (a rhs)) (out a))
         (decl) (func (<> Monoid type mconcat) (((<> List a) list)) (out a))

         (decl) (func (<> get Monoid type) () (out (<> Monoid type)))
         (decl) (func (<> get Semigroup type) () (out (<> Semigroup type)))

         (decl) (func (<> mempty type) () (out a))

         (fn (<> mappend type) lhs rhs
             ((<> Monoid type mappend) lhs rhs))

         (fn (<> mconcat type) list
             ((<> Monoid type mconcat) ((<> new List type) list)))

         ) ; decl-Monoid

;; op is a strict irreducible function which accepts a and b
(generic define-Monoid (type a neutral op)

         (define-data (Monoid (<> Monoid type))
           (= Monoid (<> Monoid type ctor)
            ((<> Monoid type mappend t) mappend)
            (a mempty)
            ((<> Monoid type mconcat t) mconcat)))

         (define-data (Semigroup (<> Semigroup type))
           (= Semigroup (<> Semigroup type ctor)
            ((<> Monoid type mappend t) mappend)))

         (func (<> Monoid type mappend) ((a lhs) (a rhs))
               (out a)
               (return (op lhs rhs)))

         (func (<> Monoid type mconcat) (((<> List a) list))
               (out a)
               (return ((<> foldr a) (<> Monoid type mappend) neutral list)))

         (func (<> get Monoid type) ()
               (out (<> Monoid type))
               (return ($> (<> Monoid type ctor)
                         (<> Monoid type mappend)
                         neutral
                         (<> Monoid type mconcat))))
         
         (func (<> get Semigroup type) ()
               (out (<> Semigroup type))
               (return ($> (<> Semigroup type ctor) (<> Monoid type mappend))))

         (func (<> mempty type) () (out a)
               (return neutral))

         ) ; define-Monoid

(generic import-Monoid (type a)

         (import-data (Monoid (<> Monoid type))
           (= Monoid (<> Monoid type ctor)
            ((<> Monoid type mappend t) mappend)
            (a mempty)
            ((<> Monoid type mconcat t) mconcat)))

         (import-data (Semigroup (<> Semigroup type))
           (= Semigroup (<> Semigroup type ctor)
            ((<> Monoid type mappend t) mappend)))

         (fn (<> mappend type) lhs rhs
             ((<> Monoid type mappend) lhs rhs))

         (fn (<> mconcat type) list
             ((<> Monoid type mconcat) ((<> new List type) list)))
         
         ) ; import-Monoid




;; binary associative operation
;; class Semigroup m where
;;   mappend :: m -> m -> m
(generic decl-Semigroup (type a)

         (typedef func (<> Semigroup type mappend t) ((a lhs) (a rhs)) (out a))

         (decl-data (<> Semigroup type)
           (= Semigroup (<> Semigroup type ctor)
            ((<> Semigroup type mappend t) mappend)))

         (decl) (func (<> Semigroup type mappend) ((a x) (a y)) (out a))

         (decl) (func (<> get Semigroup type) () (out (<> Semigroup type)))
         
         (fn (<> mappend type) lhs rhs
             ((<> Semigroup type mappend) lhs rhs))

         ) ; decl-Semigroup

(generic define-Semigroup (type a op)

         (define-data (<> Semigroup type)
           (= Semigroup (<> Semigroup type ctor)
            ((<> Monoid type mappend t) mappend)))

         (func (<> Semigroup type mappend) ((a x) (a y))
               (out a)
               (return (op x y)))
         
         (func (<> get Semigroup type) ()
               (out (<> Semigroup type))
               (return ($> (<> Semigroup type ctor) (<> Semigroup type mappend))))

         ) ; define-Semigroup

(generic import-Semigroup (type)

         (import-data (<> Semigroup type)
           (= Semigroup (<> Semigroup type ctor)
            ((<> Semigroup type mappend t) mappend)))

         (fn (<> mappend type) lhs rhs
             ((<> Semigroup type mappend) lhs rhs))

         ) ; import-Semigroup
