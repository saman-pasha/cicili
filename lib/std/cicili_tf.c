#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "cicili_tf.h"
Graph * Graph_s_new () {
  { /* cicili#Let105 */
    Graph * graph = malloc (sizeof(Graph));
    (graph ->ptr ) = TF_NewGraph ();
    return graph ;
  }
}
void Graph_m_free (Graph * this) {
  TF_DeleteGraph ((this ->ptr ));
  free (this );
}

Status * Status_s_new () {
  { /* cicili#Let112 */
    Status * status = malloc (sizeof(Status));
    (status ->ptr ) = TF_NewStatus ();
    return status ;
  }
}
void Status_m_free (Status * this) {
  TF_DeleteStatus ((this ->ptr ));
  free (this );
}
TF_Code Status_m_code (Status * this) {
  return TF_GetCode ((this ->ptr ));
}
const char * Status_m_message (Status * this) {
  return TF_Message ((this ->ptr ));
}
bool Status_m_ok (Status * this) {
  return (TF_GetCode ((this ->ptr )) ==  TF_OK  );
}

Tensor * Tensor_s_new (const TF_DataType dtype, const int64_t * dims, const int num_dims, void * data, const size_t len, void (*deallocator) (void * data, size_t len, void * arg), void * deallocator_arg) {
  { /* cicili#Let122 */
    Tensor * tensor = malloc (sizeof(Tensor));
    (tensor ->ptr ) = TF_NewTensor (dtype , dims , num_dims , data , len , deallocator , deallocator_arg );
    return tensor ;
  }
}
Tensor * Tensor_s_newFromData (const TF_DataType dtype, const int64_t * dims, const int num_dims, void * data, const size_t len) {
  { /* cicili#Let126 */
    Tensor * tensor = malloc (sizeof(Tensor));
    (tensor ->ptr ) = TF_NewTensor (dtype , dims , num_dims , data , len , 0, 0);
    return tensor ;
  }
}
Tensor * Tensor_s_newFloat (const int64_t * dims, const int num_dims, float * data) {
  return Tensor_s_newFromData(TF_FLOAT , dims , num_dims , data , sizeof(float));
}
void Tensor_m_free (Tensor * this) {
  TF_DeleteTensor ((this ->ptr ));
  free (this );
}
int Tensor_m_type (Tensor * this) {
  return TF_TensorType ((this ->ptr ));
}
int Tensor_m_numDims (Tensor * this) {
  return TF_NumDims ((this ->ptr ));
}
int64_t Tensor_m_dim (Tensor * this, int i) {
  return TF_Dim ((this ->ptr ), i );
}
size_t Tensor_m_byteSize (Tensor * this) {
  return TF_TensorByteSize ((this ->ptr ));
}
void * Tensor_m_data (Tensor * this) {
  return TF_TensorData ((this ->ptr ));
}

