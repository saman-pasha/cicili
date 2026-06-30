#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/time.h>
#include <limits.h>
typedef struct array_int {
  const size_t len : 17 ;
  const uintptr_t arr : 47 ;
} array_int;
__attribute__((weak)) void free_array_int (array_int * array ) {
  free (((void *)(array -> arr )));
}
long long ms_now () {
  { /* cicili#Let128 */
    struct timeval tv ;
    // ----------
    gettimeofday ((&tv ), NULL );
    return (((tv . tv_sec ) *  1000LL  ) +  +  +  ((tv . tv_usec ) /  1000LL  ) );
  }
}
int N  = 1000000000;
int STEP  = 1000;
void __ciciliL_135 (array_int * v_ptr ) {
  array_int v  = (*v_ptr );
  free_array_int ((&v ));
}
long bench_a_nth () {
  { /* cicili#Let131 */
    array_int v  __attribute__((__cleanup__(__ciciliL_135 ))) = ({ /* cicili#Let138 */
      int * tmp_arr134  = calloc (50, sizeof(int));
      // ----------
      memcpy (tmp_arr134 , ((int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), (50 *  sizeof(int) ));
      ((array_int){ ((unsigned)50), ((uintptr_t)tmp_arr134 )});
    });
    // ----------
    { /* cicili#Let141 */
      int64_t sum  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          sum  +=  ({ /* cicili#Let149 */
                const uintptr_t acc_arr147  = (v . arr );
                const size_t acc_arr_idx148  = (i  %  50 );
                // ----------
                (((acc_arr_idx148  <  (v . len ) )) ? ((int *)acc_arr147 )[acc_arr_idx148 ] : 0);
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
void __ciciliL_161 (array_int * arr01_ptr ) {
  array_int arr01  = (*arr01_ptr );
  free_array_int ((&arr01 ));
}
int main () {
  printf ("sizeof %s: %zu\n", "array_int", sizeof(array_int ));
  fflush (stdout );
  { /* cicili#Let158 */
    array_int arr01  __attribute__((__cleanup__(__ciciliL_161 ))) = ({ /* cicili#Let163 */
      int * tmp_arr160  = calloc (5, sizeof(int));
      // ----------
      memcpy (tmp_arr160 , ((int[]){ 1, 2, 3, 4, 5}), (5 *  sizeof(int) ));
      ((array_int){ ((unsigned)5), ((uintptr_t)tmp_arr160 )});
    });
    // ----------
    printf ("arr01 len: %u\n", (arr01 . len ));
    printf ("print int array using Unsafe nth: ");
    for (size_t i  = 0; (i  <  (arr01 . len ) ); (++i )) {
        printf ("%d", ((int *)(arr01 . arr ))[i ]);
    }
    putchar ('\n');
    printf ("print int array using Safe nth: ");
    for (size_t i  = 0; (i  <  7 ); (++i )) {
        printf ("%d", ({ /* cicili#Let178 */
            const uintptr_t acc_arr176  = (arr01 . arr );
            const size_t acc_arr_idx177  = i ;
            // ----------
            (((acc_arr_idx177  <  (arr01 . len ) )) ? ((int *)acc_arr176 )[acc_arr_idx177 ] : 0);
          }));
    }
    putchar ('\n');
  }
  printf ("  nth (bounds-checked) %d times: %ld ms\n", N , bench_a_nth ());
}
