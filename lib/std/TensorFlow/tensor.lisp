
(DEFMACRO tensor-header ()
  `(ghost     
     (struct Tensor
       (member TF_Tensor * ptr))
     
     ;; Allocation and deletion
     (decl) (func (Tensor . new) ((const TF_DataType dtype)
                                  (const int64_t * dims)
                                  (const int num_dims)
                                  (void * data)
                                  (const size_t len)
                                  (func deallocator ((void * data) (size_t len) (void * arg)))
                                  (void * deallocator_arg)))
     
     (decl) (func (Tensor . newFromData) ((const TF_DataType dtype)
                                          (const int64_t * dims)
                                          (const int num_dims)
                                          (void * data)
                                          (const size_t len)))
     
     (decl) (func (Tensor . newFloat) ((const int64_t * dims)
                                       (const int num_dims)
                                       (float * data)))
     
     (decl) (func (Tensor . newFromFloatArray) ((float * values)
                                                (int64_t * shape)
                                                (int rank)
                                                (int value_count)))
     
     (decl) (func (Tensor . newFromIntArray) ((int32_t * values)
                                              (int64_t * shape)
                                              (int rank)
                                              (int value_count)))
     
     (decl) (func (Tensor . newFromInt64Array) ((int64_t * arr)
                                                (int * dims)
                                                (int num_dims)))
     
     (decl) (func (Tensor . newFromBoolArray) ((uint8_t * arr)
                                               (int * dims)
                                               (int num_dims)))
     
     (decl) (func (Tensor . newFromScalarFloat) ((float value)))
     
     (decl) (method (Tensor . free) ())
     
     ;; Tensor info
     (decl) (method (Tensor . type) () (out int))
     (decl) (method (Tensor . numDims) () (out int))
     (decl) (method (Tensor . dim) ((int i)) (out int64_t))
     (decl) (method (Tensor . byteSize) () (out size_t))
     (decl) (method (Tensor . data) () (out void *))

     ;; Traits
     (decl) (func (Tensor . toTF_Tensor) () (out TF_Tensor *))
     ))

(DEFMACRO tensor-source ()
  `(ghost
       (func (Tensor . new) ((const TF_DataType dtype)
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
     (func (Tensor . newFromData) ((const TF_DataType dtype)
                                   (const int64_t * dims)
                                   (const int num_dims)
                                   (void * data)
                                   (const size_t len))
           (let ((Tensor * tensor . #'(malloc (sizeof Tensor))))
             (set ($ tensor ptr) (TF_NewTensor dtype dims num_dims data len 0 0))
             (return tensor)))

     (func (Tensor . newFloat) ((const int64_t * dims)
                                (const int num_dims)
                                (float * data))
           (return (-> Tensor newFromData TF_FLOAT dims num_dims data (sizeof float))))

     (func (Tensor . newFromFloatArray) ((float * values)
                                         (int64_t * shape)
                                         (int rank)
                                         (int value_count))
           (let ((int64_t total_bytes . #'(* value_count (sizeof float)))
                 (int64_t * dims . shape)
                 (TF_Tensor * t . #'(TF_NewTensor TF_FLOAT
                                      dims
                                      rank
                                      values
                                      total_bytes
                                      0 ;; deallocator
                                      0)))
             (return '{ $ptr t })))

     (func (Tensor . newFromIntArray) ((int32_t * values)
                                       (int64_t * shape)
                                       (int rank)
                                       (int value_count))
           (let ((int64_t total_bytes . #'(* value_count (sizeof int32_t)))
                 (int64_t * dims . shape)
                 (TF_Tensor * t . #'(TF_NewTensor TF_INT32
                                      dims
                                      rank
                                      values
                                      total_bytes
                                      0 ;; deallocator
                                      0)))
             (return '{ $ptr t })))

     (func (Tensor . newFromInt64Array) ((int64_t * arr)
                                         (int64_t * dims)
                                         (int num_dims))
           (let ((int64_t total_size . 1))
             (for ((int i . 0)) (< i num_dims) ((++ i))
                  (set total_size (* total_size (nth i dims))))
             (let ((TF_Tensor * t . #'(TF_NewTensor TF_INT64 dims num_dims arr
                                                    (* total_size (sizeof int64_t))
                                                    0 0)))
               (return '{ $ptr t }))))

     (func (Tensor . newFromBoolArray) ((uint8_t * arr)
                                        (int64_t * dims)
                                        (int num_dims))
           (let ((int64_t total_size . 1))
             (for ((int i . 0)) (< i num_dims) ((++ i))
                  (set total_size (* total_size (nth i dims))))
             (let ((TF_Tensor * t . #'(TF_NewTensor TF_BOOL dims num_dims arr
                                                    total_size 0 0)))
               (return '{ $ptr t }))))

     (func (Tensor . newFromScalarFloat) ((float value))
           (let ((float * val_ptr . #'(malloc (sizeof float))))
             (set (* val_ptr) value)
             (let ((TF_Tensor * t . #'(TF_NewTensor TF_FLOAT
                                        0
                                        0
                                        val_ptr
                                        (sizeof float)
                                        0
                                        0)))
               (return '{ $ptr t }))))
     
     ;; Free the tensor
     (method (Tensor . free) ()
             (TF_DeleteTensor ($ this ptr))
             (free this))

     ;; Access tensor info
     (method (Tensor . type) () (out int)
             (return (TF_TensorType ($ this ptr))))

     (method (Tensor . numDims) () (out int)
             (return (TF_NumDims ($ this ptr))))

     (method (Tensor . dim) ((int i)) (out int64_t)
             (return (TF_Dim ($ this ptr) i)))

     (method (Tensor . byteSize) () (out size_t)
             (return (TF_TensorByteSize ($ this ptr))))

     (method (Tensor . data) () (out void *)
             (return (TF_TensorData ($ this ptr))))

     (func (Tensor . toTF_Tensor) () (out TF_Tensor *)
           (return ($ this ptr)))
     ))
