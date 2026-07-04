#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct array_int {
  uintptr_t arr ;
  size_t len ;
} array_int;
__attribute__((weak)) void free_array_int (array_int * array ) {
  ({ /* cicili#Progn107 */
    printf ("FREE ARR: %zx\n", (array -> arr ));
  });
  free (((void *)(array -> arr )));
  (array -> arr ) = 0;
}
typedef struct rc_array_int {
  uintptr_t ptr ;
  size_t adr ;
} rc_array_int;
__attribute__((weak)) void free_rc_array_int (rc_array_int * rc ) {
  if ((rc -> ptr ) &&  ((*((size_t *)(rc -> ptr ))) ==  (rc -> adr ) ) )
    { /* cicili#Block132 */
      ({ /* cicili#Progn135 */
        printf ("FREE RC: %zx %zx\n", (*((size_t *)(rc -> ptr ))), (rc -> adr ));
      });
      { /* cicili#Let137 */
        size_t counter  = (*((size_t *)(((uintptr_t *)(rc -> ptr )) +  1 )));
        // ----------
        ({ /* cicili#Progn140 */
          printf ("FREE RC: counter: %zu\n", counter );
        });
        if (counter  >  1 )
          (--(*((size_t *)(((uintptr_t *)(rc -> ptr )) +  1 ))));
        else
          {
          if (counter  ==  1 )
            { /* cicili#Block146 */
              free_array_int ((*((void **)(rc -> ptr ))));
              free (((void *)(rc -> ptr )));
              (*((uintptr_t *)(rc -> ptr ))) = 0;
              (rc -> ptr ) = 0;
            }
            }      }
    }
}
__attribute__((weak)) void force_free_array_int (array_int * obj ) {
  free_array_int (obj );
}
void __ciciliL_181 (rc_array_int * rc01_ptr ) {
  rc_array_int rc01  = (*rc01_ptr );
  free_rc_array_int ((&rc01 ));
}
int main () {
  { /* cicili#Let177 */
    rc_array_int rc01  __attribute__((__cleanup__(__ciciliL_181 ))) = ({ /* cicili#Let183 */
      array_int * tmp_ptr179  = malloc (sizeof(array_int));
      uintptr_t * tmp_rc_ptr180  = malloc ((sizeof(uintptr_t) +  sizeof(size_t) ));
      // ----------
      (*tmp_ptr179 ) = ({ /* cicili#Let188 */
            int * tmp_arr187  = calloc (5, sizeof(int));
            // ----------
            memcpy (tmp_arr187 , ((int[]){ 1, 2, 3, 4, 5}), (5 *  sizeof(int) ));
            ((array_int){ ((uintptr_t)tmp_arr187 ), ((size_t)5)});
          });
      (*tmp_rc_ptr180 ) = ((uintptr_t)tmp_ptr179 );
      (*((size_t *)(tmp_rc_ptr180  +  1 ))) = 1UL ;
      ({ /* cicili#Progn191 */
        printf ("NEW RC: %zx %zx\n", ((uintptr_t)tmp_rc_ptr180 ), (*((size_t *)tmp_rc_ptr180 )));
      });
      ((rc_array_int){ ((uintptr_t)tmp_rc_ptr180 ), (*((size_t *)tmp_rc_ptr180 ))});
    });
    // ----------
    { /* cicili#Let197 */
      rc_array_int acc_rc195  = rc01 ;
      array_int ** acc_rc_ptr196  = ((array_int **)(acc_rc195 . ptr ));
      // ----------
      if (acc_rc_ptr196  &&  ((*((size_t *)acc_rc_ptr196 )) ==  (acc_rc195 . adr ) ) )
        { /* cicili#Block201 */
          { /* cicili#Let203 */
            __auto_type arr  = (*(*acc_rc_ptr196 ));
            // ----------
            printf ("1 rc01 arr len: %zu\n", (arr . len ));
          }
        }
    }
    { /* cicili#Let209 */
      rc_array_int acc_rc207  = rc01 ;
      array_int ** acc_rc_ptr208  = ((array_int **)(acc_rc207 . ptr ));
      // ----------
      if (acc_rc_ptr208  &&  ((*((size_t *)acc_rc_ptr208 )) ==  (acc_rc207 . adr ) ) )
        { /* cicili#Block213 */
          { /* cicili#Let215 */
            __auto_type arr  = (*acc_rc_ptr208 );
            // ----------
            printf ("2 rc01 arr len: %zu\n", ((*arr ). len ));
          }
        }
    }
    printf ("3 rc01 arr len: %zu\n", ({ /* cicili#Let221 */
        rc_array_int acc_rc219  = rc01 ;
        array_int ** acc_rc_ptr220  = ((array_int **)(acc_rc219 . ptr ));
        // ----------
        (((acc_rc_ptr220  &&  ((*((size_t *)acc_rc_ptr220 )) ==  (acc_rc219 . adr ) ) )) ? ({ /* cicili#Let223 */
            __auto_type arr  = (*(*acc_rc_ptr220 ));
            // ----------
            (arr . len );
          }) : -1);
      }));
    { /* cicili#Let226 */
      __auto_type cloned  = ({ /* cicili#Let230 */
        rc_array_int acc_rc228  = rc01 ;
        array_int ** acc_rc_ptr229  = ((array_int **)(acc_rc228 . ptr ));
        // ----------
        if (acc_rc_ptr229  &&  ((*((size_t *)acc_rc_ptr229 )) ==  (acc_rc228 . adr ) ) )
          { /* cicili#Block234 */
            (++(*((size_t *)(((uintptr_t *)acc_rc_ptr229 ) +  1 ))));
          }
        acc_rc228 ;
      });
      // ----------
      free_rc_array_int ((&cloned ));
    }
    ({ /* cicili#Let240 */
      rc_array_int acc_rc238  = rc01 ;
      array_int ** acc_rc_ptr239  = ((array_int **)(acc_rc238 . ptr ));
      // ----------
      (((acc_rc_ptr239  &&  ((*((size_t *)acc_rc_ptr239 )) ==  (acc_rc238 . adr ) ) )) ? ({ /* cicili#Let242 */
          __auto_type arr  = (*acc_rc_ptr239 );
          // ----------
          ((((*((size_t *)(((uintptr_t *)(acc_rc238 . ptr )) +  1 ))) ==  1 )) ? ({ /* cicili#Progn244 */
              ({ /* cicili#Progn247 */
                printf ("TAKEN RC: %zx %zx\n", (*((size_t *)acc_rc_ptr239 )), (acc_rc238 . adr ));
              });
              free (((void *)(acc_rc238 . ptr )));
              (acc_rc238 . ptr ) = 0;
              printf ("5 rc01 arr len: %zu\n", ((*arr ). len ));
              force_free_array_int (arr );
            }) : printf ("5 rc01 arr len: default path\n"));
        }) : printf ("5 rc01 arr len: default path\n"));
    });
  }
}
