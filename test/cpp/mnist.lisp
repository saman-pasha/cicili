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

(DEFMACRO Model (&KEY (scope 'scope) (name 'net) (dtype 'float) input net output node loss)
  (FLET ((name-norm (&REST ns)
           (INTERN (FORMAT NIL "~{~A~^_~}"
                           (MAPCAR #'(LAMBDA (n)
                                       (IF (STRINGP n)
                                           (STRING-DOWNCASE n)
                                           (STRING-DOWNCASE (SYMBOL-NAME n))))
                                   ns))))
         (dtype-norm (dt)
           (INTERN (FORMAT NIL "DT_~A"
                           (IF (STRINGP dt)
                               (STRING-UPCASE dt)
                               (STRING-UPCASE (SYMBOL-NAME dt))))))
         (range (max &KEY (min 0) (step 1))
           (LOOP FOR n FROM min BELOW max BY step
                 COLLECT n))

         (remove-kv (key seq)
           (LET ((pos (POSITION key seq)))
             (IF pos
                 (APPEND (SUBSEQ seq 0 pos) (SUBSEQ seq (+ pos 2)))
                 seq))))

      (LET* ((scope scope)
             (net-name (name-norm name))
             (net-dtype (dtype-norm dtype))
             (input input)
             (output output)
             (inputs (IF (EQL (CAR input) 'QUOTE) (CDR input) (LIST input)))
             (net (CADR net))
             (outputs (IF (EQL (CAR output) 'QUOTE) (CDR output) (LIST output)))
             (node (CADR node))
             (loss (CADR loss)))

          (MACROLET ((io-case (operations &REST cases)
                       (MACROEXPAND
                        `(MAP 'LIST
                              #'(LAMBDA (op)
                                  (DESTRUCTURING-BIND (type name shape &KEY (dtype net-dtype dtype-p)) op
                                    (CASE (CAR op)
                                      ,@cases
                                      (OTHERWISE (ERROR (FORMAT NIL "unknown input/output operation ~A" op))))))
                              ,operations)))
                     
                     (net-case (operations &REST cases)
                       (MACROEXPAND
                        `(MAP 'LIST
                              #'(LAMBDA (op)
                                  (DESTRUCTURING-BIND (type name shape value &KEY (dtype net-dtype dtype-p)) op
                                    (CASE (CAR op)
                                      ,@cases
                                      (OTHERWISE (ERROR (FORMAT NIL "unknown net operation ~A" op))))))
                              ,operations)))
                     
                     (run-sequence (last-out-name operations)
                       (MACROEXPAND
                        `(MAP 'LIST
                              #'(LAMBDA (i prev-op op)
                                  (FORMAT T "~A ~A ~A~%" i prev-op op) 
                                  (DESTRUCTURING-BIND (prev-type prev-in-name &REST prev-args)
                                      (IF prev-op prev-op (LIST NIL NIL))
                                    (LET ((prev-out-name (SECOND (MEMBER :out-name prev-op))))
                                      (WHEN (> i 0)
                                        (NSUBST (IF prev-out-name
                                                    prev-out-name
                                                    (name-norm net-name 'node prev-type (FORMAT NIL "~A" i)))
                                          '$out op))
                                      (DESTRUCTURING-BIND (type in-name &REST args) op
                                        (LET* ((out-name (IF (MEMBER :out-name op)
                                                             (SECOND (MEMBER :out-name op))
                                                             (IF (= i (- (LENGTH node) 1)) ,last-out-name NIL)))
                                               ($out )
                                               (out-name (IF out-name
                                                             out-name
                                                             (name-norm net-name 'node type (FORMAT NIL "~A" (1+ i))))))
                                          (SETQ args (remove-kv :out-name args))
                                          `(auto ,out-name . #'(,type ,scope ,in-name ,@args)))))))
                              (range (LENGTH ,operations)) (APPEND (LIST NIL) ,operations) ,operations))))
          
            ;; whole net
            `(letn (;; inputs
                    ,@(io-case inputs
                        ('Placeholder `(auto ,(name-norm net-name name) .
                                             #'(,type
                                                ,scope
                                                ,(IF dtype-p (dtype-norm dtype) dtype)
                                                (($$ ,type Shape) ,shape)))))
                    
                      ;; net
                      ,@(APPLY #'APPEND
                               (net-case net
                                 ('Variable `((auto ,(name-norm net-name name) .
                                                    #'(,type
                                                       ,scope
                                                       ,shape
                                                       ,(IF dtype-p (dtype-norm dtype) dtype)))
                                              (auto ,(name-norm net-name 'assign name) .
                                                    #'(Assign
                                                       ,scope
                                                       ,(name-norm net-name name)
                                                       ,value))
                                              (auto ,(name-norm net-name 'accum name) .
                                                    #'(,type
                                                       ,scope
                                                       ,shape
                                                       ,(IF dtype-p (dtype-norm dtype) dtype)))
                                              (auto ,(name-norm net-name 'assign 'accum name) .
                                                    #'(Assign
                                                       ,scope
                                                       ,(name-norm net-name 'accum name)
                                                       (ZerosLike ,scope ,(name-norm net-name name))))))))
                      
                      ;; outputs
                      ,@(io-case outputs
                          ('Placeholder `(auto ,(name-norm net-name name) .
                                               #'(,type
                                                  ,scope
                                                  ,(IF dtype-p (dtype-norm dtype) dtype)
                                                  (($$ ,type Shape) ,shape)))))
                      
                      ) ; end of net declarations

               ;; init vars
               (TF_CHECK_OK
                   (=> session Run '{
                       ,@(net-case net
                           ('Variable (name-norm net-name 'assign name)))
                       } nullptr))

               ;; init accums
               (TF_CHECK_OK
                   (=> session Run '{
                       ,@(net-case net
                           ('Variable (name-norm net-name 'assign 'accum name)))
                       } nullptr))

               ;; node
               (let (;; node
                     ,@(run-sequence 'logits node)
                     ;; loss
                     ,@(run-sequence 'loss loss)
                       ;; gradients
                       (($$ std (t<> vector Output)) ,(name-norm net-name 'grad_outputs))                       
                       ) ; end of node declarations

                 ;; initialize gradients
                 
                 
               )) ; end of net, node
            )))) ; end of Model

