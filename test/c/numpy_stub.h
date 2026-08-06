/* A stand-in for numpy/arrayobject.h, over the subset test/c/numpy.cicili
 * exercises. Layered on test/c/python_stub.h, which it includes.
 *
 * WHAT THIS IS FOR. lib/python/numpy.cicili declares numpy's C API to Cicili's
 * type inference -- 368 lines of it -- and nothing in this repository touched
 * it. The declarations can be checked two ways: that Cicili resolves them and
 * that the calls it emits are the shape a C compiler accepts (which needs no
 * numpy), and that the signatures match the real library (which needs one).
 * This covers the first and is honest about not covering the second.
 *
 * WHAT IT COVERS, and the choice is deliberate: making an array, asking its
 * shape, reaching its elements, and owning its memory. That is the path where
 * a wrong signature does not raise -- it reads the wrong address, silently.
 * PyArray_GETPTR2 against real strides is the sharpest case and the reason
 * the strides here are computed rather than faked.
 *
 * WHAT IT DOES NOT COVER: the reductions (Sum, Mean, Std, ArgMax...), sorting,
 * casting, Concatenate, the FROM_OTF/FROMANY/FromAny converters, and the
 * descr machinery beyond DescrFromType. Those are declared in
 * lib/python/numpy.cicili and remain untested. A stub that pretended to
 * implement numpy's reductions would be asserting its own arithmetic, not the
 * binding.
 *
 * Types are doubles and int64 only. Everything is C-contiguous.
 */

#ifndef CICILI_NUMPY_STUB_H
#define CICILI_NUMPY_STUB_H

#include "python_stub.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef long npy_intp;

/* the type numbers this stub knows, with numpy's values */
#define NPY_BOOL    0
#define NPY_INT32   5
#define NPY_INT64   7
#define NPY_FLOAT   11
#define NPY_DOUBLE  12

/* NPY_ORDER */
#define NPY_ANYORDER     -1
#define NPY_CORDER        0
#define NPY_FORTRANORDER  1

/* the flags that matter to ownership */
#define NPY_ARRAY_C_CONTIGUOUS 0x0001
#define NPY_ARRAY_F_CONTIGUOUS 0x0002
#define NPY_ARRAY_OWNDATA      0x0004
#define NPY_ARRAY_ALIGNED      0x0100
#define NPY_ARRAY_WRITEABLE    0x0400

typedef struct { int type_num; npy_intp elsize; } PyArray_Descr;
typedef struct { npy_intp* ptr; int len; }        PyArray_Dims;

typedef struct PyArrayObject {
  PyObject   ob;                /* so PyArray_Check has something to look at */
  int        nd;
  npy_intp   dims[4];
  npy_intp   strides[4];
  int        type_num;
  npy_intp   elsize;
  int        flags;
  char*      data;
  int        owns;              /* whether data was allocated here */
  PyObject*  base;
} PyArrayObject;

/* import_array is COUNTED, not stubbed away. Its rule -- once, in the module
 * init, before any other numpy call -- is the one that segfaults when broken,
 * and counting is what lets a test say it happened exactly once. */
extern int npy_stub_imports;
static int _import_array(void) { npy_stub_imports++; return 0; }
static int npy_stub_import_count(void) { return npy_stub_imports; }

static npy_intp _npy_itemsize(int t) {
  switch (t) {
    case NPY_BOOL:  return 1;
    case NPY_INT32: case NPY_FLOAT: return 4;
    default: return 8;   /* INT64, DOUBLE */
  }
}

/* C-contiguous strides, in BYTES, computed right to left -- the last axis
 * moves by one element and each one before it by the product of everything
 * inside it. Faking these would make PyArray_GETPTR2 agree with itself and
 * with nothing else, which is the one thing this stub must not do. */
static void _npy_fill_strides(PyArrayObject* a) {
  int i;
  npy_intp acc = a->elsize;
  for (i = a->nd - 1; i >= 0; i--) { a->strides[i] = acc; acc *= a->dims[i]; }
}

static PyArrayObject* _npy_new(int nd, npy_intp* dims, int typenum, char* data) {
  PyArrayObject* a = (PyArrayObject*)calloc(1, sizeof(PyArrayObject));
  npy_intp n = 1;
  int i;
  if (nd > 4) nd = 4;
  a->nd = nd;
  a->type_num = typenum;
  a->elsize = _npy_itemsize(typenum);
  for (i = 0; i < nd; i++) { a->dims[i] = dims[i]; n *= dims[i]; }
  _npy_fill_strides(a);
  a->flags = NPY_ARRAY_C_CONTIGUOUS | NPY_ARRAY_ALIGNED | NPY_ARRAY_WRITEABLE;
  if (data) { a->data = data; a->owns = 0; }
  else      { a->data = (char*)calloc((size_t)(n * a->elsize), 1);
              a->owns = 1; a->flags |= NPY_ARRAY_OWNDATA; }
  a->ob.kind = 5;
  return a;
}

