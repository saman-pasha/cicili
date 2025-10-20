
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

         (typedef func (<> Monoid type mappend) ((a lhs) (a rhs)) (out a))
         (typedef func (<> Monoid type mconcat) (((<> List a) l)) (out a))

         (decl-data (<> Monoid type)
           ((<> m type)
            ((<> Monoid type mappend) mappend)
            (a mempty)
            ((<> Monoid type mconcat) mconcat)))

         (decl-data (<> Semigroup type)
           ((<> sg type)
            ((<> Monoid type mappend) mappend)))

         (decl) (func (<> Monoid type mappend a s) ((a x) (a y)) (out a))
         (decl) (func (<> Monoid type mconcat a s) (((<> List a) l)) (out a))

         (decl) (func (<> get Monoid type) () (out (<> Monoid type)))
         (decl) (func (<> get Semigroup type) () (out (<> Semigroup type)))
         
         ) ; decl-Monoid

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

         ) ; define-Monoid

(generic import-Monoid (type a)

         (import-data (<> Monoid type)
           ((<> m type)
            ((<> Monoid type mappend) mappend)
            (a mempty)
            ((<> Monoid type mconcat) mconcat)))

         (import-data (<> Semigroup type)
           ((<> sg type)
            ((<> Monoid type mappend) mappend)))

         ) ; import-Monoid




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
         
         ) ; decl-Semigroup

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

         ) ; define-Semigroup

(generic import-Semigroup (type)

         (import-data (<> Semigroup type)
           ((<> sg type)
            ((<> Semigroup type mappend) mappend)))

         ) ; import-Semigroup
