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
array_int new_array_int_G151 (const size_t len ) {
  return ({ /* letn155 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn158 */
        printf ("NEW ARR: %s %p %zu\n", "int *", new_arr , len );
      });
      memcpy (new_arr , ((int[]){ 1, 2, 3, 4, 5}), (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
int main () {
  ({ /* letn139 */
    cell_array_int cell01  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn146 */
      array_int * tmp_ptr143  = malloc (sizeof(array_int ));
      uintptr_t * tmp_cell_ptr144  = malloc (sizeof(uintptr_t));
      // ----------
      (*tmp_ptr143 ) = new_array_int_G151 (5);
      (*tmp_cell_ptr144 ) = ((uintptr_t)tmp_ptr143 );
      ({ /* progn163 */
        printf ("NEW CELL: %zx %zx\n", ((uintptr_t)tmp_cell_ptr144 ), (*((size_t *)tmp_cell_ptr144 )));
      });
      ((cell_array_int){ ((uintptr_t)tmp_cell_ptr144 ), (*((size_t *)tmp_cell_ptr144 ))});
    });
    // ----------
    { /* let170 */
      cell_array_int acc_cell168  = cell01 ;
      cell_array_int_interior_t ** acc_cell_ptr169  = ((cell_array_int_interior_t **)(acc_cell168 . ptr ));
      // ----------
      if (acc_cell_ptr169  &&  ((*((size_t *)acc_cell_ptr169 )) ==  (acc_cell168 . adr ) ) )
        { /* block177 */
          { /* let179 */
            cell_array_int_interior_t arr  = (*(*acc_cell_ptr169 ));
            // ----------
            printf ("1. cell01 arr len: %zu\n", (arr . len ));
          }
        }
    }
    printf ("2. cell01 arr len: %zu\n", ({ /* letn186 */
        cell_array_int acc_cell184  = cell01 ;
        cell_array_int_interior_t ** acc_cell_ptr185  = ((cell_array_int_interior_t **)(acc_cell184 . ptr ));
        // ----------
        (((acc_cell_ptr185  &&  ((*((size_t *)acc_cell_ptr185 )) ==  (acc_cell184 . adr ) ) )) ? ({ /* letn190 */
            cell_array_int_interior_t arr  = (*(*acc_cell_ptr185 ));
            // ----------
            (arr . len );
          }) : -1);
      }));
    { /* let197 */
      cell_array_int acc_cell195  = cell01 ;
      cell_array_int_interior_t ** acc_cell_ptr196  = ((cell_array_int_interior_t **)(acc_cell195 . ptr ));
      // ----------
      if (acc_cell_ptr196  &&  ((*((size_t *)acc_cell_ptr196 )) ==  (acc_cell195 . adr ) ) )
        { /* block204 */
          { /* let206 */
            cell_array_int_interior_t * arr_ptr  = (*acc_cell_ptr196 );
            // ----------
            ({ /* progn210 */
              printf ("TAKE CELL: %zx %zx\n", (*((size_t *)acc_cell_ptr196 )), (acc_cell195 . adr ));
            });
            free (((void *)(acc_cell195 . ptr )));
            (acc_cell195 . ptr ) = 0;
            printf ("3. cell01 arr len: %zu\n", ((*arr_ptr ). len ));
            force_free_array_int (arr_ptr );
          }
        }
    }
    free_cell_array_int ((&cell01 ));
    ({ /* letn218 */
      cell_array_int acc_cell216  = cell01 ;
      cell_array_int_interior_t ** acc_cell_ptr217  = ((cell_array_int_interior_t **)(acc_cell216 . ptr ));
      // ----------
      (((acc_cell_ptr217  &&  ((*((size_t *)acc_cell_ptr217 )) ==  (acc_cell216 . adr ) ) )) ? ({ /* letn222 */
          cell_array_int_interior_t * arr_ptr  = (*acc_cell_ptr217 );
          // ----------
          ({ /* progn226 */
            printf ("TAKE CELL: %zx %zx\n", (*((size_t *)acc_cell_ptr217 )), (acc_cell216 . adr ));
          });
          free (((void *)(acc_cell216 . ptr )));
          (acc_cell216 . ptr ) = 0;
          printf ("4. cell01 arr len: %zu\n", ((*arr_ptr ). len ));
        }) : printf ("4 cell01 arr len: default path\n"));
    });
  });
}
