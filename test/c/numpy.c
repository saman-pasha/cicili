#include "numpy_stub.h"
#include <stdio.h>
PyObject * py_stub_last_exc  = NULL ;
const char * py_stub_last_msg  = NULL ;
int npy_stub_imports  = 0;
int bad  = 0;
void check (const char * what , long got , long want ) {
  if (got  ==  want  )
    printf ("ok   %-44s %ld\n", what , got );
  else
    { /* block282 */
      printf ("FAIL %-44s got %ld want %ld\n", what , got , want );
      (++bad );
    }
}
void check_d (const char * what , double got , double want ) {
  if (((((got  -  want  ) >  0.0 )) ? (got  -  want  ) : (want  -  got  )) <  1.0e-6 )
    printf ("ok   %-44s %g\n", what , got );
  else
    { /* block288 */
      printf ("FAIL %-44s got %g want %g\n", what , got , want );
      (++bad );
    }
}
void check_true (const char * what , int cond ) {
  if (cond )
    printf ("ok   %-44s\n", what );
  else
    { /* block294 */
      printf ("FAIL %-44s\n", what );
      (++bad );
    }
}
int main () {
  check ("import_array has not run yet", ((long)npy_stub_import_count ()), 0);
  check ("_import_array succeeds", ((long)_import_array ()), 0);
  check ("and it ran exactly once", ((long)npy_stub_import_count ()), 1);
  { /* let298 */
    npy_intp dims [2];
    // ----------
    dims [0] = 3;
    dims [1] = 4;
    { /* let300 */
      PyObject * o  = PyArray_SimpleNew (2, dims , NPY_DOUBLE );
      // ----------
      check_true ("PyArray_SimpleNew answers an array", PyArray_Check (o ));
      { /* let302 */
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
  { /* let304 */
    double buf [4];
    npy_intp d1 [1];
    // ----------
    buf [0] = 10.0;
    buf [1] = 20.0;
    buf [2] = 30.0;
    buf [3] = 40.0;
    d1 [0] = 4;
    { /* let306 */
      PyObject * o  = PyArray_SimpleNewFromData (1, d1 , NPY_DOUBLE , ((void *)buf ));
      // ----------
      { /* let308 */
        PyArrayObject * a  = npy_stub_as_array (o );
        // ----------
        check ("the borrowed array has 4 elements", PyArray_SIZE (a ), 4);
        check_d ("it sees the caller's data", npy_stub_get_d (PyArray_GETPTR1 (a , 2)), 30.0);
        check_true ("a borrowed buffer does not own its data", (!PyArray_CHKFLAGS (a , NPY_ARRAY_OWNDATA )));
        npy_stub_set_d (PyArray_GETPTR1 (a , 1), 99.0);
        check_d ("a write reaches the caller's buffer", buf [1], 99.0);
        check_true ("base is unset until it is set", (PyArray_BASE (a ) ==  NULL  ));
        { /* let310 */
          PyObject * owner  = PyLong_FromLong (1);
          // ----------
          check ("SetBaseObject succeeds", ((long)PyArray_SetBaseObject (a , owner )), 0);
          check_true ("and base is what was set", (PyArray_BASE (a ) ==  owner  ));
        }
      }
    }
  }
  if (bad  ==  0 )
    printf ("\nnumpy: all checks passed\n");
  else
    printf ("\nnumpy: %d check(s) failed\n", bad );
  return bad ;
}
