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
  union { /* ciciliUnion145 */
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
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block172 */
      printf ("ok   %-34s %lld\n", what , got );
      return 0;
    }
  else
    { /* block175 */
      printf ("FAIL %-34s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
Either_int_long parse_either_int_long (const char * text ) {
  { /* let180 */
    char * end ;
    long n ;
    // ----------
    errno  = 0;
    n  = strtol (text , (&end ), 10);
    if (end  ==  text  )
      { /* block185 */
        return ((Either_int_long){ .ctor = LEFT_CTOR , .data.left.error = EINVAL });
      }
    if (errno )
      { /* block191 */
        return ((Either_int_long){ .ctor = LEFT_CTOR , .data.left.error = errno });
      }
    return ((Either_int_long){ .ctor = RIGHT_CTOR , .data.right.value = n });
  }
}
Either_ParseErr_double half_either_ParseErr_double (int x ) {
  if (x  %  2 )
    { /* block201 */
      return ((Either_ParseErr_double){ .ctor = LEFT_CTOR , .data.left.error = PE_ODD });
    }
  return ((Either_ParseErr_double){ .ctor = RIGHT_CTOR , .data.right.value = (x  /  2.0 )});
}
Either_ParseErr_double cl_inner () {
  return ((Either_ParseErr_double){ .ctor = LEFT_CTOR , .data.left.error = PE_EMPTY });
}
Either_int_long nested () {
  { /* let207 */
    int n  = ({ /* letn212 */
      Either_ParseErr_double matchn211  = cl_inner ();
      // ----------
      ((((matchn211 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn217 */
          double v  = (((matchn211 . data). right). value);
          // ----------
          ((int)v );
        }) : ({ /* letn219 */
          ParseErr e  = (((matchn211 . data). left). error);
          // ----------
          ((void)e );
          -7;
        }));
    });
    // ----------
    if (n  ==  -7 )
      { /* block225 */
        return ((Either_int_long){ .ctor = RIGHT_CTOR , .data.right.value = ((long)1)});
      }
    return ((Either_int_long){ .ctor = LEFT_CTOR , .data.left.error = EINVAL });
  }
}
int main () {
  { /* let231 */
    int bad  = 0;
    // ----------
    bad  += check ("right, through match", ({ /* letn236 */
          Either_int_long matchn235  = parse_either_int_long ("42");
          // ----------
          ((((matchn235 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn238 */
              long n  = (((matchn235 . data). right). value);
              // ----------
              n ;
            }) : ({ /* letn240 */
              int err  = (((matchn235 . data). left). error);
              // ----------
              ((long)(-err ));
            }));
        }), 42) ;
    bad  += check ("left, through match", ({ /* letn245 */
          Either_int_long matchn244  = parse_either_int_long ("nope");
          // ----------
          ((((matchn244 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn247 */
              long n  = (((matchn244 . data). right). value);
              // ----------
              n ;
            }) : ({ /* letn249 */
              int err  = (((matchn244 . data). left). error);
              // ----------
              ((long)err );
            }));
        }), EINVAL ) ;
    bad  += check ("right 0 is not an error", ({ /* letn254 */
          Either_int_long matchn253  = parse_either_int_long ("0");
          // ----------
          ((((matchn253 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn256 */
              long n  = (((matchn253 . data). right). value);
              // ----------
              (n  +  1 );
            }) : ({ /* letn258 */
              int err  = (((matchn253 . data). left). error);
              // ----------
              ((long)(-err ));
            }));
        }), 1) ;
    { /* let260 */
      int hits  = 0;
      // ----------
      { /* let265 */
        Either_int_long match264  = parse_either_int_long ("5");
        // ----------
        if ((match264 . ctor) ==  RIGHT_CTOR  ) {
            { /* let269 */
              long n  = (((match264 . data). right). value);
              // ----------
              { /* block271 */
                ((void)n );
                (++hits );
              }
            }
        }
        else if ((match264 . ctor) ==  LEFT_CTOR  ) {
            { /* let274 */
              int err  = (((match264 . data). left). error);
              // ----------
              { /* block276 */
                ((void)err );
                (--hits );
              }
            }
        }
      }
      { /* let281 */
        Either_int_long match280  = parse_either_int_long ("x");
        // ----------
        if ((match280 . ctor) ==  RIGHT_CTOR  ) {
            { /* let285 */
              long n  = (((match280 . data). right). value);
              // ----------
              { /* block287 */
                ((void)n );
                (++hits );
              }
            }
        }
        else if ((match280 . ctor) ==  LEFT_CTOR  ) {
            { /* let290 */
              int err  = (((match280 . data). left). error);
              // ----------
              { /* block292 */
                ((void)err );
                (--hits );
              }
            }
        }
      }
      bad  += check ("match statement, both arms", hits , 0) ;
    }
    bad  += check ("right, either ParseErr double", ({ /* letn297 */
          Either_ParseErr_double matchn296  = half_either_ParseErr_double (10);
          // ----------
          ((((matchn296 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn299 */
              double v  = (((matchn296 . data). right). value);
              // ----------
              ((long long)(v  *  10 ));
            }) : ({ /* letn301 */
              ParseErr e  = (((matchn296 . data). left). error);
              // ----------
              ((long long)(-e ));
            }));
        }), 50) ;
    bad  += check ("left, either ParseErr double", ({ /* letn306 */
          Either_ParseErr_double matchn305  = half_either_ParseErr_double (7);
          // ----------
          ((((matchn305 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn308 */
              double v  = (((matchn305 . data). right). value);
              // ----------
              ((long long)(v  *  10 ));
            }) : ({ /* letn310 */
              ParseErr e  = (((matchn305 . data). left). error);
              // ----------
              ((long long)e );
            }));
        }), PE_ODD ) ;
    bad  += check ("left inside a closure", ({ /* letn314 */
          Either_int_long matchn313  = nested ();
          // ----------
          ((((matchn313 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn316 */
              long n  = (((matchn313 . data). right). value);
              // ----------
              n ;
            }) : ({ /* letn318 */
              int err  = (((matchn313 . data). left). error);
              // ----------
              ((long)(-err ));
            }));
        }), 1) ;
    bad  += check ("back-end right still works", ({ /* letn323 */
          Either_int_long matchn322  = right_int_long (9);
          // ----------
          ((((matchn322 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn325 */
              long n  = (((matchn322 . data). right). value);
              // ----------
              n ;
            }) : ({ /* letn327 */
              int err  = (((matchn322 . data). left). error);
              // ----------
              ((long)(-err ));
            }));
        }), 9) ;
    bad  += check ("back-end left still works", ({ /* letn332 */
          Either_int_long matchn331  = left_int_long (3);
          // ----------
          ((((matchn331 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn334 */
              long n  = (((matchn331 . data). right). value);
              // ----------
              n ;
            }) : ({ /* letn336 */
              int err  = (((matchn331 . data). left). error);
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
