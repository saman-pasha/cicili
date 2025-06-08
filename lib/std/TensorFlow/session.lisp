
(DEFMACRO session-header ()
  `(ghost
       (struct Session
         (member TF_Session * ptr)
         (member Graph * graph)
         (member Status * status)
         (member TF_SessionOptions * opts))

     (decl) (func (Session . new) ((Graph * graph) (Status * status)))
     (decl) (method (Session . close) ())
     (decl) (method (Session . free) ())
     
     (decl) (method (Session . run) ((IOSlice     * inputs)
                                     (TensorSlice * input_values)
                                     (IOSlice     * outputs)
                                     (TensorSlice * output_values)))
     
     (decl) (method (Session . runSimple) ((TF_Output input)
                                           (Tensor * input_tensor)
                                           (TF_Output output))
                    (out Tensor *))
     
     (decl) (method (Session . runWithLabelsAndLoss) ((IOSlice * inputs)
                                                      (TensorSlice * input_vals)
                                                      (IOSlice * labels)
                                                      (TensorSlice * label_vals)
                                                      (IOSlice * loss_outs)
                                                      (TensorSlice * result)))
     ))

(DEFMACRO session-source ()
  `(ghost
       (func (Session . new) ((Graph * graph) (Status * status))
             (let ((Session * session . #'(malloc (sizeof Session))))
               (set ($ session graph) graph)
               (set ($ session status) status)
               (set ($ session opts) (TF_NewSessionOptions))
               (set ($ session ptr) (TF_NewSession ($ graph ptr) opts ($ status ptr)))
               (return session)))

     (method (Session . close) ()
             (TF_CloseSession ($ this ptr) ($ this status ptr)))

     (method (Session . free) ()
             (TF_DeleteSession ($ this ptr) ($ this status ptr))
             (free this))

     (method (Session . run) ((IOSlice     * inputs)
                              (TensorSlice * input_values)
                              (IOSlice     * outputs)
                              (TensorSlice * output_values))
             (TF_SessionRun ($ this ptr)
               ($ this opts)
               ($ inputs arr)
               (aof (-> input_values deref))
               ($ inputs len)
               ($ outputs arr)
               (cast (TF_Tensor ** const) (-> output_values deref))
               ($ outputs len)
               nil 0 ; training ops
               nil ; metadata
               ($ this status ptr)))

     (method (Session . runSimple) ((TF_Output input)
                                    (Tensor * input_tensor)
                                    (TF_Output output))
             (out Tensor *)
             (defer-let ((IOSlice * inputs . #'(-> IOSlice newFromArray (aof input) 1))
                         (TensorSlice * input_vals . #'(-> TensorSlice newFromArray (aof input_tensor) 1))
                         (IOSlice * outputs . #'(-> IOSlice newFromArray (aof output) 1))
                         (TensorSlice * output_vals . #'(-> TensorSlice newEmpty 1)))
               (-> this run inputs input_vals outputs output_vals)
               (return (-> output_vals deref))))

     (method (Session . runWithLabelsAndLoss) ((IOSlice * inputs)
                                               (TensorSlice * input_vals)
                                               (IOSlice * labels)
                                               (TensorSlice * label_vals)
                                               (IOSlice * loss_outs)
                                               (TensorSlice * result))
             (TF_SessionRun ($ this ptr)
               ($ this opts)
               ;; Inputs: input tensors + label tensors
               ($ inputs arr)
               (aof (-> input_vals deref))
               (+ ($ inputs len) ($ labels len))
               ;; Outputs: loss tensors
               ($ loss_outs arr)
               (cast (TF_Tensor ** const) (-> result deref))
               ($ loss_outs len)
               nil 0 ; training ops
               nil ; metadata
               ($ this status ptr)))
     ))
