```markdown
# TensorFlow C API Comprehensive Guide

> The TensorFlow C API lets you build, run, and manage TensorFlow graphs directly from C or C++.  
> It’s the lowest‐level official API, offering maximum control and minimal overhead—ideal for embedding TF into performance-critical applications or environments where Python isn’t available.

---

## Table of Contents

1. [Core Concepts](#core-concepts)  
2. [Essential Data Structures & Functions](#essential-data-structures--functions)  
   - [Error Handling](#error-handling)  
   - [Graph Management](#graph-management)  
   - [Operation Definition](#operation-definition)  
   - [Tensor Creation & Manipulation](#tensor-creation--manipulation)  
   - [Session Execution](#session-execution)  
   - [Utilities & Introspection](#utilities--introspection)  
3. [Typical Workflow for Building & Running a Model](#typical-workflow-for-building--running-a-model)  
4. [Advanced Topics & Considerations](#advanced-topics--considerations)  
5. [Where to Go for More Information](#where-to-go-for-more-information)  
6. [Example: Building & Running a Mini Graph](#example-building--running-a-mini-graph)  
7. [Next Steps](#next-steps)  

---

## Core Concepts

- **Graph (`TF_Graph`)**  
  A static container of operations (nodes) and edges (data flows).  
- **Operation (`TF_Operation`)**  
  A single computation (e.g. `MatMul`, `AddV2`, `Relu`, `Placeholder`, `Const`).  
- **Output (`TF_Output`)**  
  One of an op’s outputs, referenced as `{op, index}`.  
- **Tensor (`TF_Tensor`)**  
  A multi-dimensional array backing data in your graph or session run.  
- **Status (`TF_Status`)**  
  Used for error reporting. Most calls take a `TF_Status*` to report success or failure.  
- **Session (`TF_Session`)**  
  The runtime engine that executes graph fragments when you call `TF_SessionRun`.  
- **Session Options (`TF_SessionOptions`)**  
  Configure session parameters (GPU usage, thread pools, etc.).  
- **Buffer (`TF_Buffer`)**  
  A raw byte buffer, typically used to hold serialized graph definitions or function libraries.

---

## Essential Data Structures & Functions

All functions are declared in `<tensorflow/c/c_api.h>`.

### Error Handling

```c
TF_Status*   TF_NewStatus(void);
void         TF_DeleteStatus(TF_Status*);
TF_Code      TF_GetCode(const TF_Status*);
const char*  TF_Message(const TF_Status*);
```

### Graph Management

```c
TF_Graph*    TF_NewGraph(void);
void         TF_DeleteGraph(TF_Graph*);
void         TF_GraphToGraphDef(
                TF_Graph*, TF_Buffer*, TF_Status*);
void         TF_GraphImportGraphDef(
                TF_Graph*,
                const TF_Buffer*,
                const TF_ImportGraphDefOptions*,
                TF_Status*);
```

### Operation Definition

```c
// 1) Create a new op description
TF_OperationDescription* desc =
  TF_NewOperation(graph, "MatMul", "my_matmul");

// 2) Add inputs / controls
TF_AddInput(desc,    (TF_Output){x_op,0});
TF_AddInputList(desc, inputs, num_inputs);
TF_AddControlInput(desc, init_op);

// 3) Set attributes
TF_SetAttrType(desc,      "T", TF_FLOAT);
TF_SetAttrShape(desc,     "shape", dims, num_dims);
TF_SetAttrTensor(desc,    "value", const_tensor, status);

// 4) Finalize the operation
TF_Operation* op = TF_FinishOperation(desc, status);
```

### Tensor Creation & Manipulation

```c
TF_Tensor* TF_NewTensor(
  TF_DataType dtype,
  const long long* dims, int num_dims,
  void* data, size_t len,
  void (*deallocator)(void*, size_t, void*),
  void* deallocator_arg);

void*       TF_TensorData(const TF_Tensor*);
size_t      TF_TensorByteSize(const TF_Tensor*);
TF_DataType TF_TensorType(const TF_Tensor*);
int         TF_NumDims(const TF_Tensor*);
long long   TF_Dim(const TF_Tensor*, int index);

