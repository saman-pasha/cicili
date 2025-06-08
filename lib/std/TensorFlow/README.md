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

### MacOS

```bash
brew install wget
wget https://storage.googleapis.com/tensorflow/libtensorflow/libtensorflow-cpu-darwin-x86_64-<VERSION>.tar.gz
sudo tar -C /usr/local -xzf libtensorflow-cpu-darwin-x86_64-<VERSION>.tar.gz
sudo update_dyld_shared_cache
```

### Headers

Headers are installed in `/usr/local/include/tensorflow/c`  
Library is installed in `/usr/local/lib/libtensorflow.so` or `.dylib`

---

## Core Concepts

| Component     | Description                                       |
|---------------|---------------------------------------------------|
| `TF_Graph`    | Static computational graph                        |
| `TF_Operation`| Node in graph representing a computation          |
| `TF_Output`   | An output of an operation                         |
| `TF_Tensor`   | Multidimensional data array                       |
| `TF_Session`  | Runtime for executing operations                  |
| `TF_Status`   | Error and status reporting                        |
| `TF_Buffer`   | Raw byte buffer (e.g. graph serialization)        |

---

## API Overview

### Error Handling

```c
TF_Status*   TF_NewStatus();
void         TF_DeleteStatus(TF_Status*);
TF_Code      TF_GetCode(const TF_Status*);
const char*  TF_Message(const TF_Status*);
```

### Graph Management

```c
TF_Graph*    TF_NewGraph();
void         TF_DeleteGraph(TF_Graph*);
```

### Operation Construction

```c
TF_OperationDescription* TF_NewOperation(
  TF_Graph*, const char* op_type, const char* name);

void TF_AddInput(TF_OperationDescription*, TF_Output);
void TF_AddControlInput(TF_OperationDescription*, TF_Operation*);
void TF_SetAttrType(TF_OperationDescription*, const char* attr_name, TF_DataType);
void TF_SetAttrTensor(TF_OperationDescription*, const char* attr_name, TF_Tensor*, TF_Status*);
TF_Operation* TF_FinishOperation(TF_OperationDescription*, TF_Status*);
```

### Tensor Creation

```c
TF_Tensor* TF_NewTensor(
  TF_DataType dtype,
  const int64_t* dims, int num_dims,
  void* data, size_t len,
  void (*deallocator)(void*, size_t, void*), void* arg);

void*       TF_TensorData(const TF_Tensor*);
size_t      TF_TensorByteSize(const TF_Tensor*);
void        TF_DeleteTensor(TF_Tensor*);
```

### Session Execution

```c
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
```

### Utilities

```c
const char* TF_Version();
TF_Operation* TF_GraphGetOpByName(TF_Graph*, const char*);
TF_Output TF_OperationOutput(TF_Operation*, int index);
```

---

## Typical Workflow

1. **Initialize Resources**
   - Create `TF_Status`, `TF_Graph`, and `TF_Session`
2. **Build Graph**
   - Add placeholders, constants, operations
3. **Prepare Inputs**
   - Construct `TF_Tensor` values for placeholders
4. **Run Session**
   - Call `TF_SessionRun()` with input/output bindings
5. **Process Outputs**
   - Read from output tensors
6. **Clean Up**
   - Free tensors, status, graph, session

---

## Full Example

```c
// See prior example in Markdown
```

---

## Advanced Topics

- **SavedModel**: Load with `TF_LoadSessionFromSavedModel`
- **Variables**: Use `VariableV2`, `Assign` ops
- **Gradients**: Use `TF_AddGradients` to backprop
- **Functions**: Encapsulate ops as reusable `TF_Function`
- **Thread Safety**: Graph building is **not thread-safe**; session runs **are**
- **GPU Usage**: Configure using `TF_SessionOptions` with a serialized `ConfigProto`
- **Custom Ops**: Load shared libraries with kernels

---

## Resources

- [TensorFlow C API Docs](https://www.tensorflow.org/install/lang_c)  
- [TF C API Header File](https://github.com/tensorflow/tensorflow/blob/master/tensorflow/c/c_api.h)  
- [TensorFlow GitHub](https://github.com/tensorflow/tensorflow)  
- [Community Examples](https://github.com/search?q=tensorflow+c+api+example)

---

## License

This guide is under the [Apache 2.0 License](https://www.apache.org/licenses/LICENSE-2.0) as used by TensorFlow.
