
(generic decl-folds (a)

         (decl) (func (<> foldr a) ((func folder ((a lhs) (a rhs)) (out a))
                                    (a neutral)
                                    ((<> List a) * foldable))
                      (out a))

         ) ; decl-String

(generic define-folds (a)

         (func (<> foldr a) ((func folder ((a lhs) (a rhs)) (out a))
                             (a neutral)
                             ((<> List a) * foldable))
               (out a)
               (return
                 (match foldable
                   (* Cons head tail
                      ((<> foldr a) folder (folder neutral head) tail))
                   (default neutral))))
         
         ) ; define-String

;; binary associative operation
;; class Monoid m where
;;   mempty  :: m
;;   mappend :: m -> m -> m
;;   mconcat :: [m] -> m
(generic decl-Monoid (type a neutral op)

         (typedef func (<> Monoid type mappend) ((a lhs) (a rhs)) (out a))
         (typedef func (<> Monoid type mconcat) (((<> List a) * l)) (out a))

         (decl-data (<> Monoid type)
           ((<> m type)
            (a mempty)
            ((<> Monoid type mappend) mappend)
            ((<> Monoid type mconcat) mconcat)))

         (decl) (func (<> Monoid type mappend a s) ((a x) (a y)) (out a))
         (decl) (func (<> Monoid type mconcat a s) (((<> List a) * l)) (out a))

         (decl) (func (<> get Monoid type) () (out (<> Monoid type)))
         
         ) ; decl-String

(generic define-Monoid (type a neutral op)

         (define-data (<> Monoid type)
           ((<> m type)
            (a mempty)
            ((<> Monoid type mappend) mappend)
            ((<> Monoid type mconcat) mconcat)))

         (func (<> Monoid type mappend a s) ((a x) (a y))
               (out a)
               (return (op x y)))

         (func (<> Monoid type mconcat a s) (((<> List a) * l))
               (out a)
               (return ((<> foldr a) (<> Monoid type mappend a s) neutral l)))

         (func (<> get Monoid type) ()
           (out (<> Monoid type))
           (return ($> (<> m type)
                     neutral
                     (<> Monoid type mappend a s)
                     (<> Monoid type mconcat a s))))
         
         ) ; define-String

(generic import-Monoid (type a)

         (import-data (<> Monoid type)
           ((<> m type)
            (a mempty)
            ((<> Monoid type mappend) mappend)
            ((<> Monoid type mconcat) mconcat)))

         ) ; import-String
