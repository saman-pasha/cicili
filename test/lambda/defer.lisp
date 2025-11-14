;;; defer for let variables destruction

(header "defer.h" ()
        (guard __EMP_H__
          (struct Employee
            (member int Id)
            (member char * Name))))

(source "defer.c" (:std #f :compile #t :link "-o defer_main -L{$CWD} -ldefer.o")
        (include <stdio.h> <stdlib.h> <string.h>)
        (include "defer.h")

        (typedef func ioInt_t ((int dyn_var)) (out int))
        
        (func main ()
              (let ((defer () ; deferment using defer attribute by let
                      (printf "from defer, emp id is: %d and emp name is: %s\n" (-> emp Id) (-> emp Name))
                      (free (-> emp Name))
                      (free emp) ; if deferral is overrided so developer should do free by ownself
                      (printf "from defer, emp is freed\n"))
                    (Employee * emp . #'(alloc (sizeof Employee))) ; has custom deferment at the end of scope

                    ;; alloc has auto free deferment at the end of scope
                    (Employee * empOther . #'(alloc (sizeof Employee)))
                    (defer #t) ; means only automatic free deferment at the end of scope
                    (Employee * empOzzi . #'(malloc (sizeof Employee)))
                    
                    (char * msg . "a message from defer execution\n")
                    (char * msg_int . "int from closure: %d\n")
                    (char * msg_int_sqr . "int sqr from closure: %d\n")
                    (FILE * file . #'(fopen "./test/lambda/deferral.txt" "w"))

                    ;; closure captures static values
                    ;; closure only available in enclosing scope
                    (auto printInts . '(closure ((int x)) ; dynamic parameters
                                        (format file msg_int x)
                                        (format file msg_int_sqr (* x x))
                                        (format #t "printed to file.\n")))

                    ;; lambda won't capture anything
                    ;; nothing different of using closure instead of lambda
                    ;; let change the state but for all instances
                    (auto make_closure . '(lambda ((int state)) (out ioInt_t)
                                           (let ((int st . state)) ; state should be declared to be captured
                                             (return '(closure ((int dyn_var)) (out int)
                                                       (return (+ st dyn_var)))))))
                    
                    (auto clo1 . #'(make_closure 10))
                    (auto clo2 . #'(make_closure 20))
                    )
                
                (format file "first line from main execution\n")

                ;; both prints 25, keeps only last state
                (format #t "clo1: %d\n" (clo1 5))
                (format #t "clo2: %d\n" (clo2 5))

                (printInts 3)
                (printInts 5)
                
                ;; defer after some task done
                (defer* ((FILE * file) (char * msg)) ; deferment using defer builtin macro, capture list required
                  (format file "%s\n" msg)
                  (fclose file)
                  (format #t "defer msg printed to file.\n"))
                
                (set (-> emp Id)   100
                     (-> emp Name) (calloc 8 (sizeof char)))
                (memcpy (-> emp Name) "Jon Doe\0" 8)
                
                (format #t "emp id is: %d and emp name is: %s\n" (-> emp Id) (-> emp Name))

                )))
