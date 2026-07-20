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
__attribute__((weak)) void free_array_int (array_int * array ) {
  ({ /* progn108 */
    printf ("FREE ARR: %p\n", (array -> arr ));
  });
  free ((array -> arr ));
}
__attribute__((weak)) void free_array_int_pointer (array_int ** array ) {
  free_array_int ((*array ));
}
typedef struct cell_array_int {
  array_int * const ptr ;
} cell_array_int;
typedef array_int cell_array_int_interior_t ;
__attribute__((weak)) void free_cell_array_int (cell_array_int * cell ) {
  ({ /* progn119 */
    printf ("FREE CELL: %p\n", (cell -> ptr ));
  });
  if ((cell -> ptr ))
    { /* block124 */
      free_array_int ((cell -> ptr ));
    }
}
__attribute__((weak)) void free_cell_array_int_pointer (cell_array_int ** cell ) {
  free_cell_array_int ((*cell ));
}
__attribute__((weak)) void force_free_array_int (array_int * obj ) {
  free_array_int (obj );
}
array_int new_array_int_G211 (int * arr , const int len ) {
  return ({ /* letn215 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn218 */
        printf ("NEW ARR: %s %p %zu\n", "int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
array_int new_array_int_G240 (int * arr , const int len ) {
  return ({ /* letn244 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn247 */
        printf ("NEW ARR: %s %p %zu\n", "int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
void let_cell_array_int_G260 (cell_array_int * restrict cell01 ) {
  if ((cell01 -> ptr ))
    { /* block266 */
      { /* let268 */
        cell_array_int_interior_t * restrict arr_ref  = (cell01 -> ptr );
        // ----------
        printf ("1. cell01 arr len: %zu\n", ((*arr_ref ). len ));
      }
    }
}
size_t letn_cell_array_int_G273 (cell_array_int * restrict cell02 , const int default_value , int over ) {
  return (((cell02 -> ptr )) ? ({ /* letn276 */
        cell_array_int_interior_t * restrict arr_ref  = (cell02 -> ptr );
        // ----------
        (((*arr_ref ). len ) +  over  );
      }) : default_value );
}
void take_cell_array_int_G282 (cell_array_int cell01 ) {
  cell_array_int * __moved_cell01 __attribute__((__cleanup__( free_cell_array_int_pointer))) = (& cell01) ;
  if (cell01 . ptr )
    { /* block289 */
      ({ /* letn292 */
        array_int arr  __attribute__((__cleanup__(free_array_int ))) = ({ /* letnmove295 */
          __auto_type moved_var294  = (*(cell01 . ptr ));
          // ----------
          memset ((&(*(cell01 . ptr ))), 0, sizeof((*(cell01 . ptr ))));
          moved_var294 ;
        });
        // ----------
        printf ("3. cell01 arr len: %zu\n", (arr . len ));
      });
    }
}
size_t taken_cell_array_int_G304 (cell_array_int cell02 , size_t default_value ) {
  cell_array_int * __moved_cell02 __attribute__((__cleanup__( free_cell_array_int_pointer))) = (& cell02) ;
  return (((cell02 . ptr )) ? ({ /* letn309 */
        array_int arr  __attribute__((__cleanup__(free_array_int ))) = ({ /* letnmove312 */
          __auto_type moved_var311  = (*(cell02 . ptr ));
          // ----------
          memset ((&(*(cell02 . ptr ))), 0, sizeof((*(cell02 . ptr ))));
          moved_var311 ;
        });
        // ----------
        printf ("4. cell02 arr len: %zu\n", (arr . len ));
      }) : default_value );
}
int main () {
  ({ /* letn197 */
    cell_array_int cell01  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn208 */
      array_int * array_int_ptr206  = malloc (sizeof(array_int));
      array_int array_int_obj207  = new_array_int_G211 (((int[]){ 1, 2, 3, 4}), 4);
      // ----------
      ({ /* progn224 */
        printf ("NEW CELL: %p\n", array_int_ptr206 );
      });
      memcpy (array_int_ptr206 , (&array_int_obj207 ), sizeof(array_int_obj207));
      ((cell_array_int){ array_int_ptr206 });
    });
    cell_array_int cell02  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn237 */
      array_int * array_int_ptr235  = malloc (sizeof(array_int));
      array_int array_int_obj236  = new_array_int_G240 (((int[]){ 1, 2, 3, 4, 5}), 5);
      // ----------
      ({ /* progn253 */
        printf ("NEW CELL: %p\n", array_int_ptr235 );
      });
      memcpy (array_int_ptr235 , (&array_int_obj236 ), sizeof(array_int_obj236));
      ((cell_array_int){ array_int_ptr235 });
    });
    // ----------
    { /* let257 */
      int aInt  = 10;
      // ----------
      let_cell_array_int_G260 ((&cell01 ));
      printf ("2. cell02 arr len + over: %zu\n", letn_cell_array_int_G273 ((&cell02 ), -1, aInt ));
      take_cell_array_int_G282 (({ /* letnmove300 */
          __auto_type moved_var299  = cell01 ;
          // ----------
          memset ((&cell01 ), 0, sizeof(cell01 ));
          moved_var299 ;
        }));
      taken_cell_array_int_G304 (({ /* letnmove317 */
          __auto_type moved_var316  = cell02 ;
          // ----------
          memset ((&cell02 ), 0, sizeof(cell02 ));
          moved_var316 ;
        }), printf ("4. default value is strict\n"));
    }
  });
}
