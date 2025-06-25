
(import "../Slice/slice.lisp")

;;;; Define a simple Callback struct for training events.
(struct TrainCallbacks
  (member func onEpochEnd ((int epoch) (float loss)))
  (member func onBatchEnd ((int batch) (float loss)))
  (member func onLearningRateChanged ((int epoch) (float new_learning_rate)))
  (member func onTrainEnd ()))

(struct Layer
  (member void * instance)
  (member func forward ())
  (member func backward ())
  (member func summary ()))
