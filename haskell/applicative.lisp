
;;; Monoidal Functor

;; takes a functorial structure to 'ap' (apply) over a structure
;; factor  f
;; monoid  [ ] a -> [ ] a -> [ ] a
;; functor f (a -> b) -> f a -> f b
;; how smash f (a -> b) and f a to produce f b untouched
;; class Functor f => Applicative f where
;;   pure :: a -> f a
;;   ap   :: f (a -> b) -> f a -> f b      -- or tie-fighter
;;   <*>  :: f (a -> b) -> f a -> f b
(generic decl-Applicative (type f a b)

         (typedef func (<> Applicative type pure t) (((<> Functor type a_b t) a_b)) (out (<> f (<> Functor type a_b t))))
         (typedef func (<> Applicative type ap t) (((<> f (<> Functor type a_b t)) f_a_b) ((<> f a) input)) (out (<> f b)))

         (decl-data (Applicative (<> Applicative type))
           (= Applicative (<> Applicative type ctor)
              ((<> Applicative type pure t) pure)
              ((<> Applicative type ap t) ap)))

         (decl) (func (<> Applicative type pure) (((<> Functor type a_b t) a_b)) (out (<> f (<> Functor type a_b t))))
         (decl) (func (<> Applicative type ap) (((<> f (<> Functor type a_b t)) f_a_b) ((<> f a) input)) (out (<> f b)))

         (decl) (func (<> get Applicative type) () (out (<> Applicative type)))

         (fn (<> pure type) a_b
             ((<> Applicative type pure) a_b))

         (fn (<> ap type) f_a_b input
             ((<> Applicative type ap) f_a_b input))
         
         ) ; decl-Applicative

;; ctor could be every thing where accept an argument of type 'a'
;; mat has access to 'functor' and 'input' variables inside 'ap' function
(generic define-Applicative (type f a b wrap mat)

         (define-data (Applicative (<> Applicative type))
           (= Applicative (<> Applicative type ctor)
              ((<> Applicative type pure t) pure)
              ((<> Applicative type ap t) ap)))

         (func (<> Applicative type pure) (((<> Functor type a_b t) a_b))
               (out (<> f (<> Functor type a_b t)))
               (return (wrap a_b)))

         (func (<> Applicative type ap) (((<> f (<> Functor type a_b t)) f_a_b) ((<> f a) input))
               (out (<> f b))
               (return mat))

         (func (<> get Applicative type) ()
               (out (<> Applicative type))
               (return ($> (<> Applicative type ctor)
                         (<> Applicative type pure)
                         (<> Applicative type ap))))

         ) ; define-Applicative

(generic import-Applicative (type f a b)

         (import-data (Applicative (<> Applicative type))
           (= Applicative (<> Applicative type)
              ((<> Applicative type pure t) pure)
              ((<> Applicative type ap t) ap)))

         (fn (<> pure type) a_b
             ((<> Applicative type pure) a_b))

         (fn (<> ap type) f_a_b input
             ((<> Applicative type ap) f_a_b input))
         
         ) ; import-Applicative


;; List

;; Maybe
(generic decl-Applicative-Maybe (type a b)

         (decl-Applicative type Maybe a b)
         
         ) ; decl-Applicative-Maybe

(generic define-Applicative-Maybe (type a b)

         (define-Applicative type Maybe a b
                             (<> Just (<> Functor type a_b t))
                             (match f_a_b
                               (Just a_b ((<> Functor type fmap) a_b input))
                               (default ((<> Nothing b)))))
         
         ) ; define-Applicative-Maybe

(generic import-Applicative-Maybe (type a b)

         (import-Applicative type Maybe a b)
         
         ) ; import-Applicative-Maybe
