#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "cicili_tf.h"
Status * Status_s_new () {
  { /* cicili#Let105 */
    Status * status  = malloc (sizeof(Status));
    (status ->ptr ) = TF_NewStatus ();
    return status ;
  }
}
void Status_m_free (Status * this ) {
  TF_DeleteStatus ((this ->ptr ));
  free (this );
}
TF_Code Status_m_code (Status * this ) {
  return TF_GetCode ((this ->ptr ));
}
const char * Status_m_message (Status * this ) {
  return TF_Message ((this ->ptr ));
}
bool Status_m_ok (Status * this ) {
  return (TF_GetCode ((this ->ptr )) ==  TF_OK  );
}

Graph * Graph_s_new () {
  { /* cicili#Let115 */
    Graph * graph  = malloc (sizeof(Graph));
    (graph ->ptr ) = TF_NewGraph ();
    return graph ;
  }
}
void Graph_m_free (Graph * this ) {
  TF_DeleteGraph ((this ->ptr ));
  free (this );
}
TF_Operation * Graph_m_AddOp (Graph * this , const char * op_type , const char * name , TF_Output * inputs , int num_inputs ) {
  { /* cicili#Let119 */
    TF_OperationDescription * desc  = TF_NewOperation ((this ->ptr ), op_type , name );
    for (int i  = 0; (i  <  num_inputs  ); (++i )) {
      TF_AddInput (desc , inputs [i ]);
    } 
    return TF_FinishOperation (desc , ((this ->status )->ptr ));
  }
}
TF_Operation * Graph_m_AddOpEx (Graph * this , const char * op_type , const char * name , TF_Output * inputs , int num_inputs , TF_Operation ** ctrl_inputs , int num_ctrl_inputs , void (*set_attrs) (TF_OperationDescription *   )) {
  { /* cicili#Let124 */
    TF_OperationDescription * desc  = TF_NewOperation ((this ->ptr ), op_type , name );
    for (int i  = 0; (i  <  num_inputs  ); (++i )) {
      TF_AddInput (desc , inputs [i ]);
    } 
    for (int i  = 0; (i  <  num_ctrl_inputs  ); (++i )) {
      TF_AddControlInput (desc , ctrl_inputs [i ]);
    } 
    if (set_attrs ) 
      set_attrs (desc );

    return TF_FinishOperation (desc , ((this ->status )->ptr ));
  }
}
TF_Output Graph_m_Placeholder (Graph * this , const char * name , const TF_DataType dtype , const int64_t * dims , const int num_dims ) {
  { /* cicili#Let134 */
    TF_OperationDescription * desc  = TF_NewOperation ((this ->ptr ), "Placeholder", name );
    TF_SetAttrType (desc , "dtype", dtype );
    TF_SetAttrShape (desc , "shape", dims , num_dims );
    { /* cicili#Let136 */
      TF_Operation * op  = TF_FinishOperation (desc , 0);
      return ((TF_Output){ op , 0});
    }
  }
}
TF_Output Graph_m_MatMul (Graph * this , TF_Output a , TF_Output b , bool transpose_a , bool transpose_b ) {
  { /* cicili#Let139 */
    TF_OperationDescription * desc  = TF_NewOperation ((this ->ptr ), "MatMul", "matmul");
    TF_AddInput (desc , a );
    TF_AddInput (desc , b );
    TF_SetAttrBool (desc , "transpose_a", transpose_a );
    TF_SetAttrBool (desc , "transpose_b", transpose_b );
    { /* cicili#Let141 */
      TF_Operation * op  = TF_FinishOperation (desc , 0);
      return ((TF_Output){ op , 0});
    }
  }
}
TF_Output Graph_m_BiasAdd (Graph * this , TF_Output value , TF_Output bias ) {
  { /* cicili#Let144 */
    TF_OperationDescription * desc  = TF_NewOperation ((this ->ptr ), "BiasAdd", "bias_add");
    TF_AddInput (desc , value );
    TF_AddInput (desc , bias );
    TF_SetAttrType (desc , "T", TF_FLOAT );
    { /* cicili#Let146 */
      TF_Operation * op  = TF_FinishOperation (desc , 0);
      return ((TF_Output){ op , 0});
    }
  }
}
TF_Output Graph_m_Variable (Graph * this , const char * name , const TF_DataType dtype , const int64_t * dims , int ndims ) {
  { /* cicili#Let149 */
    TF_OperationDescription * desc  = TF_NewOperation ((this ->ptr ), "VariableV2", name );
    TF_SetAttrType (desc , "dtype", dtype );
    TF_SetAttrShape (desc , "shape", dims , ndims );
    return ((TF_Output){ TF_FinishOperation (desc , ((this ->status )->ptr )), 0});
  }
}
TF_Output Graph_m_Const (Graph * this , const char * name , TF_Tensor * tensor ) {
  { /* cicili#Let152 */
    TF_OperationDescription * desc  = TF_NewOperation ((this ->ptr ), "Const", name );
    TF_SetAttrTensor (desc , "value", tensor , (this ->status ));
    TF_SetAttrType (desc , "dtype", TF_TensorType (tensor ));
    { /* cicili#Let154 */
      TF_Operation * op  = TF_FinishOperation (desc , ((this ->status )->ptr ));
      return ((TF_Output){ op , 0});
    }
  }
}
TF_Output Graph_m_ConstFloat (Graph * this , const char * name , float value ) {
  { /* cicili#Let157 */
    float * val  = malloc (sizeof(float));
    (*val ) = value ;
    { /* cicili#Let159 */
      TF_Tensor * tensor  = TF_NewTensor (TF_FLOAT , 0, 0, val , sizeof(float), 0, 0);
      return Graph_m_Const(this , name , tensor );
    }
  }
}
TF_Operation * Graph_m_Assign (Graph * this , const char * name , TF_Output var , TF_Tensor * value ) {
  { /* cicili#Let162 */
    TF_Output const_val  = Graph_m_Const(this , "assign_value", value );
    { /* cicili#Let164 */
      TF_OperationDescription * desc  = TF_NewOperation ((this ->ptr ), "Assign", name );
      TF_AddInput (desc , var );
      TF_AddInput (desc , const_val );
      return ((TF_Operation *){ TF_FinishOperation (desc , ((this ->status )->ptr )), 0});
    }
  }
}
TF_Output * Graph_m_AddSymbolicGradients (Graph * this , TF_Output * ys , int y_count , TF_Output * xs , int x_count , TF_Output * grads , Status * status ) {
  TF_AddGradients ((this ->ptr ), ys , y_count , xs , x_count , 0, grads , ((this ->status )->ptr ));
  return grads ;
}
TF_Operation * Graph_m_ApplyGradientDescent (Graph * this , const char * name , TF_Output var , TF_Tensor * lr , TF_Output grad ) {
  { /* cicili#Let168 */
    TF_OperationDescription * desc  = TF_NewOperation ((this ->ptr ), "ApplyGradientDescent", name );
    TF_AddInput (desc , var );
    TF_AddInput (desc , Graph_m_Const(this , "lr_const", lr ));
    TF_AddInput (desc , grad );
    return TF_FinishOperation (desc , ((this ->status )->ptr ));
  }
}
TF_Operation * Graph_m_NoOp (Graph * this , const char * name , TF_Operation ** control_deps , int num_control_deps ) {
  { /* cicili#Let171 */
    TF_OperationDescription * desc  = TF_NewOperation ((this ->ptr ), "NoOp", name );
    for (int i  = 0; (i  <  num_control_deps  ); (++i )) {
      TF_AddControlInput (desc , control_deps [i ]);
    } 
    return TF_FinishOperation (desc , ((this ->status )->ptr ));
  }
}
TF_Output Graph_m_Sub (Graph * this , const char * name , TF_Output x , TF_Output y ) {
  { /* cicili#Let176 */
    TF_Output ios [] = { x , y };
    return ((TF_Output){ Graph_m_AddOp(this , "Sub", name , ios , 2), 0});
  }
}
TF_Output Graph_m_Square (Graph * this , const char * name , TF_Output x ) {
  return ((TF_Output){ Graph_m_AddOp(this , "Square", name , (&x ), 1), 0});
}
TF_Output Graph_m_Mean (Graph * this , const char * name , TF_Output x ) {
  { /* cicili#Let180 */
    int dims  = 1;
    int64_t shape  = 1;
    int data  = 0;
    TF_Tensor * axis_tensor  = TF_NewTensor (TF_INT32 , (&shape ), dims , (&data ), sizeof(int), NULL , NULL );
    { /* cicili#Let182 */
      TF_Output axis  = Graph_m_Const(this , "axis", axis_tensor );
      TF_Output ios [] = { x , axis };
      return ((TF_Output){ Graph_m_AddOp(this , "Mean", name , ios , 2), 0});
    }
  }
}

