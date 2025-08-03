;;;; asynchronous sample
(source "async.c" (:std #t :compile #t :link "-L{$CWD}../lib/std/coroutine -lasync.o -lcoordinator.o -o async_main")
        (include <stdio.h>)
        (include "../lib/std/coroutine/coordinator.h")

        (func done_callback1 ((char payload [128]))  ; done callback
              (printf "task1 the payload received: %s\n" payload)

              (async ((int * state_counter . #'(malloc (sizeof int))))
                     (defer* ((int * state_counter))
                       (free state_counter)) ; at done or error
                     
                     ;; state constants or variables
                     (let ((int counter . #'(cof state_counter))
                           (const int end . 3))

                       ;; poll
                       (sleep 1)
                       (printf "cmd3 counter update: %d\n" (++ (cof state_counter)))

                       (if (== counter end)        
                           (done '(lambda ((int c)) (format #t "cmd3 done: %d\n" c)) counter)         ; done
                           (if (> counter end)    
                               (error '(lambda () (format #t "cmd3 error\n")))                        ; error
                               (yield '(lambda ((int c)) (format #t "cmd3 yield: %d\n" c)) counter))) ; yield
                       ))
              )
        
        (func error_callback1 ((int status))         ; error callback
              (printf "task1 the routine error status: %d\n" status))

        (func done_callback2 ((char payload [128]))  ; done callback
              (printf "task2 the payload received: %s\n" payload))
        
        (func error_callback2 ((int status))         ; error callback
              (printf "task2 the routine error status: %d\n" status))

        
        (async-main

          (-> __ciciliA_Coordinator_ set_logging #t)

          (async ()
                 (let ((char buffer [128]))                 
                   (printf "polling for cmd1: ")                  ; poll
                   
                   (if (> (scanf "%s" buffer) 0)
                       (block (printf "the cmd1: %s\n" buffer)
                         (if (== (strcmp buffer "quit") 0)
                             (done done_callback1 buffer)         ; success done
                             (if (== (strcmp buffer "error") 0)
                                 (error error_callback1 -300))))  ; error raised
                       (error error_callback1 -200))))            ; error raised
          
          (async ((char * buffer . #'(malloc 128)))                    ; as a state variable
                 (printf "the state buffer: %s\n" buffer)
                 
                 (defer* ((char * buffer))
                   (printf "buffer being released\n")
                   (free buffer))
                 
                 (printf "polling for cmd2: ")                         ; polling repeatedlty
                 
                 (if (> (scanf "%s" buffer) 0)
                     (block (printf "the cmd2: %s\n" buffer)
                       (if (== (strcmp buffer "yield") 0)
                           (yield done_callback2 buffer)               ; success done  a custom callback data
                           (if (== (strcmp buffer "done") 0)
                               (done done_callback2 buffer)            ; success done  a custom callback data
                               (if (== (strcmp buffer "error") 0)
                                   (error '(lambda ((int status) (char * message))
                                            (format #t "what's happened? %d: %s\n" status message))
                                          -3 "don't know")))))         ; error raised  a custom callback error
                     (error error_callback2 -2)))                      ; error raised  a custom callback error

          ))