#include <ctype.h>
#include <stdarg.h>
struct __ciciliS_IOSlice_m_calcCap_ {
  size_t capLen;
  size_t size;
};
static struct __ciciliS_IOSlice_m_calcCap_ IOSlice_s_calcCap (size_t len) {
  { /* cicili#Let140 */
    size_t capLen = ((((len  %  IOSLICE_GROWTH_STEP  ) >  0 )) ? ((len  /  IOSLICE_GROWTH_STEP  ) +  1 ) : (len  /  IOSLICE_GROWTH_STEP  ));
    return ((struct __ciciliS_IOSlice_m_calcCap_){ capLen , (sizeof(ioslice_elem_t) *  capLen  )});
  }
}
IOSlice * IOSlice_s_newEmpty (size_t len) {
  { /* cicili#Let143 */
    __auto_type cap = IOSlice_s_calcCap(len );
    IOSlice * slice = malloc ((sizeof(IOSlice) +  (cap . size ) ));
    (slice ->len ) = len ;
    (slice ->cap ) = (cap . capLen );
    return slice ;
  }
}
IOSlice * IOSlice_s_newFromArray (const ioslice_elem_t * arr, size_t len) {
  { /* cicili#Let146 */
    IOSlice * slice = IOSlice_s_newEmpty(len );
    memcpy ((slice ->arr ), arr , (sizeof(ioslice_elem_t) *  len  ));
    return slice ;
  }
}
IOSlice * IOSlice_s_newCopy (const IOSlice * other) {
  { /* cicili#Let149 */
    IOSlice * slice = IOSlice_s_newEmpty((other ->len ));
    memcpy ((slice ->arr ), (other ->arr ), (sizeof(ioslice_elem_t) *  (other ->len ) ));
    return slice ;
  }
}
TF_Output IOSlice_m_firstElement (IOSlice * this) {
  return ((TF_Output)(this ->arr )[0]);
}
IOSlice * IOSlice_m_clone (IOSlice * this) {
  return IOSlice_s_newCopy(this );
}
ioslice_elem_t * IOSlice_m_cloneArray (IOSlice * this) {
  { /* cicili#Let154 */
    size_t size = (sizeof(ioslice_elem_t) *  (this ->len ) );
    ioslice_elem_t * arr = malloc (size );
    memcpy (arr , (this ->arr ), size );
    return arr ;
  }
}
IOSlice * IOSlice_m_appendNew (IOSlice * this, const IOSlice * other) {
  { /* cicili#Let157 */
    size_t totalLen = ((this ->len ) +  (other ->len ) );
    { /* cicili#Let159 */
      IOSlice * slice = IOSlice_s_newEmpty(totalLen );
      memcpy ((slice ->arr ), (this ->arr ), (sizeof(ioslice_elem_t) *  (this ->len ) ));
      memcpy (((slice ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(ioslice_elem_t) *  (other ->len ) ));
      return slice ;
    }
  }
}
struct __ciciliS_IOSlice_m_append_ IOSlice_m_append (IOSlice * this, const IOSlice * other) {
  { /* cicili#Let162 */
    size_t totalLen = ((this ->len ) +  (other ->len ) );
    if (totalLen  <=  (this ->cap ) ) 
      { /* cicili#Block165 */
        memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(ioslice_elem_t) *  (other ->len ) ));
        return ((struct __ciciliS_IOSlice_m_append_){ this , false });
      } /* cicili#Block165 */
    else 
      return ((struct __ciciliS_IOSlice_m_append_){ IOSlice_m_appendNew(this , other ), true });
  }
}
void IOSlice_m_free (IOSlice * this) {
  free (this );
}
IOSlice * IOSlice_m_push (IOSlice * this, ioslice_elem_t val) {
  if ((this ->len ) ==  (this ->cap ) ) 
    { /* cicili#Block171 */
      { /* cicili#Let173 */
        size_t newLen = ((this ->len ) +  1 );
        { /* cicili#Let175 */
          IOSlice * newSlice = IOSlice_s_newEmpty(newLen );
          memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(ioslice_elem_t) *  (this ->len ) ));
          (newSlice ->len ) = newLen ;
          (newSlice ->arr )[(this ->len )] = val ;
          IOSlice_m_free(this );
          return newSlice ;
        }
      }
    } /* cicili#Block171 */
  else 
    { /* cicili#Block178 */
      (this ->arr )[(this ->len )] = val ;
      (++(this ->len ));
      return this ;
    } /* cicili#Block178 */
}
struct __ciciliS_IOSlice_m_pop_ IOSlice_m_pop (IOSlice * this) {
  if ((this ->len ) ==  0 ) 
    return ((struct __ciciliS_IOSlice_m_pop_){ (this ->arr )[0], false });
  else 
    { /* cicili#Block183 */
      (--(this ->len ));
      return ((struct __ciciliS_IOSlice_m_pop_){ (this ->arr )[(this ->len )], true });
    } /* cicili#Block183 */
}
IOSlice * IOSlice_m_shrink (IOSlice * this) {
  { /* cicili#Let186 */
    IOSlice * newSlice = IOSlice_s_newEmpty((this ->len ));
    memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(ioslice_elem_t) *  (this ->len ) ));
    IOSlice_m_free(this );
    return newSlice ;
  }
}
IOSlice * IOSlice_m_insert (IOSlice * this, size_t index, ioslice_elem_t val) {
  { /* cicili#Let189 */
    size_t safeIndex = (((index  >  (this ->len ) )) ? (this ->len ) : index );
    if ((this ->len ) ==  (this ->cap ) ) 
      { /* cicili#Let192 */
        IOSlice * newSlice = IOSlice_s_newEmpty(((this ->len ) +  1 ));
        memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(ioslice_elem_t) *  safeIndex  ));
        (newSlice ->arr )[safeIndex ] = val ;
        memcpy (((newSlice ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(ioslice_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (newSlice ->len ) = ((this ->len ) +  1 );
        IOSlice_m_free(this );
        return newSlice ;
      }
    else 
      { /* cicili#Block195 */
        memmove (((this ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(ioslice_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (this ->arr )[safeIndex ] = val ;
        (++(this ->len ));
        return this ;
      } /* cicili#Block195 */
  }
}
IOSlice * IOSlice_m_removeAt (IOSlice * this, size_t index) {
  if (index  >=  (this ->len ) ) 
    return this ;
  else 
    { /* cicili#Block200 */
      memmove (((this ->arr ) +  index  ), ((this ->arr ) +  (index  +  1 ) ), (sizeof(ioslice_elem_t) *  ((this ->len ) -  (index  +  1 ) ) ));
      (--(this ->len ));
      return this ;
    } /* cicili#Block200 */
}

#include <ctype.h>
#include <stdarg.h>
struct __ciciliS_TensorSlice_m_calcCap_ {
  size_t capLen;
  size_t size;
};
static struct __ciciliS_TensorSlice_m_calcCap_ TensorSlice_s_calcCap (size_t len) {
  { /* cicili#Let207 */
    size_t capLen = ((((len  %  TENSORSLICE_GROWTH_STEP  ) >  0 )) ? ((len  /  TENSORSLICE_GROWTH_STEP  ) +  1 ) : (len  /  TENSORSLICE_GROWTH_STEP  ));
    return ((struct __ciciliS_TensorSlice_m_calcCap_){ capLen , (sizeof(tensorslice_elem_t) *  capLen  )});
  }
}
TensorSlice * TensorSlice_s_newEmpty (size_t len) {
  { /* cicili#Let210 */
    __auto_type cap = TensorSlice_s_calcCap(len );
    TensorSlice * slice = malloc ((sizeof(TensorSlice) +  (cap . size ) ));
    (slice ->len ) = len ;
    (slice ->cap ) = (cap . capLen );
    return slice ;
  }
}
TensorSlice * TensorSlice_s_newFromArray (const tensorslice_elem_t * arr, size_t len) {
  { /* cicili#Let213 */
    TensorSlice * slice = TensorSlice_s_newEmpty(len );
    memcpy ((slice ->arr ), arr , (sizeof(tensorslice_elem_t) *  len  ));
    return slice ;
  }
}
TensorSlice * TensorSlice_s_newCopy (const TensorSlice * other) {
  { /* cicili#Let216 */
    TensorSlice * slice = TensorSlice_s_newEmpty((other ->len ));
    memcpy ((slice ->arr ), (other ->arr ), (sizeof(tensorslice_elem_t) *  (other ->len ) ));
    return slice ;
  }
}
Tensor * TensorSlice_m_firstElement (TensorSlice * this) {
  return ((Tensor *)(this ->arr )[0]);
}
TensorSlice * TensorSlice_m_clone (TensorSlice * this) {
  return TensorSlice_s_newCopy(this );
}
tensorslice_elem_t * TensorSlice_m_cloneArray (TensorSlice * this) {
  { /* cicili#Let221 */
    size_t size = (sizeof(tensorslice_elem_t) *  (this ->len ) );
    tensorslice_elem_t * arr = malloc (size );
    memcpy (arr , (this ->arr ), size );
    return arr ;
  }
}
TensorSlice * TensorSlice_m_appendNew (TensorSlice * this, const TensorSlice * other) {
  { /* cicili#Let224 */
    size_t totalLen = ((this ->len ) +  (other ->len ) );
    { /* cicili#Let226 */
      TensorSlice * slice = TensorSlice_s_newEmpty(totalLen );
      memcpy ((slice ->arr ), (this ->arr ), (sizeof(tensorslice_elem_t) *  (this ->len ) ));
      memcpy (((slice ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(tensorslice_elem_t) *  (other ->len ) ));
      return slice ;
    }
  }
}
struct __ciciliS_TensorSlice_m_append_ TensorSlice_m_append (TensorSlice * this, const TensorSlice * other) {
  { /* cicili#Let229 */
    size_t totalLen = ((this ->len ) +  (other ->len ) );
    if (totalLen  <=  (this ->cap ) ) 
      { /* cicili#Block232 */
        memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(tensorslice_elem_t) *  (other ->len ) ));
        return ((struct __ciciliS_TensorSlice_m_append_){ this , false });
      } /* cicili#Block232 */
    else 
      return ((struct __ciciliS_TensorSlice_m_append_){ TensorSlice_m_appendNew(this , other ), true });
  }
}
void TensorSlice_m_free (TensorSlice * this) {
  free (this );
}
TensorSlice * TensorSlice_m_push (TensorSlice * this, tensorslice_elem_t val) {
  if ((this ->len ) ==  (this ->cap ) ) 
    { /* cicili#Block238 */
      { /* cicili#Let240 */
        size_t newLen = ((this ->len ) +  1 );
        { /* cicili#Let242 */
          TensorSlice * newSlice = TensorSlice_s_newEmpty(newLen );
          memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(tensorslice_elem_t) *  (this ->len ) ));
          (newSlice ->len ) = newLen ;
          (newSlice ->arr )[(this ->len )] = val ;
          TensorSlice_m_free(this );
          return newSlice ;
        }
      }
    } /* cicili#Block238 */
  else 
    { /* cicili#Block245 */
      (this ->arr )[(this ->len )] = val ;
      (++(this ->len ));
      return this ;
    } /* cicili#Block245 */
}
struct __ciciliS_TensorSlice_m_pop_ TensorSlice_m_pop (TensorSlice * this) {
  if ((this ->len ) ==  0 ) 
    return ((struct __ciciliS_TensorSlice_m_pop_){ (this ->arr )[0], false });
  else 
    { /* cicili#Block250 */
      (--(this ->len ));
      return ((struct __ciciliS_TensorSlice_m_pop_){ (this ->arr )[(this ->len )], true });
    } /* cicili#Block250 */
}
TensorSlice * TensorSlice_m_shrink (TensorSlice * this) {
  { /* cicili#Let253 */
    TensorSlice * newSlice = TensorSlice_s_newEmpty((this ->len ));
    memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(tensorslice_elem_t) *  (this ->len ) ));
    TensorSlice_m_free(this );
    return newSlice ;
  }
}
TensorSlice * TensorSlice_m_insert (TensorSlice * this, size_t index, tensorslice_elem_t val) {
  { /* cicili#Let256 */
    size_t safeIndex = (((index  >  (this ->len ) )) ? (this ->len ) : index );
    if ((this ->len ) ==  (this ->cap ) ) 
      { /* cicili#Let259 */
        TensorSlice * newSlice = TensorSlice_s_newEmpty(((this ->len ) +  1 ));
        memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(tensorslice_elem_t) *  safeIndex  ));
        (newSlice ->arr )[safeIndex ] = val ;
        memcpy (((newSlice ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(tensorslice_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (newSlice ->len ) = ((this ->len ) +  1 );
        TensorSlice_m_free(this );
        return newSlice ;
      }
    else 
      { /* cicili#Block262 */
        memmove (((this ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(tensorslice_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (this ->arr )[safeIndex ] = val ;
        (++(this ->len ));
        return this ;
      } /* cicili#Block262 */
  }
}
TensorSlice * TensorSlice_m_removeAt (TensorSlice * this, size_t index) {
  if (index  >=  (this ->len ) ) 
    return this ;
  else 
    { /* cicili#Block267 */
      memmove (((this ->arr ) +  index  ), ((this ->arr ) +  (index  +  1 ) ), (sizeof(tensorslice_elem_t) *  ((this ->len ) -  (index  +  1 ) ) ));
      (--(this ->len ));
      return this ;
    } /* cicili#Block267 */
}

Session * Session_s_new (Graph * graph, Status * status) {
  { /* cicili#Let273 */
    Session * session = malloc (sizeof(Session));
    (session ->graph ) = graph ;
    (session ->status ) = status ;
    (session ->ptr ) = TF_NewSession ((graph ->ptr ), 0, (status ->ptr ));
    return session ;
  }
}
void Session_m_close (Session * this) {
  TF_CloseSession ((this ->ptr ), ((this ->status )->ptr ));
}
void Session_m_free (Session * this) {
  TF_DeleteSession ((this ->ptr ), ((this ->status )->ptr ));
  free (this );
}
void Session_m_run (Session * this, IOSlice * inputs, TensorSlice * input_values, IOSlice * outputs, TensorSlice * output_values) {
  TF_SessionRun ((this ->ptr ), 0, (inputs ->arr ), ((TF_Tensor ** const)TensorSlice_m_firstElement(input_values )), (inputs ->len ), (outputs ->arr ), ((TF_Tensor ** const)TensorSlice_m_firstElement(output_values )), (outputs ->len ), 0, 0, 0, ((this ->status )->ptr ));
}
static void __ciciliL_280 (IOSlice ** inputs) {
  free (((void *)(*inputs )));
}
static void __ciciliL_282 (TensorSlice ** input_vals) {
  free (((void *)(*input_vals )));
}
static void __ciciliL_284 (IOSlice ** outputs) {
  free (((void *)(*outputs )));
}
static void __ciciliL_286 (TensorSlice ** out_vals) {
  free (((void *)(*out_vals )));
}
Tensor * Session_m_runSimple (Session * this, TF_Output input, Tensor * input_tensor, TF_Output output) {
  { /* cicili#Let279 */
    IOSlice * inputs __attribute__((__cleanup__(__ciciliL_280 ))) = IOSlice_s_newFromArray((&input ), 1);
    TensorSlice * input_vals __attribute__((__cleanup__(__ciciliL_282 ))) = TensorSlice_s_newFromArray((&input_tensor ), 1);
    IOSlice * outputs __attribute__((__cleanup__(__ciciliL_284 ))) = IOSlice_s_newFromArray((&output ), 1);
    TensorSlice * out_vals __attribute__((__cleanup__(__ciciliL_286 ))) = TensorSlice_s_newEmpty(1);
    Session_m_run(this , inputs , input_vals , outputs , out_vals );
    return TensorSlice_m_firstElement(out_vals );
  }
}

