
(DEFPACKAGE :tf
  (:USE :CL)
  (:EXPORT
      :define))

(IN-PACKAGE :tf)

(DEFMACRO status-header ()
  `(ghost
       (struct Status
         (member TF_Status * ptr))

     (decl) (func Status->new ())
     (decl) (method Status->free ())
     (decl) (method Status->code () (out TF_Code))
     (decl) (method Status->message () (out const char *))
     (decl) (method Status->ok () (out bool))))

(DEFMACRO status-source ()
  `(ghost
       (func Status->new ()
             (let ((Status * status . #'(malloc (sizeof Status))))
               (set ($ status ptr) (TF_NewStatus))
               (return status)))

     (method Status->free ()
             (TF_DeleteStatus ($ this ptr))
             (free this))

     (method Status->code () (out TF_Code)
             (return (TF_GetCode ($ this ptr))))

     (method Status->message () (out const char *)
             (return (TF_Message ($ this ptr))))

     (method Status->ok () (out bool)
             (return (== (TF_GetCode ($ this ptr)) TF_OK)))))

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
                                  (int num_inputs)))
     (decl) (method Graph->AddOpEx ((const char * op_type)
                                    (const char * name)
                                    (TF_Output * inputs)
                                    (int num_inputs)
                                    (TF_Operation ** ctrl_inputs)
                                    (int num_ctrl_inputs)
                                    (func set_attrs (TF_OperationDescription *))))
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
             (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this ptr) op_type name)))
               ;; Add inputs if any
               (if (> num_inputs 0)
                   (for ((int i . 0)) (< i num_inputs) ((++ i))
                        (TF_AddInput desc (nth i inputs))))
               ;; Finalize operation
               (let ((TF_Operation * op . #'(TF_FinishOperation desc ($ this status ptr))))
                 (return op))))

     (method Graph->AddOpEx ((const char * op_type)
                             (const char * name)
                             (TF_Output * inputs)
                             (int num_inputs)
                             (TF_Operation ** ctrl_inputs)
                             (int num_ctrl_inputs)
                             (func set_attrs ((TF_OperationDescription *))))
             (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this ptr) op_type name)))
               ;; Add normal inputs
               (if (> num_inputs 0)
                   (for ((int i . 0)) (< i num_inputs) ((++ i))
                        (TF_AddInput desc (nth i inputs))))
               ;; Add control inputs
               (if (> num_ctrl_inputs 0)
                   (for ((int i . 0)) (< i num_ctrl_inputs) ((++ i))
                        (TF_AddControlInput desc (nth i ctrl_inputs))))
               ;; Set additional attributes (via lambda)
               (if set_attrs (set_attrs desc))
               ;; Finalize operation
               (let ((TF_Operation * op . #'(TF_FinishOperation desc ($ this status ptr))))
                 (return op))))
     ))

