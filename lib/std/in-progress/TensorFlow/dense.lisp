
;;;; Dense Header Macro – Defines interface for a Dense Layer.
(DEFMACRO dense-header ()
  `(ghost
       ;; Define the neural network layer structure
       (struct Dense
         (member Graph * graph)
         (member int input_dim)
         (member int output_dim)
         (member char * activation)
         (member TF_Operation* input_op)
         (member TF_Operation* output_op)
         (member TF_Operation* weights_op)
         (member TF_Operation* biases_op)
         )
     
     ;; Constructors and methods
     (decl) (func (Dense . new) ((int input_dim)
                                 (int output_dim)
                                 (const char* activation)))
     
     (decl) (method (Dense . forward) ((Tensor * input)) (out Tensor *))
     
     (decl) (method (Dense . backward) ((Tensor * grad_output)
                                        (float learning_rate))
                    (out Tensor *))
     
     (decl) (method (Dense . free) ())
     ))

(DEFMACRO dense-source ()
  `(ghost
       ;; Implementation: Constructor for new layer.
       (func (Dense . new) ((int input_dim)
                            (int output_dim)
                            (const char * activation))
             (let ((Dense * layer . #'(malloc (sizeof Dense))))
               ;; Create a new TensorFlow graph.
               (set ($ layer graph) (-> Graph new))

               (set ($ layer input_dim) input_dim)
               (set ($ layer output_dim) output_dim)
               (set ($ layer activation) (strdup activation))
               
               ;; Create dummy TF operations (placeholders for real TF C API calls)
               (set ($ layer input_op) (dummy_create_placeholder(($ layer graph))))
               (set ($ layer weights_op) (dummy_create_variable(($ layer graph) input_dim output_dim)))
               (set ($ layer biases_op) (dummy_create_variable(($ layer graph) 1 output_dim)))
               
               ;; Setup the forward operation: output_op = Activation(MatMul(input_op, weights_op) + biases_op)
               (set ($ layer output_op) (dummy_setup_forward_op(($ layer graph) ($ layer input_op)
                                                                ($ layer weights_op)
                                                                ($ layer biases_op)
                                                                activation)))
               (return layer)))

     (func (Dense . new) ((int input_dim)
                          (int output_dim)
                          (const char * activation)
                          (TF_DataType data_type)) ; example TF_FLOAT
           
           (let ((Dense * layer . #'(malloc (sizeof Dense))))
             ;; Create a new TensorFlow graph.
             (set ($ layer graph) (-> Graph new))
             (set ($ layer input_dim) input_dim)
             (set ($ layer output_dim) output_dim)
             (set ($ layer activation) (strdup activation))
             
             ;; Create input placeholder operation.
             (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ layer graph ptr) "Placeholder" "input")))
               (TF_SetAttrType desc "dtype" data_type)
               (set ($ layer input_op) (TF_FinishOperation desc ($ this graph status))))
             
             ;; Create weights variable. Here we assume a 2-D shape: [input_dim, output_dim].
             (let ((int64_t dims[2] . '{ input_dim  output_dim }))
               (let ((TF_OperationDescription * w_desc . #'(TF_NewOperation ($ layer graph ptr) "VariableV2" "weights")))
                 (TF_SetAttrType w_desc "dtype" data_type)
                 (TF_SetAttrShape w_desc dims 2)
                 (set ($ layer weights_op) TF_FinishOperation w_desc ($ this graph status))))
             
             ;; Create biases variable with shape: [output_dim].
             (let ((int64_t dims_b[1] . '{ output_dim }))
               (let ((TF_OperationDescription * b_desc . #'(TF_NewOperation ($ layer graph ptr) "VariableV2" "biases")))
                 (TF_SetAttrType b_desc "dtype" data_type)
                 (TF_SetAttrShape b_desc dims_b 1)
                 (set ($ layer biases_op) (TF_FinishOperation b_desc ($ this graph status)))))
             
             ;; Setup forward op: MatMul(input, weights) then Add(biases)
             (let ((TF_OperationDescription * matmul_desc . #'(TF_NewOperation ($ layer graph ptr) "MatMul" "matmul")))
               (TF_AddInput matmul_desc (cast TF_Output '{ ($ layer input_op) 0 }))
               (TF_AddInput matmul_desc (cast TF_Output '{ ($ layer weights_op) 0 }))
               (let ((TF_Operation* matmul_op . #'(TF_FinishOperation matmul_desc status))
                     (TF_OperationDescription * add_desc . #'(TF_NewOperation ($ layer graph ptr) "Add" "output")))
                 (TF_AddInput add_desc (cast TF_Output '{ matmul_op 0 }))
                 (TF_AddInput add_desc (cast TF_Output '{ ($ layer biases_op) 0 }))
                 (set ($ layer output_op) (TF_FinishOperation add_desc ($ this graph status)))))

             
             (TF_DeleteStatus ($ this graph status))
             (return layer)))

     ;; Implementation: forward() method.
     (method (Model . forward) ((Tensor * input)) (out Tensor *)
             (let ((TF_SessionOptions * options . #'(TF_NewSessionOptions))
                   (TF_Session * session . #'(TF_NewSession ($ this graph ptr) options ($ this graph status)))
                   ;; Prepare the feed: map input tensor to the placeholder.
                   (TF_Output feed . '{ ($ this input_op) 0 })
                   (TF_Tensor* output)
                   (TF_SessionRun session options
                                  (aof feed) (aof input) 1                                        ; feed one input
                                  (aof (cast TF_Output '{ ($ this output_op) 0 })) (aof output) 1 ; fetch the output op
                                  nil 0                      ; target ops
                                  nil ($ this graph status)) ; run metadata
                   (TF_DeleteSession session ($ this graph status))
                   (TF_DeleteSessionOptions options)
                   (TF_DeleteStatus ($ this graph status))
                   (return output))))

     (func applyGradient ((TF_Graph* graph) (TF_Operation* var) (TF_Output grad) (float lr)) (out void)
           (let ((TF_Status* status . TF_NewStatus()))
             ;; Step 1: Create a scalar tensor for learning_rate.
             (let ((TF_Tensor* lr_tensor . TF_AllocateTensor(TF_FLOAT, NULL, 0, sizeof(float))))
               (memcpy(TF_TensorData(lr_tensor), &lr, sizeof(float)))
               
               ;; Step 2: Create a constant op for the learning rate.
               (let ((TF_OperationDescription* const_desc . TF_NewOperation(graph, "Const", "lr_const")))
                 (TF_SetAttrType(const_desc, "dtype", TF_FLOAT))
                 (TF_SetAttrTensor(const_desc, "value", lr_tensor, status))
                 (let ((TF_Operation* lr_const_op . TF_FinishOperation(const_desc, status)))
                   
                   ;; Step 3: Create the ApplyGradientDescent op.
                   (let ((TF_OperationDescription* apply_desc .
                                                   TF_NewOperation(graph, "ApplyGradientDescent", "apply_grad_descent")))
                     ;; Input 0: The variable to update.
                     (TF_AddInput(apply_desc, (TF_Output){var, 0}))
                     ;; Input 1: The learning rate constant.
                     (TF_AddInput(apply_desc, (TF_Output){lr_const_op, 0}))
                     ;; Input 2: The gradient tensor.
                     (TF_AddInput(apply_desc, grad))
                     ;; Optionally, set additional attributes (here, we disable locking).
                     (TF_SetAttrBool(apply_desc, "use_locking", 0))
                     (let ((TF_Operation* apply_op . TF_FinishOperation(apply_desc, status)))
                       (if (TF_GetCode(status) != TF_OK)
                           (printf "Error creating ApplyGradientDescent op: %s\n", TF_Message(status)))
                       
                       ;; Step 4: Run the op in a new session.
                       (let ((TF_SessionOptions* options . TF_NewSessionOptions()))
                         (let ((TF_Status* run_status . TF_NewStatus()))
                           (let ((TF_Session* session . TF_NewSession(graph, options, run_status)))
                             (TF_SessionRun(session,
                                               /* run options */ NULL,
                                               /* No feeds */ NULL, NULL, 0,
                                               /* Fetch the ApplyGradientDescent op */ (TF_Operation**)(&apply_op), 1,
                                               /* No target ops */ NULL, 0,
                                               /* run metadata */ NULL,
                                               run_status))
                             (if (TF_GetCode(run_status) != TF_OK)
                                 (printf "Error running ApplyGradientDescent op: %s\n", TF_Message(run_status)))
                             (TF_DeleteSession(session, run_status))
                             (TF_DeleteSessionOptions(options))
                             (TF_DeleteStatus(run_status)))))
                       ))
                   ))
               (TF_DeleteTensor(lr_tensor)))
             (TF_DeleteStatus(status))
             (return))

     ;; Implementation: backward() method.
     (method (Dense . backward) ((Tensor * grad_output)
                               (float learning_rate))
             (out Tensor *)
             ;; Setup the forward pass output and the variables for which we need gradients.
             (let ((TF_Output y_op . '{ ($ this output_op) 0 })         ;; The output node used to compute loss.
                   (TF_Output x_ops [2] . '{ '{ ($ this weights_op) 0 } '{ ($ this biases_op) 0 } })  ;; Variables.
                   (TF_Tensor * dx_arr [1] . '{ grad_output })          ;; Provide grad_output as the initial gradient for y.
                   (TF_Output grad_vars [2]))                           ;; To hold computed gradients.
                 
                 ;; Build the gradient nodes in the graph.
                 (TF_AddGradients ($ this graph ptr) (aof y_op) 1 x_ops 2 dx_arr ($ this graph status ptr) grad_vars)
                 
                 (unless (-> ($ this graph status) ok)
                   (printf "TF_AddGradients error: %s\n", (-> message ($ this graph status))))
                 
                 ;; Update weights and biases using the computed gradients and given learning rate.
                 (applyGradient ($ this graph), ($ this weights_op), grad_vars[0], learning_rate))
                 (applyGradient ($ this graph), ($ this biases_op),  grad_vars[1], learning_rate))
                 
                 ;; Finally, return the input gradient for potential further propagation.
                 (return grad_output))))
     
     ;; Implementation: free() method.
     (method (Dense . free) ()
             (free ($ this activation))
             (TF_DeleteGraph ($ this graph))
             (free this))
     ))
