;;;;*************************************************************************
;;;; BasicTFOptimizerHeader – Base Optimizer Interface for TF Models
;;;;*************************************************************************
(DEFMACRO BasicTFOptimizerHeader (path name include-body members-body header-body)
  (TF_OptimizerScope
    `(ghost
         (guard ,guard-label
           (include <tensorflow/c/c_api.h>)
           (include <stdlib.h>)
           (include <stdio.h>)
           ,@include-body
           
           ;; Optimizer Base Struct
           (struct ,name
             (member char* type)
             (member float learning_rate)
             ,@members-body)
           
           ;; Optimizer API Declarations
           (decl) (func ,(make-method-name name 'newOptimizer) ((float learning_rate)) (out ,name*))
           (decl) (method ,(make-method-name name 'applyGradients) ((TF_Graph* graph) (TF_CiciliLayer* layer) (TF_Tensor* grad)) (out void))
           ,@header-body))))

;;;;*************************************************************************
;;;; BasicTFOptimizerSource – Base Optimizer Implementation Skeleton
;;;;*************************************************************************
(DEFMACRO BasicTFOptimizerSource (path name include-body source-body)
  (TF_OptimizerScope
    `(ghost
         (include <string.h>)
         (include <stdio.h>)
         ,@include-body
         
         ;; Constructor: Create a new Optimizer instance.
         (func ,(make-method-name name 'newOptimizer) ((float learning_rate)) (out ,name*)
               (let ((,name* opt . #'(malloc (sizeof ,name))))
                 (set ($ opt type) (strdup ,(STRING-UPCASE name))) ;; e.g., "SGD", "ADAM", etc.
                 (set ($ opt learning_rate) learning_rate)
                 (return opt)))
         
         ;; applyGradients: Dummy implementation; replace with real TF C API calls.
         (method ,(make-method-name name 'applyGradients) ((TF_Graph* graph) (TF_CiciliLayer* layer) (TF_Tensor* grad)) (out void)
                 (printf "Applying gradients with %s optimizer (lr=%f)\n", ($ this type), ($ this learning_rate))
                 (return))
         
         ,@source-body))))

;;;;*************************************************************************
;;;; TF_SGDOptimizerHeader – SGD Optimizer (inherits from BasicTFOptimizer)
;;;;*************************************************************************
(DEFMACRO TF_SGDOptimizerHeader (path name include-body members-body header-body)
  (BasicTFOptimizerHeader path name include-body members-body header-body))
  
;;;;*************************************************************************
;;;; TF_SGDOptimizerSource – SGD Optimizer Implementation
;;;;*************************************************************************
(DEFMACRO TF_SGDOptimizerSource (path name include-body source-body)
  (BasicTFOptimizerSource path name include-body source-body))

;;; new_value = old_value – learning_rate · gradient
(func TF_SGDOptimizer_applyGradients ((TF_Graph* graph) (TF_Operation* var) (TF_Output grad) (float lr)) (out void)
  (let ((TF_Status* status . TF_NewStatus()))
    ;; Step 1: Create a scalar tensor for the learning rate.
    (let ((TF_Tensor* lr_tensor . TF_AllocateTensor(TF_FLOAT, NULL, 0, (sizeof float))))
      (memcpy(TF_TensorData(lr_tensor), &lr, (sizeof float)))
      
      ;; Step 2: Create a constant op for the learning rate.
      (let ((TF_OperationDescription* const_desc . TF_NewOperation(graph, "Const", "lr_const")))
        (TF_SetAttrType(const_desc, "dtype", TF_FLOAT))
        (TF_SetAttrTensor(const_desc, "value", lr_tensor, status))
        (let ((TF_Operation* lr_const_op . TF_FinishOperation(const_desc, status)))
          (if (TF_GetCode(status) != TF_OK)
              (printf "Error creating lr_const_op: %s\n", TF_Message(status)))
          
          ;; Step 3: Build the ApplyGradientDescent op.
          (let ((TF_OperationDescription* apply_desc . TF_NewOperation(graph, "ApplyGradientDescent", "apply_grad_sgd")))
            ;; Input 0: Variable (weights or biases) to update.
            (TF_AddInput(apply_desc, (TF_Output){var, 0}))
            ;; Input 1: Learning rate constant.
            (TF_AddInput(apply_desc, (TF_Output){lr_const_op, 0}))
            ;; Input 2: The computed gradient tensor.
            (TF_AddInput(apply_desc, grad))
            ;; An attribute: disable locking (set to false).
            (TF_SetAttrBool(apply_desc, "use_locking", 0))
            (let ((TF_Operation* apply_op . TF_FinishOperation(apply_desc, status)))
              (if (TF_GetCode(status) != TF_OK)
                  (printf "Error creating ApplyGradientDescent op: %s\n", TF_Message(status)))
              
              ;; Step 4: Run the operation in a fresh TF session.
              (let ((TF_SessionOptions* options . TF_NewSessionOptions()))
                (let ((TF_Status* run_status . TF_NewStatus()))
                  (let ((TF_Session* session . TF_NewSession(graph, options, run_status)))
                    (TF_SessionRun(session,
                      /* run options */ NULL,
                      /* No feeds */ NULL, NULL, 0,
                      /* Fetch the ApplyGradientDescent op's result (ignored) */
                      (TF_Output[]){ (TF_Output){apply_op, 0} },
                      (TF_Tensor*[]){ NULL }, 1,
                      /* No target operations */ NULL, 0,
                      /* run metadata */ NULL, run_status))
                    (if (TF_GetCode(run_status) != TF_OK)
                        (printf "Error running ApplyGradientDescent op: %s\n", TF_Message(run_status)))
                    (TF_DeleteSession(session, run_status))
                    (TF_DeleteSessionOptions(options))
                    (TF_DeleteStatus(run_status))))))
          ))
      (TF_DeleteTensor(lr_tensor)))
    (TF_DeleteStatus(status))
    (return)))

;;;;*************************************************************************
;;;; TF_AdamOptimizerHeader – Adam Optimizer Header
;;;;*************************************************************************
(DEFMACRO TF_AdamOptimizerHeader (path name include-body members-body header-body)
  (BasicTFOptimizerHeader path name include-body members-body header-body))
  
;;;;*************************************************************************
;;;; TF_AdamOptimizerSource – Adam Optimizer Source
;;;;*************************************************************************
(DEFMACRO TF_AdamOptimizerSource (path name include-body source-body)
  (BasicTFOptimizerSource path name include-body source-body))

(func TF_AdamOptimizer_applyGradients 
      ((TF_Graph* graph) 
       (TF_Operation* var) 
       (TF_Operation* m) 
       (TF_Operation* v) 
       (TF_Output grad) 
       (float lr) 
       (float beta1) 
       (float beta2) 
       (float epsilon)) 
      (out void)
  (let ((TF_Status* status . TF_NewStatus()))
    ;; Create and set the learning rate constant.
    (let ((TF_Tensor* lr_tensor . TF_AllocateTensor(TF_FLOAT, NULL, 0, (sizeof float))))
      (memcpy(TF_TensorData(lr_tensor), &lr, (sizeof float)))
      (let ((TF_OperationDescription* lr_desc . TF_NewOperation(graph, "Const", "adam_lr_const")))
        (TF_SetAttrType(lr_desc, "dtype", TF_FLOAT))
        (TF_SetAttrTensor(lr_desc, "value", lr_tensor, status))
        (let ((TF_Operation* lr_const_op . TF_FinishOperation(lr_desc, status)))
          (if (TF_GetCode(status) != TF_OK)
              (printf "Error creating lr_const_op (Adam): %s\n", TF_Message(status)))
          
          ;; Create beta1 constant.
          (let ((TF_Tensor* beta1_tensor . TF_AllocateTensor(TF_FLOAT, NULL, 0, (sizeof float))))
            (memcpy(TF_TensorData(beta1_tensor), &beta1, (sizeof float)))
            (let ((TF_OperationDescription* beta1_desc . TF_NewOperation(graph, "Const", "adam_beta1_const")))
              (TF_SetAttrType(beta1_desc, "dtype", TF_FLOAT))
              (TF_SetAttrTensor(beta1_desc, "value", beta1_tensor, status))
              (let ((TF_Operation* beta1_const_op . TF_FinishOperation(beta1_desc, status)))
                (if (TF_GetCode(status) != TF_OK)
                    (printf "Error creating beta1_const_op: %s\n", TF_Message(status)))
                
                ;; Create beta2 constant.
                (let ((TF_Tensor* beta2_tensor . TF_AllocateTensor(TF_FLOAT, NULL, 0, (sizeof float))))
                  (memcpy(TF_TensorData(beta2_tensor), &beta2, (sizeof float)))
                  (let ((TF_OperationDescription* beta2_desc . TF_NewOperation(graph, "Const", "adam_beta2_const")))
                    (TF_SetAttrType(beta2_desc, "dtype", TF_FLOAT))
                    (TF_SetAttrTensor(beta2_desc, "value", beta2_tensor, status))
                    (let ((TF_Operation* beta2_const_op . TF_FinishOperation(beta2_desc, status)))
                      (if (TF_GetCode(status) != TF_OK)
                          (printf "Error creating beta2_const_op: %s\n", TF_Message(status)))
                      
                      ;; Create epsilon constant.
                      (let ((TF_Tensor* eps_tensor . TF_AllocateTensor(TF_FLOAT, NULL, 0, (sizeof float))))
                        (memcpy(TF_TensorData(eps_tensor), &epsilon, (sizeof float)))
                        (let ((TF_OperationDescription* eps_desc . TF_NewOperation(graph, "Const", "adam_epsilon_const")))
                          (TF_SetAttrType(eps_desc, "dtype", TF_FLOAT))
                          (TF_SetAttrTensor(eps_desc, "value", eps_tensor, status))
                          (let ((TF_Operation* eps_const_op . TF_FinishOperation(eps_desc, status)))
                            (if (TF_GetCode(status) != TF_OK)
                                (printf "Error creating epsilon_const_op: %s\n", TF_Message(status)))
                            
                            ;; For beta1_power and beta2_power, in a full implementation these are updated over time.
                            ;; Here, we use beta1 and beta2 directly as dummy values.
                            (let ((TF_Tensor* beta1_power_tensor . TF_AllocateTensor(TF_FLOAT, NULL, 0, (sizeof float))))
                              (memcpy(TF_TensorData(beta1_power_tensor), &beta1, (sizeof float)))
                              (let ((TF_OperationDescription* beta1_power_desc . TF_NewOperation(graph, "Const", "adam_beta1_power_const")))
                                (TF_SetAttrType(beta1_power_desc, "dtype", TF_FLOAT))
                                (TF_SetAttrTensor(beta1_power_desc, "value", beta1_power_tensor, status))
                                (let ((TF_Operation* beta1_power_op . TF_FinishOperation(beta1_power_desc, status)))
                                  (if (TF_GetCode(status) != TF_OK)
                                      (printf "Error creating beta1_power_const: %s\n", TF_Message(status)))
                                  
                                  (let ((TF_Tensor* beta2_power_tensor . TF_AllocateTensor(TF_FLOAT, NULL, 0, (sizeof float))))
                                    (memcpy(TF_TensorData(beta2_power_tensor), &beta2, (sizeof float)))
                                    (let ((TF_OperationDescription* beta2_power_desc . TF_NewOperation(graph, "Const", "adam_beta2_power_const")))
                                      (TF_SetAttrType(beta2_power_desc, "dtype", TF_FLOAT))
                                      (TF_SetAttrTensor(beta2_power_desc, "value", beta2_power_tensor, status))
                                      (let ((TF_Operation* beta2_power_op . TF_FinishOperation(beta2_power_desc, status)))
                                        (if (TF_GetCode(status) != TF_OK)
                                            (printf "Error creating beta2_power_const: %s\n", TF_Message(status)))
                                        
                                        ;; Build the ApplyAdam op.
                                        (let ((TF_OperationDescription* apply_desc . TF_NewOperation(graph, "ApplyAdam", "apply_adam")))
                                          (TF_AddInput(apply_desc, (TF_Output){var, 0}))                ;; var
                                          (TF_AddInput(apply_desc, (TF_Output){m, 0}))                  ;; m
                                          (TF_AddInput(apply_desc, (TF_Output){v, 0}))                  ;; v
                                          (TF_AddInput(apply_desc, (TF_Output){beta1_power_op, 0}))     ;; beta1_power
                                          (TF_AddInput(apply_desc, (TF_Output){beta2_power_op, 0}))     ;; beta2_power
                                          (TF_AddInput(apply_desc, (TF_Output){lr_const_op, 0}))        ;; lr
                                          (TF_AddInput(apply_desc, (TF_Output){beta1_const_op, 0}))     ;; beta1
                                          (TF_AddInput(apply_desc, (TF_Output){beta2_const_op, 0}))     ;; beta2
                                          (TF_AddInput(apply_desc, (TF_Output){eps_const_op, 0}))       ;; epsilon
                                          (TF_AddInput(apply_desc, grad))                              ;; grad
                                          (let ((TF_Operation* apply_op . TF_FinishOperation(apply_desc, status)))
                                            (if (TF_GetCode(status) != TF_OK)
                                                (printf "Error creating ApplyAdam op: %s\n", TF_Message(status)))
                                            
                                            ;; Run the op in a new session.
                                            (let ((TF_SessionOptions* options . TF_NewSessionOptions()))
                                              (let ((TF_Status* run_status . TF_NewStatus()))
                                                (let ((TF_Session* session . TF_NewSession(graph, options, run_status)))
                                                  (TF_SessionRun(session,
                                                    NULL,
                                                    NULL, NULL, 0,
                                                    (TF_Output[]){ (TF_Output){apply_op, 0} },
                                                    (TF_Tensor*[]){ NULL },
                                                    1,
                                                    NULL, 0,
                                                    NULL,
                                                    run_status))
                                                  (if (TF_GetCode(run_status) != TF_OK)
                                                      (printf "Error running ApplyAdam op: %s\n", TF_Message(run_status)))
                                                  (TF_DeleteSession(session, run_status))
                                                  (TF_DeleteSessionOptions(options))
                                                  (TF_DeleteStatus(run_status)))))))))))))))))))))))))))))))))
    (TF_DeleteStatus(status))
    (return)))

