#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
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
  union { /* ciciliUnion109 */
    JustT_ref_int just ;
    NothingT nothing ;
  } data ;
} Maybe_ref_int;
typedef std_maybe Maybe_ref_int_type_t ;
Maybe_ref_int just_ref_int (int * restrict value );
Maybe_ref_int nothing_ref_int ();
#endif /* __MAYBE__ref_int__H_ */ 
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
Maybe_ref_int nth_array_int (size_t index , array_int * restrict array );
#ifndef __MAYBE_IMPL__ref_int__H_
#define __MAYBE_IMPL__ref_int__H_
Maybe_ref_int just_ref_int (int * restrict value ) {
  return ((Maybe_ref_int){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_ref_int nothing_ref_int () {
  return ((Maybe_ref_int){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__ref_int__H_ */ 
__attribute__((weak)) void free_array_int (array_int * restrict array ) {
  free ((array -> arr));
}
__attribute__((weak)) void free_array_int_pointer (array_int ** array ) {
  free_array_int ((*array ));
}
array_int new_array_int (const int * arr , size_t len , size_t cap ) {
  return ({ /* letn167 */
      int * restrict new_arr  = malloc ((cap  *  sizeof(int) ));
      // ----------
      if (arr  &&  len  )
        { /* block173 */
          memcpy (new_arr , arr , (len  *  sizeof(int) ));
          if (cap  >  len  )
            { /* block178 */
              memset ((new_arr  +  len  ), 0, ((cap  -  len  ) *  sizeof(int) ));
            }
        }
      else
        memset (new_arr , 0, (cap  *  sizeof(int) ));
      ((array_int){ new_arr , cap });
    });
}
size_t len_array_int (array_int * restrict array ) {
  return (array -> len);
}
Maybe_ref_int nth_array_int (size_t index , array_int * restrict array ) {
  if (index  <  (array -> len) )
    return ((Maybe_ref_int){ .ctor = JUST_CTOR , .data.just.value = ((array -> arr) +  index  )});
  else
    return ((Maybe_ref_int){ .ctor = NOTHING_CTOR });
}
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
#ifndef __MAYBE__int__H_
#define __MAYBE__int__H_
typedef struct JustT_int {
  int value ;
} JustT_int;
typedef struct Maybe_int {
  MAYBE_CTOR ctor ;
  union { /* ciciliUnion200 */
    JustT_int just ;
    NothingT nothing ;
  } data ;
} Maybe_int;
typedef std_maybe Maybe_int_type_t ;
Maybe_int just_int (int value );
Maybe_int nothing_int ();
#endif /* __MAYBE__int__H_ */ 
#ifndef __MAYBE_IMPL__int__H_
#define __MAYBE_IMPL__int__H_
Maybe_int just_int (int value ) {
  return ((Maybe_int){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_int nothing_int () {
  return ((Maybe_int){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__int__H_ */ 
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
#ifndef __MAYBE__size_t__H_
#define __MAYBE__size_t__H_
typedef struct JustT_size_t {
  size_t value ;
} JustT_size_t;
typedef struct Maybe_size_t {
  MAYBE_CTOR ctor ;
  union { /* ciciliUnion229 */
    JustT_size_t just ;
    NothingT nothing ;
  } data ;
} Maybe_size_t;
typedef std_maybe Maybe_size_t_type_t ;
Maybe_size_t just_size_t (size_t value );
Maybe_size_t nothing_size_t ();
#endif /* __MAYBE__size_t__H_ */ 
#ifndef __MAYBE_IMPL__size_t__H_
#define __MAYBE_IMPL__size_t__H_
Maybe_size_t just_size_t (size_t value ) {
  return ((Maybe_size_t){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_size_t nothing_size_t () {
  return ((Maybe_size_t){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__size_t__H_ */ 
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
#ifndef __MAYBE__double__H_
#define __MAYBE__double__H_
typedef struct JustT_double {
  double value ;
} JustT_double;
typedef struct Maybe_double {
  MAYBE_CTOR ctor ;
  union { /* ciciliUnion258 */
    JustT_double just ;
    NothingT nothing ;
  } data ;
} Maybe_double;
typedef std_maybe Maybe_double_type_t ;
Maybe_double just_double (double value );
Maybe_double nothing_double ();
#endif /* __MAYBE__double__H_ */ 
#ifndef __MAYBE_IMPL__double__H_
#define __MAYBE_IMPL__double__H_
Maybe_double just_double (double value ) {
  return ((Maybe_double){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_double nothing_double () {
  return ((Maybe_double){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__double__H_ */ 
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block284 */
      printf ("ok   %-34s %lld\n", what , got );
      return 0;
    }
  else
    { /* block287 */
      printf ("FAIL %-34s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
Maybe_size_t find_array_int (int needle , array_int * restrict array ) {
  for (size_t i  = 0; (i  <  (array -> len) ); (i ++)) {
      if ((array -> arr)[i ] ==  needle  )
        { /* block299 */
          return ((Maybe_size_t){ .ctor = JUST_CTOR , .data.just.value = i });
        }
  }
  return ((Maybe_size_t){ .ctor = NOTHING_CTOR });
}
Maybe_size_t zero () {
  return ((Maybe_size_t){ .ctor = JUST_CTOR , .data.just.value = 0});
}
Maybe_double half (double x ) {
  if (x  <  0 )
    { /* block311 */
      return ((Maybe_double){ .ctor = NOTHING_CTOR });
    }
  return ((Maybe_double){ .ctor = JUST_CTOR , .data.just.value = (x  /  2 )});
}
Maybe_int cl_inner () {
  return ((Maybe_int){ .ctor = NOTHING_CTOR });
}
Maybe_size_t nested () {
  { /* let317 */
    int n  = ({ /* letn322 */
      Maybe_int matchn321  = cl_inner ();
      // ----------
      ((((matchn321 . ctor) ==  JUST_CTOR  )) ? ({ /* letn327 */
          int v  = (((matchn321 . data). just). value);
          // ----------
          v ;
        }) : ({ /* progn329 */
          -7;
        }));
    });
    // ----------
    if (n  ==  -7 )
      { /* block335 */
        return ((Maybe_size_t){ .ctor = JUST_CTOR , .data.just.value = ((size_t)1)});
      }
    return ((Maybe_size_t){ .ctor = NOTHING_CTOR });
  }
}
int main () {
  { /* let341 */
    int bad  = 0;
    // ----------
    ({ /* letn346 */
      array_int arr  __attribute__((__cleanup__(free_array_int ))) = new_array_int (((const int[]){ 3, 5, 7, 9}), 4, 4);
      // ----------
      bad  += check ("just, through match", ({ /* letn352 */
            Maybe_size_t matchn351  = find_array_int (7, (&arr ));
            // ----------
            ((((matchn351 . ctor) ==  JUST_CTOR  )) ? ({ /* letn354 */
                size_t at  = (((matchn351 . data). just). value);
                // ----------
                ((long long)at );
              }) : ({ /* progn356 */
                -1;
              }));
          }), 2) ;
      bad  += check ("nothing, through match", ({ /* letn361 */
            Maybe_size_t matchn360  = find_array_int (8, (&arr ));
            // ----------
            ((((matchn360 . ctor) ==  JUST_CTOR  )) ? ({ /* letn363 */
                size_t at  = (((matchn360 . data). just). value);
                // ----------
                ((long long)at );
              }) : ({ /* progn365 */
                -1;
              }));
          }), -1) ;
      { /* let367 */
        int hits  = 0;
        // ----------
        { /* let372 */
          Maybe_size_t match371  = find_array_int (3, (&arr ));
          // ----------
          if ((match371 . ctor) ==  JUST_CTOR  ) {
              { /* let376 */
                size_t at  = (((match371 . data). just). value);
                // ----------
                { /* block378 */
                  ((void)at );
                  (++hits );
                }
              }
          }
          else if ((match371 . ctor) ==  NOTHING_CTOR  ) {
              (--hits );
          }
        }
        { /* let384 */
          Maybe_size_t match383  = find_array_int (4, (&arr ));
          // ----------
          if ((match383 . ctor) ==  JUST_CTOR  ) {
              { /* let388 */
                size_t at  = (((match383 . data). just). value);
                // ----------
                { /* block390 */
                  ((void)at );
                  (++hits );
                }
              }
          }
          else if ((match383 . ctor) ==  NOTHING_CTOR  ) {
              (--hits );
          }
        }
        bad  += check ("match statement, both arms", hits , 0) ;
      }
      bad  += check ("just 0 is present", ({ /* letn395 */
            Maybe_size_t matchn394  = zero ();
            // ----------
            ((((matchn394 . ctor) ==  JUST_CTOR  )) ? ({ /* letn397 */
                size_t v  = (((matchn394 . data). just). value);
                // ----------
                ((long long)v );
              }) : ({ /* progn399 */
                -1;
              }));
          }), 0) ;
      bad  += check ("just, maybe double", ({ /* letn403 */
            Maybe_double matchn402  = half (9.0);
            // ----------
            ((((matchn402 . ctor) ==  JUST_CTOR  )) ? ({ /* letn405 */
                double v  = (((matchn402 . data). just). value);
                // ----------
                ((long long)(v  *  100 ));
              }) : ({ /* progn407 */
                -1;
              }));
          }), 450) ;
      bad  += check ("nothing, maybe double", ({ /* letn411 */
            Maybe_double matchn410  = half (-1.0);
            // ----------
            ((((matchn410 . ctor) ==  JUST_CTOR  )) ? ({ /* letn413 */
                double v  = (((matchn410 . data). just). value);
                // ----------
                ((long long)(v  *  100 ));
              }) : ({ /* progn415 */
                -1;
              }));
          }), -1) ;
      bad  += check ("nothing inside a closure", ({ /* letn419 */
            Maybe_size_t matchn418  = nested ();
            // ----------
            ((((matchn418 . ctor) ==  JUST_CTOR  )) ? ({ /* letn421 */
                size_t v  = (((matchn418 . data). just). value);
                // ----------
                ((long long)v );
              }) : ({ /* progn423 */
                -1;
              }));
          }), 1) ;
      { /* let425 */
        Maybe_int m  = { .ctor = JUST_CTOR , .data.just.value = 42};
        // ----------
        bad  += check ("just in a let, from the slot", ({ /* letn431 */
              Maybe_int matchn430  = m ;
              // ----------
              ((((matchn430 . ctor) ==  JUST_CTOR  )) ? ({ /* letn433 */
                  int v  = (((matchn430 . data). just). value);
                  // ----------
                  ((long long)v );
                }) : ({ /* progn435 */
                  -1;
                }));
            }), 42) ;
      }
      bad  += check ("back-end just still works", ({ /* letn440 */
            Maybe_int matchn439  = just_int (5);
            // ----------
            ((((matchn439 . ctor) ==  JUST_CTOR  )) ? ({ /* letn442 */
                int v  = (((matchn439 . data). just). value);
                // ----------
                ((long long)v );
              }) : ({ /* progn444 */
                -1;
              }));
          }), 5) ;
      bad  += check ("back-end nothing still works", ({ /* letn449 */
            Maybe_int matchn448  = nothing_int ();
            // ----------
            ((((matchn448 . ctor) ==  JUST_CTOR  )) ? ({ /* letn451 */
                int v  = (((matchn448 . data). just). value);
                // ----------
                ((long long)v );
              }) : ({ /* progn453 */
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
