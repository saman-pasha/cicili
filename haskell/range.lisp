
(generic decl-Range (type a)

         (decl-class (List type)
           (= Empty (<> Empty type))
           (= Cons  (<> Cons type)
              (a from)
              (type tail)
              (a to)
              (a step))
           (func next ((type list)) (out type))
           (func take ((int len) (type list)) (out type))
           (func show ((type list))))

         (decl) (func (<> new type) ((a from) (a to) (a step)) (out type))
         
         ) ; decl-Range

(generic impl-Range (type a fmt)

         (impl-class (List type)
           (= Empty (<> Empty type))
           (= Cons  (<> Cons type)
              (a from)
              (type tail)
              (a to)
              (a step))

           (func next ((type list))
                 (out type)
                 (return (match list
                           (* Cons from _ to step => (<= (+ from step) to)
                              ((<> Cons type) (+ from step) ((<> Empty type)) to step))
                           (default ((<> Empty type))))))
           
           (func take ((int len) (type list))
                 (out type)
                 (return (match list
                           (* Cons from _ to step => (> len 0)
                              (letn ((auto ne . #'((\. next list) list)))
                                (match ne
                                  (* Cons
                                     ((<> Cons type) from ((\. take list) (-- len) ne) to step))
                                  (default ((<> Cons type) from ne to step)))))
                           (default ((<> Empty type))))))
           
           (func show ((type list))
                 (io list
                   (* Cons head tail
                      (io tail
                        (* Cons
                           (block
                               (fmt head)
                             (putchar #\Space)
                             ((\. show list) tail)))
                        (default (fmt head))))))

           (free (io this
                   (* Cons from tail to step
                      (block
                          ((<> free type) (aof tail))
                        (free this)))
                   (default (free this)))))

         (func (<> new type) ((a from) (a to) (a step))
               (out type)
               (return (case (<= from to) ((<> Cons type) from ((<> Empty type)) to step)
                             otherwise    ((<> Empty type)))))
         
         ) ; impl-Range

(generic import-Range (type a)

         (import-class (List type)
           (= Empty (<> Empty type))
           (= Cons  (<> Cons type)
              (a from)
              (type tail)
              (a to)
              (a step)))
                  
         ) ; import-Range
