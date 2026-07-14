#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct array_int {
  int * arr ;
  size_t len ;
} array_int;
typedef int array_int_item_t ;
__attribute__((weak)) void free_array_int (array_int * array ) {
  ({ /* progn108 */
    printf ("FREE ARR: %p\n", (array -> arr ));
  });
  free ((array -> arr ));
  (array -> arr ) = 0;
}
typedef struct rc_array_int {
  uintptr_t ptr ;
  size_t adr ;
} rc_array_int;
typedef array_int rc_array_int_interior_t ;
__attribute__((weak)) void free_rc_array_int (rc_array_int * rc ) {
  if ((rc -> ptr ) &&  ((*((size_t *)(rc -> ptr ))) ==  (rc -> adr ) ) )
    { /* block118 */
      ({ /* progn121 */
        printf ("FREE RC: %p %p %zx\n", (*((size_t **)(rc -> ptr ))), ((void *)(rc -> ptr )), (rc -> adr ));
      });
      { /* let123 */
        size_t counter  = (*((size_t *)(((uintptr_t *)(rc -> ptr )) +  1 )));
        // ----------
        ({ /* progn126 */
          printf ("FREE RC: counter: %zu\n", counter );
        });
        if (counter  >  1 )
          (--(*((size_t *)(((uintptr_t *)(rc -> ptr )) +  1 ))));
        else
          {
          if (counter  ==  1 )
            { /* block134 */
              free_array_int ((*((array_int **)(rc -> ptr ))));
              free ((*((void **)(rc -> ptr ))));
              (*((uintptr_t **)(rc -> ptr ))) = 0;
              free (((void *)(rc -> ptr )));
              (rc -> ptr ) = 0;
            }
            }      }
    }
}
__attribute__((weak)) void force_free_array_int (array_int * obj ) {
  free_array_int (obj );
}
array_int new_array_int_G171 (const int * arr , const int len ) {
  return ({ /* letn175 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn178 */
        printf ("NEW ARR: %s %p %zu\n", "const int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
void let_rc_array_int_G190 (rc_array_int acc_rc188 ) {
  { /* let193 */
    rc_array_int_interior_t ** acc_rc_ptr189  = ((rc_array_int_interior_t **)(acc_rc188 . ptr ));
    // ----------
    if (acc_rc_ptr189  &&  ((*((size_t *)acc_rc_ptr189 )) ==  (acc_rc188 . adr ) ) )
      { /* block200 */
        { /* let202 */
          rc_array_int_interior_t arr  = (*(*acc_rc_ptr189 ));
          // ----------
          printf ("1. rc01 arr len: %zu\n", (arr . len ));
        }
      }
  }
}
size_t letn_rc_array_int_G209 (rc_array_int acc_rc207 , const int default_value ) {
  return ({ /* letn212 */
      rc_array_int_interior_t ** acc_rc_ptr208  = ((rc_array_int_interior_t **)(acc_rc207 . ptr ));
      // ----------
      (((acc_rc_ptr208  &&  ((*((size_t *)acc_rc_ptr208 )) ==  (acc_rc207 . adr ) ) )) ? ({ /* letn216 */
          rc_array_int_interior_t arr  = (*(*acc_rc_ptr208 ));
          // ----------
          (arr . len );
        }) : default_value );
    });
}
void take_rc_array_int_G227 (rc_array_int acc_rc225 ) {
  { /* let234 */
    rc_array_int_interior_t ** acc_rc_ptr226  = ((rc_array_int_interior_t **)(acc_rc225 . ptr ));
    // ----------
    if (acc_rc_ptr226  &&  ((*((size_t *)acc_rc_ptr226 )) ==  (acc_rc225 . adr ) ) &&  ((*((size_t *)(((uintptr_t *)(acc_rc225 . ptr )) +  1 ))) ==  1 ) )
      { /* block241 */
        { /* let243 */
          rc_array_int_interior_t * arr_ptr  = (*acc_rc_ptr226 );
          // ----------
          ({ /* progn247 */
            printf ("TAKE RC: %zx %zx\n", (*((size_t *)acc_rc_ptr226 )), (acc_rc225 . adr ));
          });
          free (((void *)(acc_rc225 . ptr )));
          (acc_rc225 . ptr ) = 0;
          printf ("3. rc01 arr len: %zu\n", ((*arr_ptr ). len ));
          force_free_array_int (arr_ptr );
        }
      }
  }
}
rc_array_int clone_rc_array_int_G253 (rc_array_int acc_rc251 ) {
  return ({ /* letn256 */
      rc_array_int_interior_t ** acc_rc_ptr252  = ((rc_array_int_interior_t **)(acc_rc251 . ptr ));
      // ----------
      if (acc_rc_ptr252  &&  ((*((size_t *)acc_rc_ptr252 )) ==  (acc_rc251 . adr ) ) )
        { /* block263 */
          (++(*((size_t *)(((uintptr_t *)acc_rc_ptr252 ) +  1 ))));
        }
      acc_rc251 ;
    });
}
size_t taken_rc_array_int_G274 (rc_array_int acc_rc272 , size_t default_value ) {
  return ({ /* letn277 */
      rc_array_int_interior_t ** acc_rc_ptr273  = ((rc_array_int_interior_t **)(acc_rc272 . ptr ));
      // ----------
      (((acc_rc_ptr273  &&  ((*((size_t *)acc_rc_ptr273 )) ==  (acc_rc272 . adr ) ) &&  ((*((size_t *)(((uintptr_t *)(acc_rc272 . ptr )) +  1 ))) ==  1 ) )) ? ({ /* letn281 */
          rc_array_int_interior_t * arr_ptr  = (*acc_rc_ptr273 );
          // ----------
          ({ /* progn285 */
            printf ("TAKEN RC: %zx %zx\n", (*((size_t *)acc_rc_ptr273 )), (acc_rc272 . adr ));
          });
          free (((void *)(acc_rc272 . ptr )));
          (acc_rc272 . ptr ) = 0;
          printf ("5 rc01 arr len: %zu\n", ((*arr_ptr ). len ));
        }) : default_value );
    });
}
int main () {
  ({ /* letn156 */
    rc_array_int rc01  __attribute__((__cleanup__(free_rc_array_int ))) = ({ /* letn167 */
      array_int * tmp_ptr165  = malloc (sizeof(array_int));
      uintptr_t * tmp_rc_ptr166  = malloc ((sizeof(uintptr_t) +  sizeof(size_t) ));
      // ----------
      (*tmp_ptr165 ) = new_array_int_G171 (((const int[]){ 1, 2, 3, 4, 5}), 5);
      (*tmp_rc_ptr166 ) = ((uintptr_t)tmp_ptr165 );
      (*((size_t *)(tmp_rc_ptr166  +  1 ))) = 1;
      ({ /* progn183 */
        printf ("NEW RC: %p %zx %zx\n", tmp_ptr165 , ((uintptr_t)tmp_rc_ptr166 ), (*((size_t *)tmp_rc_ptr166 )));
      });
      ((rc_array_int){ ((uintptr_t)tmp_rc_ptr166 ), (*((size_t *)tmp_rc_ptr166 ))});
    });
    // ----------
    let_rc_array_int_G190 (rc01 );
    printf ("2. rc01 arr len: %zu\n", letn_rc_array_int_G209 (rc01 , -1));
    take_rc_array_int_G227 (clone_rc_array_int_G253 (rc01 ));
    ({ /* letn266 */
      rc_array_int week_copy  __attribute__((__cleanup__(free_rc_array_int ))) = rc01 ;
      // ----------
      free_rc_array_int ((&week_copy ));
    });
    taken_rc_array_int_G274 (rc01 , printf ("5 rc01 arr len: default path\n"));
  });
}
