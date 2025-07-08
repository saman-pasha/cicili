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
static Output Dropout (const Scope & scope , const Input x , const int rate ) {
  { /* cicili#Let215 */
    float keep_prob  = (1 -  rate  );
    __auto_type random_value5  = RandomUniform (scope , Shape (scope , x ), DT_FLOAT );
    __auto_type random_tensor  = Add (scope , random_value5 , Const < float > (scope , { keep_prob }));
    __auto_type binary_tensor  = Floor (scope , random_tensor );
    __auto_type result  = Multiply (scope , Div (scope , x , Const < float > (scope , { keep_prob })), binary_tensor );
    return (result . z );
  }
}
struct { /* ciciliStruct273 */
  const Scope & scope ;
  int rate ;
} ciciliClosure271 ;
static void __ciciliL_276 (std :: initializer_list < int >  shape ) {
  const Scope & scope  = (ciciliClosure271 . scope );
  int rate  = (ciciliClosure271 . rate );
  return Multiply (scope , TruncatedNormal (scope , shape , DT_FLOAT ), rate );
}
struct { /* ciciliStruct283 */
  const Scope & scope ;
  float rate ;
} ciciliClosure281 ;
static void __ciciliL_286 (std :: initializer_list < int >  shape ) {
  const Scope & scope  = (ciciliClosure281 . scope );
  float rate  = (ciciliClosure281 . rate );
  return Const < float > (scope , rate , TensorShape ({ shpae }));
}
int main (int argc , char * argv []) {
  { /* cicili#Let224 */
    Scope scope  = Scope :: NewRootScope ();
    { /* cicili#Let228 */
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
        { /* cicili#Let241 */
          std :: string  inputs_str  = (outputs [0]. scalar < tensorflow :: tstring > ())();
          const char * inputs_str_data  = (inputs_str . c_str ());
          float * inputs_data  = ((inputs . tensor < float , 4 > ()). data ());
          int count  = (NUM_IMAGES  *  IMAGE_SIZE  *  IMAGE_SIZE  *  NUM_CHANNELS  );
          for (int i  = 0; (i  <  count  ); (i ++)) {
            { /* cicili#Let251 */
              float data  = ((unsigned char)(*(inputs_str_data  +  INPUTS_HEADER_BYTES  +  i  )));
              data  = ((data  -  (PIXEL_DEPTH  /  2.0f  ) ) /  PIXEL_DEPTH  );
              inputs_data [i ] = data ;
            }
          } 
          { /* cicili#Let253 */
            std :: string  labels_str  = (outputs [1]. scalar < tensorflow :: tstring > ())();
            const char * labels_str_data  = (labels_str . c_str ());
            int64 * labels_data  = ((labels . vec < int64 > ()). data ());
            for (int i  = 0; (i  <  NUM_IMAGES  ); (i ++)) {
              labels_data [i ] = ((unsigned char)(*(labels_str_data  +  LABELS_HEADER_BYTES  +  i  )));
            } 
          }
        }
      else 
        { /* cicili#Block264 */
          (LOG (INFO ) <<  "Print: status: " <<  status  );
          return -1;
        } /* cicili#Block264 */
      { /* cicili#Let267 */
        __auto_type rate  = Const (scope , { 0.1f });
        int s1  = (std :: pow ((IMAGE_SIZE  /  4 ), 2) *  64 );
        float f1  = 5.0e-4;
        __auto_type random_value  = ({ /* cicili#Progn274 */
  ciciliClosure271  = ((typeof(ciciliClosure271 )){ scope , rate });
  __ciciliL_276 ;
});
        __auto_type const_float  = ({ /* cicili#Progn284 */
  ciciliClosure281  = ((typeof(ciciliClosure281 )){ scope , 0.1f });
  __ciciliL_286 ;
});
        __auto_type model  = ({ /* cicili#Let294 */
  __auto_type mnist_inputs_ph  = Placeholder (scope , DT_FLOAT , Placeholder :: Shape ({ BATCH_SIZE , IMAGE_SIZE , IMAGE_SIZE , NUM_CHANNELS }));
  __auto_type mnist_conv1_w  = Variable (scope , { 5, 5, NUM_CHANNELS , 32}, DT_FLOAT );
  __auto_type mnist_assign_conv1_w  = Assign (scope , mnist_conv1_w , random_value ({ 5, 5, NUM_CHANNELS , 32}));
  __auto_type mnist_accum_conv1_w  = Variable (scope , { 5, 5, NUM_CHANNELS , 32}, DT_FLOAT );
  __auto_type mnist_assign_accum_conv1_w  = Assign (scope , mnist_accum_conv1_w , ZerosLike (scope , mnist_conv1_w ));
  __auto_type mnist_conv1_b  = Variable (scope , { 32}, DT_FLOAT );
  __auto_type mnist_assign_conv1_b  = Assign (scope , mnist_conv1_b , ((Tensor (DT_FLOAT , TensorShape ({ 32})). vec < float > ()). setZero ()));
  __auto_type mnist_accum_conv1_b  = Variable (scope , { 32}, DT_FLOAT );
  __auto_type mnist_assign_accum_conv1_b  = Assign (scope , mnist_accum_conv1_b , ZerosLike (scope , mnist_conv1_b ));
  __auto_type mnist_conv2_w  = Variable (scope , { 5, 5, 32, 64}, DT_FLOAT );
  __auto_type mnist_assign_conv2_w  = Assign (scope , mnist_conv2_w , random_value ({ 5, 5, 32, 64}));
  __auto_type mnist_accum_conv2_w  = Variable (scope , { 5, 5, 32, 64}, DT_FLOAT );
  __auto_type mnist_assign_accum_conv2_w  = Assign (scope , mnist_accum_conv2_w , ZerosLike (scope , mnist_conv2_w ));
  __auto_type mnist_conv2_b  = Variable (scope , { 64}, DT_FLOAT );
  __auto_type mnist_assign_conv2_b  = Assign (scope , mnist_conv2_b , const_float ({ 64}));
  __auto_type mnist_accum_conv2_b  = Variable (scope , { 64}, DT_FLOAT );
  __auto_type mnist_assign_accum_conv2_b  = Assign (scope , mnist_accum_conv2_b , ZerosLike (scope , mnist_conv2_b ));
  __auto_type mnist_fc1_w  = Variable (scope , { s1 , 512}, DT_FLOAT );
  __auto_type mnist_assign_fc1_w  = Assign (scope , mnist_fc1_w , random_value ({ s1 , 512}));
  __auto_type mnist_accum_fc1_w  = Variable (scope , { s1 , 512}, DT_FLOAT );
  __auto_type mnist_assign_accum_fc1_w  = Assign (scope , mnist_accum_fc1_w , ZerosLike (scope , mnist_fc1_w ));
  __auto_type mnist_fc1_b  = Variable (scope , { 512}, DT_FLOAT );
  __auto_type mnist_assign_fc1_b  = Assign (scope , mnist_fc1_b , const_float ({ 512}));
  __auto_type mnist_accum_fc1_b  = Variable (scope , { 512}, DT_FLOAT );
  __auto_type mnist_assign_accum_fc1_b  = Assign (scope , mnist_accum_fc1_b , ZerosLike (scope , mnist_fc1_b ));
  __auto_type mnist_fc2_w  = Variable (scope , { 512, NUM_LABELS }, DT_FLOAT );
  __auto_type mnist_assign_fc2_w  = Assign (scope , mnist_fc2_w , random_value ({ 512, NUM_LABELS }));
  __auto_type mnist_accum_fc2_w  = Variable (scope , { 512, NUM_LABELS }, DT_FLOAT );
  __auto_type mnist_assign_accum_fc2_w  = Assign (scope , mnist_accum_fc2_w , ZerosLike (scope , mnist_fc2_w ));
  __auto_type mnist_fc2_b  = Variable (scope , { NUM_LABELS }, DT_FLOAT );
  __auto_type mnist_assign_fc2_b  = Assign (scope , mnist_fc2_b , const_float ({ NUM_LABELS }));
  __auto_type mnist_accum_fc2_b  = Variable (scope , { NUM_LABELS }, DT_FLOAT );
  __auto_type mnist_assign_accum_fc2_b  = Assign (scope , mnist_accum_fc2_b , ZerosLike (scope , mnist_fc2_b ));
  __auto_type mnist_labels_ph  = Placeholder (scope , DT_INT64 , Placeholder :: Shape ({ BATCH_SIZE }));
  TF_CHECK_OK ((session . Run ({ mnist_assign_conv1_w , mnist_assign_conv1_b , mnist_assign_conv2_w , mnist_assign_conv2_b , mnist_assign_fc1_w , mnist_assign_fc1_b , mnist_assign_fc2_w , mnist_assign_fc2_b }, nullptr )));
  TF_CHECK_OK ((session . Run ({ mnist_assign_accum_conv1_w , mnist_assign_accum_conv1_b , mnist_assign_accum_conv2_w , mnist_assign_accum_conv2_b , mnist_assign_accum_fc1_w , mnist_assign_accum_fc1_b , mnist_assign_accum_fc2_w , mnist_assign_accum_fc2_b }, nullptr )));
  { /* cicili#Let302 */
    __auto_type mnist_node_conv2d_1  = Conv2D (scope , inputs_ph , conv1_w , ((gtl :: ArraySlice < int > ){ 1, 1, 1, 1}), "SAME");
    __auto_type mnist_node_biasadd_2  = BiasAdd (scope , mnist_node_conv2d_1 , conv1_b );
    __auto_type mnist_node_relu_3  = Relu (scope , mnist_node_biasadd_2 );
    __auto_type mnist_node_maxpool_4  = MaxPool (scope , mnist_node_relu_3 , ((gtl :: ArraySlice < int > ){ 1, 2, 2, 1}), ((gtl :: ArraySlice < int > ){ 1, 2, 2, 1}), "SAME");
    __auto_type mnist_node_conv2d_5  = Conv2D (scope , mnist_node_maxpool_4 , conv2_w , ((gtl :: ArraySlice < int > ){ 1, 1, 1, 1}), "SAME");
    __auto_type mnist_node_biasadd_6  = BiasAdd (scope , mnist_node_conv2d_5 , conv2_b );
    __auto_type mnist_node_relu_7  = Relu (scope , mnist_node_biasadd_6 );
    __auto_type mnist_node_maxpool_8  = MaxPool (scope , mnist_node_relu_7 , ((gtl :: ArraySlice < int > ){ 1, 2, 2, 1}), ((gtl :: ArraySlice < int > ){ 1, 2, 2, 1}), "SAME");
    __auto_type mnist_node_reshape_9  = Reshape (scope , mnist_node_maxpool_8 , { BATCH_SIZE , s1 });
    __auto_type mnist_node_matmul_10  = MatMul (scope , mnist_node_reshape_9 , fc1_w );
    __auto_type mnist_node_add_11  = Add (scope , mnist_node_matmul_10 , fc1_b );
    __auto_type mnist_node_relu_12  = Relu (scope , mnist_node_add_11 );
    __auto_type dropped_out  = Dropout (scope , mnist_node_relu_12 , 0.5f );
    __auto_type mnist_node_matmul_14  = MatMul (scope , dropped_out , fc2_w );
    __auto_type logits  = Add (scope , mnist_node_matmul_14 , fc2_b );
    __auto_type mnist_node_sparsesoftmaxcrossentropywithlogits_1  = SparseSoftmaxCrossEntropyWithLogits (scope , logits , labels_ph );
    __auto_type reduce_mean  = ReduceMean (scope , (mnist_node_sparsesoftmaxcrossentropywithlogits_1 . loss ), { 0});
    __auto_type lfc1_w  = L2Loss (scope , fc1_weights );
    __auto_type lfc1_b  = L2Loss (scope , fc1_biases );
    __auto_type lfc2_w  = L2Loss (scope , fc2_weights );
    __auto_type lfc2_b  = L2Loss (scope , fc2_biases );
    __auto_type regularization  = AddN (scope , ((initializer_list < Input > ){ lfc1_w , lfc1_w , lfc1_w , lfc1_w }));
    __auto_type const_f1  = Const < float > (scope , { f1 });
    __auto_type mnist_node_multiply_9  = Multiply (scope , regularization , const_f1 );
    __auto_type mnist_node_add_10  = Add (scope , reduce_mean , mnist_node_multiply_9 );
    std :: vector < Output >  mnist_grad_outputs ;
  }
});
      }
    }
  }
  return 0;
}

