#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <tensorflow/c/c_api.h>
void * scalar_float (float value ) {
  { /* cicili#Let203 */
    float * ptr  = ((float *)malloc (sizeof(float)));
    (*ptr ) = value ;
    return ptr ;
  }
}

static void __ciciliL_215 (const char * name , TF_Status * status ) {
  fprintf (stdout , "%s status: %s\n", name , TF_Message (status ));
}
static void __ciciliL_238 (void * data , size_t size , void * arg ) {
  fprintf (stdout , "deallocator: %f\n", (*((float *)data )));
  free (data );
}
static void __ciciliL_256 (const char * name , TF_Status * status ) {
  fprintf (stdout , "%s status: %s\n", name , TF_Message (status ));
}
int main () {
  fprintf (stdout , "TensorFlow %s\n", TF_Version ());
  { /* cicili#Let210 */
    float b_data  = 0.5f ;
    TF_Status * status  = TF_NewStatus ();
    __auto_type gr  = ({ /* cicili#Let213 */
    void (*status_callback) (const char * name , TF_Status * status ) = __ciciliL_215;
  TF_Graph * gr  = TF_NewGraph ();
  TF_Operation * x  = ({ /* cicili#Let221 */
  TF_OperationDescription * gr_x_desc  = TF_NewOperation (gr , "Placeholder", "gr_x_Placeholder");
  TF_SetAttrType (gr_x_desc , "dtype", TF_FLOAT );
  TF_Operation * x  = TF_FinishOperation (gr_x_desc , status );
  if (TF_GetCode (status ) !=  TF_OK  ) 
    status_callback ("gr_x_Placeholder", status );

  x ;
});
  TF_Operation * y  = ({ /* cicili#Let226 */
  TF_OperationDescription * gr_y_desc  = TF_NewOperation (gr , "Placeholder", "gr_y_Placeholder");
  TF_SetAttrType (gr_y_desc , "dtype", TF_FLOAT );
  TF_Operation * y  = TF_FinishOperation (gr_y_desc , status );
  if (TF_GetCode (status ) !=  TF_OK  ) 
    status_callback ("gr_y_Placeholder", status );

  y ;
});
  TF_Operation * b  = ({ /* cicili#Let231 */
  TF_OperationDescription * gr_b_desc  = TF_NewOperation (gr , "Const", "gr_b_Const");
  TF_SetAttrType (gr_b_desc , "dtype", TF_FLOAT );
  { /* cicili#Block233 */
    TF_SetAttrTensor (gr_b_desc , "value", TF_NewTensor (TF_FLOAT , ((int64_t[]){ 1}), 1, scalar_float (b_data ), sizeof(b_data), __ciciliL_238 , NULL ), status );
    if (TF_GetCode (status ) !=  TF_OK  ) 
      status_callback ("gr_b_Const", status );

  } /* cicili#Block233 */
  TF_Operation * b  = TF_FinishOperation (gr_b_desc , status );
  if (TF_GetCode (status ) !=  TF_OK  ) 
    status_callback ("gr_b_Const", status );

  b ;
});
  TF_Operation * mul  = ({ /* cicili#Let246 */
  TF_OperationDescription * gr_mul_desc  = TF_NewOperation (gr , "Mul", "gr_mul_Mul");
  TF_AddInput (gr_mul_desc , ((TF_Output){ x , 0}));
  TF_AddInput (gr_mul_desc , ((TF_Output){ y , 0}));
  TF_SetAttrType (gr_mul_desc , "T", TF_FLOAT );
  TF_Operation * mul  = TF_FinishOperation (gr_mul_desc , status );
  if (TF_GetCode (status ) !=  TF_OK  ) 
    status_callback ("gr_mul_Mul", status );

  mul ;
});
  TF_Operation * add  = ({ /* cicili#Let251 */
  TF_OperationDescription * gr_add_desc  = TF_NewOperation (gr , "Add", "gr_add_Add");
  TF_AddInput (gr_add_desc , ((TF_Output){ mul , 0}));
  TF_AddInput (gr_add_desc , ((TF_Output){ b , 0}));
  TF_SetAttrType (gr_add_desc , "T", TF_FLOAT );
  TF_Operation * add  = TF_FinishOperation (gr_add_desc , status );
  if (TF_GetCode (status ) !=  TF_OK  ) 
    status_callback ("gr_add_Add", status );

  add ;
});
  if (TF_GetCode (status ) !=  TF_OK  ) 
    __ciciliL_256 ("gr", status );

  gr ;
});
    { /* cicili#Let261 */
      float xv  = 2.0f ;
      float yv  = 3.0f ;
      TF_Tensor * outputs [1];
      TF_SessionOptions * opts  = TF_NewSessionOptions ();
      TF_Session * sess  = TF_NewSession (gr , opts , status );
      TF_SessionRun (sess , NULL , ((TF_Output[]){ { TF_GraphOperationByName (gr , "gr_x_Placeholder"), 0}, { TF_GraphOperationByName (gr , "gr_y_Placeholder"), 0}}), ((TF_Tensor * const[]){ TF_NewTensor (TF_FLOAT , ((int64_t[]){ 1}), 1, scalar_float (xv ), sizeof(xv), NULL , NULL ), TF_NewTensor (TF_FLOAT , ((int64_t[]){ 1}), 1, scalar_float (yv ), sizeof(yv), NULL , NULL )}), 2, ((TF_Output[]){ { TF_GraphOperationByName (gr , "gr_add_Add"), 0}}), outputs , 1, NULL , 0, NULL , status );
      fprintf (stdout , "status: %s\n", TF_Message (status ));
      fprintf (stdout , "output is: %f\n", (*((float *)TF_TensorData (outputs [0]))));
      TF_DeleteSession (sess , status );
      TF_DeleteSessionOptions (opts );
    }
    TF_DeleteGraph (gr );
    TF_DeleteStatus (status );
  }
}

