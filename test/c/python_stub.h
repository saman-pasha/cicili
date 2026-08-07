/* A stand-in for <Python.h>, covering exactly the subset test/c/python.cicili
 * exercises.
 *
 * WHAT THIS IS FOR. lib/python/ declares CPython's C API to Cicili's type
 * inference, and py-module writes a module's method table, its PyModuleDef and
 * its PyInit_ entry point. Those can be checked two ways: that Cicili resolves
 * the declarations and emits the right structures (which needs no CPython at
 * all), and that the structures match the real interpreter (which needs one).
 * This header covers the first and is honest about not covering the second --
 * the shapes here were written to match CPython's, but nothing in this
 * repository verifies that they do.
 *
 * It is the same arrangement test/cpp/torch_stub.hpp has with libtorch, and
 * for the same reason: a binding with no test at all is the one that rots.
 *
 * WHAT IT DELIBERATELY DOES NOT DO. There is no interpreter here. Py_Initialize
 * does nothing, reference counts are counted but nothing is freed by them, and
 * an object's identity is all that most of these functions preserve. A test
 * that wanted to prove CPython's semantics would need CPython; what this proves
 * is that what Cicili emits is what a C compiler accepts and what the module
 * protocol expects.
 *
 * NUMPY IS A SEPARATE FILE, test/c/numpy_stub.h, which includes this one and
 * layers the array API on top of it. Two things here exist for its sake: kind
 * 5, which is what PyArray_Check looks for, and kind 6 with its own double,
 * because a reduction's answer is not an integer.
 */

#ifndef CICILI_PYTHON_STUB_H
#define CICILI_PYTHON_STUB_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <dlfcn.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef long Py_ssize_t;

/* Everything is one struct. KIND is what it is, VAL is a number when it is a
 * number, ITEMS is the elements when it is a sequence. That is enough for a
 * method table to be walked and a method to be called through it. */
typedef struct PyObject {
  int   kind;                 /* 0 none, 1 long, 2 tuple, 3 str, 4 module,
                               * 5 array (numpy_stub.h), 6 float */
  long  val;
  int   refcnt;
  struct PyObject* items[8];
  int   n;
  const char* s;
  double dval;                /* kind 6 only -- see PyFloat_FromDouble */
} PyObject;

static PyObject _py_none  = { 0, 0, 1, {0}, 0, 0, 0.0 };
static PyObject _py_true  = { 1, 1, 1, {0}, 0, 0, 0.0 };
static PyObject _py_false = { 1, 0, 1, {0}, 0, 0, 0.0 };

#define Py_None  (&_py_none)
#define Py_True  (&_py_true)
#define Py_False (&_py_false)

/* the exception types, as distinct addresses -- only identity is used */
static PyObject _py_exc_type = { 3, 0, 1, {0}, 0, "TypeError", 0.0 };
static PyObject _py_exc_val  = { 3, 0, 1, {0}, 0, "ValueError", 0.0 };
static PyObject _py_exc_rt   = { 3, 0, 1, {0}, 0, "RuntimeError", 0.0 };
#define PyExc_TypeError    (&_py_exc_type)
#define PyExc_ValueError   (&_py_exc_val)
#define PyExc_RuntimeError (&_py_exc_rt)

/* the last exception set, so a test can check that a failing path set one --
 * answering NULL without setting an exception is a real CPython bug and one
 * this stub can catch. */
extern PyObject*   py_stub_last_exc;
extern const char* py_stub_last_msg;

static PyObject* _py_alloc(int kind, long val) {
  PyObject* o = (PyObject*)calloc(1, sizeof(PyObject));
  o->kind = kind; o->val = val; o->refcnt = 1;
  return o;
}

static PyObject* PyLong_FromLong(long v)        { return _py_alloc(1, v); }

/* Floats are kind 6 and keep their value in a double of their own, because a
 * reduction's answer is not an integer and rounding it through `val' would make
 * every mean look wrong for a reason that had nothing to do with the binding. */
