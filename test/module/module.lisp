(header "module.h" ()
        (guard __MODULE_H_
          (struct Employee
            (member int id)
            (member char name [12]))

          ;; refers to Employee outside module a
          (decl) (method Employee->print1 ((Employee * emp)))
          ;; refers to Employee outside any module because of starts with '/'
          (decl) (method Employee->print2 ((/Employee * emp)))

          (var long varAAA)

          (enum SHAPES
            (Square)
            (Circle)
            (Rectangle))
          
          (module a
                  (struct Employee
                    (member int id)
                    (member char name [12]))

                  ;; therefor current scope is a every objects without '/' resolution sign refer will be defined inside a
                  (decl) (method Employee->print ()) ; refers to Employee inside module a

                  ;; refers to Employee outside module a '/' sign means free resolution
                  (decl) (func print ((/Employee * emp)))

                  (decl) (func aFunc ((int x) (int y)) (out '{(int a) (int b)})) ; inside module a

                  (module c
                          (decl) (func aFunc ((int x) (int y)) (out '{(int a) (int b)})) ; inside module a/c

                          (var long varAAA)

                          (module d
                                  (struct Employee
                                    (member int id)
                                    (member char name [12]))
                                  ;; refers to Employee inside module d
                                  (decl) (method Employee->print ()) 
                                  
                                  (decl) (func aFunc ((int x) (int y)) (out '{(int a) (int b)})) ; inside module a/c/d
                                  )
                          )
                  )
          )

        
        (module b ; without guard
                (enum SHAPES
                  (Square)
                  (Circle . 5)
                  (Rectangle))
                
                (decl) (func aFunc ((int x) (int y)) (out '{(int a) (int b)})) ; same name inside module b
                
                ))

(source "module.c" (:std #t :compile #t :link #f)
        (include "module.h")

        (method Employee->print1 ((Employee * emp)) ; refers to Employee outside module a
                (printf "same emp id is: %d, %d\n" ($ this id) ($ emp id)))
        (method Employee->print2 ((/Employee * emp)) ; refers to Employee outside any module because of starts with '/'
                (printf "same emp id is: %d, %d\n" ($ this id) ($ emp id)))

        (var long varAAA . 567)
        
        (module a
                ;;;; / resolution sign refer to type inside a
                (method Employee->print ()
                        (printf "inside a emp id is: %d\n" ($ this id)))

                (func print ((/Employee * emp)) ; refers to Employee outside module a '/' sign means free resolution
                      (printf "inside for free emp id is: %d\n" ($ emp id)))

                (func aFunc ((int x) (int y)) (out '{(int a) (int b)}) ; inside module a
                      (return '{ ('(lambda ((int g)) (out int) (return (+ 3 g))) x) y }))

                (module c
                        (func aFunc ((int x) (int y)) (out '{(int a) (int b)}) ; inside module c
                              (return '{ ('(lambda ((int g)) (out int) (return (+ 6 g))) x) y }))

                        (var long varAAA . 876)
                        
                        (module d
                                (method Employee->print ()
                                        (printf "inside d emp id is: %d\n" ($ this id)))

                                (func aFunc ((int x) (int y)) (out '{(int a) (int b)}) ; inside module d
                                      (return '{ ('(lambda ((int g)) (out int) (return (+ 9 g))) x) y }))
                                )
                        )
                )

        (module b
                (func aFunc ((int x) (int y)) (out '{(int a) (int b)}) ; same name inside module b
                      (let (((typeof (b/aFunc x y)) s . '{ x y })) 
                        (return s)))
                ))

(source "main.c" (:std #t :compile #t :link "-L{$CWD} -lmodule.o -lmain.o -o main -v")
        (include "module.h")
        
        ;; (typedef (struct a) aA)
        
        (func main ()
              (let ((int n . 3)
                    (int t . 4)
                    (auto mra  . #'(a/aFunc  n t))
                    (auto mrb  . #'(b/aFunc  n t))
                    (auto mrc  . #'(a/c/aFunc    n t)) ; other direct way to call
                    (auto mrd  . #'(a/c/d/aFunc  n t))
                    (Employee       fEmp . '{ 10 "Cicili" })
                    (a/Employee     aEmp . '{ 11 "Jon Doe" })
                    (a/c/d/Employee dEmp . '{ 12 "Saman Pasha" })
                    )
                (format #t "a module a: %d, b: %d\n" ($ mra a) ($ mra b))
                (format #t "b module a: %d, b: %d\n" ($ mrb a) ($ mrb b))
                (format #t "c module a: %d, b: %d\n" ($ mrc a) ($ mrc b))
                (format #t "d module a: %d, b: %d\n" ($ mrd a) ($ mrd b))
                (-> fEmp print1 (cast (Employee *) (aof aEmp)));
                (-> fEmp print2 (cast (Employee *) (aof dEmp)));
                (-> aEmp print);
                (-> dEmp print);
                (format #t "free varAAA: %ld, inside c: %ld\n" varAAA a/c/varAAA)
                (format #t "free Circle: %d, inside b: %d\n" Circle b/Circle)
                (format #t "free Rectangle: %d, inside b: %d\n" Rectangle b/Rectangle)
                ))
        )
