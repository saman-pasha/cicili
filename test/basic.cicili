
(header "basic.h" (:std #f :compile #f :link #f)
        
        (guard __TEST_H__
          (@define (code "MAX_AMOUNT 1000"))
          (@define (code "MACRO (x, y) x + y * x + y"))

          (typedef int * intptr)

          (enum COLORS
            (RED . 0)
            (GREEN)
            (BLUE))

          (union Mixed
            (member int x)
            (member float y)
            (struct T
              (member double t)))

          (struct Employee
            (member int id)
            (member char * name)

            (enum OTHERS
              (YELLOW . 8)
              (BROWN))

            (union
                (member int tag_id)
              (member char * custom_tag)
              (declare tag))
            
            (struct
                (member int role_id)
              (member char * role_name)
              (member func resolve ((char * prob)) (out char *))
              (member const func sign ((char * doc)))
              (declare role)
              (declare * sub_roles [])))

          ))

(source "basic.c"
  (:std #f :compile "-c basic.c -o basic.o" :link "-o basic_main -L{$CWD} -lbasic.o")
  
  (include <stdio.h> <stdlib.h> "basic.h")

  (func main ((int argc) (char * argv []))
        (let ((Employee emp1 . '{ 1 "John Doe" })
              (Employee emp2 . '{ $id 1 $name "John Doe" })
              (Employee emp3 . '{ $id 1 $name "John Doe" $tag$tag_id 1001 })
              (Employee emp_array [] . '{ '{ 1 "John Doe" } '{ 2 "Saman Pasha" } })
              (defer #t) (Employee * emp . #'(alloc (sizeof Employee)))     ; defer #t means auto free defferal
              (Employee * emps_arr . #'(alloc 5 (sizeof Employee)))         ; when using alloc 'defer #t' is optional
              )
          
          ;; use $ for access inner member too
          (set (cof emp) emp1)
          (printf "sum of a series: %d\n" (+ 1 2 3 4 5))
          (printf "is id one? %s\n" (? (== ($ emp1 id) 1) "true" "false"))
          (printf "first emp: %s, second emp: %s\n" ($ (nth 0 emp_array) name) ($ (nth 1 emp_array) name))
          (printf "postfix 1+: %d, prefix ++: %d\n" (1+ (-> emp id)) (++ (-> emp id)))
          (+= (-> emp id) 1)
          (printf "after assignment: %d\n" ($ emp1 id))
          (format #t "access inner member: ($ emp3 tag tag_id): %d\n" ($ emp3 tag tag_id))
          )
        
        (block
            (printf "Hi from inside of a block\n"))
        
        (return 0)))
