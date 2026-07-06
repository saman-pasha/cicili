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
__attribute__((weak)) void free_array_int (array_int * array ) {
  ({ /* cicili#Progn111 */
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
    { /* cicili#Block119 */
      ({ /* cicili#Progn122 */
        printf ("FREE RC: %p %p %zx\n", (*((size_t **)(rc -> ptr ))), ((void *)(rc -> ptr )), (rc -> adr ));
      });
      { /* cicili#Let124 */
        size_t counter  = (*((size_t *)(((uintptr_t *)(rc -> ptr )) +  1 )));
        // ----------
        ({ /* cicili#Progn127 */
          printf ("FREE RC: counter: %zu\n", counter );
        });
        if (counter  >  1 )
          (--(*((size_t *)(((uintptr_t *)(rc -> ptr )) +  1 ))));
        else
          {
          if (counter  ==  1 )
            { /* cicili#Block133 */
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
typedef struct vector_int {
  rc_array_int vec ;
  size_t low ;
  size_t high ;
} vector_int;
__attribute__((weak)) void free_vector_int (vector_int * vector ) {
  ({ /* cicili#Progn143 */
    printf ("FREE VECTOR: %zx\n", ((uintptr_t)vector ));
  });
  free_rc_array_int ((&(vector -> vec )));
}
long long ms_now () {
  { /* cicili#Let204 */
    struct timeval tv ;
    // ----------
    gettimeofday ((&tv ), NULL );
    return (((tv . tv_sec ) *  1000LL  ) +  +  +  ((tv . tv_usec ) /  1000LL  ) );
  }
}
size_t N  = 1000000000;
size_t STEP  = 1000;
void __ciciliL_211 (vector_int * v_ptr ) {
  vector_int v  = (*v_ptr );
  free_vector_int ((&v ));
}
long bench_a_nth_rc () {
  printf ("\n");
  { /* cicili#Let207 */
    vector_int v  __attribute__((__cleanup__(__ciciliL_211 ))) = ({ /* cicili#Let214 */
      const size_t tmp_len210  = 50;
      // ----------
      ({ /* cicili#Progn217 */
        printf ("NEW VECTOR: %s %zu\n", "vector_int", tmp_len210 );
      });
      ((vector_int){ ({ /* cicili#Let224 */
          array_int * tmp_ptr222  = malloc (sizeof(array_int));
          uintptr_t * tmp_rc_ptr223  = malloc ((sizeof(uintptr_t) +  sizeof(size_t) ));
          // ----------
          (*tmp_ptr222 ) = ({ /* cicili#Let230 */
                const size_t tmp_len228  = tmp_len210 ;
                int * tmp_arr229  = calloc (tmp_len228 , sizeof(int));
                // ----------
                ({ /* cicili#Progn233 */
                  printf ("NEW ARR: %s %zx %zu\n", "array_int", ((size_t)tmp_arr229 ), tmp_len228 );
                });
                memcpy (tmp_arr229 , ((int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), (tmp_len228  *  sizeof(int) ));
                ((array_int){ ((uintptr_t)tmp_arr229 ), tmp_len228 });
              });
          (*tmp_rc_ptr223 ) = ((uintptr_t)tmp_ptr222 );
          (*((size_t *)(tmp_rc_ptr223  +  1 ))) = 1UL ;
          ({ /* cicili#Progn237 */
            printf ("NEW RC: %p %zx %zx\n", tmp_ptr222 , ((uintptr_t)tmp_rc_ptr223 ), (*((size_t *)tmp_rc_ptr223 )));
          });
          ((rc_array_int){ ((uintptr_t)tmp_rc_ptr223 ), (*((size_t *)tmp_rc_ptr223 ))});
        }), 0, tmp_len210 });
    });
    // ----------
    { /* cicili#Let240 */
      int64_t sum  = 0;
      long long t0  = ms_now ();
      // ----------
      for (size_t i  = 0; (i  <  N  ); (++i )) {
          sum  +=  ({ /* cicili#Let249 */
                vector_int acc_vec246  = v ;
                const size_t acc_vec_idx248  = ((acc_vec246 . low ) +  (i  %  50 ) );
                // ----------
                (((acc_vec_idx248  <  (acc_vec246 . high ) )) ? ({ /* cicili#Let255 */
                    rc_array_int acc_rc253  = (acc_vec246 . vec );
                    array_int ** acc_rc_ptr254  = ((array_int **)(acc_rc253 . ptr ));
                    // ----------
                    (((acc_rc_ptr254  &&  ((*((size_t *)acc_rc_ptr254 )) ==  (acc_rc253 . adr ) ) )) ? ({ /* cicili#Let257 */
                        __auto_type acc_vec_arr247  = (*(*acc_rc_ptr254 ));
                        // ----------
                        ((int *)(acc_vec_arr247 . arr ))[acc_vec_idx248 ];
                      }) : 0);
                  }) : 0);
              }) ;
      }
      { /* cicili#Let259 */
        long long elapsed  = (ms_now () -  t0  );
        // ----------
        printf ("  (nth rc checksum: %lld)\n", sum );
        return elapsed ;
      }
    }
  }
}
void __ciciliL_266 (vector_int * v_ptr ) {
  vector_int v  = (*v_ptr );
  free_vector_int ((&v ));
}
long bench_a_slice () {
  printf ("\n");
  { /* cicili#Let262 */
    vector_int v  __attribute__((__cleanup__(__ciciliL_266 ))) = ({ /* cicili#Let269 */
      const size_t tmp_len265  = 50;
      // ----------
      ({ /* cicili#Progn272 */
        printf ("NEW VECTOR: %s %zu\n", "vector_int", tmp_len265 );
      });
      ((vector_int){ ({ /* cicili#Let279 */
          array_int * tmp_ptr277  = malloc (sizeof(array_int));
          uintptr_t * tmp_rc_ptr278  = malloc ((sizeof(uintptr_t) +  sizeof(size_t) ));
          // ----------
          (*tmp_ptr277 ) = ({ /* cicili#Let285 */
                const size_t tmp_len283  = tmp_len265 ;
                int * tmp_arr284  = calloc (tmp_len283 , sizeof(int));
                // ----------
                ({ /* cicili#Progn288 */
                  printf ("NEW ARR: %s %zx %zu\n", "array_int", ((size_t)tmp_arr284 ), tmp_len283 );
                });
                memcpy (tmp_arr284 , ((int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), (tmp_len283  *  sizeof(int) ));
                ((array_int){ ((uintptr_t)tmp_arr284 ), tmp_len283 });
              });
          (*tmp_rc_ptr278 ) = ((uintptr_t)tmp_ptr277 );
          (*((size_t *)(tmp_rc_ptr278  +  1 ))) = 1UL ;
          ({ /* cicili#Progn292 */
            printf ("NEW RC: %p %zx %zx\n", tmp_ptr277 , ((uintptr_t)tmp_rc_ptr278 ), (*((size_t *)tmp_rc_ptr278 )));
          });
          ((rc_array_int){ ((uintptr_t)tmp_rc_ptr278 ), (*((size_t *)tmp_rc_ptr278 ))});
        }), 0, tmp_len265 });
    });
    // ----------
    { /* cicili#Let295 */
      int64_t total_len  = 0;
      long long t0  = ms_now ();
      size_t n  = (N  *  N  );
      // ----------
      for (size_t i  = 0; (i  <  n  ); (++i )) {
          total_len  +=  ({ /* cicili#Let302 */
                vector_int acc_slc301  = ({ /* cicili#Let308 */
                  vector_int acc_slc305  = ({ /* cicili#Let314 */
                    vector_int acc_slc311  = v ;
                    const size_t acc_slc_low312  = ((size_t)2);
                    const size_t acc_slc_high313  = ((size_t)((acc_slc311 . high ) -  (acc_slc311 . low ) ));
                    // ----------
                    ({ /* cicili#Progn317 */
                      printf ("slice %s: low: (%zu -> %zu), high: (%zu -> %zu)\n", "vector_int", acc_slc_low312 , ((acc_slc311 . low ) +  acc_slc_low312  ), acc_slc_high313 , ((acc_slc311 . low ) +  acc_slc_high313  ));
                    });
                    ((((acc_slc_low312  <  0 ) ||  (acc_slc_low312  >  acc_slc_high313  ) ||  (acc_slc_high313  >  ((acc_slc311 . high ) -  (acc_slc311 . low ) ) ) )) ? ((vector_int){ 0}) : ((vector_int){ ({ /* cicili#Let324 */
                          rc_array_int acc_rc322  = (acc_slc311 . vec );
                          array_int ** acc_rc_ptr323  = ((array_int **)(acc_rc322 . ptr ));
                          // ----------
                          if (acc_rc_ptr323  &&  ((*((size_t *)acc_rc_ptr323 )) ==  (acc_rc322 . adr ) ) )
                            { /* cicili#Block328 */
                              (++(*((size_t *)(((uintptr_t *)acc_rc_ptr323 ) +  1 ))));
                            }
                          acc_rc322 ;
                        }), ((acc_slc311 . low ) +  acc_slc_low312  ), ((acc_slc311 . low ) +  acc_slc_high313  )}));
                  });
                  const size_t acc_slc_low306  = ((size_t)2);
                  const size_t acc_slc_high307  = ((size_t)((acc_slc305 . high ) -  (acc_slc305 . low ) ));
                  // ----------
                  ({ /* cicili#Progn332 */
                    printf ("slice %s: low: (%zu -> %zu), high: (%zu -> %zu)\n", "vector_int", acc_slc_low306 , ((acc_slc305 . low ) +  acc_slc_low306  ), acc_slc_high307 , ((acc_slc305 . low ) +  acc_slc_high307  ));
                  });
                  ((((acc_slc_low306  <  0 ) ||  (acc_slc_low306  >  acc_slc_high307  ) ||  (acc_slc_high307  >  ((acc_slc305 . high ) -  (acc_slc305 . low ) ) ) )) ? ((vector_int){ 0}) : ((vector_int){ ({ /* cicili#Let339 */
                        rc_array_int acc_rc337  = (acc_slc305 . vec );
                        array_int ** acc_rc_ptr338  = ((array_int **)(acc_rc337 . ptr ));
                        // ----------
                        if (acc_rc_ptr338  &&  ((*((size_t *)acc_rc_ptr338 )) ==  (acc_rc337 . adr ) ) )
                          { /* cicili#Block343 */
                            (++(*((size_t *)(((uintptr_t *)acc_rc_ptr338 ) +  1 ))));
                          }
                        acc_rc337 ;
                      }), ((acc_slc305 . low ) +  acc_slc_low306  ), ((acc_slc305 . low ) +  acc_slc_high307  )}));
                });
                // ----------
                ((acc_slc301 . high ) -  (acc_slc301 . low ) );
              }) ;
          free_vector_int ((&v ));
          free_vector_int ((&v ));
      }
      { /* cicili#Let348 */
        long long elapsed  = (ms_now () -  t0  );
        // ----------
        printf ("  (slice checksum: %lld)\n", total_len );
        return elapsed ;
      }
    }
  }
}
void __ciciliL_358 (vector_int * vec01_ptr ) {
  vector_int vec01  = (*vec01_ptr );
  free_vector_int ((&vec01 ));
}
int main () {
  printf ("sizeof %s: %zu\n", "vector_int", sizeof(vector_int ));
  { /* cicili#Let355 */
    vector_int vec01  __attribute__((__cleanup__(__ciciliL_358 ))) = ({ /* cicili#Let360 */
      const size_t tmp_len357  = 5;
      // ----------
      ({ /* cicili#Progn363 */
        printf ("NEW VECTOR: %s %zu\n", "vector_int", tmp_len357 );
      });
      ((vector_int){ ({ /* cicili#Let370 */
          array_int * tmp_ptr368  = malloc (sizeof(array_int));
          uintptr_t * tmp_rc_ptr369  = malloc ((sizeof(uintptr_t) +  sizeof(size_t) ));
          // ----------
          (*tmp_ptr368 ) = ({ /* cicili#Let376 */
                const size_t tmp_len374  = tmp_len357 ;
                int * tmp_arr375  = calloc (tmp_len374 , sizeof(int));
                // ----------
                ({ /* cicili#Progn379 */
                  printf ("NEW ARR: %s %zx %zu\n", "array_int", ((size_t)tmp_arr375 ), tmp_len374 );
                });
                memcpy (tmp_arr375 , ((int[]){ 1, 2, 3, 4, 5}), (tmp_len374  *  sizeof(int) ));
                ((array_int){ ((uintptr_t)tmp_arr375 ), tmp_len374 });
              });
          (*tmp_rc_ptr369 ) = ((uintptr_t)tmp_ptr368 );
          (*((size_t *)(tmp_rc_ptr369  +  1 ))) = 1UL ;
          ({ /* cicili#Progn383 */
            printf ("NEW RC: %p %zx %zx\n", tmp_ptr368 , ((uintptr_t)tmp_rc_ptr369 ), (*((size_t *)tmp_rc_ptr369 )));
          });
          ((rc_array_int){ ((uintptr_t)tmp_rc_ptr369 ), (*((size_t *)tmp_rc_ptr369 ))});
        }), 0, tmp_len357 });
    });
    // ----------
    printf ("vec01 len: %zu\n", ({ /* cicili#Let388 */
        vector_int acc_slc387  = vec01 ;
        // ----------
        ((acc_slc387 . high ) -  (acc_slc387 . low ) );
      }));
    printf ("print int vector using only Safe nth: ");
    for (size_t i  = 0; (i  <  7 ); (++i )) {
        printf ("%d", ({ /* cicili#Let396 */
            vector_int acc_vec393  = vec01 ;
            const size_t acc_vec_idx395  = ((acc_vec393 . low ) +  i  );
            // ----------
            (((acc_vec_idx395  <  (acc_vec393 . high ) )) ? ({ /* cicili#Let402 */
                rc_array_int acc_rc400  = (acc_vec393 . vec );
                array_int ** acc_rc_ptr401  = ((array_int **)(acc_rc400 . ptr ));
                // ----------
                (((acc_rc_ptr401  &&  ((*((size_t *)acc_rc_ptr401 )) ==  (acc_rc400 . adr ) ) )) ? ({ /* cicili#Let404 */
                    __auto_type acc_vec_arr394  = (*(*acc_rc_ptr401 ));
                    // ----------
                    ((int *)(acc_vec_arr394 . arr ))[acc_vec_idx395 ];
                  }) : 0);
              }) : 0);
          }));
    }
    putchar ('\n');
    printf ("print int slice using nth: ");
    { /* cicili#Let410 */
      vector_int acc_vec408  = ({ /* cicili#Let416 */
        vector_int acc_slc413  = vec01 ;
        const size_t acc_slc_low414  = ((size_t)2);
        const size_t acc_slc_high415  = ((size_t)((acc_slc413 . high ) -  (acc_slc413 . low ) ));
        // ----------
        ({ /* cicili#Progn419 */
          printf ("slice %s: low: (%zu -> %zu), high: (%zu -> %zu)\n", "vector_int", acc_slc_low414 , ((acc_slc413 . low ) +  acc_slc_low414  ), acc_slc_high415 , ((acc_slc413 . low ) +  acc_slc_high415  ));
        });
        ((((acc_slc_low414  <  0 ) ||  (acc_slc_low414  >  acc_slc_high415  ) ||  (acc_slc_high415  >  ((acc_slc413 . high ) -  (acc_slc413 . low ) ) ) )) ? ((vector_int){ 0}) : ((vector_int){ ({ /* cicili#Let426 */
              rc_array_int acc_rc424  = (acc_slc413 . vec );
              array_int ** acc_rc_ptr425  = ((array_int **)(acc_rc424 . ptr ));
              // ----------
              if (acc_rc_ptr425  &&  ((*((size_t *)acc_rc_ptr425 )) ==  (acc_rc424 . adr ) ) )
                { /* cicili#Block430 */
                  (++(*((size_t *)(((uintptr_t *)acc_rc_ptr425 ) +  1 ))));
                }
              acc_rc424 ;
            }), ((acc_slc413 . low ) +  acc_slc_low414  ), ((acc_slc413 . low ) +  acc_slc_high415  )}));
      });
      // ----------
      { /* cicili#Let437 */
        rc_array_int acc_rc435  = (acc_vec408 . vec );
        array_int ** acc_rc_ptr436  = ((array_int **)(acc_rc435 . ptr ));
        // ----------
        if (acc_rc_ptr436  &&  ((*((size_t *)acc_rc_ptr436 )) ==  (acc_rc435 . adr ) ) )
          { /* cicili#Block441 */
            { /* cicili#Let443 */
              __auto_type acc_vec_arr409  = (*(*acc_rc_ptr436 ));
              // ----------
              { /* cicili#Let445 */
                int * pure_array  = (((int *)(acc_vec_arr409 . arr )) +  (acc_vec408 . low ) );
                size_t len  = ((acc_vec408 . high ) -  (acc_vec408 . low ) );
                // ----------
                for (int i  = 0; (i  <  len  ); (++i )) {
                    printf ("%d", pure_array [i ]);
                }
              }
            }
          }
      }
    }
    putchar ('\n');
    { /* cicili#Let453 */
      vector_int acc_vec451  = ({ /* cicili#Let459 */
        vector_int acc_slc456  = ({ /* cicili#Let465 */
          vector_int acc_slc462  = vec01 ;
          const size_t acc_slc_low463  = ((size_t)2);
          const size_t acc_slc_high464  = ((size_t)((acc_slc462 . high ) -  (acc_slc462 . low ) ));
          // ----------
          ({ /* cicili#Progn468 */
            printf ("slice %s: low: (%zu -> %zu), high: (%zu -> %zu)\n", "vector_int", acc_slc_low463 , ((acc_slc462 . low ) +  acc_slc_low463  ), acc_slc_high464 , ((acc_slc462 . low ) +  acc_slc_high464  ));
          });
          ((((acc_slc_low463  <  0 ) ||  (acc_slc_low463  >  acc_slc_high464  ) ||  (acc_slc_high464  >  ((acc_slc462 . high ) -  (acc_slc462 . low ) ) ) )) ? ((vector_int){ 0}) : ((vector_int){ ({ /* cicili#Let475 */
                rc_array_int acc_rc473  = (acc_slc462 . vec );
                array_int ** acc_rc_ptr474  = ((array_int **)(acc_rc473 . ptr ));
                // ----------
                if (acc_rc_ptr474  &&  ((*((size_t *)acc_rc_ptr474 )) ==  (acc_rc473 . adr ) ) )
                  { /* cicili#Block479 */
                    (++(*((size_t *)(((uintptr_t *)acc_rc_ptr474 ) +  1 ))));
                  }
                acc_rc473 ;
              }), ((acc_slc462 . low ) +  acc_slc_low463  ), ((acc_slc462 . low ) +  acc_slc_high464  )}));
        });
        const size_t acc_slc_low457  = ((size_t)2);
        const size_t acc_slc_high458  = ((size_t)((acc_slc456 . high ) -  (acc_slc456 . low ) ));
        // ----------
        ({ /* cicili#Progn483 */
          printf ("slice %s: low: (%zu -> %zu), high: (%zu -> %zu)\n", "vector_int", acc_slc_low457 , ((acc_slc456 . low ) +  acc_slc_low457  ), acc_slc_high458 , ((acc_slc456 . low ) +  acc_slc_high458  ));
        });
        ((((acc_slc_low457  <  0 ) ||  (acc_slc_low457  >  acc_slc_high458  ) ||  (acc_slc_high458  >  ((acc_slc456 . high ) -  (acc_slc456 . low ) ) ) )) ? ((vector_int){ 0}) : ((vector_int){ ({ /* cicili#Let490 */
              rc_array_int acc_rc488  = (acc_slc456 . vec );
              array_int ** acc_rc_ptr489  = ((array_int **)(acc_rc488 . ptr ));
              // ----------
              if (acc_rc_ptr489  &&  ((*((size_t *)acc_rc_ptr489 )) ==  (acc_rc488 . adr ) ) )
                { /* cicili#Block494 */
                  (++(*((size_t *)(((uintptr_t *)acc_rc_ptr489 ) +  1 ))));
                }
              acc_rc488 ;
            }), ((acc_slc456 . low ) +  acc_slc_low457  ), ((acc_slc456 . low ) +  acc_slc_high458  )}));
      });
      // ----------
      { /* cicili#Let501 */
        rc_array_int acc_rc499  = (acc_vec451 . vec );
        array_int ** acc_rc_ptr500  = ((array_int **)(acc_rc499 . ptr ));
        // ----------
        if (acc_rc_ptr500  &&  ((*((size_t *)acc_rc_ptr500 )) ==  (acc_rc499 . adr ) ) )
          { /* cicili#Block505 */
            { /* cicili#Let507 */
              __auto_type acc_vec_arr452  = (*(*acc_rc_ptr500 ));
              // ----------
              { /* cicili#Let509 */
                int * pure_array  = (((int *)(acc_vec_arr452 . arr )) +  (acc_vec451 . low ) );
                size_t len  = ((acc_vec451 . high ) -  (acc_vec451 . low ) );
                // ----------
                for (int i  = 0; (i  <  len  ); (++i )) {
                    printf ("%d", pure_array [i ]);
                }
              }
            }
          }
      }
    }
    putchar ('\n');
    free_vector_int ((&vec01 ));
    free_vector_int ((&vec01 ));
    free_vector_int ((&vec01 ));
  }
  printf ("  nth rc (bounds-checked) %zu times: %ld ms\n", N , bench_a_nth_rc ());
}
