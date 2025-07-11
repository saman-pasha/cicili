#include "tensorflow/cc/client/client_session.h"
#include "tensorflow/cc/framework/gradients.h"
#include "tensorflow/cc/ops/dataset_ops_internal.h"
#include "tensorflow/cc/ops/standard_ops.h"
#include "tensorflow/core/framework/tensor.h"
using namespace tensorflow ; 
using namespace tensorflow :: ops ; 
using namespace tensorflow :: ops :: internal ; 
using namespace std ; 
#define VALIDATION_SIZE 5000
#define BATCH_SIZE 64
#define BATCHES_PER_EPOCHS 859
#define NUM_EPOCHS 10
#define EVAL_BATCH_SIZE 64
#define EVAL_FREQUENCY 100
#define DECAY_RATE 0.95f 
#define MOMENTUM 0.9f 
#define BASE_LEARNING_RATE 0.01f 
#define IMAGE_SIZE 28
#define NUM_CHANNELS 1
#define PIXEL_DEPTH 255.0f 
#define NUM_LABELS 10
#define INPUTS_HEADER_BYTES 16
#define LABELS_HEADER_BYTES 8
#define NUM_IMAGES (BATCH_SIZE * BATCHES_PER_EPOCHS) 
static string DetailedDebugString (const Tensor & tensor ) {
  return strings :: StrCat ("Tensor<type: ", DataTypeString ((tensor . dtype ())), " shape: ", ((tensor . shape ()). DebugString ()), " values: ", (tensor . SummarizeValue (-1, true )), ">");
}
static Output Dropout (const Scope & scope , const Input x , const float rate ) {
  { /* cicili#Let133 */
    float keep_prob  = (1 -  rate  );
    __auto_type random_value5  = RandomUniform (scope , Shape (scope , x ), DT_FLOAT );
    __auto_type random_tensor  = Add (scope , random_value5 , Const < float > (scope , { keep_prob }));
    __auto_type binary_tensor  = Floor (scope , random_tensor );
    __auto_type result  = Multiply (scope , Div (scope , x , Const < float > (scope , { keep_prob })), binary_tensor );
    return (result . z );
  }
}
struct { /* ciciliStruct191 */
  const Scope * scope ;
  Output rate ;
} ciciliClosure189 ;
static Output __ciciliL_194 (tensorflow :: Input  shape ) {
  const Scope * scope  = (ciciliClosure189 . scope );
  Output rate  = (ciciliClosure189 . rate );
  return Multiply ((*scope ), TruncatedNormal ((*scope ), shape , DT_FLOAT ), rate );
}
struct { /* ciciliStruct201 */
  const Scope * scope ;
  float rate ;
} ciciliClosure199 ;
static Output __ciciliL_204 (std :: initializer_list < int64_t >  shape ) {
  const Scope * scope  = (ciciliClosure199 . scope );
  float rate  = (ciciliClosure199 . rate );
  return Const < float > ((*scope ), rate , TensorShape ({ shape }));
}
struct { /* ciciliStruct249 */
  ClientSession * session ;
  Output mnist_inputs_ph ;
  Output mnist_labels_ph ;
  Output mnist_lr_ph ;
  Output loss ;
  Output mnist_apply_conv1_w ;
  Output mnist_apply_conv1_b ;
  Output mnist_apply_conv2_w ;
  Output mnist_apply_conv2_b ;
  Output mnist_apply_fc1_w ;
  Output mnist_apply_fc1_b ;
  Output mnist_apply_fc2_w ;
  Output mnist_apply_fc2_b ;
} ciciliClosure247 ;
static Status __ciciliL_252 (Tensor mnist_inputs_ph_tensor , Tensor mnist_labels_ph_tensor , Tensor mnist_lr_ph_tensor , vector < Tensor >  & outputs ) {
  ClientSession * session  = (ciciliClosure247 . session );
  Output mnist_inputs_ph  = (ciciliClosure247 . mnist_inputs_ph );
  Output mnist_labels_ph  = (ciciliClosure247 . mnist_labels_ph );
  Output mnist_lr_ph  = (ciciliClosure247 . mnist_lr_ph );
  Output loss  = (ciciliClosure247 . loss );
  Output mnist_apply_conv1_w  = (ciciliClosure247 . mnist_apply_conv1_w );
  Output mnist_apply_conv1_b  = (ciciliClosure247 . mnist_apply_conv1_b );
  Output mnist_apply_conv2_w  = (ciciliClosure247 . mnist_apply_conv2_w );
  Output mnist_apply_conv2_b  = (ciciliClosure247 . mnist_apply_conv2_b );
  Output mnist_apply_fc1_w  = (ciciliClosure247 . mnist_apply_fc1_w );
  Output mnist_apply_fc1_b  = (ciciliClosure247 . mnist_apply_fc1_b );
  Output mnist_apply_fc2_w  = (ciciliClosure247 . mnist_apply_fc2_w );
  Output mnist_apply_fc2_b  = (ciciliClosure247 . mnist_apply_fc2_b );
  return (session . Run ({ { mnist_inputs_ph , mnist_inputs_ph_tensor }, { mnist_labels_ph , mnist_labels_ph_tensor }, { mnist_lr_ph , mnist_lr_ph_tensor }}, { loss , mnist_apply_conv1_w , mnist_apply_conv1_b , mnist_apply_conv2_w , mnist_apply_conv2_b , mnist_apply_fc1_w , mnist_apply_fc1_b , mnist_apply_fc2_w , mnist_apply_fc2_b }, { }, (&outputs )));
}
int main (int argc , char * argv []) {
  { /* cicili#Let142 */
    Scope scope  = Scope :: NewRootScope ();
    { /* cicili#Let146 */
      __auto_type inputs_contents  = ReadFile (scope , Const < tensorflow :: tstring > (scope , "/tmp/data/train-images-idx3-ubyte.gz", TensorShape ({ })));
      __auto_type inputs_decode_compressed  = DecodeCompressed (scope , inputs_contents , DecodeCompressed :: CompressionType ("GZIP"));
      __auto_type labels_contents  = ReadFile (scope , Const < tensorflow :: tstring > (scope , "/tmp/data/train-labels-idx1-ubyte.gz", TensorShape ({ })));
      __auto_type labels_decode_compressed  = DecodeCompressed (scope , labels_contents , DecodeCompressed :: CompressionType ("GZIP"));
      vector < Tensor >  outputs ;
      ClientSession session  = ClientSession (scope );
      Tensor inputs  = Tensor (DT_FLOAT , TensorShape ({ NUM_IMAGES , IMAGE_SIZE , IMAGE_SIZE , NUM_CHANNELS }));
      Tensor labels  = Tensor (DT_INT64 , TensorShape ({ NUM_IMAGES }));
      Status status  = (session . Run ({ }, { inputs_decode_compressed , labels_decode_compressed }, { }, (&outputs )));
      if (status . ok ()) 
        { /* cicili#Let159 */
          std :: string  inputs_str  = (outputs [0]. scalar < tensorflow :: tstring > ())();
          const char * inputs_str_data  = (inputs_str . c_str ());
          float * inputs_data  = ((inputs . tensor < float , 4 > ()). data ());
          int count  = (NUM_IMAGES  *  IMAGE_SIZE  *  IMAGE_SIZE  *  NUM_CHANNELS  );
          for (int i  = 0; (i  <  count  ); (i ++)) {
            { /* cicili#Let169 */
              float data  = ((unsigned char)(*(inputs_str_data  +  INPUTS_HEADER_BYTES  +  i  )));
              data  = ((data  -  (PIXEL_DEPTH  /  2.0f  ) ) /  PIXEL_DEPTH  );
              inputs_data [i ] = data ;
            }
          } 
          { /* cicili#Let171 */
            std :: string  labels_str  = (outputs [1]. scalar < tensorflow :: tstring > ())();
            const char * labels_str_data  = (labels_str . c_str ());
            int64 * labels_data  = ((labels . vec < int64 > ()). data ());
            for (int i  = 0; (i  <  NUM_IMAGES  ); (i ++)) {
              labels_data [i ] = ((unsigned char)(*(labels_str_data  +  LABELS_HEADER_BYTES  +  i  )));
            } 
          }
        }
      else 
        { /* cicili#Block182 */
          (LOG (INFO ) <<  "Print: status: " <<  status  );
          return -1;
        } /* cicili#Block182 */
      { /* cicili#Let185 */
        __auto_type rate  = Const (scope , { 0.1f });
        int s1  = (std :: pow ((IMAGE_SIZE  /  4 ), 2) *  64 );
        float f1  = 5.0e-4;
        __auto_type b_zero_tensor  = Tensor (DT_FLOAT , TensorShape ({ 32}));
        __auto_type random_value  =             ({ /* cicili#Progn192 */
              ciciliClosure189  = ((typeof(ciciliClosure189 )){ (&scope ), rate });
              __ciciliL_194 ;
            });;
        __auto_type const_float  =             ({ /* cicili#Progn202 */
              ciciliClosure199  = ((typeof(ciciliClosure199 )){ (&scope ), 0.1f });
              __ciciliL_204 ;
            });;
        ((b_zero_tensor . vec < float > ()). setZero ());
        __auto_type model  =             ({ /* cicili#Progn215 */
              __auto_type mnist_inputs_ph  = Placeholder (scope , DT_FLOAT , Placeholder :: Shape ({ BATCH_SIZE , IMAGE_SIZE , IMAGE_SIZE , NUM_CHANNELS }));
              (LOG (INFO ) <<  "mnist_inputs_ph: " <<  (scope . status ()) );
              __auto_type mnist_conv1_w  = Variable (scope , { 5, 5, NUM_CHANNELS , 32}, DT_FLOAT );
              (LOG (INFO ) <<  "mnist_conv1_w: " <<  (scope . status ()) );
              __auto_type mnist_assign_conv1_w  = Assign (scope , mnist_conv1_w , random_value ({ 5, 5, NUM_CHANNELS , 32}));
              __auto_type mnist_accum_conv1_w  = Variable (scope , { 5, 5, NUM_CHANNELS , 32}, DT_FLOAT );
              __auto_type mnist_assign_accum_conv1_w  = Assign (scope , mnist_accum_conv1_w , ZerosLike (scope , mnist_conv1_w ));
              __auto_type mnist_conv1_b  = Variable (scope , { 32}, DT_FLOAT );
              (LOG (INFO ) <<  "mnist_conv1_b: " <<  (scope . status ()) );
              __auto_type mnist_assign_conv1_b  = Assign (scope , mnist_conv1_b , b_zero_tensor );
              __auto_type mnist_accum_conv1_b  = Variable (scope , { 32}, DT_FLOAT );
              __auto_type mnist_assign_accum_conv1_b  = Assign (scope , mnist_accum_conv1_b , ZerosLike (scope , mnist_conv1_b ));
              __auto_type mnist_conv2_w  = Variable (scope , { 5, 5, 32, 64}, DT_FLOAT );
              (LOG (INFO ) <<  "mnist_conv2_w: " <<  (scope . status ()) );
              __auto_type mnist_assign_conv2_w  = Assign (scope , mnist_conv2_w , random_value ({ 5, 5, 32, 64}));
              __auto_type mnist_accum_conv2_w  = Variable (scope , { 5, 5, 32, 64}, DT_FLOAT );
              __auto_type mnist_assign_accum_conv2_w  = Assign (scope , mnist_accum_conv2_w , ZerosLike (scope , mnist_conv2_w ));
              __auto_type mnist_conv2_b  = Variable (scope , { 64}, DT_FLOAT );
              (LOG (INFO ) <<  "mnist_conv2_b: " <<  (scope . status ()) );
              __auto_type mnist_assign_conv2_b  = Assign (scope , mnist_conv2_b , const_float ({ 64}));
              __auto_type mnist_accum_conv2_b  = Variable (scope , { 64}, DT_FLOAT );
              __auto_type mnist_assign_accum_conv2_b  = Assign (scope , mnist_accum_conv2_b , ZerosLike (scope , mnist_conv2_b ));
              __auto_type mnist_fc1_w  = Variable (scope , { s1 , 512}, DT_FLOAT );
              (LOG (INFO ) <<  "mnist_fc1_w: " <<  (scope . status ()) );
              __auto_type mnist_assign_fc1_w  = Assign (scope , mnist_fc1_w , random_value ({ s1 , 512}));
              __auto_type mnist_accum_fc1_w  = Variable (scope , { s1 , 512}, DT_FLOAT );
              __auto_type mnist_assign_accum_fc1_w  = Assign (scope , mnist_accum_fc1_w , ZerosLike (scope , mnist_fc1_w ));
              __auto_type mnist_fc1_b  = Variable (scope , { 512}, DT_FLOAT );
              (LOG (INFO ) <<  "mnist_fc1_b: " <<  (scope . status ()) );
              __auto_type mnist_assign_fc1_b  = Assign (scope , mnist_fc1_b , const_float ({ 512}));
              __auto_type mnist_accum_fc1_b  = Variable (scope , { 512}, DT_FLOAT );
              __auto_type mnist_assign_accum_fc1_b  = Assign (scope , mnist_accum_fc1_b , ZerosLike (scope , mnist_fc1_b ));
              __auto_type mnist_fc2_w  = Variable (scope , { 512, NUM_LABELS }, DT_FLOAT );
              (LOG (INFO ) <<  "mnist_fc2_w: " <<  (scope . status ()) );
              __auto_type mnist_assign_fc2_w  = Assign (scope , mnist_fc2_w , random_value ({ 512, NUM_LABELS }));
              __auto_type mnist_accum_fc2_w  = Variable (scope , { 512, NUM_LABELS }, DT_FLOAT );
              __auto_type mnist_assign_accum_fc2_w  = Assign (scope , mnist_accum_fc2_w , ZerosLike (scope , mnist_fc2_w ));
              __auto_type mnist_fc2_b  = Variable (scope , { NUM_LABELS }, DT_FLOAT );
              (LOG (INFO ) <<  "mnist_fc2_b: " <<  (scope . status ()) );
              __auto_type mnist_assign_fc2_b  = Assign (scope , mnist_fc2_b , const_float ({ NUM_LABELS }));
              __auto_type mnist_accum_fc2_b  = Variable (scope , { NUM_LABELS }, DT_FLOAT );
              __auto_type mnist_assign_accum_fc2_b  = Assign (scope , mnist_accum_fc2_b , ZerosLike (scope , mnist_fc2_b ));
              __auto_type mnist_labels_ph  = Placeholder (scope , DT_INT64 , Placeholder :: Shape ({ BATCH_SIZE }));
              (LOG (INFO ) <<  "mnist_labels_ph: " <<  (scope . status ()) );
              TF_CHECK_OK ((session . Run ({ mnist_assign_conv1_w , mnist_assign_conv1_b , mnist_assign_conv2_w , mnist_assign_conv2_b , mnist_assign_fc1_w , mnist_assign_fc1_b , mnist_assign_fc2_w , mnist_assign_fc2_b }, nullptr )));
              TF_CHECK_OK ((session . Run ({ mnist_assign_accum_conv1_w , mnist_assign_accum_conv1_b , mnist_assign_accum_conv2_w , mnist_assign_accum_conv2_b , mnist_assign_accum_fc1_w , mnist_assign_accum_fc1_b , mnist_assign_accum_fc2_w , mnist_assign_accum_fc2_b }, nullptr )));
              __auto_type mnist_node_conv2d_1  = Conv2D (scope , mnist_inputs_ph , mnist_conv1_w , ((gtl :: ArraySlice < int > ){ 1, 1, 1, 1}), "SAME");
              (LOG (INFO ) <<  "mnist_node_conv2d_1: " <<  (scope . status ()) );
              __auto_type mnist_node_biasadd_2  = BiasAdd (scope , mnist_node_conv2d_1 , mnist_conv1_b );
              (LOG (INFO ) <<  "mnist_node_biasadd_2: " <<  (scope . status ()) );
              __auto_type mnist_node_relu_3  = Relu (scope , mnist_node_biasadd_2 );
              (LOG (INFO ) <<  "mnist_node_relu_3: " <<  (scope . status ()) );
              __auto_type mnist_node_maxpool_4  = MaxPool (scope , mnist_node_relu_3 , ((gtl :: ArraySlice < int > ){ 1, 2, 2, 1}), ((gtl :: ArraySlice < int > ){ 1, 2, 2, 1}), "SAME");
              (LOG (INFO ) <<  "mnist_node_maxpool_4: " <<  (scope . status ()) );
              __auto_type mnist_node_conv2d_5  = Conv2D (scope , mnist_node_maxpool_4 , mnist_conv2_w , ((gtl :: ArraySlice < int > ){ 1, 1, 1, 1}), "SAME");
              (LOG (INFO ) <<  "mnist_node_conv2d_5: " <<  (scope . status ()) );
              __auto_type mnist_node_biasadd_6  = BiasAdd (scope , mnist_node_conv2d_5 , mnist_conv2_b );
              (LOG (INFO ) <<  "mnist_node_biasadd_6: " <<  (scope . status ()) );
              __auto_type mnist_node_relu_7  = Relu (scope , mnist_node_biasadd_6 );
              (LOG (INFO ) <<  "mnist_node_relu_7: " <<  (scope . status ()) );
              __auto_type mnist_node_maxpool_8  = MaxPool (scope , mnist_node_relu_7 , ((gtl :: ArraySlice < int > ){ 1, 2, 2, 1}), ((gtl :: ArraySlice < int > ){ 1, 2, 2, 1}), "SAME");
              (LOG (INFO ) <<  "mnist_node_maxpool_8: " <<  (scope . status ()) );
              __auto_type mnist_node_reshape_9  = Reshape (scope , mnist_node_maxpool_8 , { BATCH_SIZE , s1 });
              (LOG (INFO ) <<  "mnist_node_reshape_9: " <<  (scope . status ()) );
              __auto_type mnist_node_matmul_10  = MatMul (scope , mnist_node_reshape_9 , mnist_fc1_w );
              (LOG (INFO ) <<  "mnist_node_matmul_10: " <<  (scope . status ()) );
              __auto_type mnist_node_add_11  = Add (scope , mnist_node_matmul_10 , mnist_fc1_b );
              (LOG (INFO ) <<  "mnist_node_add_11: " <<  (scope . status ()) );
              __auto_type mnist_node_relu_12  = Relu (scope , mnist_node_add_11 );
              (LOG (INFO ) <<  "mnist_node_relu_12: " <<  (scope . status ()) );
              __auto_type dropped_out  = Dropout (scope , mnist_node_relu_12 , 0.5f );
              (LOG (INFO ) <<  "dropped_out: " <<  (scope . status ()) );
              __auto_type mnist_node_matmul_14  = MatMul (scope , dropped_out , mnist_fc2_w );
              (LOG (INFO ) <<  "mnist_node_matmul_14: " <<  (scope . status ()) );
              __auto_type logits  = Add (scope , mnist_node_matmul_14 , mnist_fc2_b );
              (LOG (INFO ) <<  "logits: " <<  (scope . status ()) );
              __auto_type mnist_loss_sparsesoftmaxcrossentropywithlogits_1  = SparseSoftmaxCrossEntropyWithLogits (scope , logits , mnist_labels_ph );
              (LOG (INFO ) <<  "mnist_loss_sparsesoftmaxcrossentropywithlogits_1: " <<  (scope . status ()) );
              __auto_type reduce_mean  = ReduceMean (scope , (mnist_loss_sparsesoftmaxcrossentropywithlogits_1 . loss ), { 0});
              (LOG (INFO ) <<  "reduce_mean: " <<  (scope . status ()) );
              __auto_type lfc1_w  = L2Loss (scope , mnist_fc1_w );
              (LOG (INFO ) <<  "lfc1_w: " <<  (scope . status ()) );
              __auto_type lfc1_b  = L2Loss (scope , mnist_fc1_b );
              (LOG (INFO ) <<  "lfc1_b: " <<  (scope . status ()) );
              __auto_type lfc2_w  = L2Loss (scope , mnist_fc2_w );
              (LOG (INFO ) <<  "lfc2_w: " <<  (scope . status ()) );
              __auto_type lfc2_b  = L2Loss (scope , mnist_fc2_b );
              (LOG (INFO ) <<  "lfc2_b: " <<  (scope . status ()) );
              __auto_type regularization  = AddN (scope , ((initializer_list < Input > ){ lfc1_w , lfc1_w , lfc1_w , lfc1_w }));
              (LOG (INFO ) <<  "regularization: " <<  (scope . status ()) );
              __auto_type const_f1  = Const < float > (scope , { f1 });
              (LOG (INFO ) <<  "const_f1: " <<  (scope . status ()) );
              __auto_type mnist_loss_multiply_9  = Multiply (scope , regularization , const_f1 );
              (LOG (INFO ) <<  "mnist_loss_multiply_9: " <<  (scope . status ()) );
              __auto_type loss  = Add (scope , reduce_mean , mnist_loss_multiply_9 );
              (LOG (INFO ) <<  "loss: " <<  (scope . status ()) );
              std :: vector < Output >  mnist_grad_outputs ;
              TF_CHECK_OK (AddSymbolicGradients (scope , { loss }, { mnist_conv1_w , mnist_conv1_b , mnist_conv2_w , mnist_conv2_b , mnist_fc1_w , mnist_fc1_b , mnist_fc2_w , mnist_fc2_b }, (&mnist_grad_outputs )));
              __auto_type mnist_lr_ph  = Placeholder (scope , DT_FLOAT , Placeholder :: Shape ({ }));
              (LOG (INFO ) <<  "mnist_lr_ph: " <<  (scope . status ()) );
              __auto_type mnist_apply_conv1_w  = ApplyMomentum (scope , mnist_conv1_w , mnist_accum_conv1_w , mnist_lr_ph , mnist_grad_outputs [0], Cast (scope , MOMENTUM , DT_FLOAT ));
              __auto_type mnist_apply_conv1_b  = ApplyMomentum (scope , mnist_conv1_b , mnist_accum_conv1_b , mnist_lr_ph , mnist_grad_outputs [1], Cast (scope , MOMENTUM , DT_FLOAT ));
              __auto_type mnist_apply_conv2_w  = ApplyMomentum (scope , mnist_conv2_w , mnist_accum_conv2_w , mnist_lr_ph , mnist_grad_outputs [2], Cast (scope , MOMENTUM , DT_FLOAT ));
              __auto_type mnist_apply_conv2_b  = ApplyMomentum (scope , mnist_conv2_b , mnist_accum_conv2_b , mnist_lr_ph , mnist_grad_outputs [3], Cast (scope , MOMENTUM , DT_FLOAT ));
              __auto_type mnist_apply_fc1_w  = ApplyMomentum (scope , mnist_fc1_w , mnist_accum_fc1_w , mnist_lr_ph , mnist_grad_outputs [4], Cast (scope , MOMENTUM , DT_FLOAT ));
              __auto_type mnist_apply_fc1_b  = ApplyMomentum (scope , mnist_fc1_b , mnist_accum_fc1_b , mnist_lr_ph , mnist_grad_outputs [5], Cast (scope , MOMENTUM , DT_FLOAT ));
              __auto_type mnist_apply_fc2_w  = ApplyMomentum (scope , mnist_fc2_w , mnist_accum_fc2_w , mnist_lr_ph , mnist_grad_outputs [6], Cast (scope , MOMENTUM , DT_FLOAT ));
              __auto_type mnist_apply_fc2_b  = ApplyMomentum (scope , mnist_fc2_b , mnist_accum_fc2_b , mnist_lr_ph , mnist_grad_outputs [7], Cast (scope , MOMENTUM , DT_FLOAT ));
              ({ /* cicili#Progn250 */
                ciciliClosure247  = ((typeof(ciciliClosure247 )){ (&session ), mnist_inputs_ph , mnist_labels_ph , mnist_lr_ph , loss , mnist_apply_conv1_w , mnist_apply_conv1_b , mnist_apply_conv2_w , mnist_apply_conv2_b , mnist_apply_fc1_w , mnist_apply_fc1_b , mnist_apply_fc2_w , mnist_apply_fc2_b });
                __ciciliL_252 ;
              });            });;
        { /* cicili#Let256 */
          int global_step  = 0;
          for (int epoch  = 0; (epoch  <  NUM_EPOCHS  ); (epoch ++)) {
            { /* cicili#Let260 */
              float decayed_learning_rate  = (BASE_LEARNING_RATE  *  std :: pow (DECAY_RATE , epoch ) );
              __auto_type lr_tensor  = Tensor (decayed_learning_rate );
              for (int bidx  = 0; (bidx  <  BATCHES_PER_EPOCHS  ); (bidx ++)) {
                { /* cicili#Let266 */
                  Tensor x_tensor ;
                  CHECK ((x_tensor . CopyFrom ((inputs . Slice ((bidx  *  BATCH_SIZE  ), ((bidx  +  1 ) *  BATCH_SIZE  ))), TensorShape ({ BATCH_SIZE , IMAGE_SIZE , IMAGE_SIZE , NUM_CHANNELS }))));
                  { /* cicili#Let268 */
                    Tensor y_tensor ;
                    CHECK ((y_tensor . CopyFrom ((labels . Slice ((bidx  *  BATCH_SIZE  ), ((bidx  +  1 ) *  BATCH_SIZE  ))), TensorShape ({ BATCH_SIZE }))));
                    { /* cicili#Let270 */
                      vector < Tensor >  outputs ;
                      TF_CHECK_OK (model (x_tensor , y_tensor , lr_tensor , outputs ));
                      if ((global_step  %  EVAL_FREQUENCY  ) ==  0 ) 
                        { /* cicili#Block277 */
                          (LOG (INFO ) <<  "Print step: " <<  global_step  <<  ", decayed_learning_rate: " <<  decayed_learning_rate  <<  ", loss: " <<  (outputs [0]. DebugString ()) );
                        } /* cicili#Block277 */

                    }
                  }
                }
                (global_step ++);
              } 
            }
          } 
        }
      }
    }
  }
  return 0;
}

