;;; demonstrating function variable and lambda
(header "lambda.h" ()
        (guard __SHAPE_H__
          (struct Shape
            (member int length)
            (member int width)
            (member func dynamicDraw (((struct Shape) * _))))

          (decl) (method (Shape . staticDraw) ())))

(source "lambda.c" (:std #f
                         :compile #t
                         :link "-o main -L{$CWD} -llambda.o")
        (include <stdio.h>)
        (include <stdlib.h>)
        (include "lambda.h")

        (var func aFunc ((int x) (int y)) (out int))

        (func mulFun ((int x) (int y)) (out int)
              (return (* x y)))

        (typedef func twoIntInputFn_t ((int _) (int _)) (out int))
        
        (typedef (typeof aFunc) otherWayDefFn_t)
        
        (func main ()
              ;; using auto instead of func to avoid double decl func type
              (let ((auto addFunVar . '(lambda ((int x) (int y)) (out int) (return (+ x y))))
                    
                    (func addFunVar1 ((int _) (int _)) (out int) . 
                          '(lambda ((int x) (int y)) (out int)
                            (let ((auto addFunVar .
                                        '(lambda ((int x) (int y)) (out int) (return (* (+ x y) (+ x y))))))
                              (return (addFunVar x y)))))

                    (func doMath ((twoIntInputFn_t _) (int _) (int _)) .
                          '(lambda ((twoIntInputFn_t mathFunc) (int a) (int b))
                            (printf "from lambda as function pointer as parameter: %D\n" (mathFunc a b))))
                    
                    (int x . 4)
                    (int y . 5)

                    (defer () (printf "Shape destructured\n"))
                    (Shape shp . '{ 10 20 }))
                
                (printf "addition of x and y: %d\n" (addFunVar x y))

                (set aFunc mulFun)
                (printf "product of x by y: %d\n" (aFunc x y))

                (printf "combo of x by y: %d\n" (addFunVar1 x y))

                (doMath '(lambda ((int m) (int n)) (out int)
                          (return (+ (* m n) (* m n))))
                  6 7)

                (set ($ shp dynamicDraw) '(lambda ((Shape * shp))
                                           (printf "shape area is: %d\n" (* (-> shp length) (-> shp width)))))
                (($ shp dynamicDraw) (aof shp)) ; calling function attribute
                
                ('(lambda ((Shape * shp)) ; calling instant lambda
                   (printf "shape env is: %d\n" (* 2 (+ (-> shp length) (-> shp width)))))
                  (aof shp))

                (return EXIT_SUCCESS))))
