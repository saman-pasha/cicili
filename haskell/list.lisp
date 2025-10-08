
;; List must be defined by this generic
(generic specialize-List-header (type a)

         (specialize-Maybe-header a)
         
         (class-header type ((<> Cons a) (a head) ((<> Maybe type) tail)))

         (decl) (func (<> new type Pure) ((const a * buf) (int len)) (out (<> Maybe type)))
         (decl) (func (<> release type) (((<> Maybe type) list)))
         
         (inline) (func (<> free type) (((<> Maybe type) * list)) ; specified for letin
                        ((<> release type) (cof list)))
         
         (decl) (func (<> next type) (((<> Maybe type) list)) (out (<> Maybe type)))
         (decl) (func (<> nth type) ((int index) ((<> Maybe type) list)) (out (<> Maybe a)))
         (decl) (func (<> drop type) ((int index) ((<> Maybe type) list)) (out (<> Maybe type)))
         (decl) (func (<> len type) (((<> Maybe type) list)) (out int))
         (decl) (func (<> has len type) (((<> Maybe type) list) (int desired)) (out int))
         (decl) (func (<> take type) ((int len) ((<> Maybe type) list)) (out (<> Maybe type)))
         (decl) (func (<> append type) (((<> Maybe type) llist) ((<> Maybe type) rlist)) (out (<> Maybe type)))

         ;; Cons a
         (decl) (func (<> nth Cons a) ((int index) (type cons)) (out (<> Maybe a)))
         (decl) (func (<> drop Cons a) ((int index) (type cons)) (out (<> Maybe type)))
         (decl) (func (<> len Cons a) ((type cons)) (out int))
         (decl) (func (<> has len Cons a) ((type cons) (int desired)) (out int))

         (decl) (func (<> show type) (((<> Maybe type) list)))

         (fn (<> !! type) index list
             ((<> nth type) index list))

         (fn (<> push type) head tail
             ($> (<> Just type) ! (<> Cons a) head $ tail))

         (fn (<> \: type) head tail
             ($> (<> Just type) ! (<> Cons a) head $ tail))

         (fn (<> head type) list
             ((<> nth type) 0 list))

         (fn (<> tail type) list
             ((<> drop type) 0 list))

         (fn (<> ++ type) llist rlist
             ((<> append type) llist rlist))
         )

(generic specialize-List-source (type a)

         (specialize-Maybe-source a)
         
         (class-source type ((<> Cons a) (a head) ((<> Maybe type) tail)))

         (func (<> new type Pure) ((const a * buf) (int len))
               (out (<> Maybe type))
               (if (null buf)
                   (return ((<> Nothing type)))
                   (let ((a item . #'(cof buf)))
                     (if (== len 0)
                         (return ((<> Nothing type)))
                         (return ($> (<> Just type) ! (<> Cons a) item $
                                     ((<> new type Pure) (++ buf) (-- len))))))))

         (func (<> release type) (((<> Maybe type) list))
               (io list
                 (Just (= ls * _ _ tail)
                   (block
                       ((<> release type) tail)
                     (free ls)))))
         
         (func (<> next type) (((<> Maybe type) list))
               (out (<> Maybe type))
               (return (match list
                         (Just (= ls * _ _ tail) tail)
                         (default ((<> Nothing type))))))
         
         (func (<> nth type) ((int index) ((<> Maybe type) list))
               (out (<> Maybe a))
               (return (match list
                         (Just (* _ head tail)
                           (case (== index 0) ((<> Just a) head)
                                 otherwise    ((<> nth type) (-- index) tail)))
                         (default ((<> Nothing a))))))

         (func (<> drop type) ((int index) ((<> Maybe type) list))
               (out (<> Maybe type))
               (return (case (== index 0) list
                             otherwise    (match list
                                            (Just (* _ _ tail)
                                              ((<> drop type) (-- index) tail))
                                            (default ((<> Nothing type)))))))
         
         (func (<> len type) (((<> Maybe type) list))
               (out int)
               (return (match list
                         (Just (* _ _ tail)
                           (+ 1 ((<> len type) tail)))
                         (default 0))))

         (func (<> has len type) (((<> Maybe type) list) (int desired))
               (out int)
               (return (match list
                         (Just (* _ _ tail)
                           (case (== desired 1) 1
                                 otherwise      (+ 1 ((<> has len type) tail (-- desired)))))
                         (default 0))))

         (func (<> take type) ((int len) ((<> Maybe type) list))
               (out (<> Maybe type))
               (return (match list
                         (Just (* _ head tail) => (> len 0)
                               ($> (<> push type) head $ ((<> take type) (-- len) tail)))
                         (default ((<> Nothing type))))))

         (func (<> append type) (((<> Maybe type) llist) ((<> Maybe type) rlist))
               (out (<> Maybe type))
               (return (match llist
                         (Just (* _ head tail)
                           ($> (<> push type) head $ ((<> append type) tail rlist)))
                         (default rlist))))

         ;; Cons a
         (func (<> nth Cons a) ((int index) (type cons))
               (out (<> Maybe a))
               (return (match cons
                         (* _ head tail
                            (case (== index 0) ((<> Just a) head)
                                  otherwise    ((<> nth type) (-- index) tail)))
                         (default ((<> Nothing a))))))

         (func (<> drop Cons a) ((int index) (type cons))
               (out (<> Maybe type))
               (return (case (== index 0) ((<> Just type) cons)
                             otherwise    (match cons
                                            (* _ _ tail
                                               ((<> drop type) (-- index) tail))
                                            (default ((<> Nothing type)))))))

         (func (<> len Cons a) ((type cons))
               (out int)
               (return (match cons
                         (* _ _ tail
                            (+ 1 ((<> len type) tail)))
                         (default 0))))

         (func (<> has len Cons a) ((type cons) (int desired))
               (out int)
               (return (match cons
                         (* _ _ tail
                            (+ 1 ((<> has len type) tail (-- desired))))
                         (default 0))))
         )

(generic specialize-List-show (type a fmt)
         
         (func (<> show type) (((<> Maybe type) list))
               (io list
                 (Just (* _ head tail)
                   (block (io tail
                            (Just (block
                                      (printf fmt head)
                                    (putchar #\Space)))
                            (default (printf fmt head)))
                     ((<> show type) tail)))))
         )

(generic specialize-List-import (ctor type a)

         (class-import type ((<> Cons a) (a head) ((<> Maybe type) tail)))

         (DEFMACRO ctor (buf &OPTIONAL len)
           (IF len
               `((<> new type Pure) ,buf ,len)
               (IF (AND (LISTP buf) (EQUAL (CAR buf) 'QUOTE))
                   `((<> new type Pure) (cast (const a []) ,buf) ,(LENGTH (CADR buf)))
                   (ERROR (FORMAT NIL "new^List^int len required for dynamic array input: ~A" buf)))))

         (fn (<> !! type) index list
             ((<> nth type) index list))

         (fn (<> push type) head tail
             ($> (<> Just type) ! (<> Cons a) head $ tail))

         (fn (<> \: type) head tail
             ($> (<> Just type) ! (<> Cons a) head $ tail))

         (fn (<> head type) list
             ((<> nth type) 0 list))

         (fn (<> tail type) list
             ((<> drop type) 0 list))

         (fn (<> ++ type) llist rlist
             ((<> append type) llist rlist))
         )

;; helper for tuple passing by value
(DEFMACRO cast-list (type value)
  `(cast ,type (cof (cast (,type *) (aof ,value)))))