static PyObject* PyArray_SimpleNew(int nd, npy_intp* dims, int typenum) {
  return (PyObject*)(void*)_npy_new(nd, dims, typenum, NULL);
}
static PyObject* PyArray_SimpleNewFromData(int nd, npy_intp* dims, int typenum, void* data) {
  return (PyObject*)(void*)_npy_new(nd, dims, typenum, (char*)data);
}
static PyObject* PyArray_ZEROS(int nd, npy_intp* dims, int typenum, int f_order) {
  (void)f_order;  /* C order only here */
  return (PyObject*)(void*)_npy_new(nd, dims, typenum, NULL);
}
static PyObject* PyArray_EMPTY(int nd, npy_intp* dims, int typenum, int f_order) {
  return PyArray_ZEROS(nd, dims, typenum, f_order);
}
static PyArray_Descr* PyArray_DescrFromType(int typenum) {
  PyArray_Descr* d = (PyArray_Descr*)calloc(1, sizeof(PyArray_Descr));
  d->type_num = typenum; d->elsize = _npy_itemsize(typenum);
  return d;
}

static int PyArray_Check(PyObject* o) {
  return (o && o->kind == 5) ? 1 : 0;
}

static void*    PyArray_DATA(PyArrayObject* a)     { return a ? (void*)a->data : NULL; }
static char*    PyArray_BYTES(PyArrayObject* a)    { return a ? a->data : NULL; }
static int      PyArray_NDIM(PyArrayObject* a)     { return a ? a->nd : 0; }
static npy_intp PyArray_DIM(PyArrayObject* a, int i)      { return a ? a->dims[i] : 0; }
static npy_intp* PyArray_DIMS(PyArrayObject* a)    { return a ? a->dims : NULL; }
static npy_intp* PyArray_SHAPE(PyArrayObject* a)   { return PyArray_DIMS(a); }
static npy_intp* PyArray_STRIDES(PyArrayObject* a) { return a ? a->strides : NULL; }
static npy_intp PyArray_STRIDE(PyArrayObject* a, int i)   { return a ? a->strides[i] : 0; }
static int      PyArray_TYPE(PyArrayObject* a)     { return a ? a->type_num : -1; }
static npy_intp PyArray_ITEMSIZE(PyArrayObject* a) { return a ? a->elsize : 0; }
static npy_intp PyArray_SIZE(PyArrayObject* a) {
  npy_intp n = 1; int i;
  if (!a) return 0;
  for (i = 0; i < a->nd; i++) n *= a->dims[i];
  return n;
}
static npy_intp PyArray_NBYTES(PyArrayObject* a) {
  return a ? PyArray_SIZE(a) * a->elsize : 0;
}
static PyArray_Descr* PyArray_DESCR(PyArrayObject* a) {
  return a ? PyArray_DescrFromType(a->type_num) : NULL;
}
static PyObject* PyArray_BASE(PyArrayObject* a) { return a ? a->base : NULL; }

static int PyArray_FLAGS(PyArrayObject* a)              { return a ? a->flags : 0; }
static int PyArray_CHKFLAGS(PyArrayObject* a, int f)    { return a && (a->flags & f) == f; }
static int PyArray_IS_C_CONTIGUOUS(PyArrayObject* a)    { return PyArray_CHKFLAGS(a, NPY_ARRAY_C_CONTIGUOUS); }
static int PyArray_IS_F_CONTIGUOUS(PyArrayObject* a)    { return PyArray_CHKFLAGS(a, NPY_ARRAY_F_CONTIGUOUS); }
static int PyArray_ISWRITEABLE(PyArrayObject* a)        { return PyArray_CHKFLAGS(a, NPY_ARRAY_WRITEABLE); }
static int PyArray_ISALIGNED(PyArrayObject* a)          { return PyArray_CHKFLAGS(a, NPY_ARRAY_ALIGNED); }
static void PyArray_ENABLEFLAGS(PyArrayObject* a, int f) { if (a) a->flags |= f; }
static void PyArray_CLEARFLAGS(PyArrayObject* a, int f)  { if (a) a->flags &= ~f; }

/* base is what keeps a borrowed buffer alive. Setting it STEALS a reference,
 * which is why nothing here increments -- getting that backwards is a leak in
 * one direction and a use-after-free in the other. */
static int PyArray_SetBaseObject(PyArrayObject* a, PyObject* base) {
  if (!a) return -1;
  a->base = base;
  return 0;
}

static void* PyArray_GETPTR1(PyArrayObject* a, npy_intp i) {
  return a ? (void*)(a->data + i * a->strides[0]) : NULL;
}
static void* PyArray_GETPTR2(PyArrayObject* a, npy_intp i, npy_intp j) {
  return a ? (void*)(a->data + i * a->strides[0] + j * a->strides[1]) : NULL;
}
static void* PyArray_GETPTR3(PyArrayObject* a, npy_intp i, npy_intp j, npy_intp k) {
  return a ? (void*)(a->data + i * a->strides[0] + j * a->strides[1]
                             + k * a->strides[2]) : NULL;
}

/* ---- inspection, for the test only ------------------------------------
 * PyArrayObject is opaque to Cicili, as it should be, so a test cannot cast
 * a PyObject * to it. This is that cast, in C. */
static PyArrayObject* npy_stub_as_array(PyObject* o) {
  return PyArray_Check(o) ? (PyArrayObject*)(void*)o : NULL;
}
static double npy_stub_get_d(void* p)            { return *(double*)p; }
static void   npy_stub_set_d(void* p, double v)  { *(double*)p = v; }
static double npy_stub_data_at(PyArrayObject* a, npy_intp flat) {
  return ((double*)(void*)a->data)[flat];
}

#ifdef __cplusplus
}
#endif

#endif /* CICILI_NUMPY_STUB_H */
