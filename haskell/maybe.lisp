
(generic decl-Maybe (a)
         
         ;; uses this definition in c header
         ;; data Maybe = Nothing | Just a         
         (decl-data (Maybe (<> Maybe a))
           (= Nothing (<> Nothing a))
           (= Just    (<> Just a) (a value)))
         
         ) ; decl-Maybe

(generic impl-Maybe (a)
         
         ;; define inside c.lisp
         (impl-data (Maybe (<> Maybe a))
           (= Nothing (<> Nothing a))
           (= Just    (<> Just a) (a value)))
         
         ) ; impl-Maybe

(generic import-Maybe (a)

         ) ; import-Maybe
