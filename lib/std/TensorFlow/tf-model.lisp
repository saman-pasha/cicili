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
