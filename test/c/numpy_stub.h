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
 * THE REDUCTIONS ARE HERE TOO -- Sum, Prod, Mean, Max, Min, ArgMax, ArgMin,
 * Std, CumSum -- but read the note above them before believing the arithmetic.
 * What they exist to make checkable is argument ORDER, the axis convention and
 * `out' handling; a stub that pretended to implement numpy's mean would be
 * asserting its own sum loop rather than the binding.
 *
 * WHAT IT DOES NOT COVER: sorting, casting, Concatenate, the
 * FROM_OTF/FROMANY/FromAny converters, and the descr machinery beyond
 * DescrFromType. Those are declared in lib/python/numpy.cicili and remain
 * untested.
 *
 * Types are doubles and int64 only. Everything is C-contiguous.
 */

#ifndef CICILI_NUMPY_STUB_H
#define CICILI_NUMPY_STUB_H

#include "python_stub.h"
#include <math.h>          /* PyArray_Std takes a square root */

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

/* the PyObject * -> PyArrayObject * cast, defined here because PyObject_CallObject
 * below needs it and npy_stub_as_array (the name the test uses) is further down */
static PyArrayObject* npy_stub_as_array_fwd(PyObject* o) {
  return PyArray_Check(o) ? (PyArrayObject*)(void*)o : NULL;
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

/* ---- reductions --------------------------------------------------------
 *
 * WHAT THESE ARE FOR, because it is not the arithmetic. A stub that reimplements
 * numpy's mean is asserting its own sum loop, which proves nothing about
 * lib/python/numpy.cicili. What CAN be checked is the binding: that a call
 * declared PyArray_Sum(a, axis, rtype, out) reaches the far side with those
 * four things in that order, that the axis convention is the one numpy 2 uses,
 * that `out' is written when given and allocated when not, and that the answer
 * comes back as an OBJECT rather than a C double.
 *
 * So the arithmetic here is the simplest thing that makes those checkable, and
 * the test asserts the wiring. Doubles only, one or two dimensions, C order.
 *
 * THE AXIS CONVENTION IS THE TRAP, and lib/python/numpy.cicili:271 already
 * warns about it: "over everything" is NPY_RAVEL_AXIS, and it is NOT
 * NPY_MAXDIMS -- that meant it under numpy 1 and is now just the dimension
 * limit, 64, which is out of range and raises. The two are given different
 * values here so a test can tell them apart, which is the whole point of
 * having both.
 *
 * NPY_RAVEL_AXIS is INT_MIN in numpy 2. That is written from the
 * documentation rather than checked against the header, which is this stub's
 * standing limitation and not a new one.
 */

#define NPY_MAXDIMS      64
#define NPY_RAVEL_AXIS   (-2147483647 - 1)   /* INT_MIN */
#define NPY_NOTYPE       (-1)

/* op codes for the one loop underneath all of them */
#define _NPY_SUM 0
#define _NPY_PROD 1
#define _NPY_MAX 2
#define _NPY_MIN 3
#define _NPY_ARGMAX 4
#define _NPY_ARGMIN 5
#define _NPY_MEAN 6

static double _npy_fold(const PyArrayObject* a, int op, npy_intp start,
                        npy_intp stride, npy_intp n)
{
  const double* d = (const double*)(const void*)a->data;
  npy_intp step = stride / (npy_intp)sizeof(double);
  npy_intp i;
  double acc = (op == _NPY_PROD) ? 1.0 : 0.0;
  npy_intp best = 0;

  if (n <= 0) return 0.0;

  if (op == _NPY_MAX || op == _NPY_MIN || op == _NPY_ARGMAX || op == _NPY_ARGMIN) {
    best = 0;
    for (i = 1; i < n; i++) {
      double v = d[start + i * step], b = d[start + best * step];
      if ((op == _NPY_MAX || op == _NPY_ARGMAX) ? (v > b) : (v < b)) best = i;
    }
    if (op == _NPY_ARGMAX || op == _NPY_ARGMIN) return (double)best;
    return d[start + best * step];
  }

  for (i = 0; i < n; i++) {
    double v = d[start + i * step];
    if (op == _NPY_PROD) acc *= v; else acc += v;
  }
  return (op == _NPY_MEAN) ? acc / (double)n : acc;
}

/* AXIS is honoured, which is what makes a wrong argument order visible: on a
 * matrix that is not square, axis 0 and axis 1 give answers of different
 * lengths, so a caller that passed rtype where axis belongs cannot match. */
