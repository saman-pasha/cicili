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
__attribute__((weak)) void force_free_array_int (array_int * obj ) {
  free_array_int (obj );
}
void __ciciliL_167 (cell_array_int * cell01_ptr ) {
  cell_array_int cell01  = (*cell01_ptr );
  free_cell_array_int ((&cell01 ));
}
int main () {
  { /* cicili#Let163 */
    cell_array_int cell01  __attribute__((__cleanup__(__ciciliL_167 ))) = ({ /* cicili#Let169 */
      array_int * tmp_ptr165  = malloc (sizeof(array_int));
      uintptr_t * tmp_cell_ptr166  = malloc (sizeof(uintptr_t));
      // ----------
      (*tmp_ptr165 ) = ({ /* cicili#Let174 */
            int * tmp_arr173  = calloc (5, sizeof(int));
            // ----------
            memcpy (tmp_arr173 , ((int[]){ 1, 2, 3, 4, 5}), (5 *  sizeof(int) ));
            ((array_int){ ((uintptr_t)tmp_arr173 ), ((size_t)5)});
          });
      (*tmp_cell_ptr166 ) = ((uintptr_t)tmp_ptr165 );
      ({ /* cicili#Progn177 */
        printf ("NEW CELL: %zx %zx\n", ((uintptr_t)tmp_cell_ptr166 ), (*((size_t *)tmp_cell_ptr166 )));
      });
      ((cell_array_int){ ((uintptr_t)tmp_cell_ptr166 ), (*((size_t *)tmp_cell_ptr166 ))});
    });
    // ----------
    { /* cicili#Let183 */
      cell_array_int acc_cell181  = cell01 ;
      array_int ** acc_cell_ptr182  = ((array_int **)(acc_cell181 . ptr ));
      // ----------
      if (acc_cell_ptr182  &&  ((*((size_t *)acc_cell_ptr182 )) ==  (acc_cell181 . adr ) ) )
        { /* cicili#Block187 */
          { /* cicili#Let189 */
            __auto_type arr  = (*(*acc_cell_ptr182 ));
            // ----------
            printf ("1 cell01 arr len: %zu\n", (arr . len ));
          }
        }
    }
    { /* cicili#Let195 */
      cell_array_int acc_cell193  = cell01 ;
      array_int ** acc_cell_ptr194  = ((array_int **)(acc_cell193 . ptr ));
      // ----------
      if (acc_cell_ptr194  &&  ((*((size_t *)acc_cell_ptr194 )) ==  (acc_cell193 . adr ) ) )
        { /* cicili#Block199 */
          { /* cicili#Let201 */
            __auto_type arr  = (*acc_cell_ptr194 );
            // ----------
            printf ("2 cell01 arr len: %zu\n", ((*arr ). len ));
          }
        }
    }
    printf ("3 cell01 arr len: %zu\n", ({ /* cicili#Let207 */
        cell_array_int acc_cell205  = cell01 ;
        array_int ** acc_cell_ptr206  = ((array_int **)(acc_cell205 . ptr ));
        // ----------
        (((acc_cell_ptr206  &&  ((*((size_t *)acc_cell_ptr206 )) ==  (acc_cell205 . adr ) ) )) ? ({ /* cicili#Let209 */
            __auto_type arr  = (*(*acc_cell_ptr206 ));
            // ----------
            (arr . len );
          }) : -1);
      }));
    { /* cicili#Let215 */
      cell_array_int acc_cell213  = cell01 ;
      array_int ** acc_cell_ptr214  = ((array_int **)(acc_cell213 . ptr ));
      // ----------
      if (acc_cell_ptr214  &&  ((*((size_t *)acc_cell_ptr214 )) ==  (acc_cell213 . adr ) ) )
        { /* cicili#Block219 */
          { /* cicili#Let221 */
            __auto_type arr  = (*(*acc_cell_ptr214 ));
            // ----------
            ({ /* cicili#Progn224 */
              printf ("TAKE CELL: %zx %zx\n", (*((size_t *)acc_cell_ptr214 )), (acc_cell213 . adr ));
            });
            free (((void *)(acc_cell213 . ptr )));
            (acc_cell213 . ptr ) = 0;
            printf ("4 cell01 arr len: %zu\n", (arr . len ));
            force_free_array_int ((&arr ));
          }
        }
    }
    ({ /* cicili#Let230 */
      cell_array_int acc_cell228  = cell01 ;
      array_int ** acc_cell_ptr229  = ((array_int **)(acc_cell228 . ptr ));
      // ----------
      (((acc_cell_ptr229  &&  ((*((size_t *)acc_cell_ptr229 )) ==  (acc_cell228 . adr ) ) )) ? ({ /* cicili#Let232 */
          __auto_type arr  = (*acc_cell_ptr229 );
          // ----------
          ({ /* cicili#Progn235 */
            printf ("TAKEN CELL: %zx %zx\n", (*((size_t *)acc_cell_ptr229 )), (acc_cell228 . adr ));
          });
          free (((void *)(acc_cell228 . ptr )));
          (acc_cell228 . ptr ) = 0;
          printf ("5 cell01 arr len: %zu\n", ((*arr ). len ));
        }) : printf ("5 cell01 arr len: default path\n"));
    });
  }
}
