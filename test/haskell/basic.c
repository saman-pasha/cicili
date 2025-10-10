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
  __h_Byte_t,
  __h_Short_t,
  __h_Int_t
} __h_Integer_ctor_t;
#endif /* __H___h_Integer_ctor_t__ */ 
typedef struct Integer {
  __h_Integer_ctor_t __h_ctor ;
  union { /* ciciliUnion121 */
    struct { /* ciciliStruct122 */
      char __h_0_mem ;
    } Byte ;
    struct { /* ciciliStruct123 */
      short __h_0_mem ;
    } Short ;
    struct { /* ciciliStruct124 */
      int __h_0_mem ;
    } Int ;
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
  return ((Integer){ __h_Int_t , .__h_data.Int = { x }});
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
  __h_Nothing_t,
  __h_Just_t
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Maybe_char {
  __h_Maybe_ctor_t __h_ctor ;
  union { /* ciciliUnion188 */
    struct { /* ciciliStruct189 */
    } Nothing ;
    struct { /* ciciliStruct190 */
      Maybe_char __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_Maybe_char;
Maybe_Maybe_char Nothing_Maybe_char ();
Maybe_Maybe_char Just_Maybe_char (Maybe_char __h_0_mem );
#endif /* __H_Maybe_Maybe_char */ 
Maybe_Maybe_char Nothing_Maybe_char () {
  return ((Maybe_Maybe_char){ __h_Nothing_t });
}
Maybe_Maybe_char Just_Maybe_char (Maybe_char value ) {
  return ((Maybe_Maybe_char){ __h_Just_t , .__h_data.Just = { value }});
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
  __h_Nothing_t,
  __h_Just_t
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_aTuple {
  __h_Maybe_ctor_t __h_ctor ;
  union { /* ciciliUnion314 */
    struct { /* ciciliStruct315 */
    } Nothing ;
    struct { /* ciciliStruct316 */
      aTuple __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_aTuple;
Maybe_aTuple Nothing_aTuple ();
Maybe_aTuple Just_aTuple (aTuple __h_0_mem );
#endif /* __H_Maybe_aTuple */ 
Maybe_aTuple Nothing_aTuple () {
  return ((Maybe_aTuple){ __h_Nothing_t });
}
Maybe_aTuple Just_aTuple (aTuple value ) {
  return ((Maybe_aTuple){ __h_Just_t , .__h_data.Just = { value }});
}
int factorial (int n ) {
  return (((n  ==  1 )) ? 1 : (n  *  factorial ((n  -  1 )) ));
}
;
;
;
static int __ciciliL_478 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_486 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
typedef struct __ciciliS_563 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_563;
typedef struct __ciciliS_565 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_565;
typedef struct __ciciliS_646 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
} __ciciliS_646;
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
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_478 (2, 16));
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_486 (2, 16));
  fprintf (stdout , "output of function closure with $>: %d\n", (2 +  3 ));
  { /* cicili#Block500 */
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
  { /* cicili#Let561 */
    aTuple tup0  = { 4400, 'A', 33};
    struct __ciciliS_563 tup1  = { 4401, 'B', 34};
    __auto_type tup2  = ((struct __ciciliS_565 ){ 4402, 'C', 35});
    // ----------
    print_tuple (tup0 );
    print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
    ({ /* cicili#Let573 */
      const __auto_type i  = (tup2 . __h_0_mem );
      const __auto_type c  = (tup2 . __h_1_mem );
      const __auto_type s  = (tup2 . __h_2_mem );
      // ----------
      /* cicili#Block575 */
      ({ /* cicili#Let577 */
        bool __h_case_result  = (s  >  10 );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let582 */
          const __auto_type i  = (tup2 . __h_0_mem );
          const __auto_type c  = (tup2 . __h_1_mem );
          const __auto_type s  = (tup2 . __h_2_mem );
          // ----------
          /* cicili#Block584 */
          ({ /* cicili#Let586 */
            bool __h_case_result  = true ;
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let591 */
              // ----------
              /* cicili#Block593 */
              fprintf (stdout , "No Tuple?!");
            }));
          });
        }));
      });
    });
  }
  { /* cicili#Let596 */
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
  { /* cicili#Let608 */
    __auto_type __h_data607  = Just_aTuple (((aTuple){ 55, 'D', 93}));
    // ----------
    /* cicili#Block611 */
    ({ /* cicili#Let613 */
      bool __h_case_result  = ((__h_data607 . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple inside maybe: Nothing");
      else
        { /* cicili#Let621 */
          __auto_type __h_match619_0_arg  = (((__h_data607 . __h_data ). Just ). __h_0_mem );
          __auto_type t  = __h_match619_0_arg ;
          const __auto_type i  = (t . __h_0_mem );
          const __auto_type c  = (t . __h_1_mem );
          const __auto_type s  = (t . __h_2_mem );
          // ----------
          /* cicili#Block623 */
          ({ /* cicili#Let625 */
            bool __h_case_result  = ((__h_data607 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let630 */
                const __auto_type ii  = (t . __h_0_mem );
                const __auto_type cc  = (t . __h_1_mem );
                const __auto_type ss  = (t . __h_2_mem );
                // ----------
                /* cicili#Block632 */
                ({ /* cicili#Let634 */
                  bool __h_case_result  = true ;
                  // ----------
                  if (__h_case_result )
                    ({ /* cicili#Progn637 */
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", ii , cc , ss );
                    });
                });
              }
          });
        }
    });
  }
  { /* cicili#Let644 */
    __auto_type __h_data643  = ((struct __ciciliS_646 ){ 5060, Just_char ('M')});
    const __auto_type Nothing  = (__h_data643 . __h_1_mem );
    // ----------
    /* cicili#Block648 */
    ({ /* cicili#Let650 */
      bool __h_case_result  = true ;
      // ----------
      if (__h_case_result )
        fprintf (stdout , "maybe inside tuple: Nothing\n");
      else
        { /* cicili#Let658 */
          const __auto_type i  = (__h_data643 . __h_0_mem );
          __auto_type __h_match656_1_arg  = (__h_data643 . __h_1_mem );
          __auto_type c  = (((__h_match656_1_arg . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block660 */
          ({ /* cicili#Let662 */
            bool __h_case_result  = (((__h_match656_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  >  'L' ) );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
            else
              { /* cicili#Let670 */
                __auto_type t  = __h_data643 ;
                __auto_type __h_match668_1_arg  = (t . __h_1_mem );
                __auto_type c  = (((__h_match668_1_arg . __h_data ). Just ). __h_0_mem );
                // ----------
                /* cicili#Block672 */
                ({ /* cicili#Let674 */
                  bool __h_case_result  = (((__h_match668_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  <  'L' ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Let680 */
                      const __auto_type i  = (t . __h_0_mem );
                      __auto_type __h_match678_1_arg  = (t . __h_1_mem );
                      // ----------
                      /* cicili#Block682 */
                      ({ /* cicili#Let684 */
                        bool __h_case_result  = ((__h_match678_1_arg . __h_ctor ) ==  __h_Just_t  );
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
  ({ /* cicili#Let689 */
    __auto_type hello  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Hello Haskell\n");
    __auto_type txt  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Haskell List");
    // ----------
    show_String (hello );
    fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let699 */
      __auto_type __h_data698  = nth_List_char (3, txt );
      __auto_type c  = (((__h_data698 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block701 */
      ({ /* cicili#Let703 */
        bool __h_case_result  = ((__h_data698 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let708 */
          // ----------
          /* cicili#Block710 */
          fprintf (stdout , "4th element not found\n");
        }));
      });
    }));
    ({ /* cicili#Progn719 */
      ({ /* cicili#Let728 */
        __auto_type __h_data727  = nth_List_char (4, txt );
        __auto_type c  = (((__h_data727 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block733 */
        ({ /* cicili#Let735 */
          bool __h_case_result  = ((__h_data727 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let740 */
            // ----------
            /* cicili#Block742 */
            fprintf (stdout , "%dth element not found\n", 4);
          }));
        });
      });
      ({ /* cicili#Let752 */
        __auto_type __h_data751  = nth_List_char (5, txt );
        __auto_type c  = (((__h_data751 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block757 */
        ({ /* cicili#Let759 */
          bool __h_case_result  = ((__h_data751 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let764 */
            // ----------
            /* cicili#Block766 */
            fprintf (stdout , "%dth element not found\n", 5);
          }));
        });
      });
      ({ /* cicili#Let776 */
        __auto_type __h_data775  = nth_List_char (6, txt );
        __auto_type c  = (((__h_data775 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block781 */
        ({ /* cicili#Let783 */
          bool __h_case_result  = ((__h_data775 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let788 */
            // ----------
            /* cicili#Block790 */
            fprintf (stdout , "%dth element not found\n", 6);
          }));
        });
      });
      ({ /* cicili#Let800 */
        __auto_type __h_data799  = nth_List_char (len_List_char (txt ), txt );
        __auto_type c  = (((__h_data799 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block805 */
        ({ /* cicili#Let807 */
          bool __h_case_result  = ((__h_data799 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", len_List_char (txt ), c ) : ({ /* cicili#Let812 */
            // ----------
            /* cicili#Block814 */
            fprintf (stdout , "%dth element not found\n", len_List_char (txt ));
          }));
        });
      });
    });
    fprintf (stdout , "output of letin: %d\n", ({ /* cicili#Let819 */
      __auto_type llen  = len_List_char (txt );
      // ----------
      ({ /* cicili#Progn826 */
        ({ /* cicili#Let835 */
          __auto_type __h_data834  = nth_List_char (4, txt );
          __auto_type c  = (((__h_data834 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block843 */
          ({ /* cicili#Let845 */
            bool __h_case_result  = ((__h_data834 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let850 */
              // ----------
              /* cicili#Block852 */
              fprintf (stdout , "%dth element not found\n", 4);
            }));
          });
        });
        ({ /* cicili#Let862 */
          __auto_type __h_data861  = nth_List_char (5, txt );
          __auto_type c  = (((__h_data861 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block870 */
          ({ /* cicili#Let872 */
            bool __h_case_result  = ((__h_data861 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let877 */
              // ----------
              /* cicili#Block879 */
              fprintf (stdout , "%dth element not found\n", 5);
            }));
          });
        });
        ({ /* cicili#Let889 */
          __auto_type __h_data888  = nth_List_char (6, txt );
          __auto_type c  = (((__h_data888 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block897 */
          ({ /* cicili#Let899 */
            bool __h_case_result  = ((__h_data888 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let904 */
              // ----------
              /* cicili#Block906 */
              fprintf (stdout , "%dth element not found\n", 6);
            }));
          });
        });
        ({ /* cicili#Let916 */
          __auto_type __h_data915  = nth_List_char (llen , txt );
          __auto_type c  = (((__h_data915 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block924 */
          ({ /* cicili#Let926 */
            bool __h_case_result  = ((__h_data915 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", llen , c ) : ({ /* cicili#Let931 */
              // ----------
              /* cicili#Block933 */
              fprintf (stdout , "%dth element not found\n", llen );
            }));
          });
        });
      });
    }));
    { /* cicili#Let938 */
      __auto_type head  = (((txt -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((txt -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block940 */
      ({ /* cicili#Let942 */
        bool __h_case_result  = ((txt -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , len_List_char (tail ));
      });
    }
    ({ /* cicili#Let947 */
      __auto_type str5  __attribute__((__cleanup__(free_String ))) = new_List_char_Pure (((const char[]){ 'C', 'i', 'c', 'i', 'l', 'i', '\0'}), 7);
      // ----------
      fprintf (stdout , "has 'Cicili' desired length 5: %d\n", has_len_List_char (str5 , 5));
      fprintf (stdout , "has 'Cicili' desired length 6: %d\n", has_len_List_char (str5 , 6));
      fprintf (stdout , "has 'Cicili' desired length 7: %d\n", has_len_List_char (str5 , 7));
    });
    { /* cicili#Let957 */
      __auto_type __h_data956  = drop_List_char (12, txt );
      __auto_type __h_has_len  = has_len_List_char (__h_data956 , 3);
      typeof((((nth_List_char (0, __h_data956 ). __h_data ). Just ). __h_0_mem )) fst ;
      typeof((((nth_List_char (1, __h_data956 ). __h_data ). Just ). __h_0_mem )) snd ;
      typeof((((nth_List_char (2, __h_data956 ). __h_data ). Just ). __h_0_mem )) trd ;
      typeof(drop_List_char (3, __h_data956 )) tail ;
      // ----------
      if (__h_has_len  ==  3 )
        { /* cicili#Block965 */
          fst  = (((nth_List_char (0, __h_data956 ). __h_data ). Just ). __h_0_mem );
          snd  = (((nth_List_char (1, __h_data956 ). __h_data ). Just ). __h_0_mem );
          trd  = (((nth_List_char (2, __h_data956 ). __h_data ). Just ). __h_0_mem );
          tail  = drop_List_char (3, __h_data956 );
        }
      ({ /* cicili#Let971 */
        bool __h_case_result  = (__h_has_len  ==  3 );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first, second and third char from String: %c %c %c\n", fst , snd , trd );
        else
          { /* cicili#Let978 */
            __auto_type __h_has_len  = has_len_List_char (__h_data956 , 2);
            typeof((((nth_List_char (0, __h_data956 ). __h_data ). Just ). __h_0_mem )) fst ;
            typeof((((nth_List_char (1, __h_data956 ). __h_data ). Just ). __h_0_mem )) snd ;
            typeof(drop_List_char (2, __h_data956 )) tail ;
            // ----------
            if (__h_has_len  ==  2 )
              { /* cicili#Block985 */
                fst  = (((nth_List_char (0, __h_data956 ). __h_data ). Just ). __h_0_mem );
                snd  = (((nth_List_char (1, __h_data956 ). __h_data ). Just ). __h_0_mem );
                tail  = drop_List_char (2, __h_data956 );
              }
            ({ /* cicili#Let990 */
              bool __h_case_result  = (__h_has_len  ==  2 );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "first and second char from String: %c %c\n", fst , snd );
              else
                { /* cicili#Let997 */
                  __auto_type __h_has_len  = has_len_List_char (__h_data956 , 1);
                  typeof((((nth_List_char (0, __h_data956 ). __h_data ). Just ). __h_0_mem )) fst ;
                  typeof(drop_List_char (1, __h_data956 )) tail ;
                  // ----------
                  if (__h_has_len  ==  1 )
                    { /* cicili#Block1003 */
                      fst  = (((nth_List_char (0, __h_data956 ). __h_data ). Just ). __h_0_mem );
                      tail  = drop_List_char (1, __h_data956 );
                    }
                  ({ /* cicili#Let1007 */
                    bool __h_case_result  = (__h_has_len  ==  1 );
                    // ----------
                    if (__h_case_result )
                      fprintf (stdout , "first char from String: %c\n", fst );
                    else
                      { /* cicili#Let1014 */
                        // ----------
                        /* cicili#Block1016 */
                        fprintf (stdout , "default case String\n");
                      }
                  });
                }
            });
          }
      });
    }
  });
  ({ /* cicili#Let1020 */
    __auto_type ilist0  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
    __auto_type ilist1  __attribute__((__cleanup__(free_List_int ))) = __h_Cons_int_ctor (5, ilist0 );
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
    show_List_int (((List_int *)ra3 ));
    fprintf (stdout , "\nString to List^int:\n");
    show_List_int (((List_int *)str0 ));
    fprintf (stdout , "\nList^int to String:\n");
    show_String (((List_char *)str1 ));
    putchar ('\n');
  });
}