TF_DeleteTensor(TF_Tensor*);
```

### Session Execution

```c
// 1) Create session
TF_SessionOptions* opts = TF_NewSessionOptions();
TF_Session* sess = TF_NewSession(graph, opts, status);

// 2) Prepare placeholders & tensors
TF_Output  inputs[]      = {{ph1,0}, {ph2,0}};
TF_Tensor* in_tensors[]  = {t1, t2};
TF_Output  outputs[]     = {{out_op,0}};
TF_Tensor* out_tensors[1];

// 3) Run
TF_SessionRun(sess,
              /* run_options */   NULL,
              inputs,  in_tensors, 2,
              outputs, out_tensors,1,
              /* targets */       NULL, 0,
              /* metadata */      NULL,
              status);

// 4) Consume & delete outputs
float* result = TF_TensorData(out_tensors[0]);
TF_DeleteTensor(out_tensors[0]);

// 5) Clean up
TF_DeleteSession(sess, status);
TF_DeleteSessionOptions(opts);
```

### Utilities & Introspection

```c
const char* TF_Version(void);
TF_Operation* TF_GraphGetOpByName(
                 TF_Graph*, const char*);
int          TF_OperationNumOutputs(
                 TF_Operation*);
TF_Output    TF_OperationOutput(
                 TF_Operation*, int);
const char*  TF_OperationName(
                 TF_Operation*);
const char*  TF_OperationOpType(
                 TF_Operation*);
