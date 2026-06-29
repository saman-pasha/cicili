#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/time.h>
#include <limits.h>
typedef int * array_int ;
long long ms_now () {
  { /* cicili#Let127 */
    struct timeval tv ;
    // ----------
    gettimeofday ((&tv ), NULL );
    return (((tv . tv_sec ) *  1000LL  ) +  +  +  ((tv . tv_usec ) /  1000LL  ) );
  }
}
int N  = 1000000000;
int STEP  = 1000;
void __ciciliL_134 (array_int * v_ptr ) {
  array_int v  = (*v_ptr );
  free (((void *)(((uintptr_t)v ) &  0x7FFFFFFFFFFF  )));
}
long bench_a_nth () {
  { /* cicili#Let130 */
    array_int v  __attribute__((__cleanup__(__ciciliL_134 ))) = ({ /* cicili#Let138 */
      array_int tmp_arr133  = calloc (50, sizeof(int));
      // ----------
      memcpy (tmp_arr133 , ((int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), (50 *  sizeof(int) ));
      ((array_int)(((uintptr_t)tmp_arr133 ) |  (((size_t)50) <<  47 ) ));
    });
    // ----------
    { /* cicili#Let141 */
      int64_t sum  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          sum  +=  ({ /* cicili#Let149 */
                uintptr_t acc_arr147  = ((uintptr_t)v );
                const size_t acc_arr_idx148  = (i  %  50 );
                // ----------
                (((acc_arr_idx148  <  ((size_t)(acc_arr147  >>  47 )) )) ? ((array_int)(acc_arr147  &  0x7FFFFFFFFFFFL  ))[acc_arr_idx148 ] : 0);
              }) ;
      }
      { /* cicili#Let151 */
        long long elapsed  = (ms_now () -  t0  );
        // ----------
        printf ("  (nth checksum: %lld)\n", sum );
        return elapsed ;
      }
    }
  }
}
int main () {
  printf ("  nth (bounds-checked) %d times: %ld ms\n", N , bench_a_nth ());
}
