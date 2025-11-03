;;; foldr, Monoid, Semigroup
;;; each Monoid is a Semigroup too


(generic decl-folds (a)

         (decl) (func (<> foldr a) ((func folder ((a lhs) (a rhs)) (out a))
                                    (a neutral)
                                    ((<> List a) foldable))
                      (out a))

         ) ; decl-folds

(generic impl-folds (a)

         (func (<> foldr a) ((func folder ((a lhs) (a rhs)) (out a))
                             (a neutral)
                             ((<> List a) foldable))
               (out a)
               (return
                 (match foldable
                   (* Cons head tail
                      ((<> foldr a) folder (folder neutral head) tail))
                   (default neutral))))
         
         ) ; impl-folds




;; binary associative identity operation
;; class Monoid m where
;;   mempty  :: m
;;   mappend :: m -> m -> m
;;   mconcat :: [m] -> m
(generic decl-Monoid (type a)

         (decl-data (Monoid (<> Monoid type))
           (= Monoid (<> Monoid type ctor)
              (a mempty))
           (func mempty  () (out a))
           (func mappend ((a lhs) (a rhs)) (out a))
           (func mconcat (((<> List a) list)) (out a)))

         (decl-data (Semigroup (<> Semigroup type))
           (= Semigroup (<> Semigroup type ctor))
           (func mappend ((a lhs) (a rhs)) (out a)))

         (decl) (func (<> get Monoid type) () (out (<> Monoid type)))
         (decl) (func (<> get Semigroup type) () (out (<> Semigroup type)))

         ) ; decl-Monoid

;; op is a strict irreducible function which accepts a and b
(generic impl-Monoid (type a neutral op)

         (impl-data (Monoid (<> Monoid type))
           (= Monoid (<> Monoid type ctor)
              (a mempty))

           (func mempty ()
                 (out a)
                 (return neutral))

           (func mappend ((a lhs) (a rhs))
                 (out a)
                 (return (op lhs rhs)))

           (func mconcat (((<> List a) list))
                 (out a)
                 (return ((<> foldr a) (<> mappend Monoid type) neutral list))))

         (impl-data (Semigroup (<> Semigroup type))
           (= Semigroup (<> Semigroup type ctor))

           (func mappend ((a lhs) (a rhs))
                 (out a)
                 (return (op lhs rhs))))

         (func (<> get Monoid type) ()
               (out (<> Monoid type))
               (return ((<> Monoid type ctor) neutral)))
         
         (func (<> get Semigroup type) ()
               (out (<> Semigroup type))
               (return ((<> Semigroup type ctor))))

         ) ; impl-Monoid

(generic import-Monoid (type a)

         (import-data (Monoid (<> Monoid type))
           (= Monoid (<> Monoid type ctor)
              (a mempty)))

         (import-data (Semigroup (<> Semigroup type))
           (= Semigroup (<> Semigroup type ctor)))

         ) ; import-Monoid




;; binary associative operation
;; class Semigroup m where
;;   mappend :: m -> m -> m
(generic decl-Semigroup (type a)

         (decl-data (<> Semigroup type)
           (= Semigroup (<> Semigroup type ctor))
           (func mappend ((a lhs) (a rhs)) (out a)))
         
         (decl) (func (<> get Semigroup type) () (out (<> Semigroup type)))
         
         ) ; decl-Semigroup

(generic impl-Semigroup (type a op)

         (impl-data (<> Semigroup type)
           (= Semigroup (<> Semigroup type ctor))

           (func mappend ((a lhs) (a rhs))
                 (out a)
                 (return (op lhs rhs))))

         (func (<> Semigroup type mappend) ((a x) (a y))
               (out a)
               (return (op x y)))
         
         (func (<> get Semigroup type) ()
               (out (<> Semigroup type))
               (return ((<> Semigroup type ctor))))

         ) ; impl-Semigroup

(generic import-Semigroup (type)

         (import-data (<> Semigroup type)
           (= Semigroup (<> Semigroup type ctor)))

         ) ; import-Semigroup
