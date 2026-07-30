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
    return ((maybe_int){ false , ((int){ 0})});
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
    { /* block208 */
      free_array_int ((cell -> ptr));
      free ((cell -> ptr));
    }
}
__attribute__((weak)) void free_cell_array_int_pointer (cell_array_int ** cell ) {
  free_cell_array_int ((*cell ));
}
void let_cell_array_int_G281 (cell_array_int * restrict cell ) {
  if ((cell -> ptr))
    { /* block287 */
      { /* let289 */
        cell_array_int_interior_t * restrict arr_ref  = (cell -> ptr);
        // ----------
        printf ("1. cell01 arr len: %zu\n", len_array_int (arr_ref ));
      }
    }
}
size_t letn_cell_array_int_G295 (cell_array_int * restrict cell , const int default_value , int over ) {
  return (((cell -> ptr)) ? ({ /* letn298 */
        cell_array_int_interior_t * restrict arr_ref  = (cell -> ptr);
        // ----------
        (len_array_int (arr_ref ) +  over  );
      }) : default_value );
}
void take_cell_array_int_G304 (cell_array_int cell ) {
  cell_array_int * __moved_cell __attribute__((__cleanup__( free_cell_array_int_pointer))) = (& cell) ;
  if (cell . ptr)
    { /* block311 */
      ({ /* letn314 */
        array_int arr  __attribute__((__cleanup__(free_array_int ))) = ((array_int   )({ /* letnmove317 */
          array_int moved_var316  = (*(cell . ptr));
          // ----------
          memset ((&(*(cell . ptr))), 0, sizeof((*(cell . ptr))));
          moved_var316 ;
        }));
        // ----------
        printf ("3. cell01 arr len: %zu\n", (arr . len));
      });
    }
}
size_t taken_cell_array_int_G325 (cell_array_int cell , size_t default_value ) {
  cell_array_int * __moved_cell __attribute__((__cleanup__( free_cell_array_int_pointer))) = (& cell) ;
  return (((cell . ptr)) ? ({ /* letn330 */
        array_int arr  __attribute__((__cleanup__(free_array_int ))) = ((array_int   )({ /* letnmove333 */
          array_int moved_var332  = (*(cell . ptr));
          // ----------
          memset ((&(*(cell . ptr))), 0, sizeof((*(cell . ptr))));
          moved_var332 ;
        }));
        // ----------
        printf ("4. cell02 arr len: %zu\n", (arr . len));
      }) : default_value );
}
int main () {
  ({ /* letn248 */
    cell_array_int cell01  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn256 */
      array_int * array_int_ptr254  = malloc (sizeof(array_int));
      array_int array_int_obj255  = new_array_int (((int[]){ 1, 2, 3, 4}), 4, 4);
      // ----------
      memcpy (array_int_ptr254 , (&array_int_obj255 ), sizeof(array_int_obj255));
      ((cell_array_int){ array_int_ptr254 });
    });
    cell_array_int cell02  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn270 */
      array_int * array_int_ptr268  = malloc (sizeof(array_int));
      array_int array_int_obj269  = new_array_int (((int[]){ 1, 2, 3, 4, 5}), 5, 5);
      // ----------
      memcpy (array_int_ptr268 , (&array_int_obj269 ), sizeof(array_int_obj269));
      ((cell_array_int){ array_int_ptr268 });
    });
    // ----------
    { /* let278 */
      int aInt  = 10;
      // ----------
      let_cell_array_int_G281 ((&cell01 ));
      printf ("2. cell02 arr len + over: %zu\n", letn_cell_array_int_G295 ((&cell02 ), -1, aInt ));
      take_cell_array_int_G304 (((cell_array_int   )({ /* letnmove322 */
          cell_array_int moved_var321  = cell01 ;
          // ----------
          memset ((&cell01 ), 0, sizeof(cell01 ));
          moved_var321 ;
        })));
      taken_cell_array_int_G325 (((cell_array_int   )({ /* letnmove338 */
          cell_array_int moved_var337  = cell02 ;
          // ----------
          memset ((&cell02 ), 0, sizeof(cell02 ));
          moved_var337 ;
        })), printf ("4. default value is strict\n"));
    }
  });
}
