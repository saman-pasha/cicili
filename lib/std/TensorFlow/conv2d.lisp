;;;;*************************************************************************
;;;; Conv2D Header – Interface for a Convolutional Layer
;;;;*************************************************************************
(DEFMACRO conv2d-header ()
  `(ghost
       ;; Convolutional Layer Struct
       (struct Conv2D
         (member Graph * graph)
         (member int input_dim)
         (member int output_dim)
         (member char * activation)
         (member TF_Operation* input_op)
         (member TF_Operation* output_op)
         (member int kernel_size)
         (member TF_Operation* conv_op)
         (member TF_Operation* weights_op)
         (member TF_Operation* biases_op)
         )
           
           ;; API Declarations
           (decl) (func ,(make-method-name name 'newLayer) ((int input_dim) (int output_dim) (int kernel_size) (const char* activation)) (out ,name*))
           (decl) (method ,(make-method-name name 'forward) ((TF_Tensor* input)) (out TF_Tensor*))
           (decl) (method ,(make-method-name name 'backward) ((TF_Tensor* grad_output) (float learning_rate)) (out TF_Tensor*))
           (decl) (method ,(make-method-name name 'free) () (out void))
           
           ,@header-body))))

;;;;*************************************************************************
;;;; Conv2D Source – Implementation for Convolutional Layer
;;;;*************************************************************************
(DEFMACRO BasicTFConv2DSource (path name include-body source-body)
  (TF_LayerScope
    `(ghost
         (include <string.h>)
         (include <stdio.h>)
         ,@include-body
         
         (func ,(make-method-name name 'newLayer) ((int input_dim) (int output_dim) (int kernel_size) (const char* activation)) (out ,name*)
               (let ((,name* layer . #'(malloc (sizeof ,name))))
                 (set ($ layer input_dim) input_dim)
                 (set ($ layer output_dim) output_dim)
                 (set ($ layer kernel_size) kernel_size)
                 (set ($ layer activation) (strdup activation))
                 (set ($ layer graph) (TF_NewGraph()))
                 ;; Create dummy operations for input, weights, biases, and conv (to be replaced)
                 (set ($ layer input_op) (dummy_create_placeholder(($ layer graph))))
                 (set ($ layer weights_op) (dummy_create_variable(($ layer graph), input_dim, output_dim)))
                 (set ($ layer biases_op) (dummy_create_variable(($ layer graph), 1, output_dim)))
                 (set ($ layer conv_op) (dummy_setup_conv_op(($ layer graph), kernel_size)))
                 (set ($ layer output_op) (dummy_setup_forward_op_conv(($ layer graph), ($ layer input_op),
                                                                        ($ layer weights_op),
                                                                        ($ layer biases_op),
                                                                        activation)))
                 (return layer)))
         
         (method ,(make-method-name name 'forward) ((TF_Tensor* input)) (out TF_Tensor*)
               (return (dummy_run_model(this, input))))
         
         (method ,(make-method-name name 'backward) ((TF_Tensor* grad_output) (float learning_rate)) (out TF_Tensor*)
               (dummy_apply_gradients(($ this graph), ($ this weights_op), ($ this biases_op), grad_output, learning_rate))
               (return grad_output))
         
         (method ,(make-method-name name 'free) () (out void)
                 (TF_DeleteGraph(($ this graph)))
                 (free(($ this activation)))
                 (free(this))
                 (return))
         
         ,@source-body))))
