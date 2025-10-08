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
typedef enum __h_Integer_ctor_t {
  __h_Byte_t,
  __h_Short_t,
  __h_Int_t
} __h_Integer_ctor_t;
typedef struct Integer {
  __h_Integer_ctor_t __h_ctor ;
  union { /* ciciliUnion120 */
    struct { /* ciciliStruct121 */
      char __h_0_mem ;
    } Byte ;
    struct { /* ciciliStruct122 */
      short __h_0_mem ;
    } Short ;
    struct { /* ciciliStruct123 */
      int __h_0_mem ;
    } Int ;
  } __h_data ;
} Integer;
Integer Byte (char __h_0_mem );
Integer Short (short __h_0_mem );
Integer Int (int __h_0_mem );
Integer Byte (char __h_0_mem ) {
  return ((Integer){ __h_Byte_t , .__h_data.Byte = { __h_0_mem }});
}
Integer Short (short __h_0_mem ) {
  return ((Integer){ __h_Short_t , .__h_data.Short = { __h_0_mem }});
}
Integer Int (int __h_0_mem ) {
  return ((Integer){ __h_Int_t , .__h_data.Int = { __h_0_mem }});
}
void show_Integer (Integer self ) {
  ({ /* cicili#Let139 */
    __auto_type c  = (((self . __h_data ). Byte ). __h_0_mem );
    // ----------
    /* cicili#Block141 */
    ({ /* cicili#Let143 */
      bool __h_case_result  = ((self . __h_ctor ) ==  __h_Byte_t  );
      // ----------
      ((__h_case_result ) ? fprintf (stdout , "Integer is Byte: %d\n", c ) : ({ /* cicili#Let148 */
        __auto_type sh  = (((self . __h_data ). Short ). __h_0_mem );
        // ----------
        /* cicili#Block150 */
        ({ /* cicili#Let152 */
          bool __h_case_result  = ((self . __h_ctor ) ==  __h_Short_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "Integer is Short: %d\n", sh ) : ({ /* cicili#Let157 */
            __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
            // ----------
            /* cicili#Block159 */
            ({ /* cicili#Let161 */
              bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  (i  <  1000 ) );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "Integer is Int below 1000: %d\n", i ) : ({ /* cicili#Let166 */
                __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
                // ----------
                /* cicili#Block168 */
                ({ /* cicili#Let170 */
                  bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  ((i  >=  1000 ) &&  (i  <  10000 ) ) );
                  // ----------
                  ((__h_case_result ) ? fprintf (stdout , "Integer is Int between 1000 and 10000: %d\n", i ) : ({ /* cicili#Let175 */
                    // ----------
                    /* cicili#Block177 */
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
typedef struct Maybe_Maybe_char {
  Maybe __h_ctor ;
  union { /* ciciliUnion184 */
    struct { /* ciciliStruct185 */
    } Nothing ;
    struct { /* ciciliStruct186 */
      Maybe_char __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_Maybe_char;
Maybe_Maybe_char Nothing_Maybe_char ();
Maybe_Maybe_char Just_Maybe_char (Maybe_char value );
#endif /* __H_Maybe_Maybe_char */ 
Maybe_Maybe_char Nothing_Maybe_char () {
  return ((Maybe_Maybe_char){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_Maybe_char Just_Maybe_char (Maybe_char value ) {
  return ((Maybe_Maybe_char){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
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
typedef struct Maybe_aTuple {
  Maybe __h_ctor ;
  union { /* ciciliUnion312 */
    struct { /* ciciliStruct313 */
    } Nothing ;
    struct { /* ciciliStruct314 */
      aTuple __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_aTuple;
Maybe_aTuple Nothing_aTuple ();
Maybe_aTuple Just_aTuple (aTuple value );
#endif /* __H_Maybe_aTuple */ 
Maybe_aTuple Nothing_aTuple () {
  return ((Maybe_aTuple){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_aTuple Just_aTuple (aTuple value ) {
  return ((Maybe_aTuple){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
}
int factorial (int n ) {
  return (((n  ==  1 )) ? 1 : (n  *  factorial ((n  -  1 )) ));
}
static int __ciciliL_466 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_474 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
typedef struct __ciciliS_551 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_551;
typedef struct __ciciliS_553 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_553;
typedef struct __ciciliS_634 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
} __ciciliS_634;
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
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_466 (2, 16));
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_474 (2, 16));
  fprintf (stdout , "output of function closure with $>: %d\n", (2 +  3 ));
  { /* cicili#Block488 */
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
  { /* cicili#Let549 */
    aTuple tup0  = { 4400, 'A', 33};
    __ciciliS_551 tup1  = { 4401, 'B', 34};
    __auto_type tup2  = ((struct __ciciliS_553 ){ 4402, 'C', 35});
    // ----------
    print_tuple (tup0 );
    print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
    ({ /* cicili#Let561 */
      const __auto_type i  = (tup2 . __h_0_mem );
      const __auto_type c  = (tup2 . __h_1_mem );
      const __auto_type s  = (tup2 . __h_2_mem );
      // ----------
      /* cicili#Block563 */
      ({ /* cicili#Let565 */
        bool __h_case_result  = (s  >  10 );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let570 */
          const __auto_type i  = (tup2 . __h_0_mem );
          const __auto_type c  = (tup2 . __h_1_mem );
          const __auto_type s  = (tup2 . __h_2_mem );
          // ----------
          /* cicili#Block572 */
          ({ /* cicili#Let574 */
            bool __h_case_result  = true ;
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let579 */
              // ----------
              /* cicili#Block581 */
              fprintf (stdout , "No Tuple?!");
            }));
          });
        }));
      });
    });
  }
  { /* cicili#Let584 */
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
  { /* cicili#Let596 */
    __auto_type __h_data595  = Just_aTuple (((aTuple){ 55, 'D', 93}));
    // ----------
    /* cicili#Block599 */
    ({ /* cicili#Let601 */
      bool __h_case_result  = ((__h_data595 . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple inside maybe: Nothing");
      else
        { /* cicili#Let609 */
          __auto_type __h_match607_0_arg  = (((__h_data595 . __h_data ). Just ). __h_0_mem );
          __auto_type t  = __h_match607_0_arg ;
          const __auto_type i  = (t . __h_0_mem );
          const __auto_type c  = (t . __h_1_mem );
          const __auto_type s  = (t . __h_2_mem );
          // ----------
          /* cicili#Block611 */
          ({ /* cicili#Let613 */
            bool __h_case_result  = ((__h_data595 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let618 */
                const __auto_type ii  = (t . __h_0_mem );
                const __auto_type cc  = (t . __h_1_mem );
                const __auto_type ss  = (t . __h_2_mem );
                // ----------
                /* cicili#Block620 */
                ({ /* cicili#Let622 */
                  bool __h_case_result  = true ;
                  // ----------
                  if (__h_case_result )
                    ({ /* cicili#Progn625 */
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", ii , cc , ss );
                    });
                });
              }
          });
        }
    });
  }
  { /* cicili#Let632 */
    __auto_type __h_data631  = ((struct __ciciliS_634 ){ 5060, Just_char ('M')});
    const __auto_type Nothing  = (__h_data631 . __h_1_mem );
    // ----------
    /* cicili#Block636 */
    ({ /* cicili#Let638 */
      bool __h_case_result  = true ;
      // ----------
      if (__h_case_result )
        fprintf (stdout , "maybe inside tuple: Nothing\n");
      else
        { /* cicili#Let646 */
          const __auto_type i  = (__h_data631 . __h_0_mem );
          __auto_type __h_match644_1_arg  = (__h_data631 . __h_1_mem );
          __auto_type c  = (((__h_match644_1_arg . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block648 */
          ({ /* cicili#Let650 */
            bool __h_case_result  = (((__h_match644_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  >  'L' ) );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
            else
              { /* cicili#Let658 */
                __auto_type t  = __h_data631 ;
                __auto_type __h_match656_1_arg  = (t . __h_1_mem );
                __auto_type c  = (((__h_match656_1_arg . __h_data ). Just ). __h_0_mem );
                // ----------
                /* cicili#Block660 */
                ({ /* cicili#Let662 */
                  bool __h_case_result  = (((__h_match656_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  <  'L' ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Let668 */
                      const __auto_type i  = (t . __h_0_mem );
                      __auto_type __h_match666_1_arg  = (t . __h_1_mem );
                      // ----------
                      /* cicili#Block670 */
                      ({ /* cicili#Let672 */
                        bool __h_case_result  = ((__h_match666_1_arg . __h_ctor ) ==  __h_Just_t  );
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
  ({ /* cicili#Let677 */
    __auto_type hello  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Hello Haskell\n");
    __auto_type txt  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Haskell List");
    // ----------
    show_String (hello );
    fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let687 */
      __auto_type __h_data686  = nth_String (3, txt );
      __auto_type c  = (((__h_data686 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block689 */
      ({ /* cicili#Let691 */
        bool __h_case_result  = ((__h_data686 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let696 */
          // ----------
          /* cicili#Block698 */
          fprintf (stdout , "4th element not found\n");
        }));
      });
    }));
    ({ /* cicili#Progn707 */
      ({ /* cicili#Let716 */
        __auto_type __h_data715  = nth_String (4, txt );
        __auto_type c  = (((__h_data715 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block721 */
        ({ /* cicili#Let723 */
          bool __h_case_result  = ((__h_data715 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let728 */
            // ----------
            /* cicili#Block730 */
            fprintf (stdout , "%dth element not found\n", 4);
          }));
        });
      });
      ({ /* cicili#Let740 */
        __auto_type __h_data739  = nth_String (5, txt );
        __auto_type c  = (((__h_data739 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block745 */
        ({ /* cicili#Let747 */
          bool __h_case_result  = ((__h_data739 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let752 */
            // ----------
            /* cicili#Block754 */
            fprintf (stdout , "%dth element not found\n", 5);
          }));
        });
      });
      ({ /* cicili#Let764 */
        __auto_type __h_data763  = nth_String (6, txt );
        __auto_type c  = (((__h_data763 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block769 */
        ({ /* cicili#Let771 */
          bool __h_case_result  = ((__h_data763 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let776 */
            // ----------
            /* cicili#Block778 */
            fprintf (stdout , "%dth element not found\n", 6);
          }));
        });
      });
      ({ /* cicili#Let788 */
        __auto_type __h_data787  = nth_String (len_String (txt ), txt );
        __auto_type c  = (((__h_data787 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block793 */
        ({ /* cicili#Let795 */
          bool __h_case_result  = ((__h_data787 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", len_String (txt ), c ) : ({ /* cicili#Let800 */
            // ----------
            /* cicili#Block802 */
            fprintf (stdout , "%dth element not found\n", len_String (txt ));
          }));
        });
      });
    });
    fprintf (stdout , "output of letin: %d\n", ({ /* cicili#Let807 */
      __auto_type llen  = len_String (txt );
      // ----------
      ({ /* cicili#Progn814 */
        ({ /* cicili#Let823 */
          __auto_type __h_data822  = nth_String (4, txt );
          __auto_type c  = (((__h_data822 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block831 */
          ({ /* cicili#Let833 */
            bool __h_case_result  = ((__h_data822 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let838 */
              // ----------
              /* cicili#Block840 */
              fprintf (stdout , "%dth element not found\n", 4);
            }));
          });
        });
        ({ /* cicili#Let850 */
          __auto_type __h_data849  = nth_String (5, txt );
          __auto_type c  = (((__h_data849 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block858 */
          ({ /* cicili#Let860 */
            bool __h_case_result  = ((__h_data849 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let865 */
              // ----------
              /* cicili#Block867 */
              fprintf (stdout , "%dth element not found\n", 5);
            }));
          });
        });
        ({ /* cicili#Let877 */
          __auto_type __h_data876  = nth_String (6, txt );
          __auto_type c  = (((__h_data876 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block885 */
          ({ /* cicili#Let887 */
            bool __h_case_result  = ((__h_data876 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let892 */
              // ----------
              /* cicili#Block894 */
              fprintf (stdout , "%dth element not found\n", 6);
            }));
          });
        });
        ({ /* cicili#Let904 */
          __auto_type __h_data903  = nth_String (llen , txt );
          __auto_type c  = (((__h_data903 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block912 */
          ({ /* cicili#Let914 */
            bool __h_case_result  = ((__h_data903 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", llen , c ) : ({ /* cicili#Let919 */
              // ----------
              /* cicili#Block921 */
              fprintf (stdout , "%dth element not found\n", llen );
            }));
          });
        });
      });
    }));
    { /* cicili#Let927 */
      __auto_type __h_match925_0_arg  = (((txt . __h_data ). Just ). __h_0_mem );
      __auto_type str  = __h_match925_0_arg ;
      __auto_type head  = (((str -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((str -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block929 */
      ({ /* cicili#Let931 */
        bool __h_case_result  = (((txt . __h_ctor ) ==  __h_Just_t  ) &&  ((str -> __h_ctor ) ==  __h___t  ) );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , len_String (tail ));
      });
    }
    ({ /* cicili#Let936 */
      __auto_type str5  __attribute__((__cleanup__(free_String ))) = new_String_Pure (((const char[]){ 'C', 'i', 'c', 'i', 'l', 'i', '\0'}), 7);
      // ----------
      fprintf (stdout , "has 'Cicili' desired length 5: %d\n", has_len_String (str5 , 5));
      fprintf (stdout , "has 'Cicili' desired length 6: %d\n", has_len_String (str5 , 6));
      fprintf (stdout , "has 'Cicili' desired length 7: %d\n", has_len_String (str5 , 7));
    });
    { /* cicili#Let947 */
      __auto_type __h_data945  = drop_String (12, txt );
      __auto_type __h_match944_0_arg  = (((__h_data945 . __h_data ). Just ). __h_0_mem );
      typeof(has_len_Cons_char (__h_match944_0_arg , 3)) __h_has_len ;
      typeof((((nth_Cons_char (0, __h_match944_0_arg ). __h_data ). Just ). __h_0_mem )) fst ;
      typeof((((nth_Cons_char (1, __h_match944_0_arg ). __h_data ). Just ). __h_0_mem )) snd ;
      typeof((((nth_Cons_char (2, __h_match944_0_arg ). __h_data ). Just ). __h_0_mem )) trd ;
      typeof(drop_Cons_char (3, __h_match944_0_arg )) tail ;
      // ----------
      if ((__h_data945 . __h_ctor ) ==  __h_Just_t  )
        { /* cicili#Block955 */
          __h_has_len  = has_len_Cons_char (__h_match944_0_arg , 3);
          fst  = (((nth_Cons_char (0, __h_match944_0_arg ). __h_data ). Just ). __h_0_mem );
          snd  = (((nth_Cons_char (1, __h_match944_0_arg ). __h_data ). Just ). __h_0_mem );
          trd  = (((nth_Cons_char (2, __h_match944_0_arg ). __h_data ). Just ). __h_0_mem );
          tail  = drop_Cons_char (3, __h_match944_0_arg );
        }
      ({ /* cicili#Let962 */
        bool __h_case_result  = (((__h_data945 . __h_ctor ) ==  __h_Just_t  ) &&  (__h_has_len  ==  3 ) );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first, second and third char from String: %c %c %c\n", fst , snd , trd );
        else
          { /* cicili#Let970 */
            __auto_type __h_match968_0_arg  = (((__h_data945 . __h_data ). Just ). __h_0_mem );
            typeof(has_len_Cons_char (__h_match968_0_arg , 2)) __h_has_len ;
            typeof((((nth_Cons_char (0, __h_match968_0_arg ). __h_data ). Just ). __h_0_mem )) fst ;
            typeof((((nth_Cons_char (1, __h_match968_0_arg ). __h_data ). Just ). __h_0_mem )) snd ;
            typeof(drop_Cons_char (2, __h_match968_0_arg )) tail ;
            // ----------
            if ((__h_data945 . __h_ctor ) ==  __h_Just_t  )
              { /* cicili#Block977 */
                __h_has_len  = has_len_Cons_char (__h_match968_0_arg , 2);
                fst  = (((nth_Cons_char (0, __h_match968_0_arg ). __h_data ). Just ). __h_0_mem );
                snd  = (((nth_Cons_char (1, __h_match968_0_arg ). __h_data ). Just ). __h_0_mem );
                tail  = drop_Cons_char (2, __h_match968_0_arg );
              }
            ({ /* cicili#Let983 */
              bool __h_case_result  = (((__h_data945 . __h_ctor ) ==  __h_Just_t  ) &&  (__h_has_len  ==  2 ) );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "first and second char from String: %c %c\n", fst , snd );
              else
                { /* cicili#Let991 */
                  __auto_type __h_match989_0_arg  = (((__h_data945 . __h_data ). Just ). __h_0_mem );
                  typeof(has_len_Cons_char (__h_match989_0_arg , 1)) __h_has_len ;
                  typeof((((nth_Cons_char (0, __h_match989_0_arg ). __h_data ). Just ). __h_0_mem )) fst ;
                  typeof(drop_Cons_char (1, __h_match989_0_arg )) tail ;
                  // ----------
                  if ((__h_data945 . __h_ctor ) ==  __h_Just_t  )
                    { /* cicili#Block997 */
                      __h_has_len  = has_len_Cons_char (__h_match989_0_arg , 1);
                      fst  = (((nth_Cons_char (0, __h_match989_0_arg ). __h_data ). Just ). __h_0_mem );
                      tail  = drop_Cons_char (1, __h_match989_0_arg );
                    }
                  ({ /* cicili#Let1002 */
                    bool __h_case_result  = (((__h_data945 . __h_ctor ) ==  __h_Just_t  ) &&  (__h_has_len  ==  1 ) );
                    // ----------
                    if (__h_case_result )
                      fprintf (stdout , "first char from String: %c\n", fst );
                    else
                      { /* cicili#Let1009 */
                        // ----------
                        /* cicili#Block1011 */
                        fprintf (stdout , "default case String\n");
                      }
                  });
                }
            });
          }
      });
    }
  });
  ({ /* cicili#Let1015 */
    __auto_type ilist0  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
    __auto_type ilist1  __attribute__((__cleanup__(free_List_int ))) = Just_List_int (__h_Cons_int_ctor (5, ilist0 ));
    __auto_type ilist2  __attribute__((__cleanup__(free_List_int ))) = append_List_int (ilist1 , ilist0 );
    __auto_type intarr  = ((const int[]){ 4, 3, 2});
    __auto_type ilist3  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (intarr , 3);
    __auto_type ilist4  __attribute__((__cleanup__(free_List_int ))) = take_List_int (2, ilist2 );
    // ----------
    fprintf (stdout , "first elem of int list0: %d\n", ({ /* cicili#Let1040 */
      __auto_type __h_data1039  = nth_List_int (0, ilist0 );
      __auto_type i  = (((__h_data1039 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1044 */
      ({ /* cicili#Let1046 */
        bool __h_case_result  = ((__h_data1039 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? i  : ({ /* cicili#Let1050 */
          // ----------
          /* cicili#Block1052 */
          -1;
        }));
      });
    }));
    fprintf (stdout , "first elem of int list1: %d\n", ({ /* cicili#Let1058 */
      __auto_type __h_data1057  = nth_List_int (0, ilist1 );
      __auto_type i  = (((__h_data1057 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1062 */
      ({ /* cicili#Let1064 */
        bool __h_case_result  = ((__h_data1057 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? i  : ({ /* cicili#Let1068 */
          // ----------
          /* cicili#Block1070 */
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
  ({ /* cicili#Let1078 */
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
    show_List_int (((Maybe_List_int)(*((Maybe_List_int *)(&ra3 )))));
    fprintf (stdout , "\nString to List^int:\n");
    show_List_int (((Maybe_List_int)(*((Maybe_List_int *)(&str0 )))));
    fprintf (stdout , "\nList^int to String:\n");
    show_String (((Maybe_String)(*((Maybe_String *)(&str1 )))));
    putchar ('\n');
  });
}
