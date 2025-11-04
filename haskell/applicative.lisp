
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

         (decl) (func (<> pure Applicative type) (((<> Functor type a_b t) a_b)) (out (<> f (<> Functor type a_b t))))
         (decl) (func (<> ap Applicative type) (((<> f (<> Functor type a_b t)) f_a_b) ((<> f a) input)) (out (<> f b)))

         (decl) (func (<> get Applicative type) () (out (<> Applicative type)))

         (fn (<> pure type) a_b
             ((<> pure Applicative type) a_b))

         (fn (<> ap type) f_a_b input
             ((<> ap Applicative type) f_a_b input))
         
         ) ; decl-Applicative

;; ctor could be every thing where accept an argument of type 'a'
;; mat has access to 'functor' and 'input' variables inside 'ap' function
(generic impl-Applicative (type f a b wrap mat)

         (impl-data (Applicative (<> Applicative type))
           (= Applicative (<> Applicative type ctor)
              ((<> Applicative type pure t) pure)
              ((<> Applicative type ap t) ap)))

         (func (<> pure Applicative type) (((<> Functor type a_b t) a_b))
               (out (<> f (<> Functor type a_b t)))
               (return (wrap a_b)))

         (func (<> ap Applicative type) (((<> f (<> Functor type a_b t)) f_a_b) ((<> f a) input))
               (out (<> f b))
               (return mat))

         (func (<> get Applicative type) ()
               (out (<> Applicative type))
               (return ((<> Applicative type ctor)
                        (<> pure Applicative type)
                        (<> ap Applicative type))))

         ) ; impl-Applicative

(generic import-Applicative (type f a b)

         (import-data (Applicative (<> Applicative type))
           (= Applicative (<> Applicative type)
              ((<> Applicative type pure t) pure)
              ((<> Applicative type ap t) ap)))

         (fn (<> pure type) a_b
             ((<> pure Applicative type) a_b))

         (fn (<> ap type) f_a_b input
             ((<> ap Applicative type) f_a_b input))
         
         ) ; import-Applicative


;; List
;; Cartesian Application
;; enables parallelism computation
(generic decl-Applicative-List (type a b)

         (decl-Applicative type List a b)
         
         ) ; decl-Applicative-List

;; f_a_b is List of a_b [ a -> b]
;; input is List of a   [ a ]
;; returns  List of b   [ b ]
;; all functions inside f_a_b should be a -> b
;; all functions apply with fmap of Functor
(generic impl-Applicative-List (type a b)

         (impl-Applicative type List a b
                             (\\ a->b ((<> new List (<> Functor type a_b t) Wrap) a->b))
                             (match f_a_b
                               (* Cons a_b tail
                                  ((<> mconcat List b)
                                   ((<> Cons List b)
                                    ((<> fmap Functor type) a_b input)
                                    ((<> new List List b Wrap)
                                     ((<> ap Applicative type) tail input)))))
                               (default ((<> Empty b)))))
         
         ) ; impl-Applicative-List

(generic import-Applicative-List (type a b)

         (import-Applicative type List a b)
         
         ) ; import-Applicative-List


;; Maybe
;; enables optional computation
(generic decl-Applicative-Maybe (type a b)

         (decl-Applicative type Maybe a b)
         
         ) ; decl-Applicative-Maybe

(generic impl-Applicative-Maybe (type a b)

         (impl-Applicative type Maybe a b
                             (<> Just (<> Functor type a_b t))
                             (match f_a_b
                               (Just a_b ((<> fmap Functor type) a_b input))
                               (default ((<> Nothing b)))))
         
         ) ; impl-Applicative-Maybe

(generic import-Applicative-Maybe (type a b)

         (import-Applicative type Maybe a b)
         
         ) ; import-Applicative-Maybe
