
(generic decl-Either (e a)

         ;; suitable Error Handling
         ;; data Either = Left e | Right a         
         (decl-data (Either (<> Either e a))
           (= Left  (<> Left e) (e error))
           (= Right (<> Right a) (a value)))
         
         ) ; decl-Either

(generic define-Either (a)
         
         (define-data (Either (<> Either e a))
           (= Left  (<> Left e) (e error))
           (= Right (<> Right a) (a value)))
         
         ) ; define-Either
