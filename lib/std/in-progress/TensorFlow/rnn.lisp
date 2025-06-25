;;;;*************************************************************************
;;;; BasicTFRNNHeader – Interface for a Recurrent Neural Network Layer
;;;;*************************************************************************
(DEFMACRO BasicTFRNNHeader (path name input-dim output-dim activation include-body members-body header-body)
  (TF_LayerScope
    `(ghost
         (guard ,guard-label
           (include <tensorflow/c/c_api.h>)
           (include <stdlib.h>)
           ,@include-body
           
           ;; RNN Layer Struct
           (struct ,name
             (member int input_dim)
             (member int output_dim)
             (member char* activation)
             (member TF_Graph* graph)
             (member TF_Operation* input_op)
             (member TF_Operation* state_op)
             (member TF_Operation* weights_input)
             (member TF_Operation* weights_state)
             (member TF_Operation* biases_op)
             (member TF_Operation* output_op)
             ,@members-body)
           
           ;; API Declarations
           (decl) (func ,(make-method-name name 'newLayer) ((int input_dim) (int output_dim) (const char* activation)) (out ,name*))
           (decl) (method ,(make-method-name name 'forward) ((TF_Tensor* input)) (out TF_Tensor*))
           (decl) (method ,(make-method-name name 'backward) ((TF_Tensor* grad_output) (float learning_rate)) (out TF_Tensor*))
           (decl) (method ,(make-method-name name 'free) () (out void))
           
           ,@header-body))))

;;;;*************************************************************************
;;;; BasicTFRNNSource – Implementation Skeleton for Recurrent Layer
;;;;*************************************************************************
(DEFMACRO BasicTFRNNSource (path name include-body source-body)
  (TF_LayerScope
    `(ghost
         (include <string.h>)
         (include <stdio.h>)
         ,@include-body
         
         (func ,(make-method-name name 'newLayer) ((int input_dim) (int output_dim) (const char* activation)) (out ,name*)
               (let ((,name* layer . #'(malloc (sizeof ,name))))
                 (set ($ layer input_dim) input_dim)
                 (set ($ layer output_dim) output_dim)
                 (set ($ layer activation) (strdup activation))
                 (set ($ layer graph) (TF_NewGraph()))
                 ;; Create dummy operations for input, state, weights, biases (to be replaced)
                 (set ($ layer input_op) (dummy_create_placeholder(($ layer graph))))
                 (set ($ layer weights_input) (dummy_create_variable(($ layer graph), input_dim, output_dim)))
                 (set ($ layer weights_state) (dummy_create_variable(($ layer graph), output_dim, output_dim)))
                 (set ($ layer biases_op) (dummy_create_variable(($ layer graph), 1, output_dim)))
                 (set ($ layer state_op) (dummy_create_state(($ layer graph))))
                 (set ($ layer output_op) (dummy_setup_forward_op_rnn(($ layer graph), ($ layer input_op),
                                                                       ($ layer state_op),
                                                                       ($ layer weights_input),
                                                                       ($ layer weights_state),
                                                                       ($ layer biases_op),
                                                                       activation)))
                 (return layer)))
         
         (method ,(make-method-name name 'forward) ((TF_Tensor* input)) (out TF_Tensor*)
               (return (dummy_run_model(this, input))))
         
         (method ,(make-method-name name 'backward) ((TF_Tensor* grad_output) (float learning_rate)) (out TF_Tensor*)
               (dummy_apply_gradients(($ this graph), ($ this weights_input), ($ this biases_op), grad_output, learning_rate))
               (return grad_output))
         
         (method ,(make-method-name name 'free) () (out void)
                 (TF_DeleteGraph(($ this graph)))
                 (free(($ this activation)))
                 (free(this))
                 (return))
         
         ,@source-body))))
