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
typedef struct rc_array_int {
  struct { /* ciciliStruct129 */
    const size_t cnt : 17 ;
    const uintptr_t ptr : 47 ;
  } * pay ;
  const unsigned : 17 ;
  const size_t adr : 47 ;
} rc_array_int;
__attribute__((weak)) void free_rc_array_int (rc_array_int * rc ) {
}
long long ms_now () {
  { /* cicili#Let154 */
    struct timeval tv ;
    // ----------
    gettimeofday ((&tv ), NULL );
    return (((tv . tv_sec ) *  1000LL  ) +  +  +  ((tv . tv_usec ) /  1000LL  ) );
  }
}
int N  = 1000000000;
int STEP  = 1000;
long bench_a_nth () {
  ({ /* cicili#Let158 */
    __auto_type v  __attribute__((__cleanup__(free_array_int ))) = ({ /* cicili#Let162 */
      int * tmp_arr160  = calloc (50, sizeof(int));
      // ----------
      memcpy (tmp_arr160 , ((int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), (50 *  sizeof(int) ));
      ((array_int){ ((unsigned)50), ((uintptr_t)tmp_arr160 )});
    });
    // ----------
    { /* cicili#Let165 */
      int64_t sum  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          sum  +=  ({ /* cicili#Let173 */
                const uintptr_t acc_arr171  = (v . arr );
                const size_t acc_arr_idx172  = (i  %  50 );
                // ----------
                (((acc_arr_idx172  <  (v . len ) )) ? ((int *)acc_arr171 )[acc_arr_idx172 ] : 0);
              }) ;
      }
      { /* cicili#Let175 */
        long long elapsed  = (ms_now () -  t0  );
        // ----------
        printf ("  (nth checksum: %lld)\n", sum );
        return elapsed ;
      }
    }
  });
}
long bench_b_nth () {
  ({ /* cicili#Let179 */
    __auto_type v  __attribute__((__cleanup__(free_array_int ))) = ({ /* cicili#Let183 */
      int * tmp_arr181  = calloc (50, sizeof(int));
      // ----------
      memcpy (tmp_arr181 , ((int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), (50 *  sizeof(int) ));
      ((array_int){ ((unsigned)50), ((uintptr_t)tmp_arr181 )});
    });
    __auto_type rcv  __attribute__((__cleanup__(free_rc_array_int ))) = ({ /* cicili#Let188 */
      size_t * tmp_rc186  = malloc (sizeof(size_t));
      size_t snp  = (*tmp_rc186 );
      // ----------
      printf ("CCCCC: %zx   %zx    %zx\n", ((size_t)tmp_rc186 ), (*tmp_rc186 ), snp );
      printf ("CCCCC: %zx   %zx    %zx\n", ((size_t)tmp_rc186 ), (*tmp_rc186 ), snp );
      printf ("CCCCC: %zx   %zx    %zx\n", ((size_t)tmp_rc186 ), (*tmp_rc186 ), snp );
      printf ("CCCCC: %zx   %zx    %zx\n", ((size_t)tmp_rc186 ), (*tmp_rc186 ), snp );
      ((rc_array_int){ });
    });
    // ----------
    { /* cicili#Let191 */
      int64_t sum  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          sum  +=  ({ /* cicili#Let199 */
                const uintptr_t acc_arr197  = (v . arr );
                const size_t acc_arr_idx198  = (i  %  50 );
                // ----------
                (((acc_arr_idx198  <  (v . len ) )) ? ((int *)acc_arr197 )[acc_arr_idx198 ] : 0);
              }) ;
      }
      { /* cicili#Let201 */
        long long elapsed  = (ms_now () -  t0  );
        // ----------
        printf ("  (nth checksum: %lld)\n", sum );
        return elapsed ;
      }
    }
  });
}
int main () {
  printf ("sizeof %s: %zu\n", "array_int", sizeof(array_int ));
  printf ("sizeof %s: %zu\n", "rc_array_int", sizeof(rc_array_int ));
  fflush (NULL );
  printf ("  nth (bounds-checked) %d times: %ld ms\n", N , bench_b_nth ());
}
