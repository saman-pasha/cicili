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
      free ((cell -> ptr ));
    }
}
__attribute__((weak)) void free_cell_array_int_pointer (cell_array_int ** cell ) {
  free_cell_array_int ((*cell ));
}
array_int new_array_int_G220 (int * arr , const int len ) {
  return ({ /* letn224 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn227 */
        printf ("NEW ARR: %s %p %zu\n", "int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
array_int new_array_int_G249 (int * arr , const int len ) {
  return ({ /* letn253 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn256 */
        printf ("NEW ARR: %s %p %zu\n", "int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
void let_cell_array_int_G270 (cell_array_int * restrict cell ) {
  if ((cell -> ptr ))
    { /* block276 */
      { /* let278 */
        cell_array_int_interior_t * restrict arr_ref  = (cell -> ptr );
        // ----------
        printf ("1. cell01 arr len: %zu\n", ((*arr_ref ). len ));
      }
    }
}
size_t letn_cell_array_int_G285 (cell_array_int * restrict cell , const int default_value , int over ) {
  return (((cell -> ptr )) ? ({ /* letn288 */
        cell_array_int_interior_t * restrict arr_ref  = (cell -> ptr );
        // ----------
        (((*arr_ref ). len ) +  over  );
      }) : default_value );
}
void take_cell_array_int_G295 (cell_array_int cell ) {
  cell_array_int * __moved_cell __attribute__((__cleanup__( free_cell_array_int_pointer))) = (& cell) ;
  if (cell . ptr )
    { /* block302 */
      ({ /* letn305 */
        array_int arr  __attribute__((__cleanup__(free_array_int ))) = ((array_int   )({ /* letnmove308 */
          array_int moved_var307  = (*(cell . ptr ));
          // ----------
          memset ((&(*(cell . ptr ))), 0, sizeof((*(cell . ptr ))));
          moved_var307 ;
        }));
        // ----------
        printf ("3. cell01 arr len: %zu\n", (arr . len ));
      });
    }
}
size_t taken_cell_array_int_G318 (cell_array_int cell , size_t default_value ) {
  cell_array_int * __moved_cell __attribute__((__cleanup__( free_cell_array_int_pointer))) = (& cell) ;
  return (((cell . ptr )) ? ({ /* letn323 */
        array_int arr  __attribute__((__cleanup__(free_array_int ))) = ((array_int   )({ /* letnmove326 */
          array_int moved_var325  = (*(cell . ptr ));
          // ----------
          memset ((&(*(cell . ptr ))), 0, sizeof((*(cell . ptr ))));
          moved_var325 ;
        }));
        // ----------
        printf ("4. cell02 arr len: %zu\n", (arr . len ));
      }) : default_value );
}
int main () {
  ({ /* letn206 */
    cell_array_int cell01  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn217 */
      array_int * array_int_ptr215  = malloc (sizeof(array_int));
      array_int array_int_obj216  = new_array_int_G220 (((int[]){ 1, 2, 3, 4}), 4);
      // ----------
      ({ /* progn233 */
        printf ("NEW CELL: %p\n", array_int_ptr215 );
      });
      memcpy (array_int_ptr215 , (&array_int_obj216 ), sizeof(array_int_obj216));
      ((cell_array_int){ array_int_ptr215 });
    });
    cell_array_int cell02  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn246 */
      array_int * array_int_ptr244  = malloc (sizeof(array_int));
      array_int array_int_obj245  = new_array_int_G249 (((int[]){ 1, 2, 3, 4, 5}), 5);
      // ----------
      ({ /* progn262 */
        printf ("NEW CELL: %p\n", array_int_ptr244 );
      });
      memcpy (array_int_ptr244 , (&array_int_obj245 ), sizeof(array_int_obj245));
      ((cell_array_int){ array_int_ptr244 });
    });
    // ----------
    { /* let266 */
      int aInt  = 10;
      // ----------
      let_cell_array_int_G270 ((&cell01 ));
      printf ("2. cell02 arr len + over: %zu\n", letn_cell_array_int_G285 ((&cell02 ), -1, aInt ));
      take_cell_array_int_G295 (((cell_array_int   )({ /* letnmove314 */
          cell_array_int moved_var313  = cell01 ;
          // ----------
          memset ((&cell01 ), 0, sizeof(cell01 ));
          moved_var313 ;
        })));
      taken_cell_array_int_G318 (((cell_array_int   )({ /* letnmove332 */
          cell_array_int moved_var331  = cell02 ;
          // ----------
          memset ((&cell02 ), 0, sizeof(cell02 ));
          moved_var331 ;
        })), printf ("4. default value is strict\n"));
    }
  });
}
