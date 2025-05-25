
(DEFMACRO model-header ()
  `(ghost
       (struct Model
         (member Graph * graph)
         (member Status * status)
         (member Session * session)
         (member TF_Output input)
         (member TF_Output * output)
         (member IOSlice * input_placeholders)
         (member IOSlice * output_placeholders)
         (member IOSlice * weight_placeholders)
         (member TF_Output labels)
         (member TF_Output loss)
         (member IOSlice * trainable_vars)          ;; e.g., weights and biases
         (member IOSlice * learning_rates)          ;; scalar learning rate tensors
         (member TensorSlice * learning_rates_tensors) ;; scalar learning rate tensors
         (member IOSlice * gradients)               ;; gradient outputs
         (member TF_Operation * train_op)           ;; optimizer application op
         (member float learning_rate)
         )

     (decl) (func   Model->new ())
     (decl) (method Model->addDense ((int units)) (out TF_Output))
     (decl) (method Model->compile ())
     (decl) (method Model->predict ((TensorSlice * input_vals)) (out TensorSlice *))
     (decl) (method Model->free ())
     (decl) (method Model->compileWithLoss ((const char * label_name)))
     (decl) (method Model->fit ((TensorSlice * inputs) (TensorSlice * targets) (int epochs)))
     (decl) (method Model->evaluate ((TensorSlice * inputs) (TensorSlice * targets)) (out float))
     (decl) (method Model->addTrainable ((const char * name) (int size)) (out TF_Output))
     (decl) (method Model->setLearningRate ((float lr)))
     (decl) (method Model->prepareTrain ((TF_Output loss) (float lr)))
     ))

;;; ApplyGradientDescent is a TensorFlow operation that updates a variable by subtracting
;;; the product of a learning rate (alpha) and a gradient (delta) from it.
(DEFMACRO model-source ()
  `(ghost
       (func Model->new ()
             (let ((Model * model . #'(malloc (sizeof Model)))
                   (int64_t dims [] . '{ -1 4 }))
               (set ($ model status) (-> Status new))
               (set ($ model graph)  (-> Graph new))
               (set ($ model input)  (-> ($ model graph) Placeholder "input" TF_FLOAT dims 2))
               (set ($ model input_placeholders) (-> IOSlice newFromArray (aof ($ model input)) 1))
               (return model)))

     (method Model->addDense ((int units)) (out TF_Output *)
             (let ((TF_Output * last_output . #'($ this output)))
               (when (== last_output nil) (set last_output (aof ($ this input))))
               (let ((TF_Output * out . #'(malloc (sizeof TF_Output))))
                 (set (cof out) (Dense "dense" (cof last_output) units))
                 (set ($ this output) out)
                 (return out))))

     (method Model->compile ()
             (set ($ this session) (-> Session new ($ this graph) ($ this status))))

     (method Model->predict ((TensorSlice * input_vals)) (out TensorSlice *)
             (let ((TensorSlice * out_vals . #'(-> TensorSlice newEmpty 1)))
               (-> ($ this session) run
                   ($ this input_placeholders) input_vals
                   ($ this input_placeholders) out_vals)
               (return out_vals)))

     (method Model->free ()
             (-> ($ this session) close)
             (-> ($ this session) free)
             (-> ($ this graph) free)
             (-> ($ this status) free)
             (free this))

     (method Model->compileWithLoss ((const char * label_name))
             ;; 1. Create label placeholder
             (let ((TF_Output labels . #'(-> ($ this graph) Placeholder
                                             label_name TF_FLOAT (cast (int64_t []) '{ -1 1 }) 2)))
               (set ($ this labels) labels)
               (set ($ this output_placeholders) (-> IOSlice newFromArray (aof labels) 1)))
             ;; 2. loss = mean(square(pred - label))
             (let ((TF_Output diff . #'(-> ($ this graph) Sub "diff" (cof ($ this output)) ($ this labels)))
                   (TF_Output sq   . #'(-> ($ this graph) Square "sq" diff))
                   (TF_Output loss . #'(-> ($ this graph) Mean "loss" sq)))
               (set ($ this loss) loss))
             ;; 3. Compute gradients
             (let ((int num_vars . #'($ this trainable_vars len))
                   (TF_Output * grad_arr . #'(malloc (* num_vars (sizeof TF_Output)))))
               (-> ($ this graph) AddSymbolicGradients
                   (aof ($ this loss))         1       ;; ys
                   ($ this trainable_vars arr) num_vars;; xs
                   grad_arr
                   ($ this status))
               (set ($ this gradients) (-> IOSlice newFromArray grad_arr num_vars))
               ;; 4. Create learning rate constants
               (let ((TF_Output * lr_arr . #'(malloc (* num_vars (sizeof TF_Output))))
                     (TF_Tensor ** lr_tensors . #'(malloc (* num_vars (sizeof TF_Tensor *)))))
                 (for ((int i . 0)) (< i num_vars) ((++ i))
                      (let ((float * lr_val . #'(malloc (sizeof float))))
                        (set (cof lr_val) 0.01f)
                        (let ((TF_Tensor * lr_tensor . #'(TF_NewTensor TF_FLOAT 0 0 lr_val (sizeof float) 0 0)))
                          (set (nth i lr_arr) (-> ($ this graph) ConstFloat "lr" 0.01f))
                   (set (nth i lr_tensors) lr_tensor)
                   (set ($ this learning_rates_tensors)
                     (-> TensorSlice newFromArray lr_tensors num_vars))
                   (set ($ this learning_rates) (-> IOSlice newFromArray lr_arr num_vars))))
                 ;; 5. ApplyGradientDescent to each var
                 (let ((TF_Operation ** ops . #'(malloc (* num_vars (sizeof TF_Operation *)))))
                   (for ((int i . 0)) (< i num_vars) ((++ i))
                        (let ((TF_Operation * op . #'(-> ($ this graph) ApplyGradientDescent
                                                         "apply_grad"
                                                         (nth i ($ this trainable_vars arr))
                                                         (nth i ($ this learning_rates_tensors arr))
                                                         (nth i ($ this gradients arr)))))
                          (set (nth i ops) op)))
                   ;; 6. Group all ops into a single NoOp train_op with control deps
                   (set ($ this train_op) (-> ($ this graph) NoOp "train" ops num_vars)))
                 ;; 7. Create session
                 (set ($ this session) (-> Session new ($ this graph) ($ this status))))))

     (method Model->fit ((TensorSlice * inputs) (TensorSlice * targets) (int epochs))
             (for ((int i . 0)) (< i epochs) ((++ i))
                  (let ((int batch_size . #'(-> inputs len))
                        ;; Input/output placeholder names (typically just 1 each)
                        (IOSlice * inputs_ . #'(-> IOSlice newFromArray (aof ($ this input)) 1))
                        (IOSlice * labels_ . #'(-> IOSlice newFromArray (aof ($ this labels)) 1))
                        ;; Actual tensor data for each batch
                        (TensorSlice * input_vals_ . #'(-> TensorSlice newFromArray ($ inputs arr) batch_size))
                        (TensorSlice * label_vals_ . #'(-> TensorSlice newFromArray ($ targets arr) batch_size)))
                    ;; Run one training step
                    (-> ($ this session) run inputs_ input_vals_ labels_ label_vals_))))

     (method Model->evaluate ((TensorSlice * inputs) (TensorSlice * targets)) (out float)
             (let ((int batch_size . #'(-> inputs len))
                   (IOSlice * inputs_ . #'(-> IOSlice newFromArray (aof ($ this input)) 1))
                   (TensorSlice * input_vals_ . #'(-> TensorSlice newFromArray ($ inputs arr) batch_size))
                   (IOSlice * labels_ . #'(-> IOSlice newFromArray (aof ($ this labels)) 1))
                   (TensorSlice * label_vals_ . #'(-> TensorSlice newFromArray ($ targets arr) batch_size))
                   (IOSlice * loss_outs . #'(-> IOSlice newFromArray (aof ($ this loss)) 1))
                   (TensorSlice * result . #'(-> TensorSlice newEmpty 1)))
               (-> ($ this session) runWithLabelsAndLoss inputs_ input_vals_ labels_ label_vals_ loss_outs result)
               (let ((Tensor * loss_tensor . #'(nth 0 (-> result arr)))
                     (float * loss_data . #'(cast (float *) (-> loss_tensor ptr))))
                 (return (* loss_data)))))

     (method Model->addTrainable ((const char * name)
                                  (int64_t * dims)
                                  (int ndims))
             (out TF_Output)
             (let ((TF_Output var . #'(-> ($ this graph) Variable name TF_FLOAT dims ndims)))
               ;; optionally initialize with zeros or random
               (let ((float value . 0)
                     (int64_t shape [] . '{ 1 })
                     (TF_Tensor * zero . #'(-> Tensor newFromFloatArray (aof value) shape size 1))
                     (char buffer [100])
                     (size_t buffer_len . #'(sprintf buffer "%s_init" name)))
                 (-> ($ this graph) Assign buffer var zero))
               ;; Add to model's weight list
               (if (== ($ this trainable_vars) nil)
                   (set ($ this trainable_vars) (-> IOSlice newFromArray (aof var) 1))
                   (let ((auto out . #'(-> ($ this trainable_vars) push var)))
                     (when ($ out newp)
                       (-> ($ this trainable_vars) free)
                       (set ($ this trainable_vars) ($ out out)))))
               (return var)))

     (method Model->setLearningRate ((float lr))
             (set ($ this learning_rate) lr))

     (method Model->compileWithLossAndOptimizer ((const char * label_name))
             ;; same as before: label, loss
             (let ((int64_t dims [] . '{ -1 1 })
                   (TF_Output labels . #'(-> ($ this graph) Placeholder label_name TF_FLOAT dims 2)))
               (set ($ this labels) labels)
               (set ($ this output_placeholders)
                 (-> IOSlice newFromArray (aof labels) 1)))
             (let ((TF_Output diff . #'(-> ($ this graph) Sub "diff" (cof ($ this output)) ($ this labels)))
                   (TF_Output sq   . #'(-> ($ this graph) Square "sq" diff))
                   (TF_Output loss . #'(-> ($ this graph) Mean "loss" sq)))
               (set ($ this loss) loss))
             ;; gradients: dloss/dw for each trainable var
             (let ((int var_count . #'($ this trainable_vars len))
                   (TF_Output * vars . #'(-> ($ this trainable_vars) arr))
                   (TF_Output * grad_arr . #'(malloc (* var_count (sizeof TF_Output)))))
               (-> ($ this graph) AddSymbolicGradients
                 (aof ($ this loss)) 1
                 vars var_count
                 grad_arr ($ this status))
               ;; create ApplyGradientDescent ops
               (for ((int i . 0)) (< i var_count) ((++ i))
                    (let ((TF_Output var . #'(nth i vars))
                          (TF_Output grad . #'(nth i grad_arr))
                          (TF_Tensor * lr . #'(-> Tensor newFromScalarFloat ($ this learning_rate)))
                          (char buffer [9])
                          (size_t buffer_len . #'(sprintf buffer "apply_%d" i)))
                      (-> ($ this graph) ApplyGradientDescent buffer var lr grad))))
             ;; session
             (set ($ this session) (-> Session new ($ this graph) ($ this status))))

     (method Model->prepareTrain ((TF_Output loss) (float lr))
             ;; Step 1: Get the number of trainable variables
             (let ((int count . #'($ this trainable_vars len))
                   ;; Step 2: Compute symbolic gradients
                   (TF_Output * grad_arr . #'(malloc (* count (sizeof TF_Output)))))
               (-> ($ this graph) AddSymbolicGradients
                   (aof loss) 1
                   ($ this trainable_vars arr) count
                   grad_arr ($ this status))
               ;; Step 3: Create learning rate scalar tensor once
               (let ((IOSlice * grads . #'(-> IOSlice newFromArray grad_arr count))
                     (TensorSlice * lrs . #'(-> TensorSlice newEmpty count))
                     (IOSlice * lr_outputs . #'(-> IOSlice newEmpty count))
                     (float * lr_val . #'(malloc (sizeof float))))
                 (set (* lr_val) lr)
                 (dotimes (i count)
                   (let ((Tensor * tensor . #'(-> Tensor newFromData TF_FLOAT 0 0 lr_val (sizeof float)))
                         (TF_Output out . #'(-> ($ this graph) Const "lr"  tensor)))
                     (set (nth i ($ lrs arr)) tensor)
                     (set (nth i ($ lr_outputs arr)) out)))
                 ;; Step 4: Apply gradients
                 (let ((TF_Operation * train_op . 0))
                   (dotimes (i count)
                     (let ((char buffer [12])
                           (size_t buffer_len . #'(sprintf buffer "train_op_%d" i))
                           (TF_Operation * op . #'(-> ($ this graph)
                                                    ApplyGradientDescent
                                                    buffer
                                                    (nth i ($ this trainable_vars arr))
                                                    ($ (nth i ($ lrs arr)) ptr)
                                                    (nth i ($ grads arr)))))
                       (if (== i 0)
                           (set train_op op)
                           (let ((TF_OperationDescription * desc .
                                                          #'(TF_NewOperation ($ this graph ptr)
                                                              "NoOp"
                                                              "train_group")))
                             (TF_AddControlInput desc train_op)
                             (TF_AddControlInput desc op)
                             (set train_op (TF_FinishOperation desc ($ this status ptr)))))))
                   ;; Step 5: Save to model
                   (set ($ this gradients) grads)
                   (set ($ this learning_rates) lr_outputs)
                   (set ($ this learning_rates_tensors) lrs)
                   (set ($ this train_op) train_op)))))
     ))
