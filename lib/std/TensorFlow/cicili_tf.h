#ifndef __CICILI_TF_H_
#define __CICILI_TF_H_
#include <tensorflow/c/c_api.h>
typedef struct Status {
  TF_Status * ptr ;
} Status;
Status * Status_s_new ();
void Status_m_free (Status * this );
TF_Code Status_m_code (Status * this );
const char * Status_m_message (Status * this );
bool Status_m_ok (Status * this );

typedef struct Graph {
  TF_Graph * ptr ;
  Status * status ;
} Graph;
Graph * Graph_s_new ();
void Graph_m_free (Graph * this );
TF_Operation * Graph_m_addOp (Graph * this , const char * op_type , const char * name , TF_Output * inputs , int num_inputs );
TF_Operation * Graph_m_addOpEx (Graph * this , const char * op_type , const char * name , TF_Output * inputs , int num_inputs , TF_Operation ** ctrl_inputs , int num_ctrl_inputs , void (*set_attrs) (TF_OperationDescription *   ));
TF_Output Graph_m_placeholder (Graph * this , const char * name , const TF_DataType dtype , const int64_t * dims , const int num_dims );
TF_Output Graph_m_matMul (Graph * this , TF_Output a , TF_Output b , bool transpose_a , bool transpose_b );
TF_Output Graph_m_biasAdd (Graph * this , TF_Output value , TF_Output bias );
TF_Output Graph_m_variable (Graph * this , const char * name , const TF_DataType dtype , const int64_t * dims , int ndims );
TF_Output Graph_m_constant (Graph * this , const char * name , TF_Tensor * tensor );
TF_Output Graph_m_constFloat (Graph * this , const char * name , float value );
TF_Operation * Graph_m_assign (Graph * this , const char * name , TF_Output var , TF_Tensor * value );
TF_Output * Graph_m_addSymbolicGradients (Graph * this , TF_Output * ys , int y_count , TF_Output * xs , int x_count , TF_Output * grads );
TF_Operation * Graph_m_applyGradientDescent (Graph * this , const char * name , TF_Output var , TF_Tensor * lr , TF_Output grad );
TF_Operation * Graph_m_noOp (Graph * this , const char * name , TF_Operation ** control_deps , int num_control_deps );
TF_Output Graph_m_sub (Graph * this , const char * name , TF_Output x , TF_Output y );
TF_Output Graph_m_square (Graph * this , const char * name , TF_Output x );
TF_Output Graph_m_mean (Graph * this , const char * name , TF_Output x );
TF_Output Graph_m_relu (Graph * this , const char * name , TF_Output input );

typedef struct Tensor {
  TF_Tensor * ptr ;
} Tensor;
Tensor * Tensor_s_new (const TF_DataType dtype , const int64_t * dims , const int num_dims , void * data , const size_t len , void (*deallocator) (void * data , size_t len , void * arg ), void * deallocator_arg );
Tensor * Tensor_s_newFromData (const TF_DataType dtype , const int64_t * dims , const int num_dims , void * data , const size_t len );
Tensor * Tensor_s_newFloat (const int64_t * dims , const int num_dims , float * data );
Tensor * Tensor_s_newFromFloatArray (float * values , int64_t * shape , int rank , int value_count );
Tensor * Tensor_s_newFromIntArray (int32_t * values , int64_t * shape , int rank , int value_count );
Tensor * Tensor_s_newFromInt64Array (int64_t * arr , int * dims , int num_dims );
Tensor * Tensor_s_newFromBoolArray (uint8_t * arr , int * dims , int num_dims );
Tensor * Tensor_s_newFromScalarFloat (float value );
void Tensor_m_free (Tensor * this );
int Tensor_m_type (Tensor * this );
int Tensor_m_numDims (Tensor * this );
int64_t Tensor_m_dim (Tensor * this , int i );
size_t Tensor_m_byteSize (Tensor * this );
void * Tensor_m_data (Tensor * this );

