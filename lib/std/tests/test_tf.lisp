
(DEFMACRO Tensor (dtype shape data size &KEY deallocator deallocator-arg)
  `(TF_NewTensor ,(INTERN (FORMAT NIL "TF_~A" (STRING-UPCASE dtype)))
     (cast (int64_t []) '{ ,@shape }) ,(LENGTH shape) ,data ,size ,deallocator ,deallocator-arg))

(DEFMACRO Operation (graph status status-callback name oper &REST attrs)
  (LET* ((desc-name (INTERN (FORMAT NIL "~A_~A_desc" graph name)))
         (oper-name (FORMAT NIL "~A_~A_~A" graph name oper)))
    `(letn ((TF_OperationDescription * ,desc-name . #'(TF_NewOperation ,graph ,(SYMBOL-NAME oper) ,oper-name)))
       ,@(MAPCAR #'(LAMBDA (def)
                     (DESTRUCTURING-BIND (type value &REST args) def
                       (COND ((EQL type 'input) `(TF_AddInput ,desc-name ,(IF (AND (LISTP value) (EQL 'QUOTE (CAR value)))
                                                                              `(cast TF_Output ,value)
                                                                              value)))
                             ((EQL type 'input-list) `(TF_AddInputList ,desc-name
                                                        ,(IF (AND (LISTP value) (EQL 'QUOTE (CAR value)))
                                                             `(cast (TF_Output []) ,value)
                                                             value)
                                                        ,(IF (AND (LISTP value) (EQL 'QUOTE (CAR value)))
                                                             (LENGTH (CDR value))
                                                             (CAR args))))
                             ((EQL type 'type)
                              `(TF_SetAttrType ,desc-name ,(SYMBOL-NAME value)
                                               ,(INTERN (FORMAT NIL "TF_~A" (STRING-UPCASE (CAR args))))))
                             ((EQL type 'shape)
                              `(TF_SetAttrShape ,desc-name ,(SYMBOL-NAME value)
                                                (cast (int64_t []) '{ ,@(CAR args) }) ,(LENGTH (CAR args))))
                             ((EQL type 'tensor)
                              `(block
                                   (TF_SetAttrTensor ,desc-name ,(SYMBOL-NAME value) ,(CAR args) ,status)
                                 ,(WHEN status-callback
                                    `(if (!= (TF_GetCode ,status) TF_OK)
                                       (,status-callback ,oper-name ,status)))))
                             (T `(,(INTERN (FORMAT NIL "TF_SetAttr~A" (STRING-CAPITALIZE type))) ,desc-name
                                   ,(SYMBOL-NAME value) ,@args)))))
                 attrs)
       (var TF_Operation * ,name . #'(TF_FinishOperation ,desc-name ,status))
       ,(WHEN status-callback
          `(if (!= (TF_GetCode ,status) TF_OK)
             (,status-callback ,oper-name ,status)))
       ,name)))
       
(DEFMACRO Graph (status status-callback name &REST opers)
  `(letn ((func status_callback ((const char * name) (TF_Status * status)) . ,status-callback)
          (TF_Graph * ,name . #'(TF_NewGraph))
          ,@(MAPCAR #'(LAMBDA (def)
                        (DESTRUCTURING-BIND (pname &REST args) def
                          `(TF_Operation * ,pname . #'(Operation ,name ,status status_callback ,@def))))
                    opers))
     ,(WHEN status-callback
        `(if (!= (TF_GetCode ,status) TF_OK)
             (,status-callback ,(SYMBOL-NAME name) ,status)))
     ,name))
               
(generic __TENSOR_G_ (TY)
         (func (<> scalar TY) ((TY value)) (out void *)
               (let ((TY * ptr . #'(cast (TY *) (malloc (sizeof TY)))))
                 (set (cof ptr) value)
                 (return ptr)))
         )

(source "tf_test.c" (:std #t :compile #t :link "-L{$CWD} tf_test.o -ltensorflow.2.19.0 -o tf_test")
        (include <tensorflow/c/c_api.h>)

        (__TENSOR_G_ float)

        (main
            (format #t "TensorFlow %s\n" (TF_Version))
          
          (let ((float b_data . 0.5f)
                (TF_Status * status . #'(TF_NewStatus))
                (auto gr . #'(Graph status
                                    '(lambda ((const char * name) (TF_Status * status))
                                      (format #t "%s status: %s\n" name (TF_Message status))) 
                                    gr
                                    (x Placeholder (type :dtype float))
                                    (y Placeholder (type :dtype float))
                                    (b Const (type :dtype float)
                                       (tensor :value (Tensor float (1)
                                                              ((<> scalar float) b_data)
                                                              (sizeof b_data)
                                                              :deallocator
                                                              '(lambda ((void * data) (size_t size) (void * arg))
                                                                (format #t "deallocator: %f\n" (cof (cast (float *) data)))
                                                                (free data)))))
                                    (mul Mul (input '{ x 0 })   (input '{ y 0 }) (type :T float))
                                    (add Add (input '{ mul 0 }) (input '{ b 0 }) (type :T float)))))

            (let ((float xv . 2.0f)
                  (float yv . 3.0f)
                  (TF_Tensor * outputs [1])
                  (TF_SessionOptions * opts . #'(TF_NewSessionOptions))
                  (TF_Session * sess . #'(TF_NewSession gr opts status)))

              (TF_SessionRun sess nil
                             (cast (TF_Output []) '{
                                   '{ (TF_GraphOperationByName gr "gr_x_Placeholder") 0 }
                                   '{ (TF_GraphOperationByName gr "gr_y_Placeholder") 0 } })
                             (cast (TF_Tensor * const []) '{
                                   (Tensor float (1) ((<> scalar float) xv) (sizeof xv))
                                   (Tensor float (1) ((<> scalar float) yv) (sizeof yv)) })
                             2
                             (cast (TF_Output []) '{ '{ (TF_GraphOperationByName gr "gr_add_Add") 0 } })
                             outputs
                             1
                             nil 0 nil status)

              (format #t "status: %s\n" (TF_Message status))
              (format #t "output is: %f\n" (cof (cast (float *) (TF_TensorData (nth 0 outputs)))))
              
              (TF_DeleteSession sess status)
              (TF_DeleteSessionOptions opts))
            
            (TF_DeleteGraph gr)
            (TF_DeleteStatus status)

            )))
        
