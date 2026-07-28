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
  ({ /* progn112 */
    printf ("FREE ARR: %p\n", (array -> arr));
  });
  free ((array -> arr));
}
__attribute__((weak)) void free_array_int_pointer (array_int ** array ) {
  free_array_int ((*array ));
}
typedef struct rc_array_int_context {
  array_int * const ptr ;
  size_t * count ;
} rc_array_int_context;
__attribute__((weak)) void free_rc_array_int_context (rc_array_int_context * ctx ) {
  ({ /* progn125 */
    printf ("FREE RC CTX: %p\n", (ctx -> ptr));
  });
  if ((ctx -> ptr) &&  (ctx -> count) )
    { /* block130 */
      ({ /* progn133 */
        printf ("FREE RC CTX COUNT: %zu\n", (*(ctx -> count)));
      });
      if ((*(ctx -> count)) ==  1 )
        { /* block137 */
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
typedef struct cell_rc_array_int_context {
  rc_array_int_context * restrict ptr ;
} cell_rc_array_int_context;
typedef rc_array_int_context cell_rc_array_int_context_interior_t ;
#ifndef __CELL_TYPE_H_
#define __CELL_TYPE_H_
typedef struct std_cell std_cell ;
#endif /* __CELL_TYPE_H_ */ 
typedef std_cell cell_rc_array_int_context_type_t ;
__attribute__((weak)) void free_cell_rc_array_int_context (cell_rc_array_int_context * cell ) {
  ({ /* progn156 */
    printf ("FREE CELL: %p\n", (cell -> ptr));
  });
  if ((cell -> ptr))
    { /* block161 */
      free_rc_array_int_context ((cell -> ptr));
      free ((cell -> ptr));
    }
}
__attribute__((weak)) void free_cell_rc_array_int_context_pointer (cell_rc_array_int_context ** cell ) {
  free_cell_rc_array_int_context ((*cell ));
}
array_int new_array_int_G281 (const int * arr , const int len ) {
  return ({ /* letn285 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn288 */
        printf ("NEW ARR: %s %p %zu\n", "const int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
void let_cell_rc_array_int_context_G306 (cell_rc_array_int_context * restrict cell ) {
  if ((cell -> ptr))
    { /* block312 */
      { /* let314 */
        cell_rc_array_int_context_interior_t * restrict arr_ptr_cell_rc_array_int_context_interior_t  = (cell -> ptr);
        // ----------
        { /* let318 */
          array_int * const arr_ptr  = (arr_ptr_cell_rc_array_int_context_interior_t -> ptr);
          // ----------
          printf ("1. rc01 arr len: %zu\n", ((*arr_ptr ). len));
        }
      }
    }
}
size_t letn_cell_rc_array_int_context_G326 (cell_rc_array_int_context * restrict cell , const int default_value ) {
  return (((cell -> ptr)) ? ({ /* letn329 */
        cell_rc_array_int_context_interior_t * restrict arr_ptr_cell_rc_array_int_context_interior_t  = (cell -> ptr);
        // ----------
        ({ /* letn333 */
          array_int * const arr_ptr  = (arr_ptr_cell_rc_array_int_context_interior_t -> ptr);
          // ----------
          ((*arr_ptr ). len);
        });
      }) : default_value );
}
cell_rc_array_int_context letn_cell_rc_array_int_context_G348 (cell_rc_array_int_context * restrict cell , cell_rc_array_int_context default_value ) {
  return (((cell -> ptr)) ? ({ /* letn379 */
        cell_rc_array_int_context_interior_t * restrict ctx_rc_array_int_context  = (cell -> ptr);
        // ----------
        ((((ctx_rc_array_int_context -> ptr) &&  (ctx_rc_array_int_context -> count) &&  ((*(ctx_rc_array_int_context -> count)) >=  1 ) )) ? ({ /* progn381 */
            (++(*(ctx_rc_array_int_context -> count)));
            ({ /* letn383 */
              rc_array_int_context * tmp_rc343  = malloc (sizeof(rc_array_int_context));
              // ----------
              memcpy (tmp_rc343 , ctx_rc_array_int_context , sizeof(rc_array_int_context));
              ((cell_rc_array_int_context){ tmp_rc343 });
            });
          }) : default_value );
      }) : default_value );
}
void take_cell_rc_array_int_context_G389 (cell_rc_array_int_context cell ) {
  cell_rc_array_int_context * __moved_cell __attribute__((__cleanup__( free_cell_rc_array_int_context_pointer))) = (& cell) ;
  if (cell . ptr)
    { /* block396 */
      ({ /* letn399 */
        rc_array_int_context arr_cell_rc_array_int_context_interior_t  __attribute__((__cleanup__(free_rc_array_int_context ))) = (*(cell . ptr));
        // ----------
        if ((arr_cell_rc_array_int_context_interior_t . ptr) &&  (arr_cell_rc_array_int_context_interior_t . count) &&  ((*(arr_cell_rc_array_int_context_interior_t . count)) ==  1 ) )
          { /* block409 */
            ({ /* letn413 */
              array_int arr  __attribute__((__cleanup__(free_array_int ))) = (*(arr_cell_rc_array_int_context_interior_t . ptr));
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
        rc_array_int_context arr_cell_rc_array_int_context_interior_t  __attribute__((__cleanup__(free_rc_array_int_context ))) = (*(cell . ptr));
        // ----------
        ((((arr_cell_rc_array_int_context_interior_t . ptr) &&  (arr_cell_rc_array_int_context_interior_t . count) &&  ((*(arr_cell_rc_array_int_context_interior_t . count)) ==  1 ) )) ? ({ /* letn438 */
            array_int arr  __attribute__((__cleanup__(free_array_int ))) = (*(arr_cell_rc_array_int_context_interior_t . ptr));
            // ----------
            printf ("4. rc01 arr len: %zu\n", (arr . len));
          }) : default_value );
      }) : default_value );
}
int main () {
  ({ /* letn238 */
    cell_rc_array_int_context rc01  __attribute__((__cleanup__(free_cell_rc_array_int_context ))) = ({ /* letn270 */
      rc_array_int_context * rc_array_int_context_ptr268  = malloc (sizeof(rc_array_int_context));
      rc_array_int_context rc_array_int_context_obj269  = ({ /* letn279 */
        array_int * array_int_ptr276  = malloc (sizeof(array_int));
        array_int array_int_obj277  = new_array_int_G281 (((const int[]){ 1, 2, 3, 4, 5}), 5);
        size_t * array_int_count278  = malloc (sizeof(size_t));
        // ----------
        ({ /* progn294 */
          printf ("NEW RC CTX: %p\n", array_int_ptr276 );
        });
        memcpy (array_int_ptr276 , (&array_int_obj277 ), sizeof(array_int_obj277));
        (*array_int_count278 ) = 1;
        ((rc_array_int_context){ array_int_ptr276 , array_int_count278 });
      });
      // ----------
      ({ /* progn299 */
        printf ("NEW CELL: %p\n", rc_array_int_context_ptr268 );
      });
      memcpy (rc_array_int_context_ptr268 , (&rc_array_int_context_obj269 ), sizeof(rc_array_int_context_obj269));
      ((cell_rc_array_int_context){ rc_array_int_context_ptr268 });
    });
    // ----------
    let_cell_rc_array_int_context_G306 ((&rc01 ));
    printf ("2. rc01 arr len: %zu\n", letn_cell_rc_array_int_context_G326 ((&rc01 ), -1));
    ({ /* letn373 */
      cell_rc_array_int_context cl01  __attribute__((__cleanup__(free_cell_rc_array_int_context ))) = ({ /* letn375 */
        cell_rc_array_int_context * restrict tmp_rc342  = (&rc01 );
        typeof((*tmp_rc342 )) def_value  = ((typeof((*tmp_rc342 ))){ 0});
        // ----------
        letn_cell_rc_array_int_context_G348 ((&(*tmp_rc342 )), def_value );
      });
      // ----------
      take_cell_rc_array_int_context_G389 (((cell_rc_array_int_context   )({ /* letnmove419 */
          cell_rc_array_int_context moved_var418  = cl01 ;
          // ----------
          memset ((&cl01 ), 0, sizeof(cl01 ));
          moved_var418 ;
        })));
    });
    taken_cell_rc_array_int_context_G424 (((cell_rc_array_int_context   )({ /* letnmove444 */
        cell_rc_array_int_context moved_var443  = rc01 ;
        // ----------
        memset ((&rc01 ), 0, sizeof(rc01 ));
        moved_var443 ;
      })), printf ("4. default value is strict\n"));
    fprintf (stdout , "Done\n");
  });
}
