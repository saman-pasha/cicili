
;;; Applicative Fucntor

;; join and sequencing functions with same result structure
;; like Rc, Maybe, Either
;; join inner and outer structure
;; class Applicative m => Monad m where
;;   bind   :: m a -> (a -> m b) -> m b
;;   >>=    :: m a -> (a -> m b) -> m b
;;   return :: a -> m a
;;   then   :: m a -> m b -> m b
;;   >>     :: m a -> m b -> m b
(generic decl-Monad (type m a b)

         ;; m a -> (a -> m b) -> m b
         ;; pure (a -> m b)
         ;; m (a -> m b)
         ;; m a -> m (a -> m b) -> m (m b)
         ;; join m (m b)
         ;; m b
         
         (typedef func (<> a to (<> m b) t) ((a value)) (out (<> m b)))

         (decl-data (Monad (<> Monad type))
           (= Monad (<> Monad type ctor))
           (func bind    (((<> m a) input) ((<> a to (<> m b) t) a_mb)) (out (<> m b)))
           (func returnA ((a value)) (out (<> m a)))
           (func returnB ((b value)) (out (<> m b))))

         (decl) (func (<> get Monad type) () (out (<> Monad type)))

         (fn (<> bind type) m~a a->mb
             ((<> bind Monad type)
              input
              '(lambda ((a __h_value))
                (out (<> m b))
                (return ($> a->mb __h_value)))))
         
         (fn (<> return type) a
             ((<> return Monad type) a))

         (fn (<> return type) b
             ((<> return Monad type) b))

         ) ; decl-Monad

;; mat has access to 'input' and 'a_mb' variables inside 'bind' function
(generic impl-Monad (type m a b mat wrap-a wrap-b)

         (impl-data (Monad (<> Monad type))
           (= Monad (<> Monad type ctor))

           (func bind (((<> m a) input) ((<> a to (<> m b) t) a_mb))
                 (out (<> m b))
                 (return mat))

           (func returnA ((a value))
                 (out (<> m a))
                 (return (wrap-a value)))

           (func returnB ((b value))
                 (out (<> m b))
                 (return (wrap-b value))))

         (func (<> get Monad type) ()
               (out (<> Monad type))
               (return ((<> Monad type ctor))))

         ) ; impl-Monad

(generic import-Monad (type m a b)

         (fn (<> bind type) m~a a->mb
             ((<> bind Monad type)
              input
              '(lambda ((a __h_value))
                (out (<> m b))
                (return ($> a->mb __h_value)))))

         (fn (<> returnA type) a
             ((<> return Monad type) a))
         
         (fn (<> returnB type) b
             ((<> return Monad type) b))
         
         ) ; import-Monad


;; Maybe a -> (a -> Maybe b) -> Maybe b
(generic decl-Monad-Maybe (type a b)

         (decl-Monad type Maybe a b)
         
         ) ; decl-Monad-Maybe

(generic impl-Monad-Maybe (type a b)

         (impl-Monad type Maybe a b
                     (match input
                       (Just value (a_mb value))
                       (default ((<> Nothing b))))
                     (<> Just a)
                     (<> Just b))
         
         ) ; impl-Monad-Maybe

(generic import-Monad-Maybe (type a b)
         
         (import-Monad type Maybe a b)
         
         ) ; import-Monad-Maybe


;; Either e a -> (a -> Either e b) -> Either e b
(generic decl-Monad-Either (type e a b)

         ;; dependencies
         (decl-Either e a)
         (decl-Either e b)
         
         (decl-Monad type (<> Either e) a b)
         
         ) ; decl-Monad-Either

;; neutral is just for mat case
(generic impl-Monad-Either (type e a b neutral)

         ;; dependencies
         (impl-Either e a)
         (impl-Either e b)

         (impl-Monad type (<> Either e) a b
                     (match input
                       (Right value (a_mb value))
                       (Left  error ((<> Left e b) error))
                       (default neutral))
                     (<> Right e a)
                     (<> Right e b))
         
         ) ; impl-Monad-Either

(generic import-Monad-Either (type e a b)

         ;; dependencies
         (import-Either e a)
         (import-Either e b)

         (import-Monad type (<> Either e) a b)
         
         ) ; import-Monad-Either

