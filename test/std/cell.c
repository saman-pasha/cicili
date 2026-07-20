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
  const uintptr_t ptr ;
} cell_array_int;
typedef array_int cell_array_int_interior_t ;
__attribute__((weak)) void free_cell_array_int (cell_array_int * cell ) {
  ({ /* progn119 */
    printf ("FREE CELL: %zx\n", (cell -> ptr ));
  });
  if ((cell -> ptr ))
    { /* block124 */
      free_array_int (((array_int *)(cell -> ptr )));
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
        cell_array_int_interior_t arr  = (*((cell_array_int_interior_t *)(cell01 -> ptr )));
        // ----------
        printf ("1. cell01 arr len: %zu\n", (arr . len ));
      }
    }
}
size_t letn_cell_array_int_G274 (cell_array_int * restrict cell02 , const int default_value , int over ) {
  return (((cell02 -> ptr )) ? ({ /* letn277 */
        cell_array_int_interior_t arr  = (*((cell_array_int_interior_t *)(cell02 -> ptr )));
        // ----------
        ((arr . len ) +  over  );
      }) : default_value );
}
void let_cell_array_int_G283 (cell_array_int cell01 ) {
  cell_array_int * __moved_cell01 __attribute__((__cleanup__( free_cell_array_int_pointer))) = (& cell01) ;
  if (cell01 . ptr )
    { /* block290 */
      { /* let292 */
        cell_array_int_interior_t arr  = (*((cell_array_int_interior_t *)(cell01 . ptr )));
        // ----------
        printf ("3. cell01 arr len: %zu\n", (arr . len ));
      }
    }
}
size_t letn_cell_array_int_G300 (cell_array_int cell02 , size_t default_value ) {
  cell_array_int * __moved_cell02 __attribute__((__cleanup__( free_cell_array_int_pointer))) = (& cell02) ;
  return (((cell02 . ptr )) ? ({ /* letn304 */
        cell_array_int_interior_t arr  = (*((cell_array_int_interior_t *)(cell02 . ptr )));
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
        printf ("NEW CELL: %zx\n", ((uintptr_t)array_int_ptr206 ));
      });
      memcpy (array_int_ptr206 , (&array_int_obj207 ), sizeof(array_int_obj207));
      ((cell_array_int){ ((uintptr_t)array_int_ptr206 )});
    });
    cell_array_int cell02  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn237 */
      array_int * array_int_ptr235  = malloc (sizeof(array_int));
      array_int array_int_obj236  = new_array_int_G240 (((int[]){ 1, 2, 3, 4, 5}), 5);
      // ----------
      ({ /* progn253 */
        printf ("NEW CELL: %zx\n", ((uintptr_t)array_int_ptr235 ));
      });
      memcpy (array_int_ptr235 , (&array_int_obj236 ), sizeof(array_int_obj236));
      ((cell_array_int){ ((uintptr_t)array_int_ptr235 )});
    });
    // ----------
    { /* let257 */
      int aInt  = 10;
      // ----------
      let_cell_array_int_G260 ((&cell01 ));
      printf ("2. cell02 arr len + over: %zu\n", letn_cell_array_int_G274 ((&cell02 ), -1, aInt ));
      let_cell_array_int_G283 (({ /* LETNMOVE */
          __auto_type moved_var297  = cell01 ;
          // ----------
          memset (&cell01 , 0, sizeof(typeof(cell01)) );
          moved_var297 ;
        }));
      letn_cell_array_int_G300 (({ /* LETNMOVE */
          __auto_type moved_var309  = cell02 ;
          // ----------
          memset (&cell02 , 0, sizeof(typeof(cell02)) );
          moved_var309 ;
        }), printf ("4. default value is strict\n"));
    }
  });
}
