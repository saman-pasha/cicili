
(generic decl-Either (e a)

         ;; suitable Error Handling
         ;; data Either = Left e | Right a         
         (decl-data (Either (<> Either e a))
           (= Left  (<> Left e a) (e error))
           (= Right (<> Right e a) (a value)))
         
         ) ; decl-Either

(generic define-Either (e a)
         
         (impl-data (Either (<> Either e a))
           (= Left  (<> Left e a) (e error))
           (= Right (<> Right e a) (a value)))
         
         ) ; impl-Either
