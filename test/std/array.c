#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>
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
  return ({ /* letn165 */
      int * new_arr  = calloc (cap , sizeof(int));
      // ----------
      if (arr  &&  len  )
        { /* block172 */
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
long long ms_now () {
  { /* let189 */
    struct timespec ts ;
    // ----------
    timespec_get ((&ts ), TIME_UTC );
    return ((((long long)(ts . tv_sec)) *  1000 ) +  ((ts . tv_nsec) /  1000000 ) );
  }
  return 0;
}
long bench_a_nth () {
  ({ /* letn195 */
    array_int v  __attribute__((__cleanup__(free_array_int ))) = new_array_int (((const int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), 50, 50);
    // ----------
    { /* let198 */
      int64_t sum  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          { /* let208 */
            maybe_int match207  = nth_array_int ((i  %  50 ), (&v ));
            // ----------
            if (match207 . present) {
                { /* let214 */
                  int val  = (match207 . value);
                  // ----------
                  sum  += val  ;
                }
            }
          }
      }
      { /* let216 */
        long long elapsed  = (ms_now () -  t0  );
        // ----------
        printf ("  (nth checksum: %lld)\n", sum );
        return elapsed ;
      }
    }
  });
}
void a_func_move_array (array_int arr ) {
  array_int * __moved_arr __attribute__((__cleanup__( free_array_int_pointer))) = (& arr) ;
  fprintf (stdout , "length of moved array %zu\n", (arr . len));
}
void a_func_referenced_array (array_int * restrict referred_arr ) {
  fprintf (stdout , "length of referenced array %zu\n", ((*referred_arr ). len));
}
void __ciciliL_231 (int ** iarr ) {
  free (((void *)(*iarr )));
}
int64_t letn_array_int_G291 (array_int * restrict array , int64_t * sum ) {
  return ({ /* letn294 */
      array_int_item_t * arr  = (array -> arr);
      size_t len  = (array -> len);
      // ----------
      ((void)len );
      for (int i  = 0; (i  <  N  ); (++i )) {
          (*sum ) += arr [(i  %  5 )] ;
      }
      (*sum );
    });
}
void take_array_int_G301 (array_int array , int64_t * sum ) {
  array_int * __moved_array __attribute__((__cleanup__( free_array_int_pointer))) = (& array) ;
  { /* let305 */
    array_int_item_t * arr  = (array . arr);
    size_t len  = (array . len);
    // ----------
    ((void)len );
    for (int i  = 0; (i  <  N  ); (++i )) {
        (*sum ) += arr [(i  %  5 )] ;
    }
    printf ("take sum2: %lld\n", (*sum ));
  }
}
int main () {
  printf ("sizeof %s: %zu\n", "array_int", sizeof(array_int ));
  { /* let230 */
    int * iarr  __attribute__((__cleanup__(__ciciliL_231 ))) = ((int *)calloc (2, sizeof(int)));
    // ----------
    ({ /* letn243 */
      array_int arr01  __attribute__((__cleanup__(free_array_int ))) = new_array_int (((const int[]){ 1, 2, 3, 4, 5}), 5, 5);
      array_int arr02  __attribute__((__cleanup__(free_array_int ))) = new_array_int (iarr , 2, 2);
      // ----------
      printf ("arr02 len: %zu\n", len_array_int ((&arr02 )));
      a_func_referenced_array ((&arr02 ));
      a_func_referenced_array ((&arr02 ));
      a_func_move_array (((array_int   )({ /* letnmove254 */
          array_int moved_var253  = arr02 ;
          // ----------
          memset ((&arr02 ), 0, sizeof(arr02 ));
          moved_var253 ;
        })));
      printf ("print int array using Unsafe nth: ");
      for (size_t i  = 0; (i  <  (arr01 . len) ); (++i )) {
          printf ("%d", (arr01 . arr)[i ]);
      }
      putchar ('\n');
      printf ("print int array using Safe nth: ");
      for (size_t i  = 0; (i  <  7 ); (++i )) {
          { /* let268 */
            maybe_int match267  = nth_array_int (i , (&arr01 ));
            // ----------
            if (match267 . present) {
                { /* let272 */
                  int val  = (match267 . value);
                  // ----------
                  printf ("%d", val );
                }
            }
            else if (!(match267 . present)) {
                printf ("-");
            }
          }
      }
      putchar ('\n');
      printf ("the same run through matchn:    ");
      for (size_t i  = 0; (i  <  7 ); (++i )) {
          printf ("%d", ({ /* letn282 */
              maybe_int matchn281  = nth_array_int (i , (&arr01 ));
              // ----------
              (((matchn281 . present)) ? ({ /* letn284 */
                  int val  = (matchn281 . value);
                  // ----------
                  val ;
                }) : ({ /* progn286 */
                  0;
                }));
            }));
      }
      putchar ('\n');
      { /* let288 */
        int64_t sum  = 0;
        // ----------
        printf ("letn sum1: %lld\n", letn_array_int_G291 ((&arr01 ), (&sum )));
        take_array_int_G301 (((array_int   )({ /* letnmove312 */
            array_int moved_var311  = arr01 ;
            // ----------
            memset ((&arr01 ), 0, sizeof(arr01 ));
            moved_var311 ;
          })), (&sum ));
      }
    });
  }
  printf ("  nth (bounds-checked) %d times: %ld ms\n", N , bench_a_nth ());
}
