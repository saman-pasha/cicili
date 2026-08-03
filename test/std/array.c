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
  union { /* ciciliUnion111 */
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
  return ({ /* letn169 */
      int * restrict new_arr  = calloc (cap , sizeof(int));
      // ----------
      if (arr  &&  len  )
        { /* block176 */
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
#ifndef __MAYBE__ref_char__H_
#define __MAYBE__ref_char__H_
typedef struct JustT_ref_char {
  char * restrict value ;
} JustT_ref_char;
typedef struct Maybe_ref_char {
  MAYBE_CTOR ctor ;
  union { /* ciciliUnion198 */
    JustT_ref_char just ;
    NothingT nothing ;
  } data ;
} Maybe_ref_char;
typedef std_maybe Maybe_ref_char_type_t ;
Maybe_ref_char just_ref_char (char * restrict value );
Maybe_ref_char nothing_ref_char ();
#endif /* __MAYBE__ref_char__H_ */ 
typedef struct array_char {
  char * const arr ;
  size_t len ;
} array_char;
typedef char array_char_item_t ;
#ifndef __ARRAY_TYPE_H_
#define __ARRAY_TYPE_H_
typedef struct std_array std_array ;
#endif /* __ARRAY_TYPE_H_ */ 
typedef std_array array_char_type_t ;
void free_array_char (array_char * restrict array );
void free_array_char_pointer (array_char ** array );
array_char new_array_char (const char * arr , size_t len , size_t cap );
size_t len_array_char (array_char * restrict array );
Maybe_ref_char nth_array_char (size_t index , array_char * restrict array );
#ifndef __MAYBE_IMPL__ref_char__H_
#define __MAYBE_IMPL__ref_char__H_
Maybe_ref_char just_ref_char (char * restrict value ) {
  return ((Maybe_ref_char){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_ref_char nothing_ref_char () {
  return ((Maybe_ref_char){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__ref_char__H_ */ 
__attribute__((weak)) void free_array_char (array_char * restrict array ) {
  free ((array -> arr));
}
__attribute__((weak)) void free_array_char_pointer (array_char ** array ) {
  free_array_char ((*array ));
}
array_char new_array_char (const char * arr , size_t len , size_t cap ) {
  return ({ /* letn251 */
      char * restrict new_arr  = calloc (cap , sizeof(char));
      // ----------
      if (arr  &&  len  )
        { /* block258 */
          memcpy (new_arr , arr , (len  *  sizeof(char) ));
        }
      ((array_char){ new_arr , cap });
    });
}
size_t len_array_char (array_char * restrict array ) {
  return (array -> len);
}
Maybe_ref_char nth_array_char (size_t index , array_char * restrict array ) {
  if (index  <  (array -> len) )
    return ((Maybe_ref_char){ .ctor = JUST_CTOR , .data.just.value = ((array -> arr) +  index  )});
  else
    return ((Maybe_ref_char){ .ctor = NOTHING_CTOR });
}
long long ms_now () {
  { /* let272 */
    struct timespec ts ;
    // ----------
    timespec_get ((&ts ), TIME_UTC );
    return ((((long long)(ts . tv_sec)) *  1000 ) +  ((ts . tv_nsec) /  1000000 ) );
  }
  return 0;
}
long bench_a_nth () {
  ({ /* letn278 */
    array_int v  __attribute__((__cleanup__(free_array_int ))) = new_array_int (((const int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), 50, 50);
    // ----------
    { /* let281 */
      int64_t sum  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          { /* let291 */
            Maybe_ref_int match290  = nth_array_int ((i  %  50 ), (&v ));
            // ----------
            if ((match290 . ctor) ==  JUST_CTOR  ) {
                { /* let297 */
                  int * restrict val  = (((match290 . data). just). value);
                  // ----------
                  sum  += (*val ) ;
                }
            }
          }
      }
      { /* let299 */
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
void __ciciliL_314 (int ** iarr ) {
  free (((void *)(*iarr )));
}
int64_t letn_array_int_G407 (array_int * restrict array , int64_t * sum ) {
  return ({ /* letn410 */
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
void take_array_int_G417 (array_int array , int64_t * sum ) {
  array_int * __moved_array __attribute__((__cleanup__( free_array_int_pointer))) = (& array) ;
  { /* let421 */
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
  { /* let313 */
    int * iarr  __attribute__((__cleanup__(__ciciliL_314 ))) = ((int *)calloc (2, sizeof(int)));
    // ----------
    ({ /* letn326 */
      array_int arr01  __attribute__((__cleanup__(free_array_int ))) = new_array_int (((const int[]){ 1, 2, 3, 4, 5}), 5, 5);
      array_int arr02  __attribute__((__cleanup__(free_array_int ))) = new_array_int (iarr , 2, 2);
      // ----------
      printf ("arr02 len: %zu\n", len_array_int ((&arr02 )));
      a_func_referenced_array ((&arr02 ));
      a_func_referenced_array ((&arr02 ));
      a_func_move_array (((array_int   )({ /* letnmove337 */
          array_int moved_var336  = arr02 ;
          // ----------
          memset ((&arr02 ), 0, sizeof(arr02 ));
          moved_var336 ;
        })));
      printf ("print int array using Unsafe nth: ");
      for (size_t i  = 0; (i  <  (arr01 . len) ); (++i )) {
          printf ("%d", (arr01 . arr)[i ]);
      }
      putchar ('\n');
      printf ("print int array using Safe nth: ");
      for (size_t i  = 0; (i  <  7 ); (++i )) {
          { /* let351 */
            Maybe_ref_int match350  = nth_array_int (i , (&arr01 ));
            // ----------
            if ((match350 . ctor) ==  JUST_CTOR  ) {
                { /* let355 */
                  int * restrict val  = (((match350 . data). just). value);
                  // ----------
                  printf ("%d", (*val ));
                }
            }
            else if ((match350 . ctor) ==  NOTHING_CTOR  ) {
                printf ("-");
            }
          }
      }
      putchar ('\n');
      ({ /* letn361 */
        array_char str  __attribute__((__cleanup__(free_array_char ))) = new_array_char (((const char *)"cicili"), 6, 6);
        // ----------
        printf ("print char array using Safe nth: ");
        for (size_t i  = 0; (i  <  8 ); (++i )) {
            { /* let371 */
              Maybe_ref_char match370  = nth_array_char (i , (&str ));
              // ----------
              if ((match370 . ctor) ==  JUST_CTOR  ) {
                  { /* let375 */
                    char * restrict c  = (((match370 . data). just). value);
                    // ----------
                    putchar ((*c ));
                  }
              }
              else if ((match370 . ctor) ==  NOTHING_CTOR  ) {
                  putchar ('-');
              }
            }
        }
        putchar ('\n');
        printf ("the same string through matchn: ");
        for (size_t i  = 0; (i  <  8 ); (++i )) {
            putchar (({ /* letn385 */
                Maybe_ref_char matchn384  = nth_array_char (i , (&str ));
                // ----------
                ((((matchn384 . ctor) ==  JUST_CTOR  )) ? ({ /* letn387 */
                    char * restrict c  = (((matchn384 . data). just). value);
                    // ----------
                    (*c );
                  }) : ({ /* progn389 */
                    '.';
                  }));
              }));
        }
        putchar ('\n');
      });
      printf ("the same run through matchn:    ");
      for (size_t i  = 0; (i  <  7 ); (++i )) {
          printf ("%d", ({ /* letn398 */
              Maybe_ref_int matchn397  = nth_array_int (i , (&arr01 ));
              // ----------
              ((((matchn397 . ctor) ==  JUST_CTOR  )) ? ({ /* letn400 */
                  int * restrict val  = (((matchn397 . data). just). value);
                  // ----------
                  (*val );
                }) : ({ /* progn402 */
                  0;
                }));
            }));
      }
      putchar ('\n');
      { /* let404 */
        int64_t sum  = 0;
        // ----------
        printf ("letn sum1: %lld\n", letn_array_int_G407 ((&arr01 ), (&sum )));
        take_array_int_G417 (((array_int   )({ /* letnmove428 */
            array_int moved_var427  = arr01 ;
            // ----------
            memset ((&arr01 ), 0, sizeof(arr01 ));
            moved_var427 ;
          })), (&sum ));
      }
    });
  }
  printf ("  nth (bounds-checked) %d times: %ld ms\n", N , bench_a_nth ());
}
