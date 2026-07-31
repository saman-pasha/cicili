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
typedef struct rc_array_int_context {
  array_int * const ptr ;
  size_t * count ;
} rc_array_int_context;
void free_rc_array_int_context (rc_array_int_context * ctx );
void free_rc_array_int_context_pointer (rc_array_int_context ** ctx );
typedef struct cell_rc_array_int_context {
  rc_array_int_context * restrict ptr ;
} cell_rc_array_int_context;
typedef rc_array_int_context cell_rc_array_int_context_interior_t ;
#ifndef __CELL_TYPE_H_
#define __CELL_TYPE_H_
typedef struct std_cell std_cell ;
#endif /* __CELL_TYPE_H_ */ 
typedef std_cell cell_rc_array_int_context_type_t ;
void free_cell_rc_array_int_context (cell_rc_array_int_context * cell );
void free_cell_rc_array_int_context_pointer (cell_rc_array_int_context ** cell );
cell_rc_array_int_context clone_rc_array_int_context (cell_rc_array_int_context * restrict ctx_cell );
__attribute__((weak)) void free_cell_rc_array_int_context (cell_rc_array_int_context * cell ) {
  if ((cell -> ptr))
    { /* block224 */
      free_rc_array_int_context ((cell -> ptr));
      free ((cell -> ptr));
    }
}
__attribute__((weak)) void free_cell_rc_array_int_context_pointer (cell_rc_array_int_context ** cell ) {
  free_cell_rc_array_int_context ((*cell ));
}
__attribute__((weak)) void free_rc_array_int_context (rc_array_int_context * ctx ) {
  if ((ctx -> ptr) &&  (ctx -> count) )
    { /* block239 */
      if ((*(ctx -> count)) ==  1 )
        { /* block245 */
          free_array_int ((ctx -> ptr));
          free ((ctx -> count));
          free ((ctx -> ptr));
        }
      else
        (--(*(ctx -> count)));
    }
}
__attribute__((weak)) void free_rc_array_int_context_pointer (rc_array_int_context ** ctx ) {
  free_rc_array_int_context ((*ctx ));
}
cell_rc_array_int_context clone_rc_array_int_context (cell_rc_array_int_context * restrict ctx_cell ) {
  if ((ctx_cell -> ptr) &&  ((ctx_cell -> ptr)-> ptr) &&  ((ctx_cell -> ptr)-> count) &&  ((*((ctx_cell -> ptr)-> count)) >=  1 ) )
    return ({ /* letn259 */
        rc_array_int_context * new_ctx  = malloc (sizeof((*(ctx_cell -> ptr))));
        // ----------
        (++(*((ctx_cell -> ptr)-> count)));
        memcpy (new_ctx , (ctx_cell -> ptr), sizeof((*(ctx_cell -> ptr))));
        ((cell_rc_array_int_context){ new_ctx });
      });
  else
    return ((cell_rc_array_int_context){ NULL });
}
void let_cell_rc_array_int_context_G350 (cell_rc_array_int_context * restrict cell ) {
  if ((cell -> ptr))
    { /* block356 */
      { /* let358 */
        cell_rc_array_int_context_interior_t * restrict arr_ptr_cell_rc_array_int_context_interior_t  = (cell -> ptr);
        // ----------
        { /* let362 */
          array_int * const arr_ptr  = (arr_ptr_cell_rc_array_int_context_interior_t -> ptr);
          // ----------
          printf ("1. rc01 arr len: %zu\n", ((*arr_ptr ). len));
        }
      }
    }
}
size_t letn_cell_rc_array_int_context_G367 (cell_rc_array_int_context * restrict cell , const int default_value ) {
  return (((cell -> ptr)) ? ({ /* letn370 */
        cell_rc_array_int_context_interior_t * restrict arr_ptr_cell_rc_array_int_context_interior_t  = (cell -> ptr);
        // ----------
        ({ /* letn374 */
          array_int * const arr_ptr  = (arr_ptr_cell_rc_array_int_context_interior_t -> ptr);
          // ----------
          ((*arr_ptr ). len);
        });
      }) : default_value );
}
void take_cell_rc_array_int_context_G386 (cell_rc_array_int_context cell ) {
  cell_rc_array_int_context * __moved_cell __attribute__((__cleanup__( free_cell_rc_array_int_context_pointer))) = (& cell) ;
  if (cell . ptr)
    { /* block393 */
      ({ /* letn396 */
        rc_array_int_context arr_cell_rc_array_int_context_interior_t  __attribute__((__cleanup__(free_rc_array_int_context ))) = ((rc_array_int_context   )({ /* letnmove400 */
          rc_array_int_context moved_var399  = (*(cell . ptr));
          // ----------
          memset ((&(*(cell . ptr))), 0, sizeof((*(cell . ptr))));
          moved_var399 ;
        }));
        // ----------
        if ((arr_cell_rc_array_int_context_interior_t . ptr) &&  (arr_cell_rc_array_int_context_interior_t . count) &&  ((*(arr_cell_rc_array_int_context_interior_t . count)) ==  1 ) )
          { /* block409 */
            ({ /* letn413 */
              array_int arr  __attribute__((__cleanup__(free_array_int ))) = ((array_int   )({ /* letnmove416 */
                array_int moved_var415  = (*(arr_cell_rc_array_int_context_interior_t . ptr));
                // ----------
                memset ((&(*(arr_cell_rc_array_int_context_interior_t . ptr))), 0, sizeof((*(arr_cell_rc_array_int_context_interior_t . ptr))));
                moved_var415 ;
              }));
              // ----------
              printf ("3. rc01 arr len: %zu\n", (arr . len));
            });
          }
      });
    }
}
size_t taken_cell_rc_array_int_context_G424 (cell_rc_array_int_context cell , size_t default_value ) {
  cell_rc_array_int_context * __moved_cell __attribute__((__cleanup__( free_cell_rc_array_int_context_pointer))) = (& cell) ;
  return (((cell . ptr)) ? ({ /* letn429 */
        rc_array_int_context arr_cell_rc_array_int_context_interior_t  __attribute__((__cleanup__(free_rc_array_int_context ))) = ((rc_array_int_context   )({ /* letnmove433 */
          rc_array_int_context moved_var432  = (*(cell . ptr));
          // ----------
          memset ((&(*(cell . ptr))), 0, sizeof((*(cell . ptr))));
          moved_var432 ;
        }));
        // ----------
        ((((arr_cell_rc_array_int_context_interior_t . ptr) &&  (arr_cell_rc_array_int_context_interior_t . count) &&  ((*(arr_cell_rc_array_int_context_interior_t . count)) ==  1 ) )) ? ({ /* letn441 */
            array_int arr  __attribute__((__cleanup__(free_array_int ))) = ((array_int   )({ /* letnmove444 */
              array_int moved_var443  = (*(arr_cell_rc_array_int_context_interior_t . ptr));
              // ----------
              memset ((&(*(arr_cell_rc_array_int_context_interior_t . ptr))), 0, sizeof((*(arr_cell_rc_array_int_context_interior_t . ptr))));
              moved_var443 ;
            }));
            // ----------
            printf ("4. rc01 arr len: %zu\n", (arr . len));
          }) : default_value );
      }) : default_value );
}
int main () {
  ({ /* letn309 */
    cell_rc_array_int_context rc01  __attribute__((__cleanup__(free_cell_rc_array_int_context ))) = ({ /* letn329 */
      rc_array_int_context * rc_array_int_context_ptr327  = malloc (sizeof(rc_array_int_context));
      rc_array_int_context rc_array_int_context_obj328  = ({ /* letn337 */
        array_int * array_int_ptr334  = malloc (sizeof(array_int));
        array_int array_int_obj335  = new_array_int (((const int[]){ 1, 2, 3, 4, 5}), 5, 5);
        size_t * array_int_count336  = malloc (sizeof(size_t));
        // ----------
        memcpy (array_int_ptr334 , (&array_int_obj335 ), sizeof(array_int_obj335));
        (*array_int_count336 ) = 1;
        ((rc_array_int_context){ array_int_ptr334 , array_int_count336 });
      });
      // ----------
      memcpy (rc_array_int_context_ptr327 , (&rc_array_int_context_obj328 ), sizeof(rc_array_int_context_obj328));
      ((cell_rc_array_int_context){ rc_array_int_context_ptr327 });
    });
    // ----------
    let_cell_rc_array_int_context_G350 ((&rc01 ));
    printf ("2. rc01 arr len: %zu\n", letn_cell_rc_array_int_context_G367 ((&rc01 ), -1));
    ({ /* letn382 */
      cell_rc_array_int_context cl01  __attribute__((__cleanup__(free_cell_rc_array_int_context ))) = clone_rc_array_int_context ((&rc01 ));
      // ----------
      take_cell_rc_array_int_context_G386 (((cell_rc_array_int_context   )({ /* letnmove421 */
          cell_rc_array_int_context moved_var420  = cl01 ;
          // ----------
          memset ((&cl01 ), 0, sizeof(cl01 ));
          moved_var420 ;
        })));
    });
    taken_cell_rc_array_int_context_G424 (((cell_rc_array_int_context   )({ /* letnmove449 */
        cell_rc_array_int_context moved_var448  = rc01 ;
        // ----------
        memset ((&rc01 ), 0, sizeof(rc01 ));
        moved_var448 ;
      })), printf ("4. default value is strict\n"));
    fprintf (stdout , "Done\n");
  });
}
