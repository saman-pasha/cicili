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
  size_t adr ;
} cell_array_int;
typedef array_int cell_array_int_interior_t ;
__attribute__((weak)) void free_cell_array_int (cell_array_int * cell ) {
  if ((cell -> ptr ) &&  ((*((size_t *)(cell -> ptr ))) ==  (cell -> adr ) ) )
    { /* block118 */
      ({ /* progn121 */
        printf ("FREE CELL: %zx %zx\n", (*((size_t *)(cell -> ptr ))), (cell -> adr ));
      });
      free_array_int ((*((void **)(cell -> ptr ))));
      free (((void *)(cell -> ptr )));
      (*((uintptr_t *)(cell -> ptr ))) = 0;
      (cell -> ptr ) = 0;
    }
}
__attribute__((weak)) void force_free_array_int (array_int * obj ) {
  free_array_int (obj );
}
array_int new_array_int_G158 (int * arr , const int len ) {
  return ({ /* letn162 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn165 */
        printf ("NEW ARR: %s %p %zu\n", "int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
void let_cell_array_int_G179 (cell_array_int acc_cell177 ) {
  { /* let182 */
    cell_array_int_interior_t ** acc_cell_ptr178  = ((cell_array_int_interior_t **)(acc_cell177 . ptr ));
    // ----------
    if (acc_cell_ptr178  &&  ((*((size_t *)acc_cell_ptr178 )) ==  (acc_cell177 . adr ) ) )
      { /* block189 */
        { /* let191 */
          cell_array_int_interior_t arr  = (*(*acc_cell_ptr178 ));
          // ----------
          printf ("1. cell01 arr len: %zu\n", (arr . len ));
        }
      }
  }
}
size_t letn_cell_array_int_G198 (cell_array_int acc_cell196 , const int default_value , int over ) {
  return ({ /* letn201 */
      cell_array_int_interior_t ** acc_cell_ptr197  = ((cell_array_int_interior_t **)(acc_cell196 . ptr ));
      // ----------
      (((acc_cell_ptr197  &&  ((*((size_t *)acc_cell_ptr197 )) ==  (acc_cell196 . adr ) ) )) ? ({ /* letn205 */
          cell_array_int_interior_t arr  = (*(*acc_cell_ptr197 ));
          // ----------
          ((arr . len ) +  over  );
        }) : default_value );
    });
}
void take_cell_array_int (cell_array_int acc_cell210 ) {
  { /* let214 */
    cell_array_int_interior_t ** acc_cell_ptr211  = ((cell_array_int_interior_t **)(acc_cell210 . ptr ));
    // ----------
    if (acc_cell_ptr211  &&  ((*((size_t *)acc_cell_ptr211 )) ==  (acc_cell210 . adr ) ) )
      { /* block221 */
        { /* let223 */
          cell_array_int_interior_t * arr_ptr  = (*acc_cell_ptr211 );
          // ----------
          ({ /* progn227 */
            printf ("TAKE CELL: %zx %zx\n", (*((size_t *)acc_cell_ptr211 )), (acc_cell210 . adr ));
          });
          free (((void *)(acc_cell210 . ptr )));
          (acc_cell210 . ptr ) = 0;
          printf ("3. cell01 arr len: %zu\n", ((*arr_ptr ). len ));
          force_free_array_int (arr_ptr );
        }
      }
  }
}
size_t taken_cell_array_int (cell_array_int acc_cell231 , size_t default_value ) {
  return ({ /* letn235 */
      cell_array_int_interior_t ** acc_cell_ptr232  = ((cell_array_int_interior_t **)(acc_cell231 . ptr ));
      // ----------
      (((acc_cell_ptr232  &&  ((*((size_t *)acc_cell_ptr232 )) ==  (acc_cell231 . adr ) ) )) ? ({ /* letn239 */
          cell_array_int_interior_t * arr_ptr  = (*acc_cell_ptr232 );
          // ----------
          ({ /* progn243 */
            printf ("TAKE CELL: %zx %zx\n", (*((size_t *)acc_cell_ptr232 )), (acc_cell231 . adr ));
          });
          free (((void *)(acc_cell231 . ptr )));
          (acc_cell231 . ptr ) = 0;
          printf ("4. cell01 arr len: %zu\n", ((*arr_ptr ). len ));
        }) : default_value );
    });
}
int main () {
  ({ /* letn142 */
    cell_array_int cell01  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn152 */
      array_int * tmp_ptr150  = malloc (sizeof(array_int ));
      uintptr_t * tmp_cell_ptr151  = malloc (sizeof(uintptr_t));
      // ----------
      (*tmp_ptr150 ) = new_array_int_G158 (((int[]){ 1, 2, 3, 4, 5}), 5);
      (*tmp_cell_ptr151 ) = ((uintptr_t)tmp_ptr150 );
      ({ /* progn170 */
        printf ("NEW CELL: %zx %zx\n", ((uintptr_t)tmp_cell_ptr151 ), (*((size_t *)tmp_cell_ptr151 )));
      });
      ((cell_array_int){ ((uintptr_t)tmp_cell_ptr151 ), (*((size_t *)tmp_cell_ptr151 ))});
    });
    // ----------
    { /* let174 */
      int aInt  = 10;
      // ----------
      let_cell_array_int_G179 (cell01 );
      printf ("2. cell01 arr len + over: %zu\n", letn_cell_array_int_G198 (cell01 , -1, aInt ));
      take_cell_array_int (cell01 );
      taken_cell_array_int (cell01 , printf ("4 cell01 arr len: default path\n"));
    }
  });
}
