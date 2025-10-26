
;;; Applicative Fucntor

;; join and sequencing functions with same result structure
;; like Rc, Maybe, Either
;; class Applicative m => Monad m where
;;   bind   :: m a -> (a -> m b) -> m b
;;   >>=    :: m a -> (a -> m b) -> m b
;;   return :: a -> m a
;;   then   :: m a -> m b -> m b
;;   >>     :: m a -> m b -> m b
(generic decl-Monad (type m a b)

         ;; join inner and outer structure
         (typedef func (<> Monad type bind t) (((<> m (<> Applicative type)) applicative) ((<> m a) input)) (out (<> m b)))
         ;; known constructor
         (typedef func (<> Monad type return t) (((<> Applicative type) app)) (out (<> m (<> Applicative type))))

         (decl-data (Monad (<> Monad type))
           (= Monad (<> Monad type ctor)
              ((<> Monad type bind t) bind)
              ((<> Monad type return t) return)))

         (decl) (func (<> Monad type bind) (((<> m (<> Applicative type)) applicative) ((<> m a) input)) (out (<> m b)))
         (decl) (func (<> Monad type return) (((<> Applicative type) app)) (out (<> m (<> Applicative type))))

         (decl) (func (<> get Monad type) () (out (<> Monad type)))

         (fn (<> bind type) applicative input
             ((<> Monad type bind) applicative input))
         
         (fn (<> return type) app
             ((<> Monad type return) app))

         ) ; decl-Monad

;; ctor could be every thing where accept an argument of type 'a'
;; mat has access to 'applicative' and 'input' variables inside 'bind' function
(generic define-Monad (type m a b wrap mat)

         (define-data (Monad (<> Monad type))
           (= Monad (<> Monad type ctor)
              ((<> Monad type bind t) bind)
              ((<> Monad type return t) return)))

         (func (<> Monad type bind) (((<> m (<> Applicative type)) applicative) ((<> m a) input))
               (out (<> f b))
               (return mat))

         (func (<> Monad type return) (((<> Applicative type) app))
               (out (<> f (<> Applicative type)))
               (return (wrap ftor)))

         (func (<> get Monad type) ()
               (out (<> Monad type))
               (return ($> (<> Monad type ctor)
                         (<> Monad type bind)
                         (<> Monad type return))))

         ) ; define-Monad

(generic import-Monad (type m a b)

         (import-data (Monad (<> Monad type))
           (= Monad (<> Monad type ctor)
              ((<> Monad type bind t) bind)
              ((<> Monad type return t) return)))

         (fn (<> bind type) applicative input
             ((<> Monad type bind) applicative input))
         
         (fn (<> return type) app
             ((<> Monad type return) app))
         
         ) ; import-Monad


;; todo: List Monad using Monoid

(generic decl-Monad-Maybe (type a b)

         (decl-Monad type Maybe a b)
         
         ) ; decl-Monad-Maybe

(generic define-Monad-Maybe (type a b)

         (define-Monad type Maybe a b
                             (match applicative
                               (Just (_ pure ap)
                                 (match input
                                   (Just value (fmap a_b input))
                               (default ((<> Nothing b))))
                             (<> Just (<> Applicative type)))
         
         ) ; define-Monad-Maybe

(generic import-Monad-Maybe (type a b)

         (import-Monad type Maybe a b)
         
         ) ; import-Monad-Maybe

