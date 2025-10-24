
;;; Monoidal Functor

;; factor  f
;; monoid  [ ] a -> [ ] a -> [ ] a
;; functor f (a -> b) -> f a -> f b
;; how smash f (a -> b) and f a to produce f b untouched
;; class Functor f => Applicative f where
;;   pure :: a -> f a
;;   ap   :: f (a -> b) -> f a -> f b      -- or tie-fighter
;;   <*>  :: f (a -> b) -> f a -> f b
(generic decl-Applicative (type f a b)

         ;; known constructor
         (typedef func (<> Applicative type pure t) (((<> Functor type) ftor)) (out (<> f (<> Functor type))))
         ;; takes a functorial structure to ap over a structure
         (typedef func (<> Applicative type ap t) (((<> f (<> Functor type)) functor) ((<> f a) input)) (out (<> f b)))

         (decl-data (Applicative (<> Applicative type))
           (= Applicative (<> Applicative type ctor)
              ((<> Applicative type pure t) pure)
              ((<> Applicative type ap t) ap)))

         (decl) (func (<> Applicative type pure) (((<> Functor type) ftor)) (out (<> f (<> Functor type))))
         (decl) (func (<> Applicative type ap) (((<> f (<> Functor type)) functor) ((<> f a) input)) (out (<> f b)))

         (decl) (func (<> get Applicative type) () (out (<> Applicative type)))

         (fn (<> pure type) ftor
             ((<> Applicative type pure) ftor))

         (fn (<> ap type) functor input
             ((<> Applicative type ap) functor input))
         
         ) ; decl-Applicative

;; ctor could be every thing where accept an argument of type 'a'
;; mat has access to 'functor' and 'input' variables inside 'ap' function
(generic define-Applicative (type f a b wrap mat)

         (define-data (Applicative (<> Applicative type))
           (= Applicative (<> Applicative type ctor)
              ((<> Applicative type pure t) pure)
              ((<> Applicative type ap t) ap)))

         (func (<> Applicative type pure) (((<> Functor type) ftor))
               (out (<> f (<> Functor type)))
               (return (wrap ftor)))

         (func (<> Applicative type ap) (((<> f (<> Functor type)) functor) ((<> f a) input))
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

         (fn (<> pure type) ftor
             ((<> Applicative type pure) ftor))

         (fn (<> ap type) functor input
             ((<> Applicative type ap) functor input))
         
         ) ; import-Applicative


;; todo: List Applicative using Monoid

(generic decl-Applicative-Maybe (type a b)

         (decl-Applicative type Maybe a b)
         
         ) ; decl-Applicative-Maybe

(generic define-Applicative-Maybe (type a b)

         (define-Applicative type Maybe a b
                             (<> Just (<> Functor type))
                             (match functor
                               (Just (_ fmap a_b) (fmap a_b input))
                               (default ((<> Nothing b)))))
         
         ) ; define-Applicative-Maybe

(generic import-Applicative-Maybe (type a b)

         (import-Applicative type Maybe a b)
         
         ) ; import-Applicative-Maybe
