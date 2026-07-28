(DEFPACKAGE :tf
  (:USE :CL)
  (:EXPORT
      :define))

(IN-PACKAGE :tf)

(DEFMACRO dense (name input size)
  ;; Weight and bias names
  (LET ((w_name (FORMAT NIL "~A_kernel" name))
        (b_name (FORMAT NIL "~A_bias" name)))
    `(letn ((TF_Output input ,input)
            (int units ,size)
            ;; Tensor shapes
            ;; to be inferred from input shape at runtime
            (int64_t w_dims [2] . '{ -1, units })
            (int64_t b_dims [1] . '{ units })
            ;; Variables
            (TF_Output w . #'(Placeholder graph w_name TF_FLOAT w_dims 2))
            (TF_Output b . #'(Placeholder graph b_name TF_FLOAT b_dims 1))
            ;; Layer computation
            (TF_Output matmul_out . #'(MatMul graph input w #f #f))
            (TF_Output bias_out . #'(BiasAdd graph matmul_out b)))
       ;; Return final output
       bias_out)))

(DEFMACRO Dense (name input units)
  (let* ((w-name (format nil "~A_w" name))
         (b-name (format nil "~A_b" name))
         (matmul-name (format nil "~A_matmul" name))
         (biasadd-name (format nil "~A_out" name)))
    `(progn
       ;; Get input shape (assume shape is known at build time)
       (letn ((int64_t input_dims[2] . '{ 0 0 }))
         ;; Dense weight: [input_dim, units]
         (letn ((TF_Output ,w-name . #'(Variable graph ,w-name TF_FLOAT input_dims 2)))
           (letn ((TF_Output ,b-name . #'(Variable graph ,b-name TF_FLOAT input_dims 1)))

             ;; MatMul(input, weight)
             (letn ((TF_OperationDescription * desc . #'(TF_NewOperation ($ graph ptr) "MatMul" ,matmul-name)))
               (TF_AddInput desc ,input)
               (TF_AddInput desc ,w-name)
               (TF_SetAttrBool desc "transpose_a" 0)
               (TF_SetAttrBool desc "transpose_b" 0)
               (letn ((TF_Output matmul-out . #'(TF_Output (TF_FinishOperation desc ($ graph status ptr)) 0)))

                 ;; BiasAdd(matmul-out, bias)
                 (letn ((TF_OperationDescription * desc2 . #'(TF_NewOperation ($ graph ptr) "BiasAdd" ,biasadd-name)))
                   (TF_AddInput desc2 matmul-out)
                   (TF_AddInput desc2 ,b-name)
                   (letn ((TF_Output ,name . (TF_Output (TF_FinishOperation desc2 ($ graph status ptr)) 0)))
                     ,name))))))))))

(DEFMACRO Sequential (model-name graph input layer-specs)
  (let ((prev input)
        (defs '())
        (i 0))
    (dolist (layer layer-specs)
      (destructuring-bind (units activation) layer
        (let* ((layer-name (format nil "~A_l~A" model-name i))
               (dense-name (format nil "~A_dense" layer-name))
               (act-name (format nil "~A_act" layer-name))
               (out-sym (gensym "out")))
          ;; Dense definition
          (push
           `(let ((TF_Output ,out-sym . (Dense ,dense-name ,prev ,units)))
              ,@(if (eq activation 'none)
                    `((setf ,prev ,out-sym))
                    `((let ((TF_OperationDescription * desc (TF_NewOperation ($ ,graph ptr) ,(symbol-name activation) ,act-name)))
                        (TF_AddInput desc ,out-sym)
                        (let ((TF_Output act-out . (TF_Output (TF_FinishOperation desc ($ ,graph status ptr)) 0)))
                          (setf ,prev act-out))))))
           defs))
        (incf i)))
    `(progn ,@defs ,prev)))

(Variable graph name dtype shape dims) -> TF_Output
(Assign graph name variable value) -> TF_Operation *
(AddSymbolicGradients graph ys xs dxs) -> TF_Output * (and count)
(ApplyGradientDescent graph name var lr grad) -> TF_Operation *

(DEFMACRO model-source (name)
  `(ghost
       (func ,(make-method-name name 'new) ()
             (let ((,name * model . #'(malloc (sizeof ,name)))
                   (Graph * graph . #'(-> Graph new))
                   (Status * status . #'(-> Status new))
                   (Session * session . #'(-> Session new graph status)))

               ;; Assign sub-structs
               (set ($ model graph) graph)
               (set ($ model status) status)
               (set ($ model session) session)

               ;; TODO: Add ops to graph

               (return model)))

     (method ,name->free ()
             (-> ($ this session) free)
             (-> ($ this status) free)
             (-> ($ this graph) free)
             (free this))

     ;; Stub predict method
     (method ,(make-method-name name 'predict) ((Tensor * input)) (out Tensor *)
             (return nil)) ; TODO: Implement forward path

     ;; Stub fit method
     (method ,(make-method-name name 'fit) ($$$) ; TODO: Signature
             (return))
     ))


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

     (decl) (func   (Model . new) ())
     (decl) (method (Model . addDense) ((int units)) (out TF_Output))
     (decl) (method (Model . compile) ())
     (decl) (method (Model . predict) ((TensorSlice * input_vals)) (out TensorSlice *))
     (decl) (method (Model . free) ())
     (decl) (method (Model . compileWithLoss) ((const char * label_name)))
     (decl) (method (Model . fit) ((TensorSlice * inputs) (TensorSlice * targets) (int epochs)))
     (decl) (method (Model . evaluate) ((TensorSlice * inputs) (TensorSlice * targets)) (out float))
     (decl) (method (Model . addTrainable) ((const char * name) (int size)) (out TF_Output))
     (decl) (method (Model . setLearningRate) ((float lr)))
     (decl) (method (Model . prepareTrain) ((TF_Output loss) (float lr)))
     ))

;;; ApplyGradientDescent is a TensorFlow operation that updates a variable by subtracting
;;; the product of a learning rate (alpha) and a gradient (delta) from it.
(DEFMACRO model-source ()
  `(ghost
       (func (Model . new) ()
             (let ((Model * model . #'(malloc (sizeof Model)))
                   (int64_t dims [] . '{ -1 4 }))
               (set ($ model status) (-> Status new))
               (set ($ model graph)  (-> Graph new))
               (set ($ model input)  (-> ($ model graph) placeholder "input" TF_FLOAT dims 2))
               (set ($ model input_placeholders) (-> IOSlice newFromArray (aof ($ model input)) 1))
               (return model)))

     (method (Model . addDense) ((int units)) (out TF_Output *)
             (let ((TF_Output * last_output . #'($ this output)))
               (when (== last_output nil) (set last_output (aof ($ this input))))
               (let ((TF_Output * out . #'(malloc (sizeof TF_Output))))
                 (set (cof out) (Dense "dense" (cof last_output) units))
                 (set ($ this output) out)
                 (return out))))

     (method (Model . compile) ()
             (set ($ this session) (-> Session new ($ this graph) ($ this status))))

     (method (Model . predict) ((TensorSlice * input_vals)) (out TensorSlice *)
             (let ((TensorSlice * out_vals . #'(-> TensorSlice newEmpty 1)))
               (-> ($ this session) run
                   ($ this input_placeholders) input_vals
                   ($ this input_placeholders) out_vals)
               (return out_vals)))

     (method (Model . free) ()
             (-> ($ this session) close)
             (-> ($ this session) free)
             (-> ($ this graph) free)
             (-> ($ this status) free)
             (free this))

     (method (Model . compileWithLoss) ((const char * label_name))
             ;; 1. Create label placeholder
             (let ((TF_Output labels . #'(-> ($ this graph) placeholder
                                             label_name TF_FLOAT (cast (int64_t []) '{ -1 1 }) 2)))
               (set ($ this labels) labels)
               (set ($ this output_placeholders) (-> IOSlice newFromArray (aof labels) 1)))
             ;; 2. loss = mean(square(pred - label))
             (let ((TF_Output diff . #'(-> ($ this graph) sub "diff" (cof ($ this output)) ($ this labels)))
                   (TF_Output sq   . #'(-> ($ this graph) square "sq" diff))
                   (TF_Output loss . #'(-> ($ this graph) mean "loss" sq)))
               (set ($ this loss) loss))
             ;; 3. Compute gradients
             (let ((int num_vars . #'($ this trainable_vars len))
                   (TF_Output * grad_arr . #'(malloc (* num_vars (sizeof TF_Output)))))
               (-> ($ this graph) addSymbolicGradients
                   (aof ($ this loss))         1       ;; ys
                   ($ this trainable_vars arr) num_vars;; xs
                   grad_arr)
               (set ($ this gradients) (-> IOSlice newFromArray grad_arr num_vars))
               ;; 4. Create learning rate constants
               (let ((TF_Output * lr_arr . #'(malloc (* num_vars (sizeof TF_Output))))
                     (TF_Tensor ** lr_tensors . #'(malloc (* num_vars (sizeof TF_Tensor *)))))
                 (for ((int i . 0)) (< i num_vars) ((++ i))
                      (let ((float * lr_val . #'(malloc (sizeof float))))
                        (set (cof lr_val) 0.01f)
                        (let ((TF_Tensor * lr_tensor . #'(TF_NewTensor TF_FLOAT 0 0 lr_val (sizeof float) 0 0)))
                          (set (nth i lr_arr) (-> ($ this graph) constFloat "lr" 0.01f))
                          (set (nth i lr_tensors) lr_tensor)
                          (set ($ this learning_rates_tensors)
                            (-> TensorSlice newFromArray lr_tensors num_vars))
                          (set ($ this learning_rates) (-> IOSlice newFromArray lr_arr num_vars)))))
                 ;; 5. ApplyGradientDescent to each var
                 (let ((TF_Operation ** ops . #'(malloc (* num_vars (sizeof TF_Operation *)))))
                   (for ((int i . 0)) (< i num_vars) ((++ i))
                        (let ((TF_Operation * op . #'(-> ($ this graph) applyGradientDescent
                                                         "apply_grad"
                                                         (nth i ($ this trainable_vars arr))
                                                         (nth i ($ this learning_rates_tensors arr))
                                                         (nth i ($ this gradients arr)))))
                          (set (nth i ops) op)))
                   ;; 6. Group all ops into a single NoOp train_op with control deps
                   (set ($ this train_op) (-> ($ this graph) NoOp "train" ops num_vars)))
                 ;; 7. Create session
                 (set ($ this session) (-> Session new ($ this graph) ($ this status))))))

     (method (Model . fit) ((TensorSlice * inputs) (TensorSlice * targets) (int epochs))
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
     
     (method (Model . evaluate) ((TensorSlice * inputs) (TensorSlice * targets)) (out float)
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

     (method (Model . addTrainable) ((const char * name)
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

     (method (Model . setLearningRate) ((float lr))
             (set ($ this learning_rate) lr))

     (method (Model . compileWithLossAndOptimizer) ((const char * label_name))
             ;; same as before: label, loss
             (let ((int64_t dims [] . '{ -1 1 })
                   (TF_Output labels . #'(-> ($ this graph) placeholder label_name TF_FLOAT dims 2)))
               (set ($ this labels) labels)
               (set ($ this output_placeholders)
                 (-> IOSlice newFromArray (aof labels) 1)))
             (let ((TF_Output diff . #'(-> ($ this graph) sub "diff" (cof ($ this output)) ($ this labels)))
                   (TF_Output sq   . #'(-> ($ this graph) square "sq" diff))
                   (TF_Output loss . #'(-> ($ this graph) mean "loss" sq)))
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

     (method (Model . prepareTrain) ((TF_Output loss) (float lr))
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

                       
;; Assume that DenseLayer (TF_CiciliLayer) is defined via BasicTFLayerHeader/Source macros.

;; Create a new model instance.
(let ((Model * model . #'(-> Model new)))
  (-> model addLayer (-> Dense new 64 128 "relu"))
  (-> model addLayer (-> Dense new 128 10 "softmax"))
  (-> model compile "adam" "categorical_crossentropy" 0.001)

  ;; Create a new model.
  TF_CiciliModel* model = (-> TF_CiciliModel newModel)();
  model = (-> model addLayer (-> DenseLayer newLayer 64 128 "relu")());
  model = (-> model addLayer (-> Conv2DLayer newLayer 128 64 3 "relu")());
  model = (-> model addLayer (-> RNNLayer newLayer 64 32 "tanh")());
  model = (-> model compile "adam" "categorical_crossentropy" 0.001);

  ;; Create an optimizer (e.g., SGD).
  TF_SGDOptimizer* sgdOpt = (-> TF_SGDOptimizer newOptimizer) (0.01);

  ;; In a full implementation, you could pass the optimizer to the training loop,
  ;; or use it inside layer.backward() to update weights.
  
  ;; Optionally, define training callbacks.
  (let ((TrainCallbacks trainCbs . '{
                        $onEpochEnd myEpochEndFunction
                        $onBatchEnd myBatchEndFunction
                        $onTrainEnd myTrainEndFunction })
        (float test_loss))

    ;; Train the model.
    (-> model train myDataset 50 32 trainCbs)

    ;; Evaluate the model.
    (set test_loss (-> model evaluate myTestDataset))

    ;; Print the model summary.
    (-> model summary)

    ;; Free model resources.
    (-> sgdOpt free)
    (-> model free)))

