
(DEFMACRO graph-header ()
  `(ghost
       (struct Graph
         (member TF_Graph * ptr)
         (member Status * status))
     
     (decl) (func Graph->new ())
     
     (decl) (method Graph->free ())
     
     (decl) (method Graph->AddOp ((const char * op_type)
                                  (const char * name)
                                  (TF_Output * inputs) ;; nullable
                                  (int num_inputs))
                    (out TF_Operation *))
     
     (decl) (method Graph->AddOpEx ((const char * op_type)
                                    (const char * name)
                                    (TF_Output * inputs)
                                    (int num_inputs)
                                    (TF_Operation ** ctrl_inputs)
                                    (int num_ctrl_inputs)
                                    (func set_attrs ((TF_OperationDescription *))))
                    (out TF_Operation *))
     
     (decl) (method Graph->Placeholder ((const char * name)
                                        (const TF_DataType dtype)
                                        (const int64_t * dims)
                                        (const int num_dims))
                    (out TF_Output))
     
     (decl) (method Graph->MatMul ((TF_Output a)
                                   (TF_Output b)
                                   (bool transpose_a)
                                   (bool transpose_b))
                    (out TF_Output))
     
     (decl) (method Graph->BiasAdd ((TF_Output value)
                                    (TF_Output bias))
                    (out TF_Output))
     
     (decl) (method Graph->Variable ((const char * name)
                                     (const TF_DataType dtype)
                                     (const int64_t * dims)
                                     (int ndims))
                    (out TF_Output))
     
     (decl) (method Graph->Const ((const char * name)
                                  (TF_Tensor * tensor))
                    (out TF_Output))
     
     (decl) (method Graph->ConstFloat ((const char * name)
                                       (float value))
                    (out TF_Output))
     
     (decl) (method Graph->Assign ((const char * name)
                                   (TF_Output var)
                                   (TF_Tensor * value))
                    (out TF_Operation *))
     
     (decl) (method Graph->AddSymbolicGradients ((TF_Output * ys) (int y_count)
                                                 (TF_Output * xs) (int x_count)
                                                 (TF_Output * grads)
                                                 (Status * status))
                    (out TF_Output *))
     
     (decl) (method Graph->ApplyGradientDescent ((const char * name)
                                                 (TF_Output var)
                                                 (TF_Tensor * lr)
                                                 (TF_Output grad))
                    (out TF_Operation *))
     
     (decl) (method Graph->NoOp ((const char * name)
                                 (TF_Operation ** control_deps)
                                 (int num_control_deps))
                    (out TF_Operation *))
     
     (decl) (method Graph->Sub ((const char * name)
                                (TF_Output x)
                                (TF_Output y))
                    (out TF_Output))
     
     (decl) (method Graph->Square ((const char * name)
                                   (TF_Output x))
                    (out TF_Output))
     
     (decl) (method Graph->Mean ((const char * name)
                                 (TF_Output x))
                    (out TF_Output))

     (decl) (method Graph->Relu ((const char * name)
                                 (TF_Output input))
                    (out TF_Output))

     ))

(DEFMACRO graph-source ()
  `(ghost

       (func Graph->new () 
             (let ((Graph * graph . #'(malloc (sizeof Graph))))
               (set ($ graph ptr) (TF_NewGraph))
               (return graph)))
     
     (method Graph->free ()
             (TF_DeleteGraph ($ this ptr))
             (free this))

     (method Graph->AddOp ((const char * op_type)
                           (const char * name)
                           (TF_Output * inputs) ;; nullable
                           (int num_inputs))
             (out TF_Operation *)
             (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this ptr) op_type name)))
               ;; Add inputs if any
               (for ((int i . 0)) (< i num_inputs) ((++ i))
                    (TF_AddInput desc (nth i inputs)))
               ;; Finalize operation
               (return (TF_FinishOperation desc ($ this status ptr)))))

     (method Graph->AddOpEx ((const char * op_type)
                             (const char * name)
                             (TF_Output * inputs)
                             (int num_inputs)
                             (TF_Operation ** ctrl_inputs)
                             (int num_ctrl_inputs)
                             (func set_attrs ((TF_OperationDescription *))))
             (out TF_Operation *)
             (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this ptr) op_type name)))
               ;; Add normal inputs
               (for ((int i . 0)) (< i num_inputs) ((++ i))
                    (TF_AddInput desc (nth i inputs)))
               ;; Add control inputs
               (for ((int i . 0)) (< i num_ctrl_inputs) ((++ i))
                    (TF_AddControlInput desc (nth i ctrl_inputs)))
               ;; Set additional attributes (via lambda)
               (if set_attrs (set_attrs desc))
               ;; Finalize operation
               (return (TF_FinishOperation desc ($ this status ptr)))))

     ;; Create a Placeholder operation
     (method Graph->Placeholder ((const char * name)
                                 (const TF_DataType dtype)
                                 (const int64_t * dims)
                                 (const int num_dims))
             (out TF_Output)
             (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this ptr) "Placeholder" name)))
               (TF_SetAttrType desc "dtype" dtype)
               (TF_SetAttrShape desc "shape" dims num_dims)
               (let ((TF_Operation * op . #'(TF_FinishOperation desc 0)))
                 (return '{ op 0 }))))

     ;; Matrix multiplication
     (method Graph->MatMul ((TF_Output a)
                            (TF_Output b)
                            (bool transpose_a)
                            (bool transpose_b))
             (out TF_Output)
             (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this ptr) "MatMul" "matmul")))
               (TF_AddInput desc a)
               (TF_AddInput desc b)
               (TF_SetAttrBool desc "transpose_a" transpose_a)
               (TF_SetAttrBool desc "transpose_b" transpose_b)
               (let ((TF_Operation * op . #'(TF_FinishOperation desc 0)))
                 (return '{ op 0 }))))

     ;; Bias addition
     (method Graph->BiasAdd ((TF_Output value)
                             (TF_Output bias))
             (out TF_Output)
             (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this ptr) "BiasAdd" "bias_add")))
               (TF_AddInput desc value)
               (TF_AddInput desc bias)
               (TF_SetAttrType desc "T" TF_FLOAT)
               (let ((TF_Operation * op . #'(TF_FinishOperation desc 0)))
                 (return '{ op 0 }))))

     ;; Variable
     (method Graph->Variable ((const char * name)
                              (const TF_DataType dtype)
                              (const int64_t * dims)
                              (int ndims))
             (out TF_Output)
             (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this ptr) "VariableV2" name)))
               (TF_SetAttrType desc "dtype" dtype)
               (TF_SetAttrShape desc "shape" dims ndims)
               (return '{ (TF_FinishOperation desc ($ this status ptr)) 0 })))

     (method Graph->Const ((const char * name)
                           (TF_Tensor * tensor))
             (out TF_Output)
             (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this ptr) "Const" name)))
               (TF_SetAttrTensor desc "value" tensor ($ this status ptr))
               (TF_SetAttrType desc "dtype" (TF_TensorType tensor))
               (let ((TF_Operation * op . #'(TF_FinishOperation desc ($ this status ptr))))
                 (return '{ op 0 }))))

     (method Graph->ConstFloat ((const char * name)
                                (float value))
             (out TF_Output)
             (let ((float * val . #'(malloc (sizeof float))))
               (set (cof val) value)
               (let ((TF_Tensor * tensor . #'(TF_NewTensor TF_FLOAT 0 0 val (sizeof float) 0 0)))
                 (return (-> this Const name tensor)))))

     ;; Assign
     (method Graph->Assign ((const char * name)
                            (TF_Output var)
                            (TF_Tensor * value))
             (out TF_Operation *)
             (let ((TF_Output const_val . #'(-> this Const "assign_value" value)))
               (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this ptr) "Assign" name)))
                 (TF_AddInput desc var)
                 (TF_AddInput desc const_val)
                 (return '{ (TF_FinishOperation desc ($ this status ptr)) 0 } ))))

     ;; AddSymbolicGradients
     (method Graph->AddSymbolicGradients ((TF_Output * ys) (int y_count)
                                          (TF_Output * xs) (int x_count)
                                          (TF_Output * grads)
                                          (Status * status))
             (out TF_Output *)
             (TF_AddGradients ($ this ptr) ys y_count xs x_count nil ($ this status ptr) grads)
             (return grads))

     ;; ApplyGradientDescent
     (method Graph->ApplyGradientDescent ((const char * name)
                                          (TF_Output var)
                                          (TF_Tensor * lr)
                                          (TF_Output grad))
             (out TF_Operation *)
             (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this ptr) "ApplyGradientDescent" name)))
               (TF_AddInput desc var)
               (TF_AddInput desc (-> this Const "lr_const" lr))
               (TF_AddInput desc grad)
               (return (TF_FinishOperation desc ($ this status ptr)))))

     (method Graph->NoOp ((const char * name)
                          (TF_Operation ** control_deps)
                          (int num_control_deps))
             (out TF_Operation *)
             (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this ptr) "NoOp" name)))
               ;; Add control dependencies if given
               (for ((int i . 0)) (< i num_control_deps) ((++ i))
                    (TF_AddControlInput desc (nth i control_deps)))
               (return (TF_FinishOperation desc ($ this status ptr)))))

     (method Graph->Sub ((const char * name)
                         (TF_Output x)
                         (TF_Output y))
             (out TF_Output)
             (let ((TF_Output ios [] . '{ x y }))
               (return '{ (-> this AddOp "Sub" name ios 2) 0 })))

     (method Graph->Square ((const char * name)
                            (TF_Output x))
             (out TF_Output)
             (return '{ (-> this AddOp "Square" name (aof x) 1) 0 }))

     (method Graph->Mean ((const char * name)
                          (TF_Output x))
             (out TF_Output)
             ;; Create tensor for axis = [0]
             (let ((int dims . 1)
                   (int64_t shape . 1)
                   (int data . 0)
                   (TF_Tensor * axis_tensor . #'(TF_NewTensor TF_INT32 (aof shape) dims (aof data) (sizeof int) nil nil)))
               (let ((TF_Output axis . #'(-> this Const "axis" axis_tensor))
                     (TF_Output ios [] . '{ x axis }))
                 (return '{ (-> this AddOp "Mean" name ios 2) 0 }))))

     (method Graph->Relu ((const char * name)
                          (TF_Output input))
             (out TF_Output)
             (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this ptr) "Relu" name)))
               (TF_AddInput desc input)
               (return '{ (TF_FinishOperation desc ($ this status ptr)) 0 })))

     ))

