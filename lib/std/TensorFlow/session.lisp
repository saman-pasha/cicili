
(DEFMACRO session-header ()
  `(ghost
       (struct Session
         (member TF_Session * ptr)
         (member Graph * graph)
         (member Status * status))

     (decl) (func Session->new ((Graph * graph) (Status * status)))
     (decl) (method Session->close ())
     (decl) (method Session->free ())
     (decl) (method Session->run ((IOSlice     * inputs)
                                  (TensorSlice * input_values)
                                  (IOSlice     * outputs)
                                  (TensorSlice * output_values)))
     (decl) (method Session->runSimple ((TF_Output input)
                                        (Tensor * input_tensor)
                                        (TF_Output output))
                    (out Tensor *))
     (decl) (method Session->runWithLabelsAndLoss ((IOSlice * inputs)
                                                   (TensorSlice * input_vals)
                                                   (IOSlice * labels)
                                                   (TensorSlice * label_vals)
                                                   (IOSlice * loss_outs)
                                                   (TensorSlice * result)))
     ))

(DEFMACRO session-source ()
  `(ghost
       (func Session->new ((Graph * graph) (Status * status))
             (let ((Session * session . #'(malloc (sizeof Session))))
               (set ($ session graph) graph)
               (set ($ session status) status)
               (set ($ session ptr) (TF_NewSession ($ graph ptr) 0 ($ status ptr)))
               (return session)))

     (method Session->close ()
             (TF_CloseSession ($ this ptr) ($ this status ptr)))

     (method Session->free ()
             (TF_DeleteSession ($ this ptr) ($ this status ptr))
             (free this))

     (method Session->run ((IOSlice     * inputs)
                           (TensorSlice * input_values)
                           (IOSlice     * outputs)
                           (TensorSlice * output_values))
             (TF_SessionRun ($ this ptr)
               0
               ($ inputs arr)
               (cast (TF_Tensor ** const) (-> input_values firstElement))
               ($ inputs len)
               ($ outputs arr)
               (cast (TF_Tensor ** const) (-> output_values firstElement))
               ($ outputs len)
               0 0 0
               ($ this status ptr)))

     (method Session->runSimple ((TF_Output input)
                                 (Tensor * input_tensor)
                                 (TF_Output output))
             (out Tensor *)
             (defer-let ((IOSlice * inputs . #'(-> IOSlice newFromArray (aof input) 1))
                         (TensorSlice * input_vals . #'(-> TensorSlice newFromArray (aof input_tensor) 1))
                         (IOSlice * outputs . #'(-> IOSlice newFromArray (aof output) 1))
                         (TensorSlice * out_vals . #'(-> TensorSlice newEmpty 1)))
               (-> this run inputs input_vals outputs out_vals)
               (return (-> out_vals firstElement))))

     (method Session->runWithLabelsAndLoss ((IOSlice * inputs)
                                            (TensorSlice * input_vals)
                                            (IOSlice * labels)
                                            (TensorSlice * label_vals)
                                            (IOSlice * loss_outs)
                                            (TensorSlice * result))
             (TF_SessionRun ($ this ptr)
               0
               ;; Inputs: input tensors + label tensors
               ($ inputs arr)
               (cast (TF_Tensor ** const) (-> input_vals firstElement))
               (+ ($ inputs len) ($ labels len))
               ;; Outputs: loss tensors
               ($ loss_outs arr)
               (cast (TF_Tensor ** const) (-> result firstElement))
               ($ loss_outs len)
               0 0 0
               ($ this status ptr)))
     ))
