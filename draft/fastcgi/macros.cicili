;;; router helper macros

(DEFMACRO make-router (router &REST routes)
  (LET ((routes routes))
    `(letn ((Route routes_defs [] . '(,@routes)))
       (letin ((* routes ((<> Leaf BTree^CStr^Route) ((<> Nil BTree^CStr^Route pair_t)))))
         (for ((int i . 0)) (< i ,(LENGTH routes)) ((++ i))
              (io (nth i routes_defs)
                (= route (\, path)
                   (io ((<> insert BTree^CStr^Route) routes path route)
                     (Right new_routes (block ((<> free BTree^CStr^Route) (aof routes))
                                         (set routes new_routes)))
                     (Left error
                           (block (format #f "router error occured! ")
                             ((<> show BTree^CStr^Route^Error) error)
                             (putchar #\Newline)
                             (break)))))))
         ((<> start Router) ,router)))))

