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
  array_int * const ptr ;
  size_t * count ;
} rc_array_int_context;
__attribute__((weak)) void free_rc_array_int_context (rc_array_int_context * ctx ) {
  ({ /* progn126 */
    printf ("FREE RC CTX: %p\n", (ctx -> ptr ));
  });
  if ((ctx -> ptr ) &&  (ctx -> count ) )
    { /* block131 */
      ({ /* progn134 */
        printf ("FREE RC COUNT: %zu\n", (*(ctx -> count )));
      });
      if ((*(ctx -> count )) ==  1 )
        { /* block138 */
          free_array_int ((ctx -> ptr ));
          free ((ctx -> count ));
          free ((ctx -> ptr ));
        }
      else
        (--(*(ctx -> count )));
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
  ({ /* progn157 */
    printf ("FREE CELL: %p\n", (cell -> ptr ));
  });
  if ((cell -> ptr ))
    { /* block162 */
      free_rc_array_int_context ((cell -> ptr ));
      free ((cell -> ptr ));
    }
}
__attribute__((weak)) void free_cell_rc_array_int_context_pointer (cell_rc_array_int_context ** cell ) {
  free_cell_rc_array_int_context ((*cell ));
}
__attribute__((weak)) void force_free_rc_array_int_context (rc_array_int_context * obj ) {
  free_rc_array_int_context (obj );
}
array_int new_array_int_G296 (const int * arr , const int len ) {
  return ({ /* letn300 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn303 */
        printf ("NEW ARR: %s %p %zu\n", "const int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
void let_cell_rc_array_int_context_G321 (cell_rc_array_int_context * restrict cell ) {
  if ((cell -> ptr ))
    { /* block327 */
      { /* let329 */
        cell_rc_array_int_context_interior_t * restrict arr_ptr_cell_rc_array_int_context_interior_t  = (cell -> ptr );
        // ----------
        { /* let333 */
          array_int * const arr_ptr  = (arr_ptr_cell_rc_array_int_context_interior_t -> ptr );
          // ----------
          printf ("1. rc01 arr len: %zu\n", ((*arr_ptr ). len ));
        }
      }
    }
}
size_t letn_cell_rc_array_int_context_G341 (cell_rc_array_int_context * restrict cell , const int default_value ) {
  return (((cell -> ptr )) ? ({ /* letn344 */
        cell_rc_array_int_context_interior_t * restrict arr_ptr_cell_rc_array_int_context_interior_t  = (cell -> ptr );
        // ----------
        ({ /* letn348 */
          array_int * const arr_ptr  = (arr_ptr_cell_rc_array_int_context_interior_t -> ptr );
          // ----------
          ((*arr_ptr ). len );
        });
      }) : default_value );
}
cell_rc_array_int_context letn_cell_rc_array_int_context_G413 (cell_rc_array_int_context * restrict cell , cell_rc_array_int_context default_value ) {
  return (((cell -> ptr )) ? ({ /* letn416 */
        cell_rc_array_int_context_interior_t * restrict ctx_rc_array_int_context  = (cell -> ptr );
        // ----------
        ((((ctx_rc_array_int_context -> ptr ) &&  (ctx_rc_array_int_context -> count ) &&  ((*(ctx_rc_array_int_context -> count )) >=  1 ) )) ? ({ /* progn423 */
            (++(*(ctx_rc_array_int_context -> count )));
            ({ /* letn426 */
              rc_array_int_context * tmp_rc407  = malloc (sizeof(rc_array_int_context));
              // ----------
              memcpy (tmp_rc407 , ctx_rc_array_int_context , sizeof(rc_array_int_context));
              ((cell_rc_array_int_context){ tmp_rc407 });
            });
          }) : default_value );
      }) : default_value );
}
void take_cell_rc_array_int_context_G434 (cell_rc_array_int_context cell ) {
  cell_rc_array_int_context * __moved_cell __attribute__((__cleanup__( free_cell_rc_array_int_context_pointer))) = (& cell) ;
  if (cell . ptr )
    { /* block441 */
      ({ /* letn444 */
        rc_array_int_context arr_cell_rc_array_int_context_interior_t  __attribute__((__cleanup__(free_rc_array_int_context ))) = ((rc_array_int_context   )({ /* letnmove448 */
          rc_array_int_context moved_var447  = (*(cell . ptr ));
          // ----------
          memset ((&(*(cell . ptr ))), 0, sizeof((*(cell . ptr ))));
          moved_var447 ;
        }));
        // ----------
        if ((arr_cell_rc_array_int_context_interior_t . ptr ) &&  (arr_cell_rc_array_int_context_interior_t . count ) &&  ((*(arr_cell_rc_array_int_context_interior_t . count )) ==  1 ) )
          { /* block457 */
            ({ /* letn461 */
              array_int arr  __attribute__((__cleanup__(free_array_int ))) = ((array_int   )({ /* letnmove465 */
                array_int moved_var464  = (*(arr_cell_rc_array_int_context_interior_t . ptr ));
                // ----------
                memset ((&(*(arr_cell_rc_array_int_context_interior_t . ptr ))), 0, sizeof((*(arr_cell_rc_array_int_context_interior_t . ptr ))));
                moved_var464 ;
              }));
              // ----------
              printf ("3. rc01 arr len: %zu\n", (arr . len ));
            });
          }
      });
    }
}
size_t taken_cell_rc_array_int_context_G476 (cell_rc_array_int_context cell , size_t default_value ) {
  cell_rc_array_int_context * __moved_cell __attribute__((__cleanup__( free_cell_rc_array_int_context_pointer))) = (& cell) ;
  return (((cell . ptr )) ? ({ /* letn481 */
        rc_array_int_context arr_cell_rc_array_int_context_interior_t  __attribute__((__cleanup__(free_rc_array_int_context ))) = ((rc_array_int_context   )({ /* letnmove485 */
          rc_array_int_context moved_var484  = (*(cell . ptr ));
          // ----------
          memset ((&(*(cell . ptr ))), 0, sizeof((*(cell . ptr ))));
          moved_var484 ;
        }));
        // ----------
        ((((arr_cell_rc_array_int_context_interior_t . ptr ) &&  (arr_cell_rc_array_int_context_interior_t . count ) &&  ((*(arr_cell_rc_array_int_context_interior_t . count )) ==  1 ) )) ? ({ /* letn493 */
            array_int arr  __attribute__((__cleanup__(free_array_int ))) = ((array_int   )({ /* letnmove497 */
              array_int moved_var496  = (*(arr_cell_rc_array_int_context_interior_t . ptr ));
              // ----------
              memset ((&(*(arr_cell_rc_array_int_context_interior_t . ptr ))), 0, sizeof((*(arr_cell_rc_array_int_context_interior_t . ptr ))));
              moved_var496 ;
            }));
            // ----------
            printf ("4. rc01 arr len: %zu\n", (arr . len ));
          }) : default_value );
      }) : default_value );
}
int main () {
  ({ /* letn247 */
    cell_rc_array_int_context rc01  __attribute__((__cleanup__(free_cell_rc_array_int_context ))) = ({ /* letn283 */
      rc_array_int_context * rc_array_int_context_ptr281  = malloc (sizeof(rc_array_int_context));
      rc_array_int_context rc_array_int_context_obj282  = ({ /* letn293 */
        array_int * array_int_ptr290  = malloc (sizeof(array_int));
        array_int array_int_obj291  = new_array_int_G296 (((const int[]){ 1, 2, 3, 4, 5}), 5);
        size_t * array_int_count292  = malloc (sizeof(size_t));
        // ----------
        ({ /* progn309 */
          printf ("NEW RC CTX: %p\n", array_int_ptr290 );
        });
        memcpy (array_int_ptr290 , (&array_int_obj291 ), sizeof(array_int_obj291));
        (*array_int_count292 ) = 1;
        ((rc_array_int_context){ array_int_ptr290 , array_int_count292 });
      });
      // ----------
      ({ /* progn314 */
        printf ("NEW CELL: %p\n", rc_array_int_context_ptr281 );
      });
      memcpy (rc_array_int_context_ptr281 , (&rc_array_int_context_obj282 ), sizeof(rc_array_int_context_obj282));
      ((cell_rc_array_int_context){ rc_array_int_context_ptr281 });
    });
    // ----------
    let_cell_rc_array_int_context_G321 ((&rc01 ));
    printf ("2. rc01 arr len: %zu\n", letn_cell_rc_array_int_context_G341 ((&rc01 ), -1));
    ({ /* letn402 */
      cell_rc_array_int_context cl01  __attribute__((__cleanup__(free_cell_rc_array_int_context ))) = ({ /* letn409 */
        cell_rc_array_int_context * restrict tmp_rc406  = (&rc01 );
        typeof((*tmp_rc406 )) def_value  = ((typeof((*tmp_rc406 ))){ 0});
        // ----------
        letn_cell_rc_array_int_context_G413 ((&(*tmp_rc406 )), def_value );
      });
      // ----------
      take_cell_rc_array_int_context_G434 (((cell_rc_array_int_context   )({ /* letnmove471 */
          cell_rc_array_int_context moved_var470  = cl01 ;
          // ----------
          memset ((&cl01 ), 0, sizeof(cl01 ));
          moved_var470 ;
        })));
    });
    taken_cell_rc_array_int_context_G476 (((cell_rc_array_int_context   )({ /* letnmove503 */
        cell_rc_array_int_context moved_var502  = rc01 ;
        // ----------
        memset ((&rc01 ), 0, sizeof(rc01 ));
        moved_var502 ;
      })), printf ("4. default value is strict\n"));
    fprintf (stdout , "Done\n");
  });
}