static PyObject* PyFloat_FromDouble(double v) {
  PyObject* o = _py_alloc(6, 0); o->dval = v; return o;
}
static double PyFloat_AsDouble(PyObject* o) {
  if (!o) return -1.0;
  return (o->kind == 6) ? o->dval : (double)o->val;
}
static long      PyLong_AsLong(PyObject* o)     { return o ? o->val : -1; }
static PyObject* PyUnicode_FromString(const char* s) {
  PyObject* o = _py_alloc(3, 0); o->s = s; return o;
}

static void Py_IncRef(PyObject* o) { if (o) o->refcnt++; }
static void Py_DecRef(PyObject* o) { if (o) o->refcnt--; }

static void PyErr_SetString(PyObject* type, const char* msg) {
  py_stub_last_exc = type; py_stub_last_msg = msg;
}
static void PyErr_Clear(void) { py_stub_last_exc = NULL; py_stub_last_msg = NULL; }
static PyObject* PyErr_Occurred(void) { return py_stub_last_exc; }

/* tuples, enough to hand arguments to a varargs method */
static PyObject* PyTuple_New(Py_ssize_t n) {
  PyObject* o = _py_alloc(2, 0); o->n = (int)n; return o;
}
static int PyTuple_SetItem(PyObject* t, Py_ssize_t i, PyObject* v) {
  if (!t || i < 0 || i >= 8) return -1;
  t->items[i] = v; if (i + 1 > t->n) t->n = (int)i + 1; return 0;
}
static PyObject*  PyTuple_GetItem(PyObject* t, Py_ssize_t i) {
  return (t && i >= 0 && i < t->n) ? t->items[i] : NULL;
}
static Py_ssize_t PyTuple_Size(PyObject* t) { return t ? t->n : 0; }

/* Only "l" repeated, which is what the test uses. A real PyArg_ParseTuple
 * understands a format language; this one counts 'l's and refuses anything
 * else, so a test that drifts into an unsupported format fails loudly here
 * rather than quietly passing on a format nobody parsed. */
static int PyArg_ParseTuple(PyObject* args, const char* fmt, ...) {
  va_list ap;
  size_t i;
  if (!args || !fmt) return 0;
  for (i = 0; i < strlen(fmt); i++) if (fmt[i] != 'l') return 0;
  if ((int)strlen(fmt) > PyTuple_Size(args)) {
    PyErr_SetString(PyExc_TypeError, "not enough arguments");
    return 0;
  }
  va_start(ap, fmt);
  for (i = 0; i < strlen(fmt); i++) {
    long* slot = va_arg(ap, long*);
    *slot = PyLong_AsLong(PyTuple_GetItem(args, (Py_ssize_t)i));
  }
  va_end(ap);
  return 1;
}

static PyObject* Py_BuildValue(const char* fmt, ...) {
  va_list ap; PyObject* r;
  va_start(ap, fmt);
  r = (fmt && fmt[0] == 'l') ? PyLong_FromLong(va_arg(ap, long)) : Py_None;
  va_end(ap);
  return r;
}

/* the module protocol */
typedef PyObject* (*PyCFunction)(PyObject*, PyObject*);

typedef struct {
  const char* ml_name;
  PyCFunction ml_meth;
  int         ml_flags;
  const char* ml_doc;
} PyMethodDef;

#define METH_VARARGS  0x0001
#define METH_KEYWORDS 0x0002
#define METH_NOARGS   0x0004
#define METH_O        0x0008
#define METH_FASTCALL 0x0080

typedef struct { int unused; } PyModuleDef_Base;
#define PyModuleDef_HEAD_INIT { 0 }

typedef struct {
  PyModuleDef_Base m_base;
  const char*      m_name;
  const char*      m_doc;
  Py_ssize_t       m_size;
  PyMethodDef*     m_methods;
  void*            m_slots;
  void*            m_traverse;
  void*            m_clear;
  void*            m_free;
} PyModuleDef;

