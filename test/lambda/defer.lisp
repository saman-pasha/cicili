;;; defer for let variables destruction

(header "defer.h" ()
        (guard __EMP_H__
          (struct Employee
            (member int Id)
            (member char * Name))))

(source "defer.c" (:std #f
                        :compile #t
                        :link "-o defer_main -L{$CWD} -ldefer.o")
        (include <stdio.h> <stdlib.h> <string.h>)
        (include "defer.h")

        (func main ()
              (let ((defer () ; deferment using defer attribute by let
                      (printf "from defer, emp id is: %d and emp name is: %s\n" ($ emp Id) ($ emp Name))
                      (free ($ emp Name))
                      (free emp) ; if deferral is overrided so developer should do free by ownself
                      (printf "from defer, emp is freed\n"))
                    (Employee * emp . #'(alloc (sizeof Employee))) ; has custom deferment at the end of scope
                    (Employee * empOther . #'(alloc (sizeof Employee))) ; alloc has auto free deferment at the end of scope
                    (defer #t) ; means only automatic free deferment at the end of scope
                    (Employee * empOzzi . #'(malloc (sizeof Employee))) ; 
                    (char * msg . "a message from defer execution\n")
                    (char * msg_int . "int from closure: %d\n")
                    (char * msg_int_sqr . "int sqr from closure: %d\n")
                    (FILE * file . #'(fopen "./test/lambda/deferral.txt" "w+"))
                    
                    (auto printInts . #'(closure ((FILE * file)
                                                  (char ** msgs . #'(cast (char * [])
                                                                      '{ msg_int msg_int_sqr }))) ; static captured values
                                            '(lambda ((int x))                    ; dynamic parameters
                                              (format file (nth 0 msgs) x)
                                              (format file (nth 1 msgs) (* x x)))))
                    
                    (auto make_closure . '(lambda ((int state)) (out auto)
                                           (return (closure ((int state))
                                                     '(lambda ((int dyn_var)) (out int)
                                                       (return (+ state dyn_var)))))))
                    (auto clo1 . #'(make_closure 10))
                    (auto clo2 . #'(make_closure 20)))
               
                (format file "first line from main execution\n")

                (format #t "clo1: %d\n" (exec clo1 5))
                (format #t "clo2: %d\n" (exec clo2 5))
                (exec printInts 5) ; into file
                
                (set ($ emp Id)   100
                     ($ emp Name) (calloc 8 (sizeof char)))

                
                ;; defer after some task done
                (defer* ((FILE * file) (char * msg)) ; deferment using defer builtin macro, capture list required
                  (format file "%s\n" msg)
                  (fclose file))
                
                (memcpy ($ emp Name) "Jon Doe\0" 8)
                
                (format #t "emp id is: %d and emp name is: %s\n" ($ emp Id) ($ emp Name))

                )))