(source "mnist.cpp" (:cpp #t :std #f :compile #t :link #t)
        ;; Tensorflow 2.19.0
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
        (@define VALIDATION_SIZE 5000)     ; Size of the validation set.
        (@define BATCH_SIZE 64)            ;
        (@define BATCHES_PER_EPOCHS 859)   ; (55000 / BATCH_SIZE) = 859 max
        (@define NUM_EPOCHS 10)            ;
        (@define EVAL_BATCH_SIZE 64)       ;
        (@define EVAL_FREQUENCY 100)       ; Number of steps between evaluations.
        (@define DECAY_RATE 0.95f)         ;
        (@define MOMENTUM 0.9f)            ;
        (@define BASE_LEARNING_RATE 0.01f) ;

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
                       (const int rate))
              (out Output)
              (let ((float keep_prob . #'(- 1 rate))
                    (auto random_value5 . #'(RandomUniform scope (Shape scope x) DT_FLOAT))
                    (auto random_tensor . #'(Add scope random_value5 ((t<> Const float) scope '{ keep_prob })))
                    (auto binary_tensor . #'(Floor scope random_tensor))
                    (auto result . #'(Multiply scope (Div scope x ((t<> Const float) scope '{ keep_prob })) binary_tensor)))
                (return ($ result z))))

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
                    (let ((($$ std string) inputs_str   . #'((=> (nth 0 outputs) (t<> scalar ($$ tensorflow tstring)))))
                          (const char * inputs_str_data . #'(=> inputs_str c_str))
                          (float * inputs_data          . #'(=> (=> inputs (t<> tensor float 4)) data))
                          (int count                    . #'(* NUM_IMAGES IMAGE_SIZE IMAGE_SIZE NUM_CHANNELS)))
                      
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
                
                (macrolet ((slice (type shape) `(cast ($$ gtl (t<> ArraySlice ,type)) ,shape)))
                  (let ((auto rate . #'(Const scope '{ 0.1f }))
                        (int s1 . #'(* (($$ std pow) (/ IMAGE_SIZE 4) 2) 64))
                        (float f1 . 5e-4)
                        
                        (auto random_value . #'(closure ((const Scope & scope) (int rate))
                                                 '(lambda ((($$ std (t<> initializer_list int)) shape))
                                                   (return (Multiply scope (TruncatedNormal scope shape DT_FLOAT) rate)))))
                        
                        (auto const_float . #'(closure ((const Scope & scope) (float rate . 0.1f))
                                                '(lambda ((($$ std (t<> initializer_list int)) shape))
                                                  (return ((t<> Const float) scope rate (TensorShape '{ shpae }))))))

                        ;; Trainable variables
                        ;; Convolutional Net
                        ;; Gradient accum parameters start here
                        ;; Initialize variables
                        (auto model .
                              #'(Model
                                    :name    mnist
                                    :dtype   float
                                    :input   (Placeholder inputs_ph '(BATCH_SIZE IMAGE_SIZE IMAGE_SIZE NUM_CHANNELS))
                                    :net     '((Variable  conv1_w '(5 5 NUM_CHANNELS 32)
                                                (random_value '(5 5 NUM_CHANNELS 32)))
                                               (Variable  conv1_b '(32)
                                                (=> (=> (Tensor DT_FLOAT (TensorShape '(32))) (t<> vec float)) setZero))
                                               (Variable  conv2_w '(5 5 32 64)           (random_value '(5 5 32 64)))
                                               (Variable  conv2_b '(64)                  (const_float  '(64)))
                                               (Variable  fc1_w   '(s1 512)              (random_value '(s1 512)))
                                               (Variable  fc1_b   '(512)                 (const_float  '(512)))
                                               (Variable  fc2_w   '(512 NUM_LABELS)      (random_value '(512 NUM_LABELS)))
                                               (Variable  fc2_b   '(NUM_LABELS)          (const_float  '(NUM_LABELS))))
                                    :output  (Placeholder labels_ph '(BATCH_SIZE) :dtype int64)
                                    ;; Convnet Model begin
                                    ;; $out referes to previous output
                                    ;; All operations should receive (scope, input, args...) and return TF Output
                                    ;; :out-name key enables handle complex mixed models
                                    :node    '((Conv2D   inputs_ph conv1_w (slice int '(1 1 1 1)) "SAME")
                                               (BiasAdd  $out conv1_b)
                                               (Relu     $out)
                                               (MaxPool  $out (slice int '(1 2 2 1)) (slice int '(1 2 2 1)) "SAME")
                                               (Conv2D   $out conv2_w (slice int '(1 1 1 1)) "SAME")
                                               (BiasAdd  $out conv2_b)
                                               (Relu     $out)
                                               (MaxPool  $out (slice int '(1 2 2 1)) (slice int '(1 2 2 1)) "SAME")
                                               ;; reshape
                                               (Reshape  $out '(BATCH_SIZE s1))
                                               (MatMul   $out fc1_w)
                                               (Add      $out fc1_b)
                                               (Relu     $out)
                                               ;; dropout
                                               (Dropout  $out 0.5f :out-name dropped_out)
                                               ;; model output
                                               (MatMul   dropped_out fc2_w)
                                               ;; default :out-name logits
                                               (Add      $out fc2_b))
                                    ;; loss calculation
                                    :loss    '((SparseSoftmaxCrossEntropyWithLogits logits labels_ph)
                                               (ReduceMean ($ $out loss) '{ 0 } :out-name reduce_mean)
                                               (L2Loss fc1_weights :out-name lfc1_w)
                                               (L2Loss fc1_biases  :out-name lfc1_b)
                                               (L2Loss fc2_weights :out-name lfc2_w)
                                               (L2Loss fc2_biases  :out-name lfc2_b)
                                               (AddN (cast (t<> initializer_list Input) '{ lfc1_w lfc1_w lfc1_w lfc1_w })
                                                 :out-name regularization)
                                               ;; when Operation name is not a single symbol :out-name should be set
                                               ((t<> Const float) '{ f1 } :out-name const_f1)
                                               (Multiply regularization $out)
                                               ;; default :out-name loss
                                               (Add reduce_mean $out))
                                    ))
                        ) ; end let declaration
                    
                    ))))
          (return 0)))
