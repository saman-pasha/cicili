
(generic decl-Either
  (e a)

  ;; suitable Error Handling
  ;; data Either = Left e | Right a         
  (decl-data (Either (<> Either e a))
    (= Right (<> Right e a) (a value))
    (= Left  (<> Left e a) (e error)))
  
  ) ; decl-Either

(generic impl-Either
  (e a)
  
  (impl-data (Either (<> Either e a))
    (= Right (<> Right e a) (a value))
    (= Left  (<> Left e a) (e error)))
  
  ) ; impl-Either

(generic import-Either
  (e a)

  ) ; import-Either
