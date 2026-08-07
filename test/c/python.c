#include "python_stub.h"
#include <stdio.h>
PyObject * py_stub_last_exc  = NULL ;
const char * py_stub_last_msg  = NULL ;
int bad  = 0;
void check (const char * what , long got , long want ) {
  if (got  ==  want  )
    printf ("ok   %-42s %ld\n", what , got );
  else
    { /* block276 */
      printf ("FAIL %-42s got %ld want %ld\n", what , got , want );
      (++bad );
    }
}
void check_true (const char * what , int cond ) {
  if (cond )
    printf ("ok   %-42s\n", what );
  else
    { /* block282 */
      printf ("FAIL %-42s\n", what );
      (++bad );
    }
}
void check_str (const char * what , const char * got , const char * want ) {
  if (got  &&  (strcmp (got , want ) ==  0 ) )
    printf ("ok   %-42s %s\n", what , got );
  else
    { /* block288 */
      printf ("FAIL %-42s got %s want %s\n", what , ((got ) ? got  : "(null)"), want );
      (++bad );
    }
}
PyObject * answer (PyObject * self , PyObject * args ) {
  return PyLong_FromLong (42);
}
PyObject * twice (PyObject * self , PyObject * arg ) {
  return PyLong_FromLong ((PyLong_AsLong (arg ) *  2 ));
}
PyObject * sum3 (PyObject * self , PyObject * args ) {
  { /* let293 */
    long a  = 0;
    long b  = 0;
    long c  = 0;
    // ----------
    if (!PyArg_ParseTuple (args , "lll", (&a ), (&b ), (&c )))
      { /* block298 */
        return NULL ;
      }
    return PyLong_FromLong ((a  +  (b  +  c  ) ));
  }
}
static PyMethodDef withdoc_methods [] = { { "answer", answer , METH_NOARGS , NULL }, { "twice", twice , METH_O , "twice what it is given"}, { "sum3", sum3 , METH_VARARGS , NULL }, { NULL , NULL , 0, NULL }};
static PyModuleDef withdoc_module  = { PyModuleDef_HEAD_INIT , "withdoc", "a module that has a doc", -1, withdoc_methods , NULL , NULL , NULL , NULL };
PyMODINIT_FUNC PyInit_withdoc () {
  { /* let303 */
    PyObject * m  = PyModule_Create ((&withdoc_module ));
    // ----------
    if (!m )
      { /* block308 */
        return NULL ;
      }
    return m ;
  }
}
static PyMethodDef nodoc_methods [] = { { "answer", answer , METH_NOARGS , NULL }, { NULL , NULL , 0, NULL }};
static PyModuleDef nodoc_module  = { PyModuleDef_HEAD_INIT , "nodoc", NULL , -1, nodoc_methods , NULL , NULL , NULL , NULL };
PyMODINIT_FUNC PyInit_nodoc () {
  { /* let313 */
    PyObject * m  = PyModule_Create ((&nodoc_module ));
    // ----------
    if (!m )
      { /* block318 */
        return NULL ;
      }
    return m ;
  }
}
int main () {
  { /* let322 */
    PyObject * m  = PyInit_withdoc ();
    // ----------
    check_true ("PyInit_withdoc answers a module", (m  !=  NULL  ));
    { /* let324 */
      PyModuleDef * def  = py_stub_def_of (m );
      // ----------
      check_true ("the module remembers its def", (def  !=  NULL  ));
      check_str ("the def knows its name", py_stub_module_name (def ), "withdoc");
      check ("m_size is -1", py_stub_module_size (def ), -1);
      check_str ("withdoc carries its doc", py_stub_module_doc (def ), "a module that has a doc");
      check ("three methods, then the terminator", ((long)py_stub_method_count (def )), 3);
      check_str ("entry 0 is answer", py_stub_method_name (def , 0), "answer");
      check_str ("entry 1 is twice", py_stub_method_name (def , 1), "twice");
      check_str ("entry 2 is sum3", py_stub_method_name (def , 2), "sum3");
      check ("answer is METH_NOARGS", ((long)py_stub_method_flags (def , 0)), ((long)METH_NOARGS ));
      check ("twice is METH_O", ((long)py_stub_method_flags (def , 1)), ((long)METH_O ));
      check ("sum3 is METH_VARARGS", ((long)py_stub_method_flags (def , 2)), ((long)METH_VARARGS ));
      check_str ("the given method doc is carried", py_stub_method_doc (def , 1), "twice what it is given");
      check_true ("the omitted method doc is null", (py_stub_method_doc (def , 0) ==  NULL  ));
      check ("answer through the table", PyLong_AsLong (py_stub_call (def , 0, NULL , NULL )), 42);
      { /* let326 */
        PyObject * seven  = PyLong_FromLong (7);
        // ----------
        check ("twice through the table", PyLong_AsLong (py_stub_call (def , 1, NULL , seven )), 14);
      }
      { /* let328 */
        PyObject * args  = PyTuple_New (3);
        // ----------
        PyTuple_SetItem (args , 0, PyLong_FromLong (1));
        PyTuple_SetItem (args , 1, PyLong_FromLong (2));
        PyTuple_SetItem (args , 2, PyLong_FromLong (4));
        check ("sum3 through the table", PyLong_AsLong (py_stub_call (def , 2, NULL , args )), 7);
      }
      PyErr_Clear ();
      { /* let330 */
        PyObject * few  = PyTuple_New (1);
        // ----------
        PyTuple_SetItem (few , 0, PyLong_FromLong (1));
        check_true ("a short tuple is refused", (py_stub_call (def , 2, NULL , few ) ==  NULL  ));
        check_true ("and it set an exception", (PyErr_Occurred () !=  NULL  ));
      }
    }
  }
  { /* let332 */
    PyObject * m2  = PyInit_nodoc ();
    // ----------
    check_true ("PyInit_nodoc answers a module", (m2  !=  NULL  ));
    { /* let334 */
      PyModuleDef * d2  = py_stub_def_of (m2 );
      // ----------
      check_str ("nodoc knows its name", py_stub_module_name (d2 ), "nodoc");
      check_true ("an omitted module doc is null", (py_stub_module_doc (d2 ) ==  NULL  ));
      check ("nodoc has one method", ((long)py_stub_method_count (d2 )), 1);
    }
  }
  check_true ("PyInit_withdoc is findable by name", (py_stub_lookup ("PyInit_withdoc") !=  NULL  ));
  check_true ("PyInit_nodoc is findable by name", (py_stub_lookup ("PyInit_nodoc") !=  NULL  ));
  if (bad  ==  0 )
    printf ("\npython: all checks passed\n");
  else
    printf ("\npython: %d check(s) failed\n", bad );
  return bad ;
}
