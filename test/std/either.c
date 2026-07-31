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
typedef struct either_int_long {
  bool right ;
  long value ;
  int error ;
} either_int_long;
typedef long either_int_long_right_t ;
typedef int either_int_long_left_t ;
#ifndef __EITHER_TYPE_H_
#define __EITHER_TYPE_H_
typedef struct std_either std_either ;
#endif /* __EITHER_TYPE_H_ */ 
typedef std_either either_int_long_type_t ;
either_int_long right_either_int_long (long value );
either_int_long left_either_int_long (int error );
__attribute__((weak)) either_int_long right_either_int_long (long value ) {
  return ((either_int_long){ true , value , ((int){ 0})});
}
__attribute__((weak)) either_int_long left_either_int_long (int error ) {
  return ((either_int_long){ false , ((long){ 0}), error });
}
typedef struct either_ParseErr_double {
  bool right ;
  double value ;
  ParseErr error ;
} either_ParseErr_double;
typedef double either_ParseErr_double_right_t ;
typedef ParseErr either_ParseErr_double_left_t ;
#ifndef __EITHER_TYPE_H_
#define __EITHER_TYPE_H_
typedef struct std_either std_either ;
#endif /* __EITHER_TYPE_H_ */ 
typedef std_either either_ParseErr_double_type_t ;
either_ParseErr_double right_either_ParseErr_double (double value );
either_ParseErr_double left_either_ParseErr_double (ParseErr error );
__attribute__((weak)) either_ParseErr_double right_either_ParseErr_double (double value ) {
  return ((either_ParseErr_double){ true , value , ((ParseErr){ 0})});
}
__attribute__((weak)) either_ParseErr_double left_either_ParseErr_double (ParseErr error ) {
  return ((either_ParseErr_double){ false , ((double){ 0}), error });
}
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block154 */
      printf ("ok   %-34s %lld\n", what , got );
      return 0;
    }
  else
    { /* block157 */
      printf ("FAIL %-34s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
either_int_long parse_either_int_long (const char * text ) {
  { /* let162 */
    char * end ;
    long n ;
    // ----------
    errno  = 0;
    n  = strtol (text , (&end ), 10);
    if (end  ==  text  )
      { /* block167 */
        return ((either_int_long){ false , ((either_int_long_right_t){ 0}), EINVAL });
      }
    if (errno )
      { /* block174 */
        return ((either_int_long){ false , ((either_int_long_right_t){ 0}), errno });
      }
    return ((either_int_long){ true , n , ((either_int_long_left_t){ 0})});
  }
}
either_ParseErr_double half_either_ParseErr_double (int x ) {
  if (x  %  2 )
    { /* block186 */
      return ((either_ParseErr_double){ false , ((either_ParseErr_double_right_t){ 0}), PE_ODD });
    }
  return ((either_ParseErr_double){ true , (x  /  2.0 ), ((either_ParseErr_double_left_t){ 0})});
}
either_ParseErr_double cl_inner () {
  return ((either_ParseErr_double){ false , ((either_ParseErr_double_right_t){ 0}), PE_EMPTY });
}
either_int_long nested () {
  { /* let194 */
    int n  = ({ /* letn199 */
      either_ParseErr_double matchn198  = cl_inner ();
      // ----------
      (((matchn198 . right)) ? ({ /* letn205 */
          double v  = (matchn198 . value);
          // ----------
          ((int)v );
        }) : ({ /* letn207 */
          ParseErr e  = (matchn198 . error);
          // ----------
          ((void)e );
          -7;
        }));
    });
    // ----------
    if (n  ==  -7 )
      { /* block213 */
        return ((either_int_long){ true , ((long)1), ((either_int_long_left_t){ 0})});
      }
    return ((either_int_long){ false , ((either_int_long_right_t){ 0}), EINVAL });
  }
}
int main () {
  { /* let221 */
    int bad  = 0;
    // ----------
    bad  += check ("right, through match", ({ /* letn226 */
          either_int_long matchn225  = parse_either_int_long ("42");
          // ----------
          (((matchn225 . right)) ? ({ /* letn228 */
              long n  = (matchn225 . value);
              // ----------
              n ;
            }) : ({ /* letn230 */
              int err  = (matchn225 . error);
              // ----------
              ((long)(-err ));
            }));
        }), 42) ;
    bad  += check ("left, through match", ({ /* letn235 */
          either_int_long matchn234  = parse_either_int_long ("nope");
          // ----------
          (((matchn234 . right)) ? ({ /* letn237 */
              long n  = (matchn234 . value);
              // ----------
              n ;
            }) : ({ /* letn239 */
              int err  = (matchn234 . error);
              // ----------
              ((long)err );
            }));
        }), EINVAL ) ;
    bad  += check ("right 0 is not an error", ({ /* letn244 */
          either_int_long matchn243  = parse_either_int_long ("0");
          // ----------
          (((matchn243 . right)) ? ({ /* letn246 */
              long n  = (matchn243 . value);
              // ----------
              (n  +  1 );
            }) : ({ /* letn248 */
              int err  = (matchn243 . error);
              // ----------
              ((long)(-err ));
            }));
        }), 1) ;
    { /* let250 */
      int hits  = 0;
      // ----------
      { /* let255 */
        either_int_long match254  = parse_either_int_long ("5");
        // ----------
        if (match254 . right) {
            { /* let259 */
              long n  = (match254 . value);
              // ----------
              { /* block261 */
                ((void)n );
                (++hits );
              }
            }
        }
        else if (!(match254 . right)) {
            { /* let264 */
              int err  = (match254 . error);
              // ----------
              { /* block266 */
                ((void)err );
                (--hits );
              }
            }
        }
      }
      { /* let271 */
        either_int_long match270  = parse_either_int_long ("x");
        // ----------
        if (match270 . right) {
            { /* let275 */
              long n  = (match270 . value);
              // ----------
              { /* block277 */
                ((void)n );
                (++hits );
              }
            }
        }
        else if (!(match270 . right)) {
            { /* let280 */
              int err  = (match270 . error);
              // ----------
              { /* block282 */
                ((void)err );
                (--hits );
              }
            }
        }
      }
      bad  += check ("match statement, both arms", hits , 0) ;
    }
    bad  += check ("right, either ParseErr double", ({ /* letn287 */
          either_ParseErr_double matchn286  = half_either_ParseErr_double (10);
          // ----------
          (((matchn286 . right)) ? ({ /* letn289 */
              double v  = (matchn286 . value);
              // ----------
              ((long long)(v  *  10 ));
            }) : ({ /* letn291 */
              ParseErr e  = (matchn286 . error);
              // ----------
              ((long long)(-e ));
            }));
        }), 50) ;
    bad  += check ("left, either ParseErr double", ({ /* letn296 */
          either_ParseErr_double matchn295  = half_either_ParseErr_double (7);
          // ----------
          (((matchn295 . right)) ? ({ /* letn298 */
              double v  = (matchn295 . value);
              // ----------
              ((long long)(v  *  10 ));
            }) : ({ /* letn300 */
              ParseErr e  = (matchn295 . error);
              // ----------
              ((long long)e );
            }));
        }), PE_ODD ) ;
    bad  += check ("left inside a closure", ({ /* letn304 */
          either_int_long matchn303  = nested ();
          // ----------
          (((matchn303 . right)) ? ({ /* letn306 */
              long n  = (matchn303 . value);
              // ----------
              n ;
            }) : ({ /* letn308 */
              int err  = (matchn303 . error);
              // ----------
              ((long)(-err ));
            }));
        }), 1) ;
    bad  += check ("back-end right still works", ({ /* letn313 */
          either_int_long matchn312  = right_either_int_long (9);
          // ----------
          (((matchn312 . right)) ? ({ /* letn315 */
              long n  = (matchn312 . value);
              // ----------
              n ;
            }) : ({ /* letn317 */
              int err  = (matchn312 . error);
              // ----------
              ((long)(-err ));
            }));
        }), 9) ;
    bad  += check ("back-end left still works", ({ /* letn322 */
          either_int_long matchn321  = left_either_int_long (3);
          // ----------
          (((matchn321 . right)) ? ({ /* letn324 */
              long n  = (matchn321 . value);
              // ----------
              n ;
            }) : ({ /* letn326 */
              int err  = (matchn321 . error);
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
