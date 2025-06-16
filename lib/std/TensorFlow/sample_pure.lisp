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


;;;============================================================================
;;; Filename: train_mlp_example.lisp
;;; Purpose : A multi‐layer neural‐network training example in Cicili’s DSL
;;;============================================================================

(import "cicili_graph.lisp"   () ())   ; Defines Graph, Placeholder, Const, Variable, etc.
(import "cicili_session.lisp" () ())   ; Defines session-run macro
(import "cicili_dataset.lisp" () ())   ; Defines Dataset abstractions

(source "train_mlp.c"
  (:std #t :compile #t :link "-ltensorflow -lm -o train_mlp")

  (include "cicili_graph.h")
  (include "cicili_session.h")
  (include "cicili_dataset.h")

  (main
    (let ((int    epochs     . 20)
          (int    batch_size . 64)
          (float  learning_rate . 0.001f))

      ;;────────────────────────────────────────────────────────────
      ;; 1) Build the model graph once
      ;;────────────────────────────────────────────────────────────
      (let ((Graph *g . #'(-> Graph new)))

        ;; 1.1 Placeholders for inputs (flattened 28×28 images) and labels  
        (-> g Placeholder x 
             (type :dtype float) (shape (-1 784)))
        (-> g Placeholder y_true 
             (type :dtype float) (shape (-1 10)))

        ;; 1.2 Variables: two dense layers’ weights & biases  
        (-> g Variable W1 (shape (784 128)) 
             (initializer random_normal :stddev 0.1f))
        (-> g Variable b1 (shape (128)) 
             (initializer zeros))
        (-> g Variable W2 (shape (128 10)) 
             (initializer random_normal :stddev 0.1f))
        (-> g Variable b2 (shape (10)) 
             (initializer zeros))

        ;; 1.3 Forward pass  
        (-> g MatMul    h1_lin (inputs x W1) (T float))
        (-> g Add       h1_pre (inputs h1_lin b1))
        (-> g Relu      h1     (inputs h1_pre))
        (-> g MatMul    logits (inputs h1 W2) (T float))
        (-> g Add       y_pred (inputs logits b2))

        ;; 1.4 Loss & metrics  
        (-> g SoftmaxCrossEntropyWithLogits xent 
             (labels y_true) (logits logits))
        (-> g Mean      loss (inputs xent) (axis (0)))
        (-> g ArgMax    pred_label (inputs y_pred) (axis 1))
        (-> g ArgMax    true_label (inputs y_true) (axis 1))
        (-> g Equal     correct    (inputs pred_label true_label))
        (-> g Cast      correct_f  (inputs correct) (DstT float))
        (-> g Mean      accuracy   (inputs correct_f) (axis (0)))

        ;; 1.5 Optimizer & training op  
        (-> g AdamOptimizer opt 
             (learning_rate learning_rate))
        (-> g ComputeGradients grads 
             (loss loss) (vars (W1 b1 W2 b2)))
        (-> g ApplyGradients train_op 
             (optimizer opt) (grads grads))

        ;; finalize graph
        (-> g Finalize)

        ;;────────────────────────────────────────────────────────────
        ;; 2) Initialize session & variables
        ;;────────────────────────────────────────────────────────────
        (session-run
          :options nil
          :graph   g
          :targets ('{opt/init 0}  ;; run the Adam state‐init subgraph
                    '{opt/apply_gradients 0})
          :on-success '(lambda () 
                         (format #t "Variables and optimizer initialized.~%")) )

        ;;────────────────────────────────────────────────────────────
        ;; 3) Training loop
        ;;────────────────────────────────────────────────────────────
        (for ((int epoch . 1)) (<= epoch epochs) ((++ epoch))
          ;; create a streaming MNIST batch‐iterator
          (let ((Dataset *ds . #'(-> MNIST new "train" batch_size)))
            (for ((int step . 0)) (< step ($ ds num_batches)) ((++ step))
              (let ((float *bx . #'(-> ds nextX))) 
                    (float *by . #'(-> ds nextY)))
                (session-run
                  :graph   g
                  :inputs  (('{x       0} (:dtype float :shape ((batch_size) 784) :data bx :size (* batch_size 784 (sizeof float))))
                            ('{y_true  0} (:dtype float :shape ((batch_size) 10)  :data by :size (* batch_size 10  (sizeof float))))
                           )
                  :outputs ('{loss      0} '{accuracy 0})
                  :targets ('{train_op  0})
                  :on-success '(lambda ((float *lst) (float *acc))
                                 (when (== (% step 100) 0)
                                   (format #t 
                                     "Epoch %2d Step %4d: loss=%f acc=%f~%" 
                                     epoch step (nth 0 lst) (nth 0 acc))))
                  :on-failure '(lambda ((Status *st))
                                 (format #f "ERROR: %s~%" (-> st message)))))))
          
          ;; end of epoch –– do a quick validation
          (let ((Dataset *vds . #'(-> MNIST new "validation" batch_size))
                (float sum_loss . 0.0f)
                (float sum_acc  . 0.0f)
                (int   n        . 0))
            (for ((int step . 0)) (< step ($ vds num_batches)) ((++ step))
              (let ((float *vx . #'(-> vds nextX)))
                    (float *vy . #'(-> vds nextY)))
                (session-run
                  :graph   g
                  :inputs  (('{x       0} (:dtype float :shape ((batch_size) 784) :data vx :size (* batch_size 784 (sizeof float))))
                            ('{y_true  0} (:dtype float :shape ((batch_size) 10)  :data vy :size (* batch_size 10  (sizeof float))))
                           )
                  :outputs ('{loss      0} '{accuracy 0})
                  :on-success '(lambda ((float *lst) (float *acc))
                                 (set sum_loss (+ sum_loss (nth 0 lst)))
                                 (set sum_acc  (+ sum_acc  (nth 0 acc)))
                                 (++ n))
                  :on-failure '(lambda ((Status *st))
                                 (format #f "ERROR: %s~%" (-> st message))))))  
            (format #t 
              "*** Epoch %2d complete: val_loss=%f, val_acc=%f~%" 
              epoch
              (/ sum_loss n)
              (/ sum_acc  n))))  

        ;;────────────────────────────────────────────────────────────
        ;; 4) Cleanup & exit
        ;;────────────────────────────────────────────────────────────
        (return 0))))
