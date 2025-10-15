
(generic decl-folds (a)

         (decl) (func (<> foldr a) ((func folder ((a lhs) (a rhs)) (out a))
                                    (a neutral)
                                    ((<> List a) foldable))
                      (out a))

         ) ; decl-String

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
         
         ) ; define-String





;; Monoidal Functor
;; class Functor f => Applicative f where
;;   pure :: a -> f a
;;   <*>  :: f (a -> b) -> f a -> f b
(generic decl-Applicative (f a b)

         (typedef func (<> f func a b) ((a value)) (out b))
         (typedef func (<> App f a b pure) ((a value)) (out (<> f b)))
         (typedef func (<> App f a b ap) (((<> f func a b) atob) ((<> f a) value)) (out (<> f b)))

         (decl-data (<> Applicative f a b)
           ((<> App f a b)
            ((<> App f a b pure) pure)
            ((<> App f a b ap) ap)))

         (decl-data (<> Semigroup type)
           ((<> sg type)
            ((<> Monoid type mappend) mappend)))

         (decl) (func (<> Monoid type mappend a s) ((a x) (a y)) (out a))
         (decl) (func (<> Monoid type mconcat a s) (((<> List a) l)) (out a))

         (decl) (func (<> get Monoid type) () (out (<> Monoid type)))
         (decl) (func (<> get Semigroup type) () (out (<> Semigroup type)))
         
         ) ; decl-String

(generic define-Monoid (type a neutral op)

         (define-data (<> Monoid type)
           ((<> m type)
            ((<> Monoid type mappend) mappend)
            (a mempty)
            ((<> Monoid type mconcat) mconcat)))

         (define-data (<> Semigroup type)
           ((<> sg type)
            ((<> Monoid type mappend) mappend)))

         (func (<> Monoid type mappend a s) ((a x) (a y))
               (out a)
               (return (op x y)))

         (func (<> Monoid type mconcat a s) (((<> List a) l))
               (out a)
               (return ((<> foldr a) (<> Monoid type mappend a s) neutral l)))

         (func (<> get Monoid type) ()
               (out (<> Monoid type))
               (return ($> (<> m type)
                         (<> Monoid type mappend a s)
                         neutral
                         (<> Monoid type mconcat a s))))
         
         (func (<> get Semigroup type) ()
               (out (<> Semigroup type))
               (return ($> (<> sg type) (<> Monoid type mappend a s))))

) ; define-String

(generic import-Monoid (type a)

         (import-data (<> Monoid type)
           ((<> m type)
            ((<> Monoid type mappend) mappend)
            (a mempty)
            ((<> Monoid type mconcat) mconcat)))

         (import-data (<> Semigroup type)
           ((<> sg type)
            ((<> Monoid type mappend) mappend)))

         ) ; import-String





;; binary associative operation
;; class Semigroup m where
;;   mappend :: m -> m -> m
(generic decl-Semigroup (type a)

         (typedef func (<> Semigroup type mappend) ((a lhs) (a rhs)) (out a))

         (decl-data (<> Semigroup type)
           ((<> sg type)
            ((<> Semigroup type mappend) mappend)))

         (decl) (func (<> Semigroup type mappend a s) ((a x) (a y)) (out a))

         (decl) (func (<> get Semigroup type) () (out (<> Semigroup type)))
         
         ) ; decl-String

(generic define-Semigroup (type a op)

         (define-data (<> Semigroup type)
           ((<> sg type)
            ((<> Monoid type mappend) mappend)))

         (func (<> Semigroup type mappend a s) ((a x) (a y))
               (out a)
               (return (op x y)))
         
         (func (<> get Semigroup type) ()
               (out (<> Semigroup type))
               (return ($> (<> sg type) (<> Semigroup type mappend a s))))

) ; define-String

(generic import-Semigroup (type)

         (import-data (<> Semigroup type)
           ((<> sg type)
            ((<> Semigroup type mappend) mappend)))

         ) ; import-String
