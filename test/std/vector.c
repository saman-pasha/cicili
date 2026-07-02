#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/time.h>
#include <limits.h>
typedef struct vector_int {
  size_t vec ;
  unsigned llen ;
  unsigned rlen ;
  size_t addr ;
} vector_int;
__attribute__((weak)) void free_vector_int (vector_int * vector ) {
  if ((vector -> vec ) &&  ((*((size_t *)(vector -> vec ))) ==  (vector -> addr ) ) )
    { /* cicili#Block110 */
      free (((void *)(vector -> vec )));
    }
}
long long ms_now () {
  { /* cicili#Let135 */
    struct timeval tv ;
    // ----------
    gettimeofday ((&tv ), NULL );
    return (((tv . tv_sec ) *  1000LL  ) +  +  +  ((tv . tv_usec ) /  1000LL  ) );
  }
}
size_t N  = 1000000000;
size_t STEP  = 1000;
long bench_a_nth () {
  ({ /* cicili#Let139 */
    __auto_type v  __attribute__((__cleanup__(free_vector_int ))) = ({ /* cicili#Let144 */
      const size_t tmp_len141  = 50;
      int * tmp_vec142  = calloc (tmp_len141 , sizeof(int));
      // ----------
      memcpy (tmp_vec142 , ((int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), (tmp_len141  *  sizeof(int) ));
      ((vector_int){ ((uintptr_t)tmp_vec142 ), ((unsigned)(tmp_len141  >>  16 )), ((unsigned)(tmp_len141  &  0xFFFF  )), (*((size_t *)tmp_vec142 ))});
    });
    // ----------
    { /* cicili#Let149 */
      int64_t sum  = 0;
      long long t0  = ms_now ();
      // ----------
      for (size_t i  = 0; (i  <  N  ); (++i )) {
          sum  +=  ({ /* cicili#Let158 */
                vector_int acc_vec155  = v ;
                uintptr_t acc_vec_mem156  = (acc_vec155 . vec );
                const size_t acc_vec_idx157  = (i  %  50 );
                // ----------
                (((acc_vec_mem156  &&  (((acc_vec155 . addr ) ==  0UL  ) ||  ((*((size_t *)acc_vec_mem156 )) ==  (acc_vec155 . addr ) ) ) &&  (acc_vec_idx157  <  ((size_t)((acc_vec155 . llen ) |  (acc_vec155 . rlen ) )) ) )) ? ((int *)acc_vec_mem156 )[acc_vec_idx157 ] : 0);
              }) ;
      }
      { /* cicili#Let162 */
        long long elapsed  = (ms_now () -  t0  );
        // ----------
        printf ("  (nth checksum: %lld)\n", sum );
        return elapsed ;
      }
    }
  });
}
void __ciciliL_170 (vector_int * v_ptr ) {
  vector_int v  = (*v_ptr );
  free_vector_int ((&v ));
}
long bench_a_slice () {
  { /* cicili#Let165 */
    vector_int v  __attribute__((__cleanup__(__ciciliL_170 ))) = ({ /* cicili#Let173 */
      const size_t tmp_len168  = 50;
      int * tmp_vec169  = calloc (tmp_len168 , sizeof(int));
      // ----------
      memcpy (tmp_vec169 , ((int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), (tmp_len168  *  sizeof(int) ));
      ((vector_int){ ((uintptr_t)tmp_vec169 ), ((unsigned)(tmp_len168  >>  16 )), ((unsigned)(tmp_len168  &  0xFFFF  )), (*((size_t *)tmp_vec169 ))});
    });
    // ----------
    { /* cicili#Let178 */
      int64_t total_len  = 0;
      long long t0  = ms_now ();
      size_t n  = (N  *  N  );
      // ----------
      for (size_t i  = 0; (i  <  n  ); (++i )) {
          total_len  +=  ({ /* cicili#Let185 */
                vector_int acc_slc184  = ({ /* cicili#Let193 */
                  vector_int acc_slc188  = ({ /* cicili#Let201 */
                    vector_int acc_slc196  = v ;
                    uintptr_t acc_slc_mem197  = (acc_slc196 . vec );
                    size_t acc_slc_len198  = ((size_t)((acc_slc196 . llen ) |  (acc_slc196 . rlen ) ));
                    const size_t acc_slc_low199  = ((size_t)2);
                    const size_t acc_slc_high200  = ((size_t)acc_slc_len198 );
                    // ----------
                    ((((acc_slc_low199  <  0 ) ||  (acc_slc_low199  >  acc_slc_high200  ) ||  (acc_slc_high200  >  acc_slc_len198  ) ||  (acc_slc_high200  <  acc_slc_low199  ) )) ? ((vector_int){ ((uintptr_t)NULL ), ((unsigned)0), ((unsigned)0), ((size_t)0)}) : ({ /* cicili#Progn203 */
                        acc_slc_mem197  = ((uintptr_t)(((int *)acc_slc_mem197 ) +  acc_slc_low199  ));
                        acc_slc_len198  = (acc_slc_high200  -  acc_slc_low199  );
                        ((vector_int){ ((uintptr_t)acc_slc_mem197 ), ((unsigned)(acc_slc_len198  >>  16 )), ((unsigned)(acc_slc_len198  &  0xFFFF  )), 0UL });
                      }));
                  });
                  uintptr_t acc_slc_mem189  = (acc_slc188 . vec );
                  size_t acc_slc_len190  = ((size_t)((acc_slc188 . llen ) |  (acc_slc188 . rlen ) ));
                  const size_t acc_slc_low191  = ((size_t)2);
                  const size_t acc_slc_high192  = ((size_t)acc_slc_len190 );
                  // ----------
                  ((((acc_slc_low191  <  0 ) ||  (acc_slc_low191  >  acc_slc_high192  ) ||  (acc_slc_high192  >  acc_slc_len190  ) ||  (acc_slc_high192  <  acc_slc_low191  ) )) ? ((vector_int){ ((uintptr_t)NULL ), ((unsigned)0), ((unsigned)0), ((size_t)0)}) : ({ /* cicili#Progn206 */
                      acc_slc_mem189  = ((uintptr_t)(((int *)acc_slc_mem189 ) +  acc_slc_low191  ));
                      acc_slc_len190  = (acc_slc_high192  -  acc_slc_low191  );
                      ((vector_int){ ((uintptr_t)acc_slc_mem189 ), ((unsigned)(acc_slc_len190  >>  16 )), ((unsigned)(acc_slc_len190  &  0xFFFF  )), 0UL });
                    }));
                });
                // ----------
                ((size_t)((acc_slc184 . llen ) |  (acc_slc184 . rlen ) ));
              }) ;
      }
      { /* cicili#Let209 */
        long long elapsed  = (ms_now () -  t0  );
        // ----------
        printf ("  (slice checksum: %lld)\n", total_len );
        return elapsed ;
      }
    }
  }
}
void __ciciliL_220 (vector_int * vec01_ptr ) {
  vector_int vec01  = (*vec01_ptr );
  free_vector_int ((&vec01 ));
}
int main () {
  printf ("sizeof %s: %zu\n", "vector_int", sizeof(vector_int ));
  { /* cicili#Let216 */
    vector_int vec01  __attribute__((__cleanup__(__ciciliL_220 ))) = ({ /* cicili#Let222 */
      const size_t tmp_len218  = 5;
      int * tmp_vec219  = calloc (tmp_len218 , sizeof(int));
      // ----------
      memcpy (tmp_vec219 , ((int[]){ 1, 2, 3, 4, 5}), (tmp_len218  *  sizeof(int) ));
      ((vector_int){ ((uintptr_t)tmp_vec219 ), ((unsigned)(tmp_len218  >>  16 )), ((unsigned)(tmp_len218  &  0xFFFF  )), (*((size_t *)tmp_vec219 ))});
    });
    // ----------
    printf ("vec01 len: %zu\n", ({ /* cicili#Let229 */
        vector_int acc_slc228  = vec01 ;
        // ----------
        ((size_t)((acc_slc228 . llen ) |  (acc_slc228 . rlen ) ));
      }));
    printf ("print int vector using Unsafe nth: ");
    for (size_t i  = 0; (i  <  ({ /* cicili#Let233 */
          vector_int acc_slc232  = vec01 ;
          // ----------
          ((size_t)((acc_slc232 . llen ) |  (acc_slc232 . rlen ) ));
        }) ); (++i )) {
        printf ("%d", ((int *)(vec01 . vec ))[i ]);
    }
    putchar ('\n');
    printf ("print int vector using Safe nth: ");
    for (size_t i  = 0; (i  <  7 ); (++i )) {
        printf ("%d", ({ /* cicili#Let247 */
            vector_int acc_vec244  = vec01 ;
            uintptr_t acc_vec_mem245  = (acc_vec244 . vec );
            const size_t acc_vec_idx246  = i ;
            // ----------
            (((acc_vec_mem245  &&  (((acc_vec244 . addr ) ==  0UL  ) ||  ((*((size_t *)acc_vec_mem245 )) ==  (acc_vec244 . addr ) ) ) &&  (acc_vec_idx246  <  ((size_t)((acc_vec244 . llen ) |  (acc_vec244 . rlen ) )) ) )) ? ((int *)acc_vec_mem245 )[acc_vec_idx246 ] : 0);
          }));
    }
    putchar ('\n');
    printf ("print int slice using nth: ");
    ({ /* cicili#Let255 */
      vector_int acc_vec253  = ({ /* cicili#Let263 */
        vector_int acc_slc258  = vec01 ;
        uintptr_t acc_slc_mem259  = (acc_slc258 . vec );
        size_t acc_slc_len260  = ((size_t)((acc_slc258 . llen ) |  (acc_slc258 . rlen ) ));
        const size_t acc_slc_low261  = ((size_t)2);
        const size_t acc_slc_high262  = ((size_t)acc_slc_len260 );
        // ----------
        ((((acc_slc_low261  <  0 ) ||  (acc_slc_low261  >  acc_slc_high262  ) ||  (acc_slc_high262  >  acc_slc_len260  ) ||  (acc_slc_high262  <  acc_slc_low261  ) )) ? ((vector_int){ ((uintptr_t)NULL ), ((unsigned)0), ((unsigned)0), ((size_t)0)}) : ({ /* cicili#Progn265 */
            acc_slc_mem259  = ((uintptr_t)(((int *)acc_slc_mem259 ) +  acc_slc_low261  ));
            acc_slc_len260  = (acc_slc_high262  -  acc_slc_low261  );
            ((vector_int){ ((uintptr_t)acc_slc_mem259 ), ((unsigned)(acc_slc_len260  >>  16 )), ((unsigned)(acc_slc_len260  &  0xFFFF  )), 0UL });
          }));
      });
      int * pure_array  = ((int *)(acc_vec253 . vec ));
      size_t len  = ((size_t)((acc_vec253 . llen ) |  (acc_vec253 . rlen ) ));
      // ----------
      for (int i  = 0; (i  <  len  ); (++i )) {
          printf ("%d", pure_array [i ]);
      }
    });
    putchar ('\n');
  }
  printf ("  nth (bounds-checked) %zu times: %ld ms\n", N , bench_a_nth ());
  printf ("  slice (bounds-checked) %zu * %zu times: %ld ms\n", N , N , bench_a_slice ());
}
