
(DEFMACRO model-header ()
  `(ghost
       ;; Define the model structure, holding a list of layer pointers and training config.
       (struct Model
         (member List<TF_CiciliLayer*> layers)
         (member char * optimizer)
         (member char * loss_function)
         (member float learning_rate)
         (member TF_Session* session)      ;; New field: reused session.
         )

     ;; Model API declaration:
     (decl) (func (Model . new) ())

     (decl) (method (Model . initSession) ())
           
     (decl) (method (Model . addLayer) ((TF_CiciliLayer* layer)))
     
     (decl) (method (Model . compile) ((const char * optimizer)
                                       (const char * loss_function)
                                       (float learning_rate)))
     
     (decl) (method (Model . train) ((Dataset dataset) ; could be a callback whose responsible to retrieve next batch
                                     (int batch_size)
                                     (int epochs)
                                     (TrainCallbacks callbacks)))
     
     (decl) (method (Model . evaluate) ((Dataset testDataset)) (out float))

     (decl) (method (Model . predict) ((Tensor * input)) (out Tensor *))

     (decl) (method (Model . summary) ())
     
     (decl) (method (Model . free) ())
     ))

(DEFMACRO model-source ()
  `(ghost
       ;; Constructor: Create a new model instance.
       (func (Model . new) ()
             (let ((Model * model . #'(malloc (sizeof Model))))
               (set ($ model layers) (new List<TF_CiciliLayer*>()))
               (return model)))

     (method (Model . initSession) ()
             (when (null ($ this session))
               (let ((TF_SessionOptions * options . #'(TF_NewSessionOptions)))
                 (set ($ this session) (TF_NewSession ($ this graph ptr) options ($ this graph status ptr)))
                 (unless (-> ($ this graph status) ok)
                   (printf "Error initializing session: %s\n", (-> ($ this graph status) message)))
                 (TF_DeleteSessionOptions options))))
             
     ;; addLayer: Append a TF_CiciliLayer pointer to the model's layer list.
     (method (Model . addLayer) ((TF_CiciliLayer* layer))
             (-> ($ this layers) push layer))
     
     ;; compile: Set up optimizer, loss, and learning rate.
     (method (Model . compile) ((const char * optimizer)
                                (const char * loss_function)
                                (float learning_rate))
             (set ($ this optimizer) (strdup optimizer))
             (set ($ this loss_function) (strdup loss_function))
             (set ($ this learning_rate) learning_rate))
     
     ;; train: Complete training loop skeleton.
     (method (Model . train) ((Dataset dataset)
                              (int batch_size)
                              (int epochs)
                              (TrainCallbacks callbacks))
             (-> this initSession)
             
             ;; For each epoch.
             (for ((int epoch . 0)) (< epoch epochs) ((epoch++))
                  (let ((float epoch_loss . 0.0))

                    ;; For each batch (dummy loop, assuming dataset supports ‘numBatches’ property).
                    (for ((int batch . 0)) (< batch ($ dataset numBatches)) ((batch++))
                         (let ((Tensor * input . #'(-> dataset getBatchInput batch))
                               (Tensor * target . #'(-> dataset getBatchTarget batch))
                               (Tensor * output)
                               (float batch_loss . 0.0)
                               (Tensor * grad))
                           ;; Forward pass: propagate through all layers.
                           (set output (-> this predict input))
                           ;; Compute loss (dummy function; replace with real loss computation).
                           (set batch_loss (dummy_compute_loss output target))
                           (set epoch_loss (+ epoch_loss batch_loss))
                           ;; Backward pass: update gradients for each layer.
                           (set grad (dummy_compute_gradient batch_loss output target))
                           (dolist (layer ($ this layers))
                             (set grad (-> layer backward grad ($ this learning_rate))))
                           ;; Invoke batch end callbacks.
                           (($ callbacks onBatchEnd) batch batch_loss)))

                    ;; Update the learning rate based on the dynamic schedule.
                    (let ((float new_lr . #'(update_learning_rate epoch ($ this learning_rate) decay_interval decay_factor)))
                      (when (!= ($ this learning_rate) new_lr)
                        (set ($ this learning_rate) new_lr)
                        ;; If a learning rate change callback is defined, notify the user.
                        (($ callbacks onLearningRateChanged epoch new_lr))))
                      
                    ;; Invoke epoch end callbacks after processing all batches.
                    (($ callbacks onEpochEnd) epoch epoch_loss)))
             (($ callback onTrainEnd)))

     (method ,(make-method-name TF_CiciliModel 'train)
  ((Dataset dataset) (int epochs) (int batchSize) (TF_SGDOptimizer* optimizer)
    (TF_Callback* callbacks) (int nbCallbacks))
  (out void)
  
  ;; Reuse one session for the whole training loop.
  (let ((TF_SessionOptions* options . TF_NewSessionOptions()))
    (let ((TF_Status* status . TF_NewStatus()))
      (let ((TF_Session* session . TF_NewSession(($ this graph), options, status)))
        
        (for (int epoch = 0; epoch < epochs; epoch++)
          (let ((float epoch_loss . 0.0))
            ;; Loop over all batches in the dataset.
            (for (int batch = 0; batch < dataset.numBatches; batch++)
              (let ((TF_Tensor* input . (dataset getBatchInput batch))
                    (TF_Tensor* target . (dataset getBatchTarget batch))
                    (TF_Tensor* output))
                ;; Forward pass: obtain the output for the current batch.
                (set output (-> this predict input))
                ;; Compute loss from output and target.
                (let ((float loss . (dummy_compute_loss output target)))
                  (set epoch_loss (+ epoch_loss loss)))
                ;; Backward pass: for each layer, compute gradients and update weights.
                (forEach ($ this layers)
                  (lambda (layer)
                    ;; Here we assume each layer's backward function applies its own update.
                    (-> layer backward output ($ this learning_rate)))))
              ) ;; end for batch
            (printf "Epoch %d completed. Average Loss: %f\n", epoch, (/ epoch_loss dataset.numBatches))
            
            ;; (Optional) Invoke epoch callbacks.
            (for (int i = 0; i < nbCallbacks; i++)
              (if (not (isNull (nth i callbacks)))
                  ((nth i callbacks) onEpochEnd epoch (/ epoch_loss dataset.numBatches)) ))
            ) ;; end let epoch_loss
          ) ;; end for epoch
        
        ;; Clean up the session after training.
        (TF_DeleteSession(session, status))
      ) ;; end let session
      (TF_DeleteSessionOptions(options))
      (TF_DeleteStatus(status))
    ) ;; end let status/options
  ) ;; end top-level let
  (return)
)

     ;; evaluate: Run the model on a test dataset and return the average loss.
     (method (Model . evaluate) ((Dataset testDataset)) (out float)
             (let ((float total_loss . 0.0)
                   (int total_batches . testDataset.numBatches))
               (for ((int batch . 0)) (< batch total_batches) ((++ batch))
                    (let ((Tensor * input . #'(testDataset getBatchInput batch))
                          (TF_Tensor* target . #'(testDataset getBatchTarget batch))
                          (TF_Tensor* output))
                      (set output (-> this predict input))
                      (set total_loss (+ total_loss (dummy_compute_loss output target)))))
               (return (/ total_loss total_batches))))
             
     ;; predict: Run forward pass on input tensor and return the output.
     (method (Model . predict) ((Tensor * input)) (out Tensor *)
             ;; Placeholder: Call a dummy function to simulate model inference.
             (return (dummy_run_model(this input))))

     ;; summary: Print a summary of the model configuration and layer details.
     (method (Model . summary) ()
             (printf "Model Summary:\n")
             (printf "Optimizer: %s\n" ($ this optimizer))
             (printf "Loss Function: %s\n" ($ this loss_function))
             (printf "Learning Rate: %f\n" ($ this learning_rate))
             (printf "Total Layers: %d\n" (size ($ this layers)))
             (dolist (layer ($ this layers))
               (if ($ layer summary)
                   (-> layer summary)
                   (printf "- Layer: %s\n" ($ layer name)))))
     
     ;; free: Release resources from model layers and free the model itself.
     (method (Model . free) ()
             (unless (null ($ this session))
               (TF_DeleteSession ($ this session) ($ this graph status)))
             (free ($ this loss_function))
             (free ($ this optimizer))
             (dolist (layer ($ this layers))
               (-> layer free))
             (free this))
     
     ))
