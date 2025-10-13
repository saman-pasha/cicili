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
typedef struct Integer {
  char __h_ctor ;
  union { /* ciciliUnion121 */
    struct { /* ciciliStruct122 */
      char __h_0_mem ;
    } Byte , _0 ;
    struct { /* ciciliStruct123 */
      short __h_0_mem ;
    } Short , _1 ;
    struct { /* ciciliStruct124 */
      int __h_0_mem ;
    } Int , _ ;
  } __h_data ;
} Integer;
Integer Byte (char __h_0_mem );
Integer Short (short __h_0_mem );
Integer Int (int __h_0_mem );
Integer Byte (char c ) {
  return ((Integer){ __h_Byte_t , .__h_data.Byte = { c }});
}
Integer Short (short s ) {
  return ((Integer){ __h_Short_t , .__h_data.Short = { s }});
}
Integer Int (int x ) {
  return ((Integer){ __h___t , .__h_data._ = { x }});
}
void show_Integer (Integer self ) {
  ({ /* cicili#Let140 */
    __auto_type c  = (((self . __h_data ). Byte ). __h_0_mem );
    // ----------
    /* cicili#Block142 */
    ({ /* cicili#Let144 */
      bool __h_case_result  = ((self . __h_ctor ) ==  __h_Byte_t  );
      // ----------
      ((__h_case_result ) ? fprintf (stdout , "Integer is Byte: %d\n", c ) : ({ /* cicili#Let149 */
        __auto_type sh  = (((self . __h_data ). Short ). __h_0_mem );
        // ----------
        /* cicili#Block151 */
        ({ /* cicili#Let153 */
          bool __h_case_result  = ((self . __h_ctor ) ==  __h_Short_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "Integer is Short: %d\n", sh ) : ({ /* cicili#Let158 */
            __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
            // ----------
            /* cicili#Block160 */
            ({ /* cicili#Let162 */
              bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  (i  <  1000 ) );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "Integer is Int below 1000: %d\n", i ) : ({ /* cicili#Let167 */
                __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
                // ----------
                /* cicili#Block169 */
                ({ /* cicili#Let171 */
                  bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  ((i  >=  1000 ) &&  (i  <  10000 ) ) );
                  // ----------
                  ((__h_case_result ) ? fprintf (stdout , "Integer is Int between 1000 and 10000: %d\n", i ) : ({ /* cicili#Let176 */
                    // ----------
                    /* cicili#Block178 */
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
typedef struct Maybe_Maybe_char {
  char __h_ctor ;
  union { /* ciciliUnion188 */
    struct { /* ciciliStruct189 */
    } Nothing , _0 ;
    struct { /* ciciliStruct190 */
      Maybe_char __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_Maybe_char;
Maybe_Maybe_char Nothing_Maybe_char ();
Maybe_Maybe_char Just_Maybe_char (Maybe_char __h_0_mem );
#endif /* __H_Maybe_Maybe_char */ 
Maybe_Maybe_char Nothing_Maybe_char () {
  return ((Maybe_Maybe_char){ __h_Nothing_t });
}
Maybe_Maybe_char Just_Maybe_char (Maybe_char value ) {
  return ((Maybe_Maybe_char){ __h___t , .__h_data._ = { value }});
}
void print_inside_maybe (Maybe_Maybe_char mb ) {
  { /* cicili#Let209 */
    // ----------
    /* cicili#Block211 */
    ({ /* cicili#Let213 */
      bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "wrapper Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let220 */
          __auto_type mc  = (((mb . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block222 */
          ({ /* cicili#Let224 */
            bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let229 */
                // ----------
                /* cicili#Block231 */
                ({ /* cicili#Let233 */
                  bool __h_case_result  = ((mc . __h_ctor ) ==  __h_Nothing_t  );
                  // ----------
                  if (__h_case_result )
                    fprintf (stdout , "wrapper Just Nothing char: Nothing\n");
                  else
                    { /* cicili#Let240 */
                      __auto_type c  = (((mc . __h_data ). Just ). __h_0_mem );
                      // ----------
                      /* cicili#Block242 */
                      ({ /* cicili#Let244 */
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
  { /* cicili#Let252 */
    // ----------
    /* cicili#Block254 */
    ({ /* cicili#Let256 */
      bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "inner Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let263 */
          __auto_type Nothing  = (((imb . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block265 */
          ({ /* cicili#Let267 */
            bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "inner Just Nothing char: Nothing\n");
            else
              { /* cicili#Let275 */
                __auto_type __h_match273_0_arg  = (((imb . __h_data ). Just ). __h_0_mem );
                __auto_type c  = (((__h_match273_0_arg . __h_data ). Just ). __h_0_mem );
                // ----------
                /* cicili#Block277 */
                ({ /* cicili#Let279 */
                  bool __h_case_result  = (((imb . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match273_0_arg . __h_ctor ) ==  __h_Just_t  ) );
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
typedef struct __ciciliS_285 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_285;
typedef __ciciliS_285 aTuple ;
void print_tuple (aTuple tup ) {
  { /* cicili#Let289 */
    const __auto_type i  = (tup . __h_0_mem );
    const __auto_type c  = (tup . __h_1_mem );
    const __auto_type s  = (tup . __h_2_mem );
    // ----------
    /* cicili#Block291 */
    ({ /* cicili#Let293 */
      bool __h_case_result  = (s  >  10 );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
      else
        { /* cicili#Let300 */
          const __auto_type i  = (tup . __h_0_mem );
          const __auto_type c  = (tup . __h_1_mem );
          const __auto_type s  = (tup . __h_2_mem );
          // ----------
          /* cicili#Block302 */
          ({ /* cicili#Let304 */
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
typedef struct Maybe_aTuple {
  char __h_ctor ;
  union { /* ciciliUnion314 */
    struct { /* ciciliStruct315 */
    } Nothing , _0 ;
    struct { /* ciciliStruct316 */
      aTuple __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_aTuple;
Maybe_aTuple Nothing_aTuple ();
Maybe_aTuple Just_aTuple (aTuple __h_0_mem );
#endif /* __H_Maybe_aTuple */ 
Maybe_aTuple Nothing_aTuple () {
  return ((Maybe_aTuple){ __h_Nothing_t });
}
Maybe_aTuple Just_aTuple (aTuple value ) {
  return ((Maybe_aTuple){ __h___t , .__h_data._ = { value }});
}
int factorial (int n ) {
  return (((n  ==  1 )) ? 1 : (n  *  factorial ((n  -  1 )) ));
}
static int __ciciliL_431 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_439 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
typedef struct __ciciliS_516 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_516;
typedef struct __ciciliS_518 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_518;
typedef struct __ciciliS_599 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
} __ciciliS_599;
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
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_431 (2, 16));
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_439 (2, 16));
  fprintf (stdout , "output of function closure with $>: %d\n", (2 +  3 ));
  { /* cicili#Block453 */
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
  { /* cicili#Let514 */
    aTuple tup0  = { 4400, 'A', 33};
    struct __ciciliS_516 tup1  = { 4401, 'B', 34};
    __auto_type tup2  = ((struct __ciciliS_518 ){ 4402, 'C', 35});
    // ----------
    print_tuple (tup0 );
    print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
    ({ /* cicili#Let526 */
      const __auto_type i  = (tup2 . __h_0_mem );
      const __auto_type c  = (tup2 . __h_1_mem );
      const __auto_type s  = (tup2 . __h_2_mem );
      // ----------
      /* cicili#Block528 */
      ({ /* cicili#Let530 */
        bool __h_case_result  = (s  >  10 );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let535 */
          const __auto_type i  = (tup2 . __h_0_mem );
          const __auto_type c  = (tup2 . __h_1_mem );
          const __auto_type s  = (tup2 . __h_2_mem );
          // ----------
          /* cicili#Block537 */
          ({ /* cicili#Let539 */
            bool __h_case_result  = true ;
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let544 */
              // ----------
              /* cicili#Block546 */
              fprintf (stdout , "No Tuple?!");
            }));
          });
        }));
      });
    });
  }
  { /* cicili#Let549 */
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
  { /* cicili#Let561 */
    __auto_type __h_data560  = Just_aTuple (((aTuple){ 55, 'D', 93}));
    // ----------
    /* cicili#Block564 */
    ({ /* cicili#Let566 */
      bool __h_case_result  = ((__h_data560 . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple inside maybe: Nothing");
      else
        { /* cicili#Let574 */
          __auto_type __h_match572_0_arg  = (((__h_data560 . __h_data ). Just ). __h_0_mem );
          __auto_type t  = __h_match572_0_arg ;
          const __auto_type i  = (t . __h_0_mem );
          const __auto_type c  = (t . __h_1_mem );
          const __auto_type s  = (t . __h_2_mem );
          // ----------
          /* cicili#Block576 */
          ({ /* cicili#Let578 */
            bool __h_case_result  = ((__h_data560 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let583 */
                const __auto_type ii  = (t . __h_0_mem );
                const __auto_type cc  = (t . __h_1_mem );
                const __auto_type ss  = (t . __h_2_mem );
                // ----------
                /* cicili#Block585 */
                ({ /* cicili#Let587 */
                  bool __h_case_result  = true ;
                  // ----------
                  if (__h_case_result )
                    ({ /* cicili#Progn590 */
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", ii , cc , ss );
                    });
                });
              }
          });
        }
    });
  }
  { /* cicili#Let597 */
    __auto_type __h_data596  = ((struct __ciciliS_599 ){ 5060, Just_char ('M')});
    const __auto_type Nothing  = (__h_data596 . __h_1_mem );
    // ----------
    /* cicili#Block601 */
    ({ /* cicili#Let603 */
      bool __h_case_result  = true ;
      // ----------
      if (__h_case_result )
        fprintf (stdout , "maybe inside tuple: Nothing\n");
      else
        { /* cicili#Let611 */
          const __auto_type i  = (__h_data596 . __h_0_mem );
          __auto_type __h_match609_1_arg  = (__h_data596 . __h_1_mem );
          __auto_type c  = (((__h_match609_1_arg . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block613 */
          ({ /* cicili#Let615 */
            bool __h_case_result  = (((__h_match609_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  >  'L' ) );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
            else
              { /* cicili#Let623 */
                __auto_type t  = __h_data596 ;
                __auto_type __h_match621_1_arg  = (t . __h_1_mem );
                __auto_type c  = (((__h_match621_1_arg . __h_data ). Just ). __h_0_mem );
                // ----------
                /* cicili#Block625 */
                ({ /* cicili#Let627 */
                  bool __h_case_result  = (((__h_match621_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  <  'L' ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Let633 */
                      const __auto_type i  = (t . __h_0_mem );
                      __auto_type __h_match631_1_arg  = (t . __h_1_mem );
                      // ----------
                      /* cicili#Block635 */
                      ({ /* cicili#Let637 */
                        bool __h_case_result  = ((__h_match631_1_arg . __h_ctor ) ==  __h_Just_t  );
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
  ({ /* cicili#Let642 */
    __auto_type hello  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Hello Haskell\n");
    __auto_type txt  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Haskell List");
    // ----------
    show_String (hello );
    fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let652 */
      __auto_type __h_data651  = nth_String (3, txt );
      __auto_type c  = (((__h_data651 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block654 */
      ({ /* cicili#Let656 */
        bool __h_case_result  = ((__h_data651 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let661 */
          // ----------
          /* cicili#Block663 */
          fprintf (stdout , "4th element not found\n");
        }));
      });
    }));
    ({ /* cicili#Progn672 */
      ({ /* cicili#Let681 */
        __auto_type __h_data680  = nth_String (4, txt );
        __auto_type c  = (((__h_data680 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block686 */
        ({ /* cicili#Let688 */
          bool __h_case_result  = ((__h_data680 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let693 */
            // ----------
            /* cicili#Block695 */
            fprintf (stdout , "%dth element not found\n", 4);
          }));
        });
      });
      ({ /* cicili#Let705 */
        __auto_type __h_data704  = nth_String (5, txt );
        __auto_type c  = (((__h_data704 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block710 */
        ({ /* cicili#Let712 */
          bool __h_case_result  = ((__h_data704 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let717 */
            // ----------
            /* cicili#Block719 */
            fprintf (stdout , "%dth element not found\n", 5);
          }));
        });
      });
      ({ /* cicili#Let729 */
        __auto_type __h_data728  = nth_String (6, txt );
        __auto_type c  = (((__h_data728 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block734 */
        ({ /* cicili#Let736 */
          bool __h_case_result  = ((__h_data728 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let741 */
            // ----------
            /* cicili#Block743 */
            fprintf (stdout , "%dth element not found\n", 6);
          }));
        });
      });
      ({ /* cicili#Let753 */
        __auto_type __h_data752  = nth_String (len_String (txt ), txt );
        __auto_type c  = (((__h_data752 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block758 */
        ({ /* cicili#Let760 */
          bool __h_case_result  = ((__h_data752 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", len_String (txt ), c ) : ({ /* cicili#Let765 */
            // ----------
            /* cicili#Block767 */
            fprintf (stdout , "%dth element not found\n", len_String (txt ));
          }));
        });
      });
    });
    fprintf (stdout , "output of letin: %d\n", ({ /* cicili#Let772 */
      __auto_type llen  = len_String (txt );
      // ----------
      ({ /* cicili#Progn779 */
        ({ /* cicili#Let788 */
          __auto_type __h_data787  = nth_List_char (4, txt );
          __auto_type c  = (((__h_data787 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block796 */
          ({ /* cicili#Let798 */
            bool __h_case_result  = ((__h_data787 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let803 */
              // ----------
              /* cicili#Block805 */
              fprintf (stdout , "%dth element not found\n", 4);
            }));
          });
        });
        ({ /* cicili#Let815 */
          __auto_type __h_data814  = nth_List_char (5, txt );
          __auto_type c  = (((__h_data814 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block823 */
          ({ /* cicili#Let825 */
            bool __h_case_result  = ((__h_data814 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let830 */
              // ----------
              /* cicili#Block832 */
              fprintf (stdout , "%dth element not found\n", 5);
            }));
          });
        });
        ({ /* cicili#Let842 */
          __auto_type __h_data841  = nth_List_char (6, txt );
          __auto_type c  = (((__h_data841 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block850 */
          ({ /* cicili#Let852 */
            bool __h_case_result  = ((__h_data841 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let857 */
              // ----------
              /* cicili#Block859 */
              fprintf (stdout , "%dth element not found\n", 6);
            }));
          });
        });
        ({ /* cicili#Let869 */
          __auto_type __h_data868  = nth_List_char (llen , txt );
          __auto_type c  = (((__h_data868 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block877 */
          ({ /* cicili#Let879 */
            bool __h_case_result  = ((__h_data868 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", llen , c ) : ({ /* cicili#Let884 */
              // ----------
              /* cicili#Block886 */
              fprintf (stdout , "%dth element not found\n", llen );
            }));
          });
        });
      });
    }));
    { /* cicili#Let891 */
      __auto_type head  = (((txt -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((txt -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block893 */
      ({ /* cicili#Let895 */
        bool __h_case_result  = ((txt -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , len_String (tail ));
      });
    }
    ({ /* cicili#Let900 */
      __auto_type str5  __attribute__((__cleanup__(free_String ))) = new_List_char_Pure (((const char[]){ 'C', 'i', 'c', 'i', 'l', 'i', '\0'}), 7);
      // ----------
      fprintf (stdout , "has 'Cicili' desired length 5: %d\n", has_len_String (str5 , 5));
      fprintf (stdout , "has 'Cicili' desired length 6: %d\n", has_len_String (str5 , 6));
      fprintf (stdout , "has 'Cicili' desired length 7: %d\n", has_len_String (str5 , 7));
    });
    { /* cicili#Let910 */
      __auto_type __h_data909  = drop_String (12, txt );
      __auto_type __h_has_len  = has_len_List_char (__h_data909 , 3);
      typeof((((nth_List_char (0, __h_data909 ). __h_data ). Just ). __h_0_mem )) fst ;
      typeof((((nth_List_char (1, __h_data909 ). __h_data ). Just ). __h_0_mem )) snd ;
      typeof((((nth_List_char (2, __h_data909 ). __h_data ). Just ). __h_0_mem )) trd ;
      typeof(drop_List_char (3, __h_data909 )) tail ;
      // ----------
      if (__h_has_len  ==  3 )
        { /* cicili#Block918 */
          fst  = (((nth_List_char (0, __h_data909 ). __h_data ). Just ). __h_0_mem );
          snd  = (((nth_List_char (1, __h_data909 ). __h_data ). Just ). __h_0_mem );
          trd  = (((nth_List_char (2, __h_data909 ). __h_data ). Just ). __h_0_mem );
          tail  = drop_List_char (3, __h_data909 );
        }
      ({ /* cicili#Let924 */
        bool __h_case_result  = (__h_has_len  ==  3 );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first, second and third char from String: %c %c %c\n", fst , snd , trd );
        else
          { /* cicili#Let931 */
            __auto_type __h_has_len  = has_len_List_char (__h_data909 , 2);
            typeof((((nth_List_char (0, __h_data909 ). __h_data ). Just ). __h_0_mem )) fst ;
            typeof((((nth_List_char (1, __h_data909 ). __h_data ). Just ). __h_0_mem )) snd ;
            typeof(drop_List_char (2, __h_data909 )) tail ;
            // ----------
            if (__h_has_len  ==  2 )
              { /* cicili#Block938 */
                fst  = (((nth_List_char (0, __h_data909 ). __h_data ). Just ). __h_0_mem );
                snd  = (((nth_List_char (1, __h_data909 ). __h_data ). Just ). __h_0_mem );
                tail  = drop_List_char (2, __h_data909 );
              }
            ({ /* cicili#Let943 */
              bool __h_case_result  = (__h_has_len  ==  2 );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "first and second char from String: %c %c\n", fst , snd );
              else
                { /* cicili#Let950 */
                  __auto_type __h_has_len  = has_len_List_char (__h_data909 , 1);
                  typeof((((nth_List_char (0, __h_data909 ). __h_data ). Just ). __h_0_mem )) fst ;
                  typeof(drop_List_char (1, __h_data909 )) tail ;
                  // ----------
                  if (__h_has_len  ==  1 )
                    { /* cicili#Block956 */
                      fst  = (((nth_List_char (0, __h_data909 ). __h_data ). Just ). __h_0_mem );
                      tail  = drop_List_char (1, __h_data909 );
                    }
                  ({ /* cicili#Let960 */
                    bool __h_case_result  = (__h_has_len  ==  1 );
                    // ----------
                    if (__h_case_result )
                      fprintf (stdout , "first char from String: %c\n", fst );
                    else
                      { /* cicili#Let967 */
                        // ----------
                        /* cicili#Block969 */
                        fprintf (stdout , "default case String\n");
                      }
                  });
                }
            });
          }
      });
    }
  });
  ({ /* cicili#Let973 */
    __auto_type ilist0  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
    __auto_type ilist1  __attribute__((__cleanup__(free_List_int ))) = __h_Cons_int_ctor (5, ilist0 );
    __auto_type ilist2  __attribute__((__cleanup__(free_List_int ))) = append_List_int (ilist1 , ilist0 );
    __auto_type intarr  = ((const int[]){ 4, 3, 2});
    __auto_type ilist3  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (intarr , 3);
    __auto_type ilist4  __attribute__((__cleanup__(free_List_int ))) = take_List_int (2, ilist2 );
    // ----------
    fprintf (stdout , "first elem of int list0: %d\n", ({ /* cicili#Let993 */
      __auto_type __h_data992  = nth_List_int (0, ilist0 );
      __auto_type i  = (((__h_data992 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block997 */
      ({ /* cicili#Let999 */
        bool __h_case_result  = ((__h_data992 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? i  : ({ /* cicili#Let1003 */
          // ----------
          /* cicili#Block1005 */
          -1;
        }));
      });
    }));
    fprintf (stdout , "first elem of int list1: %d\n", ({ /* cicili#Let1011 */
      __auto_type __h_data1010  = nth_List_int (0, ilist1 );
      __auto_type i  = (((__h_data1010 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1015 */
      ({ /* cicili#Let1017 */
        bool __h_case_result  = ((__h_data1010 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? i  : ({ /* cicili#Let1021 */
          // ----------
          /* cicili#Block1023 */
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
  ({ /* cicili#Let1031 */
    __auto_type ra0  __attribute__((__cleanup__(free_Range_int ))) = new_Range_int (1, 20, 3);
    __auto_type ra1  __attribute__((__cleanup__(free_Range_int ))) = take_Range_int (3, ra0 );
    __auto_type ra2  __attribute__((__cleanup__(free_Range_int ))) = take_Range_int (4, ra0 );
    __auto_type ra3  __attribute__((__cleanup__(free_Range_int ))) = take_Range_int (10, ra0 );
    __auto_type str0  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Hello World!");
    __auto_type str1  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 33}), 12);
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
