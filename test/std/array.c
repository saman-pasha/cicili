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
__attribute__((weak)) void free_array_int (array_int * array ) {
  ({ /* progn110 */
    printf ("FREE ARR: %p\n", (array -> arr ));
  });
  free ((array -> arr ));
}
long long ms_now () {
  { /* let113 */
    struct timespec ts ;
    // ----------
    timespec_get ((&ts ), TIME_UTC );
    return ((((long long)ts.tv_sec ) *  1000 ) +  (ts.tv_nsec  /  1000000 ) );
  }
  return 0;
}
int N  = 1000000000;
int STEP  = 1000;
void a_func_move_array (array_int arr ) {
  fprintf (stdout , "length of moved array %zu\n", (arr . len ));
}
void a_func_referenced_array (array_int * restrict referred_arr ) {
  fprintf (stdout , "length of referenced array %zu\n", ((*referred_arr ). len ));
}
array_int new_array_int_G128 (const int * arr , const int len ) {
  return ({ /* letn133 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn136 */
        printf ("NEW ARR: %s %p %zu\n", "const int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
array_int_item_t nth_array_int_G148 (size_t index , array_int * restrict array , const int default_value ) {
  return (((index  <  (array -> len ) )) ? (array -> arr )[index ] : default_value );
}
long bench_a_nth () {
  ({ /* letn126 */
    array_int v  __attribute__((__cleanup__(free_array_int ))) = new_array_int_G128 (((const int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), 50);
    // ----------
    { /* let141 */
      int64_t sum  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          sum  +=  nth_array_int_G148 (((size_t)(i  %  50 )), (&v ), 0) ;
      }
      { /* let152 */
        long long elapsed  = (ms_now () -  t0  );
        // ----------
        printf ("  (nth checksum: %lld)\n", sum );
        return elapsed ;
      }
    }
  });
}
void __ciciliL_160 (int ** iarr ) {
  free (((void *)(*iarr )));
}
array_int new_array_int_G179 (const int * arr , const int len ) {
  return ({ /* letn183 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn186 */
        printf ("NEW ARR: %s %p %zu\n", "const int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
array_int new_array_int_G194 (int * arr , const int len ) {
  return ({ /* letn198 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn201 */
        printf ("NEW ARR: %s %p %zu\n", "int *", new_arr , ((size_t)len ));
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
array_int_item_t nth_array_int_G217 (size_t index , array_int * restrict array , const int default_value ) {
  return (((index  <  (array -> len ) )) ? (array -> arr )[index ] : default_value );
}
int64_t letn_array_int_G225 (array_int acc_arr224 , int64_t * sum ) {
  return ({ /* letn228 */
      array_int_item_t * arr  = (acc_arr224 . arr );
      size_t len  = (acc_arr224 . len );
      // ----------
      ((void)len );
      for (int i  = 0; (i  <  N  ); (++i )) {
          (*sum ) +=  arr [(i  %  5 )] ;
      }
      (*sum );
    });
}
int main () {
  printf ("sizeof %s: %zu\n", "array_int", sizeof(array_int ));
  { /* let159 */
    int * iarr  __attribute__((__cleanup__(__ciciliL_160 ))) = ((int *)calloc (2, sizeof(int)));
    // ----------
    ({ /* letn174 */
      array_int arr01  __attribute__((__cleanup__(free_array_int ))) = new_array_int_G179 (((const int[]){ 1, 2, 3, 4, 5}), 5);
      array_int arr02  __attribute__((__cleanup__(free_array_int ))) = new_array_int_G194 (iarr , 2);
      // ----------
      printf ("arr01 len: %zu\n", (arr01 . len ));
      printf ("arr02 len: %zu\n", (arr02 . len ));
      a_func_referenced_array ((&arr02 ));
      a_func_referenced_array ((&arr02 ));
      a_func_move_array (arr02 );
      printf ("print int array using Unsafe nth: ");
      for (size_t i  = 0; (i  <  (arr01 . len ) ); (++i )) {
          printf ("%d", (arr01 . arr )[i ]);
      }
      putchar ('\n');
      printf ("print int array using Safe nth: ");
      for (size_t i  = 0; (i  <  7 ); (++i )) {
          printf ("%d", nth_array_int_G217 (((size_t)i ), (&arr01 ), 0));
      }
      putchar ('\n');
      { /* let221 */
        int64_t sum  = 0;
        // ----------
        printf ("letn sum1: %lld\n", letn_array_int_G225 (arr01 , (&sum )));
      }
    });
  }
  printf ("  nth (bounds-checked) %d times: %ld ms\n", N , bench_a_nth ());
}
