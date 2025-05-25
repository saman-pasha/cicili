;;;; Realistic end-to-end TensorFlow C API example
;;;; Objective: Train a simple linear model y = Wx + b on synthetic data using Cicili-style TF macros

(header
    (include "tf.h")
  (include "stdio.h")
  (include "stdlib.h")
  (include "math.h")
  (define float32 TF_FLOAT)
  )

(source
    (letn (
           ;; Create graph and status
           (TF_Graph * graph . #'(TF_NewGraph))
           (TF_Status * status . #'(TF_NewStatus))

           ;; Create session
           (TF_SessionOptions * opts . #'(TF_NewSessionOptions))
           (TF_Session * sess . #'(TF_NewSession graph opts status))

           ;; Define input placeholder
           (int64_t dims[] . '{ -1 1 })
           (TF_Output x . #'(TF_GraphPlaceholder graph "x" float32 dims 2))

           ;; Define label placeholder
           (TF_Output y_true . #'(TF_GraphPlaceholder graph "y_true" float32 dims 2))

           ;; Variables: W, b
           (TF_Output W . #'(Variable graph "W" float32 (aof 1 1) 2))
           (TF_Output b . #'(Variable graph "b" float32 (aof 1) 1))

           ;; Prediction: y = Wx + b
           (TF_Output pred . #'(-> graph Add "y" (-> graph MatMul "Wx" x W) b))

           ;; Loss: mean(square(y - y_true))
           (TF_Output loss . #'(-> graph Mean "loss"
                                   (-> graph Square "sq"
                                       (-> graph Sub "sub" pred y_true))))

           ;; Gradients
           (TF_Output * grads . #'(malloc (* 2 (sizeof TF_Output))))
           (-> graph AddSymbolicGradients (aof loss) 1 (aof W b) 2 grads status)

           ;; Learning rate constant
           (TF_Output lr . #'(-> graph ConstFloat "lr" 0.01f))

           ;; ApplyGradientDescent
           (TF_Operation * train_op_W . #'(-> graph ApplyGradientDescent "train_W" W lr (nth 0 grads)))
           (TF_Operation * train_op_b . #'(-> graph ApplyGradientDescent "train_b" b lr (nth 1 grads)))

           ;; Group train ops
           (TF_Operation * train_group . #'(-> graph NoOp "train" (aof train_op_W train_op_b) 2))

           ;; Initialize variables
           (TF_Operation * init . #'(TF_GraphInitAllVariables graph))
           )

      ;; Run init
      (TF_SessionRun sess 0 0 0 0 0 0 0 (aof init) 1 0 status)

      ;; Generate synthetic data: x = [[1.0], [2.0], [3.0]], y = [[2.0], [4.0], [6.0]]
      (letn (
             (float x_data[] . '{ 1.0 2.0 3.0 })
             (float y_data[] . '{ 2.0 4.0 6.0 })
             (int64_t input_dims[] . '{ 3 1 })
             (TF_Tensor * x_tensor . #'(TF_NewTensor float32 input_dims 2 x_data (* 3 (sizeof float)) 0 0))
             (TF_Tensor * y_tensor . #'(TF_NewTensor float32 input_dims 2 y_data (* 3 (sizeof float)) 0 0))
             )

        ;; Train loop
        (for ((int i . 0)) (< i 1000) ((++ i))
             (TF_SessionRun sess
               0
               (aof x y_true) (aof x_tensor y_tensor) 2
               0 0 0
               (aof train_group) 1
               0 status)
             )

        ;; Evaluate loss
        (TF_Tensor * loss_out)
        (TF_SessionRun sess
          0
          (aof x y_true) (aof x_tensor y_tensor) 2
          (aof loss) (aof &loss_out) 1
          0 0 0
          0 status)

        ;; Print final loss
        (let ((float * loss_ptr . #'(cast (float *) (TF_TensorData loss_out))))
          (printf "Final loss: %f\n" (* loss_ptr)))
        )

      ;; Cleanup
      (TF_CloseSession sess status)
      (TF_DeleteSession sess status)
      (TF_DeleteGraph graph)
      (TF_DeleteStatus status)
      )
  )
