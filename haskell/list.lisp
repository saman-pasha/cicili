;; My Cicili for a List
;; List must be defined by this generic
(generic decl-List (type a)
         
         (decl-Maybe a)

         (decl-class (List type)
           (= Empty (<> Empty a))
           (= Cons  (<> Cons a)
              (a head)
              (type tail)))

         (decl) (func (<> new type Pure) ((const a * buf) (int len)) (out type))
         (decl) (func (<> release type) ((type list)))
         
         (inline) (func (<> free type) ((type * list)) ; specified for letin
                        ((<> release type) (cof list)))
         
         (decl) (func (<> next type) ((type list)) (out type))
         (decl) (func (<> nth type) ((int index) (type list)) (out (<> Maybe a)))
         (decl) (func (<> drop type) ((int index) (type list)) (out type))
         (decl) (func (<> len type) ((type list)) (out int))
         (decl) (func (<> has len type) ((type list) (int desired)) (out int))
         (decl) (func (<> take type) ((int len) (type list)) (out type))
         (decl) (func (<> append type) ((type llist) (type rlist)) (out type))

         (decl) (func (<> show type) ((type list)))

         (fn (<> !! type) index list
             ((<> nth type) index list))

         (fn (<> push type) head tail
             ($> (<> Cons a) head tail))

         (fn (<> \: type) head tail
             ($> (<> Cons a) head tail))

         (fn (<> head type) list
             ((<> nth type) 0 list))

         (fn (<> tail type) list
             ((<> drop type) 0 list))

         (fn (<> ++ type) llist rlist
             ((<> append type) llist rlist))

         ) ; decl-List

(generic define-List (type a fmt)

         (define-Maybe a)

         (define-class (List type)
           (= Empty (<> Empty a))
           (= Cons  (<> Cons a)
              (a head)
              (type tail)))

         (func (<> new type Pure) ((const a * buf) (int len))
               (out type)
               (if (null buf)
                   (return ((<> Empty a)))
                   (let ((a item . #'(cof buf)))
                     (if (== len 0)
                         (return ((<> Empty a)))
                         (return ($> (<> Cons a) item ((<> new type Pure) (++ buf) (-- len))))))))

         (func (<> release type) ((type list))
               (io list
                 (* Cons _ tail
                    (block
                        ((<> release type) tail)
                      (free list)))))
         
         (func (<> next type) ((type list))
               (out type)
               (return
                 (match list
                   (* Cons _ tail tail)
                   (default ((<> Empty a))))))
         
         (func (<> nth type) ((int index) (type list))
               (out (<> Maybe a))
               (return
                 (match list
                   (* Cons head tail
                      (case (== index 0) ((<> Just a) head)
                            otherwise    ((<> nth type) (-- index) tail)))
                   (default ((<> Nothing a))))))

         (func (<> drop type) ((int index) (type list))
               (out type)
               (return
                 (case (== index 0) list
                       otherwise    (match list
                                      (* Cons _ tail ((<> drop type) (-- index) tail))
                                      (default ((<> Empty a)))))))
         
         (func (<> len type) ((type list))
               (out int)
               (return (match list
                         (* Cons _ tail (+ 1 ((<> len type) tail)))
                         (default 0))))

         (func (<> has len type) ((type list) (int desired))
               (out int)
               (return (match list
                         (* Cons _ tail
                            (case (== desired 1) 1
                                  otherwise      (+ 1 ((<> has len type) tail (-- desired)))))
                         (default 0))))

         (func (<> take type) ((int len) (type list))
               (out type)
               (return (match list
                         (* Cons head tail => (> len 0)
                            ($> (<> push type) head $ ((<> take type) (-- len) tail)))
                         (default ((<> Empty a))))))

         (func (<> append type) ((type llist) (type rlist))
               (out type)
               (return (match llist
                         (* Cons head tail
                            ($> (<> push type) head $ ((<> append type) tail rlist)))
                         (default rlist))))

         (func (<> show type) ((type list))
               (io list
                 (* Cons head tail
                    (block
                        (io tail
                          (* Cons
                             (block
                                 (printf fmt head)
                               (putchar #\Space)))
                          (default (printf fmt head)))
                      ((<> show type) tail)))))

         ) ; define-List

(generic import-List (ctor type a)

         (import-class (List type)
           (= Empty (<> Empty a))
           (= Cons  (<> Cons a)
              (a head)
              (type tail)))
         
         (DEFMACRO ctor (buf &OPTIONAL len)
           (IF len
               `((<> new type Pure) ,buf ,len)
               (IF (AND (LISTP buf) (EQUAL (CAR buf) 'QUOTE))
                   `((<> new type Pure) (cast (const a []) ,buf) ,(LENGTH (CADR buf)))
                   (ERROR (FORMAT NIL "new^List^int len required for dynamic array input: ~A" buf)))))

         (fn (<> !! type) index list
             ((<> nth type) index list))

         (fn (<> push type) head tail
             ($> (<> Cons a) head tail))

         (fn (<> \: type) head tail
             ($> (<> Cons a) head tail))

         (fn (<> head type) list
             ((<> nth type) 0 list))

         (fn (<> tail type) list
             ((<> drop type) 0 list))

         (fn (<> ++ type) llist rlist
             ((<> append type) llist rlist))
         
         ) ; import-List
