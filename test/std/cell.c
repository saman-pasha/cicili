#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#ifndef __MAYBE_H_
#define __MAYBE_H_
typedef enum MAYBE_CTOR {
  NOTHING_CTOR = 0,
  JUST_CTOR
} MAYBE_CTOR;
typedef struct NothingT {
  char _unused ;
} NothingT;
typedef struct std_maybe std_maybe ;
#endif /* __MAYBE_H_ */ 
#ifndef __MAYBE__ref_int__H_
#define __MAYBE__ref_int__H_
typedef struct JustT_ref_int {
  int * restrict value ;
} JustT_ref_int;
typedef struct Maybe_ref_int {
  MAYBE_CTOR ctor ;
  union { /* ciciliUnion109 */
    JustT_ref_int just ;
    NothingT nothing ;
  } data ;
} Maybe_ref_int;
typedef std_maybe Maybe_ref_int_type_t ;
Maybe_ref_int just_ref_int (int * restrict value );
Maybe_ref_int nothing_ref_int ();
#endif /* __MAYBE__ref_int__H_ */ 
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
Maybe_ref_int nth_array_int (size_t index , array_int * restrict array );
#ifndef __MAYBE_IMPL__ref_int__H_
#define __MAYBE_IMPL__ref_int__H_
Maybe_ref_int just_ref_int (int * restrict value ) {
  return ((Maybe_ref_int){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_ref_int nothing_ref_int () {
  return ((Maybe_ref_int){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__ref_int__H_ */ 
__attribute__((weak)) void free_array_int (array_int * restrict array ) {
  free ((array -> arr));
}
__attribute__((weak)) void free_array_int_pointer (array_int ** array ) {
  free_array_int ((*array ));
}
array_int new_array_int (const int * arr , size_t len , size_t cap ) {
  return ({ /* letn167 */
      int * restrict new_arr  = calloc (cap , sizeof(int));
      // ----------
      if (arr  &&  len  )
        { /* block174 */
          memcpy (new_arr , arr , (len  *  sizeof(int) ));
        }
      ((array_int){ new_arr , cap });
    });
}
size_t len_array_int (array_int * restrict array ) {
  return (array -> len);
}
Maybe_ref_int nth_array_int (size_t index , array_int * restrict array ) {
  if (index  <  (array -> len) )
    return ((Maybe_ref_int){ .ctor = JUST_CTOR , .data.just.value = ((array -> arr) +  index  )});
  else
    return ((Maybe_ref_int){ .ctor = NOTHING_CTOR });
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
    { /* block212 */
      free_array_int ((cell -> ptr));
      free ((cell -> ptr));
    }
}
__attribute__((weak)) void free_cell_array_int_pointer (cell_array_int ** cell ) {
  free_cell_array_int ((*cell ));
}
void let_cell_array_int_G285 (cell_array_int * restrict cell ) {
  if ((cell -> ptr))
    { /* block291 */
      { /* let293 */
        cell_array_int_interior_t * restrict arr_ref  = (cell -> ptr);
        // ----------
        printf ("1. cell01 arr len: %zu\n", len_array_int (arr_ref ));
      }
    }
}
size_t letn_cell_array_int_G299 (cell_array_int * restrict cell , const int default_value , int over ) {
  return (((cell -> ptr)) ? ({ /* letn302 */
        cell_array_int_interior_t * restrict arr_ref  = (cell -> ptr);
        // ----------
        (len_array_int (arr_ref ) +  over  );
      }) : default_value );
}
void take_cell_array_int_G308 (cell_array_int cell ) {
  cell_array_int * __moved_cell __attribute__((__cleanup__( free_cell_array_int_pointer))) = (& cell) ;
  if (cell . ptr)
    { /* block315 */
      ({ /* letn318 */
        array_int arr  __attribute__((__cleanup__(free_array_int ))) = ((array_int   )({ /* letnmove321 */
          array_int moved_var320  = (*(cell . ptr));
          // ----------
          memset ((&(*(cell . ptr))), 0, sizeof((*(cell . ptr))));
          moved_var320 ;
        }));
        // ----------
        printf ("3. cell01 arr len: %zu\n", (arr . len));
      });
    }
}
size_t taken_cell_array_int_G329 (cell_array_int cell , size_t default_value ) {
  cell_array_int * __moved_cell __attribute__((__cleanup__( free_cell_array_int_pointer))) = (& cell) ;
  return (((cell . ptr)) ? ({ /* letn334 */
        array_int arr  __attribute__((__cleanup__(free_array_int ))) = ((array_int   )({ /* letnmove337 */
          array_int moved_var336  = (*(cell . ptr));
          // ----------
          memset ((&(*(cell . ptr))), 0, sizeof((*(cell . ptr))));
          moved_var336 ;
        }));
        // ----------
        printf ("4. cell02 arr len: %zu\n", (arr . len));
      }) : default_value );
}
int main () {
  ({ /* letn252 */
    cell_array_int cell01  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn260 */
      array_int * array_int_ptr258  = malloc (sizeof(array_int));
      array_int array_int_obj259  = new_array_int (((int[]){ 1, 2, 3, 4}), 4, 4);
      // ----------
      memcpy (array_int_ptr258 , (&array_int_obj259 ), sizeof(array_int_obj259));
      ((cell_array_int){ array_int_ptr258 });
    });
    cell_array_int cell02  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn274 */
      array_int * array_int_ptr272  = malloc (sizeof(array_int));
      array_int array_int_obj273  = new_array_int (((int[]){ 1, 2, 3, 4, 5}), 5, 5);
      // ----------
      memcpy (array_int_ptr272 , (&array_int_obj273 ), sizeof(array_int_obj273));
      ((cell_array_int){ array_int_ptr272 });
    });
    // ----------
    { /* let282 */
      int aInt  = 10;
      // ----------
      let_cell_array_int_G285 ((&cell01 ));
      printf ("2. cell02 arr len + over: %zu\n", letn_cell_array_int_G299 ((&cell02 ), -1, aInt ));
      take_cell_array_int_G308 (((cell_array_int   )({ /* letnmove326 */
          cell_array_int moved_var325  = cell01 ;
          // ----------
          memset ((&cell01 ), 0, sizeof(cell01 ));
          moved_var325 ;
        })));
      taken_cell_array_int_G329 (((cell_array_int   )({ /* letnmove342 */
          cell_array_int moved_var341  = cell02 ;
          // ----------
          memset ((&cell02 ), 0, sizeof(cell02 ));
          moved_var341 ;
        })), printf ("4. default value is strict\n"));
    }
  });
}
