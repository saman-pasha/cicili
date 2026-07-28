
(header "../haskell.h"
  (make :std #t)

  (guard __CICILI_HASKELL_H_DECL__
    
    (decl) (func __h_free_data_router ((void * instance)))
    (decl) (func __h_free_class_router ((void * instance)))

    (typedef char * CStr)
    (typedef FILE * CFile)
    (typedef void * CVoid)
    
    ;; cicili analyze stack
    (typedef (Tuple int CVoid size_t) __h_StackItem)
    (decl) (func __h_init_haskell ())
    (decl) (func __h_stack_push ((CVoid pointer)) (out CVoid))
    (decl) (func __h_stack_push_func ((CStr func_name)))
    (decl) (func __h_stack_push_data ((CStr buffer)))
    (decl) (func __h_stack_push_separator ())
    (decl-BoxedList BoxedList^__h_StackItem __h_StackItem)
    (decl-BoxedList BoxedList^BoxedList^__h_StackItem BoxedList^__h_StackItem)
    (decl) (func __h_stack_show_item ((BoxedList^__h_StackItem stack) (int counter)))
    (decl) (func __h_stack_show ())
    (decl) (func __h_stack () (out BoxedList^BoxedList^__h_StackItem))
    (decl) (func __h_stack_free ((BoxedList^BoxedList^__h_StackItem * pin)))
    (decl) (func __h_stack_free_main ((BoxedList^BoxedList^__h_StackItem * pin)))

    (enum __h_DefaultCtor
      (__h___t))

    (decl-Bool)
    
    ;; data Ordering = LT EQ GT
    (decl-data Ordering LT EQ GT)

    (typedef char Char)

    (decl-Maybe CStr)
    (decl-Maybe CFile)
    
    (decl-List   List^Bool Bool)
    (decl-List   List^int  int)
    (decl-String List^char char)

    (decl-Vector Str       char T)
    (decl-Vector String    Char NIL)

    (decl-Range Range^int  int  List^int)
    (decl-Range Range^char char List^char)

    (decl-List List^List^Bool List^Bool)
    (decl-List List^List^int  List^int)
    (decl-List List^List^char List^char)
    ;; (decl-List List^String    String)
    (decl-List List^CStr      CStr)

    (decl-Cell List^Bool)
    (decl-Cell List^int)
    (decl-Cell List^char)
    ;; (decl-Cell String)

    (decl-Rc List^Bool)
    (decl-Rc List^int)
    (decl-Rc List^char)
    ;; (decl-Rc String)
    
    (decl-Monoid (<> All     Bool) Bool)
    (decl-Monoid (<> Any     Bool) Bool)
    (decl-Monoid (<> Sum     int)  int)
    (decl-Monoid (<> Product int)  int)

    (decl-Monoid (<> List   Bool) (<> List Bool))
    (decl-Monoid (<> List   int)  (<> List int))
    (decl-Monoid (<> List   char) (<> List char))
    ;; (decl-Monoid (<> String Char) (<> List char))

    (decl-Functor-List List^int^int   int  int)
    (decl-Functor-List List^int^char  int  char)
    (decl-Functor-List List^int^Bool  int  Bool)
    (decl-Functor-List List^char^char char char)
    (decl-Functor-List List^char^int  char int)
    (decl-Functor-List List^char^Bool char Bool)

    (decl-Functor-Maybe Maybe^int^int   int  int)
    (decl-Functor-Maybe Maybe^int^char  int  char)
    (decl-Functor-Maybe Maybe^int^Bool  int  Bool)
    (decl-Functor-Maybe Maybe^char^char char char)
    (decl-Functor-Maybe Maybe^char^int  char int)
    (decl-Functor-Maybe Maybe^char^Bool char Bool)
    
    ) ; guard
  ) ; haskell.h

(DEFMACRO block (&REST body)
  `(PROGN ,@body))

(source "haskell.c"
  (make :compile ("-c" "haskell.c" "-o" `(IF CICILI:*DEBUG-ANALYZE* "../haskell_analyze.o" "../haskell.o")) :link #f)
  (include "../haskell.h")

  (guard __CICILI_HASKELL_H_IMPL__
    
    (func __h_free_data_router ((void * instance))
          (func __h_free_ ((void *** instance))
                ((cast (func _ ((void * this))) (cof (cof instance))) instance))
          (__h_free_ instance))
    
    (func __h_free_class_router ((void * instance))
          (func __h_free_ ((void *** instance)) 
                ((cast (func _ ((void * this))) (cof (cof (cast (void ***) (cof instance))))) instance))
          (__h_free_ instance))

    ;; -- analyze
    ;; cicili analyzer stack types and functions
    ;; BOOM BOOM
    ;; will be initialized in the main function 
    (static) (var BoxedList^BoxedList^__h_StackItem __h_stack_private)
    (static) (var BoxedList^BoxedList^__h_StackItem __h_stack_realloc)
    (static) (var BoxedList^__h_StackItem __h_stack_current)
    (static) (var bool __h_stack_initialized)
    (static) (var int __h_stack_level)

    (func __h_init_haskell ()
          (set __h_stack_private ((<> BoxedNil BoxedList^__h_StackItem)))
          (set __h_stack_realloc ((<> BoxedNil BoxedList^__h_StackItem)))
          (set __h_stack_current ((<> BoxedNil __h_StackItem)))
          (set __h_stack_initialized true)
          (set __h_stack_level 0))
    
    (func __h_stack_push ((CVoid pointer))
          (out void *)
          (when __h_stack_initialized
            (set __h_stack_current ((<> BoxedCons __h_StackItem)
                                    (cast __h_StackItem '{ __h_stack_level pointer (cof (cast (size_t *) pointer)) })
                                    __h_stack_current)))
          (return pointer))

    (func __h_stack_push_func ((CStr func_name))
          (when __h_stack_initialized
            (set __h_stack_current ((<> BoxedCons __h_StackItem)
                                    (cast __h_StackItem '{ (++ __h_stack_level) (cast CVoid func_name) 0 })
                                    __h_stack_current))))

    (func __h_stack_push_data ((CStr buffer))
          (when __h_stack_initialized
            (set __h_stack_current ((<> BoxedCons __h_StackItem)
                                    (cast __h_StackItem '{ __h_stack_level (cast CVoid buffer) 1 })
                                    __h_stack_current))))

    (func __h_stack_push_separator ()
          (when __h_stack_initialized
            (set __h_stack_current ((<> BoxedCons __h_StackItem) (cast __h_StackItem '{ __h_stack_level 0 0 })
                                    __h_stack_current))))

    (func __h_stack_show_item ((BoxedList^__h_StackItem stack) (int counter))
          (io# stack
            (* Cons head tail
               (io head
                 ((\, level pointer address)
                  (if (and (== pointer 0) (== address 0))
                      (io# tail
                        (* Cons fhead ftail
                           (io fhead
                             ((\, flevel fpointer faddress)
                              (if (== faddress 0)
                                  (block
                                    (printf "%*d,%*d%*cstack trace function: %s\n"
                                      4 counter 4 flevel flevel (? (== (% flevel 2) 0) #\- #\Space) (cast CStr fpointer))
                                    (__h_stack_show_item ftail counter))
                                  (block
                                    (printf "%*d,%*d%*cstack trace data: %s\n"
                                      4 counter 4 flevel flevel (? (== (% flevel 2) 0) #\- #\Space) (cast CStr fpointer))
                                    (__h_stack_show_item ftail counter)))))))
                      (if (and pointer (== (cof (cast (size_t *) pointer)) address))
                          (block
                            (printf "%*d,%*d%*c* alive pointer: %p points to address: %zx *\n"
                              4 counter 4 level level #\Space pointer address)
                            (__h_stack_show_item tail counter))
                          (block
                            (printf "%*d,%*d%*c+ dead pointer: %p points to address: %zx +\n"
                              4 counter 4 level level #\Space pointer address)
                            (__h_stack_show_item tail counter )))))))))
    
    (func __h_stack_show ()                
          (func __h_stack_iter_ ((BoxedList^BoxedList^__h_StackItem stack) (int counter))
                (while true
                  (io# stack
                    (* Cons head tail
                       (block
                         (__h_stack_show_item head (++ counter))
                         (set stack tail)))
                    (default (break)))))
          
          (when __h_stack_initialized
            (printf "--- [Cicili analyzer stack trace (show state only)]:\n")
            (__h_stack_iter_ __h_stack_private 0)
            (printf "--- [stack trace reallocated (show state only)]:\n")
            (__h_stack_iter_ __h_stack_realloc 0)
            (printf "--- [stack trace end]\n"))

          ) ; __h_stack_show

    (func __h_stack ()
          (out BoxedList^BoxedList^__h_StackItem)
          (return __h_stack_private))
    
    ;; check the stack by items        
    (func __h_stack_free ((BoxedList^BoxedList^__h_StackItem * pin))
          (func __h_stack_free_ ((BoxedList^__h_StackItem stack) (bool isAlive))
                (io# stack
                  (* Cons head tail
                     (io head
                       ((\, _ pointer address)
                        (if (and (== pointer 0) (== address 0))
                            (io# tail
                              (* Cons _ ftail
                                 (if isAlive
                                     (block
                                       (set __h_stack_current ((<> clone Box BoxedList^__h_StackItem) ftail)))
                                     (block
                                       (letin* ((tmp ((<> clone Box BoxedList^__h_StackItem) ftail)))
                                         ((<> free Box BoxedList^__h_StackItem) (aof __h_stack_current))
                                         ;; save root for next inner stack
                                         (set __h_stack_current tmp)
                                         ;; (set __h_stack_current ((<> BoxedNil __h_StackItem)))
                                         )))))
                            (if (and pointer (== (cof (cast (size_t *) pointer)) address))
                                ;; alive
                                (block
                                  (set __h_stack_private
                                    ((<> BoxedCons BoxedList^__h_StackItem)
                                     ((<> clone Box BoxedList^__h_StackItem) stack) __h_stack_private))
                                  ((<> free Box BoxedList^__h_StackItem) (aof __h_stack_current))
                                  (__h_stack_free_ tail true))
                                ;; dead
                                (block
                                  (letin* ((tmp ((<> clone Box BoxedList^__h_StackItem) tail)))
                                    ((<> free Box BoxedList^__h_StackItem) (aof __h_stack_current))
                                    (set __h_stack_current tmp)
                                    (__h_stack_free_ tail false))))
                            ))))))

          ;; (func __h_stack_check_ ((BoxedList^BoxedList^__h_StackItem stack))
          ;;       (io# stack
          ;;         (* Cons shead stail -># shead
          ;;            (* Cons head
          ;;               (io head
          ;;                 ((\, _ pointer address)
          ;;                  (if (and (== pointer 0) (== address 0))
          ;;                      (__h_stack_check_ stail)
          ;;                      (if (and pointer (== (cof (cast (size_t *) pointer)) address))
          ;;                          (block
          ;;                            (__h_stack_check_ stail))
          ;;                          (block
          
          ;;                            (func __h_stack_check_any_ ((BoxedList^__h_StackItem inner_stack))
          ;;                                  (out bool)
          ;;                                  (io# inner_stack
          ;;                                    (* Cons head tail
          ;;                                       (io head
          ;;                                         ((\, _ pointer address)
          ;;                                          (if (and pointer (== (cof (cast (size_t *) pointer)) address))
          ;;                                              (return true)
          ;;                                              (return (__h_stack_check_any_ tail)))))))
          ;;                                  (return false))
          
          ;;                            (letin* ((hasAny (__h_stack_check_any_ shead)))
          ;;                              (unless hasAny
          ;;                                (letin* ((tmp ((<> delete BoxedList^BoxedList^__h_StackItem)
          ;;                                               __h_stack_private
          ;;                                               stack)))
          ;;                                  ;; realloc
          ;;                                  (set __h_stack_realloc
          ;;                                    ((<> push BoxedList^BoxedList^__h_StackItem) shead __h_stack_realloc))

          ;;                                  ((<> free Box BoxedList^BoxedList^__h_StackItem) (aof __h_stack_private))
          ;;                                  (set __h_stack_private tmp)
          
          ;;                                  ;; ((<> free Box BoxedList^__h_StackItem) (aof shead))
          
          ;;                                  (__h_stack_check_ stail)))))))))))))
          
          (-- __h_stack_level)
          (when __h_stack_initialized
            (__h_stack_free_ __h_stack_current false)
            ;; (__h_stack_check_ __h_stack_private)
            )
          
          ) ; __h_stack_free

    (func __h_stack_free_main ((BoxedList^BoxedList^__h_StackItem * pin))
          (func __h_stack_show_ ((BoxedList^__h_StackItem stack) (int counter))
                (out bool)
                (io# stack
                  (* Cons head tail
                     (io head
                       ((\, level pointer address)
                        (if (and (== pointer 0) (== address 0))
                            (io# tail
                              (* Cons fhead ftail
                                 (io fhead
                                   ((\, flevel fpointer faddress)
                                    (if (== faddress 0)
                                        (block
                                          (printf "%*d,%*d%*cstack trace function: %s\n"
                                            4 counter 4 flevel flevel (? (== (% flevel 2) 0) #\- #\Space) (cast CStr fpointer))
                                          (__h_stack_show_ ftail counter))
                                        (block
                                          (printf "%*d,%*d%*cstack trace data: %s\n"
                                            4 counter 4 flevel flevel (? (== (% flevel 2) 0) #\- #\Space) (cast CStr fpointer))
                                          ;; (free fpointer)
                                          (__h_stack_show_ ftail counter))))))) ; __h_stack_show_item
                            (block
                              (if (and pointer (== (cof (cast (size_t *) pointer)) address))
                                  (block
                                    (printf "%*d,%*d%*c* alive pointer: %p points to address: %zx *\n"
                                      4 counter 4 level level #\Space pointer address)
                                    (__h_stack_show_ tail counter))
                                  (return false)))))
                       (default (return false))))
                  (default (return false)))
                (return true))
          
          (func __h_stack_iter_ ((BoxedList^BoxedList^__h_StackItem stack) (int counter))
                (while true
                  (io# stack
                    (* Cons head tail
                       (block
                         (set stack tail)
                         (? (__h_stack_show_ head (++ counter)) counter (-- counter))
                         ((<> free Box BoxedList^__h_StackItem) (aof head))))
                    (default (break)))))

          (when __h_stack_initialized
            (__h_stack_free pin)
            (printf "--- [Cicili analyzer stack trace]:\n")
            (__h_stack_iter_ __h_stack_private 0)
            ;; (printf "--- [stack trace reallocated]:\n")
            ;; (__h_stack_iter_ ((<> reverse BoxedList^BoxedList^__h_StackItem) __h_stack_realloc) 0)
            (printf "--- [stack trace end]\n"))

          ) ; __h_stack_free_main

    (impl-BoxedList BoxedList^__h_StackItem __h_StackItem
                    (\\ -f -v
                        (match -v
                          ((\, level pointer address)
                           (fprintf -f "%d, %p: %zu" level pointer address))
                          (default 0)))
                    "\n")
    (impl-BoxedList BoxedList^BoxedList^__h_StackItem BoxedList^__h_StackItem
                    (\\ -f -v ((<> show BoxedList^__h_StackItem) -f -v))
                    "\n")

    (impl-Bool)
    
    (impl-data Ordering LT EQ GT)
    
    (impl-Maybe CStr)
    (impl-Maybe CFile)
    
    (impl-List   List^Bool Bool (\\ -f -v ((<> show Bool) -f -v)) " ")
    (impl-List   List^int  int  (\\ -f -v (fprintf -f "%d" -v))   " ")
    (impl-String List^char char (\\ -f -v (fprintf -f "%c" -v))   " ")

    (impl-Vector Str       char (\\ -f -v (fprintf -f "%c" -v))   "" T T)
    (impl-Vector String    Char (\\ -f -v (fprintf -f "%c" -v))   "" T NIL)
    
    (impl-Range Range^int  int  List^int  (\\ -f -v (fprintf -f "%d" -v)) " ")
    (impl-Range Range^char char List^char (\\ -f -v (fprintf -f "%c" -v)) " ")

    (impl-List List^List^Bool List^Bool (\\ -f -v ((<> show List^Bool) -f -v)) " ")
    (impl-List List^List^int  List^int  (\\ -f -v ((<> show List^int)  -f -v)) " ")
    (impl-List List^List^char List^char (\\ -f -v ((<> show List^char) -f -v)) " ")
    ;; (impl-List List^String    String    (\\ -f -v ((<> show String)    -f -v)) " ")
    (impl-List List^CStr      CStr      (\\ -f -v (fprintf -f "%s" -v))        " ")

    (impl-Cell List^Bool)
    (impl-Cell List^int)
    (impl-Cell List^char)
    ;; (impl-Cell String)

    (impl-Rc List^Bool)
    (impl-Rc List^int)
    (impl-Rc List^char)
    ;; (impl-Rc String)

    (impl-Monoid (<> All     Bool) Bool (True)  and_Bool)
    (impl-Monoid (<> Any     Bool) Bool (False) or_Bool)
    (impl-Monoid (<> Sum     int)  int  0       +)
    (impl-Monoid (<> Product int)  int  1       *)
    
    (impl-Monoid (<> List Bool)
      (<> List Bool)
      ((<> Nil Bool))
      (<> append List Bool))
    (impl-Monoid (<> List int)
      (<> List int)
      ((<> Nil int))
      (<> append List int))
    (impl-Monoid (<> List char)
      (<> List char)
      ((<> Nil char))
      (<> append List char))
    ;; (impl-Monoid (<> String Char)
    ;;   (<> List char)
    ;;   ((<> Nil char))
    ;;   (<> append List char))

    (impl-Functor-List List^int^int   int  int)
    (impl-Functor-List List^int^char  int  char)
    (impl-Functor-List List^int^Bool  int  Bool)
    (impl-Functor-List List^char^char char char)
    (impl-Functor-List List^char^int  char int)
    (impl-Functor-List List^char^Bool char Bool)

    (impl-Functor-Maybe Maybe^int^int   int  int)
    (impl-Functor-Maybe Maybe^int^char  int  char)
    (impl-Functor-Maybe Maybe^int^Bool  int  Bool)
    (impl-Functor-Maybe Maybe^char^char char char)
    (impl-Functor-Maybe Maybe^char^int  char int)
    (impl-Functor-Maybe Maybe^char^Bool char Bool)

    ) ; guard
  ) ; haskell.c
