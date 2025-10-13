
(generic decl-Range (type a)

         (decl-class (List type)
           (= Empty (<> Empty type))
           (= Cons  (<> Cons type)
              (a from)
              (type tail)
              (a to)
              (a step)))

         (decl) (func (<> new type) ((a from) (a to) (a step)) (out type))
         (decl) (func (<> release type) ((type list)))
         
         (inline) (func (<> free type) ((type * list)) ; specified for letin
                        ((<> release type) (cof list)))

         (decl) (func (<> next type) ((type list)) (out type))
         (decl) (func (<> take type) ((int len) (type list)) (out type))
         (decl) (func (<> show type) ((type list)))

         ) ; decl-Range

(generic define-Range (type a fmt)

         (define-class (List type)
           (= Empty (<> Empty type))
           (= Cons  (<> Cons type)
              (a from)
              (type tail)
              (a to)
              (a step)))

         (func (<> new type) ((a from) (a to) (a step))
               (out type)
               (return (case (<= from to) ($> (<> Cons type) from ((<> Empty type)) to step)
                             otherwise    ((<> Empty type)))))
         
         (func (<> release type) ((type list))
               (io list
                 (* Cons from tail to step
                    (block
                        ((<> release type) tail)
                      (free list)))))
         
         (func (<> next type) ((type list))
               (out type)
               (return (match list
                         (* Cons from _ to step => (<= (+ from step) to)
                            ($> (<> Cons type) (+ from step) ((<> Empty type)) to step))
                         (default ((<> Empty type))))))
         
         (func (<> take type) ((int len) (type list))
               (out type)
               (return (match list
                         (* Cons from _ to step => (> len 0)
                            (letin ((ne ((<> next type) list) (<> free type)))
                              (match ne
                                (* Cons
                                   ($> (<> Cons type) from ((<> take type) (-- len) ne) to step))
                                (default ($> (<> Cons type) from ne to step)))))
                         (default ((<> Empty type))))))
         
         (func (<> show type) ((type list))
               (io list
                 (* Cons head tail
                    (io tail
                      (* Cons
                         (block
                             (fmt head)
                           (putchar #\Space)
                           ((<> show type) tail)))
                      (default (fmt head))))))

         ) ; define-Range

(generic import-Range (type a)

         (import-class (List type)
           (= Empty (<> Empty type))
           (= Cons  (<> Cons type)
              (a from)
              (type tail)
              (a to)
              (a step)))
                  
         ) ; import-Range