Tensor * Tensor_s_new (const TF_DataType dtype , const int64_t * dims , const int num_dims , void * data , const size_t len , void (*deallocator) (void * data , size_t len , void * arg ), void * deallocator_arg ) {
  { /* cicili#Let188 */
    Tensor * tensor  = malloc (sizeof(Tensor));
    (tensor ->ptr ) = TF_NewTensor (dtype , dims , num_dims , data , len , deallocator , deallocator_arg );
    return tensor ;
  }
}
Tensor * Tensor_s_newFromData (const TF_DataType dtype , const int64_t * dims , const int num_dims , void * data , const size_t len ) {
  { /* cicili#Let192 */
    Tensor * tensor  = malloc (sizeof(Tensor));
    (tensor ->ptr ) = TF_NewTensor (dtype , dims , num_dims , data , len , 0, 0);
    return tensor ;
  }
}
Tensor * Tensor_s_newFloat (const int64_t * dims , const int num_dims , float * data ) {
  return Tensor_s_newFromData(TF_FLOAT , dims , num_dims , data , sizeof(float));
}
Tensor * Tensor_s_newFromFloatArray (float * values , int64_t * shape , int rank , int value_count ) {
  { /* cicili#Let196 */
    int64_t total_bytes  = (value_count  *  sizeof(float) );
    int64_t * dims  = shape ;
    TF_Tensor * t  = TF_NewTensor (TF_FLOAT , dims , rank , values , total_bytes , 0, 0);
    return ((Tensor){ t });
  }
}
Tensor * Tensor_s_newFromIntArray (int32_t * values , int64_t * shape , int rank , int value_count ) {
  { /* cicili#Let199 */
    int64_t total_bytes  = (value_count  *  sizeof(int32_t) );
    int64_t * dims  = shape ;
    TF_Tensor * t  = TF_NewTensor (TF_INT32 , dims , rank , values , total_bytes , 0, 0);
    return ((Tensor){ t });
  }
}
Tensor * Tensor_s_newFromInt64Array (int64_t * arr , int * dims , int num_dims ) {
  { /* cicili#Let202 */
    int64_t total_size  = 1;
    for (int i  = 0; (i  <  num_dims  ); (++i )) {
      total_size  = (total_size  *  dims [i ] );
    } 
    { /* cicili#Let206 */
      TF_Tensor * t  = TF_NewTensor (TF_INT64 , dims , num_dims , arr , (total_size  *  sizeof(int64_t) ), 0, 0);
      return ((Tensor){ t });
    }
  }
}
Tensor * Tensor_s_newFromBoolArray (uint8_t * arr , int * dims , int num_dims ) {
  { /* cicili#Let209 */
    int64_t total_size  = 1;
    for (int i  = 0; (i  <  num_dims  ); (++i )) {
      total_size  = (total_size  *  dims [i ] );
    } 
    { /* cicili#Let213 */
      TF_Tensor * t  = TF_NewTensor (TF_BOOL , dims , num_dims , arr , total_size , 0, 0);
      return ((Tensor){ t });
    }
  }
}
Tensor * Tensor_s_newFromScalarFloat (float value ) {
  { /* cicili#Let216 */
    float * val_ptr  = malloc (sizeof(float));
    * (val_ptr ) = value ;
    { /* cicili#Let218 */
      TF_Tensor * t  = TF_NewTensor (TF_FLOAT , 0, 0, val_ptr , sizeof(float), 0, 0);
      return ((Tensor){ t });
    }
  }
}
void Tensor_m_free (Tensor * this ) {
  TF_DeleteTensor ((this ->ptr ));
  free (this );
}
int Tensor_m_type (Tensor * this ) {
  return TF_TensorType ((this ->ptr ));
}
int Tensor_m_numDims (Tensor * this ) {
  return TF_NumDims ((this ->ptr ));
}
int64_t Tensor_m_dim (Tensor * this , int i ) {
  return TF_Dim ((this ->ptr ), i );
}
size_t Tensor_m_byteSize (Tensor * this ) {
  return TF_TensorByteSize ((this ->ptr ));
}
void * Tensor_m_data (Tensor * this ) {
  return TF_TensorData ((this ->ptr ));
}

