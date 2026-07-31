#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
int N  = 1000000000;
int STEP  = 1000;
typedef struct maybe_int {
  bool present ;
  int value ;
} maybe_int;
typedef int maybe_int_interior_t ;
#ifndef __MAYBE_TYPE_H_
#define __MAYBE_TYPE_H_
typedef struct std_maybe std_maybe ;
#endif /* __MAYBE_TYPE_H_ */ 
typedef std_maybe maybe_int_type_t ;
maybe_int just_maybe_int (int value );
maybe_int nothing_maybe_int ();
typedef struct array_int {
  int * const arr ;
  size_t len ;
} array_int;
typedef int array_int_item_t ;
#ifndef __ARRAY_TYPE_H_
#define __ARRAY_TYPE_H_
typedef struct std_array std_array ;
#endif /* __ARRAY_TYPE_H_ */ 
typedef std_array array_int_type_t ;
void free_array_int (array_int * restrict array );
void free_array_int_pointer (array_int ** array );
array_int new_array_int (const int * arr , size_t len , size_t cap );
size_t len_array_int (array_int * restrict array );
maybe_int nth_array_int (size_t index , array_int * restrict array );
typedef struct rc_array_int_context {
  array_int * const ptr ;
  size_t * count ;
} rc_array_int_context;
void free_rc_array_int_context (rc_array_int_context * ctx );
void free_rc_array_int_context_pointer (rc_array_int_context ** ctx );
typedef struct cell_rc_array_int_context {
  rc_array_int_context * restrict ptr ;
} cell_rc_array_int_context;
typedef rc_array_int_context cell_rc_array_int_context_interior_t ;
#ifndef __CELL_TYPE_H_
#define __CELL_TYPE_H_
typedef struct std_cell std_cell ;
#endif /* __CELL_TYPE_H_ */ 
typedef std_cell cell_rc_array_int_context_type_t ;
void free_cell_rc_array_int_context (cell_rc_array_int_context * cell );
void free_cell_rc_array_int_context_pointer (cell_rc_array_int_context ** cell );
cell_rc_array_int_context clone_rc_array_int_context (cell_rc_array_int_context * restrict ctx_cell );
typedef struct vector_int {
  cell_rc_array_int_context vec ;
  size_t low ;
  size_t high ;
} vector_int;
typedef int vector_int_item_t ;
#ifndef __VECTOR_TYPE_H_
#define __VECTOR_TYPE_H_
typedef struct std_vector std_vector ;
#endif /* __VECTOR_TYPE_H_ */ 
typedef std_vector vector_int_type_t ;
void free_vector_int (vector_int * vector );
size_t arraySize_vector_int (size_t size );
array_int * buffer_vector_int (vector_int * restrict vector );
size_t len_vector_int (vector_int * restrict vector );
maybe_int nth_vector_int (size_t index , vector_int * restrict vector );
size_t push_vector_int (vector_int * restrict vector , int item );
size_t append_vector_int (vector_int * restrict vector , const int * items , size_t count );
__attribute__((weak)) maybe_int just_maybe_int (int value ) {
  return ((maybe_int){ true , value });
}
__attribute__((weak)) maybe_int nothing_maybe_int () {
  return ((maybe_int){ false , ((int){ 0})});
}
__attribute__((weak)) void free_array_int (array_int * restrict array ) {
  free ((array -> arr));
}
__attribute__((weak)) void free_array_int_pointer (array_int ** array ) {
  free_array_int ((*array ));
}
array_int new_array_int (const int * arr , size_t len , size_t cap ) {
  return ({ /* letn222 */
      int * new_arr  = calloc (cap , sizeof(int));
      // ----------
      if (arr  &&  len  )
        { /* block229 */
          memcpy (new_arr , arr , (len  *  sizeof(int) ));
        }
      ((array_int){ new_arr , cap });
    });
}
size_t len_array_int (array_int * restrict array ) {
  return (array -> len);
}
maybe_int nth_array_int (size_t index , array_int * restrict array ) {
  if (index  <  (array -> len) )
    return ((maybe_int){ true , (array -> arr)[index ]});
  else
    return ((maybe_int){ false , ((maybe_int_interior_t){ 0})});
}
__attribute__((weak)) void free_cell_rc_array_int_context (cell_rc_array_int_context * cell ) {
  if ((cell -> ptr))
    { /* block257 */
      free_rc_array_int_context ((cell -> ptr));
      free ((cell -> ptr));
    }
}
__attribute__((weak)) void free_cell_rc_array_int_context_pointer (cell_rc_array_int_context ** cell ) {
  free_cell_rc_array_int_context ((*cell ));
}
__attribute__((weak)) void free_rc_array_int_context (rc_array_int_context * ctx ) {
  if ((ctx -> ptr) &&  (ctx -> count) )
    { /* block272 */
      if ((*(ctx -> count)) ==  1 )
        { /* block278 */
          free_array_int ((ctx -> ptr));
          free ((ctx -> count));
          free ((ctx -> ptr));
        }
      else
        (--(*(ctx -> count)));
    }
}
__attribute__((weak)) void free_rc_array_int_context_pointer (rc_array_int_context ** ctx ) {
  free_rc_array_int_context ((*ctx ));
}
cell_rc_array_int_context clone_rc_array_int_context (cell_rc_array_int_context * restrict ctx_cell ) {
  if ((ctx_cell -> ptr) &&  ((ctx_cell -> ptr)-> ptr) &&  ((ctx_cell -> ptr)-> count) &&  ((*((ctx_cell -> ptr)-> count)) >=  1 ) )
    return ({ /* letn292 */
        rc_array_int_context * new_ctx  = malloc (sizeof((*(ctx_cell -> ptr))));
        // ----------
        (++(*((ctx_cell -> ptr)-> count)));
        memcpy (new_ctx , (ctx_cell -> ptr), sizeof((*(ctx_cell -> ptr))));
        ((cell_rc_array_int_context){ new_ctx });
      });
  else
    return ((cell_rc_array_int_context){ NULL });
}
__attribute__((weak)) void free_vector_int (vector_int * vector ) {
  free_cell_rc_array_int_context ((&(vector -> vec)));
}
size_t arraySize_vector_int (size_t size ) {
  { /* let308 */
    size_t two_pow  = 0x10;
    // ----------
    while ((two_pow  <  size  )) {
        two_pow  = (two_pow  <<  1 );
    }
    return two_pow ;
  }
}
array_int * buffer_vector_int (vector_int * restrict vector ) {
  if ((vector -> vec). ptr)
    { /* block319 */
      return (((vector -> vec). ptr)-> ptr);
    }
  return NULL ;
}
size_t len_vector_int (vector_int * restrict vector ) {
  return ((vector -> high) -  (vector -> low) );
}
maybe_int nth_vector_int (size_t index , vector_int * restrict vector ) {
  { /* let328 */
    array_int * arr  = buffer_vector_int (vector );
    size_t at  = ((vector -> low) +  index  );
    // ----------
    if (arr  &&  (at  <  (vector -> high) ) &&  (at  <  (arr -> len) ) )
      return ((maybe_int){ true , (arr -> arr)[at ]});
    else
      return ((maybe_int){ false , ((maybe_int_interior_t){ 0})});
  }
}
size_t push_vector_int (vector_int * restrict vector , int item ) {
  return append_vector_int (vector , (&item ), 1);
}
size_t append_vector_int (vector_int * restrict vector , const int * items , size_t count ) {
  { /* let345 */
    const size_t low  = (vector -> low);
    const size_t high  = (vector -> high);
    const size_t total  = (((vector -> high) -  (vector -> low) ) +  count  );
    array_int * arr  = buffer_vector_int (vector );
    // ----------
    if (arr  &&  (((vector -> vec). ptr)-> count) &&  ((*(((vector -> vec). ptr)-> count)) ==  1 ) &&  ((high  +  count  ) <=  (arr -> len) ) )
      { /* block352 */
        memcpy (((arr -> arr) +  high  ), items , (count  *  sizeof(int) ));
        (vector -> high) = (high  +  count  );
        return total ;
      }
    { /* let356 */
      const size_t cap  = arraySize_vector_int (total );
      // ----------
      { /* let361 */
        cell_rc_array_int_context fresh  = ({ /* letn382 */
          rc_array_int_context * rc_array_int_context_ptr380  = malloc (sizeof(rc_array_int_context));
          rc_array_int_context rc_array_int_context_obj381  = ({ /* letn390 */
            array_int * array_int_ptr387  = malloc (sizeof(array_int));
            array_int array_int_obj388  = new_array_int (((arr ) ? ((arr -> arr) +  low  ) : NULL ), ((arr ) ? (high  -  low  ) : 0), cap );
            size_t * array_int_count389  = malloc (sizeof(size_t));
            // ----------
            memcpy (array_int_ptr387 , (&array_int_obj388 ), sizeof(array_int_obj388));
            (*array_int_count389 ) = 1;
            ((rc_array_int_context){ array_int_ptr387 , array_int_count389 });
          });
          // ----------
          memcpy (rc_array_int_context_ptr380 , (&rc_array_int_context_obj381 ), sizeof(rc_array_int_context_obj381));
          ((cell_rc_array_int_context){ rc_array_int_context_ptr380 });
        });
        // ----------
        memcpy (((((fresh . ptr)-> ptr)-> arr) +  (high  -  low  ) ), items , (count  *  sizeof(int) ));
        free_cell_rc_array_int_context ((&(vector -> vec)));
        ((vector -> vec). ptr) = (fresh . ptr);
        (vector -> low) = 0;
        (vector -> high) = total ;
        return total ;
      }
    }
  }
}
long long ms_now () {
  { /* let404 */
    struct timespec ts ;
    // ----------
    timespec_get ((&ts ), TIME_UTC );
    return ((((long long)(ts . tv_sec)) *  1000 ) +  ((ts . tv_nsec) /  1000000 ) );
  }
  return 0;
}
long bench_nth () {
  ({ /* letn494 */
    vector_int v  __attribute__((__cleanup__(free_vector_int ))) = ({ /* letn499 */
      const size_t tmp_len497  = 50;
      const size_t arr_len498  = arraySize_vector_int (50);
      // ----------
      ((vector_int){ ({ /* letn523 */
          rc_array_int_context * rc_array_int_context_ptr521  = malloc (sizeof(rc_array_int_context));
          rc_array_int_context rc_array_int_context_obj522  = ({ /* letn531 */
            array_int * array_int_ptr528  = malloc (sizeof(array_int));
            array_int array_int_obj529  = new_array_int (((const int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), tmp_len497 , arr_len498 );
            size_t * array_int_count530  = malloc (sizeof(size_t));
            // ----------
            memcpy (array_int_ptr528 , (&array_int_obj529 ), sizeof(array_int_obj529));
            (*array_int_count530 ) = 1;
            ((rc_array_int_context){ array_int_ptr528 , array_int_count530 });
          });
          // ----------
          memcpy (rc_array_int_context_ptr521 , (&rc_array_int_context_obj522 ), sizeof(rc_array_int_context_obj522));
          ((cell_rc_array_int_context){ rc_array_int_context_ptr521 });
        }), 0, tmp_len497 });
    });
    // ----------
    { /* let543 */
      int64_t sum  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          { /* let552 */
            maybe_int match551  = nth_vector_int ((i  %  50 ), (&v ));
            // ----------
            if (match551 . present) {
                { /* let556 */
                  int val  = (match551 . value);
                  // ----------
                  sum  += val  ;
                }
            }
          }
      }
      { /* let558 */
        long long elapsed  = (ms_now () -  t0  );
        // ----------
        printf ("  (nth checksum: %lld)\n", sum );
        return elapsed ;
      }
    }
  });
}
long bench_construct (const int * items ) {
  { /* let561 */
    int64_t sum  = 0;
    long long t0  = ms_now ();
    // ----------
    for (int e  = 0; (e  <  (N  /  STEP  ) ); (++e )) {
        ({ /* letn650 */
          vector_int v  __attribute__((__cleanup__(free_vector_int ))) = ({ /* letn652 */
            const size_t tmp_len568  = STEP ;
            const size_t arr_len569  = arraySize_vector_int (STEP );
            // ----------
            ((vector_int){ ({ /* letn673 */
                rc_array_int_context * rc_array_int_context_ptr671  = malloc (sizeof(rc_array_int_context));
                rc_array_int_context rc_array_int_context_obj672  = ({ /* letn681 */
                  array_int * array_int_ptr678  = malloc (sizeof(array_int));
                  array_int array_int_obj679  = new_array_int (items , tmp_len568 , arr_len569 );
                  size_t * array_int_count680  = malloc (sizeof(size_t));
                  // ----------
                  memcpy (array_int_ptr678 , (&array_int_obj679 ), sizeof(array_int_obj679));
                  (*array_int_count680 ) = 1;
                  ((rc_array_int_context){ array_int_ptr678 , array_int_count680 });
                });
                // ----------
                memcpy (rc_array_int_context_ptr671 , (&rc_array_int_context_obj672 ), sizeof(rc_array_int_context_obj672));
                ((cell_rc_array_int_context){ rc_array_int_context_ptr671 });
              }), 0, tmp_len568 });
          });
          // ----------
          sum  += ((int64_t)len_vector_int ((&v ))) ;
        });
    }
    { /* let695 */
      long long elapsed  = (ms_now () -  t0  );
      // ----------
      printf ("  (construct checksum: %lld)\n", sum );
      return elapsed ;
    }
  }
}
long bench_push () {
  { /* let698 */
    int64_t sum  = 0;
    long long t0  = ms_now ();
    // ----------
    for (int e  = 0; (e  <  (N  /  STEP  ) ); (++e )) {
        ({ /* letn789 */
          vector_int v  __attribute__((__cleanup__(free_vector_int ))) = ({ /* letn794 */
            const size_t tmp_len792  = 0;
            const size_t arr_len793  = arraySize_vector_int (0);
            // ----------
            ((vector_int){ ({ /* letn818 */
                rc_array_int_context * rc_array_int_context_ptr816  = malloc (sizeof(rc_array_int_context));
                rc_array_int_context rc_array_int_context_obj817  = ({ /* letn826 */
                  array_int * array_int_ptr823  = malloc (sizeof(array_int));
                  array_int array_int_obj824  = new_array_int (((const int[]){ 0}), tmp_len792 , arr_len793 );
                  size_t * array_int_count825  = malloc (sizeof(size_t));
                  // ----------
                  memcpy (array_int_ptr823 , (&array_int_obj824 ), sizeof(array_int_obj824));
                  (*array_int_count825 ) = 1;
                  ((rc_array_int_context){ array_int_ptr823 , array_int_count825 });
                });
                // ----------
                memcpy (rc_array_int_context_ptr816 , (&rc_array_int_context_obj817 ), sizeof(rc_array_int_context_obj817));
                ((cell_rc_array_int_context){ rc_array_int_context_ptr816 });
              }), 0, tmp_len792 });
          });
          // ----------
          for (int i  = 0; (i  <  STEP  ); (++i )) {
              push_vector_int ((&v ), ((e  *  STEP  ) +  i  ));
          }
          sum  += ((int64_t)len_vector_int ((&v ))) ;
        });
    }
    { /* let845 */
      long long elapsed  = (ms_now () -  t0  );
      // ----------
      printf ("  (push checksum: %lld)\n", sum );
      return elapsed ;
    }
  }
}
long bench_append (const int * items ) {
  { /* let848 */
    int64_t sum  = 0;
    long long t0  = ms_now ();
    // ----------
    for (int e  = 0; (e  <  (N  /  STEP  ) ); (++e )) {
        ({ /* letn939 */
          vector_int v  __attribute__((__cleanup__(free_vector_int ))) = ({ /* letn944 */
            const size_t tmp_len942  = 0;
            const size_t arr_len943  = arraySize_vector_int (0);
            // ----------
            ((vector_int){ ({ /* letn968 */
                rc_array_int_context * rc_array_int_context_ptr966  = malloc (sizeof(rc_array_int_context));
                rc_array_int_context rc_array_int_context_obj967  = ({ /* letn976 */
                  array_int * array_int_ptr973  = malloc (sizeof(array_int));
                  array_int array_int_obj974  = new_array_int (((const int[]){ 0}), tmp_len942 , arr_len943 );
                  size_t * array_int_count975  = malloc (sizeof(size_t));
                  // ----------
                  memcpy (array_int_ptr973 , (&array_int_obj974 ), sizeof(array_int_obj974));
                  (*array_int_count975 ) = 1;
                  ((rc_array_int_context){ array_int_ptr973 , array_int_count975 });
                });
                // ----------
                memcpy (rc_array_int_context_ptr966 , (&rc_array_int_context_obj967 ), sizeof(rc_array_int_context_obj967));
                ((cell_rc_array_int_context){ rc_array_int_context_ptr966 });
              }), 0, tmp_len942 });
          });
          // ----------
          append_vector_int ((&v ), items , STEP );
          sum  += ((int64_t)len_vector_int ((&v ))) ;
        });
    }
    { /* let992 */
      long long elapsed  = (ms_now () -  t0  );
      // ----------
      printf ("  (append checksum: %lld)\n", sum );
      return elapsed ;
    }
  }
}
void __ciciliL_997 (int ** items ) {
  free (((void *)(*items )));
}
int main () {
  printf ("Cicili lib/std vector -- %d operations each\n\n", N );
  { /* let996 */
    int * items  __attribute__((__cleanup__(__ciciliL_997 ))) = ((int *)calloc (STEP , sizeof(int)));
    // ----------
    for (int i  = 0; (i  <  STEP  ); (++i )) {
        items [i ] = i ;
    }
    printf ("  construct (new^vector, %d x %d): %ld ms\n", (N  /  STEP  ), STEP , bench_construct (items ));
    printf ("  nth (bounds-checked) %d times: %ld ms\n", N , bench_nth ());
    printf ("  push %d elements (%d x %d epoch): %ld ms\n", N , (N  /  STEP  ), STEP , bench_push ());
    printf ("  append %d elements (%d x %d epoch): %ld ms\n", N , (N  /  STEP  ), STEP , bench_append (items ));
  }
  return 0;
}
