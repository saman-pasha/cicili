
(generic specialize-Range-header (type a)
         
         (class-header type ((<> Cons Range a) (a from) ((<> Maybe type) tail) (a to) (a step)))

         (decl) (func (<> new type) ((a from) (a to) (a step)) (out (<> Maybe type)))
         (decl) (func (<> release type) (((<> Maybe type) list)))
         
         (inline) (func (<> free type) (((<> Maybe type) * list)) ; specified for letin
                        ((<> release type) (cof list)))

         (decl) (func (<> next type) (((<> Maybe type) list)) (out (<> Maybe type)))
         (decl) (func (<> take type) ((int len) ((<> Maybe type) list)) (out (<> Maybe type)))
         (decl) (func (<> show type) (((<> Maybe type) list)))
         )

(generic specialize-Range-source (type a fmt)
         
         (class-source type ((<> Cons Range a) (a from) ((<> Maybe type) tail) (a to) (a step)))

         (func (<> new type) ((a from) (a to) (a step))
               (out (<> Maybe type))
               (return (case (<= from to) ($> (<> Just type) $ (<> Cons Range a) from ((<> Nothing type)) to step)
                             otherwise    ((<> Nothing type)))))
         
         (func (<> release type) (((<> Maybe type) list))
               (io list
                 (Just (= ls * _ from tail to step)
                   (block
                       ((<> release type) tail)
                     (free ls)))))
         
         (func (<> next type) (((<> Maybe type) list))
               (out (<> Maybe type))
               (return (match list
                         (Just (= ls * _ from _ to step) => (<= (+ from step) to)
                               ($> (<> Just type) $ (<> Cons Range a) (+ from step) ((<> Nothing type)) to step))
                         (default ((<> Nothing type))))))
         
         (func (<> take type) ((int len) ((<> Maybe type) list))
               (out (<> Maybe type))
               (return (match list
                         (Just (* _ from _ to step) => (> len 0)
                               (letin ((ne ((<> next type) list) (<> free type)))
                                 (match ne
                                   (Just ($> (<> Just type) $ (<> Cons Range a) from ((<> take type) (-- len) ne) to step))
                                   (default ($> (<> Just type) $ (<> Cons Range a) from ne to step)))))
                         (default ((<> Nothing type))))))
         
         (func (<> show type) (((<> Maybe type) list))
               (io list
                 (Just (* _ head tail)
                   (io tail
                     (Just (block
                               (printf fmt head)
                             (putchar #\Space)
                             ((<> show type) tail)))
                     (default (printf fmt  head))))))
         )

(generic specialize-Range-import (type a)

         (class-import type ((<> Cons a) (a head) ((<> Maybe type) tail)))
         )
