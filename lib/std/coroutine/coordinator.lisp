;;; Cicili Coordinator Mechanic

(header "coordinator.h" ()
        (guard __COORDINATOR_H__
          (include <stdlib.h>)
          (include <unistd.h>)
          (include <setjmp.h>)

          (struct Coroutine
            (member int     status)
            (member void *  args)
            (member func    routine ((void * args) ((struct Coroutine) * coroutine)) (out int))
            (member (struct Coroutine) * next)) ; nil
        
          (struct Coordinator
            (member Coroutine * head)        ; nil
            (member Coroutine * tail)        ; nil
            (member bool        m_logging)   ; false
            (member jmp_buf     main))
          
          (decl) (method (Coordinator . reg_task)    ((Coroutine * coroutine)))
          (decl) (method (Coordinator . poll)        ((Coroutine * coroutine)) (out bool))
          (decl) (method (Coordinator . loop)        ())
          (decl) (method (Coordinator . set_logging) ((bool logging)))

          (async-handle-decl)
        
          ))


(source "coordinator.c" (:compile #t :link #f)
        (include <stdio.h>)
        (include <stdbool.h>)
        (include "coordinator.h")

        (method (Coordinator . reg_task) ((Coroutine * coroutine))
                (if (-> this m_logging) (printf "coroutine: register %p\n" coroutine))
                
                (set (-> coroutine next) nil)
                
                (if (== (-> this head) nil)
                    (block (set (-> this head) coroutine)      ; no any coroutine
                      (set (-> this tail) coroutine))
                    (block (set (-> this tail next) coroutine) ; there is at least one
                      (set (-> this tail) coroutine))))
                        

        (method (Coordinator . poll) ((Coroutine * coroutine)) (out bool)
                (if (== (-> coroutine status) -1)
                    (block
                      (if (-> this m_logging) (printf "coroutine: poll %p\n" coroutine))
                      (set (-> coroutine status) 0)
                      (return ((-> coroutine routine) (-> coroutine args) coroutine)))
                    
                    ;; save main restore point
                    (let ((int tmp_status . #'(setjmp (-> this main))))
                      (switch tmp_status
                        (case -1
                          (if (-> this m_logging) (printf "coroutine: suspend %p\n" coroutine))
                          (set (-> coroutine status) -1)
                          (return #t))
                        (case 0
                          (if (-> this m_logging) (printf "coroutine: start %p\n" coroutine))
                          (set (-> coroutine status) 0)
                          (return ((-> coroutine routine) (-> coroutine args) coroutine)))
                        (default
                            (if (-> this m_logging)
                                (fprintf stderr "coroutine: unhandled error %p status %d\n" coroutine tmp_status))
                          (set (-> coroutine status) tmp_status)
                          (return #f))))))


        (method (Coordinator . loop) ()
                (if (-> this m_logging) (printf "coordinator looping\n"))

                (let ((Coroutine * prev . nil)
                      (Coroutine * current . nil))
                  
                  (while #t
                    ;; (if (-> this m_logging)
                    ;;     (printf "coroutine list %p %p %p %p\n"
                    ;;       (-> this head) current (? current (-> current next) nil) (-> this tail)))
                    
                    (if (== current nil)
                        (block (set current (-> this head))
                          (if (== current nil) (usleep 1))) ; wait a microsecond
                        
                        (block
                            (if (-> this poll current)
                                ;; forward
                                (if (== current (-> this tail))
                                    (block (set prev nil)
                                      (set current (-> this head)))
                                    (block (set prev current)
                                      (set current (-> current next))))
                                
                                ;; remove current
                                (if (== current (-> this head))
                                    (block (set (-> this head) (-> current next))
                                      (if (== current (-> this tail))
                                          (block (set (-> this tail) nil)
                                            (free current)
                                            (set current nil))
                                          (block (free current)
                                            (set current (-> this head)))))
                                    (if (== current (-> this tail))
                                        (block (set (-> this tail) prev)
                                          (set (-> prev next) nil)
                                          (free current)
                                          (set current (-> this head)))
                                        (block (set (-> prev next) (-> current next))
                                          (free current)
                                          (set current (-> current next)))))
                                ))))))

        
        (method (Coordinator . set_logging) ((bool logging))
                (set (-> this m_logging) logging))
        
        )
