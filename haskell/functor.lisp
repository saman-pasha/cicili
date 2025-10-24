
;;; function application, map or concept over structure

;; f a from datatype
;; f b to datatype
;; a type inside fa
;; b type inside ga
;; class Functor f where
;;   fmap :: (a -> b) -> f a -> f b
;;   <$>  :: (a -> b) -> f a -> f b
(generic decl-Functor (type f a b)

         (typedef func (<> Functor type a_b t) ((a value)) (out b))
         (typedef func (<> Functor type fmap t) (((<> Functor type a_b t) a_b) ((<> f a) input)) (out (<> f b)))

         (decl-data (Functor (<> Functor type))
           (= Functor (<> Functor type ctor)
              ((<> Functor type fmap t) fmap)
              ((<> Functor type a_b t) a_b)))

         (decl) (func (<> Functor type fmap) (((<> Functor type a_b t) a_b) ((<> f a) input)) (out (<> f b)))

         (decl) (func (<> get Functor type) (((<> Functor type a_b t) a_b)) (out (<> Functor type)))

         ;; returns f~b
         (fn (<> fmap type) a->b f~a
             (match ((<> get Functor type) '(lambda ((a __h_value))
                                             (out b)
                                             (return ($> a->b __h_value))))
               (_ fmap a_b (fmap a_b f~a))
               (default ((<> mempty (<> List b)))))) ; uses monoid                     

         ) ; decl-Functor

;; mat (match) at end only access to 'a_b' function pointer and 'input'
;; mat should know about f a b itself
(generic define-Functor (type f a b mat)

         (define-data (Functor (<> Functor type))
           (= Functor (<> Functor type ctor)
              ((<> Functor type fmap t) fmap)
              ((<> Functor type a_b t) a_b)))

         (func (<> Functor type fmap) (((<> Functor type a_b t) a_b) ((<> f a) input))
               (out (<> f b))
               (return mat))

         (func (<> get Functor type) (((<> Functor type a_b t) a_b))
               (out (<> Functor type))
               (return ($> (<> Functor type ctor) (<> Functor type fmap) a_b)))
         
         ) ; define-Functor

(generic import-Functor (type f a b)

         ;; returns f~b
         (fn (<> fmap type) a->b f~a
             (match ((<> get Functor type) '(lambda ((a value))
                                             (out b)
                                             (return ($> a->b value))))
               (_ fmap a_b (fmap a_b f~a))
               (default ((<> mempty (<> List b)))))) ; uses monoid

         ) ; import-Functor



;; List Functor
(generic decl-Functor-List (type a b)

         (decl-Functor type List a b)

         ) ; decl-Functor-List

;; a_b function is available
;; input variable is the head of each Cons and the expression should return wrapped b type
(generic define-Functor-List (type a b)

         (define-Functor type List a b
                         (match input
                           (* _ head tail     ; extract   f a
                              ($> (<> Cons b) ; construct f b
                                ($> a_b $ head)
                                ((<> Functor type fmap) a_b tail)))
                           (default ((<> Empty b)))))

         ) ; define-Functor-List

(generic import-Functor-List (type a b)

         (import-Functor type List a b)

         ) ; import-Functor-List




;; Maybe Functor
(generic decl-Functor-Maybe (type a b)

         (decl-Functor type Maybe a b)

         ) ; decl-Functor-Maybe

;; a_b function is available
;; input is 'Maybe a'
(generic define-Functor-Maybe (type a b)

         (define-Functor type Maybe a b
                         (match input
                           (Just val ($> (<> Just b) ! a_b $ val))
                           (default ((<> Nothing b)))))

         ) ; define-Functor-Maybe

(generic import-Functor-Maybe (type a b)

         (import-Functor type Maybe a b)

         ) ; import-Functor-Maybe