(DEFMACRO tensor-header ()
  `(ghost
       (include <tensorflow/c/c_api.h>)
     
     (struct Tensor
       (member TF_Tensor * ptr))
     
     ;; Allocation and deletion
     (decl) (func Tensor->new ((const TF_DataType dtype)
                               (const int64_t * dims)
                               (const int num_dims)
                               (void * data)
                               (const size_t len)
                               (func deallocator ((void * data) (size_t len) (void * arg)))
                               (void * deallocator_arg)))
     (decl) (func Tensor->newFromData ((const TF_DataType dtype)
                                       (const int64_t * dims)
                                       (const int num_dims)
                                       (void * data)
                                       (const size_t len)))
     (decl) (func Tensor->newFloat ((const int64_t * dims) (const int num_dims) (float * data)))
     (decl) (func Tensor->newFromFloatArray ((float * values) (int64_t * shape) (int rank) (int value_count)))
     (decl) (func Tensor->newFromIntArray ((int32_t * values) (int64_t * shape) (int rank) (int value_count)))
     (decl) (func Tensor->newFromInt64Array ((int64_t * arr) (int * dims) (int num_dims)))
     (decl) (func Tensor->newFromBoolArray ((uint8_t * arr) (int * dims) (int num_dims)))
     (decl) (func Tensor->newFromScalarFloat ((float value)))
     (decl) (method Tensor->free ())
     
     ;; Tensor info
     (decl) (method Tensor->type () (out int))
     (decl) (method Tensor->numDims () (out int))
     (decl) (method Tensor->dim ((int i)) (out int64_t))
     (decl) (method Tensor->byteSize () (out size_t))
     (decl) (method Tensor->data () (out void *))))

(DEFMACRO tensor-source ()
  `(ghost
       (func Tensor->new ((const TF_DataType dtype)
                          (const int64_t * dims)
                          (const int num_dims)
                          (void * data)
                          (const size_t len)
                          (func deallocator ((void * data) (size_t len) (void * arg)))
                          (void * deallocator_arg))
             (let ((Tensor * tensor . #'(malloc (sizeof Tensor))))
               (set ($ tensor ptr)
                 (TF_NewTensor dtype dims num_dims data len deallocator deallocator_arg))
               (return tensor)))

     ;; Create tensor with borrowed data (no deallocator)
     (func Tensor->newFromData ((const TF_DataType dtype)
                                (const int64_t * dims)
                                (const int num_dims)
                                (void * data)
                                (const size_t len))
           (let ((Tensor * tensor . #'(malloc (sizeof Tensor))))
             (set ($ tensor ptr) (TF_NewTensor dtype dims num_dims data len 0 0))
             (return tensor)))

     (func Tensor->newFloat ((const int64_t * dims)
                             (const int num_dims)
                             (float * data))
           (return (-> Tensor newFromData TF_FLOAT dims num_dims data (sizeof float))))

     (func Tensor->newFromFloatArray ((float * values) (int64_t * shape) (int rank) (int value_count))
           (let ((int64_t total_bytes . #'(* value_count (sizeof float)))
                 (int64_t * dims . shape)
                 (TF_Tensor * t . #'(TF_NewTensor TF_FLOAT
                                      dims
                                      rank
                                      values
                                      total_bytes
                                      0 ;; deallocator
                                      0)))
             (return (-> Tensor new t))))

     (func Tensor->newFromIntArray ((int32_t * values) (int64_t * shape) (int rank) (int value_count))
           (let ((int64_t total_bytes . #'(* value_count (sizeof int32_t)))
                 (int64_t * dims . shape)
                 (TF_Tensor * t . #'(TF_NewTensor TF_INT32
                                      dims
                                      rank
                                      values
                                      total_bytes
                                      0 ;; deallocator
                                      0)))
             (return (-> Tensor new t))))

     (func Tensor->newFromInt64Array ((int64_t * arr) (int * dims) (int num_dims))
           (let ((int64_t total_size . 1))
             (for ((int i . 0)) (< i num_dims) ((++ i))
                  (set total_size (* total_size (nth i dims))))
             (let ((TF_Tensor * t . #'(TF_NewTensor TF_INT64 dims num_dims arr
                                                    (* total_size (sizeof int64_t))
                                                    0 0)))
               (return (-> Tensor new t)))))

     (func Tensor->newFromBoolArray ((uint8_t * arr) (int * dims) (int num_dims))
           (let ((int64_t total_size . 1))
             (for ((int i . 0)) (< i num_dims) ((++ i))
                  (set total_size (* total_size (nth i dims))))
             (let ((TF_Tensor * t . #'(TF_NewTensor TF_BOOL dims num_dims arr
                                                    total_size 0 0)))
               (return (-> Tensor new t)))))

     (func Tensor->newFromScalarFloat ((float value))
           (let ((float * val_ptr . #'(malloc (sizeof float))))
             (set (* val_ptr) value)
             (let ((TF_Tensor * t . #'(TF_NewTensor TF_FLOAT
                                        0
                                        0
                                        val_ptr
                                        (sizeof float)
                                        0
                                        0)))
               (return (-> Tensor new t)))))
  
     ;; Free the tensor
     (method Tensor->free ()
             (TF_DeleteTensor ($ this ptr))
             (free this))

     ;; Access tensor info
     (method Tensor->type () (out int)
             (return (TF_TensorType ($ this ptr))))

     (method Tensor->numDims () (out int)
             (return (TF_NumDims ($ this ptr))))

     (method Tensor->dim ((int i)) (out int64_t)
             (return (TF_Dim ($ this ptr) i)))

     (method Tensor->byteSize () (out size_t)
             (return (TF_TensorByteSize ($ this ptr))))

     (method Tensor->data () (out void *)
             (return (TF_TensorData ($ this ptr))))))

(import "slice.lisp")

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
                    (out Tensor *))))

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
               (return (-> out_vals firstElement))))))

