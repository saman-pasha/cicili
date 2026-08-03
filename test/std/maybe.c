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
      int * restrict new_arr  = calloc (cap , sizeof(int));
      // ----------
      if (arr  &&  len  )
        { /* block174 */
          memcpy (new_arr , arr , (len  *  sizeof(int) ));
        }
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
  union { /* ciciliUnion195 */
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
  union { /* ciciliUnion224 */
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
  union { /* ciciliUnion253 */
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
    { /* block279 */
      printf ("ok   %-34s %lld\n", what , got );
      return 0;
    }
  else
    { /* block282 */
      printf ("FAIL %-34s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
Maybe_size_t find_array_int (int needle , array_int * restrict array ) {
  for (size_t i  = 0; (i  <  (array -> len) ); (i ++)) {
      if ((array -> arr)[i ] ==  needle  )
        { /* block294 */
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
    { /* block306 */
      return ((Maybe_double){ .ctor = NOTHING_CTOR });
    }
  return ((Maybe_double){ .ctor = JUST_CTOR , .data.just.value = (x  /  2 )});
}
Maybe_int cl_inner () {
  return ((Maybe_int){ .ctor = NOTHING_CTOR });
}
Maybe_size_t nested () {
  { /* let312 */
    int n  = ({ /* letn317 */
      Maybe_int matchn316  = cl_inner ();
      // ----------
      ((((matchn316 . ctor) ==  JUST_CTOR  )) ? ({ /* letn322 */
          int v  = (((matchn316 . data). just). value);
          // ----------
          v ;
        }) : ({ /* progn324 */
          -7;
        }));
    });
    // ----------
    if (n  ==  -7 )
      { /* block330 */
        return ((Maybe_size_t){ .ctor = JUST_CTOR , .data.just.value = ((size_t)1)});
      }
    return ((Maybe_size_t){ .ctor = NOTHING_CTOR });
  }
}
int main () {
  { /* let336 */
    int bad  = 0;
    // ----------
    ({ /* letn341 */
      array_int arr  __attribute__((__cleanup__(free_array_int ))) = new_array_int (((const int[]){ 3, 5, 7, 9}), 4, 4);
      // ----------
      bad  += check ("just, through match", ({ /* letn347 */
            Maybe_size_t matchn346  = find_array_int (7, (&arr ));
            // ----------
            ((((matchn346 . ctor) ==  JUST_CTOR  )) ? ({ /* letn349 */
                size_t at  = (((matchn346 . data). just). value);
                // ----------
                ((long long)at );
              }) : ({ /* progn351 */
                -1;
              }));
          }), 2) ;
      bad  += check ("nothing, through match", ({ /* letn356 */
            Maybe_size_t matchn355  = find_array_int (8, (&arr ));
            // ----------
            ((((matchn355 . ctor) ==  JUST_CTOR  )) ? ({ /* letn358 */
                size_t at  = (((matchn355 . data). just). value);
                // ----------
                ((long long)at );
              }) : ({ /* progn360 */
                -1;
              }));
          }), -1) ;
      { /* let362 */
        int hits  = 0;
        // ----------
        { /* let367 */
          Maybe_size_t match366  = find_array_int (3, (&arr ));
          // ----------
          if ((match366 . ctor) ==  JUST_CTOR  ) {
              { /* let371 */
                size_t at  = (((match366 . data). just). value);
                // ----------
                { /* block373 */
                  ((void)at );
                  (++hits );
                }
              }
          }
          else if ((match366 . ctor) ==  NOTHING_CTOR  ) {
              (--hits );
          }
        }
        { /* let379 */
          Maybe_size_t match378  = find_array_int (4, (&arr ));
          // ----------
          if ((match378 . ctor) ==  JUST_CTOR  ) {
              { /* let383 */
                size_t at  = (((match378 . data). just). value);
                // ----------
                { /* block385 */
                  ((void)at );
                  (++hits );
                }
              }
          }
          else if ((match378 . ctor) ==  NOTHING_CTOR  ) {
              (--hits );
          }
        }
        bad  += check ("match statement, both arms", hits , 0) ;
      }
      bad  += check ("just 0 is present", ({ /* letn390 */
            Maybe_size_t matchn389  = zero ();
            // ----------
            ((((matchn389 . ctor) ==  JUST_CTOR  )) ? ({ /* letn392 */
                size_t v  = (((matchn389 . data). just). value);
                // ----------
                ((long long)v );
              }) : ({ /* progn394 */
                -1;
              }));
          }), 0) ;
      bad  += check ("just, maybe double", ({ /* letn398 */
            Maybe_double matchn397  = half (9.0);
            // ----------
            ((((matchn397 . ctor) ==  JUST_CTOR  )) ? ({ /* letn400 */
                double v  = (((matchn397 . data). just). value);
                // ----------
                ((long long)(v  *  100 ));
              }) : ({ /* progn402 */
                -1;
              }));
          }), 450) ;
      bad  += check ("nothing, maybe double", ({ /* letn406 */
            Maybe_double matchn405  = half (-1.0);
            // ----------
            ((((matchn405 . ctor) ==  JUST_CTOR  )) ? ({ /* letn408 */
                double v  = (((matchn405 . data). just). value);
                // ----------
                ((long long)(v  *  100 ));
              }) : ({ /* progn410 */
                -1;
              }));
          }), -1) ;
      bad  += check ("nothing inside a closure", ({ /* letn414 */
            Maybe_size_t matchn413  = nested ();
            // ----------
            ((((matchn413 . ctor) ==  JUST_CTOR  )) ? ({ /* letn416 */
                size_t v  = (((matchn413 . data). just). value);
                // ----------
                ((long long)v );
              }) : ({ /* progn418 */
                -1;
              }));
          }), 1) ;
      { /* let420 */
        Maybe_int m  = { .ctor = JUST_CTOR , .data.just.value = 42};
        // ----------
        bad  += check ("just in a let, from the slot", ({ /* letn426 */
              Maybe_int matchn425  = m ;
              // ----------
              ((((matchn425 . ctor) ==  JUST_CTOR  )) ? ({ /* letn428 */
                  int v  = (((matchn425 . data). just). value);
                  // ----------
                  ((long long)v );
                }) : ({ /* progn430 */
                  -1;
                }));
            }), 42) ;
      }
      bad  += check ("back-end just still works", ({ /* letn435 */
            Maybe_int matchn434  = just_int (5);
            // ----------
            ((((matchn434 . ctor) ==  JUST_CTOR  )) ? ({ /* letn437 */
                int v  = (((matchn434 . data). just). value);
                // ----------
                ((long long)v );
              }) : ({ /* progn439 */
                -1;
              }));
          }), 5) ;
      bad  += check ("back-end nothing still works", ({ /* letn444 */
            Maybe_int matchn443  = nothing_int ();
            // ----------
            ((((matchn443 . ctor) ==  JUST_CTOR  )) ? ({ /* letn446 */
                int v  = (((matchn443 . data). just). value);
                // ----------
                ((long long)v );
              }) : ({ /* progn448 */
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
