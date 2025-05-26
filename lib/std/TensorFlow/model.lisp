
(DEFMACRO model-header ()
  `(ghost
       ;; Define the model structure, holding a list of layer pointers and training config.
       (struct Model
         (member List<TF_CiciliLayer*> layers)
         (member char * optimizer)
         (member char * loss_function)
         (member float learning_rate)
         )

     (typedef func train_callback_t (()))
     
     ;; Model API declaration:
     (decl) (func (Model . new) ())
     (decl) (method (Model . addLayer) ((TF_CiciliLayer* layer)))
     (decl) (method (Model . compile) ((const char * optimizer)
                                     (const char * loss_function)
                                     (float learning_rate)))
     
     (decl) (method (Model . train) ((Dataset dataset) ; could be a callback whose responsible to retrieve next batch
                                   (int batch_size)
                                   (int epochs)
                                   (train_callback_t * callbacks)
                                   (int num_callbacks)))
     
     (decl) (method (Model . predict) ((Tensor * input)) (out Tensor *))
     
     (decl) (method (Model . free) ())
     ))

(DEFMACRO model-source ()
  `(ghost
       ;; Constructor: Create a new model instance.
       (func (Model . new) ()
             (let ((Model * model . #'(malloc (sizeof Model))))
               (set ($ model layers) (new List<TF_CiciliLayer*>()))
               (return model)))
     
     ;; addLayer: Append a TF_CiciliLayer pointer to the model's layer list.
     (method (Model . addLayer) ((TF_CiciliLayer* layer))
             (-> push ($ this layers) layer))
     
     ;; compile: Set up optimizer, loss, and learning rate.
     (method (Model . compile) ((const char * optimizer)
                              (const char * loss_function)
                              (float learning_rate))
             (set ($ this optimizer) (strdup optimizer))
             (set ($ this loss_function) (strdup loss_function))
             (set ($ this learning_rate) learning_rate))
     
     ;; train: Pseudo-code to iterate over epochs and batches, invoke forward,
     ;; backward, and user-defined callbacks.
     (method (Model . train) ((Dataset dataset)
                            (int batch_size)
                            (int epochs)
                            (train_callback_t * callbacks)
                            (int num_callbacks))
             (printf "Training for %d epochs with batch size %d\n", epochs, batch_size)
             ;; Here you would loop, call each layer's forward and backward methods,
             ;; update weights (via TensorFlow C API operations), and invoke callbacks.
             )
     
     ;; predict: Run forward pass on input tensor and return the output.
     (method (Model . predict) ((Tensor * input)) (out Tensor *)
             ;; Placeholder: Call a dummy function to simulate model inference.
             (return (dummy_run_model(this, input))))
     
     ;; free: Release resources from model layers and free the model itself.
     (method (Model . free) ()
             (free ($ this loss_function))
             (free ($ this optimizer))
             (dolist (layer ($ this layers))
               (-> layer free))
             (free this))
     
     ))