```

---

## Typical Workflow for Building & Running a Model

1. **Initialize**  
   ```c
   TF_Status* status = TF_NewStatus();
   TF_Graph*  graph  = TF_NewGraph();
   ```

2. **Build Graph**  
   - Create `Placeholder` ops for inputs.  
   - Create `Const` ops for fixed values.  
   - Chain computation ops (`MatMul`, `Add`, `Relu`, …).  
   - For training: add `VariableV2`, `Assign`, and optimizer ops.

3. **Create Session**  
   ```c
   TF_SessionOptions* opts = TF_NewSessionOptions();
   TF_Session* sess = TF_NewSession(graph, opts, status);
   ```

4. **Prepare I/O**  
   ```c
   TF_Tensor* input = TF_NewTensor(...);
   TF_Tensor* outputs[num_outputs];
   ```

5. **Run**  
   ```c
   TF_SessionRun(sess,
                 NULL,
                 inputs,  &input,  1,
                 outputs, out_buf, 1,
                 NULL, 0,
                 NULL,
                 status);
   ```

6. **Process & Delete**  
   ```c
   // read output data
   TF_DeleteTensor(input);
   TF_DeleteTensor(outputs[0]);
   ```

7. **Clean Up**  
   ```c
   TF_DeleteSession(sess, status);
   TF_DeleteSessionOptions(opts);
   TF_DeleteGraph(graph);
   TF_DeleteStatus(status);
   ```

---

## Advanced Topics & Considerations

- **Variables & Checkpoints**  
  Use `VariableV2` + `Assign` + checkpoint APIs to save/restore model state.

- **SavedModel Loading**  
  `TF_LoadSessionFromSavedModel` for deploying pre-trained models without rebuilding graphs manually.

- **Functions (`TF_Function`)**  
  Encapsulate subgraphs as reusable functions.

- **Thread Safety**  
  Graph construction is _not_ thread-safe; inference via `TF_SessionRun` can be concurrent.

- **Custom Ops**  
  Load or register new kernels via shared libraries.

- **Profiling & Tracing**  
  Supply `run_options` and `run_metadata` to `TF_SessionRun` for detailed timelines.

- **GPU Configuration**  
  Customize GPU memory allocation and device placement with `TF_SetConfig` on `TF_SessionOptions`.

---

## Where to Go for More Information

- **Header & Source**  
  https://github.com/tensorflow/tensorflow/blob/master/tensorflow/c/c_api.h

- **Official Docs**  
  https://www.tensorflow.org/install/lang_c

- **Examples & Tests**  
  Browse `tensorflow/c/` in the TensorFlow GitHub repo.

- **Community Projects**  
  Explore open-source C/C++ projects embedding TensorFlow.

---

## Example: Building & Running a Mini Graph

```c
#include <tensorflow/c/c_api.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  TF_Status* status = TF_NewStatus();
  TF_Graph* graph  = TF_NewGraph();

  // x placeholder
  TF_OperationDescription* dx =
    TF_NewOperation(graph, "Placeholder", "x");
  TF_SetAttrType(dx, "dtype", TF_FLOAT);
  TF_Operation* x_op = TF_FinishOperation(dx, status);

  // y placeholder
  TF_OperationDescription* dy =
    TF_NewOperation(graph, "Placeholder", "y");
  TF_SetAttrType(dy, "dtype", TF_FLOAT);
  TF_Operation* y_op = TF_FinishOperation(dy, status);

  // b const = 0.5
  float bval = 0.5f;
  TF_Tensor* b_ten = TF_NewTensor(
    TF_FLOAT, (long long[]){1}, 1,
    &bval, sizeof(bval), NULL, NULL);
  TF_OperationDescription* db =
    TF_NewOperation(graph, "Const", "b");
  TF_SetAttrType(db, "dtype", TF_FLOAT);
  TF_SetAttrTensor(db, "value", b_ten, status);
  TF_Operation* b_op = TF_FinishOperation(db, status);

  // mul = x * y
  TF_OperationDescription* dm =
    TF_NewOperation(graph, "Mul", "mul");
  TF_AddInput(dm, (TF_Output){x_op,0});
  TF_AddInput(dm, (TF_Output){y_op,0});
  TF_SetAttrType(dm, "T", TF_FLOAT);
  TF_Operation* mul_op = TF_FinishOperation(dm, status);

  // add = mul + b
  TF_OperationDescription* da =
    TF_NewOperation(graph, "Add", "add");
  TF_AddInput(da, (TF_Output){mul_op,0});
  TF_AddInput(da, (TF_Output){b_op,0});
  TF_SetAttrType(da, "T", TF_FLOAT);
  TF_Operation* add_op = TF_FinishOperation(da, status);

  TF_SessionOptions* opts = TF_NewSessionOptions();
  TF_Session* sess = TF_NewSession(graph, opts, status);

  float xv = 2.0f, yv = 3.0f;
  TF_Tensor* tx = TF_NewTensor(
    TF_FLOAT, (long long[]){1}, 1,
    &xv, sizeof(xv), NULL, NULL);
  TF_Tensor* ty = TF_NewTensor(
    TF_FLOAT, (long long[]){1}, 1,
    &yv, sizeof(yv), NULL, NULL);

  TF_Output  in_ops[]  = {{x_op,0}, {y_op,0}};
  TF_Tensor* in_vals[] = {tx, ty};
  TF_Output  out_ops[] = {{add_op,0}};
  TF_Tensor* out_vals[1];

  TF_SessionRun(sess,
                NULL,
                in_ops,  in_vals,  2,
                out_ops, out_vals, 1,
                NULL, 0,
                NULL,
                status);

  float* z = TF_TensorData(out_vals[0]);
  printf("z = %f\n", z[0]);  // Expect 6.5

  // Cleanup
  TF_DeleteTensor(tx);
  TF_DeleteTensor(ty);
  TF_DeleteTensor(b_ten);
  TF_DeleteTensor(out_vals[0]);
  TF_DeleteSession(sess, status);
  TF_DeleteSessionOptions(opts);
  TF_DeleteGraph(graph);
  TF_DeleteStatus(status);

  return 0;
}
```

---

## Next Steps

- **Load a SavedModel** via `TF_LoadSessionFromSavedModel`.  
- **Implement Training**: add `VariableV2`, `Assign`, optimizer ops, and loop in C.  
- **Performance Tuning**: reuse tensors, cache `TF_Output`, minimize status allocations.  
- **Macro Wrappers**: build higher-level generators (like Cicili) to automate boilerplate.
```
