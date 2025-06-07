(source "multi.c" (:std #t :compile #t :link #t)
        (struct MultiReturn_t
          (member int a)
          (member int b))
        ;; * NOTICE *
        ;; multi return functions should (have (decl) ) be declared in a header file or should be static
        (static) (func aMultiReturnFunc ((int x) (int y)) (out '{(int a) (int b)})
                       (return '{ x y }))

        ; hardway but available, safe pointer of inline struct returns
        (static) (func aMultiReturnFuncPtr ((int x) (int y)) (out '{(int a) (int b)})
                       (let (((typeof (aMultiReturnFuncPtr x y)) output . '{ x y }))
                         (return output)))

        (func aMultiReturnFuncKV ((int x) (int y)) (out MultiReturn_t)
              (return (cast MultiReturn_t '{ $a x $b y })))

        (static) (func aMultiReturnFuncS ((int x) (int y)) (out '{(int a) (int b)})
                       (let (((typeof (aMultiReturnFuncS x y)) s . '{ x y })) 
                         (return s)))
        
        (func main ()
              (let ((int n . 3)
                    (int t . 4)
                    (MultiReturn_t mrt)
                    ((typeof (aMultiReturnFunc 1 1)) mr)
                    ((typeof (aMultiReturnFuncPtr 1 1)) mrtPtr))
                (set mr (aMultiReturnFunc n t))
                (printf "a: %d, b: %d\n" ($ mr a) ($ mr b))
                (set mrt (aMultiReturnFuncKV (++ n) (++ t)))
                (printf "a: %d, b: %d\n" ($ mrt a) ($ mrt b))
                (set mrtPtr (aMultiReturnFuncPtr (++ n) (++ t)))
                (printf "a: %d, b: %d\n" ($ mrtPtr a) ($ mrtPtr b))
                )))
