
(DEFPACKAGE :tf
  (:USE :CL)
  (:EXPORT
      :define))

(IN-PACKAGE :tf)

(import "../Slice/slice.lisp")
(import "status.lisp")
(import "tensor.lisp")
(import "graph.lisp")
(import "session.lisp")
(import "model.lisp")

(DEFMACRO utils-header ()
  `(ghost
       (decl) (func mergeIOSlices ((IOSlice * a) (IOSlice * b)) (out IOSlice *))
       (decl) (func mergeTensorSlices ((TensorSlice * a) (TensorSlice * b)) (out TensorSlice *))
))

(DEFMACRO utils-source ()
  `(ghost

     (func mergeIOSlices ((IOSlice * a) (IOSlice * b)) (out IOSlice *)
           (let ((int total . #'(+ (-> a len) (-> b len)))
                 (IOSlice * result . #'(-> IOSlice newEmpty total)))
             (dotimes (i (-> a len)) (-> result push (nth i (-> a arr))))
             (dotimes (i (-> b len)) (-> result push (nth i (-> b arr))))
             (return result)))

     (func mergeTensorSlices ((TensorSlice * a) (TensorSlice * b)) (out TensorSlice *)
           (let ((int total . #'(+ (-> a len) (-> b len)))
                 (TensorSlice * result . #'(-> TensorSlice newEmpty total)))
             (dotimes (i (-> a len)) (-> result push (nth i (-> a arr))))
             (dotimes (i (-> b len)) (-> result push (nth i (-> b arr))))
             (return result)))
     ))

(DEFMACRO Dense (name input units &KEY ((:input-dims input_dims) NIL))
  (LET* ((name-symb (INTERN name))
         (w-name (FORMAT NIL "~A_w" name))
         (b-name (FORMAT NIL "~A_b" name))
         (w-symb (INTERN w-name))
         (b-symb (INTERN b-name))
         (matmul-name  (FORMAT NIL "~A_matmul" name))
         (biasadd-name (FORMAT NIL "~A_out"    name)))
    `(progn
       ;; Dense weight: [input_dim, units]
       (letn ((TF_Output ,w-symb . #'(-> ($ this graph) Variable ,w-name TF_FLOAT ,input_dims 2))
              (TF_Output ,b-symb . #'(-> ($ this graph) Variable ,b-name TF_FLOAT ,input_dims 1)))
         ;; MatMul(input, weight)
         (letn ((TF_OperationDescription * desc . #'(TF_NewOperation ($ this graph ptr) "MatMul" ,matmul-name)))
           (TF_AddInput desc ,input)
           (TF_AddInput desc ,w-symb)
           (TF_SetAttrBool desc "transpose_a" 0)
           (TF_SetAttrBool desc "transpose_b" 0)
           (letn ((TF_Output matmul_out . #'(cast TF_Output '{ (TF_FinishOperation desc ($ this graph status ptr)) 0 }))
                  ;; BiasAdd(matmul-out, bias)
                  (TF_OperationDescription * desc2 . #'(TF_NewOperation ($ this graph ptr) "BiasAdd" ,biasadd-name)))
             (TF_AddInput desc2 matmul_out)
             (TF_AddInput desc2 ,b-symb)
             (letn ((TF_Operation * op . #'(TF_FinishOperation desc2 ($ this graph status ptr)))
                    (TF_Output ,name-symb . #'(cast TF_Output '{ op 0 })))
               ,name-symb)))))))


(DEFMACRO define ()
  `(cicili
       (header "cicili_tf.h" ()
               (guard __CICILI_TF_H_
                 (include <tensorflow/c/c_api.h>)
                 
                 (status-header)
                 (graph-header)
                 (tensor-header)
                 (BasicSliceHeader "" IOSlice TF_Output 8 () () ())
                 (BasicSliceHeader "" TensorSlice (Tensor *) 8 () () ())
                 (session-header)
                 (utils-header)
                 (model-header)
                 ))
     
     (source "cicili_tf.c" (:std #t :compile #t :link #f)
             (include "cicili_tf.h")
             
             (status-source)
             (graph-source)
             (tensor-source)
             (BasicSliceSource "" IOSlice TF_Output 8 ())
             (BasicSliceSource "" TensorSlice (Tensor *) 8 ())
             (session-source)
             (utils-source)
             (model-source)
             )))

(define)
