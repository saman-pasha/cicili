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
  free_Integer_t __h_free ;
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
Integer Byte (char __h_0_mem );
Integer Short (short __h_0_mem );
Integer Int (int __h_0_mem );
void free_Integer (Integer * this ) {
  { /* cicili#Let141 */
    __auto_type c  = (((this -> __h_data ). Byte ). __h_0_mem );
    // ----------
    /* cicili#Block143 */
    ({ /* cicili#Let145 */
      bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Byte_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "Integer was Byte:  %d\n", c );
      else
        { /* cicili#Let152 */
          __auto_type s  = (((this -> __h_data ). Short ). __h_0_mem );
          // ----------
          /* cicili#Block154 */
          ({ /* cicili#Let156 */
            bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Short_t  );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "Integer was Short: %d\n", s );
            else
              { /* cicili#Let163 */
                __auto_type i  = (((this -> __h_data ). Int ). __h_0_mem );
                // ----------
                /* cicili#Block165 */
                ({ /* cicili#Let167 */
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
  ({ /* cicili#Let181 */
    __auto_type c  = (((self . __h_data ). Byte ). __h_0_mem );
    // ----------
    /* cicili#Block183 */
    ({ /* cicili#Let185 */
      bool __h_case_result  = ((self . __h_ctor ) ==  __h_Byte_t  );
      // ----------
      ((__h_case_result ) ? fprintf (stdout , "Integer is Byte: %d\n", c ) : ({ /* cicili#Let190 */
        __auto_type sh  = (((self . __h_data ). Short ). __h_0_mem );
        // ----------
        /* cicili#Block192 */
        ({ /* cicili#Let194 */
          bool __h_case_result  = ((self . __h_ctor ) ==  __h_Short_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "Integer is Short: %d\n", sh ) : ({ /* cicili#Let199 */
            __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
            // ----------
            /* cicili#Block201 */
            ({ /* cicili#Let203 */
              bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  (i  <  1000 ) );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "Integer is Int below 1000: %d\n", i ) : ({ /* cicili#Let208 */
                __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
                // ----------
                /* cicili#Block210 */
                ({ /* cicili#Let212 */
                  bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  ((i  >=  1000 ) &&  (i  <  10000 ) ) );
                  // ----------
                  ((__h_case_result ) ? fprintf (stdout , "Integer is Int between 1000 and 10000: %d\n", i ) : ({ /* cicili#Let217 */
                    // ----------
                    /* cicili#Block219 */
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
  free_Maybe_Maybe_char_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion233 */
    struct { /* ciciliStruct234 */
    } Nothing , _0 ;
    struct { /* ciciliStruct235 */
      Maybe_char __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_Maybe_char;
Maybe_Maybe_char Nothing_Maybe_char ();
Maybe_Maybe_char Just_Maybe_char (Maybe_char __h_0_mem );
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
  { /* cicili#Let258 */
    // ----------
    /* cicili#Block260 */
    ({ /* cicili#Let262 */
      bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "wrapper Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let269 */
          __auto_type mc  = (((mb . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block271 */
          ({ /* cicili#Let273 */
            bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let278 */
                // ----------
                /* cicili#Block280 */
                ({ /* cicili#Let282 */
                  bool __h_case_result  = ((mc . __h_ctor ) ==  __h_Nothing_t  );
                  // ----------
                  if (__h_case_result )
                    fprintf (stdout , "wrapper Just Nothing char: Nothing\n");
                  else
                    { /* cicili#Let289 */
                      __auto_type c  = (((mc . __h_data ). Just ). __h_0_mem );
                      // ----------
                      /* cicili#Block291 */
                      ({ /* cicili#Let293 */
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
  { /* cicili#Let301 */
    // ----------
    /* cicili#Block303 */
    ({ /* cicili#Let305 */
      bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "inner Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let312 */
          __auto_type Nothing  = (((imb . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block314 */
          ({ /* cicili#Let316 */
            bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "inner Just Nothing char: Nothing\n");
            else
              { /* cicili#Let324 */
                __auto_type __h_match322_0_arg  = (((imb . __h_data ). Just ). __h_0_mem );
                __auto_type c  = (((__h_match322_0_arg . __h_data ). Just ). __h_0_mem );
                // ----------
                /* cicili#Block326 */
                ({ /* cicili#Let328 */
                  bool __h_case_result  = (((imb . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match322_0_arg . __h_ctor ) ==  __h_Just_t  ) );
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
typedef struct __ciciliS_334 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_334;
typedef __ciciliS_334 aTuple ;
void print_tuple (aTuple tup ) {
  { /* cicili#Let338 */
    const __auto_type i  = (tup . __h_0_mem );
    const __auto_type c  = (tup . __h_1_mem );
    const __auto_type s  = (tup . __h_2_mem );
    // ----------
    /* cicili#Block340 */
    ({ /* cicili#Let342 */
      bool __h_case_result  = (s  >  10 );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
      else
        { /* cicili#Let349 */
          const __auto_type i  = (tup . __h_0_mem );
          const __auto_type c  = (tup . __h_1_mem );
          const __auto_type s  = (tup . __h_2_mem );
          // ----------
          /* cicili#Block351 */
          ({ /* cicili#Let353 */
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
  free_Maybe_aTuple_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion367 */
    struct { /* ciciliStruct368 */
    } Nothing , _0 ;
    struct { /* ciciliStruct369 */
      aTuple __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_aTuple;
Maybe_aTuple Nothing_aTuple ();
Maybe_aTuple Just_aTuple (aTuple __h_0_mem );
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
static int __ciciliL_488 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_496 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
typedef struct __ciciliS_576 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_576;
typedef struct __ciciliS_578 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_578;
typedef struct __ciciliS_659 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
} __ciciliS_659;
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
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_488 (2, 16));
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_496 (2, 16));
  fprintf (stdout , "output of function closure with $>: %d\n", (2 +  3 ));
  { /* cicili#Block510 */
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
  ({ /* cicili#Let572 */
    __auto_type b  __attribute__((__cleanup__(__h_free_data_router ))) = Byte (11);
    __auto_type s  __attribute__((__cleanup__(__h_free_data_router ))) = Short (21);
    __auto_type i  __attribute__((__cleanup__(__h_free_data_router ))) = Int (31);
    // ----------
    printf ("test destructure of Integer\n");
  });
  { /* cicili#Let574 */
    aTuple tup0  = { 4400, 'A', 33};
    struct __ciciliS_576 tup1  = { 4401, 'B', 34};
    __auto_type tup2  = ((struct __ciciliS_578 ){ 4402, 'C', 35});
    // ----------
    print_tuple (tup0 );
    print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
    ({ /* cicili#Let586 */
      const __auto_type i  = (tup2 . __h_0_mem );
      const __auto_type c  = (tup2 . __h_1_mem );
      const __auto_type s  = (tup2 . __h_2_mem );
      // ----------
      /* cicili#Block588 */
      ({ /* cicili#Let590 */
        bool __h_case_result  = (s  >  10 );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let595 */
          const __auto_type i  = (tup2 . __h_0_mem );
          const __auto_type c  = (tup2 . __h_1_mem );
          const __auto_type s  = (tup2 . __h_2_mem );
          // ----------
          /* cicili#Block597 */
          ({ /* cicili#Let599 */
            bool __h_case_result  = true ;
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let604 */
              // ----------
              /* cicili#Block606 */
              fprintf (stdout , "No Tuple?!");
            }));
          });
        }));
      });
    });
  }
  { /* cicili#Let609 */
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
  { /* cicili#Let621 */
    __auto_type __h_data620  = Just_aTuple (((aTuple){ 55, 'D', 93}));
    // ----------
    /* cicili#Block624 */
    ({ /* cicili#Let626 */
      bool __h_case_result  = ((__h_data620 . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple inside maybe: Nothing");
      else
        { /* cicili#Let634 */
          __auto_type __h_match632_0_arg  = (((__h_data620 . __h_data ). Just ). __h_0_mem );
          __auto_type t  = __h_match632_0_arg ;
          const __auto_type i  = (t . __h_0_mem );
          const __auto_type c  = (t . __h_1_mem );
          const __auto_type s  = (t . __h_2_mem );
          // ----------
          /* cicili#Block636 */
          ({ /* cicili#Let638 */
            bool __h_case_result  = ((__h_data620 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let643 */
                const __auto_type ii  = (t . __h_0_mem );
                const __auto_type cc  = (t . __h_1_mem );
                const __auto_type ss  = (t . __h_2_mem );
                // ----------
                /* cicili#Block645 */
                ({ /* cicili#Let647 */
                  bool __h_case_result  = true ;
                  // ----------
                  if (__h_case_result )
                    ({ /* cicili#Progn650 */
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", ii , cc , ss );
                    });
                });
              }
          });
        }
    });
  }
  { /* cicili#Let657 */
    __auto_type __h_data656  = ((struct __ciciliS_659 ){ 5060, Just_char ('M')});
    const __auto_type Nothing  = (__h_data656 . __h_1_mem );
    // ----------
    /* cicili#Block661 */
    ({ /* cicili#Let663 */
      bool __h_case_result  = true ;
      // ----------
      if (__h_case_result )
        fprintf (stdout , "maybe inside tuple: Nothing\n");
      else
        { /* cicili#Let671 */
          const __auto_type i  = (__h_data656 . __h_0_mem );
          __auto_type __h_match669_1_arg  = (__h_data656 . __h_1_mem );
          __auto_type c  = (((__h_match669_1_arg . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block673 */
          ({ /* cicili#Let675 */
            bool __h_case_result  = (((__h_match669_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  >  'L' ) );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
            else
              { /* cicili#Let683 */
                __auto_type t  = __h_data656 ;
                __auto_type __h_match681_1_arg  = (t . __h_1_mem );
                __auto_type c  = (((__h_match681_1_arg . __h_data ). Just ). __h_0_mem );
                // ----------
                /* cicili#Block685 */
                ({ /* cicili#Let687 */
                  bool __h_case_result  = (((__h_match681_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  <  'L' ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Let693 */
                      const __auto_type i  = (t . __h_0_mem );
                      __auto_type __h_match691_1_arg  = (t . __h_1_mem );
                      // ----------
                      /* cicili#Block695 */
                      ({ /* cicili#Let697 */
                        bool __h_case_result  = ((__h_match691_1_arg . __h_ctor ) ==  __h_Just_t  );
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
  ({ /* cicili#Let702 */
    __auto_type hello  __attribute__((__cleanup__(__h_free_class_router ))) = new_String_Const ("Hello Haskell\n");
    __auto_type txt  __attribute__((__cleanup__(__h_free_class_router ))) = new_String_Const ("Haskell List");
    // ----------
    show_String (hello );
    fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let712 */
      __auto_type __h_data711  = nth_String (3, txt );
      __auto_type c  = (((__h_data711 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block714 */
      ({ /* cicili#Let716 */
        bool __h_case_result  = ((__h_data711 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let721 */
          // ----------
          /* cicili#Block723 */
          fprintf (stdout , "4th element not found\n");
        }));
      });
    }));
    ({ /* cicili#Progn732 */
      ({ /* cicili#Let741 */
        __auto_type __h_data740  = nth_String (4, txt );
        __auto_type c  = (((__h_data740 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block746 */
        ({ /* cicili#Let748 */
          bool __h_case_result  = ((__h_data740 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let753 */
            // ----------
            /* cicili#Block755 */
            fprintf (stdout , "%dth element not found\n", 4);
          }));
        });
      });
      ({ /* cicili#Let765 */
        __auto_type __h_data764  = nth_String (5, txt );
        __auto_type c  = (((__h_data764 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block770 */
        ({ /* cicili#Let772 */
          bool __h_case_result  = ((__h_data764 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let777 */
            // ----------
            /* cicili#Block779 */
            fprintf (stdout , "%dth element not found\n", 5);
          }));
        });
      });
      ({ /* cicili#Let789 */
        __auto_type __h_data788  = nth_String (6, txt );
        __auto_type c  = (((__h_data788 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block794 */
        ({ /* cicili#Let796 */
          bool __h_case_result  = ((__h_data788 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let801 */
            // ----------
            /* cicili#Block803 */
            fprintf (stdout , "%dth element not found\n", 6);
          }));
        });
      });
      ({ /* cicili#Let813 */
        __auto_type __h_data812  = nth_String (len_String (txt ), txt );
        __auto_type c  = (((__h_data812 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block818 */
        ({ /* cicili#Let820 */
          bool __h_case_result  = ((__h_data812 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", len_String (txt ), c ) : ({ /* cicili#Let825 */
            // ----------
            /* cicili#Block827 */
            fprintf (stdout , "%dth element not found\n", len_String (txt ));
          }));
        });
      });
    });
    fprintf (stdout , "output of letin: %d\n", ({ /* cicili#Let831 */
      __auto_type llen  = len_String (txt );
      // ----------
      ({ /* cicili#Progn838 */
        ({ /* cicili#Let847 */
          __auto_type __h_data846  = nth_List_char (4, txt );
          __auto_type c  = (((__h_data846 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block855 */
          ({ /* cicili#Let857 */
            bool __h_case_result  = ((__h_data846 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let862 */
              // ----------
              /* cicili#Block864 */
              fprintf (stdout , "%dth element not found\n", 4);
            }));
          });
        });
        ({ /* cicili#Let874 */
          __auto_type __h_data873  = nth_List_char (5, txt );
          __auto_type c  = (((__h_data873 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block882 */
          ({ /* cicili#Let884 */
            bool __h_case_result  = ((__h_data873 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let889 */
              // ----------
              /* cicili#Block891 */
              fprintf (stdout , "%dth element not found\n", 5);
            }));
          });
        });
        ({ /* cicili#Let901 */
          __auto_type __h_data900  = nth_List_char (6, txt );
          __auto_type c  = (((__h_data900 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block909 */
          ({ /* cicili#Let911 */
            bool __h_case_result  = ((__h_data900 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let916 */
              // ----------
              /* cicili#Block918 */
              fprintf (stdout , "%dth element not found\n", 6);
            }));
          });
        });
        ({ /* cicili#Let928 */
          __auto_type __h_data927  = nth_List_char (llen , txt );
          __auto_type c  = (((__h_data927 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block936 */
          ({ /* cicili#Let938 */
            bool __h_case_result  = ((__h_data927 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", llen , c ) : ({ /* cicili#Let943 */
              // ----------
              /* cicili#Block945 */
              fprintf (stdout , "%dth element not found\n", llen );
            }));
          });
        });
      });
    }));
    { /* cicili#Let950 */
      __auto_type head  = (((txt -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((txt -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block952 */
      ({ /* cicili#Let954 */
        bool __h_case_result  = ((txt -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , len_String (tail ));
      });
    }
    ({ /* cicili#Let959 */
      __auto_type str5  __attribute__((__cleanup__(__h_free_class_router ))) = new_List_char_Pure (((const char[]){ 'C', 'i', 'c', 'i', 'l', 'i'}), 6);
      // ----------
      fprintf (stdout , "has 'Cicili' desired length 5: %d\n", has_len_String (str5 , 5));
      fprintf (stdout , "has 'Cicili' desired length 6: %d\n", has_len_String (str5 , 6));
      fprintf (stdout , "has 'Cicili' desired length 7: %d\n", has_len_String (str5 , 7));
    });
    { /* cicili#Let969 */
      __auto_type __h_data968  = drop_String (12, txt );
      __auto_type __h_has_len  = has_len_List_char (__h_data968 , 3);
      typeof((((nth_List_char (0, __h_data968 ). __h_data ). Just ). __h_0_mem )) fst ;
      typeof((((nth_List_char (1, __h_data968 ). __h_data ). Just ). __h_0_mem )) snd ;
      typeof((((nth_List_char (2, __h_data968 ). __h_data ). Just ). __h_0_mem )) trd ;
      typeof(drop_List_char (3, __h_data968 )) tail ;
      // ----------
      if (__h_has_len  ==  3 )
        { /* cicili#Block977 */
          fst  = (((nth_List_char (0, __h_data968 ). __h_data ). Just ). __h_0_mem );
          snd  = (((nth_List_char (1, __h_data968 ). __h_data ). Just ). __h_0_mem );
          trd  = (((nth_List_char (2, __h_data968 ). __h_data ). Just ). __h_0_mem );
          tail  = drop_List_char (3, __h_data968 );
        }
      ({ /* cicili#Let983 */
        bool __h_case_result  = (__h_has_len  ==  3 );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first, second and third char from String: %c %c %c\n", fst , snd , trd );
        else
          { /* cicili#Let990 */
            __auto_type __h_has_len  = has_len_List_char (__h_data968 , 2);
            typeof((((nth_List_char (0, __h_data968 ). __h_data ). Just ). __h_0_mem )) fst ;
            typeof((((nth_List_char (1, __h_data968 ). __h_data ). Just ). __h_0_mem )) snd ;
            typeof(drop_List_char (2, __h_data968 )) tail ;
            // ----------
            if (__h_has_len  ==  2 )
              { /* cicili#Block997 */
                fst  = (((nth_List_char (0, __h_data968 ). __h_data ). Just ). __h_0_mem );
                snd  = (((nth_List_char (1, __h_data968 ). __h_data ). Just ). __h_0_mem );
                tail  = drop_List_char (2, __h_data968 );
              }
            ({ /* cicili#Let1002 */
              bool __h_case_result  = (__h_has_len  ==  2 );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "first and second char from String: %c %c\n", fst , snd );
              else
                { /* cicili#Let1009 */
                  __auto_type __h_has_len  = has_len_List_char (__h_data968 , 1);
                  typeof((((nth_List_char (0, __h_data968 ). __h_data ). Just ). __h_0_mem )) fst ;
                  typeof(drop_List_char (1, __h_data968 )) tail ;
                  // ----------
                  if (__h_has_len  ==  1 )
                    { /* cicili#Block1015 */
                      fst  = (((nth_List_char (0, __h_data968 ). __h_data ). Just ). __h_0_mem );
                      tail  = drop_List_char (1, __h_data968 );
                    }
                  ({ /* cicili#Let1019 */
                    bool __h_case_result  = (__h_has_len  ==  1 );
                    // ----------
                    if (__h_case_result )
                      fprintf (stdout , "first char from String: %c\n", fst );
                    else
                      { /* cicili#Let1026 */
                        // ----------
                        /* cicili#Block1028 */
                        fprintf (stdout , "default case String\n");
                      }
                  });
                }
            });
          }
      });
    }
  });
  { /* cicili#Let1031 */
    __auto_type intarr  = ((const int[]){ 4, 3, 2});
    // ----------
    ({ /* cicili#Let1034 */
      __auto_type ilist0  __attribute__((__cleanup__(__h_free_class_router ))) = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
      __auto_type ilist1  __attribute__((__cleanup__(__h_free_class_router ))) = __h_Cons_int_ctor (5, ilist0 );
      __auto_type ilist2  __attribute__((__cleanup__(__h_free_class_router ))) = append_List_int (ilist1 , ilist0 );
      __auto_type ilist3  __attribute__((__cleanup__(__h_free_class_router ))) = new_List_int_Pure (intarr , 3);
      __auto_type ilist4  __attribute__((__cleanup__(__h_free_class_router ))) = take_List_int (2, ilist2 );
      // ----------
      fprintf (stdout , "first elem of int list0: %d\n", ({ /* cicili#Let1054 */
        __auto_type __h_data1053  = nth_List_int (0, ilist0 );
        __auto_type i  = (((__h_data1053 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block1058 */
        ({ /* cicili#Let1060 */
          bool __h_case_result  = ((__h_data1053 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? i  : ({ /* cicili#Let1064 */
            // ----------
            /* cicili#Block1066 */
            -1;
          }));
        });
      }));
      fprintf (stdout , "first elem of int list1: %d\n", ({ /* cicili#Let1072 */
        __auto_type __h_data1071  = nth_List_int (0, ilist1 );
        __auto_type i  = (((__h_data1071 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block1076 */
        ({ /* cicili#Let1078 */
          bool __h_case_result  = ((__h_data1071 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? i  : ({ /* cicili#Let1082 */
            // ----------
            /* cicili#Block1084 */
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
      fprintf (stdout , "\nlist4: take 2 of list2:\n");
      show_List_int (ilist4 );
      putchar ('\n');
    });
  }
  ({ /* cicili#Let1092 */
    __auto_type ra0  __attribute__((__cleanup__(__h_free_class_router ))) = new_Range_int (1, 20, 3);
    __auto_type ra1  __attribute__((__cleanup__(__h_free_class_router ))) = take_Range_int (3, ra0 );
    __auto_type ra2  __attribute__((__cleanup__(__h_free_class_router ))) = take_Range_int (4, ra0 );
    __auto_type ra3  __attribute__((__cleanup__(__h_free_class_router ))) = take_Range_int (10, ra0 );
    __auto_type str0  __attribute__((__cleanup__(__h_free_class_router ))) = new_String_Const ("Hello World!");
    __auto_type str1  __attribute__((__cleanup__(__h_free_class_router ))) = new_List_int_Pure (((const int[]){ 72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 33}), 12);
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
