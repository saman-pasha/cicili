#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct maybe_int {
  bool present ;
  int value ;
} maybe_int;
typedef int maybe_int_interior_t ;
#ifndef __MAYBE_TYPE_H_
#define __MAYBE_TYPE_H_
typedef struct std_maybe std_maybe ;
#endif /* __MAYBE_TYPE_H_ */ 
typedef std_maybe maybe_int_type_t ;
maybe_int just_maybe_int (int value );
maybe_int nothing_maybe_int ();
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
void free_array_int (array_int * restrict array );
void free_array_int_pointer (array_int ** array );
array_int new_array_int (const int * arr , size_t len , size_t cap );
size_t len_array_int (array_int * restrict array );
maybe_int nth_array_int (size_t index , array_int * restrict array );
__attribute__((weak)) maybe_int just_maybe_int (int value ) {
  return ((maybe_int){ true , value });
}
__attribute__((weak)) maybe_int nothing_maybe_int () {
  return ((maybe_int){ false , ((int){ 0})});
}
__attribute__((weak)) void free_array_int (array_int * restrict array ) {
  free ((array -> arr));
}
__attribute__((weak)) void free_array_int_pointer (array_int ** array ) {
  free_array_int ((*array ));
}
array_int new_array_int (const int * arr , size_t len , size_t cap ) {
  return ({ /* letn163 */
      int * new_arr  = calloc (cap , sizeof(int));
      // ----------
      if (arr  &&  len  )
        { /* block170 */
          memcpy (new_arr , arr , (len  *  sizeof(int) ));
        }
      ((array_int){ new_arr , cap });
    });
}
size_t len_array_int (array_int * restrict array ) {
  return (array -> len);
}
maybe_int nth_array_int (size_t index , array_int * restrict array ) {
  if (index  <  (array -> len) )
    return ((maybe_int){ true , (array -> arr)[index ]});
  else
    return ((maybe_int){ false , ((maybe_int_interior_t){ 0})});
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
void free_cell_array_int (cell_array_int * cell );
void free_cell_array_int_pointer (cell_array_int ** cell );
__attribute__((weak)) void free_cell_array_int (cell_array_int * cell ) {
  if ((cell -> ptr))
    { /* block209 */
      free_array_int ((cell -> ptr));
      free ((cell -> ptr));
    }
}
__attribute__((weak)) void free_cell_array_int_pointer (cell_array_int ** cell ) {
  free_cell_array_int ((*cell ));
}
void let_cell_array_int_G282 (cell_array_int * restrict cell ) {
  if ((cell -> ptr))
    { /* block288 */
      { /* let290 */
        cell_array_int_interior_t * restrict arr_ref  = (cell -> ptr);
        // ----------
        printf ("1. cell01 arr len: %zu\n", len_array_int (arr_ref ));
      }
    }
}
size_t letn_cell_array_int_G296 (cell_array_int * restrict cell , const int default_value , int over ) {
  return (((cell -> ptr)) ? ({ /* letn299 */
        cell_array_int_interior_t * restrict arr_ref  = (cell -> ptr);
        // ----------
        (len_array_int (arr_ref ) +  over  );
      }) : default_value );
}
void take_cell_array_int_G305 (cell_array_int cell ) {
  cell_array_int * __moved_cell __attribute__((__cleanup__( free_cell_array_int_pointer))) = (& cell) ;
  if (cell . ptr)
    { /* block312 */
      ({ /* letn315 */
        array_int arr  __attribute__((__cleanup__(free_array_int ))) = ((array_int   )({ /* letnmove318 */
          array_int moved_var317  = (*(cell . ptr));
          // ----------
          memset ((&(*(cell . ptr))), 0, sizeof((*(cell . ptr))));
          moved_var317 ;
        }));
        // ----------
        printf ("3. cell01 arr len: %zu\n", (arr . len));
      });
    }
}
size_t taken_cell_array_int_G326 (cell_array_int cell , size_t default_value ) {
  cell_array_int * __moved_cell __attribute__((__cleanup__( free_cell_array_int_pointer))) = (& cell) ;
  return (((cell . ptr)) ? ({ /* letn331 */
        array_int arr  __attribute__((__cleanup__(free_array_int ))) = ((array_int   )({ /* letnmove334 */
          array_int moved_var333  = (*(cell . ptr));
          // ----------
          memset ((&(*(cell . ptr))), 0, sizeof((*(cell . ptr))));
          moved_var333 ;
        }));
        // ----------
        printf ("4. cell02 arr len: %zu\n", (arr . len));
      }) : default_value );
}
int main () {
  ({ /* letn249 */
    cell_array_int cell01  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn257 */
      array_int * array_int_ptr255  = malloc (sizeof(array_int));
      array_int array_int_obj256  = new_array_int (((int[]){ 1, 2, 3, 4}), 4, 4);
      // ----------
      memcpy (array_int_ptr255 , (&array_int_obj256 ), sizeof(array_int_obj256));
      ((cell_array_int){ array_int_ptr255 });
    });
    cell_array_int cell02  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn271 */
      array_int * array_int_ptr269  = malloc (sizeof(array_int));
      array_int array_int_obj270  = new_array_int (((int[]){ 1, 2, 3, 4, 5}), 5, 5);
      // ----------
      memcpy (array_int_ptr269 , (&array_int_obj270 ), sizeof(array_int_obj270));
      ((cell_array_int){ array_int_ptr269 });
    });
    // ----------
    { /* let279 */
      int aInt  = 10;
      // ----------
      let_cell_array_int_G282 ((&cell01 ));
      printf ("2. cell02 arr len + over: %zu\n", letn_cell_array_int_G296 ((&cell02 ), -1, aInt ));
      take_cell_array_int_G305 (((cell_array_int   )({ /* letnmove323 */
          cell_array_int moved_var322  = cell01 ;
          // ----------
          memset ((&cell01 ), 0, sizeof(cell01 ));
          moved_var322 ;
        })));
      taken_cell_array_int_G326 (((cell_array_int   )({ /* letnmove339 */
          cell_array_int moved_var338  = cell02 ;
          // ----------
          memset ((&cell02 ), 0, sizeof(cell02 ));
          moved_var338 ;
        })), printf ("4. default value is strict\n"));
    }
  });
}
