(import "lib/std/pthread.lisp")

(source "thread.c" (:std #t :compile #t :link "-L{$CWD} -lthread.o -lpthread -o thread_main")
        (include <unistd.h>)
        (include <pthread.h>)
        
        (main
            (let ((int a_value . 50)
                  
                  (auto id0 . #'(go ((int a_value)) ; optinal out
                                    (format #t "a value from thread: %lu -> %d\n" (cast ulong (self)) a_value)))

                  (auto id1 . #'(go ((int input . 12)) (out void *) ; optinal out
                                    (format #t "early exit thread: %lu -> %d\n" (cast ulong (self)) input)
                                    (exit nil)
                                    (format #t "not seen section: %lu -> %d\n" (cast ulong (self)) (+ input 8))
                                    (return nil)))
                  
                  (auto runner . '(lambda () (out pthread_t)
                                   (return (go () (out void *) ; output counter
                                               (let ((int counter . 0)
                                                     (auto allocated . #'(malloc (sizeof int))))
                                                 
                                                 (while (< (1+ counter) 5)
                                                   (format #t "long running thread: %lu counter: %d\n"
                                                           (cast ulong (self)) counter)
                                                   (sleep 1))

                                                 (memcpy allocated (aof counter) (sizeof int))
                                                 (return allocated))))))

                  (auto id2 . #'(runner))
                  (auto id3 . #'(runner)))
              
              (join id0)
              (join id1)
              
              (cancel id2)
              
              (detach ((int input . 25)) ; returns id if it needs
                (format #t "detached int input from thread: %lu -> %d\n" (cast ulong (self)) input))
              
              (join id3 (int * output))
              (defer* ((int * output)) (free output))
              (format #t "output value: %d\n" (cast int (cof output)))
              
              (return 0))))
