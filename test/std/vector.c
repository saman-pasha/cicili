#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>
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
  ({ /* progn117 */
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
  ({ /* progn130 */
    printf ("FREE RC CTX: %p\n", (ctx -> ptr ));
  });
  if ((ctx -> ptr ) &&  (ctx -> count ) )
    { /* block135 */
      ({ /* progn138 */
        printf ("FREE RC COUNT: %zu\n", (*(ctx -> count )));
      });
      if ((*(ctx -> count )) ==  1 )
        { /* block142 */
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
  ({ /* progn161 */
    printf ("FREE CELL: %p\n", (cell -> ptr ));
  });
  if ((cell -> ptr ))
    { /* block166 */
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
typedef cell_rc_array_int_context rc_array_int ;
#ifndef __RC_TYPE_H_
#define __RC_TYPE_H_
typedef struct std_rc std_rc ;
#endif /* __RC_TYPE_H_ */ 
typedef std_rc rc_array_int_type_t ;
typedef struct vector_int {
  rc_array_int vec ;
  size_t low ;
  size_t high ;
} vector_int;
__attribute__((weak)) void free_vector_int (vector_int * vector ) {
  ({ /* progn190 */
    printf ("FREE VECTOR: %p\n", vector );
  });
  