;;;; https://github.com/rockzhuang/tensorflow/blob/master/tensorflow/examples/cc/cnn/mnist/mnist.cc
;;;;
;;;; Copyright 2018 The TensorFlow Authors. All Rights Reserved.
;;;;
;;;; Licensed under the Apache License, Version 2.0 (the "License");
;;;; You may obtain a copy of the License at
;;;; http://www.apache.org/licenses/LICENSE-2.0
;;;;
;;;; Unless required by applicable law or agreed to in writing, software
;;;; distributed under the License is distributed on an "AS IS" BASIS,
;;;; WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
;;;; See the License for the specific language governing permissions and
;;;; limitations under the License.
;;;;
;;;; ==============================================================================
;;;;
;;;; C++ implementation of LeNet-5-like convolutional MNIST model example
;;;; The correspoding python version:
;;;; https://github.com/tensorflow/models/tree/master/tutorials/image/mnist
;;;; 
;;;; Author: Rock Zhuang
;;;; Date  : Jan 23, 2019
;;;; 

(source "mnist.cpp" (:cpp #t :std #f :compile #t :link #t)

        (include "tensorflow/cc/client/client_session.h")
        (include "tensorflow/cc/framework/gradients.h")
        (include "tensorflow/cc/ops/dataset_ops_internal.h")
        (include "tensorflow/cc/ops/standard_ops.h")
        (include "tensorflow/core/framework/tensor.h")

        (using namespace tensorflow)
        (using namespace tensorflow ops)
        (using namespace tensorflow ops internal)
        (using namespace std)

        ;; Adjustable Parameters
        (@define VALIDATION_SIZE 5000) ; Size of the validation set.
        (@define BATCH_SIZE 64)
        (@define BATCHES_PER_EPOCHS 859) ; (55000 / BATCH_SIZE) = 859 max
        (@define NUM_EPOCHS 10)
        (@define EVAL_BATCH_SIZE 64)
        (@define EVAL_FREQUENCY 100) ; Number of steps between evaluations.
        (@define DECAY_RATE 0.95f)
        (@define MOMENTUM 0.9f)
        (@define BASE_LEARNING_RATE 0.01f)

        ;; Not to change
        (@define IMAGE_SIZE 28)
        (@define NUM_CHANNELS 1)
        (@define PIXEL_DEPTH 255.0f)
        (@define NUM_LABELS 10)
        (@define INPUTS_HEADER_BYTES 16)
        (@define LABELS_HEADER_BYTES 8)
        (@define NUM_IMAGES (code "(BATCH_SIZE * BATCHES_PER_EPOCHS)")) ; 55000 images max

        (static)
        (func DetailedDebugString ((const Tensor & tensor)) (out string)
              (return (($$ strings StrCat)
                       "Tensor<type: " (DataTypeString (=> tensor dtype))
                       " shape: " (=> (=> tensor shape) DebugString)
                       " values: " (=> tensor SummarizeValue -1 #t) ">")))

        (static)
        (func Dropout ((const Scope & scope)
                       (const Input x)
                       (const int rate)
                       (Output & dropout))
              (out Status)
              (let ((float keep_prob . #'(- 1 rate))
                    (auto random_value5 . #'(RandomUniform scope (Shape scope x) DT_FLOAT))
                    (auto random_tensor . #'(Add scope random_value5 ((t<> Const float) scope '{ keep_prob })))
                    (auto binary_tensor . #'(Floor scope random_tensor))
                    (auto result . #'(Multiply scope (Div scope x ((t<> Const float) scope '{ keep_prob })) binary_tensor)))
                (set dropout ($ result z)))
              (return (=> scope status)))

        (main*
            (let ((Scope scope . #'(($$ Scope NewRootScope))))
                  
              ;; 
              ;; Parse images and labels files into tensors
              ;; 
              
              ;; Read file and decompress data
              (let ((auto inputs_contents . #'(ReadFile scope
                                                ((t<> Const ($$ tensorflow tstring)) scope
                                                 "/tmp/data/train-images-idx3-ubyte.gz" (TensorShape '{ }))))
                    (auto inputs_decode_compressed . #'(DecodeCompressed scope
                                                         inputs_contents (($$ DecodeCompressed CompressionType) "GZIP")))
                    (auto labels_contents . #'(ReadFile scope
                                                ((t<> Const ($$ tensorflow tstring)) scope
                                                 "/tmp/data/train-labels-idx1-ubyte.gz" (TensorShape '{ }))))
                    (auto labels_decode_compressed . #'(DecodeCompressed scope
                                                         labels_contents (($$ DecodeCompressed CompressionType) "GZIP")))
                    ((t<> vector Tensor) outputs)
                    (ClientSession session . #'(ClientSession scope))

                    ;; Load data into tensors
                    (Tensor inputs . #'(Tensor DT_FLOAT (TensorShape '{ NUM_IMAGES IMAGE_SIZE IMAGE_SIZE NUM_CHANNELS })))
                    (Tensor labels . #'(Tensor DT_INT64 (TensorShape '{ NUM_IMAGES })))

                    (Status status . #'(=> session Run '{ }
                                           '{ inputs_decode_compressed labels_decode_compressed } '{ } (aof outputs))))
                
                (if (=> status ok)
                    ;; inputs
                    (let ((($$ std string) inputs_str . #'((=> (nth 0 outputs) (t<> scalar ($$ tensorflow tstring)))))
                          (const char * inputs_str_data . #'(=> inputs_str c_str))
                          (float * inputs_data . #'(=> (=> inputs (t<> tensor float 4)) data))
                          (int count . #'(* NUM_IMAGES IMAGE_SIZE IMAGE_SIZE NUM_CHANNELS)))
                      
                      (for ((int i . 0)) (< i count) ((1+ i))
                           (let ((float data . #'(cast uchar (cof (+ inputs_str_data INPUTS_HEADER_BYTES i)))))
                             (set data (/ (- data (/ PIXEL_DEPTH 2.0f)) PIXEL_DEPTH))
                             (set (nth i inputs_data) data)))

                      ;; labels
                      (let ((($$ std string) labels_str . #'((=> (nth 1 outputs) (t<> scalar ($$ tensorflow tstring)))))
                            (const char * labels_str_data . #'(=> labels_str c_str))
                            (int64 * labels_data . #'(=> (=> labels (t<> vec int64)) data)))
                        
                        (for ((int i . 0)) (< i NUM_IMAGES) ((1+ i))
                             (set (nth i labels_data) (cast uchar (cof (+ labels_str_data LABELS_HEADER_BYTES i)))))))
                    (block
                        (<< (LOG INFO) "Print: status: " status)
                      (return -1)))

                (let ((auto rate . #'(Const scope '{ 0.1f }))
                      (int s1 . #'(* (($$ std pow) (/ IMAGE_SIZE 4) 2) 64))
                      (auto random_value . (closure ((const Scope & scope) (int rate))
                                               '(lambda ((($$ std (t<> initializer_list int)) shape))
                                                 (return (Multiply scope (TruncatedNormal scope shape DT_FLOAT) rate)))))
                      ;; Trainable variables
                      ;; Convolutional Net
                      ;; Gradient accum parameters start here
                      ;; Initialize variables
                      (auto net .
                            #'(tf.Net
                                  :name "mnist" :dtype float
                                  :input  (Placeholder '{ BATCH_SIZE IMAGE_SIZE IMAGE_SIZE NUM_CHANNELS })
                                  :vars   '{
                                  (Variable '{ 5 5 NUM_CHANNELS 32 } (random_value '{ 5 5 NUM_CHANNELS 32 }))
                                  (Variable '{ 32 } (=> (Tensor DT_FLOAT (TensorShape '{ 32 }))
                                                      (=> (t<> vec float) setZero)))
                                  (Variable '{ 5 5 32 64 } (random_value '{ 5 5 32 64 }))
                                  (Variable '{ 64 } ((t<> Const float) scope 0.1f (TensorShape '{ 64 })))
                                  (Variable '{ s1 512 } (random_value '{ s1 512 }))
                                  (Variable '{ 512 } ((t<> Const float) scope 0.1f (TensorShape '{ 512 })))
                                  (Variable '{ 512 NUM_LABELS } (random_value '{ 512 NUM_LABELS }))
                                  (Variable '{ NUM_LABELS } ((t<> Const float) scope 0.1f (TensorShape '{ NUM_LABELS }))) }
                                  :output (Placeholder :dtype int64 :shape '(BATCH_SIZE)))))

                  )
                                                                    
                (let ((auto model . #'(tf.Model :name "mnist" :dtype float 
                                                :input-shape '(IMAGE_SIZE IMAGE_SIZE NUM_CHANNELS) :batch-size BATCH_SIZE
                                                (Conv2D :filters 32 :kernel-size 5 :padding "same" :activation "relu")
                                                (MaxPooling2D :pool-size '(2 2) :strides '(2 2) :padding "same")
                                                (Conv2D :filters 32 :kernel-size 5 :padding "same" :activation "relu")
                                                (MaxPooling2D :pool-size '(2 2) :strides '(2 2) :padding "same")
                                                (Flatten)
                                                (Dense 1024 :activation "relu")
                                                (Dropout 0.4f)
                                                (Dense 10 :activation "softmax"))))

                  
                  
                  )

                
                       
                       
                ))
          (return 0)))
