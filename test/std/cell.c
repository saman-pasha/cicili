#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct array_int {
  int * const arr ;
  size_t len ;
} array_int;
typedef int array_int_item_t ;
#ifndef __ARRAY_TYPE_H_
#define __ARRAY_TYPE_H_
typedef struct std_array std_array ;
#endif /* __ARRAY_TYPE_H_ */ 
typedef std_array array_int_type_t ;
__attribute__((weak)) void free_array_int (array_int * array ) {
  ({ /* progn113 */
    printf ("FREE ARR: %p\n", (array -> arr ));
  });
  free ((array -> arr ));
}
__attribute__((weak)) void free_array_int_pointer (array_int ** array ) {
  free_array_int ((*array ));
}
typedef struct cell_array_int {
  array_int * restrict ptr ;
} cell_array_int;
typedef array_int cell_array_int_interior_t ;
#ifndef __CELL_TYPE_H_
#define __CELL_TYPE_H_
typedef struct std_cell std_cell ;
#endif /* __CELL_TYPE_H_ */ 
typedef std_cell cell_array_int_type_t ;
__attribute__((weak)) void free_cell_array_int (cell_array_int * cell ) {
  ({ /* progn130 */
    printf ("FREE CELL: %p\n", (cell -> ptr ));
  });
  if ((cell -> ptr ))
    { /* block135 */
      free_array_int ((cell -> ptr ));
    }
  free ((cell -> ptr ));
}
__attribute__((weak)) void free_cell_array_int_pointer (cell_array_int ** cell ) {
  free_cell_array_int ((*cell ));
}
__attribute__((weak)) void force_free_array_int (array_int * obj ) {
  free_array_int (obj );
}
array_int new_array_int_G163 (int * arr , const int len ) {
  return ({ /* letn167 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn170 */
        printf ("NEW ARR: %s %p %zu\n", "int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
array_int new_array_int_G192 (int * arr , const int len ) {
  return ({ /* letn196 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn199 */
        printf ("NEW ARR: %s %p %zu\n", "int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
array_int new_array_int_G223 (int * arr , const int len ) {
  return ({ /* letn227 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn230 */
        printf ("NEW ARR: %s %p %zu\n", "int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
array_int new_array_int_G252 (int * arr , const int len ) {
  return ({ /* letn256 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn259 */
        printf ("NEW ARR: %s %p %zu\n", "int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
void let_cell_array_int_G273 (cell_array_int * restrict cell ) {
  if ((cell -> ptr ))
    { /* block279 */
      { /* let281 */
        cell_array_int_interior_t * restrict arr_ref  = (cell -> ptr );
        // ----------
        printf ("1. cell01 arr len: %zu\n", ((*arr_ref ). len ));
      }
    }
}
size_t letn_cell_array_int_G288 (cell_array_int * restrict cell , const int default_value , int over ) {
  return (((cell -> ptr )) ? ({ /* letn291 */
        cell_array_int_interior_t * restrict arr_ref  = (cell -> ptr );
        // ----------
        (((*arr_ref ). len ) +  over  );
      }) : default_value );
}
void take_cell_array_int_G298 (cell_array_int cell ) {
  cell_array_int * __moved_cell __attribute__((__cleanup__( free_cell_array_int_pointer))) = (& cell) ;
  if (cell . ptr )
    { /* block305 */
      ({ /* letn308 */
        array_int arr  __attribute__((__cleanup__(free_array_int ))) = ({ /* letnmove311 */
          __auto_type moved_var310  = (*(cell . ptr ));
          // ----------
          memset ((&(*(cell . ptr ))), 0, sizeof((*(cell . ptr ))));
          moved_var310 ;
        });
        // ----------
        printf ("3. cell01 arr len: %zu\n", (arr . len ));
      });
    }
}
size_t taken_cell_array_int_G321 (cell_array_int cell , size_t default_value ) {
  cell_array_int * __moved_cell __attribute__((__cleanup__( free_cell_array_int_pointer))) = (& cell) ;
  return (((cell . ptr )) ? ({ /* letn326 */
        array_int arr  __attribute__((__cleanup__(free_array_int ))) = ({ /* letnmove329 */
          __auto_type moved_var328  = (*(cell . ptr ));
          // ----------
          memset ((&(*(cell . ptr ))), 0, sizeof((*(cell . ptr ))));
          moved_var328 ;
        });
        // ----------
        printf ("4. cell02 arr len: %zu\n", (arr . len ));
      }) : default_value );
}
int main () {
  ({ /* letn209 */
    cell_array_int cell01  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn220 */
      array_int * array_int_ptr218  = malloc (sizeof(array_int));
      array_int array_int_obj219  = new_array_int_G223 (((int[]){ 1, 2, 3, 4}), 4);
      // ----------
      ({ /* progn236 */
        printf ("NEW CELL: %p\n", array_int_ptr218 );
      });
      memcpy (array_int_ptr218 , (&array_int_obj219 ), sizeof(array_int_obj219));
      ((cell_array_int){ array_int_ptr218 });
    });
    cell_array_int cell02  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn249 */
      array_int * array_int_ptr247  = malloc (sizeof(array_int));
      array_int array_int_obj248  = new_array_int_G252 (((int[]){ 1, 2, 3, 4, 5}), 5);
      // ----------
      ({ /* progn265 */
        printf ("NEW CELL: %p\n", array_int_ptr247 );
      });
      memcpy (array_int_ptr247 , (&array_int_obj248 ), sizeof(array_int_obj248));
      ((cell_array_int){ array_int_ptr247 });
    });
    // ----------
    { /* let269 */
      int aInt  = 10;
      // ----------
      let_cell_array_int_G273 ((&cell01 ));
      printf ("2. cell02 arr len + over: %zu\n", letn_cell_array_int_G288 ((&cell02 ), -1, aInt ));
      take_cell_array_int_G298 (({ /* letnmove317 */
          __auto_type moved_var316  = cell01 ;
          // ----------
          memset ((&cell01 ), 0, sizeof(cell01 ));
          moved_var316 ;
        }));
      taken_cell_array_int_G321 (({ /* letnmove335 */
          __auto_type moved_var334  = cell02 ;
          // ----------
          memset ((&cell02 ), 0, sizeof(cell02 ));
          moved_var334 ;
        }), printf ("4. default value is strict\n"));
    }
  });
}