/* Keeps the def, so a test can walk the table the macro wrote. */
static PyObject* PyModule_Create(PyModuleDef* def) {
  PyObject* m = _py_alloc(4, 0);
  m->s = def ? def->m_name : NULL;
  m->items[0] = (PyObject*)(void*)def;
  return m;
}
static int PyModule_AddObject(PyObject* m, const char* name, PyObject* v) {
  (void)m; (void)name; (void)v; return 0;
}
static int PyModule_AddIntConstant(PyObject* m, const char* name, long v) {
  (void)m; (void)name; (void)v; return 0;
}

#ifdef __cplusplus
#define PyMODINIT_FUNC extern "C" PyObject*
#else
#define PyMODINIT_FUNC PyObject*
#endif

static void Py_Initialize(void)   { }
static void Py_Finalize(void)     { }
static int  Py_IsInitialized(void) { return 1; }

/* ---- inspection, for the test only -------------------------------------
 *
 * PyObject, PyMethodDef and PyModuleDef are all declared OPAQUE to Cicili
 * (lib/python/cpython.cicili, module.cicili) -- it needs the names to type
 * things with and CPython's layouts are none of its business. Which is right,
 * and it means a Cicili program cannot read a method table's fields.
 *
 * So the reading happens here, in C, behind functions the test declares. The
 * alternative was to declare the layouts to Cicili, which would put this
 * repository in the business of tracking CPython's struct definitions for no
 * benefit to anything but a test.
 */

static int py_stub_method_count(PyModuleDef* d) {
  int n = 0;
  if (!d || !d->m_methods) return -1;
  while (d->m_methods[n].ml_name) n++;
  return n;
}
static const char* py_stub_method_name(PyModuleDef* d, int i) {
  return (d && d->m_methods) ? d->m_methods[i].ml_name : NULL;
}
static const char* py_stub_method_doc(PyModuleDef* d, int i) {
  return (d && d->m_methods) ? d->m_methods[i].ml_doc : NULL;
}
static int py_stub_method_flags(PyModuleDef* d, int i) {
  return (d && d->m_methods) ? d->m_methods[i].ml_flags : -1;
}
/* call the i-th method THROUGH the table, which is how Python calls it */
static PyObject* py_stub_call(PyModuleDef* d, int i, PyObject* self, PyObject* a) {
  if (!d || !d->m_methods || !d->m_methods[i].ml_meth) return NULL;
  return d->m_methods[i].ml_meth(self, a);
}
static const char* py_stub_module_name(PyModuleDef* d) { return d ? d->m_name : NULL; }
static const char* py_stub_module_doc (PyModuleDef* d) { return d ? d->m_doc  : NULL; }
static long        py_stub_module_size(PyModuleDef* d) { return d ? (long)d->m_size : 0; }
/* the def a module object was created from, so a test can start at PyInit_ */
static PyModuleDef* py_stub_def_of(PyObject* m) {
  return (m && m->kind == 4) ? (PyModuleDef*)(void*)m->items[0] : NULL;
}

/* Look a symbol up BY NAME in this process, which is what `import' does --
 * CPython dlopens the .so and dlsyms PyInit_<name>. Calling the entry point
 * directly, as the rest of this test does, proves nothing about its symbol:
 * a call within one translation unit resolves whether the name is mangled or
 * not, which is exactly why a mangled PyInit_ compiles, links, and fails only
 * when an interpreter goes looking. This is the check that sees it.
 *
 * Needs -rdynamic, or the executable's own symbols are not in its dynamic
 * table and every lookup answers null. */
static void* py_stub_lookup(const char* name) { return dlsym(RTLD_DEFAULT, name); }

#ifdef __cplusplus
}
#endif

#endif /* CICILI_PYTHON_STUB_H */
