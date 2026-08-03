#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
int N  = 1000000000;
int STEP  = 1000;
#ifndef __MAYBE_H_
#define __MAYBE_H_
typedef enum MAYBE_CTOR {
  NOTHING_CTOR = 0,
  JUST_CTOR
} MAYBE_CTOR;
typedef struct NothingT {
  char _unused ;
} NothingT;
typedef struct std_maybe std_maybe ;
#endif /* __MAYBE_H_ */ 
#ifndef __MAYBE__ref_int__H_
#define __MAYBE__ref_int__H_
typedef struct JustT_ref_int {
  int * restrict value ;
} JustT_ref_int;
typedef struct Maybe_ref_int {
  MAYBE_CTOR ctor ;
  union { /* ciciliUnion110 */
    JustT_ref_int just ;
    NothingT nothing ;
  } data ;
} Maybe_ref_int;
typedef std_maybe Maybe_ref_int_type_t ;
Maybe_ref_int just_ref_int (int * restrict value );
Maybe_ref_int nothing_ref_int ();
#endif /* __MAYBE__ref_int__H_ */ 
typedef struct vector_int {
  int * restrict arr ;
  size_t cap ;
  size_t len ;
} vector_int;
typedef int vector_int_item_t ;
#ifndef __VECTOR_TYPE_H_
#define __VECTOR_TYPE_H_
typedef struct std_vector std_vector ;
#endif /* __VECTOR_TYPE_H_ */ 
typedef std_vector vector_int_type_t ;
void free_vector_int (vector_int * restrict vector );
void free_vector_int_pointer (vector_int ** vector );
size_t arraySize_vector_int (size_t size );
vector_int new_vector_int (const int * items , size_t len );
size_t len_vector_int (vector_int * restrict vector );
Maybe_ref_int nth_vector_int (size_t index , vector_int * restrict vector );
void grow_vector_int (vector_int * restrict vector , size_t needed );
size_t push_vector_int (vector_int * restrict vector , int item );
size_t append_vector_int (vector_int * restrict vector , const int * items , size_t count );
#ifndef __MAYBE_IMPL__ref_int__H_
#define __MAYBE_IMPL__ref_int__H_
Maybe_ref_int just_ref_int (int * restrict value ) {
  return ((Maybe_ref_int){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_ref_int nothing_ref_int () {
  return ((Maybe_ref_int){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__ref_int__H_ */ 
__attribute__((weak)) void free_vector_int (vector_int * restrict vector ) {
  free ((vector -> arr));
}
__attribute__((weak)) void free_vector_int_pointer (vector_int ** vector ) {
  free_vector_int ((*vector ));
}
size_t arraySize_vector_int (size_t size ) {
  { /* let178 */
    size_t two_pow  = 0x10;
    // ----------
    while ((two_pow  <  size  )) {
        two_pow  = (two_pow  <<  1 );
    }
    return two_pow ;
  }
}
vector_int new_vector_int (const int * items , size_t len ) {
  if (len  ==  0 )
    { /* block188 */
      return ((vector_int){ NULL , 0, 0});
    }
  return ({ /* letn191 */
      const size_t cap  = arraySize_vector_int (len );
      int * restrict arr  = malloc ((cap  *  sizeof(int) ));
      // ----------
      if (items  &&  len  )
        memcpy (arr , items , (len  *  sizeof(int) ));
      else
        memset (arr , 0, (len  *  sizeof(int) ));
      ((vector_int){ arr , cap , len });
    });
}
size_t len_vector_int (vector_int * restrict vector ) {
  return (vector -> len);
}
Maybe_ref_int nth_vector_int (size_t index , vector_int * restrict vector ) {
  if (index  <  (vector -> len) )
    return ((Maybe_ref_int){ .ctor = JUST_CTOR , .data.just.value = ((vector -> arr) +  index  )});
  else
    return ((Maybe_ref_int){ .ctor = NOTHING_CTOR });
}
void grow_vector_int (vector_int * restrict vector , size_t needed ) {
  if (needed  >  (vector -> cap) )
    { /* block218 */
      { /* let220 */
        const size_t cap  = arraySize_vector_int (needed );
        // ----------
        (vector -> arr) = realloc ((vector -> arr), (cap  *  sizeof(int) ));
        (vector -> cap) = cap ;
      }
    }
}
size_t push_vector_int (vector_int * restrict vector , int item ) {
  grow_vector_int (vector , ((vector -> len) +  1 ));
  (vector -> arr)[(vector -> len)] = item ;
  (vector -> len) = ((vector -> len) +  1 );
  return (vector -> len);
}
size_t append_vector_int (vector_int * restrict vector , const int * items , size_t count ) {
  grow_vector_int (vector , ((vector -> len) +  count  ));
  memcpy (((vector -> arr) +  (vector -> len) ), items , (count  *  sizeof(int) ));
  (vector -> len) = ((vector -> len) +  count  );
  return (vector -> len);
}
typedef struct rc_vector_int {
  vector_int * restrict ptr ;
  size_t * count ;
} rc_vector_int;
typedef vector_int rc_vector_int_interior_t ;
#ifndef __RC_TYPE_H_
#define __RC_TYPE_H_
typedef struct std_rc std_rc ;
#endif /* __RC_TYPE_H_ */ 
typedef std_rc rc_vector_int_type_t ;
void free_rc_vector_int (rc_vector_int * rc );
void free_rc_vector_int_pointer (rc_vector_int ** rc );
rc_vector_int clone_rc_vector_int (rc_vector_int * restrict rc );
__attribute__((weak)) void free_rc_vector_int (rc_vector_int * rc ) {
  if ((rc -> ptr) &&  (rc -> count) )
    { /* block260 */
      if ((*(rc -> count)) ==  1 )
        { /* block266 */
          free_vector_int ((rc -> ptr));
          free ((rc -> count));
          free ((rc -> ptr));
        }
      else
        (--(*(rc -> count)));
    }
}
__attribute__((weak)) void free_rc_vector_int_pointer (rc_vector_int ** rc ) {
  free_rc_vector_int ((*rc ));
}
rc_vector_int clone_rc_vector_int (rc_vector_int * restrict rc ) {
  if ((rc -> ptr) &&  (rc -> count) &&  ((*(rc -> count)) >=  1 ) )
    { /* block281 */
      (++(*(rc -> count)));
      return ((rc_vector_int){ (rc -> ptr), (rc -> count)});
    }
  return ((rc_vector_int){ NULL , NULL });
}
long long ms_now () {
  { /* let288 */
    struct timespec ts ;
    // ----------
    timespec_get ((&ts ), TIME_UTC );
    return ((((long long)(ts . tv_sec)) *  1000 ) +  ((ts . tv_nsec) /  1000000 ) );
  }
  return 0;
}
long bench_nth () {
  ({ /* letn296 */
    vector_int v  __attribute__((__cleanup__(free_vector_int ))) = new_vector_int (((const int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), 50);
    // ----------
    { /* let301 */
      int64_t sum  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          { /* let310 */
            Maybe_ref_int match309  = nth_vector_int ((i  %  50 ), (&v ));
            // ----------
            if ((match309 . ctor) ==  JUST_CTOR  ) {
                { /* let314 */
                  int * restrict val  = (((match309 . data). just). value);
                  // ----------
                  sum  += (*val ) ;
                }
            }
          }
      }
      { /* let316 */
        long long elapsed  = (ms_now () -  t0  );
        // ----------
        printf ("  (nth checksum: %lld)\n", sum );
        return elapsed ;
      }
    }
  });
}
long bench_construct (const int * items ) {
  { /* let319 */
    int64_t sum  = 0;
    long long t0  = ms_now ();
    // ----------
    for (int e  = 0; (e  <  (N  /  STEP  ) ); (++e )) {
        ({ /* letn327 */
          vector_int v  __attribute__((__cleanup__(free_vector_int ))) = new_vector_int (items , STEP );
          // ----------
          sum  += ((int64_t)((size_t)(v . arr))) ;
        });
    }
    { /* let330 */
      long long elapsed  = (ms_now () -  t0  );
      // ----------
      printf ("  (construct checksum: %lld)\n", sum );
      return elapsed ;
    }
  }
}
long bench_push () {
  { /* let333 */
    int64_t sum  = 0;
    long long t0  = ms_now ();
    // ----------
    for (int e  = 0; (e  <  (N  /  STEP  ) ); (++e )) {
        ({ /* letn343 */
          vector_int v  __attribute__((__cleanup__(free_vector_int ))) = new_vector_int (((const int[]){ 0}), 0);
          // ----------
          for (int i  = 0; (i  <  STEP  ); (++i )) {
              push_vector_int ((&v ), ((e  *  STEP  ) +  i  ));
          }
          sum  += ((int64_t)((size_t)(v . arr))) ;
        });
    }
    { /* let353 */
      long long elapsed  = (ms_now () -  t0  );
      // ----------
      printf ("  (push checksum: %lld)\n", sum );
      return elapsed ;
    }
  }
}
long bench_append (const int * items ) {
  { /* let356 */
    int64_t sum  = 0;
    long long t0  = ms_now ();
    // ----------
    for (int e  = 0; (e  <  (N  /  STEP  ) ); (++e )) {
        ({ /* letn366 */
          vector_int v  __attribute__((__cleanup__(free_vector_int ))) = new_vector_int (((const int[]){ 0}), 0);
          // ----------
          append_vector_int ((&v ), items , STEP );
          sum  += ((int64_t)((size_t)(v . arr))) ;
        });
    }
    { /* let373 */
      long long elapsed  = (ms_now () -  t0  );
      // ----------
      printf ("  (append checksum: %lld)\n", sum );
      return elapsed ;
    }
  }
}
int64_t letn_rc_vector_int_G416 (rc_vector_int * restrict rc , int64_t default_value ) {
  return (((rc -> ptr)) ? ({ /* letn419 */
        rc_vector_int_interior_t * restrict v  = (rc -> ptr);
        // ----------
        ((int64_t)((size_t)(v -> arr)));
      }) : default_value );
}
long bench_construct_rc (const int * items ) {
  { /* let376 */
    int64_t sum  = 0;
    long long t0  = ms_now ();
    // ----------
    for (int e  = 0; (e  <  (N  /  STEP  ) ); (++e )) {
        ({ /* letn398 */
          rc_vector_int r  __attribute__((__cleanup__(free_rc_vector_int ))) = ({ /* letn407 */
            vector_int * restrict vector_int_ptr404  = malloc (sizeof(vector_int));
            vector_int vector_int_obj405  = new_vector_int (items , STEP );
            size_t * vector_int_count406  = malloc (sizeof(size_t));
            // ----------
            memcpy (vector_int_ptr404 , (&vector_int_obj405 ), sizeof(vector_int_obj405));
            (*vector_int_count406 ) = 1;
            ((rc_vector_int){ vector_int_ptr404 , vector_int_count406 });
          });
          // ----------
          sum  += letn_rc_vector_int_G416 ((&r ), ((int64_t)0)) ;
        });
    }
    { /* let422 */
      long long elapsed  = (ms_now () -  t0  );
      // ----------
      printf ("  (construct rc checksum: %lld)\n", sum );
      return elapsed ;
    }
  }
}
int64_t letn_rc_vector_int_G462 (rc_vector_int * restrict rc , int64_t default_value ) {
  return (((rc -> ptr)) ? ({ /* letn465 */
        rc_vector_int_interior_t * restrict v  = (rc -> ptr);
        // ----------
        ({ /* letn468 */
          int64_t s  = 0;
          // ----------
          for (int i  = 0; (i  <  N  ); (++i )) {
              { /* let477 */
                Maybe_ref_int match476  = nth_vector_int ((i  %  50 ), v );
                // ----------
                if ((match476 . ctor) ==  JUST_CTOR  ) {
                    { /* let481 */
                      int * restrict val  = (((match476 . data). just). value);
                      // ----------
                      s  += (*val ) ;
                    }
                }
              }
          }
          s ;
        });
      }) : default_value );
}
long bench_nth_rc () {
  ({ /* letn442 */
    rc_vector_int r  __attribute__((__cleanup__(free_rc_vector_int ))) = ({ /* letn451 */
      vector_int * restrict vector_int_ptr448  = malloc (sizeof(vector_int));
      vector_int vector_int_obj449  = new_vector_int (((const int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), 50);
      size_t * vector_int_count450  = malloc (sizeof(size_t));
      // ----------
      memcpy (vector_int_ptr448 , (&vector_int_obj449 ), sizeof(vector_int_obj449));
      (*vector_int_count450 ) = 1;
      ((rc_vector_int){ vector_int_ptr448 , vector_int_count450 });
    });
    // ----------
    { /* let459 */
      int64_t sum  = 0;
      long long t0  = ms_now ();
      // ----------
      sum  = letn_rc_vector_int_G462 ((&r ), ((int64_t)0));
      { /* let483 */
        long long elapsed  = (ms_now () -  t0  );
        // ----------
        printf ("  (nth rc checksum: %lld)\n", sum );
        return elapsed ;
      }
    }
  });
}
void let_rc_vector_int_G526 (rc_vector_int * restrict rc , int e ) {
  if ((rc -> ptr))
    { /* block532 */
      { /* let534 */
        rc_vector_int_interior_t * restrict v  = (rc -> ptr);
        // ----------
        for (int i  = 0; (i  <  STEP  ); (++i )) {
            push_vector_int (v , ((e  *  STEP  ) +  i  ));
        }
      }
    }
}
int64_t letn_rc_vector_int_G543 (rc_vector_int * restrict rc , int64_t default_value ) {
  return (((rc -> ptr)) ? ({ /* letn546 */
        rc_vector_int_interior_t * restrict v  = (rc -> ptr);
        // ----------
        ((int64_t)((size_t)(v -> arr)));
      }) : default_value );
}
long bench_push_rc () {
  { /* let486 */
    int64_t sum  = 0;
    long long t0  = ms_now ();
    // ----------
    for (int e  = 0; (e  <  (N  /  STEP  ) ); (++e )) {
        ({ /* letn508 */
          rc_vector_int r  __attribute__((__cleanup__(free_rc_vector_int ))) = ({ /* letn517 */
            vector_int * restrict vector_int_ptr514  = malloc (sizeof(vector_int));
            vector_int vector_int_obj515  = new_vector_int (((const int[]){ 0}), 0);
            size_t * vector_int_count516  = malloc (sizeof(size_t));
            // ----------
            memcpy (vector_int_ptr514 , (&vector_int_obj515 ), sizeof(vector_int_obj515));
            (*vector_int_count516 ) = 1;
            ((rc_vector_int){ vector_int_ptr514 , vector_int_count516 });
          });
          // ----------
          let_rc_vector_int_G526 ((&r ), e );
          sum  += letn_rc_vector_int_G543 ((&r ), ((int64_t)0)) ;
        });
    }
    { /* let549 */
      long long elapsed  = (ms_now () -  t0  );
      // ----------
      printf ("  (push rc checksum: %lld)\n", sum );
      return elapsed ;
    }
  }
}
void let_rc_vector_int_G598 (rc_vector_int * restrict rc , const int * items ) {
  if ((rc -> ptr))
    { /* block604 */
      { /* let606 */
        rc_vector_int_interior_t * restrict v  = (rc -> ptr);
        // ----------
        append_vector_int (v , items , STEP );
      }
    }
}
int64_t letn_rc_vector_int_G612 (rc_vector_int * restrict rc , int64_t default_value ) {
  return (((rc -> ptr)) ? ({ /* letn615 */
        rc_vector_int_interior_t * restrict v  = (rc -> ptr);
        // ----------
        ((int64_t)((size_t)(v -> arr)));
      }) : default_value );
}
long bench_append_rc (const int * items ) {
  { /* let552 */
    int64_t sum  = 0;
    long long t0  = ms_now ();
    // ----------
    for (int e  = 0; (e  <  (N  /  STEP  ) ); (++e )) {
        ({ /* letn574 */
          rc_vector_int r  __attribute__((__cleanup__(free_rc_vector_int ))) = ({ /* letn583 */
            vector_int * restrict vector_int_ptr580  = malloc (sizeof(vector_int));
            vector_int vector_int_obj581  = new_vector_int (((const int[]){ 0}), 0);
            size_t * vector_int_count582  = malloc (sizeof(size_t));
            // ----------
            memcpy (vector_int_ptr580 , (&vector_int_obj581 ), sizeof(vector_int_obj581));
            (*vector_int_count582 ) = 1;
            ((rc_vector_int){ vector_int_ptr580 , vector_int_count582 });
          });
          // ----------
          if ((r . ptr) &&  (r . count) &&  ((*(r . count)) ==  1 ) )
            { /* block595 */
              let_rc_vector_int_G598 ((&r ), items );
            }
          sum  += letn_rc_vector_int_G612 ((&r ), ((int64_t)0)) ;
        });
    }
    { /* let618 */
      long long elapsed  = (ms_now () -  t0  );
      // ----------
      printf ("  (append rc checksum: %lld)\n", sum );
      return elapsed ;
    }
  }
}
void __ciciliL_623 (int ** items ) {
  free (((void *)(*items )));
}
int main () {
  printf ("Cicili lib/std vector -- %d operations each\n\n", N );
  { /* let622 */
    int * items  __attribute__((__cleanup__(__ciciliL_623 ))) = ((int *)calloc (STEP , sizeof(int)));
    // ----------
    for (int i  = 0; (i  <  STEP  ); (++i )) {
        items [i ] = i ;
    }
    printf ("  construct (new^vector, %d x %d): %ld ms\n", (N  /  STEP  ), STEP , bench_construct (items ));
    printf ("  nth (bounds-checked) %d times: %ld ms\n", N , bench_nth ());
    printf ("  push %d elements (%d x %d epoch): %ld ms\n", N , (N  /  STEP  ), STEP , bench_push ());
    printf ("  append %d elements (%d x %d epoch): %ld ms\n", N , (N  /  STEP  ), STEP , bench_append (items ));
    printf ("\n  -- inside an rc --\n");
    printf ("  construct rc (%d x %d): %ld ms\n", (N  /  STEP  ), STEP , bench_construct_rc (items ));
    printf ("  nth rc (bounds-checked) %d times: %ld ms\n", N , bench_nth_rc ());
    printf ("  push rc %d elements: %ld ms\n", N , bench_push_rc ());
    printf ("  append rc %d elements: %ld ms\n", N , bench_append_rc (items ));
  }
  return 0;
}