(DEFMACRO ops-header ()
  `(ghost
       (decl) (func Placeholder ((Graph * g)
                                 (const char * name)
                                 (const TF_DataType dtype)
                                 (const int64_t * dims)
                                 (const int num_dims))
                    (out TF_Output))
       (decl) (func MatMul ((Graph * g)
                            (TF_Output a)
                            (TF_Output b)
                            (bool transpose_a)
                            (bool transpose_b))
                    (out TF_Output))
       (decl) (func BiasAdd ((Graph * g)
                             (TF_Output value)
                             (TF_Output bias))
                    (out TF_Output))
       (decl) (func Variable ((Graph * g)
                              (const char * name)
                              (const TF_DataType dtype)
                              (const int64_t * dims)
                              (int ndims))
                    (out TF_Output))
       (decl) (func Const ((Graph * g) (const char * name) (TF_Tensor * tensor)) (out TF_Output))
       (decl) (func ConstFloat ((Graph * g) (const char * name) (float value)) (out TF_Output))
       (decl) (func Assign ((Graph * g) (const char * name) (TF_Output var) (TF_Tensor * value)) (out TF_Operation *))
       (decl) (func AddSymbolicGradients ((Graph * g)
                                          (TF_Output * ys) (int y_count)
                                          (TF_Output * xs) (int x_count)
                                          (TF_Output * grads)
                                          (Status * status))
                    (out TF_Output *))
       (decl) (func ApplyGradientDescent ((Graph * g) (const char * name)
                                          (TF_Output var)
                                          (TF_Tensor * lr)
                                          (TF_Output grad))
                    (out TF_Operation *))
       (decl) (func NoOp ((Graph * g)
                          (const char * name)
                          ;; Optional: control dependencies
                          (TF_Operation ** control_deps)
                          (int num_control_deps))
                    (out TF_Operation *))
       (decl) (func Sub ((Graph * g) (const char * name) (TF_Output x) (TF_Output y)) (out TF_Output))
       (decl) (func Square ((Graph * g) (const char * name) (TF_Output x)) (out TF_Output))
       (decl) (func Mean ((Graph * g) (const char * name) (TF_Output x)) (out TF_Output))
))

(DEFMACRO ops-source ()
  `(ghost
       ;; Create a Placeholder operation
       (func Placeholder ((Graph * g)
                          (const char * name)
                          (const TF_DataType dtype)
                          (const int64_t * dims)
                          (const int num_dims))
             (out TF_Output)
             (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ g ptr) "Placeholder" name)))
               (TF_SetAttrType desc "dtype" dtype)
               (TF_SetAttrShape desc "shape" dims num_dims)
               (let ((TF_Operation * op . #'(TF_FinishOperation desc 0)))
                 (return (cast TF_Output '{ op 0 })))))

     ;; Matrix multiplication
     (func MatMul ((Graph * g)
                   (TF_Output a)
                   (TF_Output b)
                   (bool transpose_a)
                   (bool transpose_b))
           (out TF_Output)
           (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ g ptr) "MatMul" "matmul")))
             (TF_AddInput desc a)
             (TF_AddInput desc b)
             (TF_SetAttrBool desc "transpose_a" transpose_a)
             (TF_SetAttrBool desc "transpose_b" transpose_b)
             (let ((TF_Operation * op . #'(TF_FinishOperation desc 0)))
               (return (cast TF_Output '{ op 0 })))))

     ;; Bias addition
     (func BiasAdd ((Graph * g)
                    (TF_Output value)
                    (TF_Output bias))
           (out TF_Output)
           (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ g ptr) "BiasAdd" "bias_add")))
             (TF_AddInput desc value)
             (TF_AddInput desc bias)
             (TF_SetAttrType desc "T" TF_FLOAT)
             (let ((TF_Operation * op . #'(TF_FinishOperation desc 0)))
               (return (cast TF_Output '{ op 0 })))))

     ;; Variable
     (func Variable ((Graph * g)
                     (const char * name)
                     (const TF_DataType dtype)
                     (const int64_t * dims)
                     (int ndims))
           (out TF_Output)
       (let ((TF_OperationDescription * desc (TF_NewOperation ($ g ptr) "VariableV2" name)))
         (TF_SetAttrType desc "dtype" dtype)
         (TF_SetAttrShape desc "shape" dims ndims)
         (return (cast TF_Output '{ (TF_FinishOperation desc ($ g status ptr)) 0 }))))

     (func Const ((Graph * g) (const char * name) (TF_Tensor * tensor)) (out TF_Output)
           (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ g ptr) "Const" name)))
             (TF_SetAttrTensor desc "value" tensor)
             (TF_SetAttrType desc "dtype" (TF_TensorType tensor))
             (let ((TF_Operation * op . #'(TF_FinishOperation desc ($ g status ptr))))
               (return (cast TF_Output '{ op 0 })))))

     (func ConstFloat ((Graph * g) (const char * name) (float value)) (out TF_Output)
           (let ((float * val . #'(malloc (sizeof float))))
             (set (* val) value)
             (let ((TF_Tensor * tensor . #'(TF_NewTensor TF_FLOAT 0 0 val (sizeof float) 0 0))))
             (return (Const g name tensor))))

     ;; Assign
     (func Assign ((Graph * g) (const char * name) (TF_Output var) (TF_Tensor * value)) (out TF_Operation *)
           (let ((TF_Output const_val . #'(Const g "assign_value" value)))
             (let ((TF_OperationDescription * desc (TF_NewOperation ($ g ptr) "Assign" name)))
               (TF_AddInput desc var)
               (TF_AddInput desc const_val)
               (return (TF_FinishOperation desc ($ g status ptr))))))

     ;; AddSymbolicGradients
     (func AddSymbolicGradients ((Graph * g)
                                 (TF_Output * ys) (int y_count)
                                 (TF_Output * xs) (int x_count)
                                 (TF_Output * grads)
                                 (Status * status))
           (out TF_Output *)
           (TF_AddGradients ($ g ptr) ys y_count xs x_count 0 grads ($ g status ptr))
           (return grads))

     ;; ApplyGradientDescent
     (func ApplyGradientDescent ((Graph * g)
                                 (const char * name)
                                 (TF_Output var)
                                 (TF_Tensor * lr)
                                 (TF_Output grad))
           (out TF_Operation *)
           (let ((TF_OperationDescription * desc (TF_NewOperation ($ g ptr) "ApplyGradientDescent" name)))
             (TF_AddInput desc var)
             (TF_AddInput desc (Const g "lr_const" lr))
             (TF_AddInput desc grad)
             (return (TF_FinishOperation desc ($ g status ptr)))))

     (func NoOp ((Graph * g)
                 (const char * name)
                 (TF_Operation ** control_deps)
                 (int num_control_deps))
           (out TF_Operation *)
           (let ((TF_OperationDescription * desc . #'(TF_NewOperation ($ g ptr) "NoOp" name)))
             ;; Add control dependencies if given
             (when (> num_control_deps 0)
               (for ((int i . 0)) (< i num_control_deps) ((++ i))
                    (TF_AddControlInput desc (aget control_deps i))))
             (return (TF_FinishOperation desc ($ g status ptr)))))

     (func Sub ((Graph * g) (const char * name) (TF_Output x) (TF_Output y)) (out TF_Output)
           (return (-> g AddOp "Sub" name (aof x y) 2 1)))

     (func Square ((Graph * g) (const char * name) (TF_Output x)) (out TF_Output)
           (return (-> g AddOp "Square" name (aof x) 1 1)))

     (func Mean ((Graph * g) (const char * name) (TF_Output x)) (out TF_Output)
           ;; Create tensor for axis = [0]
           (let ((int dims . 1)
                 (int64_t * shape . #'(aof 1))
                 (int * data . #'(aof 0))
                 (TF_Tensor * axis_tensor . #'(TF_NewTensor TF_INT32 shape dims data (sizeof int) 0 0)))
             (let ((TF_Output axis . #'(Const g "axis" axis_tensor)))
               (return (-> g AddOp "Mean" name (aof x axis) 2 1)))))

     ))

(DEFMACRO Dense (name input units &KEY ((:input-dims input_dims) NIL))
  (LET* ((name-symb (INTERN name))
         (w-name (FORMAT NIL "~A_w" name))
         (b-name (FORMAT NIL "~A_b" name))
         (w-symb (INTERN w-name))
         (b-symb (INTERN b-name))
         (matmul-name  (FORMAT NIL "~A_matmul" name))
         (biasadd-name (FORMAT NIL "~A_out"    name)))
    `(progn
       ;; Dense weight: [input_dim, units]
       (letn ((TF_Output ,w-symb . #'(Variable ($ this graph) ,w-name TF_FLOAT ,input_dims 2))
              (TF_Output ,b-symb . #'(Variable ($ this graph) ,b-name TF_FLOAT ,input_dims 1)))
         ;; MatMul(input, weight)
         (letn ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this graph ptr) "MatMul" ,matmul-name)))
           (TF_AddInput desc ,input)
           (TF_AddInput desc ,w-symb)
           (TF_SetAttrBool desc "transpose_a" 0)
           (TF_SetAttrBool desc "transpose_b" 0)
           (letn ((TF_Output matmul_out . #'(cast TF_Output '{ (TF_FinishOperation desc ($ this graph status ptr)) 0 }))
                  ;; BiasAdd(matmul-out, bias)
                  (TF_OperationDescription * desc2 . #'(TF_NewOperation ($ this graph ptr) "BiasAdd" ,biasadd-name)))
             (TF_AddInput desc2 matmul_out)
             (TF_AddInput desc2 ,b-symb)
             (letn ((TF_Output ,name-symb . #'(TF_FinishOperation desc2 ($ this graph status ptr))))
               ,name-symb)))))))

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

(DEFMACRO model-source ()
  `(ghost
       (func Model->new ()
             (let ((Model * model . #'(malloc (sizeof Model)))
                   (int64_t dims [] . '{ -1 4 }))
               (set ($ model status) (-> Status new))
               (set ($ model graph)  (-> Graph new))
               (set ($ model input)  (Placeholder ($ model graph) "input" TF_FLOAT dims 2))
               (set ($ model input_placeholders) (-> IOSlice newFromArray (aof ($ model input)) 1))
               (return model)))

     (method Model->addDense ((int units)) (out TF_Output *)
             (let ((TF_Output * last_output . #'($ this output)))
               (when (== last_output nil) (set last_output (aof ($ this input))))
               (let ((TF_Output out . #'(malloc (sizeof TF_Outout))))
                 (set (cof out) (Dense "dense" (cof last_output) units))
                 (set ($ this output) (aof out))
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
             (let ((int64_t dims [] . '{ -1 1 })
                   (TF_Output labels . #'(Placeholder ($ this graph) label_name TF_FLOAT dims 2)))
               (set ($ this labels) labels)
               (set ($ this output_placeholders) (-> IOSlice newFromArray (aof labels) 1)))
             ;; 2. loss = mean(square(pred - label))
             (let ((TF_Output diff . #'(Sub ($ this graph) "diff" (cof ($ this output)) ($ this labels)))
                   (TF_Output sq   . #'(Square ($ this graph) "sq" diff))
                   (TF_Output loss . #'(Mean ($ this graph) "loss" sq)))
               (set ($ this loss) loss))
             ;; 3. Compute gradients
             (let ((int num_vars . #'(-> ($ this trainable_vars) len))
                   (TF_Output * grad_arr . #'(malloc (* num_vars (sizeof TF_Output)))))
               (AddSymbolicGradients
                   ($ this graph)
                 (aof ($ this loss))         1       ;; ys
                 ($ this trainable_vars arr) num_vars;; xs
                 grad_arr
                 ($ this status))
               (set ($ this gradients) (-> IOSlice newFromArray grad_arr num_vars))
               ;; 4. Create learning rate constants
               (let ((TF_Output * lr_arr . #'(malloc (* num_vars (sizeof TF_Output)))))
                 (for ((int i . 0)) (< i num_vars) ((++ i))
                      (let ((float * lr_val . #'(malloc (sizeof float))))
                        (set (* lr_val) 0.01f)
                        (let ((TF_Tensor ** lr_tensors . #'(malloc (* num_vars (sizeof TF_Tensor *))))
                              (TF_Tensor * lr_tensor . #'(TF_NewTensor TF_FLOAT 0 0 lr_val (sizeof float) 0 0)))
                          (set (nth i lr_arr) (ConstFloat ($ this graph) "lr" 0.01f))
                          (set (nth i lr_tensors) lr_tensor)
                          (set ($ this learning_rates_tensors) (-> TensorSlice newFromArray lr_tensors num_vars))
                          (set ($ this learning_rates) (-> IOSlice newFromArray lr_arr num_vars)))))
                 ;; 5. ApplyGradientDescent to each var
                 (let ((TF_Operation ** ops . #'(malloc (* num_vars (sizeof TF_Operation *)))))
                   (for ((int i . 0)) (< i num_vars) ((++ i))
                        (let ((TF_Operation * op . #'(ApplyGradientDescent
                                                         ($ this graph)
                                                       "apply_grad"
                                                       (nth i ($ this trainable_vars arr))
                                                       (nth i ($ this learning_rates_tensors arr))
                                                       (nth i ($ this gradients arr)))))
                          (set (nth i ops) op)))
                   ;; 6. Group all ops into a single NoOp train_op with control deps
                   (set ($ this train_op) (NoOp ($ this graph) "train" ops num_vars)))
                 ;; 7. Create session
                 (set ($ this session) (-> Session new ($ this graph) ($ this status))))))

     (method Model->fit ((TensorSlice * inputs) (TensorSlice * targets) (int epochs))
             (for ((int i . 0)) (< i epochs) ((++ i))
                  (let ((IOSlice * inputs_ . #'(-> IOSlice newFromArray (aof ($ this input)) 1))
                        (TensorSlice * input_vals_ . #'(-> TensorSlice newCopy inputs 1))
                        (IOSlice * labels_ . #'(-> IOSlice newFromArray (aof ($ this labels)) 1))
                        (TensorSlice * label_vals_ . #'(-> TensorSlice newCopy targets 1)))
                    (-> ($ this session) run inputs_ input_vals_ labels_ label_vals_))))

     (method Model->evaluate ((TensorSlice * inputs) (TensorSlice * targets)) (out float)
             (let ((IOSlice * inputs_ . #'(-> IOSlice newFromArray (aof ($ this input)) 1))
                   (TensorSlice * input_vals_ . #'(-> TensorSlice newCopy inputs 1))
                   (IOSlice * labels_ . #'(-> IOSlice newFromArray (aof ($ this labels)) 1))
                   (TensorSlice * label_vals_ . #'(-> TensorSlice newCopy targets 1))
                   (IOSlice * loss_outs . #'(-> IOSlice newFromArray (aof ($ this loss)) 1))
                   (TensorSlice * result . #'(-> TensorSlice newEmpty 1)))
               (-> ($ this session) run inputs_ input_vals_ loss_outs result)
               (let ((Tensor * loss_tensor . #'(nth 0 (-> result arr)))
                     (float * loss_data . #'(cast (float *) (-> loss_tensor ptr))))
                 (return (* loss_data)))))

     (method Model->addTrainable ((const char * name) (int size)) (out TF_Output)
             (let ((TF_Output var . #'(Variable ($ this graph) name TF_FLOAT (aof size) 1)))
               ;; optionally initialize with zeros or random
               (let ((TF_Tensor * zero . #'(-> Tensor newFromFloatArray (aof 0.0) 1 (aof size) 1))
                     (char buffer [100])
                     (size_t buffer_len . #'(sprintf buffer "%s_init" name)))
                 (-> ($ this graph) AddOp (Assign ($ this graph) buffer var zero)))
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
                   (TF_Output labels . #'(Placeholder ($ this graph) label_name TF_FLOAT dims 2)))
               (set ($ this labels) labels)
               (set ($ this output_placeholders)
                 (-> IOSlice newFromArray (aof labels) 1)))
             (let ((TF_Output diff . #'(Sub ($ this graph) "diff" (cof ($ this output)) ($ this labels)))
                   (TF_Output sq   . #'(Square ($ this graph) "sq" diff))
                   (TF_Output loss . #'(Mean ($ this graph) "loss" sq)))
               (set ($ this loss) loss))
             ;; gradients: dloss/dw for each trainable var
             (let ((int var_count . #'($ this trainable_vars len))
                   (TF_Output * vars . #'(-> ($ this trainable_vars) arr))
                   (TF_Output * grad_arr . #'(malloc (* var_count (sizeof TF_Output)))))
               (AddSymbolicGradients
                   ($ this graph)
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
                      (ApplyGradientDescent ($ this graph) buffer var lr grad))))
             ;; session
             (set ($ this session) (-> Session new ($ this graph) ($ this status))))

     (method Model->prepareTrain ((TF_Output loss) (float lr))
             ;; Step 1: Get the number of trainable variables
             (let ((int count . #'($ this trainable_vars len))
                   ;; Step 2: Compute symbolic gradients
                   (TF_Output * grad_arr . #'(malloc (* count (sizeof TF_Output)))))
               (AddSymbolicGradients
                   ($ this graph)
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
                         (TF_Output out . #'(Const ($ this graph) "lr"  tensor)))
                     (set (nth i ($ lrs arr)) tensor)
                     (set (nth i ($ lr_outputs arr)) out)))
                 ;; Step 4: Apply gradients
                 (let ((TF_Operation * train_op . 0))
                   (dotimes (i count)
                     (let ((char buffer [12])
                           (size_t buffer_len . #'(sprintf buffer "train_op_%d" i))
                           (TF_Operation * op . #'(ApplyGradientDescent
                                                      ($ this graph)
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

(DEFMACRO define ()
  `(cicili
       (header "cicili_tf.h" ()
               (guard __CICILI_TF_H_
                 (include <tensorflow/c/c_api.h>)
                 
                 (status-header)
                 (graph-header)
                 (tensor-header)
                 (BasicSliceHeader "" IOSlice TF_Output 8 () () ())
                 (BasicSliceHeader "" TensorSlice (Tensor *) 8 () () ())
                 (session-header)
                 (ops-header)
                 (model-header)
                 ))
     
     (source "cicili_tf.c" (:std #t :compile #t :link #f)
             (include "cicili_tf.h")
             
             (status-source)
             (graph-source)
             (tensor-source)
             (BasicSliceSource "" IOSlice TF_Output 8 ())
             (BasicSliceSource "" TensorSlice (Tensor *) 8 ())
             (session-source)
             (ops-header)
             (model-source)
             )))

(define)
