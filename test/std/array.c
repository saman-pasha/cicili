#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>
typedef struct array_int {
  int * arr ;
  size_t len ;
} array_int;
__attribute__((weak)) void free_array_int (array_int * array ) {
  ({ /* progn109 */
    printf ("FREE ARR: %p\n", (array -> arr ));
  });
  free ((array -> arr ));
  (array -> arr ) = 0;
}
long long ms_now () {
  { /* let131 */
    struct timespec ts ;
    // ----------
    timespec_get ((&ts ), TIME_UTC );
    return ((((long long)ts.tv_sec ) *  1000 ) +  (ts.tv_nsec  /  1000000 ) );
  }
  return 0;
}
int N  = 1000000000;
int STEP  = 1000;
array_int new_array_int_G137 (const size_t len ) {
  return ({ /* letn141 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn144 */
        printf ("NEW ARR: %s %p %zu\n", "array_int", new_arr , len );
      });
      memcpy (new_arr , ((int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
int nth_array_int_G155 (const size_t index , const array_int * array ) {
  return (((index  <  (array -> len ) )) ? (array -> arr )[index ] : 0);
}
long bench_a_nth () {
  ({ /* letn135 */
    __auto_type v  __attribute__((__cleanup__(free_array_int ))) = new_array_int_G137 (50);
    // ----------
    { /* let148 */
      int64_t sum  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          sum  +=  nth_array_int_G155 ((i  %  50 ), (&v )) ;
      }
      { /* let158 */
        long long elapsed  = (ms_now () -  t0  );
        // ----------
        printf ("  (nth checksum: %lld)\n", sum );
        return elapsed ;
      }
    }
  });
}
void __ciciliL_168 (array_int * arr01 ) {
  free_array_int (arr01 );
}
array_int new_array_int_G167 (const size_t len ) {
  return ({ /* letn172 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* progn175 */
        printf ("NEW ARR: %s %p %zu\n", "array_int", new_arr , len );
      });
      memcpy (new_arr , ((int[]){ 1, 2, 3, 4, 5}), (len  *  sizeof(int) ));
      ((array_int){ new_arr , len });
    });
}
int nth_array_int_G189 (const size_t index , const array_int * array ) {
  return (((index  <  (array -> len ) )) ? (array -> arr )[index ] : 0);
}
int main () {
  printf ("sizeof %s: %zu\n", "array_int", sizeof(array_int ));
  { /* let165 */
    array_int arr01  __attribute__((__cleanup__(__ciciliL_168 ))) = new_array_int_G167 (5);
    // ----------
    printf ("arr01 len: %zu\n", (arr01 . len ));
    printf ("print int array using Unsafe nth: ");
    for (size_t i  = 0; (i  <  (arr01 . len ) ); (++i )) {
        printf ("%d", (arr01 . arr )[i ]);
    }
    putchar ('\n');
    printf ("print int array using Safe nth: ");
    for (size_t i  = 0; (i  <  7 ); (++i )) {
        printf ("%d", nth_array_int_G189 (i , (&arr01 )));
    }
    putchar ('\n');
  }
  printf ("  nth (bounds-checked) %d times: %ld ms\n", N , bench_a_nth ());
}