#ifndef CICILI_IOSLICE_H_
#define CICILI_IOSLICE_H_
#include <stddef.h>
#define IOSLICE_GROWTH_STEP 8
typedef TF_Output ioslice_elem_t ;
typedef struct IOSlice {
  size_t len ;
  size_t cap ;
  ioslice_elem_t arr [];
} IOSlice;
IOSlice * IOSlice_s_newEmpty (size_t len );
IOSlice * IOSlice_s_newFromArray (const ioslice_elem_t * arr , size_t len );
IOSlice * IOSlice_s_newCopy (const IOSlice * other );
TF_Output IOSlice_m_firstElement (IOSlice * this );
IOSlice * IOSlice_m_clone (IOSlice * this );
ioslice_elem_t * IOSlice_m_cloneArray (IOSlice * this );
IOSlice * IOSlice_m_appendNew (IOSlice * this , const IOSlice * other );
struct __ciciliS_IOSlice_m_append_ {
  IOSlice * out ;
  bool newp ;
};
struct __ciciliS_IOSlice_m_append_ IOSlice_m_append (IOSlice * this , const IOSlice * other );
void IOSlice_m_free (IOSlice * this );
struct __ciciliS_IOSlice_m_push_ {
  IOSlice * out ;
  bool newp ;
};
struct __ciciliS_IOSlice_m_push_ IOSlice_m_push (IOSlice * this , ioslice_elem_t val );
struct __ciciliS_IOSlice_m_pop_ {
  ioslice_elem_t out ;
  bool outp ;
};
struct __ciciliS_IOSlice_m_pop_ IOSlice_m_pop (IOSlice * this );
IOSlice * IOSlice_m_shrink (IOSlice * this );
IOSlice * IOSlice_m_insert (IOSlice * this , size_t index , ioslice_elem_t val );
IOSlice * IOSlice_m_removeAt (IOSlice * this , size_t index );
#endif /* CICILI_IOSLICE_H_ */ 

#ifndef CICILI_TENSORSLICE_H_
#define CICILI_TENSORSLICE_H_
#include <stddef.h>
#define TENSORSLICE_GROWTH_STEP 8
typedef Tensor * tensorslice_elem_t ;
typedef struct TensorSlice {
  size_t len ;
  size_t cap ;
  tensorslice_elem_t arr [];
} TensorSlice;
TensorSlice * TensorSlice_s_newEmpty (size_t len );
TensorSlice * TensorSlice_s_newFromArray (const tensorslice_elem_t * arr , size_t len );
TensorSlice * TensorSlice_s_newCopy (const TensorSlice * other );
Tensor * TensorSlice_m_firstElement (TensorSlice * this );
TensorSlice * TensorSlice_m_clone (TensorSlice * this );
tensorslice_elem_t * TensorSlice_m_cloneArray (TensorSlice * this );
TensorSlice * TensorSlice_m_appendNew (TensorSlice * this , const TensorSlice * other );
struct __ciciliS_TensorSlice_m_append_ {
  TensorSlice * out ;
  bool newp ;
};
struct __ciciliS_TensorSlice_m_append_ TensorSlice_m_append (TensorSlice * this , const TensorSlice * other );
void TensorSlice_m_free (TensorSlice * this );
struct __ciciliS_TensorSlice_m_push_ {
  TensorSlice * out ;
  bool newp ;
};
struct __ciciliS_TensorSlice_m_push_ TensorSlice_m_push (TensorSlice * this , tensorslice_elem_t val );
struct __ciciliS_TensorSlice_m_pop_ {
  tensorslice_elem_t out ;
  bool outp ;
};
struct __ciciliS_TensorSlice_m_pop_ TensorSlice_m_pop (TensorSlice * this );
TensorSlice * TensorSlice_m_shrink (TensorSlice * this );
TensorSlice * TensorSlice_m_insert (TensorSlice * this , size_t index , tensorslice_elem_t val );
TensorSlice * TensorSlice_m_removeAt (TensorSlice * this , size_t index );
#endif /* CICILI_TENSORSLICE_H_ */ 

typedef struct Session {
  TF_Session * ptr ;
  Graph * graph ;
  Status * status ;
} Session;
Session * Session_s_new (Graph * graph , Status * status );
void Session_m_close (Session * this );
void Session_m_free (Session * this );
void Session_m_run (Session * this , IOSlice * inputs , TensorSlice * input_values , IOSlice * outputs , TensorSlice * output_values );
Tensor * Session_m_runSimple (Session * this , TF_Output input , Tensor * input_tensor , TF_Output output );
void Session_m_runWithLabelsAndLoss (Session * this , IOSlice * inputs , TensorSlice * input_vals , IOSlice * labels , TensorSlice * label_vals , IOSlice * loss_outs , TensorSlice * result );

IOSlice * mergeIOSlices (IOSlice * a , IOSlice * b );
TensorSlice * mergeTensorSlices (TensorSlice * a , TensorSlice * b );

typedef struct Model {
  List<TF_CiciliLayer*> layers ;
  char * optimizer ;
  char * loss_function ;
  float learning_rate ;
} Model;
typedef void (*train_callback_t) (   );
Model * Model_s_new ();
void Model_m_addLayer (Model * this , TF_CiciliLayer* layer );
void Model_m_compile (Model * this , const char * optimizer , const char * loss_function , float learning_rate );
void Model_m_train (Model * this , Dataset dataset , int batch_size , int epochs , train_callback_t * callbacks , int num_callbacks );
Tensor * Model_m_predict (Model * this , Tensor * input );
void Model_m_free (Model * this );

#endif /* __CICILI_TF_H_ */ 
