#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
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
  return ({ /* letn163 */
      int * new_arr  = calloc (cap , sizeof(int));
      // ----------
      if (arr  &&  len  )
        { /* block170 */
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
typedef struct maybe_size_t {
  bool present ;
  size_t value ;
} maybe_size_t;
typedef size_t maybe_size_t_interior_t ;
#ifndef __MAYBE_TYPE_H_
#define __MAYBE_TYPE_H_
typedef struct std_maybe std_maybe ;
#endif /* __MAYBE_TYPE_H_ */ 
typedef std_maybe maybe_size_t_type_t ;
maybe_size_t just_maybe_size_t (size_t value );
maybe_size_t nothing_maybe_size_t ();
__attribute__((weak)) maybe_size_t just_maybe_size_t (size_t value ) {
  return ((maybe_size_t){ true , value });
}
__attribute__((weak)) maybe_size_t nothing_maybe_size_t () {
  return ((maybe_size_t){ false , ((size_t){ 0})});
}
typedef struct maybe_double {
  bool present ;
  double value ;
} maybe_double;
typedef double maybe_double_interior_t ;
#ifndef __MAYBE_TYPE_H_
#define __MAYBE_TYPE_H_
typedef struct std_maybe std_maybe ;
#endif /* __MAYBE_TYPE_H_ */ 
typedef std_maybe maybe_double_type_t ;
maybe_double just_maybe_double (double value );
maybe_double nothing_maybe_double ();
__attribute__((weak)) maybe_double just_maybe_double (double value ) {
  return ((maybe_double){ true , value });
}
__attribute__((weak)) maybe_double nothing_maybe_double () {
  return ((maybe_double){ false , ((double){ 0})});
}
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block233 */
      printf ("ok   %-34s %lld\n", what , got );
      return 0;
    }
  else
    { /* block236 */
      printf ("FAIL %-34s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
maybe_size_t find_array_int (int needle , array_int * restrict array ) {
  for (size_t i  = 0; (i  <  (array -> len) ); (i ++)) {
      if ((array -> arr)[i ] ==  needle  )
        { /* block248 */
          return ((maybe_size_t){ true , i });
        }
  }
  return ((maybe_size_t){ false , ((maybe_size_t_interior_t){ 0})});
}
maybe_size_t zero () {
  return ((maybe_size_t){ true , 0});
}
maybe_double half (double x ) {
  if (x  <  0 )
    { /* block261 */
      return ((maybe_double){ false , ((maybe_double_interior_t){ 0})});
    }
  return ((maybe_double){ true , (x  /  2 )});
}
maybe_int cl_inner () {
  return ((maybe_int){ false , ((maybe_int_interior_t){ 0})});
}
maybe_size_t nested () {
  { /* let268 */
    int n  = ({ /* letn273 */
      maybe_int matchn272  = cl_inner ();
      // ----------
      (((matchn272 . present)) ? ({ /* letn279 */
          int v  = (matchn272 . value);
          // ----------
          v ;
        }) : ({ /* progn281 */
          -7;
        }));
    });
    // ----------
    if (n  ==  -7 )
      { /* block287 */
        return ((maybe_size_t){ true , ((size_t)1)});
      }
    return ((maybe_size_t){ false , ((maybe_size_t_interior_t){ 0})});
  }
}
int main () {
  { /* let294 */
    int bad  = 0;
    // ----------
    ({ /* letn299 */
      array_int arr  __attribute__((__cleanup__(free_array_int ))) = new_array_int (((const int[]){ 3, 5, 7, 9}), 4, 4);
      // ----------
      bad  += check ("just, through match", ({ /* letn305 */
            maybe_size_t matchn304  = find_array_int (7, (&arr ));
            // ----------
            (((matchn304 . present)) ? ({ /* letn307 */
                size_t at  = (matchn304 . value);
                // ----------
                ((long long)at );
              }) : ({ /* progn309 */
                -1;
              }));
          }), 2) ;
      bad  += check ("nothing, through match", ({ /* letn314 */
            maybe_size_t matchn313  = find_array_int (8, (&arr ));
            // ----------
            (((matchn313 . present)) ? ({ /* letn316 */
                size_t at  = (matchn313 . value);
                // ----------
                ((long long)at );
              }) : ({ /* progn318 */
                -1;
              }));
          }), -1) ;
      { /* let320 */
        int hits  = 0;
        // ----------
        { /* let325 */
          maybe_size_t match324  = find_array_int (3, (&arr ));
          // ----------
          if (match324 . present) {
              { /* let329 */
                size_t at  = (match324 . value);
                // ----------
                { /* block331 */
                  ((void)at );
                  (++hits );
                }
              }
          }
          else if (!(match324 . present)) {
              (--hits );
          }
        }
        { /* let337 */
          maybe_size_t match336  = find_array_int (4, (&arr ));
          // ----------
          if (match336 . present) {
              { /* let341 */
                size_t at  = (match336 . value);
                // ----------
                { /* block343 */
                  ((void)at );
                  (++hits );
                }
              }
          }
          else if (!(match336 . present)) {
              (--hits );
          }
        }
        bad  += check ("match statement, both arms", hits , 0) ;
      }
      bad  += check ("just 0 is present", ({ /* letn348 */
            maybe_size_t matchn347  = zero ();
            // ----------
            (((matchn347 . present)) ? ({ /* letn350 */
                size_t v  = (matchn347 . value);
                // ----------
                ((long long)v );
              }) : ({ /* progn352 */
                -1;
              }));
          }), 0) ;
      bad  += check ("just, maybe double", ({ /* letn356 */
            maybe_double matchn355  = half (9.0);
            // ----------
            (((matchn355 . present)) ? ({ /* letn358 */
                double v  = (matchn355 . value);
                // ----------
                ((long long)(v  *  100 ));
              }) : ({ /* progn360 */
                -1;
              }));
          }), 450) ;
      bad  += check ("nothing, maybe double", ({ /* letn364 */
            maybe_double matchn363  = half (-1.0);
            // ----------
            (((matchn363 . present)) ? ({ /* letn366 */
                double v  = (matchn363 . value);
                // ----------
                ((long long)(v  *  100 ));
              }) : ({ /* progn368 */
                -1;
              }));
          }), -1) ;
      bad  += check ("nothing inside a closure", ({ /* letn372 */
            maybe_size_t matchn371  = nested ();
            // ----------
            (((matchn371 . present)) ? ({ /* letn374 */
                size_t v  = (matchn371 . value);
                // ----------
                ((long long)v );
              }) : ({ /* progn376 */
                -1;
              }));
          }), 1) ;
      { /* let378 */
        maybe_int m  = ((maybe_int){ true , 42});
        // ----------
        bad  += check ("just in a let, from the value", ({ /* letn385 */
              maybe_int matchn384  = m ;
              // ----------
              (((matchn384 . present)) ? ({ /* letn387 */
                  int v  = (matchn384 . value);
                  // ----------
                  ((long long)v );
                }) : ({ /* progn389 */
                  -1;
                }));
            }), 42) ;
      }
      bad  += check ("back-end just still works", ({ /* letn394 */
            maybe_int matchn393  = just_maybe_int (5);
            // ----------
            (((matchn393 . present)) ? ({ /* letn396 */
                int v  = (matchn393 . value);
                // ----------
                ((long long)v );
              }) : ({ /* progn398 */
                -1;
              }));
          }), 5) ;
      bad  += check ("back-end nothing still works", ({ /* letn403 */
            maybe_int matchn402  = nothing_maybe_int ();
            // ----------
            (((matchn402 . present)) ? ({ /* letn405 */
                int v  = (matchn402 . value);
                // ----------
                ((long long)v );
              }) : ({ /* progn407 */
                -1;
              }));
          }), -1) ;
    });
    if (bad  ==  0 )
      printf ("maybe: all ok\n");
    else
      printf ("maybe: %d FAILED\n", bad );
    return bad ;
  }
}
