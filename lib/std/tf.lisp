
(DEFPACKAGE :tf
  (:USE :CL)
  (:EXPORT
      :define))

(IN-PACKAGE :tf)

(DEFMACRO graph-header ()
  `(ghost
       (struct Graph
         (member TF_Graph * ptr))
     
     (decl) (func Graph->new ())
     (decl) (method Graph->free ())))

(DEFMACRO graph-source ()
  `(ghost

       (func Graph->new () 
             (let ((Graph * graph . #'(malloc (sizeof Graph))))
               (set ($ graph ptr) (TF_NewGraph))
               (return graph)))
     
     (method Graph->free ()
             (TF_DeleteGraph ($ this ptr))
             (free this))))

(DEFMACRO status-header ()
  `(ghost
       (struct Status
         (member TF_Status * ptr))

     (decl) (func Status->new ())
     (decl) (method Status->free ())
     (decl) (method Status->code () (out TF_Code))
     (decl) (method Status->message () (out const char *))
     (decl) (method Status->ok () (out bool))))

(DEFMACRO status-source ()
  `(ghost
       (func Status->new ()
             (let ((Status * status . #'(malloc (sizeof Status))))
               (set ($ status ptr) (TF_NewStatus))
               (return status)))

     (method Status->free ()
             (TF_DeleteStatus ($ this ptr))
             (free this))

     (method Status->code () (out TF_Code)
             (return (TF_GetCode ($ this ptr))))

     (method Status->message () (out const char *)
             (return (TF_Message ($ this ptr))))

     (method Status->ok () (out bool)
             (return (== (TF_GetCode ($ this ptr)) TF_OK)))))

(DEFMACRO tensor-header ()
  `(ghost
       (include <tensorflow/c/c_api.h>)
     
     (struct Tensor
       (member TF_Tensor * ptr))
     
     ;; Allocation and deletion
     (decl) (func Tensor->new ((const TF_DataType dtype)
                               (const int64_t * dims)
                               (const int num_dims)
                               (void * data)
                               (const size_t len)
                               (func deallocator ((void * data) (size_t len) (void * arg)))
                               (void * deallocator_arg)))
     (decl) (func Tensor->newFromData ((const TF_DataType dtype)
                                       (const int64_t * dims)
                                       (const int num_dims)
                                       (void * data)
                                       (const size_t len)))
     (decl) (func Tensor->newFloat ((const int64_t * dims)
                                    (const int num_dims)
                                    (float * data)))
     (decl) (method Tensor->free ())

     ;; Tensor info
     (decl) (method Tensor->type () (out int))
     (decl) (method Tensor->numDims () (out int))
     (decl) (method Tensor->dim ((int i)) (out int64_t))
     (decl) (method Tensor->byteSize () (out size_t))
     (decl) (method Tensor->data () (out void *))))

(DEFMACRO tensor-source ()
  `(ghost
       (func Tensor->new ((const TF_DataType dtype)
                          (const int64_t * dims)
                          (const int num_dims)
                          (void * data)
                          (const size_t len)
                          (func deallocator ((void * data) (size_t len) (void * arg)))
                          (void * deallocator_arg))
             (let ((Tensor * tensor . #'(malloc (sizeof Tensor))))
               (set ($ tensor ptr)
                 (TF_NewTensor dtype dims num_dims data len deallocator deallocator_arg))
               (return tensor)))

     ;; Create tensor with borrowed data (no deallocator)
     (func Tensor->newFromData ((const TF_DataType dtype)
                                (const int64_t * dims)
                                (const int num_dims)
                                (void * data)
                                (const size_t len))
           (let ((Tensor * tensor . #'(malloc (sizeof Tensor))))
             (set ($ tensor ptr) (TF_NewTensor dtype dims num_dims data len 0 0))
             (return tensor)))

     (func Tensor->newFloat ((const int64_t * dims)
                             (const int num_dims)
                             (float * data))
           (return (-> Tensor newFromData TF_FLOAT dims num_dims data (sizeof float))))
  
     ;; Free the tensor
     (method Tensor->free ()
             (TF_DeleteTensor ($ this ptr))
             (free this))

     ;; Access tensor info
     (method Tensor->type () (out int)
             (return (TF_TensorType ($ this ptr))))

     (method Tensor->numDims () (out int)
             (return (TF_NumDims ($ this ptr))))

     (method Tensor->dim ((int i)) (out int64_t)
             (return (TF_Dim ($ this ptr) i)))

     (method Tensor->byteSize () (out size_t)
             (return (TF_TensorByteSize ($ this ptr))))

     (method Tensor->data () (out void *)
             (return (TF_TensorData ($ this ptr))))))

(import "slice.lisp")

(DEFMACRO session-header ()
  `(ghost
       (struct Session
         (member TF_Session * ptr)
         (member Graph * graph)
         (member Status * status))

     (decl) (func Session->new ((Graph * graph) (Status * status)))
     (decl) (method Session->close ())
     (decl) (method Session->free ())
     (decl) (method Session->run ((IOSlice     * inputs)
                                  (TensorSlice * input_values)
                                  (IOSlice     * outputs)
                                  (TensorSlice * output_values)))
     (decl) (method Session->runSimple ((TF_Output input)
                                        (Tensor * input_tensor)
                                        (TF_Output output))
                    (out Tensor *))))

(DEFMACRO session-source ()
  `(ghost
       (func Session->new ((Graph * graph) (Status * status))
             (let ((Session * session . #'(malloc (sizeof Session))))
               (set ($ session graph) graph)
               (set ($ session status) status)
               (set ($ session ptr) (TF_NewSession ($ graph ptr) 0 ($ status ptr)))
               (return session)))

     (method Session->close ()
             (TF_CloseSession ($ this ptr) ($ this status ptr)))

     (method Session->free ()
             (TF_DeleteSession ($ this ptr) ($ this status ptr))
             (free this))

     (method Session->run ((IOSlice     * inputs)
                           (TensorSlice * input_values)
                           (IOSlice     * outputs)
                           (TensorSlice * output_values))
             (TF_SessionRun ($ this ptr)
               0
               ($ inputs arr)
               (cast (TF_Tensor ** const) (-> input_values firstElement))
               ($ inputs len)
               ($ outputs arr)
               (cast (TF_Tensor ** const) (-> output_values firstElement))
               ($ outputs len)
               0 0 0
               ($ this status ptr)))

     (method Session->runSimple ((TF_Output input)
                                 (Tensor * input_tensor)
                                 (TF_Output output))
             (out Tensor *)
             (let ((defer #t) (IOSlice * inputs . #'(-> IOSlice newFromArray (aof input) 1))
                   (defer #t) (TensorSlice * input_vals . #'(-> TensorSlice newFromArray (aof input_tensor) 1))
                   (defer #t) (IOSlice * outputs . #'(-> IOSlice newFromArray (aof output) 1))
                   (defer #t) (TensorSlice * out_vals . #'(-> TensorSlice newEmpty 1)))
               (-> this run inputs input_vals outputs out_vals)
               (return (-> out_vals firstElement))))))

(DEFMACRO define ()
  `(cicili
       (header "cicili_tf.h" ()
               (guard __CICILI_TF_H_
                 (include <tensorflow/c/c_api.h>)
                 
                 (graph-header)
                 (status-header)
                 (tensor-header)
                 (BasicSliceHeader "" IOSlice TF_Output 8 () () ())
                 (BasicSliceHeader "" TensorSlice (Tensor *) 8 () () ())
                 (session-header)
                 ))
     
     (source "cicili_tf.c" (:std #t :compile #t :link #f)
             (include "cicili_tf.h")
             
             (graph-source)
             (status-source)
             (tensor-source)
             (BasicSliceSource "" IOSlice TF_Output 8 ())
             (BasicSliceSource "" TensorSlice (Tensor *) 8 ())
             (session-source)
             )))

(define)
