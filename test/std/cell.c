#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct array_int {
  int * arr ;
  size_t len ;
} array_int;
typedef int array_int_item_t ;
__attribute__((weak)) void free_array_int (array_int * array ) {
  ({ /* progn108 */
    printf ("FREE ARR: %p\n", (array -> arr ));
  });
  free ((array -> arr ));
  (array -> arr ) = 0;
}
typedef struct cell_array_int {
  uintptr_t ptr ;
} cell_array_int;
typedef array_int cell_array_int_interior_t ;
__attribute__((weak)) void free_cell_array_int (cell_array_int ** cell_ptr ) {
  { /* let115 */
    cell_array_int * cell  = (*cell_ptr );
    // ----------
    if ((cell -> ptr ))
      { /* block120 */
        free_array_int (((void *)(cell -> ptr )));
        (cell -> ptr ) = 0;
      }
    ({ /* progn124 */
      printf ("FREE CELL: %zx\n", (cell -> ptr ));
    });
    free (cell );
  }
}
__attribute__((weak)) void force_free_array_int (array_int * obj ) {
  free_array_int (obj );
}
array_int new_array_int_G181 (int * arr , const int len ) {
  return ({ /* letn185 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn188 */
        printf ("NEW ARR: %s %p %zu\n", "int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
void let_cell_array_int_G201 (cell_array_int * acc_cell199 ) {
  { /* let204 */
    cell_array_int_interior_t * acc_cell_ptr200  = ((cell_array_int_interior_t *)(acc_cell199 -> ptr ));
    // ----------
    if (acc_cell_ptr200 )
      { /* block211 */
        { /* let213 */
          cell_array_int_interior_t arr  = (*acc_cell_ptr200 );
          // ----------
          printf ("1. cell01 arr len: %zu\n", (arr . len ));
        }
      }
  }
}
size_t letn_cell_array_int_G220 (cell_array_int * acc_cell218 , const int default_value , int over ) {
  return ({ /* letn223 */
      cell_array_int_interior_t * acc_cell_ptr219  = ((cell_array_int_interior_t *)(acc_cell218 -> ptr ));
      // ----------
      ((acc_cell_ptr219 ) ? ({ /* letn227 */
          cell_array_int_interior_t arr  = (*acc_cell_ptr219 );
          // ----------
          ((arr . len ) +  over  );
        }) : default_value );
    });
}
void take_cell_array_int_G234 (cell_array_int * acc_cell232 ) {
  { /* let237 */
    cell_array_int_interior_t * acc_cell_ptr233  = ((cell_array_int_interior_t *)(acc_cell232 -> ptr ));
    // ----------
    if (acc_cell_ptr233 )
      { /* block244 */
        { /* let246 */
          cell_array_int_interior_t * arr_ptr  = acc_cell_ptr233 ;
          // ----------
          ({ /* progn250 */
            printf ("TAKE CELL: %zx\n", (acc_cell232 -> ptr ));
          });
          (acc_cell232 -> ptr ) = 0;
          printf ("3. cell01 arr len: %zu\n", ((*arr_ptr ). len ));
          force_free_array_int (arr_ptr );
        }
      }
  }
}
size_t taken_cell_array_int_G256 (cell_array_int * acc_cell254 , size_t default_value ) {
  return ({ /* letn259 */
      cell_array_int_interior_t * acc_cell_ptr255  = ((cell_array_int_interior_t *)(acc_cell254 -> ptr ));
      // ----------
      ((acc_cell_ptr255 ) ? ({ /* letn263 */
          cell_array_int_interior_t * arr_ptr  = acc_cell_ptr255 ;
          // ----------
          ({ /* progn267 */
            printf ("TAKE CELL: %zx\n", (acc_cell254 -> ptr ));
          });
          (acc_cell254 -> ptr ) = 0;
          printf ("4. cell01 arr len: %zu\n", ((*arr_ptr ). len ));
        }) : default_value );
    });
}
int main () {
  ({ /* letn164 */
    cell_array_int * cell01  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn175 */
      array_int * tmp_ptr173  = malloc (sizeof(array_int));
      cell_array_int * tmp_cell_ptr174  = malloc (sizeof(cell_array_int ));
      // ----------
      (*tmp_ptr173 ) = new_array_int_G181 (((int[]){ 1, 2, 3, 4, 5}), 5);
      (tmp_cell_ptr174 -> ptr ) = ((uintptr_t)tmp_ptr173 );
      ({ /* progn193 */
        printf ("NEW CELL: %zx\n", ((uintptr_t)tmp_cell_ptr174 ));
      });
      tmp_cell_ptr174 ;
    });
    // ----------
    { /* let196 */
      int aInt  = 10;
      // ----------
      let_cell_array_int_G201 (cell01 );
      printf ("2. cell01 arr len + over: %zu\n", letn_cell_array_int_G220 (cell01 , -1, aInt ));
      take_cell_array_int_G234 (cell01 );
      taken_cell_array_int_G256 (cell01 , printf ("4 cell01 arr len: default path\n"));
    }
  });
}
