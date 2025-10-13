
;; fa from datatype
;; ga to datatype
;; a type inside fa
;; b type inside ga
(generic decl-Functor (fa gb a b)

         (decl) (func (<> fmap fa gb) ((func atob ((a value)) (out b)) (fa input)) (out gb))

         ) ; decl-Functor

;; body at end only access to 'atob' function pointer and 'input'
;; body should know about fa ga a b itself
(generic define-Functor (fa gb a b body)

         (func (<> fmap fa gb) ((func atob ((a value)) (out b)) (fa input))
               (out gb)
               (return body))

         ) ; define-Functor

(generic decl-Functor-List (a b)

         (decl-Functor (<> List a) (<> List b) a b)

         ) ; decl-Functor-List

(generic define-Functor-List (a b)

         (define-Functor (<> List a) (<> List b) a b
                         (match input
                           (* _ head tail
                              ($> (<> Cons b)
                                (atob head)
                                ((<> fmap (<> List a) (<> List b)) atob tail)))
                           (default ((<> Empty b)))))

         ) ; define-Functor-List
