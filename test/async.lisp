
(source "async.c" (:std #t :compile #t :link #t)
        (include <setjmp.h>)
        (include <unistd.h>)

        (var jmp_buf main_cmd1)
        (var jmp_buf cmd1_scan)
        (var jmp_buf main_cmd2)
        (var jmp_buf cmd2_scan)
        (var jmp_buf main_cmd3)
        (var jmp_buf cmd3_scan)

        (struct CoRoutine
          (volatile) (member func done_callback ((char payload [128])))
          (volatile) (member func error_callback ((int status))))
        
        (volatile)
        (func done_callback ((char payload [128]))  ; done callback
              (printf "the payload received: %s\n" payload))
        
        (volatile)
        (func error_callback ((int status))         ; error callback
              (printf "the routine error status: %d\n" status))

        ;; non-local exits: done, yield, error
        ;; done calls done_callback and returns from function
        ;; yield calls done_callback without returning
        ;; error calls error_callback and returns

        ;; callbacks are called to finish the function execution
        (volatile)
        (func command1 ((func _dc ((char payload [128])))
                        (func _ec ((int status))))
              
              (let ((char buffer [128]))                   ; init vars
                (printf "buffer1 is initialized once\n")   ; init actions

                (while #t
                  (if (not (setjmp cmd1_scan))
                      (longjmp main_cmd1 -1))              ; suspend
                  
                  (printf "polling for cmd1: ")            ; poll
                  (if (> (scanf "%s" buffer) 0)
                      (block
                          (printf "the cmd1: %s\n" buffer)
                        (if (== (strcmp buffer "quit") 0)
                            (block (done_callback buffer))       ; success done
                            (if (== (strcmp buffer "error") 0)
                                (block (error_callback -3) ))))  ; error raised
                      (block (error_callback -2) ))              ; error raised

                  )))
        
        (func command2 ()
              (let ((const int end . 3)
                    (int counter . 0)) ; state constants or variables

                ;; init ; processing once
                (printf "cmd2 counter initialized: %d\n" counter)

                (while #t
                  (if (not (setjmp cmd2_scan))        ; auto save
                      (longjmp main_cmd2 -2))         ; atuo suspend
                  
                  ;; poll
                  (sleep 1)
                  (printf "cmd2 counter update: %d\n" (++ counter))

                  (printf "command 2 saved state, processing\n")
                  (if (== counter end)        
                      (longjmp main_cmd2 -1)          ; done
                      (if (> counter end)    
                          (longjmp main_cmd2 -3)))    ; error
                  )))

        (func command3 ()
              (let ((const int end . 5)
                    (int counter . 0))
                (printf "cmd3 counter initialized: %d\n" counter)

                (while #t
                  (if (not (setjmp cmd3_scan))        ; auto save
                      (longjmp main_cmd3 -2))         ; atuo suspend
                  
                  (sleep 1)
                  (printf "cmd3 counter update: %d\n" (++ counter))

                  ;; processing
                  (printf "command 3 saved state, processing\n")
                  (if (== counter end)        
                      (longjmp main_cmd3 -1)          ; done
                      (if (> counter end)    
                          (longjmp main_cmd3 -3)))    ; error
                  )))
        
        (async-main
            
            (let ((volatile) (int status1 . 0)
                  (volatile) (int status2 . 0)
                  (volatile) (int status3 . 0))
              
              (while #t

                (if (== status1 -1)
                    (block
                        (set status1 0)
                      (longjmp cmd1_scan -1))
                    (switch (setjmp main_cmd1)
                      (case 0
                        (command1 done_callback error_callback)
                        (break))
                      (case -1
                        (set status1 -1)
                        (puts "cmd1 suspends")
                        (break))
                      (default
                          (puts "cmd1 got error")
                        (exit EXIT_SUCCESS))))


                (if (== status2 -2)
                    (block
                        (set status2 0)
                      (longjmp cmd2_scan -1))
                    (switch (setjmp main_cmd2)
                      (case 0
                        (puts "cmd2 before initialization")
                        (command2)
                        (longjmp cmd2_scan -1))
                      (case -1
                        (puts "cmd2 succeed, again")
                        (break))
                      (case -2
                        (set status2 -2)
                        (puts "cmd2 suspends")
                        (break))
                      (default
                          (puts "cmd2 got error")
                        (exit EXIT_SUCCESS))))


                (if (== status3 -2)
                    (block
                        (set status3 0)
                      (longjmp cmd3_scan -1))
                    (switch (setjmp main_cmd3)
                      (case 0
                        (puts "cmd3 before initialization")
                        (command3)
                        (longjmp cmd3_scan -1))
                      (case -1
                        (puts "cmd3 succeed, again")
                        (break))
                      (case -2
                        (set status3 -2)
                        (puts "cmd3 suspends")
                        (break))
                      (default
                          (puts "cmd3 got error")
                        (exit EXIT_SUCCESS))))

                ))))