static PyObject* _npy_reduce(PyArrayObject* a, int axis, int op, PyArrayObject* out)
{
  npy_intp i;

  if (!a) return NULL;

  if (axis == NPY_RAVEL_AXIS || a->nd == 1) {
    /* over everything: one number, and it comes back as an object */
    npy_intp n = PyArray_SIZE(a);
    double v = _npy_fold(a, op, 0, a->elsize, n);
    if (out) { ((double*)(void*)out->data)[0] = v; }
    return (op == _NPY_ARGMAX || op == _NPY_ARGMIN)
             ? PyLong_FromLong((long)v) : PyFloat_FromDouble(v);
  }

  if (a->nd == 2 && (axis == 0 || axis == 1)) {
    npy_intp keep = (axis == 0) ? a->dims[1] : a->dims[0];
    npy_intp over = (axis == 0) ? a->dims[0] : a->dims[1];
    npy_intp stride = (axis == 0) ? a->strides[0] : a->strides[1];
    npy_intp step   = (axis == 0) ? a->strides[1] : a->strides[0];

    PyArrayObject* result = out;
    if (!result) {
      npy_intp dims[1];
      dims[0] = keep;
      result = (PyArrayObject*)(void*)PyArray_SimpleNew(1, dims,
                 (op == _NPY_ARGMAX || op == _NPY_ARGMIN) ? NPY_DOUBLE : NPY_DOUBLE);
    }
    for (i = 0; i < keep; i++) {
      npy_intp start = (i * step) / (npy_intp)sizeof(double);
      ((double*)(void*)result->data)[i] = _npy_fold(a, op, start, stride, over);
    }
    return (PyObject*)(void*)result;
  }

  PyErr_SetString(PyExc_ValueError, "axis out of range");
  return NULL;
}

static PyObject* PyArray_Sum(PyArrayObject* a, int axis, int rtype, PyArrayObject* out)
{ (void)rtype; return _npy_reduce(a, axis, _NPY_SUM, out); }
static PyObject* PyArray_Prod(PyArrayObject* a, int axis, int rtype, PyArrayObject* out)
{ (void)rtype; return _npy_reduce(a, axis, _NPY_PROD, out); }
static PyObject* PyArray_Mean(PyArrayObject* a, int axis, int rtype, PyArrayObject* out)
{ (void)rtype; return _npy_reduce(a, axis, _NPY_MEAN, out); }
static PyObject* PyArray_Max(PyArrayObject* a, int axis, PyArrayObject* out)
{ return _npy_reduce(a, axis, _NPY_MAX, out); }
static PyObject* PyArray_Min(PyArrayObject* a, int axis, PyArrayObject* out)
{ return _npy_reduce(a, axis, _NPY_MIN, out); }
static PyObject* PyArray_ArgMax(PyArrayObject* a, int axis, PyArrayObject* out)
{ return _npy_reduce(a, axis, _NPY_ARGMAX, out); }
static PyObject* PyArray_ArgMin(PyArrayObject* a, int axis, PyArrayObject* out)
{ return _npy_reduce(a, axis, _NPY_ARGMIN, out); }

/* VARIANCE non-zero answers the variance instead of the deviation -- the one
 * reduction with a fifth argument, and the one where a binding that dropped it
 * would still compile and quietly answer the wrong thing. */
static PyObject* PyArray_Std(PyArrayObject* a, int axis, int rtype,
                             PyArrayObject* out, int variance)
{
  npy_intp n, i;
  double mean = 0, acc = 0;
  const double* d;

  (void)rtype; (void)axis; (void)out;
  if (!a) return NULL;

  d = (const double*)(const void*)a->data;
  n = PyArray_SIZE(a);
  if (n <= 0) return PyFloat_FromDouble(0.0);

  for (i = 0; i < n; i++) mean += d[i];
  mean /= (double)n;
  for (i = 0; i < n; i++) acc += (d[i] - mean) * (d[i] - mean);
  acc /= (double)n;

  return PyFloat_FromDouble(variance ? acc : sqrt(acc));
}

/* A running total, so the answer is an ARRAY the size of the input rather than
 * one number -- the shape a caller has to get right. */
