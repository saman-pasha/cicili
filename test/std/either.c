#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <errno.h>
typedef enum ParseErr {
  PE_EMPTY = 1,
  PE_ODD
} ParseErr;
#ifndef __EITHER_H_
#define __EITHER_H_
typedef enum EITHER_CTOR {
  LEFT_CTOR = 0,
  RIGHT_CTOR
} EITHER_CTOR;
typedef struct std_either std_either ;
#endif /* __EITHER_H_ */ 
#ifndef __EITHER_LEFT__int__H_
#define __EITHER_LEFT__int__H_
typedef struct LeftT_int {
  int error ;
} LeftT_int;
#endif /* __EITHER_LEFT__int__H_ */ 
#ifndef __EITHER_RIGHT__long__H_
#define __EITHER_RIGHT__long__H_
typedef struct RightT_long {
  long value ;
} RightT_long;
#endif /* __EITHER_RIGHT__long__H_ */ 
#ifndef __EITHER__int_long__H_
#define __EITHER__int_long__H_
typedef struct Either_int_long {
  EITHER_CTOR ctor ;
  union { /* ciciliUnion111 */
    RightT_long right ;
    LeftT_int left ;
  } data ;
} Either_int_long;
typedef long Either_int_long_right_t ;
typedef int Either_int_long_left_t ;
typedef std_either Either_int_long_type_t ;
Either_int_long right_int_long (long value );
Either_int_long left_int_long (int error );
#endif /* __EITHER__int_long__H_ */ 
#ifndef __EITHER_IMPL__int_long__H_
#define __EITHER_IMPL__int_long__H_
__attribute__((weak)) Either_int_long right_int_long (long value ) {
  return ((Either_int_long){ .ctor = RIGHT_CTOR , .data.right.value = value });
}
__attribute__((weak)) Either_int_long left_int_long (int error ) {
  return ((Either_int_long){ .ctor = LEFT_CTOR , .data.left.error = error });
}
#endif /* __EITHER_IMPL__int_long__H_ */ 
#ifndef __EITHER_H_
#define __EITHER_H_
typedef enum EITHER_CTOR {
  LEFT_CTOR = 0,
  RIGHT_CTOR
} EITHER_CTOR;
typedef struct std_either std_either ;
#endif /* __EITHER_H_ */ 
#ifndef __EITHER_LEFT__ParseErr__H_
#define __EITHER_LEFT__ParseErr__H_
typedef struct LeftT_ParseErr {
  ParseErr error ;
} LeftT_ParseErr;
#endif /* __EITHER_LEFT__ParseErr__H_ */ 
#ifndef __EITHER_RIGHT__double__H_
#define __EITHER_RIGHT__double__H_
typedef struct RightT_double {
  double value ;
} RightT_double;
#endif /* __EITHER_RIGHT__double__H_ */ 
#ifndef __EITHER__ParseErr_double__H_
#define __EITHER__ParseErr_double__H_
typedef struct Either_ParseErr_double {
  EITHER_CTOR ctor ;
  union { /* ciciliUnion146 */
    RightT_double right ;
    LeftT_ParseErr left ;
  } data ;
} Either_ParseErr_double;
typedef double Either_ParseErr_double_right_t ;
typedef ParseErr Either_ParseErr_double_left_t ;
typedef std_either Either_ParseErr_double_type_t ;
Either_ParseErr_double right_ParseErr_double (double value );
Either_ParseErr_double left_ParseErr_double (ParseErr error );
#endif /* __EITHER__ParseErr_double__H_ */ 
#ifndef __EITHER_IMPL__ParseErr_double__H_
#define __EITHER_IMPL__ParseErr_double__H_
__attribute__((weak)) Either_ParseErr_double right_ParseErr_double (double value ) {
  return ((Either_ParseErr_double){ .ctor = RIGHT_CTOR , .data.right.value = value });
}
__attribute__((weak)) Either_ParseErr_double left_ParseErr_double (ParseErr error ) {
  return ((Either_ParseErr_double){ .ctor = LEFT_CTOR , .data.left.error = error });
}
#endif /* __EITHER_IMPL__ParseErr_double__H_ */ 
#ifndef __EITHER_H_
#define __EITHER_H_
typedef enum EITHER_CTOR {
  LEFT_CTOR = 0,
  RIGHT_CTOR
} EITHER_CTOR;
typedef struct std_either std_either ;
#endif /* __EITHER_H_ */ 
#ifndef __EITHER_LEFT__int__H_
#define __EITHER_LEFT__int__H_
typedef struct LeftT_int {
  int error ;
} LeftT_int;
#endif /* __EITHER_LEFT__int__H_ */ 
#ifndef __EITHER_RIGHT__ref_long__H_
#define __EITHER_RIGHT__ref_long__H_
typedef struct RightT_ref_long {
  long * restrict value ;
} RightT_ref_long;
#endif /* __EITHER_RIGHT__ref_long__H_ */ 
#ifndef __EITHER__int_ref_long__H_
#define __EITHER__int_ref_long__H_
typedef struct Either_int_ref_long {
  EITHER_CTOR ctor ;
  union { /* ciciliUnion181 */
    RightT_ref_long right ;
    LeftT_int left ;
  } data ;
} Either_int_ref_long;
typedef long * restrict Either_int_ref_long_right_t ;
typedef int Either_int_ref_long_left_t ;
typedef std_either Either_int_ref_long_type_t ;
Either_int_ref_long right_int_ref_long (long * restrict value );
Either_int_ref_long left_int_ref_long (int error );
#endif /* __EITHER__int_ref_long__H_ */ 
#ifndef __EITHER_IMPL__int_ref_long__H_
#define __EITHER_IMPL__int_ref_long__H_
__attribute__((weak)) Either_int_ref_long right_int_ref_long (long * restrict value ) {
  return ((Either_int_ref_long){ .ctor = RIGHT_CTOR , .data.right.value = value });
}
__attribute__((weak)) Either_int_ref_long left_int_ref_long (int error ) {
  return ((Either_int_ref_long){ .ctor = LEFT_CTOR , .data.left.error = error });
}
#endif /* __EITHER_IMPL__int_ref_long__H_ */ 
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block210 */
      printf ("ok   %-34s %lld\n", what , got );
      return 0;
    }
  else
    { /* block213 */
      printf ("FAIL %-34s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
Either_int_long parse_either_int_long (const char * text ) {
  { /* let218 */
    char * end ;
    long n ;
    // ----------
    errno  = 0;
    n  = strtol (text , (&end ), 10);
    if (end  ==  text  )
      { /* block223 */
        return ((Either_int_long){ .ctor = LEFT_CTOR , .data.left.error = EINVAL });
      }
    if (errno )
      { /* block229 */
        return ((Either_int_long){ .ctor = LEFT_CTOR , .data.left.error = errno });
      }
    return ((Either_int_long){ .ctor = RIGHT_CTOR , .data.right.value = n });
  }
}
Either_ParseErr_double half_either_ParseErr_double (int x ) {
  if (x  %  2 )
    { /* block239 */
      return ((Either_ParseErr_double){ .ctor = LEFT_CTOR , .data.left.error = PE_ODD });
    }
  return ((Either_ParseErr_double){ .ctor = RIGHT_CTOR , .data.right.value = (x  /  2.0 )});
}
Either_ParseErr_double cl_inner () {
  return ((Either_ParseErr_double){ .ctor = LEFT_CTOR , .data.left.error = PE_EMPTY });
}
Either_int_long nested () {
  { /* let245 */
    int n  = ({ /* letn250 */
      Either_ParseErr_double matchn249  = cl_inner ();
      // ----------
      ((((matchn249 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn255 */
          double v  = (((matchn249 . data). right). value);
          // ----------
          ((int)v );
        }) : ({ /* letn257 */
          ParseErr e  = (((matchn249 . data). left). error);
          // ----------
          ((void)e );
          -7;
        }));
    });
    // ----------
    if (n  ==  -7 )
      { /* block263 */
        return ((Either_int_long){ .ctor = RIGHT_CTOR , .data.right.value = ((long)1)});
      }
    return ((Either_int_long){ .ctor = LEFT_CTOR , .data.left.error = EINVAL });
  }
}
Either_int_ref_long pick_either_int_ref_long (long * restrict cell , int ok ) {
  if (ok )
    { /* block273 */
      return ((Either_int_ref_long){ .ctor = RIGHT_CTOR , .data.right.value = cell });
    }
  return ((Either_int_ref_long){ .ctor = LEFT_CTOR , .data.left.error = ERANGE });
}
int main () {
  { /* let279 */
    int bad  = 0;
    // ----------
    { /* let281 */
      long n  = 41;
      // ----------
      bad  += check ("right by ref reads through", ({ /* letn286 */
            Either_int_ref_long matchn285  = pick_either_int_ref_long ((&n ), 1);
            // ----------
            ((((matchn285 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn288 */
                long * restrict p  = (((matchn285 . data). right). value);
                // ----------
                (*p );
              }) : ({ /* letn290 */
                int err  = (((matchn285 . data). left). error);
                // ----------
                ((long)(-err ));
              }));
          }), 41) ;
      { /* let295 */
        Either_int_ref_long match294  = pick_either_int_ref_long ((&n ), 1);
        // ----------
        if ((match294 . ctor) ==  RIGHT_CTOR  ) {
            { /* let299 */
              long * restrict p  = (((match294 . data). right). value);
              // ----------
              (*p ) = 99;
            }
        }
        else if ((match294 . ctor) ==  LEFT_CTOR  ) {
            { /* let302 */
              int err  = (((match294 . data). left). error);
              // ----------
              ((void)err );
            }
        }
      }
      bad  += check ("right by ref writes through", n , 99) ;
      bad  += check ("left still by value", ({ /* letn307 */
            Either_int_ref_long matchn306  = pick_either_int_ref_long ((&n ), 0);
            // ----------
            ((((matchn306 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn309 */
                long * restrict p  = (((matchn306 . data). right). value);
                // ----------
                (*p );
              }) : ({ /* letn311 */
                int err  = (((matchn306 . data). left). error);
                // ----------
                ((long)err );
              }));
          }), ERANGE ) ;
    }
    bad  += check ("right, through match", ({ /* letn316 */
          Either_int_long matchn315  = parse_either_int_long ("42");
          // ----------
          ((((matchn315 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn318 */
              long n  = (((matchn315 . data). right). value);
              // ----------
              n ;
            }) : ({ /* letn320 */
              int err  = (((matchn315 . data). left). error);
              // ----------
              ((long)(-err ));
            }));
        }), 42) ;
    bad  += check ("left, through match", ({ /* letn325 */
          Either_int_long matchn324  = parse_either_int_long ("nope");
          // ----------
          ((((matchn324 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn327 */
              long n  = (((matchn324 . data). right). value);
              // ----------
              n ;
            }) : ({ /* letn329 */
              int err  = (((matchn324 . data). left). error);
              // ----------
              ((long)err );
            }));
        }), EINVAL ) ;
    bad  += check ("right 0 is not an error", ({ /* letn334 */
          Either_int_long matchn333  = parse_either_int_long ("0");
          // ----------
          ((((matchn333 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn336 */
              long n  = (((matchn333 . data). right). value);
              // ----------
              (n  +  1 );
            }) : ({ /* letn338 */
              int err  = (((matchn333 . data). left). error);
              // ----------
              ((long)(-err ));
            }));
        }), 1) ;
    { /* let340 */
      int hits  = 0;
      // ----------
      { /* let345 */
        Either_int_long match344  = parse_either_int_long ("5");
        // ----------
        if ((match344 . ctor) ==  RIGHT_CTOR  ) {
            { /* let349 */
              long n  = (((match344 . data). right). value);
              // ----------
              { /* block351 */
                ((void)n );
                (++hits );
              }
            }
        }
        else if ((match344 . ctor) ==  LEFT_CTOR  ) {
            { /* let354 */
              int err  = (((match344 . data). left). error);
              // ----------
              { /* block356 */
                ((void)err );
                (--hits );
              }
            }
        }
      }
      { /* let361 */
        Either_int_long match360  = parse_either_int_long ("x");
        // ----------
        if ((match360 . ctor) ==  RIGHT_CTOR  ) {
            { /* let365 */
              long n  = (((match360 . data). right). value);
              // ----------
              { /* block367 */
                ((void)n );
                (++hits );
              }
            }
        }
        else if ((match360 . ctor) ==  LEFT_CTOR  ) {
            { /* let370 */
              int err  = (((match360 . data). left). error);
              // ----------
              { /* block372 */
                ((void)err );
                (--hits );
              }
            }
        }
      }
      bad  += check ("match statement, both arms", hits , 0) ;
    }
    bad  += check ("right, either ParseErr double", ({ /* letn377 */
          Either_ParseErr_double matchn376  = half_either_ParseErr_double (10);
          // ----------
          ((((matchn376 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn379 */
              double v  = (((matchn376 . data). right). value);
              // ----------
              ((long long)(v  *  10 ));
            }) : ({ /* letn381 */
              ParseErr e  = (((matchn376 . data). left). error);
              // ----------
              ((long long)(-e ));
            }));
        }), 50) ;
    bad  += check ("left, either ParseErr double", ({ /* letn386 */
          Either_ParseErr_double matchn385  = half_either_ParseErr_double (7);
          // ----------
          ((((matchn385 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn388 */
              double v  = (((matchn385 . data). right). value);
              // ----------
              ((long long)(v  *  10 ));
            }) : ({ /* letn390 */
              ParseErr e  = (((matchn385 . data). left). error);
              // ----------
              ((long long)e );
            }));
        }), PE_ODD ) ;
    bad  += check ("left inside a closure", ({ /* letn394 */
          Either_int_long matchn393  = nested ();
          // ----------
          ((((matchn393 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn396 */
              long n  = (((matchn393 . data). right). value);
              // ----------
              n ;
            }) : ({ /* letn398 */
              int err  = (((matchn393 . data). left). error);
              // ----------
              ((long)(-err ));
            }));
        }), 1) ;
    bad  += check ("back-end right still works", ({ /* letn403 */
          Either_int_long matchn402  = right_int_long (9);
          // ----------
          ((((matchn402 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn405 */
              long n  = (((matchn402 . data). right). value);
              // ----------
              n ;
            }) : ({ /* letn407 */
              int err  = (((matchn402 . data). left). error);
              // ----------
              ((long)(-err ));
            }));
        }), 9) ;
    bad  += check ("back-end left still works", ({ /* letn412 */
          Either_int_long matchn411  = left_int_long (3);
          // ----------
          ((((matchn411 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn414 */
              long n  = (((matchn411 . data). right). value);
              // ----------
              n ;
            }) : ({ /* letn416 */
              int err  = (((matchn411 . data). left). error);
              // ----------
              ((long)err );
            }));
        }), 3) ;
    if (bad  ==  0 )
      printf ("either: all ok\n");
    else
      printf ("either: %d FAILED\n", bad );
    return bad ;
  }
}
