#include "numpy_stub.h"
#include <stdio.h>
PyObject * py_stub_last_exc  = NULL ;
const char * py_stub_last_msg  = NULL ;
int npy_stub_imports  = 0;
static int py_open () {
  Py_Initialize ();
  return _import_array ();
}
static void py_finalize (int * unused ) {
  ((void)unused );
  Py_Finalize ();
}
static void py_decref (PyObject ** o ) {
  if (*o )
    { /* block288 */
      Py_DecRef ((*o ));
    }
}
static double np_double (PyObject * o ) {
  ({ /* letn294 */
    PyObject * r  __attribute__((__cleanup__(py_decref ))) = o ;
    // ----------
    if (!r )
      { /* block299 */
        { /* block301 */
          PyErr_Print ();
          return -1.0;
        }
      }
    return PyFloat_AsDouble (r );
  });
}
static long np_long (PyObject * o ) {
  ({ /* letn305 */
    PyObject * r  __attribute__((__cleanup__(py_decref ))) = o ;
    // ----------
    if (!r )
      { /* block310 */
        { /* block312 */
          PyErr_Print ();
          return -1;
        }
      }
    return PyLong_AsLong (r );
  });
}
static PyObject * np_shape (int count , npy_intp * ds ) {
  { /* let315 */
    PyObject * tuple  = PyTuple_New (count );
    // ----------
    if (!tuple )
      { /* block320 */
        return NULL ;
      }
    for (int i  = 0; (i  <  count  ); (++i )) {
        PyTuple_SetItem (tuple , i , PyLong_FromLong (((long)ds [i ])));
    }
    return tuple ;
  }
}
static PyObject * np_call (const char * name , PyObject * a ) {
  ({ /* letn327 */
    PyObject * mod  __attribute__((__cleanup__(py_decref ))) = PyImport_ImportModule ("numpy");
    // ----------
    if (!mod )
      { /* block332 */
        return NULL ;
      }
    ({ /* letn335 */
      PyObject * fn  __attribute__((__cleanup__(py_decref ))) = PyObject_GetAttrString (mod , name );
      // ----------
      if (!fn )
        { /* block340 */
          return NULL ;
        }
      ({ /* letn343 */
        PyObject * args  __attribute__((__cleanup__(py_decref ))) = PyTuple_New (1);
        // ----------
        if (!args )
          { /* block348 */
            return NULL ;
          }
        Py_IncRef (a );
        PyTuple_SetItem (args , 0, a );
        return PyObject_CallObject (fn , args );
      });
    });
  });
}
int bad  = 0;
void check (const char * what , long got , long want ) {
  if (got  ==  want  )
    printf ("ok   %-44s %ld\n", what , got );
  else
    { /* block354 */
      printf ("FAIL %-44s got %ld want %ld\n", what , got , want );
      (++bad );
    }
}
void check_d (const char * what , double got , double want ) {
  if (((((got  -  want  ) >  0.0 )) ? (got  -  want  ) : (want  -  got  )) <  1.0e-6 )
    printf ("ok   %-44s %g\n", what , got );
  else
    { /* block360 */
      printf ("FAIL %-44s got %g want %g\n", what , got , want );
      (++bad );
    }
}
void check_true (const char * what , int cond ) {
  if (cond )
    printf ("ok   %-44s\n", what );
  else
    { /* block366 */
      printf ("FAIL %-44s\n", what );
      (++bad );
    }
}
int main () {
  check ("import_array has not run yet", ((long)npy_stub_import_count ()), 0);
  check ("_import_array succeeds", ((long)_import_array ()), 0);
  check ("and it ran exactly once", ((long)npy_stub_import_count ()), 1);
  { /* let370 */
    npy_intp dims [2];
    // ----------
    dims [0] = 3;
    dims [1] = 4;
    { /* let372 */
      PyObject * o  = PyArray_SimpleNew (2, dims , NPY_DOUBLE );
      // ----------
      check_true ("PyArray_SimpleNew answers an array", PyArray_Check (o ));
      { /* let374 */
        PyArrayObject * a  = npy_stub_as_array (o );
        // ----------
        check ("NDIM is 2", ((long)PyArray_NDIM (a )), 2);
        check ("DIM 0 is 3", PyArray_DIM (a , 0), 3);
        check ("DIM 1 is 4", PyArray_DIM (a , 1), 4);
        check ("SIZE is 12", PyArray_SIZE (a ), 12);
        check ("ITEMSIZE is 8", PyArray_ITEMSIZE (a ), 8);
        check ("NBYTES is 96", PyArray_NBYTES (a ), 96);
        check ("TYPE is NPY_DOUBLE", ((long)PyArray_TYPE (a )), ((long)NPY_DOUBLE ));
        check ("STRIDE 0 is a row", PyArray_STRIDE (a , 0), 32);
        check ("STRIDE 1 is an element", PyArray_STRIDE (a , 1), 8);
        check_true ("it is C-contiguous", PyArray_IS_C_CONTIGUOUS (a ));
        check_true ("it is writeable", PyArray_ISWRITEABLE (a ));
        check_true ("it owns its data", PyArray_CHKFLAGS (a , NPY_ARRAY_OWNDATA ));
        npy_stub_set_d (PyArray_GETPTR2 (a , 0, 0), 1.0);
        npy_stub_set_d (PyArray_GETPTR2 (a , 1, 2), 7.5);
        npy_stub_set_d (PyArray_GETPTR2 (a , 2, 3), 9.25);
        check_d ("GETPTR2(0,0) lands at flat 0", npy_stub_data_at (a , 0), 1.0);
        check_d ("GETPTR2(1,2) lands at flat 6", npy_stub_data_at (a , 6), 7.5);
        check_d ("GETPTR2(2,3) lands at flat 11", npy_stub_data_at (a , 11), 9.25);
        check_d ("GETPTR2 reads what it wrote", npy_stub_get_d (PyArray_GETPTR2 (a , 1, 2)), 7.5);
        check_true ("DATA is the buffer itself", (PyArray_DATA (a ) ==  PyArray_GETPTR1 (a , 0) ));
        check_d ("GETPTR1(2) is the start of row 2", npy_stub_get_d (PyArray_GETPTR1 (a , 2)), 0.0);
        npy_stub_set_d (PyArray_GETPTR1 (a , 2), 4.5);
        check_d ("and row 2 starts at flat 8", npy_stub_data_at (a , 8), 4.5);
        PyArray_CLEARFLAGS (a , NPY_ARRAY_WRITEABLE );
        check_true ("CLEARFLAGS took the flag off", (!PyArray_ISWRITEABLE (a )));
        PyArray_ENABLEFLAGS (a , NPY_ARRAY_WRITEABLE );
        check_true ("ENABLEFLAGS put it back", PyArray_ISWRITEABLE (a ));
      }
    }
  }
  { /* let376 */
    double buf [4];
    npy_intp d1 [1];
    // ----------
    buf [0] = 10.0;
    buf [1] = 20.0;
    buf [2] = 30.0;
    buf [3] = 40.0;
    d1 [0] = 4;
    { /* let378 */
      PyObject * o  = PyArray_SimpleNewFromData (1, d1 , NPY_DOUBLE , ((void *)buf ));
      // ----------
      { /* let380 */
        PyArrayObject * a  = npy_stub_as_array (o );
        // ----------
        check ("the borrowed array has 4 elements", PyArray_SIZE (a ), 4);
        check_d ("it sees the caller's data", npy_stub_get_d (PyArray_GETPTR1 (a , 2)), 30.0);
        check_true ("a borrowed buffer does not own its data", (!PyArray_CHKFLAGS (a , NPY_ARRAY_OWNDATA )));
        npy_stub_set_d (PyArray_GETPTR1 (a , 1), 99.0);
        check_d ("a write reaches the caller's buffer", buf [1], 99.0);
        check_true ("base is unset until it is set", (PyArray_BASE (a ) ==  NULL  ));
        { /* let382 */
          PyObject * owner  = PyLong_FromLong (1);
          // ----------
          check ("SetBaseObject succeeds", ((long)PyArray_SetBaseObject (a , owner )), 0);
          check_true ("and base is what was set", (PyArray_BASE (a ) ==  owner  ));
        }
      }
    }
  }
  { /* let384 */
    npy_intp rdims [2];
    // ----------
    rdims [0] = 2;
    rdims [1] = 3;
    { /* let386 */
      PyObject * ro  = PyArray_SimpleNew (2, rdims , NPY_DOUBLE );
      // ----------
      { /* let388 */
        PyArrayObject * m  = npy_stub_as_array (ro );
        // ----------
        for (long r  = 0; (r  <  2 ); (++r )) {
            for (long c  = 0; (c  <  3 ); (++c )) {
                npy_stub_set_d (PyArray_GETPTR2 (m , r , c ), ((double)((r  *  3 ) +  c  +  1 )));
            }
        }
        check_d ("Sum over everything", PyFloat_AsDouble (PyArray_Sum (m , NPY_RAVEL_AXIS , NPY_NOTYPE , NULL )), 21.0);
        check_d ("Mean over everything", PyFloat_AsDouble (PyArray_Mean (m , NPY_RAVEL_AXIS , NPY_NOTYPE , NULL )), 3.5);
        check_d ("Max over everything", PyFloat_AsDouble (PyArray_Max (m , NPY_RAVEL_AXIS , NULL )), 6.0);
        check_d ("Min over everything", PyFloat_AsDouble (PyArray_Min (m , NPY_RAVEL_AXIS , NULL )), 1.0);
        check ("ArgMax is an index, not a value", PyLong_AsLong (PyArray_ArgMax (m , NPY_RAVEL_AXIS , NULL )), 5);
        check ("ArgMin is an index, not a value", PyLong_AsLong (PyArray_ArgMin (m , NPY_RAVEL_AXIS , NULL )), 0);
        check_d ("Prod over everything", PyFloat_AsDouble (PyArray_Prod (m , NPY_RAVEL_AXIS , NPY_NOTYPE , NULL )), 720.0);
        check_true ("NPY_MAXDIMS is not the same number", (NPY_MAXDIMS  !=  NPY_RAVEL_AXIS  ));
        py_stub_last_exc  = NULL ;
        check_true ("and passing it answers nothing", (PyArray_Sum (m , NPY_MAXDIMS , NPY_NOTYPE , NULL ) ==  NULL  ));
        check_true ("having set an exception", (py_stub_last_exc  ==  PyExc_ValueError  ));
        { /* let396 */
          PyObject * c0  = PyArray_Sum (m , 0, NPY_NOTYPE , NULL );
          // ----------
          { /* let398 */
            PyArrayObject * ca  = npy_stub_as_array (c0 );
            // ----------
            check ("axis 0 answers one per column", PyArray_SIZE (ca ), 3);
            check_d ("column 0 is 1+4", npy_stub_data_at (ca , 0), 5.0);
            check_d ("column 2 is 3+6", npy_stub_data_at (ca , 2), 9.0);
          }
        }
        { /* let400 */
          PyObject * c1  = PyArray_Sum (m , 1, NPY_NOTYPE , NULL );
          // ----------
          { /* let402 */
            PyArrayObject * ra  = npy_stub_as_array (c1 );
            // ----------
            check ("axis 1 answers one per row", PyArray_SIZE (ra ), 2);
            check_d ("row 0 is 1+2+3", npy_stub_data_at (ra , 0), 6.0);
            check_d ("row 1 is 4+5+6", npy_stub_data_at (ra , 1), 15.0);
          }
        }
        { /* let404 */
          npy_intp odims [1];
          // ----------
          odims [0] = 3;
          { /* let406 */
            PyObject * oo  = PyArray_SimpleNew (1, odims , NPY_DOUBLE );
            // ----------
            { /* let408 */
              PyArrayObject * oa  = npy_stub_as_array (oo );
              // ----------
              { /* let410 */
                PyObject * back  = PyArray_Sum (m , 0, NPY_NOTYPE , oa );
                // ----------
                check_true ("an out array is answered back", (npy_stub_as_array (back ) ==  oa  ));
                check_d ("and it was written into", npy_stub_data_at (oa , 1), 7.0);
              }
            }
          }
        }
        { /* let412 */
          double dev  = PyFloat_AsDouble (PyArray_Std (m , NPY_RAVEL_AXIS , NPY_NOTYPE , NULL , 0));
          double var  = PyFloat_AsDouble (PyArray_Std (m , NPY_RAVEL_AXIS , NPY_NOTYPE , NULL , 1));
          // ----------
          check_d ("variance of 1..6", var , (35.0 /  12.0 ));
          check_d ("and the deviation is its root", (dev  *  dev  ), var );
          check_true ("so the flag changes the answer", (dev  !=  var  ));
        }
        { /* let414 */
          PyObject * cs  = PyArray_CumSum (m , NPY_RAVEL_AXIS , NPY_NOTYPE , NULL );
          // ----------
          { /* let416 */
            PyArrayObject * csa  = npy_stub_as_array (cs );
            // ----------
            check ("CumSum is as long as the input", PyArray_SIZE (csa ), 6);
            check_d ("it ends at the total", npy_stub_data_at (csa , 5), 21.0);
            check_d ("and starts at the first", npy_stub_data_at (csa , 0), 1.0);
          }
        }
      }
    }
  }
  { /* let418 */
    PyObject * z  = PyArray_ZEROS (2, ((npy_intp[]) { 2 , 3 }) , NPY_DOUBLE , 0);
    // ----------
    check_true ("npzeros answers an array", PyArray_Check (z ));
    check ("npzeros counted the rank", ((long)PyArray_NDIM (((PyArrayObject *)z ))), 2);
    check ("npzeros took the shape", PyArray_SIZE (((PyArrayObject *)z )), 6);
    check_d ("and it is zeroed", (*((double *)PyArray_GETPTR2 (((PyArrayObject *)z ), 1, 2))), 0.0);
    (*((double *)PyArray_GETPTR2 (((PyArrayObject *)z ), 1, 2))) = 7.5;
    check_d ("npput then npget round-trips", (*((double *)PyArray_GETPTR2 (((PyArrayObject *)z ), 1, 2))), 7.5);
    check_d ("and it landed at flat 5", npy_stub_data_at (((PyArrayObject *)z ), 5), 7.5);
    (*((double *)PyArray_GETPTR2 (((PyArrayObject *)z ), 0, 0))) = 1.0;
    check_d ("npget with a fresh index", (*((double *)PyArray_GETPTR2 (((PyArrayObject *)z ), 0, 0))), 1.0);
    check ("nparr over an array pointer", PyArray_SIZE (((PyArrayObject *)((PyArrayObject *)z ))), 6);
  }
  { /* let444 */
    npy_intp sdims [2];
    // ----------
    sdims [0] = 2;
    sdims [1] = 3;
    { /* let446 */
      PyObject * so  = PyArray_SimpleNew (2, ((npy_intp[]) { 2 , 3 }) , NPY_DOUBLE );
      // ----------
      { /* let452 */
        PyArrayObject * sm  = ((PyArrayObject *)so );
        // ----------
        for (long r  = 0; (r  <  2 ); (++r )) {
            for (long c  = 0; (c  <  3 ); (++c )) {
                (*((double *)PyArray_GETPTR2 (((PyArrayObject *)so ), r , c ))) = ((double)((r  *  3 ) +  c  +  1 ));
            }
        }
        check_d ("npsum", np_double (PyArray_Sum (((PyArrayObject *)so ), NPY_RAVEL_AXIS , NPY_NOTYPE , NULL )), 21.0);
        check_d ("npprod", np_double (PyArray_Prod (((PyArrayObject *)so ), NPY_RAVEL_AXIS , NPY_NOTYPE , NULL )), 720.0);
        check_d ("npmean", np_double (PyArray_Mean (((PyArrayObject *)so ), NPY_RAVEL_AXIS , NPY_NOTYPE , NULL )), 3.5);
        check_d ("npmax", np_double (PyArray_Max (((PyArrayObject *)so ), NPY_RAVEL_AXIS , NULL )), 6.0);
        check_d ("npmin", np_double (PyArray_Min (((PyArrayObject *)so ), NPY_RAVEL_AXIS , NULL )), 1.0);
        check ("npargmax", np_long (PyArray_ArgMax (((PyArrayObject *)so ), NPY_RAVEL_AXIS , NULL )), 5);
        check ("npargmin", np_long (PyArray_ArgMin (((PyArrayObject *)so ), NPY_RAVEL_AXIS , NULL )), 0);
        check_d ("npvar", np_double (PyArray_Std (((PyArrayObject *)so ), NPY_RAVEL_AXIS , NPY_NOTYPE , NULL , 1)), (35.0 /  12.0 ));
        { /* let480 */
          double sd  = np_double (PyArray_Std (((PyArrayObject *)so ), NPY_RAVEL_AXIS , NPY_NOTYPE , NULL , 0));
          // ----------
          check_d ("npstd is the root of npvar", (sd  *  sd  ), (35.0 /  12.0 ));
        }
        { /* let484 */
          PyObject * a0  = PyArray_Sum (((PyArrayObject *)so ), 0, NPY_NOTYPE , NULL );
          // ----------
          check ("npsum along axis 0", PyArray_SIZE (((PyArrayObject *)a0 )), 3);
          check_d ("and its first column", (*((double *)PyArray_GETPTR1 (((PyArrayObject *)a0 ), 0))), 5.0);
        }
        { /* let492 */
          PyObject * a1  = PyArray_Sum (((PyArrayObject *)so ), 1, NPY_NOTYPE , NULL );
          // ----------
          check ("npsum along axis 1", PyArray_SIZE (((PyArrayObject *)a1 )), 2);
          check_d ("and its first row", (*((double *)PyArray_GETPTR1 (((PyArrayObject *)a1 ), 0))), 6.0);
        }
        check_d ("npcumsum ends at the total", (*((double *)PyArray_GETPTR1 (((PyArrayObject *)PyArray_CumSum (((PyArrayObject *)so ), NPY_RAVEL_AXIS , NPY_NOTYPE , NULL )), 5))), 21.0);
        { /* let505 */
          PyObject * shp  = np_shape (2, ((npy_intp[]) { 2 , 3 }) );
          // ----------
          check ("npshape is a tuple of two", PyTuple_Size (shp ), 2);
          check ("npshape kept the order, 0", PyLong_AsLong (PyTuple_GetItem (shp , 0)), 2);
          check ("npshape kept the order, 1", PyLong_AsLong (PyTuple_GetItem (shp , 1)), 3);
        }
        { /* let511 */
          double wbuf [3];
          // ----------
          wbuf [0] = 5.0;
          wbuf [1] = 6.0;
          wbuf [2] = 7.0;
          { /* let513 */
            PyObject * w  = PyArray_SimpleNewFromData (1, ((npy_intp[]) { 3 }) , NPY_DOUBLE , ((void *)wbuf ));
            // ----------
            check ("nparray took the shape", PyArray_SIZE (((PyArrayObject *)w )), 3);
            check_d ("and sees the buffer", (*((double *)PyArray_GETPTR1 (((PyArrayObject *)w ), 1))), 6.0);
            check_true ("without owning it", (!PyArray_CHKFLAGS (((PyArrayObject *)w ), NPY_ARRAY_OWNDATA )));
            (*((double *)PyArray_GETPTR1 (((PyArrayObject *)w ), 2))) = 99.0;
            check_d ("a write reaches the buffer", wbuf [2], 99.0);
          }
        }
        check_d ("np_call numpy.sum", np_double (np_call ("sum", so )), 21.0);
        check_d ("np_call numpy.mean", np_double (np_call ("mean", so )), 3.5);
        check_d ("np_call numpy.max", np_double (np_call ("max", so )), 6.0);
        check_d ("and the argument survives being called with", np_double (PyArray_Sum (((PyArrayObject *)so ), NPY_RAVEL_AXIS , NPY_NOTYPE , NULL )), 21.0);
        py_stub_last_exc  = NULL ;
        check_true ("an unknown name answers nothing", (np_call ("percentile", so ) ==  NULL  ));
        check_true ("having set an exception", (py_stub_last_exc  !=  NULL  ));
      }
    }
  }
  if (bad  ==  0 )
    printf ("\nnumpy: all checks passed\n");
  else
    printf ("\nnumpy: %d check(s) failed\n", bad );
  return bad ;
}