static PyObject* PyArray_CumSum(PyArrayObject* a, int axis, int rtype, PyArrayObject* out)
{
  npy_intp n, i;
  double acc = 0;
  const double* d;
  PyArrayObject* result;

  (void)rtype; (void)axis;
  if (!a) return NULL;

  n = PyArray_SIZE(a);
  d = (const double*)(const void*)a->data;

  result = out;
  if (!result) {
    npy_intp dims[1];
    dims[0] = n;
    result = (PyArrayObject*)(void*)PyArray_SimpleNew(1, dims, NPY_DOUBLE);
  }
  for (i = 0; i < n; i++) { acc += d[i]; ((double*)(void*)result->data)[i] = acc; }
  return (PyObject*)(void*)result;
}

/* ---- import, getattr, call ----------------------------------------------
 *
 * These three are CPython's and not numpy's, so python_stub.h would be their
 * home -- except that what makes them worth having is calling numpy.mean on an
 * ARRAY, and python_stub.h is the lower layer and does not know what one is.
 * They live here, above both, which is the only place that does.
 *
 * WHAT THEY EXIST FOR is np_call in lib/python/numpy.cicili: numpy's C API
 * covers the array object and the reductions, and everything else -- linspace,
 * percentile, linalg -- is reached by importing the module the way Python does.
 * That path is four calls with two different reference rules (GetAttrString
 * answers a new reference, PyTuple_SetItem steals) and it is the one every
 * example wrote out by hand.
 *
 * The dispatch below is four names deep. It is not numpy and does not pretend
 * to be: what a test can assert here is that the import/getattr/call chain
 * reaches a function with the argument in the tuple and hands a reference back.
 */

#define _NPY_KIND_MODULE   4
#define _NPY_KIND_CALLABLE 7

static PyObject* PyImport_ImportModule(const char* name) {
  PyObject* m;
  /* only numpy: an import of anything else fails, which is what makes a test
   * for the failing path possible */
  if (!name || strcmp(name, "numpy") != 0) {
    PyErr_SetString(PyExc_RuntimeError, "no such module in the stub");
    return NULL;
  }
  m = _py_alloc(_NPY_KIND_MODULE, 0);
  m->s = "numpy";
  return m;
}

static PyObject* PyObject_GetAttrString(PyObject* o, const char* name) {
  PyObject* f;
  if (!o || o->kind != _NPY_KIND_MODULE) {
    PyErr_SetString(PyExc_TypeError, "not a module");
    return NULL;
  }
  f = _py_alloc(_NPY_KIND_CALLABLE, 0);
  f->s = name;                  /* NEW reference, which is CPython's rule */
  return f;
}

static PyObject* PyObject_CallObject(PyObject* fn, PyObject* args) {
  PyArrayObject* a;
  int op;

  if (!fn || fn->kind != _NPY_KIND_CALLABLE) {
    PyErr_SetString(PyExc_TypeError, "not callable");
    return NULL;
  }
  if (!args || args->n < 1) {
    PyErr_SetString(PyExc_TypeError, "wanted one argument");
    return NULL;
  }
  a = npy_stub_as_array_fwd(args->items[0]);
  if (!a) {
    PyErr_SetString(PyExc_TypeError, "wanted an array");
    return NULL;
  }

  if      (strcmp(fn->s, "sum")  == 0) op = _NPY_SUM;
  else if (strcmp(fn->s, "mean") == 0) op = _NPY_MEAN;
  else if (strcmp(fn->s, "max")  == 0) op = _NPY_MAX;
  else if (strcmp(fn->s, "min")  == 0) op = _NPY_MIN;
  else { PyErr_SetString(PyExc_ValueError, "the stub knows sum, mean, max, min"); return NULL; }

  return _npy_reduce(a, NPY_RAVEL_AXIS, op, NULL);
}

/* ---- inspection, for the test only ------------------------------------
 * PyArrayObject is opaque to Cicili, as it should be, so a test cannot cast
 * a PyObject * to it. This is that cast, in C. */
static PyArrayObject* npy_stub_as_array(PyObject* o) {
  return npy_stub_as_array_fwd(o);
}
static double npy_stub_get_d(void* p)            { return *(double*)p; }
static void   npy_stub_set_d(void* p, double v)  { *(double*)p = v; }
/* NULL-tolerant on purpose. A reduction that was handed the wrong argument
 * answers NULL, and a test that segfaults on the way to reporting that says
 * far less than one that prints which check failed. */
static double npy_stub_data_at(PyArrayObject* a, npy_intp flat) {
  if (!a) return -1.0;
  return ((double*)(void*)a->data)[flat];
}

#ifdef __cplusplus
}
#endif

#endif /* CICILI_NUMPY_STUB_H */
