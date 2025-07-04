#include "tensorflow/cc/client/client_session.h"
#include "tensorflow/cc/framework/gradients.h"
#include "tensorflow/cc/ops/dataset_ops_internal.h"
#include "tensorflow/cc/ops/standard_ops.h"
#include "tensorflow/core/framework/tensor.h"
using namespace tensorflow;
using namespace tensorflow::ops;
using namespace tensorflow::ops::internal;
using namespace std;
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
  return strings::StrCat("Tensor<type: ", DataTypeString ((tensor . dtype ())), " shape: ", ((tensor . shape ()). DebugString ()), " values: ", (tensor . SummarizeValue (-1, true )), ">");
}
static Status Dropout (const Scope & scope , const Input x , const int rate , Output & dropout ) {
  { /* cicili#Let229 */
    float keep_prob  = (1 -  rate  );
    __auto_type random_value5  = RandomUniform (scope , Shape (scope , x ), DT_FLOAT );
    __auto_type random_tensor  = Add (scope , random_value5 , Const <float>(scope , { keep_prob }));
    __auto_type binary_tensor  = Floor (scope , random_tensor );
    __auto_type result  = Multiply (scope , Div (scope , x , Const <float>(scope , { keep_prob })), binary_tensor );
    dropout  = (result . z );
  }
  return (scope . status ());
}
int main (int argc , char * argv []) {
  { /* cicili#Let238 */
    Scope scope  = Scope::NewRootScope();
    { /* cicili#Let242 */
      __auto_type inputs_contents  = ReadFile (scope , Const <tensorflow::tstring>(scope , "/tmp/data/train-images-idx3-ubyte.gz", TensorShape ({ })));
      __auto_type inputs_decode_compressed  = DecodeCompressed (scope , inputs_contents , DecodeCompressed::CompressionType("GZIP"));
      __auto_type labels_contents  = ReadFile (scope , Const <tensorflow::tstring>(scope , "/tmp/data/train-labels-idx1-ubyte.gz", TensorShape ({ })));
      __auto_type labels_decode_compressed  = DecodeCompressed (scope , labels_contents , DecodeCompressed::CompressionType("GZIP"));
      vector <Tensor> outputs ;
      ClientSession session  = ClientSession (scope );
      Tensor inputs  = Tensor (DT_FLOAT , TensorShape ({ NUM_IMAGES , IMAGE_SIZE , IMAGE_SIZE , NUM_CHANNELS }));
      Tensor labels  = Tensor (DT_INT64 , TensorShape ({ NUM_IMAGES }));
      Status status  = (session . Run ({ }, { inputs_decode_compressed , labels_decode_compressed }, { }, (&outputs )));
      if (status . ok ()) 
        { /* cicili#Let255 */
          std::string inputs_str  = (outputs [0]. scalar <tensorflow::tstring>())();
          const char * inputs_str_data  = (inputs_str . c_str ());
          float * inputs_data  = ((inputs . tensor <float, 4>()). data ());
          int count  = (NUM_IMAGES  *  IMAGE_SIZE  *  IMAGE_SIZE  *  NUM_CHANNELS  );
          for (int i  = 0; (i  <  count  ); (i ++)) {
            { /* cicili#Let265 */
              float data  = ((unsigned char)(*(inputs_str_data  +  INPUTS_HEADER_BYTES  +  i  )));
              data  = ((data  -  (PIXEL_DEPTH  /  2.0f  ) ) /  PIXEL_DEPTH  );
              inputs_data [i ] = data ;
            }
          } 
          { /* cicili#Let267 */
            std::string labels_str  = (outputs [1]. scalar <tensorflow::tstring>())();
            const char * labels_str_data  = (labels_str . c_str ());
            int64 * labels_data  = ((labels . vec <int64>()). data ());
            for (int i  = 0; (i  <  NUM_IMAGES  ); (i ++)) {
              labels_data [i ] = ((unsigned char)(*(labels_str_data  +  LABELS_HEADER_BYTES  +  i  )));
            } 
          }
        }
      else 
        { /* cicili#Block278 */
          (LOG (INFO ) <<  "Print: status: " <<  status  );
          return -1;
        } /* cicili#Block278 */
    }
  }
  return 0;
}

