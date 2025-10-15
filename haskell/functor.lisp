
;; fa from datatype
;; ga to datatype
;; a type inside fa
;; b type inside ga
;; class Functor f where
;;   fmap :: (a -> b) -> f a -> f b
;;   <$>  :: (a -> b) -> f a -> f b
(generic decl-Functor (fa gb a b)

         (decl) (func (<> fmap fa gb Pure) ((func atob ((a value)) (out b)) (fa input)) (out gb))

         (fn (<> fmap fa gb) atob list
             ((<> fmap fa gb Pure)
              '(lambda ((a input))
                (out b)
                (return atob))
              list))
         
         ) ; decl-Functor

;; body at end only access to 'atob' function pointer and 'input'
;; body should know about fa ga a b itself
(generic define-Functor (fa gb a b body)

         (func (<> fmap fa gb Pure) ((func atob ((a value)) (out b)) (fa input))
               (out gb)
               (return body))

         ) ; define-Functor

(generic decl-Functor-List (a b)

         (decl-Functor (<> List a) (<> List b) a b)

         ) ; decl-Functor-List

;; atob-body is the content of atob function
;; input variable is the head of each Cons and the expression should return b type
(generic define-Functor-List (a b)

         (define-Functor (<> List a) (<> List b) a b
                         (match input
                           (* _ head tail
                              ($> (<> Cons b)
                                (atob head)
                                ((<> fmap (<> List a) (<> List b) Pure) atob tail)))
                           (default ((<> Empty b)))))

         ) ; define-Functor-List

(generic import-Functor (fa gb a b)

         (fn (<> fmap fa gb) atob list
             ((<> fmap fa gb Pure)
              '(lambda ((a input))
                (out b)
                (return atob))
              list)) 

         ) ; import-Functor

(generic import-Functor-List (a b)

         (import-Functor (<> List a) (<> List b) a b)

         ) ; import-Functor
