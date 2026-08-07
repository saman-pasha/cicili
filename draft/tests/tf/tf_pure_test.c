// tf_test.c
//
// A standalone C version of your Cicili‐generated TensorFlow example.
// It builds a small graph computing z = x * y + b, runs it once, and prints the result.

#include <stdio.h>
#include <stdlib.h>
#include <tensorflow/c/c_api.h>

// Simple error‐checking helper.
static void check_status(const char* op_name, TF_Status* status) {
  if (TF_GetCode(status) != TF_OK) {
    fprintf(stderr, "%s failed: %s\n", op_name, TF_Message(status));
    exit(1);
  }
}

// Optional deallocator for heap‐allocated tensor buffers.
static void float_deallocator(void* data, size_t len, void* arg) {
  float v = *(float*)data;
  printf("[dealloc] %f\n", v);
  free(data);
}

int main(void) {
  // 1) Print TensorFlow version
  printf("TensorFlow C API version: %s\n", TF_Version());

  // 2) Create a status object and a graph
  TF_Status* status = TF_NewStatus();
  TF_Graph*  graph  = TF_NewGraph();

  // 3) Build Placeholder x
  TF_OperationDescription* x_desc =
      TF_NewOperation(graph, "Placeholder", "x");
  TF_SetAttrType(x_desc, "dtype", TF_FLOAT);
  TF_Operation* x_op = TF_FinishOperation(x_desc, status);
  check_status("Placeholder x", status);

  // 4) Build Placeholder y
  TF_OperationDescription* y_desc =
      TF_NewOperation(graph, "Placeholder", "y");
  TF_SetAttrType(y_desc, "dtype", TF_FLOAT);
  TF_Operation* y_op = TF_FinishOperation(y_desc, status);
  check_status("Placeholder y", status);

  // 5) Build Const b = 0.5
  float* b_data = malloc(sizeof *b_data);
  *b_data       = 0.5f;
  TF_Tensor* b_tensor = TF_NewTensor(
      TF_FLOAT,
      (long long[]){1}, 1,
      b_data, sizeof *b_data,
      float_deallocator, NULL);
  TF_OperationDescription* b_desc =
      TF_NewOperation(graph, "Const", "b");
  TF_SetAttrType(b_desc, "dtype", TF_FLOAT);
  TF_SetAttrTensor(b_desc, "value", b_tensor, status);
  TF_Operation* b_op = TF_FinishOperation(b_desc, status);
  check_status("Const b", status);

  // 6) Build Mul = x * y
  TF_OperationDescription* mul_desc =
      TF_NewOperation(graph, "Mul", "mul");
  TF_AddInput(mul_desc, (TF_Output){x_op, 0});
  TF_AddInput(mul_desc, (TF_Output){y_op, 0});
  TF_SetAttrType(mul_desc, "T", TF_FLOAT);
  TF_Operation* mul_op = TF_FinishOperation(mul_desc, status);
  check_status("Mul", status);

  // 7) Build Add = mul + b
  TF_OperationDescription* add_desc =
      TF_NewOperation(graph, "Add", "add");
  TF_AddInput(add_desc, (TF_Output){mul_op, 0});
  TF_AddInput(add_desc, (TF_Output){b_op,   0});
  TF_SetAttrType(add_desc, "T", TF_FLOAT);
  TF_Operation* add_op = TF_FinishOperation(add_desc, status);
  check_status("Add", status);

  // 8) Create a session
  TF_SessionOptions* opts    = TF_NewSessionOptions();
  TF_Session*         session = TF_NewSession(graph, opts, status);
  check_status("NewSession", status);

  // 9) Prepare input tensors x=2.0 and y=3.0
  float xv = 2.0f, yv = 3.0f;
  TF_Tensor* x_tensor = TF_NewTensor(
      TF_FLOAT, (long long[]){1}, 1,
      &xv, sizeof xv,
      NULL, NULL);
  TF_Tensor* y_tensor = TF_NewTensor(
      TF_FLOAT, (long long[]){1}, 1,
      &yv, sizeof yv,
      NULL, NULL);

  TF_Output   inputs[2]        = {{x_op,0}, {y_op,0}};
  TF_Tensor*  input_tensors[2] = { x_tensor,  y_tensor };
  TF_Output   outputs[1]       = {{add_op,0}};
  TF_Tensor*  output_tensors[1];

  // 10) Run the graph
  TF_SessionRun(session,
                /* run_options  */ NULL,
                /* inputs       */ inputs,  input_tensors,  2,
                /* outputs      */ outputs, output_tensors, 1,
                /* target_opers */ NULL,    0,
                /* run_metadata */ NULL,
                status);
  check_status("SessionRun", status);

  // 11) Extract and print the result
  float* z = TF_TensorData(output_tensors[0]);
  printf("Result z = %f\n", z[0]);  // Expect 6.5

  // 12) Cleanup tensor objects
  TF_DeleteTensor(x_tensor);
  TF_DeleteTensor(y_tensor);
  TF_DeleteTensor(b_tensor);
  TF_DeleteTensor(output_tensors[0]);

  // 13) Close and delete session, graph, and status
  TF_CloseSession(session, status);
  TF_DeleteSession(session, status);
  TF_DeleteSessionOptions(opts);
  TF_DeleteGraph(graph);
  TF_DeleteStatus(status);

  return 0;
}
