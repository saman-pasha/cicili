
;;;; Define a simple Callback struct for training events.
(struct TrainCallbacks
  (member func onEpochEnd ((int epoch) (float loss)))
  (member func onBatchEnd ((int batch) (float loss)))
  (member func onLearningRateChanged ((int epoch) (float new_learning_rate)))
  (member func onTrainEnd ()))
