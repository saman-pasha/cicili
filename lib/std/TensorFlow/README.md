Here's a comprehensive README.md file for the TensorFlow C API, ideal for GitHub or documentation repositories. It includes overview, installation, API usage, and practical code examples.


---

# TensorFlow C API Guide

> Low-level, high-performance interface to build, execute, and inspect TensorFlow graphs using C or C++.  
> Ideal for embedded systems, performance-critical applications, and environments without Python.

---

## Table of Contents

1. [Overview](#overview)  
2. [Installation](#installation)  
3. [Core Concepts](#core-concepts)  
4. [API Overview](#api-overview)  
   - [Error Handling](#error-handling)  
   - [Graph Management](#graph-management)  
   - [Operation Construction](#operation-construction)  
   - [Tensor Creation](#tensor-creation)  
   - [Session Execution](#session-execution)  
   - [Utilities](#utilities)  
5. [Typical Workflow](#typical-workflow)  
6. [Full Example](#full-example)  
7. [Advanced Topics](#advanced-topics)  
8. [Resources](#resources)  

---

## Overview

The **TensorFlow C API** allows you to:

- Build and run computational graphs
- Manage tensors and operations
- Load and execute SavedModels
- Interface with TensorFlow runtime from C/C++

It is the lowest-level API provided by TensorFlow, giving direct access to internal operations and memory.

---

## Installation

### Ubuntu

```bash
sudo apt update
sudo apt install wget unzip cmake build-essential
wget https://storage.googleapis.com/tensorflow/libtensorflow/libtensorflow-cpu-linux-x86_64-<VERSION>.tar.gz
sudo tar -C /usr/local -xzf libtensorflow-cpu-linux-x86_64-<VERSION>.tar.gz
sudo ldconfig
```
MacOS

brew install wget
wget https://storage.googleapis.com/tensorflow/libtensorflow/libtensorflow-cpu-darwin-x86_64-<VERSION>.tar.gz
sudo tar -C /usr/local -xzf libtensorflow-cpu-darwin-x86_64-<VERSION>.tar.gz
sudo update_dyld_shared_cache

Headers

Headers are installed in /usr/local/include/tensorflow/c
Library is installed in /usr/local/lib/libtensorflow.so or .dylib


---

Core Concepts

Component	Description

TF_Graph	Static computational graph
TF_Operation	Node in graph representing a computation
TF_Output	An output of an operation
TF_Tensor	Multidimensional data array
TF_Session	Runtime for executing operations
TF_Status	Error and status reporting
TF_Buffer	Raw byte buffer (e.g. graph serialization)



---

API Overview

Error Handling

TF_Status*   TF_NewStatus();
void         TF_DeleteStatus(TF_Status*);
TF_Code      TF_GetCode(const TF_Status*);
const char*  TF_Message(const TF_Status*);

Graph Management

TF_Graph*    TF_NewGraph();
void         TF_DeleteGraph(TF_Graph*);

Operation Construction

TF_OperationDescription* TF_NewOperation(
  TF_Graph*, const char* op_type, const char* name);

void TF_AddInput(TF_OperationDescription*, TF_Output);
void TF_AddControlInput(TF_OperationDescription*, TF_Operation*);
void TF_SetAttrType(TF_OperationDescription*, const char* attr_name, TF_DataType);
void TF_SetAttrTensor(TF_OperationDescription*, const char* attr_name, TF_Tensor*, TF_Status*);
TF_Operation* TF_FinishOperation(TF_OperationDescription*, TF_Status*);

Tensor Creation

TF_Tensor* TF_NewTensor(
  TF_DataType dtype,
  const int64_t* dims, int num_dims,
  void* data, size_t len,
  void (*deallocator)(void*, size_t, void*), void* arg);

void*       TF_TensorData(const TF_Tensor*);
size_t      TF_TensorByteSize(const TF_Tensor*);
void        TF_DeleteTensor(TF_Tensor*);

Session Execution

TF_SessionOptions* TF_NewSessionOptions();
TF_Session* TF_NewSession(TF_Graph*, TF_SessionOptions*, TF_Status*);

void TF_SessionRun(
  TF_Session*,
  const TF_Buffer* run_options,
  const TF_Output* inputs, TF_Tensor* const* input_values, int ninputs,
  const TF_Output* outputs, TF_Tensor** output_values, int noutputs,
  const TF_Operation* const* target_opers, int ntargets,
  TF_Buffer* run_metadata,
  TF_Status* status);

void TF_DeleteSession(TF_Session*, TF_Status*);
void TF_DeleteSessionOptions(TF_SessionOptions*);

Utilities

const char* TF_Version();
TF_Operation* TF_GraphGetOpByName(TF_Graph*, const char*);
TF_Output TF_OperationOutput(TF_Operation*, int index);


---

Typical Workflow

1. Initialize Resources

Create TF_Status, TF_Graph, and TF_Session



2. Build Graph

Add placeholders, constants, operations



3. Prepare Inputs

Construct TF_Tensor values for placeholders



4. Run Session

Call TF_SessionRun() with input/output bindings



5. Process Outputs

Read from output tensors



6. Clean Up

Free tensors, status, graph, session





---

Full Example

#include <tensorflow/c/c_api.h>
#include <stdio.h>

int main() {
  TF_Status* status = TF_NewStatus();
  TF_Graph* graph = TF_NewGraph();

  // Placeholder x
  TF_OperationDescription* dx = TF_NewOperation(graph, "Placeholder", "x");
  TF_SetAttrType(dx, "dtype", TF_FLOAT);
  TF_Operation* x = TF_FinishOperation(dx, status);

  // Placeholder y
  TF_OperationDescription* dy = TF_NewOperation(graph, "Placeholder", "y");
  TF_SetAttrType(dy, "dtype", TF_FLOAT);
  TF_Operation* y = TF_FinishOperation(dy, status);

  // Const b = 0.5
  float b_val = 0.5f;
  TF_Tensor* b_tensor = TF_NewTensor(TF_FLOAT, (int64_t[]){1}, 1, &b_val, sizeof(b_val), NULL, NULL);
  TF_OperationDescription* db = TF_NewOperation(graph, "Const", "b");
  TF_SetAttrType(db, "dtype", TF_FLOAT);
  TF_SetAttrTensor(db, "value", b_tensor, status);
  TF_Operation* b = TF_FinishOperation(db, status);

  // mul = x * y
  TF_OperationDescription* dm = TF_NewOperation(graph, "Mul", "mul");
  TF_AddInput(dm, (TF_Output){x,0});
  TF_AddInput(dm, (TF_Output){y,0});
  TF_SetAttrType(dm, "T", TF_FLOAT);
  TF_Operation* mul = TF_FinishOperation(dm, status);

  // add = mul + b
  TF_OperationDescription* da = TF_NewOperation(graph, "Add", "add");
  TF_AddInput(da, (TF_Output){mul,0});
  TF_AddInput(da, (TF_Output){b,0});
  TF_SetAttrType(da, "T", TF_FLOAT);
  TF_Operation* add = TF_FinishOperation(da, status);

  // Session
  TF_SessionOptions* opts = TF_NewSessionOptions();
  TF_Session* sess = TF_NewSession(graph, opts, status);

  // Inputs
  float xv = 2.0f, yv = 3.0f;
  TF_Tensor* tx = TF_NewTensor(TF_FLOAT, (int64_t[]){1}, 1, &xv, sizeof(xv), NULL, NULL);
  TF_Tensor* ty = TF_NewTensor(TF_FLOAT, (int64_t[]){1}, 1, &yv, sizeof(yv), NULL, NULL);

  TF_Output inputs[] = {{x,0}, {y,0}};
  TF_Tensor* input_vals[] = {tx, ty};

  TF_Output outputs[] = {{add,0}};
  TF_Tensor* output_vals[1];

  TF_SessionRun(sess,
    NULL,
    inputs, input_vals, 2,
    outputs, output_vals, 1,
    NULL, 0, NULL, status);

  float* result = TF_TensorData(output_vals[0]);
  printf("z = %f\n", result[0]);  // Should print 6.5

  // Cleanup
  TF_DeleteTensor(tx);
  TF_DeleteTensor(ty);
  TF_DeleteTensor(b_tensor);
  TF_DeleteTensor(output_vals[0]);
  TF_DeleteSession(sess, status);
  TF_DeleteSessionOptions(opts);
  TF_DeleteGraph(graph);
  TF_DeleteStatus(status);

  return 0;
}


---

Advanced Topics

SavedModel: Load with TF_LoadSessionFromSavedModel

Variables: Use VariableV2, Assign ops

Gradients: Use TF_AddGradients to backprop

Functions: Encapsulate ops as reusable TF_Function

Thread Safety: Graph building is not thread-safe; session runs are

GPU Usage: Configure using TF_SessionOptions with a serialized ConfigProto

Custom Ops: Load shared libraries with kernels



---

Resources

TensorFlow C API Docs

TF C API Header File

TensorFlow GitHub

Community Examples



---

License

This guide is under the Apache 2.0 License as used by TensorFlow.

---

Would you like this as a downloadable `README.md` file?

