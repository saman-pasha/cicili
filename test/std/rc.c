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
typedef struct rc_array_int_context {
  array_int * restrict ptr ;
  size_t * count ;
} rc_array_int_context;
__attribute__((weak)) void free_rc_array_int_context (rc_array_int_context * ctx ) {
  ({ /* progn126 */
    printf ("FREE RC CTX: %p\n", (ctx -> ptr ));
  });
  if ((ctx -> ptr ) &&  (ctx -> count ) &&  ((*(ctx -> count )) ==  1 ) )
    { /* block131 */
      free_array_int ((ctx -> ptr ));
      free ((ctx -> count ));
      free ((ctx -> ptr ));
    }
}
__attribute__((weak)) void free_rc_array_int_context_pointer (rc_array_int_context ** ctx ) {
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
  ({ /* progn149 */
    printf ("FREE CELL: %p\n", (cell -> ptr ));
  });
  if ((cell -> ptr ))
    { /* block154 */
      free_rc_array_int_context ((cell -> ptr ));
    }
  free ((cell -> ptr ));
}
__attribute__((weak)) void free_cell_rc_array_int_context_pointer (cell_rc_array_int_context ** cell ) {
  free_cell_rc_array_int_context ((*cell ));
}
__attribute__((weak)) void force_free_rc_array_int_context (rc_array_int_context * obj ) {
  free_rc_array_int_context (obj );
}
array_int new_array_int_G185 (const int * arr , const int len ) {
  return ({ /* letn189 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn192 */
        printf ("NEW ARR: %s %p %zu\n", "const int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
array_int new_array_int_G217 (const int * arr , const int len ) {
  return ({ /* letn221 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn224 */
        printf ("NEW ARR: %s %p %zu\n", "const int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
array_int new_array_int_G256 (const int * arr , const int len ) {
  return ({ /* letn260 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn263 */
        printf ("NEW ARR: %s %p %zu\n", "const int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
array_int new_array_int_G288 (const int * arr , const int len ) {
  return ({ /* letn292 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn295 */
        printf ("NEW ARR: %s %p %zu\n", "const int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
void let_cell_rc_array_int_context_G313 (cell_rc_array_int_context * restrict cell ) {
  if ((cell -> ptr ))
    { /* block319 */
      { /* let321 */
        cell_rc_array_int_context_interior_t * restrict arr_ptr_cell_rc_array_int_context_interior_t  = (cell -> ptr );
        // ----------
        { /* let325 */
          array_int * restrict arr_ptr  = (arr_ptr_cell_rc_array_int_context_interior_t -> ptr );
          // ----------
          printf ("1. rc01 arr len: %zu\n", ((*arr_ptr ). len ));
        }
      }
    }
}
size_t letn_cell_rc_array_int_context_G333 (cell_rc_array_int_context * restrict cell , const int default_value ) {
  return (((cell -> ptr )) ? ({ /* letn336 */
        cell_rc_array_int_context_interior_t * restrict arr_ptr_cell_rc_array_int_context_interior_t  = (cell -> ptr );
        // ----------
        ({ /* letn340 */
          array_int * restrict arr_ptr  = (arr_ptr_cell_rc_array_int_context_interior_t -> ptr );
          // ----------
          ((*arr_ptr ). len );
        });
      }) : default_value );
}
cell_rc_array_int_context letn_cell_rc_array_int_context_G353 (cell_rc_array_int_context * restrict cell , cell_rc_array_int_context default_value ) {
  return (((cell -> ptr )) ? ({ /* letn356 */
        cell_rc_array_int_context_interior_t * restrict ctx_rc_array_int_context  = (cell -> ptr );
        // ----------
        ((((ctx_rc_array_int_context -> ptr ) &&  (ctx_rc_array_int_context -> count ) &&  ((*(ctx_rc_array_int_context -> count )) >=  1 ) )) ? ({ /* progn363 */
            (++(*(ctx_rc_array_int_context -> count )));
            default_value ;
          }) : default_value );
      }) : default_value );
}
cell_rc_array_int_context letn_cell_rc_array_int_context_G393 (cell_rc_array_int_context * restrict cell , cell_rc_array_int_context default_value ) {
  return (((cell -> ptr )) ? ({ /* letn396 */
        cell_rc_array_int_context_interior_t * restrict ctx_rc_array_int_context  = (cell -> ptr );
        // ----------
        ((((ctx_rc_array_int_context -> ptr ) &&  (ctx_rc_array_int_context -> count ) &&  ((*(ctx_rc_array_int_context -> count )) >=  1 ) )) ? ({ /* progn403 */
            (++(*(ctx_rc_array_int_context -> count )));
            default_value ;
          }) : default_value );
      }) : default_value );
}
void take_cell_rc_array_int_context_G410 (cell_rc_array_int_context cell ) {
  cell_rc_array_int_context * __moved_cell __attribute__((__cleanup__( free_cell_rc_array_int_context_pointer))) = (& cell) ;
  if (cell . ptr )
    { /* block417 */
      ({ /* letn420 */
        rc_array_int_context arr_cell_rc_array_int_context_interior_t  __attribute__((__cleanup__(free_rc_array_int_context ))) = ({ /* letnmove424 */
          __auto_type moved_var423  = (*(cell . ptr ));
          // ----------
          memset ((&(*(cell . ptr ))), 0, sizeof((*(cell . ptr ))));
          moved_var423 ;
        });
        // ----------
        if ((arr_cell_rc_array_int_context_interior_t . ptr ) &&  (arr_cell_rc_array_int_context_interior_t . count ) &&  ((*(arr_cell_rc_array_int_context_interior_t . count )) >=  1 ) )
          { /* block433 */
            { /* let435 */
              array_int * restrict arr  = (arr_cell_rc_array_int_context_interior_t . ptr );
              // ----------
              printf ("3. rc01 arr len: %zu\n", ((*arr ). len ));
            }
          }
      });
    }
}
size_t taken_cell_rc_array_int_context_G446 (cell_rc_array_int_context cell , size_t default_value ) {
  cell_rc_array_int_context * __moved_cell __attribute__((__cleanup__( free_cell_rc_array_int_context_pointer))) = (& cell) ;
  return (((cell . ptr )) ? ({ /* letn451 */
        rc_array_int_context arr_cell_rc_array_int_context_interior_t  __attribute__((__cleanup__(free_rc_array_int_context ))) = ({ /* letnmove455 */
          __auto_type moved_var454  = (*(cell . ptr ));
          // ----------
          memset ((&(*(cell . ptr ))), 0, sizeof((*(cell . ptr ))));
          moved_var454 ;
        });
        // ----------
        ((((arr_cell_rc_array_int_context_interior_t . ptr ) &&  (arr_cell_rc_array_int_context_interior_t . count ) &&  ((*(arr_cell_rc_array_int_context_interior_t . count )) >=  1 ) )) ? ({ /* letn461 */
            array_int * restrict arr  = (arr_cell_rc_array_int_context_interior_t . ptr );
            // ----------
            printf ("4. rc01 arr len: %zu\n", ((*arr ). len ));
          }) : default_value );
      }) : default_value );
}
int main () {
  ({ /* letn239 */
    cell_rc_array_int_context rc01  __attribute__((__cleanup__(free_cell_rc_array_int_context ))) = ({ /* letn275 */
      rc_array_int_context * rc_array_int_context_ptr273  = malloc (sizeof(rc_array_int_context));
      rc_array_int_context rc_array_int_context_obj274  = ({ /* letn285 */
        array_int * array_int_ptr282  = malloc (sizeof(array_int));
        array_int array_int_obj283  = new_array_int_G288 (((const int[]){ 1, 2, 3, 4, 5}), 5);
        size_t * array_int_count284  = malloc (sizeof(size_t));
        // ----------
        ({ /* progn301 */
          printf ("NEW RC CTX: %p\n", array_int_ptr282 );
        });
        memcpy (array_int_ptr282 , (&array_int_obj283 ), sizeof(array_int_obj283));
        (*array_int_count284 ) = 1;
        ((rc_array_int_context){ array_int_ptr282 , array_int_count284 });
      });
      // ----------
      ({ /* progn306 */
        printf ("NEW CELL: %p\n", rc_array_int_context_ptr273 );
      });
      memcpy (rc_array_int_context_ptr273 , (&rc_array_int_context_obj274 ), sizeof(rc_array_int_context_obj274));
      ((cell_rc_array_int_context){ rc_array_int_context_ptr273 });
    });
    // ----------
    let_cell_rc_array_int_context_G313 ((&rc01 ));
    printf ("2. rc01 arr len: %zu\n", letn_cell_rc_array_int_context_G333 ((&rc01 ), -1));
    ({ /* letn384 */
      cell_rc_array_int_context cl01  __attribute__((__cleanup__(free_cell_rc_array_int_context ))) = ({ /* letn389 */
        cell_rc_array_int_context * restrict tmp_rc387  = (&rc01 );
        typeof((*tmp_rc387 )) def_value  = ((typeof((*tmp_rc387 ))){ 0});
        // ----------
        letn_cell_rc_array_int_context_G393 ((&(*tmp_rc387 )), def_value );
      });
      // ----------
      take_cell_rc_array_int_context_G410 (({ /* letnmove441 */
          __auto_type moved_var440  = cl01 ;
          // ----------
          memset ((&cl01 ), 0, sizeof(cl01 ));
          moved_var440 ;
        }));
    });
    taken_cell_rc_array_int_context_G446 (({ /* letnmove467 */
        __auto_type moved_var466  = rc01 ;
        // ----------
        memset ((&rc01 ), 0, sizeof(rc01 ));
        moved_var466 ;
      }), printf ("4. default value is strict\n"));
  });
}
