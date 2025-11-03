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

         (decl) (func (<> mempty  type) () (out a))
         (decl) (func (<> mappend type) ((a lhs) (a rhs)) (out a))
         (decl) (func (<> mconcat type) (((<> List a) list)) (out a))

         (decl) (func (<> get Monoid type) () (out (<> Monoid type)))
         (decl) (func (<> get Semigroup type) () (out (<> Semigroup type)))

         ) ; decl-Monoid

;; op is a strict irreducible function which accepts lhs and rhs of type a
(generic impl-Monoid (type a neutral op)

         (impl-data (Monoid (<> Monoid type))
           (= Monoid (<> Monoid type ctor)
              ((<> Monoid type mappend t) mappend)
              (a mempty)
              ((<> Monoid type mconcat t) mconcat)))

         (impl-data (Semigroup (<> Semigroup type))
           (= Semigroup (<> Semigroup type ctor)
              ((<> Monoid type mappend t) mappend)))

         (func (<> mempty type) () (out a)
               (return neutral))

         (func (<> mappend type) ((a lhs) (a rhs))
               (out a)
               (return (op lhs rhs)))

         (func (<> mconcat type) (((<> List a) list))
               (out a)
               (return ((<> foldr a) (<> mappend type) neutral list)))

         (func (<> get Monoid type) ()
               (out (<> Monoid type))
               (return ((<> Monoid type ctor)
                        (<> mappend type)
                        neutral
                        (<> mconcat type))))
         
         (func (<> get Semigroup type) ()
               (out (<> Semigroup type))
               (return ((<> Semigroup type ctor) (<> mappend type))))

         ) ; impl-Monoid

(generic import-Monoid (type a)

         (import-data (Monoid (<> Monoid type))
           (= Monoid (<> Monoid type ctor)
              ((<> Monoid type mappend t) mappend)
              (a mempty)
              ((<> Monoid type mconcat t) mconcat)))

         (import-data (Semigroup (<> Semigroup type))
           (= Semigroup (<> Semigroup type ctor)
              ((<> Monoid type mappend t) mappend)))

         ) ; import-Monoid


;; binary associative operation
;; class Semigroup m where
;;   mappend :: m -> m -> m
(generic decl-Semigroup (type a)

         (typedef func (<> Semigroup type mappend t) ((a lhs) (a rhs)) (out a))

         (decl-data (<> Semigroup type)
           (= Semigroup (<> Semigroup type ctor)
              ((<> Semigroup type mappend t) mappend)))

         (decl) (func (<> mappend type) ((a x) (a y)) (out a))

         (decl) (func (<> get Semigroup type) () (out (<> Semigroup type)))
         
         ) ; decl-Semigroup

(generic impl-Semigroup (type a op)

         (impl-data (<> Semigroup type)
           (= Semigroup (<> Semigroup type ctor)
              ((<> Monoid type mappend t) mappend)))

         (func (<> mappend type) ((a x) (a y))
               (out a)
               (return (op x y)))
         
         (func (<> get Semigroup type) ()
               (out (<> Semigroup type))
               (return ((<> Semigroup type ctor) (<> mappend type))))

         ) ; impl-Semigroup

(generic import-Semigroup (type)

         (import-data (<> Semigroup type)
           (= Semigroup (<> Semigroup type ctor)
              ((<> Semigroup type mappend t) mappend)))

         ) ; import-Semigroup
