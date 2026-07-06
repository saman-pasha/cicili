#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/time.h>
#include <limits.h>
typedef struct array_int {
  uintptr_t arr ;
  size_t len ;
} array_int;
array_int new_array_int_impl (int * arr , const size_t len ) {
  return ({ /* cicili#Let110 */
      int * new_arr  = calloc (len , sizeof(int));
      // ----------
      ({ /* cicili#Progn113 */
        printf ("NEW ARR: %s %zx %zu\n", "array_int", ((size_t)arr ), len );
      });
      memcpy (new_arr , arr , (len  *  sizeof(int) ));
      ((array_int){ ((uintptr_t)new_arr ), len });
    });
}
int nth_array_int_impl (const size_t index , array_int array , const int * default_ ) {
  return (((index  <  (array . len ) )) ? ((int *)(array . arr ))[index ] : (*default_ ));
}
void free_array_int (array_int * array ) {
  ({ /* cicili#Progn121 */
    printf ("FREE ARR: %zx\n", (array -> arr ));
  });
  free (((void *)(array -> arr )));
  (array -> arr ) = 0;
}
long long ms_now () {
  { /* cicili#Let141 */
    struct timeval tv ;
    // ----------
    gettimeofday ((&tv ), NULL );
    return (((tv . tv_sec ) *  1000LL  ) +  +  +  ((tv . tv_usec ) /  1000LL  ) );
  }
}
int N  = 1000000000;
int STEP  = 1000;
void __ciciliL_147 (array_int * v_ptr ) {
  array_int v  = (*v_ptr );
  free_array_int ((&v ));
}
const int * const __ciciliL_160 () {
  static const int constant_value  = 0;
  return (&constant_value );
}
long bench_a_nth () {
  { /* cicili#Let144 */
    array_int v  __attribute__((__cleanup__(__ciciliL_147 ))) = new_array_int_impl (((int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), 50);
    // ----------
    { /* cicili#Let152 */
      int64_t sum  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          sum  +=  nth_array_int_impl ((i  %  50 ), v , __ciciliL_160 ()) ;
      }
      { /* cicili#Let162 */
        long long elapsed  = (ms_now () -  t0  );
        // ----------
        printf ("  (nth checksum: %lld)\n", sum );
        return elapsed ;
      }
    }
  }
}
void __ciciliL_171 (array_int * arr01_ptr ) {
  array_int arr01  = (*arr01_ptr );
  free_array_int ((&arr01 ));
}
const int * const __ciciliL_185 () {
  static const int constant_value  = 0;
  return (&constant_value );
}
int main () {
  printf ("sizeof %s: %zu\n", "array_int", sizeof(array_int ));
  { /* cicili#Let169 */
    array_int arr01  __attribute__((__cleanup__(__ciciliL_171 ))) = new_array_int_impl (((int[]){ 1, 2, 3, 4, 5}), 5);
    // ----------
    printf ("arr01 len: %zu\n", (arr01 . len ));
    printf ("print int array using Unsafe nth: ");
    for (size_t i  = 0; (i  <  (arr01 . len ) ); (++i )) {
        printf ("%d", ((int *)(arr01 . arr ))[i ]);
    }
    putchar ('\n');
    printf ("print int array using Safe nth: ");
    for (size_t i  = 0; (i  <  7 ); (++i )) {
        printf ("%d", nth_array_int_impl (i , arr01 , __ciciliL_185 ()));
    }
    putchar ('\n');
  }
  fflush (stdout );
  printf ("  nth (bounds-checked) %d times: %ld ms\n", N , bench_a_nth ());
}
