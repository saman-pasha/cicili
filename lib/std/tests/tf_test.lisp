
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