;;;;*************************************************************************
;;;; TF_RMSPropOptimizerHeader – RMSProp Optimizer Header
;;;;*************************************************************************
(DEFMACRO TF_RMSPropOptimizerHeader (path name include-body members-body header-body)
  (BasicTFOptimizerHeader path name include-body members-body header-body))
  
;;;;*************************************************************************
;;;; TF_RMSPropOptimizerSource – RMSProp Optimizer Source
;;;;*************************************************************************
(DEFMACRO TF_RMSPropOptimizerSource (path name include-body source-body)
  (BasicTFOptimizerSource path name include-body source-body))

(func TF_RMSPropOptimizer_applyGradients 
      ((TF_Graph* graph) 
       (TF_Operation* var) 
       (TF_Operation* ms) 
       (TF_Operation* mom) 
       (TF_Output grad) 
       (float lr) 
       (float rho) 
       (float momentum) 
       (float epsilon)) 
      (out void)
  (let ((TF_Status* status . TF_NewStatus()))
    ;; Create and set the learning rate constant.
    (let ((TF_Tensor* lr_tensor . TF_AllocateTensor(TF_FLOAT, NULL, 0, (sizeof float))))
      (memcpy(TF_TensorData(lr_tensor), &lr, (sizeof float)))
      (let ((TF_OperationDescription* lr_desc . TF_NewOperation(graph, "Const", "rms_lr_const")))
        (TF_SetAttrType(lr_desc, "dtype", TF_FLOAT))
        (TF_SetAttrTensor(lr_desc, "value", lr_tensor, status))
        (let ((TF_Operation* lr_const_op . TF_FinishOperation(lr_desc, status)))
          (if (TF_GetCode(status) != TF_OK)
              (printf "Error creating lr_const_op (RMSProp): %s\n", TF_Message(status)))
          
          ;; Create rho constant.
          (let ((TF_Tensor* rho_tensor . TF_AllocateTensor(TF_FLOAT, NULL, 0, (sizeof float))))
            (memcpy(TF_TensorData(rho_tensor), &rho, (sizeof float)))
            (let ((TF_OperationDescription* rho_desc . TF_NewOperation(graph, "Const", "rms_rho_const")))
              (TF_SetAttrType(rho_desc, "dtype", TF_FLOAT))
              (TF_SetAttrTensor(rho_desc, "value", rho_tensor, status))
              (let ((TF_Operation* rho_const_op . TF_FinishOperation(rho_desc, status)))
                (if (TF_GetCode(status) != TF_OK)
                    (printf "Error creating rho_const_op: %s\n", TF_Message(status)))
                
                ;; Create momentum constant.
                (let ((TF_Tensor* mom_tensor . TF_AllocateTensor(TF_FLOAT, NULL, 0, (sizeof float))))
                  (memcpy(TF_TensorData(mom_tensor), &momentum, (sizeof float)))
                  (let ((TF_OperationDescription* mom_desc . TF_NewOperation(graph, "Const", "rms_momentum_const")))
                    (TF_SetAttrType(mom_desc, "dtype", TF_FLOAT))
                    (TF_SetAttrTensor(mom_desc, "value", mom_tensor, status))
                    (let ((TF_Operation* mom_const_op . TF_FinishOperation(mom_desc, status)))
                      (if (TF_GetCode(status) != TF_OK)
                          (printf "Error creating momentum_const_op: %s\n", TF_Message(status)))
                      
                      ;; Create epsilon constant.
                      (let ((TF_Tensor* eps_tensor . TF_AllocateTensor(TF_FLOAT, NULL, 0, (sizeof float))))
                        (memcpy(TF_TensorData(eps_tensor), &epsilon, (sizeof float)))
                        (let ((TF_OperationDescription* eps_desc . TF_NewOperation(graph, "Const", "rms_epsilon_const")))
                          (TF_SetAttrType(eps_desc, "dtype", TF_FLOAT))
                          (TF_SetAttrTensor(eps_desc, "value", eps_tensor, status))
                          (let ((TF_Operation* eps_const_op . TF_FinishOperation(eps_desc, status)))
                            (if (TF_GetCode(status) != TF_OK)
                                (printf "Error creating epsilon_const_op: %s\n", TF_Message(status)))
                            
                            ;; Create the ApplyRMSProp op.
                            (let ((TF_OperationDescription* apply_desc . TF_NewOperation(graph, "ApplyRMSProp", "apply_rmsprop")))
                              ;; Inputs in order: var, ms, mom, lr, rho, momentum, epsilon, grad.
                              (TF_AddInput(apply_desc, (TF_Output){var, 0}))
                              (TF_AddInput(apply_desc, (TF_Output){ms, 0}))
                              (TF_AddInput(apply_desc, (TF_Output){mom, 0}))
                              (TF_AddInput(apply_desc, (TF_Output){lr_const_op, 0}))
                              (TF_AddInput(apply_desc, (TF_Output){rho_const_op, 0}))
                              (TF_AddInput(apply_desc, (TF_Output){mom_const_op, 0}))
                              (TF_AddInput(apply_desc, (TF_Output){eps_const_op, 0}))
                              (TF_AddInput(apply_desc, grad))
                              (let ((TF_Operation* apply_op . TF_FinishOperation(apply_desc, status)))
                                (if (TF_GetCode(status) != TF_OK)
                                    (printf "Error creating ApplyRMSProp op: %s\n", TF_Message(status)))
                                
                                ;; Run the operation in a session.
                                (let ((TF_SessionOptions* options . TF_NewSessionOptions()))
                                  (let ((TF_Status* run_status . TF_NewStatus()))
                                    (let ((TF_Session* session . TF_NewSession(graph, options, run_status)))
                                      (TF_SessionRun(session,
                                        NULL,
                                        NULL, NULL, 0,
                                        (TF_Output[]){ (TF_Output){apply_op, 0} },
                                        (TF_Tensor*[]){ NULL },
                                        1,
                                        NULL, 0,
                                        NULL,
                                        run_status))
                                      (if (TF_GetCode(run_status) != TF_OK)
                                          (printf "Error running ApplyRMSProp op: %s\n", TF_Message(run_status)))
                                      (TF_DeleteSession(session, run_status))
                                      (TF_DeleteSessionOptions(options))
                                      (TF_DeleteStatus(run_status))))))))))))
                        (TF_DeleteTensor(eps_tensor))))))))
                  (TF_DeleteTensor(mom_tensor))))))))
            (TF_DeleteTensor(rho_tensor))))
      (TF_DeleteTensor(lr_tensor)))
    (TF_DeleteStatus(status))
    (return)))