#include <ctype.h>
#include <stdarg.h>
struct __ciciliS_IOSlice_m_calcCap_ {
  size_t capLen ;
  size_t size ;
};
static struct __ciciliS_IOSlice_m_calcCap_ IOSlice_s_calcCap (size_t len ) {
  { /* cicili#Let231 */
    size_t capLen  = ((((len  %  IOSLICE_GROWTH_STEP  ) >  0 )) ? ((len  /  IOSLICE_GROWTH_STEP  ) +  1 ) : (len  /  IOSLICE_GROWTH_STEP  ));
    return ((struct __ciciliS_IOSlice_m_calcCap_){ capLen , (sizeof(ioslice_elem_t) *  capLen  )});
  }
}
IOSlice * IOSlice_s_newEmpty (size_t len ) {
  { /* cicili#Let234 */
    __auto_type cap  = IOSlice_s_calcCap(len );
    IOSlice * slice  = malloc ((sizeof(IOSlice) +  (cap . size ) ));
    (slice ->len ) = len ;
    (slice ->cap ) = (cap . capLen );
    return slice ;
  }
}
IOSlice * IOSlice_s_newFromArray (const ioslice_elem_t * arr , size_t len ) {
  { /* cicili#Let237 */
    IOSlice * slice  = IOSlice_s_newEmpty(len );
    memcpy ((slice ->arr ), arr , (sizeof(ioslice_elem_t) *  len  ));
    return slice ;
  }
}
IOSlice * IOSlice_s_newCopy (const IOSlice * other ) {
  { /* cicili#Let240 */
    IOSlice * slice  = IOSlice_s_newEmpty((other ->len ));
    memcpy ((slice ->arr ), (other ->arr ), (sizeof(ioslice_elem_t) *  (other ->len ) ));
    return slice ;
  }
}
TF_Output IOSlice_m_firstElement (IOSlice * this ) {
  return ((TF_Output)(this ->arr )[0]);
}
IOSlice * IOSlice_m_clone (IOSlice * this ) {
  return IOSlice_s_newCopy(this );
}
ioslice_elem_t * IOSlice_m_cloneArray (IOSlice * this ) {
  { /* cicili#Let245 */
    size_t size  = (sizeof(ioslice_elem_t) *  (this ->len ) );
    ioslice_elem_t * arr  = malloc (size );
    memcpy (arr , (this ->arr ), size );
    return arr ;
  }
}
IOSlice * IOSlice_m_appendNew (IOSlice * this , const IOSlice * other ) {
  { /* cicili#Let248 */
    size_t totalLen  = ((this ->len ) +  (other ->len ) );
    { /* cicili#Let250 */
      IOSlice * slice  = IOSlice_s_newEmpty(totalLen );
      memcpy ((slice ->arr ), (this ->arr ), (sizeof(ioslice_elem_t) *  (this ->len ) ));
      memcpy (((slice ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(ioslice_elem_t) *  (other ->len ) ));
      return slice ;
    }
  }
}
struct __ciciliS_IOSlice_m_append_ IOSlice_m_append (IOSlice * this , const IOSlice * other ) {
  { /* cicili#Let253 */
    size_t totalLen  = ((this ->len ) +  (other ->len ) );
    if (totalLen  <=  (this ->cap ) ) 
      { /* cicili#Block256 */
        memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(ioslice_elem_t) *  (other ->len ) ));
        return ((struct __ciciliS_IOSlice_m_append_){ this , false });
      } /* cicili#Block256 */
    else 
      return ((struct __ciciliS_IOSlice_m_append_){ IOSlice_m_appendNew(this , other ), true });
  }
}
void IOSlice_m_free (IOSlice * this ) {
  free (this );
}
struct __ciciliS_IOSlice_m_push_ IOSlice_m_push (IOSlice * this , ioslice_elem_t val ) {
  if ((this ->len ) ==  (this ->cap ) ) 
    { /* cicili#Block262 */
      { /* cicili#Let264 */
        size_t newLen  = ((this ->len ) +  1 );
        { /* cicili#Let266 */
          IOSlice * newSlice  = IOSlice_s_newEmpty(newLen );
          memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(ioslice_elem_t) *  (this ->len ) ));
          (newSlice ->len ) = newLen ;
          (newSlice ->arr )[(this ->len )] = val ;
          IOSlice_m_free(this );
          return ((struct __ciciliS_IOSlice_m_push_){ newSlice , true });
        }
      }
    } /* cicili#Block262 */
  else 
    { /* cicili#Block269 */
      (this ->arr )[(this ->len )] = val ;
      (++(this ->len ));
      return ((struct __ciciliS_IOSlice_m_push_){ this , false });
    } /* cicili#Block269 */
}
struct __ciciliS_IOSlice_m_pop_ IOSlice_m_pop (IOSlice * this ) {
  if ((this ->len ) ==  0 ) 
    return ((struct __ciciliS_IOSlice_m_pop_){ (this ->arr )[0], false });
  else 
    { /* cicili#Block274 */
      (--(this ->len ));
      return ((struct __ciciliS_IOSlice_m_pop_){ (this ->arr )[(this ->len )], true });
    } /* cicili#Block274 */
}
IOSlice * IOSlice_m_shrink (IOSlice * this ) {
  { /* cicili#Let277 */
    IOSlice * newSlice  = IOSlice_s_newEmpty((this ->len ));
    memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(ioslice_elem_t) *  (this ->len ) ));
    IOSlice_m_free(this );
    return newSlice ;
  }
}
IOSlice * IOSlice_m_insert (IOSlice * this , size_t index , ioslice_elem_t val ) {
  { /* cicili#Let280 */
    size_t safeIndex  = (((index  >  (this ->len ) )) ? (this ->len ) : index );
    if ((this ->len ) ==  (this ->cap ) ) 
      { /* cicili#Let283 */
        IOSlice * newSlice  = IOSlice_s_newEmpty(((this ->len ) +  1 ));
        memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(ioslice_elem_t) *  safeIndex  ));
        (newSlice ->arr )[safeIndex ] = val ;
        memcpy (((newSlice ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(ioslice_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (newSlice ->len ) = ((this ->len ) +  1 );
        IOSlice_m_free(this );
        return newSlice ;
      }
    else 
      { /* cicili#Block286 */
        memmove (((this ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(ioslice_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (this ->arr )[safeIndex ] = val ;
        (++(this ->len ));
        return this ;
      } /* cicili#Block286 */
  }
}
IOSlice * IOSlice_m_removeAt (IOSlice * this , size_t index ) {
  if (index  >=  (this ->len ) ) 
    return this ;
  else 
    { /* cicili#Block291 */
      memmove (((this ->arr ) +  index  ), ((this ->arr ) +  (index  +  1 ) ), (sizeof(ioslice_elem_t) *  ((this ->len ) -  (index  +  1 ) ) ));
      (--(this ->len ));
      return this ;
    } /* cicili#Block291 */
}

#include <ctype.h>
#include <stdarg.h>
struct __ciciliS_TensorSlice_m_calcCap_ {
  size_t capLen ;
  size_t size ;
};
static struct __ciciliS_TensorSlice_m_calcCap_ TensorSlice_s_calcCap (size_t len ) {
  { /* cicili#Let298 */
    size_t capLen  = ((((len  %  TENSORSLICE_GROWTH_STEP  ) >  0 )) ? ((len  /  TENSORSLICE_GROWTH_STEP  ) +  1 ) : (len  /  TENSORSLICE_GROWTH_STEP  ));
    return ((struct __ciciliS_TensorSlice_m_calcCap_){ capLen , (sizeof(tensorslice_elem_t) *  capLen  )});
  }
}
TensorSlice * TensorSlice_s_newEmpty (size_t len ) {
  { /* cicili#Let301 */
    __auto_type cap  = TensorSlice_s_calcCap(len );
    TensorSlice * slice  = malloc ((sizeof(TensorSlice) +  (cap . size ) ));
    (slice ->len ) = len ;
    (slice ->cap ) = (cap . capLen );
    return slice ;
  }
}
TensorSlice * TensorSlice_s_newFromArray (const tensorslice_elem_t * arr , size_t len ) {
  { /* cicili#Let304 */
    TensorSlice * slice  = TensorSlice_s_newEmpty(len );
    memcpy ((slice ->arr ), arr , (sizeof(tensorslice_elem_t) *  len  ));
    return slice ;
  }
}
TensorSlice * TensorSlice_s_newCopy (const TensorSlice * other ) {
  { /* cicili#Let307 */
    TensorSlice * slice  = TensorSlice_s_newEmpty((other ->len ));
    memcpy ((slice ->arr ), (other ->arr ), (sizeof(tensorslice_elem_t) *  (other ->len ) ));
    return slice ;
  }
}
Tensor * TensorSlice_m_firstElement (TensorSlice * this ) {
  return ((Tensor *)(this ->arr )[0]);
}
TensorSlice * TensorSlice_m_clone (TensorSlice * this ) {
  return TensorSlice_s_newCopy(this );
}
tensorslice_elem_t * TensorSlice_m_cloneArray (TensorSlice * this ) {
  { /* cicili#Let312 */
    size_t size  = (sizeof(tensorslice_elem_t) *  (this ->len ) );
    tensorslice_elem_t * arr  = malloc (size );
    memcpy (arr , (this ->arr ), size );
    return arr ;
  }
}
TensorSlice * TensorSlice_m_appendNew (TensorSlice * this , const TensorSlice * other ) {
  { /* cicili#Let315 */
    size_t totalLen  = ((this ->len ) +  (other ->len ) );
    { /* cicili#Let317 */
      TensorSlice * slice  = TensorSlice_s_newEmpty(totalLen );
      memcpy ((slice ->arr ), (this ->arr ), (sizeof(tensorslice_elem_t) *  (this ->len ) ));
      memcpy (((slice ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(tensorslice_elem_t) *  (other ->len ) ));
      return slice ;
    }
  }
}
struct __ciciliS_TensorSlice_m_append_ TensorSlice_m_append (TensorSlice * this , const TensorSlice * other ) {
  { /* cicili#Let320 */
    size_t totalLen  = ((this ->len ) +  (other ->len ) );
    if (totalLen  <=  (this ->cap ) ) 
      { /* cicili#Block323 */
        memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(tensorslice_elem_t) *  (other ->len ) ));
        return ((struct __ciciliS_TensorSlice_m_append_){ this , false });
      } /* cicili#Block323 */
    else 
      return ((struct __ciciliS_TensorSlice_m_append_){ TensorSlice_m_appendNew(this , other ), true });
  }
}
void TensorSlice_m_free (TensorSlice * this ) {
  free (this );
}
struct __ciciliS_TensorSlice_m_push_ TensorSlice_m_push (TensorSlice * this , tensorslice_elem_t val ) {
  if ((this ->len ) ==  (this ->cap ) ) 
    { /* cicili#Block329 */
      { /* cicili#Let331 */
        size_t newLen  = ((this ->len ) +  1 );
        { /* cicili#Let333 */
          TensorSlice * newSlice  = TensorSlice_s_newEmpty(newLen );
          memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(tensorslice_elem_t) *  (this ->len ) ));
          (newSlice ->len ) = newLen ;
          (newSlice ->arr )[(this ->len )] = val ;
          TensorSlice_m_free(this );
          return ((struct __ciciliS_TensorSlice_m_push_){ newSlice , true });
        }
      }
    } /* cicili#Block329 */
  else 
    { /* cicili#Block336 */
      (this ->arr )[(this ->len )] = val ;
      (++(this ->len ));
      return ((struct __ciciliS_TensorSlice_m_push_){ this , false });
    } /* cicili#Block336 */
}
struct __ciciliS_TensorSlice_m_pop_ TensorSlice_m_pop (TensorSlice * this ) {
  if ((this ->len ) ==  0 ) 
    return ((struct __ciciliS_TensorSlice_m_pop_){ (this ->arr )[0], false });
  else 
    { /* cicili#Block341 */
      (--(this ->len ));
      return ((struct __ciciliS_TensorSlice_m_pop_){ (this ->arr )[(this ->len )], true });
    } /* cicili#Block341 */
}
TensorSlice * TensorSlice_m_shrink (TensorSlice * this ) {
  { /* cicili#Let344 */
    TensorSlice * newSlice  = TensorSlice_s_newEmpty((this ->len ));
    memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(tensorslice_elem_t) *  (this ->len ) ));
    TensorSlice_m_free(this );
    return newSlice ;
  }
}
TensorSlice * TensorSlice_m_insert (TensorSlice * this , size_t index , tensorslice_elem_t val ) {
  { /* cicili#Let347 */
    size_t safeIndex  = (((index  >  (this ->len ) )) ? (this ->len ) : index );
    if ((this ->len ) ==  (this ->cap ) ) 
      { /* cicili#Let350 */
        TensorSlice * newSlice  = TensorSlice_s_newEmpty(((this ->len ) +  1 ));
        memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(tensorslice_elem_t) *  safeIndex  ));
        (newSlice ->arr )[safeIndex ] = val ;
        memcpy (((newSlice ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(tensorslice_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (newSlice ->len ) = ((this ->len ) +  1 );
        TensorSlice_m_free(this );
        return newSlice ;
      }
    else 
      { /* cicili#Block353 */
        memmove (((this ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(tensorslice_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (this ->arr )[safeIndex ] = val ;
        (++(this ->len ));
        return this ;
      } /* cicili#Block353 */
  }
}
TensorSlice * TensorSlice_m_removeAt (TensorSlice * this , size_t index ) {
  if (index  >=  (this ->len ) ) 
    return this ;
  else 
    { /* cicili#Block358 */
      memmove (((this ->arr ) +  index  ), ((this ->arr ) +  (index  +  1 ) ), (sizeof(tensorslice_elem_t) *  ((this ->len ) -  (index  +  1 ) ) ));
      (--(this ->len ));
      return this ;
    } /* cicili#Block358 */
}

Session * Session_s_new (Graph * graph , Status * status ) {
  { /* cicili#Let364 */
    Session * session  = malloc (sizeof(Session));
    (session ->graph ) = graph ;
    (session ->status ) = status ;
    (session ->ptr ) = TF_NewSession ((graph ->ptr ), 0, (status ->ptr ));
    return session ;
  }
}
void Session_m_close (Session * this ) {
  TF_CloseSession ((this ->ptr ), ((this ->status )->ptr ));
}
void Session_m_free (Session * this ) {
  TF_DeleteSession ((this ->ptr ), ((this ->status )->ptr ));
  free (this );
}
void Session_m_run (Session * this , IOSlice * inputs , TensorSlice * input_values , IOSlice * outputs , TensorSlice * output_values ) {
  TF_SessionRun ((this ->ptr ), 0, (inputs ->arr ), ((TF_Tensor ** const)TensorSlice_m_firstElement(input_values )), (inputs ->len ), (outputs ->arr ), ((TF_Tensor ** const)TensorSlice_m_firstElement(output_values )), (outputs ->len ), 0, 0, 0, ((this ->status )->ptr ));
}
static void __ciciliL_375 (IOSlice ** inputs ) {
  free (((void *)(*inputs )));
}
static void __ciciliL_378 (TensorSlice ** input_vals ) {
  free (((void *)(*input_vals )));
}
static void __ciciliL_381 (IOSlice ** outputs ) {
  free (((void *)(*outputs )));
}
static void __ciciliL_384 (TensorSlice ** out_vals ) {
  free (((void *)(*out_vals )));
}
Tensor * Session_m_runSimple (Session * this , TF_Output input , Tensor * input_tensor , TF_Output output ) {
  { /* cicili#Block372 */
    IOSlice * inputs  __attribute__((__cleanup__(__ciciliL_375 ))) = IOSlice_s_newFromArray((&input ), 1);
    TensorSlice * input_vals  __attribute__((__cleanup__(__ciciliL_378 ))) = TensorSlice_s_newFromArray((&input_tensor ), 1);
    IOSlice * outputs  __attribute__((__cleanup__(__ciciliL_381 ))) = IOSlice_s_newFromArray((&output ), 1);
    TensorSlice * out_vals  __attribute__((__cleanup__(__ciciliL_384 ))) = TensorSlice_s_newEmpty(1);
    Session_m_run(this , inputs , input_vals , outputs , out_vals );
    return TensorSlice_m_firstElement(out_vals );
  } /* cicili#Block372 */
}
void Session_m_runWithLabelsAndLoss (Session * this , IOSlice * inputs , TensorSlice * input_vals , IOSlice * labels , TensorSlice * label_vals , IOSlice * loss_outs , TensorSlice * result ) {
  TF_SessionRun ((this ->ptr ), 0, (inputs ->arr ), ((TF_Tensor ** const)TensorSlice_m_firstElement(input_vals )), ((inputs ->len ) +  (labels ->len ) ), (loss_outs ->arr ), ((TF_Tensor ** const)TensorSlice_m_firstElement(result )), (loss_outs ->len ), 0, 0, 0, ((this ->status )->ptr ));
}

IOSlice * mergeIOSlices (IOSlice * a , IOSlice * b ) {
  { /* cicili#Let391 */
    int total  = ((a ->len ) +  (b ->len ) );
    IOSlice * result  = IOSlice_s_newEmpty(total );
    for (int i  = 0; (i  <  (a ->len ) ); (++i )) {
      IOSlice_m_push(result , (a ->arr )[i ]);
    } 
    for (int i  = 0; (i  <  (b ->len ) ); (++i )) {
      IOSlice_m_push(result , (b ->arr )[i ]);
    } 
    return result ;
  }
}
TensorSlice * mergeTensorSlices (TensorSlice * a , TensorSlice * b ) {
  { /* cicili#Let402 */
    int total  = ((a ->len ) +  (b ->len ) );
    TensorSlice * result  = TensorSlice_s_newEmpty(total );
    for (int i  = 0; (i  <  (a ->len ) ); (++i )) {
      TensorSlice_m_push(result , (a ->arr )[i ]);
    } 
    for (int i  = 0; (i  <  (b ->len ) ); (++i )) {
      TensorSlice_m_push(result , (b ->arr )[i ]);
    } 
    return result ;
  }
}

Model * Model_s_new () {
  { /* cicili#Let416 */
    Model * model  = malloc (sizeof(Model));
    int64_t dims [] = { -1, 4};
    (model ->status ) = Status_s_new();
    (model ->graph ) = Graph_s_new();
    (model ->input ) = Graph_m_Placeholder((model ->graph ), "input", TF_FLOAT , dims , 2);
    (model ->input_placeholders ) = IOSlice_s_newFromArray((&(model ->input )), 1);
    return model ;
  }
}
TF_Output * Model_m_addDense (Model * this , int units ) {
  { /* cicili#Let419 */
    TF_Output * last_output  = (this ->output );
    if (last_output  ==  NULL  ) 
      { /* cicili#Block424 */
        last_output  = (&(this ->input ));
      } /* cicili#Block424 */

    { /* cicili#Let426 */
      TF_Output * out  = malloc (sizeof(TF_Output));
      (*out ) = ({ /* cicili#Progn430 */
({ /* cicili#Let432 */
    TF_Output dense_w  = Graph_m_Variable((this ->graph ), "dense_w", TF_FLOAT , NULL , 2);
    TF_Output dense_b  = Graph_m_Variable((this ->graph ), "dense_b", TF_FLOAT , NULL , 1);
({ /* cicili#Let434 */
      TF_OperationDescription * desc  = TF_NewOperation (((this ->graph )->ptr ), "MatMul", "dense_matmul");
      TF_AddInput (desc , (*last_output ));
      TF_AddInput (desc , dense_w );
      TF_SetAttrBool (desc , "transpose_a", 0);
      TF_SetAttrBool (desc , "transpose_b", 0);
({ /* cicili#Let436 */
        TF_Output matmul_out  = ((TF_Output){ TF_FinishOperation (desc , (((this ->graph )->status )->ptr )), 0});
        TF_OperationDescription * desc2  = TF_NewOperation (((this ->graph )->ptr ), "BiasAdd", "dense_out");
        TF_AddInput (desc2 , matmul_out );
        TF_AddInput (desc2 , dense_b );
({ /* cicili#Let438 */
          TF_Operation * op  = TF_FinishOperation (desc2 , (((this ->graph )->status )->ptr ));
          TF_Output dense  = ((TF_Output){ op , 0});
          dense ;
        })      })    })  })});
      (this ->output ) = out ;
      return out ;
    }
  }
}
void Model_m_compile (Model * this ) {
  (this ->session ) = Session_s_new((this ->graph ), (this ->status ));
}
TensorSlice * Model_m_predict (Model * this , TensorSlice * input_vals ) {
  { /* cicili#Let442 */
    TensorSlice * out_vals  = TensorSlice_s_newEmpty(1);
    Session_m_run((this ->session ), (this ->input_placeholders ), input_vals , (this ->input_placeholders ), out_vals );
    return out_vals ;
  }
}
void Model_m_free (Model * this ) {
  Session_m_close((this ->session ));
  Session_m_free((this ->session ));
  Graph_m_free((this ->graph ));
  Status_m_free((this ->status ));
  free (this );
}
void Model_m_compileWithLoss (Model * this , const char * label_name ) {
  { /* cicili#Let446 */
    int64_t dims [] = { -1, 1};
    TF_Output labels  = Graph_m_Placeholder((this ->graph ), label_name , TF_FLOAT , dims , 2);
    (this ->labels ) = labels ;
    (this ->output_placeholders ) = IOSlice_s_newFromArray((&labels ), 1);
  }
  { /* cicili#Let448 */
    TF_Output diff  = Graph_m_Sub((this ->graph ), "diff", (*(this ->output )), (this ->labels ));
    TF_Output sq  = Graph_m_Square((this ->graph ), "sq", diff );
    TF_Output loss  = Graph_m_Mean((this ->graph ), "loss", sq );
    (this ->loss ) = loss ;
  }
  { /* cicili#Let450 */
    int num_vars  = ((this ->trainable_vars )->len );
    TF_Output * grad_arr  = malloc ((num_vars  *  sizeof(TF_Output) ));
    Graph_m_AddSymbolicGradients((this ->graph ), (&(this ->loss )), 1, ((this ->trainable_vars )->arr ), num_vars , grad_arr , (this ->status ));
    (this ->gradients ) = IOSlice_s_newFromArray(grad_arr , num_vars );
    { /* cicili#Let452 */
      TF_Output * lr_arr  = malloc ((num_vars  *  sizeof(TF_Output) ));
      for (int i  = 0; (i  <  num_vars  ); (++i )) {
        { /* cicili#Let456 */
          float * lr_val  = malloc (sizeof(float));
          * (lr_val ) = 0.01f ;
          { /* cicili#Let458 */
            TF_Tensor ** lr_tensors  = malloc ((num_vars  *  sizeof(TF_Tensor *) ));
            TF_Tensor * lr_tensor  = TF_NewTensor (TF_FLOAT , 0, 0, lr_val , sizeof(float), 0, 0);
            lr_arr [i ] = Graph_m_ConstFloat((this ->graph ), "lr", 0.01f );
            lr_tensors [i ] = lr_tensor ;
            (this ->learning_rates_tensors ) = TensorSlice_s_newFromArray(lr_tensors , num_vars );
            (this ->learning_rates ) = IOSlice_s_newFromArray(lr_arr , num_vars );
          }
        }
      } 
      { /* cicili#Let460 */
        TF_Operation ** ops  = malloc ((num_vars  *  sizeof(TF_Operation *) ));
        for (int i  = 0; (i  <  num_vars  ); (++i )) {
          { /* cicili#Let464 */
            TF_Operation * op  = Graph_m_ApplyGradientDescent((this ->graph ), "apply_grad", ((this ->trainable_vars )->arr )[i ], ((this ->learning_rates_tensors )->arr )[i ], ((this ->gradients )->arr )[i ]);
            ops [i ] = op ;
          }
        } 
        (this ->train_op ) = Graph_m_NoOp((this ->graph ), "train", ops , num_vars );
      }
      (this ->session ) = Session_s_new((this ->graph ), (this ->status ));
    }
  }
}
void Model_m_fit (Model * this , TensorSlice * inputs , TensorSlice * targets , int epochs ) {
  for (int i  = 0; (i  <  epochs  ); (++i )) {
    { /* cicili#Let469 */
      int batch_size  = (inputs ->len );
      IOSlice * inputs_  = IOSlice_s_newFromArray((&(this ->input )), 1);
      IOSlice * labels_  = IOSlice_s_newFromArray((&(this ->labels )), 1);
      TensorSlice * input_vals_  = TensorSlice_s_newFromArray((inputs ->arr ), batch_size );
      TensorSlice * label_vals_  = TensorSlice_s_newFromArray((targets ->arr ), batch_size );
      Session_m_run((this ->session ), inputs_ , input_vals_ , labels_ , label_vals_ );
    }
  } 
}
float Model_m_evaluate (Model * this , TensorSlice * inputs , TensorSlice * targets ) {
  { /* cicili#Let472 */
    int batch_size  = (inputs ->len );
    IOSlice * inputs_  = IOSlice_s_newFromArray((&(this ->input )), 1);
    TensorSlice * input_vals_  = TensorSlice_s_newFromArray((inputs ->arr ), batch_size );
    IOSlice * labels_  = IOSlice_s_newFromArray((&(this ->labels )), 1);
    TensorSlice * label_vals_  = TensorSlice_s_newFromArray((targets ->arr ), batch_size );
    IOSlice * loss_outs  = IOSlice_s_newFromArray((&(this ->loss )), 1);
    TensorSlice * result  = TensorSlice_s_newEmpty(1);
    Session_m_runWithLabelsAndLoss((this ->session ), inputs_ , input_vals_ , labels_ , label_vals_ , loss_outs , result );
    { /* cicili#Let474 */
      Tensor * loss_tensor  = (result ->arr )[0];
      float * loss_data  = ((float *)(loss_tensor ->ptr ));
      return * (loss_data );
    }
  }
}
TF_Output Model_m_addTrainable (Model * this , const char * name , int size ) {
  { /* cicili#Let477 */
    TF_Output var  = Graph_m_Variable((this ->graph ), name , TF_FLOAT , (&size ), 1);
    { /* cicili#Let479 */
      float value  = 0;
      int64_t shape [] = { 1};
      TF_Tensor * zero  = Tensor_s_newFromFloatArray((&value ), shape , size , 1);
      char buffer [100];
      size_t buffer_len  = sprintf (buffer , "%s_init", name );
      Graph_m_Assign((this ->graph ), buffer , var , zero );
    }
    if ((this ->trainable_vars ) ==  NULL  ) 
      (this ->trainable_vars ) = IOSlice_s_newFromArray((&var ), 1);
    else 
      { /* cicili#Let483 */
        __auto_type out  = IOSlice_m_push((this ->trainable_vars ), var );
        if (out . newp ) 
          { /* cicili#Block488 */
            IOSlice_m_free((this ->trainable_vars ));
            (this ->trainable_vars ) = (out . out );
          } /* cicili#Block488 */

      }
    return var ;
  }
}
void Model_m_setLearningRate (Model * this , float lr ) {
  (this ->learning_rate ) = lr ;
}
void Model_m_compileWithLossAndOptimizer (Model * this , const char * label_name ) {
  { /* cicili#Let492 */
    int64_t dims [] = { -1, 1};
    TF_Output labels  = Graph_m_Placeholder((this ->graph ), label_name , TF_FLOAT , dims , 2);
    (this ->labels ) = labels ;
    (this ->output_placeholders ) = IOSlice_s_newFromArray((&labels ), 1);
  }
  { /* cicili#Let494 */
    TF_Output diff  = Graph_m_Sub((this ->graph ), "diff", (*(this ->output )), (this ->labels ));
    TF_Output sq  = Graph_m_Square((this ->graph ), "sq", diff );
    TF_Output loss  = Graph_m_Mean((this ->graph ), "loss", sq );
    (this ->loss ) = loss ;
  }
  { /* cicili#Let496 */
    int var_count  = ((this ->trainable_vars )->len );
    TF_Output * vars  = ((this ->trainable_vars )->arr );
    TF_Output * grad_arr  = malloc ((var_count  *  sizeof(TF_Output) ));
    Graph_m_AddSymbolicGradients((this ->graph ), (&(this ->loss )), 1, vars , var_count , grad_arr , (this ->status ));
    for (int i  = 0; (i  <  var_count  ); (++i )) {
      { /* cicili#Let500 */
        TF_Output var  = vars [i ];
        TF_Output grad  = grad_arr [i ];
        TF_Tensor * lr  = Tensor_s_newFromScalarFloat((this ->learning_rate ));
        char buffer [9];
        size_t buffer_len  = sprintf (buffer , "apply_%d", i );
        Graph_m_ApplyGradientDescent((this ->graph ), buffer , var , lr , grad );
      }
    } 
  }
  (this ->session ) = Session_s_new((this ->graph ), (this ->status ));
}
void Model_m_prepareTrain (Model * this , TF_Output loss , float lr ) {
  { /* cicili#Let503 */
    int count  = ((this ->trainable_vars )->len );
    TF_Output * grad_arr  = malloc ((count  *  sizeof(TF_Output) ));
    Graph_m_AddSymbolicGradients((this ->graph ), (&loss ), 1, ((this ->trainable_vars )->arr ), count , grad_arr , (this ->status ));
    { /* cicili#Let505 */
      IOSlice * grads  = IOSlice_s_newFromArray(grad_arr , count );
      TensorSlice * lrs  = TensorSlice_s_newEmpty(count );
      IOSlice * lr_outputs  = IOSlice_s_newEmpty(count );
      float * lr_val  = malloc (sizeof(float));
      * (lr_val ) = lr ;
      for (int i  = 0; (i  <  count  ); (++i )) {
        { /* cicili#Let511 */
          Tensor * tensor  = Tensor_s_newFromData(TF_FLOAT , 0, 0, lr_val , sizeof(float));
          TF_Output out  = Graph_m_Const((this ->graph ), "lr", tensor );
          (lrs ->arr )[i ] = tensor ;
          (lr_outputs ->arr )[i ] = out ;
        }
      } 
      { /* cicili#Let513 */
        TF_Operation * train_op  = 0;
        for (int i  = 0; (i  <  count  ); (++i )) {
          { /* cicili#Let519 */
            char buffer [12];
            size_t buffer_len  = sprintf (buffer , "train_op_%d", i );
            TF_Operation * op  = Graph_m_ApplyGradientDescent((this ->graph ), buffer , ((this ->trainable_vars )->arr )[i ], ((lrs ->arr )[i ]->ptr ), (grads ->arr )[i ]);
            if (i  ==  0 ) 
              train_op  = op ;
            else 
              { /* cicili#Let523 */
                TF_OperationDescription * desc  = TF_NewOperation (((this ->graph )->ptr ), "NoOp", "train_group");
                TF_AddControlInput (desc , train_op );
                TF_AddControlInput (desc , op );
                train_op  = TF_FinishOperation (desc , ((this ->status )->ptr ));
              }
          }
        } 
        (this ->gradients ) = grads ;
        (this ->learning_rates ) = lr_outputs ;
        (this ->learning_rates_tensors ) = lrs ;
        (this ->train_op ) = train_op ;
      }
    }
  }
}

