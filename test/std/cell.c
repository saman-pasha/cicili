#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct array_int {
  uintptr_t arr ;
  size_t len ;
} array_int;
__attribute__((weak)) void free_array_int (array_int * array ) {
  ({ /* cicili#Progn107 */
    printf ("FREE ARR: %zx\n", (array -> arr ));
  });
  free (((void *)(array -> arr )));
  (array -> arr ) = 0;
}
typedef struct cell_array_int {
  uintptr_t ptr ;
  size_t adr ;
} cell_array_int;
__attribute__((weak)) void free_cell_array_int (cell_array_int * cell ) {
  if ((cell -> ptr ) &&  ((*((size_t *)(cell -> ptr ))) ==  (cell -> adr ) ) )
    { /* cicili#Block132 */
      ({ /* cicili#Progn135 */
        printf ("FREE CELL: %zx %zx\n", (*((size_t *)(cell -> ptr ))), (cell -> adr ));
      });
      free_array_int ((*((void **)(cell -> ptr ))));
      free (((void *)(cell -> ptr )));
      (*((uintptr_t *)(cell -> ptr ))) = 0;
      (cell -> ptr ) = 0;
    }
}
void __ciciliL_164 (cell_array_int * cell01_ptr ) {
  cell_array_int cell01  = (*cell01_ptr );
  free_cell_array_int ((&cell01 ));
}
int main () {
  { /* cicili#Let160 */
    cell_array_int cell01  __attribute__((__cleanup__(__ciciliL_164 ))) = ({ /* cicili#Let166 */
      array_int * tmp_ptr162  = malloc (sizeof(array_int));
      uintptr_t * tmp_cell_ptr163  = malloc (sizeof(uintptr_t));
      // ----------
      (*tmp_ptr162 ) = ({ /* cicili#Let171 */
            int * tmp_arr170  = calloc (5, sizeof(int));
            // ----------
            memcpy (tmp_arr170 , ((int[]){ 1, 2, 3, 4, 5}), (5 *  sizeof(int) ));
            ((array_int){ ((uintptr_t)tmp_arr170 ), ((size_t)5)});
          });
      (*tmp_cell_ptr163 ) = ((uintptr_t)tmp_ptr162 );
      ({ /* cicili#Progn174 */
        printf ("NEW CELL: %zx %zx\n", ((uintptr_t)tmp_cell_ptr163 ), (*((size_t *)tmp_cell_ptr163 )));
      });
      ((cell_array_int){ ((uintptr_t)tmp_cell_ptr163 ), (*((size_t *)tmp_cell_ptr163 ))});
    });
    // ----------
    { /* cicili#Let180 */
      cell_array_int acc_cell178  = cell01 ;
      array_int ** acc_cell_ptr179  = ((array_int **)(acc_cell178 . ptr ));
      // ----------
      if (acc_cell_ptr179  &&  ((*((size_t *)acc_cell_ptr179 )) ==  (acc_cell178 . adr ) ) )
        { /* cicili#Block184 */
          { /* cicili#Let186 */
            __auto_type arr  = (*(*acc_cell_ptr179 ));
            // ----------
            printf ("1 cell01 arr len: %zu\n", (arr . len ));
          }
        }
    }
    { /* cicili#Let192 */
      cell_array_int acc_cell190  = cell01 ;
      array_int ** acc_cell_ptr191  = ((array_int **)(acc_cell190 . ptr ));
      // ----------
      if (acc_cell_ptr191  &&  ((*((size_t *)acc_cell_ptr191 )) ==  (acc_cell190 . adr ) ) )
        { /* cicili#Block196 */
          { /* cicili#Let198 */
            __auto_type arr  = (*acc_cell_ptr191 );
            // ----------
            printf ("2 cell01 arr len: %zu\n", ((*arr ). len ));
          }
        }
    }
    printf ("3 cell01 arr len: %zu\n", ({ /* cicili#Let204 */
        cell_array_int acc_cell202  = cell01 ;
        array_int ** acc_cell_ptr203  = ((array_int **)(acc_cell202 . ptr ));
        // ----------
        (((acc_cell_ptr203  &&  ((*((size_t *)acc_cell_ptr203 )) ==  (acc_cell202 . adr ) ) )) ? ({ /* cicili#Let206 */
            __auto_type arr  = (*(*acc_cell_ptr203 ));
            // ----------
            (arr . len );
          }) : -1);
      }));
    { /* cicili#Let212 */
      cell_array_int acc_cell210  = cell01 ;
      array_int ** acc_cell_ptr211  = ((array_int **)(acc_cell210 . ptr ));
      // ----------
      if (acc_cell_ptr211  &&  ((*((size_t *)acc_cell_ptr211 )) ==  (acc_cell210 . adr ) ) )
        { /* cicili#Block216 */
          { /* cicili#Let218 */
            __auto_type arr  = (*(*acc_cell_ptr211 ));
            // ----------
            (acc_cell210 . ptr ) = 0;
            printf ("4 cell01 arr len: %zu\n", (arr . len ));
          }
        }
    }
    free_cell_array_int ((&cell01 ));
    ({ /* cicili#Let224 */
      cell_array_int acc_cell222  = cell01 ;
      array_int ** acc_cell_ptr223  = ((array_int **)(acc_cell222 . ptr ));
      // ----------
      (((acc_cell_ptr223  &&  ((*((size_t *)acc_cell_ptr223 )) ==  (acc_cell222 . adr ) ) )) ? ({ /* cicili#Let226 */
          __auto_type arr  = (*acc_cell_ptr223 );
          // ----------
          (acc_cell222 . ptr ) = 0;
          printf ("5 cell01 arr len: %zu\n", ((*arr ). len ));
        }) : printf ("5 cell01 arr len: default path\n"));
    });
  }
}
