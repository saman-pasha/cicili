
(generic decl-Maybe (a)
         
         ;; every Maybe needs a guard
         (guard (<> __H Maybe a)
           
           ;; uses this definition in c header
           ;; data Maybe = Nothing | Just a         
           (decl-data (Maybe (<> Maybe a))
             (= Nothing (<> Nothing a))
             (= Just    (<> Just a) (a value)))
           
           ) ; guard
         ) ; decl-Maybe

(generic define-Maybe (a)
         
         ;; define inside c.lisp
         (define-data (Maybe (<> Maybe a))
           (= Nothing (<> Nothing a))
           (= Just    (<> Just a) (a value)))
         
         ) ; define-Maybe
