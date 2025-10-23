#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../../haskell.h"
#include "math.h"
int power_irreducible_int (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
#ifndef __H___h_Integer_ctor_t__
#define __H___h_Integer_ctor_t__
typedef enum __h_Integer_ctor_t {
  __h_Int_t = 0,
  __h_Short_t = 1,
  __h_Byte_t = 2
} __h_Integer_ctor_t;
#endif /* __H___h_Integer_ctor_t__ */ 
typedef struct Integer Integer ;
typedef void (*free_Integer_t) (Integer * this );
typedef struct Integer {
  free_Integer_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion125 */
    struct { /* ciciliStruct126 */
      char __h_0_mem ;
    } Byte , _0 ;
    struct { /* ciciliStruct127 */
      short __h_0_mem ;
    } Short , _1 ;
    struct { /* ciciliStruct128 */
      int __h_0_mem ;
    } Int , _ ;
  } __h_data ;
} Integer;
Integer Byte (char c );
Integer Short (short s );
Integer Int (int x );
__attribute__((weak)) Integer Default_Integer (int x ) {
  return Int (x );
}
void free_Integer (Integer * this );
void free_Integer (Integer * this ) {
  { /* cicili#Let145 */
    __auto_type c  = (((this -> __h_data ). Byte ). __h_0_mem );
    // ----------
    /* cicili#Block147 */
    ({ /* cicili#Let149 */
      bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Byte_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "Integer was Byte:  %d\n", c );
      else
        { /* cicili#Let156 */
          __auto_type s  = (((this -> __h_data ). Short ). __h_0_mem );
          // ----------
          /* cicili#Block158 */
          ({ /* cicili#Let160 */
            bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Short_t  );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "Integer was Short: %d\n", s );
            else
              { /* cicili#Let167 */
                __auto_type i  = (((this -> __h_data ). Int ). __h_0_mem );
                // ----------
                /* cicili#Block169 */
                ({ /* cicili#Let171 */
                  bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Int_t  );
                  // ----------
                  if (__h_case_result )
                    fprintf (stdout , "Integer was Int:   %d\n", i );
                });
              }
          });
        }
    });
  }
}
Integer Byte (char c ) {
  return ((Integer){ free_Integer , __h_Byte_t , .__h_data.Byte = { c }});
}
Integer Short (short s ) {
  return ((Integer){ free_Integer , __h_Short_t , .__h_data.Short = { s }});
}
Integer Int (int x ) {
  return ((Integer){ free_Integer , __h___t , .__h_data._ = { x }});
}
void show_Integer (Integer self ) {
  ({ /* cicili#Let185 */
    __auto_type c  = (((self . __h_data ). Byte ). __h_0_mem );
    // ----------
    /* cicili#Block187 */
    ({ /* cicili#Let189 */
      bool __h_case_result  = ((self . __h_ctor ) ==  __h_Byte_t  );
      // ----------
      ((__h_case_result ) ? fprintf (stdout , "Integer is Byte: %d\n", c ) : ({ /* cicili#Let194 */
          __auto_type sh  = (((self . __h_data ). Short ). __h_0_mem );
          // ----------
          /* cicili#Block196 */
          ({ /* cicili#Let198 */
            bool __h_case_result  = ((self . __h_ctor ) ==  __h_Short_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "Integer is Short: %d\n", sh ) : ({ /* cicili#Let203 */
                __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
                // ----------
                /* cicili#Block205 */
                ({ /* cicili#Let207 */
                  bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  (i  <  1000 ) );
                  // ----------
                  ((__h_case_result ) ? fprintf (stdout , "Integer is Int below 1000: %d\n", i ) : ({ /* cicili#Let212 */
                      __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
                      // ----------
                      /* cicili#Block214 */
                      ({ /* cicili#Let216 */
                        bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  ((i  >=  1000 ) &&  (i  <  10000 ) ) );
                        // ----------
                        ((__h_case_result ) ? fprintf (stdout , "Integer is Int between 1000 and 10000: %d\n", i ) : ({ /* cicili#Let221 */
                            // ----------
                            /* cicili#Block223 */
                            fprintf (stdout , "Integer is N/A\n");
                          }));
                      });
                    }));
                });
              }));
          });
        }));
    });
  });
}
#ifndef __H_Maybe_Maybe_char
#define __H_Maybe_Maybe_char
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Maybe_char Maybe_Maybe_char ;
typedef void (*free_Maybe_Maybe_char_t) (Maybe_Maybe_char * this );
typedef struct Maybe_Maybe_char {
  free_Maybe_Maybe_char_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion237 */
    struct { /* ciciliStruct238 */
    } Nothing , _0 ;
    struct { /* ciciliStruct239 */
      Maybe_char __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_Maybe_char;
Maybe_Maybe_char Nothing_Maybe_char ();
Maybe_Maybe_char Just_Maybe_char (Maybe_char value );
__attribute__((weak)) Maybe_Maybe_char Default_Maybe_Maybe_char (Maybe_char value ) {
  return Just_Maybe_char (value );
}
void free_Maybe_Maybe_char (Maybe_Maybe_char * this );
#endif /* __H_Maybe_Maybe_char */ 
void free_Maybe_Maybe_char (Maybe_Maybe_char * this ) {
}
Maybe_Maybe_char Nothing_Maybe_char () {
  return ((Maybe_Maybe_char){ free_Maybe_Maybe_char , __h_Nothing_t });
}
Maybe_Maybe_char Just_Maybe_char (Maybe_char value ) {
  return ((Maybe_Maybe_char){ free_Maybe_Maybe_char , __h___t , .__h_data._ = { value }});
}
void print_inside_maybe (Maybe_Maybe_char mb ) {
  { /* cicili#Let270 */
    // ----------
    /* cicili#Block272 */
    ({ /* cicili#Let274 */
      bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "wrapper Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let281 */
          __auto_type mc  = (((mb . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block283 */
          ({ /* cicili#Let285 */
            bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let290 */
                // ----------
                /* cicili#Block292 */
                ({ /* cicili#Let294 */
                  bool __h_case_result  = ((mc . __h_ctor ) ==  __h_Nothing_t  );
                  // ----------
                  if (__h_case_result )
                    fprintf (stdout , "wrapper Just Nothing char: Nothing\n");
                  else
                    { /* cicili#Let301 */
                      __auto_type c  = (((mc . __h_data ). Just ). __h_0_mem );
                      // ----------
                      /* cicili#Block303 */
                      ({ /* cicili#Let305 */
                        bool __h_case_result  = ((mc . __h_ctor ) ==  __h_Just_t  );
                        // ----------
                        if (__h_case_result )
                          fprintf (stdout , "wrapper Just Just char: Just %c\n", c );
                      });
                    }
                });
              }
          });
        }
    });
  }
}
void print_inner_maybe (Maybe_Maybe_char imb ) {
  { /* cicili#Let313 */
    // ----------
    /* cicili#Block315 */
    ({ /* cicili#Let317 */
      bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "inner Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let324 */
          __auto_type Nothing  = (((imb . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block326 */
          ({ /* cicili#Let328 */
            bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "inner Just Nothing char: Nothing\n");
            else
              { /* cicili#Let336 */
                __auto_type __h_match334_0_arg  = (((imb . __h_data ). Just ). __h_0_mem );
                __auto_type c  = (((__h_match334_0_arg . __h_data ). Just ). __h_0_mem );
                // ----------
                /* cicili#Block338 */
                ({ /* cicili#Let340 */
                  bool __h_case_result  = (((imb . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match334_0_arg . __h_ctor ) ==  __h_Just_t  ) );
                  // ----------
                  if (__h_case_result )
                    fprintf (stdout , "inner Just Just char: Just %c\n", c );
                });
              }
          });
        }
    });
  }
}
typedef struct __ciciliS_346 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_346;
typedef __ciciliS_346 aTuple ;
void print_tuple (aTuple tup ) {
  { /* cicili#Let350 */
    const __auto_type i  = (tup . __h_0_mem );
    const __auto_type c  = (tup . __h_1_mem );
    const __auto_type s  = (tup . __h_2_mem );
    // ----------
    /* cicili#Block352 */
    ({ /* cicili#Let354 */
      bool __h_case_result  = (s  >  10 );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
      else
        { /* cicili#Let361 */
          const __auto_type i  = (tup . __h_0_mem );
          const __auto_type c  = (tup . __h_1_mem );
          const __auto_type s  = (tup . __h_2_mem );
          // ----------
          /* cicili#Block363 */
          ({ /* cicili#Let365 */
            bool __h_case_result  = true ;
            // ----------
            if (__h_case_result )
              fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
          });
        }
    });
  }
}
#ifndef __H_Maybe_aTuple
#define __H_Maybe_aTuple
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_aTuple Maybe_aTuple ;
typedef void (*free_Maybe_aTuple_t) (Maybe_aTuple * this );
typedef struct Maybe_aTuple {
  free_Maybe_aTuple_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion379 */
    struct { /* ciciliStruct380 */
    } Nothing , _0 ;
    struct { /* ciciliStruct381 */
      aTuple __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_aTuple;
Maybe_aTuple Nothing_aTuple ();
Maybe_aTuple Just_aTuple (aTuple value );
__attribute__((weak)) Maybe_aTuple Default_Maybe_aTuple (aTuple value ) {
  return Just_aTuple (value );
}
void free_Maybe_aTuple (Maybe_aTuple * this );
#endif /* __H_Maybe_aTuple */ 
void free_Maybe_aTuple (Maybe_aTuple * this ) {
}
Maybe_aTuple Nothing_aTuple () {
  return ((Maybe_aTuple){ free_Maybe_aTuple , __h_Nothing_t });
}
Maybe_aTuple Just_aTuple (aTuple value ) {
  return ((Maybe_aTuple){ free_Maybe_aTuple , __h___t , .__h_data._ = { value }});
}
int factorial (int n ) {
  return (((n  ==  1 )) ? 1 : (n  *  factorial ((n  -  1 )) ));
}
static int __ciciliL_505 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_513 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
typedef struct __ciciliS_602 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_602;
typedef struct __ciciliS_604 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_604;
typedef struct __ciciliS_685 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
} __ciciliS_685;
int main () {
  fprintf (stdout , "output of lambda calculus: %d & %d\n", (2 +  3 ), (2 +  3 ));
  fprintf (stdout , "output of lambda calculus: %d\n", (2 +  3 +  4 ));
  fprintf (stdout , "output of lambda closure: %d\n", (2 +  3 ));
  fprintf (stdout , "output of lambda closure: %d\n", (2 +  3 +  4 ));
  fprintf (stdout , "output of function closure: %d\n", (2 +  3 ));
  fprintf (stdout , "output of function closure: %d\n", (2 +  3 +  4 ));
  fprintf (stdout , "output of inline where: %d\n", (2 *  3 ));
  fprintf (stdout , "output of where and closure: %d\n", (2 *  3 ));
  fprintf (stdout , "output of function using where: %d\n", (2 *  3 ));
  fprintf (stdout , "output of function application: %d\n", (3 *  4 ));
  fprintf (stdout , "output of function application: %d\n", (3 *  (2 +  2 ) ));
  fprintf (stdout , "output of function application: %d\n", (3 *  (2 +  (2 *  5 ) ) ));
  fprintf (stdout , "output of reducible function: %d\n", power_irreducible_int (2, 16));
  fprintf (stdout , "output of reducible function: %d\n", ((int)pow (((double)2), ((double)16))));
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_505 (2, 16));
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_513 (2, 16));
  fprintf (stdout , "output of function closure with $>: %d\n", (2 +  3 ));
  { /* cicili#Block527 */
    fprintf (stdout , "output of function composition1: %d\n", (3 *  (2 +  5 ) ));
    fprintf (stdout , "output of function composition2: %d\n", (3 *  (2 +  5 ) ));
    fprintf (stdout , "output of function composition3: %d\n", (3 *  (2 +  5 ) ));
    fprintf (stdout , "output of function composition4: %d\n", (3 *  (2 +  5 ) ));
  }
  (((1 ==  1 )) ? fprintf (stdout , "output of function guard1: %d\n", 1) : (((1 ==  2 )) ? fprintf (stdout , "output of function guard2: %d\n", 1) : fprintf (stdout , "output of function guard otherwise: %d\n", 1)));
  (((2 ==  1 )) ? fprintf (stdout , "output of function guard1: %d\n", 2) : (((2 ==  2 )) ? fprintf (stdout , "output of function guard2: %d\n", 2) : fprintf (stdout , "output of function guard otherwise: %d\n", 2)));
  (((3 ==  1 )) ? fprintf (stdout , "output of function guard1: %d\n", 3) : (((3 ==  2 )) ? fprintf (stdout , "output of function guard2: %d\n", 3) : fprintf (stdout , "output of function guard otherwise: %d\n", 3)));
  fprintf (stdout , "factorial of: %d\n", factorial (4));
  show_Integer (Byte (10));
  show_Integer (Short (20));
  show_Integer (Int (30));
  show_Integer (Int (2000));
  show_Integer (Int (20000));
  ({ /* cicili#Let589 */
    __auto_type b  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let591 */
      __auto_type tmp_obj  = Byte (11);
      // ----------
      ((void)(tmp_obj . __h_free_data ));
      tmp_obj ;
    });
    __auto_type s  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let594 */
      __auto_type tmp_obj  = Short (21);
      // ----------
      ((void)(tmp_obj . __h_free_data ));
      tmp_obj ;
    });
    __auto_type i  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let597 */
      __auto_type tmp_obj  = Int (31);
      // ----------
      ((void)(tmp_obj . __h_free_data ));
      tmp_obj ;
    });
    // ----------
    printf ("test destructure of Integer\n");
  });
  { /* cicili#Let600 */
    aTuple tup0  = { 4400, 'A', 33};
    struct __ciciliS_602 tup1  = { 4401, 'B', 34};
    __auto_type tup2  = ((struct __ciciliS_604 ){ 4402, 'C', 35});
    // ----------
    print_tuple (tup0 );
    print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
    ({ /* cicili#Let612 */
      const __auto_type i  = (tup2 . __h_0_mem );
      const __auto_type c  = (tup2 . __h_1_mem );
      const __auto_type s  = (tup2 . __h_2_mem );
      // ----------
      /* cicili#Block614 */
      ({ /* cicili#Let616 */
        bool __h_case_result  = (s  >  10 );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let621 */
            const __auto_type i  = (tup2 . __h_0_mem );
            const __auto_type c  = (tup2 . __h_1_mem );
            const __auto_type s  = (tup2 . __h_2_mem );
            // ----------
            /* cicili#Block623 */
            ({ /* cicili#Let625 */
              bool __h_case_result  = true ;
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let630 */
                  // ----------
                  /* cicili#Block632 */
                  fprintf (stdout , "No Tuple?!");
                }));
            });
          }));
      });
    });
  }
  { /* cicili#Let635 */
    __auto_type m1  = Nothing_Maybe_char ();
    __auto_type m2  = Just_Maybe_char (Nothing_char ());
    __auto_type m3  = Just_Maybe_char (Just_char ('G'));
    __auto_type m4  = Just_Maybe_char (Just_char ('H'));
    // ----------
    print_inside_maybe (m1 );
    print_inside_maybe (m2 );
    print_inside_maybe (m3 );
    print_inner_maybe (m4 );
  }
  { /* cicili#Let647 */
    __auto_type __h_data646  = Just_aTuple (((aTuple){ 55, 'D', 93}));
    // ----------
    /* cicili#Block650 */
    ({ /* cicili#Let652 */
      bool __h_case_result  = ((__h_data646 . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple inside maybe: Nothing");
      else
        { /* cicili#Let660 */
          __auto_type __h_match658_0_arg  = (((__h_data646 . __h_data ). Just ). __h_0_mem );
          __auto_type t  = __h_match658_0_arg ;
          const __auto_type i  = (t . __h_0_mem );
          const __auto_type c  = (t . __h_1_mem );
          const __auto_type s  = (t . __h_2_mem );
          // ----------
          /* cicili#Block662 */
          ({ /* cicili#Let664 */
            bool __h_case_result  = ((__h_data646 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let669 */
                const __auto_type ii  = (t . __h_0_mem );
                const __auto_type cc  = (t . __h_1_mem );
                const __auto_type ss  = (t . __h_2_mem );
                // ----------
                /* cicili#Block671 */
                ({ /* cicili#Let673 */
                  bool __h_case_result  = true ;
                  // ----------
                  if (__h_case_result )
                    ({ /* cicili#Progn676 */
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", ii , cc , ss );
                    });
                });
              }
          });
        }
    });
  }
  { /* cicili#Let683 */
    __auto_type __h_data682  = ((struct __ciciliS_685 ){ 5060, Just_char ('M')});
    const __auto_type Nothing  = (__h_data682 . __h_1_mem );
    // ----------
    /* cicili#Block687 */
    ({ /* cicili#Let689 */
      bool __h_case_result  = true ;
      // ----------
      if (__h_case_result )
        fprintf (stdout , "maybe inside tuple: Nothing\n");
      else
        { /* cicili#Let697 */
          const __auto_type i  = (__h_data682 . __h_0_mem );
          __auto_type __h_match695_1_arg  = (__h_data682 . __h_1_mem );
          __auto_type c  = (((__h_match695_1_arg . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block699 */
          ({ /* cicili#Let701 */
            bool __h_case_result  = (((__h_match695_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  >  'L' ) );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
            else
              { /* cicili#Let709 */
                __auto_type t  = __h_data682 ;
                __auto_type __h_match707_1_arg  = (t . __h_1_mem );
                __auto_type c  = (((__h_match707_1_arg . __h_data ). Just ). __h_0_mem );
                // ----------
                /* cicili#Block711 */
                ({ /* cicili#Let713 */
                  bool __h_case_result  = (((__h_match707_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  <  'L' ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Let719 */
                      const __auto_type i  = (t . __h_0_mem );
                      __auto_type __h_match717_1_arg  = (t . __h_1_mem );
                      // ----------
                      /* cicili#Block721 */
                      ({ /* cicili#Let723 */
                        bool __h_case_result  = ((__h_match717_1_arg . __h_ctor ) ==  __h_Just_t  );
                        // ----------
                        if (__h_case_result )
                          fprintf (stdout , "maybe inside tuple: (c < L) int, Just char: = (%d, %c)\n", i , c );
                      });
                    }
                });
              }
          });
        }
    });
  }
  ({ /* cicili#Let728 */
    __auto_type txt  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let730 */
      __auto_type tmp_obj  = new_String_Const ("Haskell List");
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    });
    // ----------
    show_String (txt );
    putchar ('\n');
    fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let739 */
        __auto_type __h_data738  = nth_String (3, txt );
        __auto_type c  = (((__h_data738 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block741 */
        ({ /* cicili#Let743 */
          bool __h_case_result  = ((__h_data738 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let748 */
              // ----------
              /* cicili#Block750 */
              fprintf (stdout , "4th element not found\n");
            }));
        });
      }));
    ({ /* cicili#Progn759 */
      ({ /* cicili#Let768 */
        __auto_type __h_data767  = nth_String (4, txt );
        __auto_type c  = (((__h_data767 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block773 */
        ({ /* cicili#Let775 */
          bool __h_case_result  = ((__h_data767 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let780 */
              // ----------
              /* cicili#Block782 */
              fprintf (stdout , "%dth element not found\n", 4);
            }));
        });
      });
      ({ /* cicili#Let792 */
        __auto_type __h_data791  = nth_String (5, txt );
        __auto_type c  = (((__h_data791 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block797 */
        ({ /* cicili#Let799 */
          bool __h_case_result  = ((__h_data791 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let804 */
              // ----------
              /* cicili#Block806 */
              fprintf (stdout , "%dth element not found\n", 5);
            }));
        });
      });
      ({ /* cicili#Let816 */
        __auto_type __h_data815  = nth_String (6, txt );
        __auto_type c  = (((__h_data815 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block821 */
        ({ /* cicili#Let823 */
          bool __h_case_result  = ((__h_data815 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let828 */
              // ----------
              /* cicili#Block830 */
              fprintf (stdout , "%dth element not found\n", 6);
            }));
        });
      });
      ({ /* cicili#Let840 */
        __auto_type __h_data839  = nth_String (len_String (txt ), txt );
        __auto_type c  = (((__h_data839 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block845 */
        ({ /* cicili#Let847 */
          bool __h_case_result  = ((__h_data839 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", len_String (txt ), c ) : ({ /* cicili#Let852 */
              // ----------
              /* cicili#Block854 */
              fprintf (stdout , "%dth element not found\n", len_String (txt ));
            }));
        });
      });
    });
    fprintf (stdout , "output of letin: %d\n", ({ /* cicili#Let858 */
        __auto_type llen  = len_String (txt );
        // ----------
        ({ /* cicili#Progn865 */
          ({ /* cicili#Let874 */
            __auto_type __h_data873  = nth_List_char (4, txt );
            __auto_type c  = (((__h_data873 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block882 */
            ({ /* cicili#Let884 */
              bool __h_case_result  = ((__h_data873 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let889 */
                  // ----------
                  /* cicili#Block891 */
                  fprintf (stdout , "%dth element not found\n", 4);
                }));
            });
          });
          ({ /* cicili#Let901 */
            __auto_type __h_data900  = nth_List_char (5, txt );
            __auto_type c  = (((__h_data900 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block909 */
            ({ /* cicili#Let911 */
              bool __h_case_result  = ((__h_data900 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let916 */
                  // ----------
                  /* cicili#Block918 */
                  fprintf (stdout , "%dth element not found\n", 5);
                }));
            });
          });
          ({ /* cicili#Let928 */
            __auto_type __h_data927  = nth_List_char (6, txt );
            __auto_type c  = (((__h_data927 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block936 */
            ({ /* cicili#Let938 */
              bool __h_case_result  = ((__h_data927 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let943 */
                  // ----------
                  /* cicili#Block945 */
                  fprintf (stdout , "%dth element not found\n", 6);
                }));
            });
          });
          ({ /* cicili#Let955 */
            __auto_type __h_data954  = nth_List_char (llen , txt );
            __auto_type c  = (((__h_data954 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block963 */
            ({ /* cicili#Let965 */
              bool __h_case_result  = ((__h_data954 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", llen , c ) : ({ /* cicili#Let970 */
                  // ----------
                  /* cicili#Block972 */
                  fprintf (stdout , "%dth element not found\n", llen );
                }));
            });
          });
        });
      }));
    { /* cicili#Let977 */
      __auto_type head  = (((txt -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((txt -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block979 */
      ({ /* cicili#Let981 */
        bool __h_case_result  = ((txt -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , len_String (tail ));
      });
    }
    ({ /* cicili#Let986 */
      __auto_type str5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let988 */
        __auto_type tmp_obj  = new_List_char_Pure (((const char[]){ 'C', 'i', 'c', 'i', 'l', 'i'}), 6);
        // ----------
        ((void)(tmp_obj -> __h_free_class ));
        tmp_obj ;
      });
      // ----------
      fprintf (stdout , "has 'Cicili' desired length 5: %d\n", has_len_String (str5 , 5));
      fprintf (stdout , "has 'Cicili' desired length 6: %d\n", has_len_String (str5 , 6));
      fprintf (stdout , "has 'Cicili' desired length 7: %d\n", has_len_String (str5 , 7));
    });
    { /* cicili#Let999 */
      __auto_type __h_data998  = drop_String (12, txt );
      __auto_type __h_has_len  = has_len_List_char (__h_data998 , 3);
      typeof((((nth_List_char (0, __h_data998 ). __h_data ). Just ). __h_0_mem )) fst ;
      typeof((((nth_List_char (1, __h_data998 ). __h_data ). Just ). __h_0_mem )) snd ;
      typeof((((nth_List_char (2, __h_data998 ). __h_data ). Just ). __h_0_mem )) trd ;
      typeof(drop_List_char (3, __h_data998 )) tail ;
      // ----------
      if (__h_has_len  ==  3 )
        { /* cicili#Block1007 */
          fst  = (((nth_List_char (0, __h_data998 ). __h_data ). Just ). __h_0_mem );
          snd  = (((nth_List_char (1, __h_data998 ). __h_data ). Just ). __h_0_mem );
          trd  = (((nth_List_char (2, __h_data998 ). __h_data ). Just ). __h_0_mem );
          tail  = drop_List_char (3, __h_data998 );
        }
      ({ /* cicili#Let1013 */
        bool __h_case_result  = (__h_has_len  ==  3 );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first, second and third char from String: %c %c %c\n", fst , snd , trd );
        else
          { /* cicili#Let1020 */
            __auto_type __h_has_len  = has_len_List_char (__h_data998 , 2);
            typeof((((nth_List_char (0, __h_data998 ). __h_data ). Just ). __h_0_mem )) fst ;
            typeof((((nth_List_char (1, __h_data998 ). __h_data ). Just ). __h_0_mem )) snd ;
            typeof(drop_List_char (2, __h_data998 )) tail ;
            // ----------
            if (__h_has_len  ==  2 )
              { /* cicili#Block1027 */
                fst  = (((nth_List_char (0, __h_data998 ). __h_data ). Just ). __h_0_mem );
                snd  = (((nth_List_char (1, __h_data998 ). __h_data ). Just ). __h_0_mem );
                tail  = drop_List_char (2, __h_data998 );
              }
            ({ /* cicili#Let1032 */
              bool __h_case_result  = (__h_has_len  ==  2 );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "first and second char from String: %c %c\n", fst , snd );
              else
                { /* cicili#Let1039 */
                  __auto_type __h_has_len  = has_len_List_char (__h_data998 , 1);
                  typeof((((nth_List_char (0, __h_data998 ). __h_data ). Just ). __h_0_mem )) fst ;
                  typeof(drop_List_char (1, __h_data998 )) tail ;
                  // ----------
                  if (__h_has_len  ==  1 )
                    { /* cicili#Block1045 */
                      fst  = (((nth_List_char (0, __h_data998 ). __h_data ). Just ). __h_0_mem );
                      tail  = drop_List_char (1, __h_data998 );
                    }
                  ({ /* cicili#Let1049 */
                    bool __h_case_result  = (__h_has_len  ==  1 );
                    // ----------
                    if (__h_case_result )
                      fprintf (stdout , "first char from String: %c\n", fst );
                    else
                      { /* cicili#Let1056 */
                        // ----------
                        /* cicili#Block1058 */
                        fprintf (stdout , "default case String\n");
                      }
                  });
                }
            });
          }
      });
    }
  });
  ({ /* cicili#Let1062 */
    __auto_type ilist0  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
    __auto_type ilist1  = __h_Cons_int_ctor (5, ilist0 );
    __auto_type intarr  = ((const int[]){ 8, 7, 6});
    __auto_type ilist2  = new_List_int_Pure (intarr , 3);
    // ----------
    ({ /* cicili#Let1075 */
      __auto_type ilist3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1077 */
        __auto_type tmp_obj  = append_List_int (ilist2 , ilist1 );
        // ----------
        ((void)(tmp_obj -> __h_free_class ));
        tmp_obj ;
      });
      __auto_type ilist4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1084 */
        __auto_type tmp_obj  = take_List_int (5, ilist3 );
        // ----------
        ((void)(tmp_obj -> __h_free_class ));
        tmp_obj ;
      });
      // ----------
      fprintf (stdout , "first elem of int list0: %d\n", ({ /* cicili#Let1091 */
          __auto_type __h_data1090  = nth_List_int (0, ilist0 );
          __auto_type i  = (((__h_data1090 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block1095 */
          ({ /* cicili#Let1097 */
            bool __h_case_result  = ((__h_data1090 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? i  : ({ /* cicili#Let1101 */
                // ----------
                /* cicili#Block1103 */
                -1;
              }));
          });
        }));
      fprintf (stdout , "first elem of int list1: %d\n", ({ /* cicili#Let1109 */
          __auto_type __h_data1108  = nth_List_int (0, ilist1 );
          __auto_type i  = (((__h_data1108 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block1113 */
          ({ /* cicili#Let1115 */
            bool __h_case_result  = ((__h_data1108 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? i  : ({ /* cicili#Let1119 */
                // ----------
                /* cicili#Block1121 */
                -1;
              }));
          });
        }));
      fprintf (stdout , "list0:\n");
      show_List_int (ilist0 );
      fprintf (stdout , "\nlist1:\n");
      show_List_int (ilist1 );
      fprintf (stdout , "\nlist2:\n");
      show_List_int (ilist2 );
      fprintf (stdout , "\nlist3:\n");
      show_List_int (ilist3 );
      fprintf (stdout , "\nlist4: take 5 of list3:\n");
      show_List_int (ilist4 );
      putchar ('\n');
    });
  });
  ({ /* cicili#Let1129 */
    __auto_type ra0  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1131 */
      __auto_type tmp_obj  = new_Range_int (1, 20, 3);
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    });
    __auto_type ra1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1134 */
      __auto_type tmp_obj  = take_Range_int (3, ra0 );
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    });
    __auto_type ra2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1137 */
      __auto_type tmp_obj  = take_Range_int (4, ra0 );
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    });
    __auto_type ra3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1140 */
      __auto_type tmp_obj  = take_Range_int (10, ra0 );
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    });
    __auto_type str0  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1143 */
      __auto_type tmp_obj  = new_String_Const ("Hello World!");
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    });
    __auto_type str1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1148 */
      __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 33}), 12);
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    });
    // ----------
    fprintf (stdout , "range 1 20 3:\n");
    show_Range_int (ra0 );
    fprintf (stdout , "\ntake 3  of range 1 20 3:\n");
    show_Range_int (ra1 );
    fprintf (stdout , "\ntake 4  of range 1 20 3:\n");
    show_Range_int (ra2 );
    fprintf (stdout , "\ntake 10 of range 1 20 3:\n");
    show_List_int (((List_int)ra3 ));
    fprintf (stdout , "\nString to List^int:\n");
    show_List_int (((List_int)str0 ));
    fprintf (stdout , "\nList^int to String:\n");
    show_String (((String)str1 ));
    putchar ('\n');
  });
}
