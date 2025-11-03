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
typedef struct Integer__H_Table {
  free_Integer_t freeData ;
} Integer__H_Table;
typedef struct Integer {
  const Integer__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion127 */
    struct { /* ciciliStruct128 */
      char __h_0_mem ;
    } Byte , _0 ;
    struct { /* ciciliStruct129 */
      short __h_0_mem ;
    } Short , _1 ;
    struct { /* ciciliStruct130 */
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
  { /* cicili#Let147 */
    __auto_type c  = (((this -> __h_data ). Byte ). __h_0_mem );
    // ----------
    /* cicili#Block149 */
    ({ /* cicili#Let151 */
      bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Byte_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "Integer was Byte:  %d\n", c );
      else
        { /* cicili#Let158 */
          __auto_type s  = (((this -> __h_data ). Short ). __h_0_mem );
          // ----------
          /* cicili#Block160 */
          ({ /* cicili#Let162 */
            bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Short_t  );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "Integer was Short: %d\n", s );
            else
              { /* cicili#Let169 */
                __auto_type i  = (((this -> __h_data ). Int ). __h_0_mem );
                // ----------
                /* cicili#Block171 */
                ({ /* cicili#Let173 */
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
const Integer__H_Table * const get_Integer__H_Table () {
  static const Integer__H_Table table  = { free_Integer };
  return (&table );
}
Integer Byte (char c ) {
  return ((Integer){ get_Integer__H_Table (), __h_Byte_t , .__h_data.Byte = { c }});
}
Integer Short (short s ) {
  return ((Integer){ get_Integer__H_Table (), __h_Short_t , .__h_data.Short = { s }});
}
Integer Int (int x ) {
  return ((Integer){ get_Integer__H_Table (), __h___t , .__h_data._ = { x }});
}
void show_Integer (Integer self ) {
  ({ /* cicili#Let192 */
    __auto_type c  = (((self . __h_data ). Byte ). __h_0_mem );
    // ----------
    /* cicili#Block194 */
    ({ /* cicili#Let196 */
      bool __h_case_result  = ((self . __h_ctor ) ==  __h_Byte_t  );
      // ----------
      ((__h_case_result ) ? fprintf (stdout , "Integer is Byte: %d\n", c ) : ({ /* cicili#Let201 */
          __auto_type sh  = (((self . __h_data ). Short ). __h_0_mem );
          // ----------
          /* cicili#Block203 */
          ({ /* cicili#Let205 */
            bool __h_case_result  = ((self . __h_ctor ) ==  __h_Short_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "Integer is Short: %d\n", sh ) : ({ /* cicili#Let210 */
                __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
                // ----------
                /* cicili#Block212 */
                ({ /* cicili#Let214 */
                  bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  (i  <  1000 ) );
                  // ----------
                  ((__h_case_result ) ? fprintf (stdout , "Integer is Int below 1000: %d\n", i ) : ({ /* cicili#Let219 */
                      __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
                      // ----------
                      /* cicili#Block221 */
                      ({ /* cicili#Let223 */
                        bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  ((i  >=  1000 ) &&  (i  <  10000 ) ) );
                        // ----------
                        ((__h_case_result ) ? fprintf (stdout , "Integer is Int between 1000 and 10000: %d\n", i ) : ({ /* cicili#Let228 */
                            // ----------
                            /* cicili#Block230 */
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
typedef struct Maybe_Maybe_char__H_Table {
  free_Maybe_Maybe_char_t freeData ;
} Maybe_Maybe_char__H_Table;
typedef struct Maybe_Maybe_char {
  const Maybe_Maybe_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion246 */
    struct { /* ciciliStruct247 */
    } Nothing , _0 ;
    struct { /* ciciliStruct248 */
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
const Maybe_Maybe_char__H_Table * const get_Maybe_Maybe_char__H_Table () {
  static const Maybe_Maybe_char__H_Table table  = { free_Maybe_Maybe_char };
  return (&table );
}
Maybe_Maybe_char Nothing_Maybe_char () {
  return ((Maybe_Maybe_char){ get_Maybe_Maybe_char__H_Table (), __h_Nothing_t });
}
Maybe_Maybe_char Just_Maybe_char (Maybe_char value ) {
  return ((Maybe_Maybe_char){ get_Maybe_Maybe_char__H_Table (), __h___t , .__h_data._ = { value }});
}
void print_inside_maybe (Maybe_Maybe_char mb ) {
  { /* cicili#Let284 */
    // ----------
    /* cicili#Block286 */
    ({ /* cicili#Let288 */
      bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "wrapper Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let295 */
          __auto_type mc  = (((mb . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block297 */
          ({ /* cicili#Let299 */
            bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let304 */
                // ----------
                /* cicili#Block306 */
                ({ /* cicili#Let308 */
                  bool __h_case_result  = ((mc . __h_ctor ) ==  __h_Nothing_t  );
                  // ----------
                  if (__h_case_result )
                    fprintf (stdout , "wrapper Just Nothing char: Nothing\n");
                  else
                    { /* cicili#Let315 */
                      __auto_type c  = (((mc . __h_data ). Just ). __h_0_mem );
                      // ----------
                      /* cicili#Block317 */
                      ({ /* cicili#Let319 */
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
  { /* cicili#Let327 */
    // ----------
    /* cicili#Block329 */
    ({ /* cicili#Let331 */
      bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "inner Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let338 */
          __auto_type Nothing  = (((imb . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block340 */
          ({ /* cicili#Let342 */
            bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "inner Just Nothing char: Nothing\n");
            else
              { /* cicili#Let350 */
                __auto_type __h_match348_0_arg  = (((imb . __h_data ). Just ). __h_0_mem );
                __auto_type c  = (((__h_match348_0_arg . __h_data ). Just ). __h_0_mem );
                // ----------
                /* cicili#Block352 */
                ({ /* cicili#Let354 */
                  bool __h_case_result  = (((imb . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match348_0_arg . __h_ctor ) ==  __h_Just_t  ) );
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
typedef struct __ciciliS_360 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_360;
typedef __ciciliS_360 aTuple ;
void print_tuple (aTuple tup ) {
  { /* cicili#Let364 */
    const __auto_type i  = (tup . __h_0_mem );
    const __auto_type c  = (tup . __h_1_mem );
    const __auto_type s  = (tup . __h_2_mem );
    // ----------
    /* cicili#Block366 */
    ({ /* cicili#Let368 */
      bool __h_case_result  = (s  >  10 );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
      else
        { /* cicili#Let375 */
          const __auto_type i  = (tup . __h_0_mem );
          const __auto_type c  = (tup . __h_1_mem );
          const __auto_type s  = (tup . __h_2_mem );
          // ----------
          /* cicili#Block377 */
          ({ /* cicili#Let379 */
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
typedef struct Maybe_aTuple__H_Table {
  free_Maybe_aTuple_t freeData ;
} Maybe_aTuple__H_Table;
typedef struct Maybe_aTuple {
  const Maybe_aTuple__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion395 */
    struct { /* ciciliStruct396 */
    } Nothing , _0 ;
    struct { /* ciciliStruct397 */
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
const Maybe_aTuple__H_Table * const get_Maybe_aTuple__H_Table () {
  static const Maybe_aTuple__H_Table table  = { free_Maybe_aTuple };
  return (&table );
}
Maybe_aTuple Nothing_aTuple () {
  return ((Maybe_aTuple){ get_Maybe_aTuple__H_Table (), __h_Nothing_t });
}
Maybe_aTuple Just_aTuple (aTuple value ) {
  return ((Maybe_aTuple){ get_Maybe_aTuple__H_Table (), __h___t , .__h_data._ = { value }});
}
int factorial (int n ) {
  return (((n  ==  1 )) ? 1 : (n  *  factorial ((n  -  1 )) ));
}
static int __ciciliL_526 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_534 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
typedef struct __ciciliS_623 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_623;
typedef struct __ciciliS_625 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_625;
typedef struct __ciciliS_706 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
} __ciciliS_706;
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
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_526 (2, 16));
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_534 (2, 16));
  fprintf (stdout , "output of function closure with $>: %d\n", (2 +  3 ));
  { /* cicili#Block548 */
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
  ({ /* cicili#Let610 */
    __auto_type b  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let612 */
      __auto_type tmp_obj  = Byte (11);
      // ----------
      ((void)((tmp_obj . __h_table )-> freeData ));
      tmp_obj ;
    });
    __auto_type s  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let615 */
      __auto_type tmp_obj  = Short (21);
      // ----------
      ((void)((tmp_obj . __h_table )-> freeData ));
      tmp_obj ;
    });
    __auto_type i  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let618 */
      __auto_type tmp_obj  = Int (31);
      // ----------
      ((void)((tmp_obj . __h_table )-> freeData ));
      tmp_obj ;
    });
    // ----------
    printf ("test destructure of Integer\n");
  });
  { /* cicili#Let621 */
    aTuple tup0  = { 4400, 'A', 33};
    struct __ciciliS_623 tup1  = { 4401, 'B', 34};
    __auto_type tup2  = ((struct __ciciliS_625 ){ 4402, 'C', 35});
    // ----------
    print_tuple (tup0 );
    print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
    ({ /* cicili#Let633 */
      const __auto_type i  = (tup2 . __h_0_mem );
      const __auto_type c  = (tup2 . __h_1_mem );
      const __auto_type s  = (tup2 . __h_2_mem );
      // ----------
      /* cicili#Block635 */
      ({ /* cicili#Let637 */
        bool __h_case_result  = (s  >  10 );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let642 */
            const __auto_type i  = (tup2 . __h_0_mem );
            const __auto_type c  = (tup2 . __h_1_mem );
            const __auto_type s  = (tup2 . __h_2_mem );
            // ----------
            /* cicili#Block644 */
            ({ /* cicili#Let646 */
              bool __h_case_result  = true ;
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let651 */
                  // ----------
                  /* cicili#Block653 */
                  fprintf (stdout , "No Tuple?!");
                }));
            });
          }));
      });
    });
  }
  { /* cicili#Let656 */
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
  { /* cicili#Let668 */
    __auto_type __h_data667  = Just_aTuple (((aTuple){ 55, 'D', 93}));
    // ----------
    /* cicili#Block671 */
    ({ /* cicili#Let673 */
      bool __h_case_result  = ((__h_data667 . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple inside maybe: Nothing");
      else
        { /* cicili#Let681 */
          __auto_type __h_match679_0_arg  = (((__h_data667 . __h_data ). Just ). __h_0_mem );
          __auto_type t  = __h_match679_0_arg ;
          const __auto_type i  = (t . __h_0_mem );
          const __auto_type c  = (t . __h_1_mem );
          const __auto_type s  = (t . __h_2_mem );
          // ----------
          /* cicili#Block683 */
          ({ /* cicili#Let685 */
            bool __h_case_result  = ((__h_data667 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let690 */
                const __auto_type ii  = (t . __h_0_mem );
                const __auto_type cc  = (t . __h_1_mem );
                const __auto_type ss  = (t . __h_2_mem );
                // ----------
                /* cicili#Block692 */
                ({ /* cicili#Let694 */
                  bool __h_case_result  = true ;
                  // ----------
                  if (__h_case_result )
                    ({ /* cicili#Progn697 */
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", ii , cc , ss );
                    });
                });
              }
          });
        }
    });
  }
  { /* cicili#Let704 */
    __auto_type __h_data703  = ((struct __ciciliS_706 ){ 5060, Just_char ('M')});
    const __auto_type Nothing  = (__h_data703 . __h_1_mem );
    // ----------
    /* cicili#Block708 */
    ({ /* cicili#Let710 */
      bool __h_case_result  = true ;
      // ----------
      if (__h_case_result )
        fprintf (stdout , "maybe inside tuple: Nothing\n");
      else
        { /* cicili#Let718 */
          const __auto_type i  = (__h_data703 . __h_0_mem );
          __auto_type __h_match716_1_arg  = (__h_data703 . __h_1_mem );
          __auto_type c  = (((__h_match716_1_arg . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block720 */
          ({ /* cicili#Let722 */
            bool __h_case_result  = (((__h_match716_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  >  'L' ) );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
            else
              { /* cicili#Let730 */
                __auto_type t  = __h_data703 ;
                __auto_type __h_match728_1_arg  = (t . __h_1_mem );
                __auto_type c  = (((__h_match728_1_arg . __h_data ). Just ). __h_0_mem );
                // ----------
                /* cicili#Block732 */
                ({ /* cicili#Let734 */
                  bool __h_case_result  = (((__h_match728_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  <  'L' ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Let740 */
                      const __auto_type i  = (t . __h_0_mem );
                      __auto_type __h_match738_1_arg  = (t . __h_1_mem );
                      // ----------
                      /* cicili#Block742 */
                      ({ /* cicili#Let744 */
                        bool __h_case_result  = ((__h_match738_1_arg . __h_ctor ) ==  __h_Just_t  );
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
  ({ /* cicili#Let749 */
    __auto_type txt  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let751 */
      __auto_type tmp_obj  = new_String_Const ("Haskell List");
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    // ----------
    show_String (txt );
    putchar ('\n');
    fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let760 */
        __auto_type __h_data759  = (txt -> __h_table -> nth )(3, txt );
        __auto_type c  = (((__h_data759 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block763 */
        ({ /* cicili#Let765 */
          bool __h_case_result  = ((__h_data759 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let770 */
              // ----------
              /* cicili#Block772 */
              fprintf (stdout , "4th element not found\n");
            }));
        });
      }));
    ({ /* cicili#Progn781 */
      ({ /* cicili#Let790 */
        __auto_type __h_data789  = (txt -> __h_table -> nth )(4, txt );
        __auto_type c  = (((__h_data789 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block796 */
        ({ /* cicili#Let798 */
          bool __h_case_result  = ((__h_data789 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let803 */
              // ----------
              /* cicili#Block805 */
              fprintf (stdout , "%dth element not found\n", 4);
            }));
        });
      });
      ({ /* cicili#Let815 */
        __auto_type __h_data814  = (txt -> __h_table -> nth )(5, txt );
        __auto_type c  = (((__h_data814 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block821 */
        ({ /* cicili#Let823 */
          bool __h_case_result  = ((__h_data814 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let828 */
              // ----------
              /* cicili#Block830 */
              fprintf (stdout , "%dth element not found\n", 5);
            }));
        });
      });
      ({ /* cicili#Let840 */
        __auto_type __h_data839  = (txt -> __h_table -> nth )(6, txt );
        __auto_type c  = (((__h_data839 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block846 */
        ({ /* cicili#Let848 */
          bool __h_case_result  = ((__h_data839 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let853 */
              // ----------
              /* cicili#Block855 */
              fprintf (stdout , "%dth element not found\n", 6);
            }));
        });
      });
      ({ /* cicili#Let865 */
        __auto_type __h_data864  = (txt -> __h_table -> nth )((txt -> __h_table -> len )(txt ), txt );
        __auto_type c  = (((__h_data864 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block872 */
        ({ /* cicili#Let874 */
          bool __h_case_result  = ((__h_data864 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", (txt -> __h_table -> len )(txt ), c ) : ({ /* cicili#Let880 */
              // ----------
              /* cicili#Block882 */
              fprintf (stdout , "%dth element not found\n", (txt -> __h_table -> len )(txt ));
            }));
        });
      });
    });
    fprintf (stdout , "output of letin: %d\n", ({ /* cicili#Let887 */
        __auto_type llen  = (txt -> __h_table -> len )(txt );
        // ----------
        ({ /* cicili#Progn895 */
          ({ /* cicili#Let904 */
            __auto_type __h_data903  = (txt -> __h_table -> nth )(4, txt );
            __auto_type c  = (((__h_data903 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block910 */
            ({ /* cicili#Let912 */
              bool __h_case_result  = ((__h_data903 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let917 */
                  // ----------
                  /* cicili#Block919 */
                  fprintf (stdout , "%dth element not found\n", 4);
                }));
            });
          });
          ({ /* cicili#Let929 */
            __auto_type __h_data928  = (txt -> __h_table -> nth )(5, txt );
            __auto_type c  = (((__h_data928 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block935 */
            ({ /* cicili#Let937 */
              bool __h_case_result  = ((__h_data928 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let942 */
                  // ----------
                  /* cicili#Block944 */
                  fprintf (stdout , "%dth element not found\n", 5);
                }));
            });
          });
          ({ /* cicili#Let954 */
            __auto_type __h_data953  = (txt -> __h_table -> nth )(6, txt );
            __auto_type c  = (((__h_data953 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block960 */
            ({ /* cicili#Let962 */
              bool __h_case_result  = ((__h_data953 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let967 */
                  // ----------
                  /* cicili#Block969 */
                  fprintf (stdout , "%dth element not found\n", 6);
                }));
            });
          });
          ({ /* cicili#Let979 */
            __auto_type __h_data978  = (txt -> __h_table -> nth )(llen , txt );
            __auto_type c  = (((__h_data978 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block985 */
            ({ /* cicili#Let987 */
              bool __h_case_result  = ((__h_data978 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", llen , c ) : ({ /* cicili#Let992 */
                  // ----------
                  /* cicili#Block994 */
                  fprintf (stdout , "%dth element not found\n", llen );
                }));
            });
          });
        });
      }));
    { /* cicili#Let999 */
      __auto_type head  = (((txt -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((txt -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1001 */
      ({ /* cicili#Let1003 */
        bool __h_case_result  = ((txt -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , (txt -> __h_table -> len )(tail ));
      });
    }
    ({ /* cicili#Let1009 */
      __auto_type str5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1011 */
        __auto_type tmp_obj  = new_List_char_Pure (((const char[]){ 'C', 'i', 'c', 'i', 'l', 'i'}), 6);
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      // ----------
      fprintf (stdout , "has 'Cicili' desired length 5: %d\n", (str5 -> __h_table -> hasLen )(str5 , 5));
      fprintf (stdout , "has 'Cicili' desired length 6: %d\n", (str5 -> __h_table -> hasLen )(str5 , 6));
      fprintf (stdout , "has 'Cicili' desired length 7: %d\n", (str5 -> __h_table -> hasLen )(str5 , 7));
    });
    { /* cicili#Let1025 */
      __auto_type __h_data1024  = (txt -> __h_table -> drop )(12, txt );
      __auto_type __h_has_len  = hasLen_List_char (__h_data1024 , 3);
      typeof((((nth_List_char (0, __h_data1024 ). __h_data ). Just ). __h_0_mem )) fst ;
      typeof((((nth_List_char (1, __h_data1024 ). __h_data ). Just ). __h_0_mem )) snd ;
      typeof((((nth_List_char (2, __h_data1024 ). __h_data ). Just ). __h_0_mem )) trd ;
      typeof(drop_List_char (3, __h_data1024 )) tail ;
      // ----------
      if (__h_has_len  ==  3 )
        { /* cicili#Block1034 */
          fst  = (((nth_List_char (0, __h_data1024 ). __h_data ). Just ). __h_0_mem );
          snd  = (((nth_List_char (1, __h_data1024 ). __h_data ). Just ). __h_0_mem );
          trd  = (((nth_List_char (2, __h_data1024 ). __h_data ). Just ). __h_0_mem );
          tail  = drop_List_char (3, __h_data1024 );
        }
      ({ /* cicili#Let1040 */
        bool __h_case_result  = (__h_has_len  ==  3 );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first, second and third char from String: %c %c %c\n", fst , snd , trd );
        else
          { /* cicili#Let1047 */
            __auto_type __h_has_len  = hasLen_List_char (__h_data1024 , 2);
            typeof((((nth_List_char (0, __h_data1024 ). __h_data ). Just ). __h_0_mem )) fst ;
            typeof((((nth_List_char (1, __h_data1024 ). __h_data ). Just ). __h_0_mem )) snd ;
            typeof(drop_List_char (2, __h_data1024 )) tail ;
            // ----------
            if (__h_has_len  ==  2 )
              { /* cicili#Block1054 */
                fst  = (((nth_List_char (0, __h_data1024 ). __h_data ). Just ). __h_0_mem );
                snd  = (((nth_List_char (1, __h_data1024 ). __h_data ). Just ). __h_0_mem );
                tail  = drop_List_char (2, __h_data1024 );
              }
            ({ /* cicili#Let1059 */
              bool __h_case_result  = (__h_has_len  ==  2 );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "first and second char from String: %c %c\n", fst , snd );
              else
                { /* cicili#Let1066 */
                  __auto_type __h_has_len  = hasLen_List_char (__h_data1024 , 1);
                  typeof((((nth_List_char (0, __h_data1024 ). __h_data ). Just ). __h_0_mem )) fst ;
                  typeof(drop_List_char (1, __h_data1024 )) tail ;
                  // ----------
                  if (__h_has_len  ==  1 )
                    { /* cicili#Block1072 */
                      fst  = (((nth_List_char (0, __h_data1024 ). __h_data ). Just ). __h_0_mem );
                      tail  = drop_List_char (1, __h_data1024 );
                    }
                  ({ /* cicili#Let1076 */
                    bool __h_case_result  = (__h_has_len  ==  1 );
                    // ----------
                    if (__h_case_result )
                      fprintf (stdout , "first char from String: %c\n", fst );
                    else
                      { /* cicili#Let1083 */
                        // ----------
                        /* cicili#Block1085 */
                        fprintf (stdout , "default case String\n");
                      }
                  });
                }
            });
          }
      });
    }
  });
  ({ /* cicili#Let1089 */
    __auto_type ilist0  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
    __auto_type ilist1  = (ilist0 -> __h_table -> push )(5, ilist0 );
    __auto_type intarr  = ((const int[]){ 8, 7, 6});
    __auto_type ilist2  = new_List_int_Pure (intarr , 3);
    // ----------
    ({ /* cicili#Let1097 */
      __auto_type ilist3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1099 */
        __auto_type tmp_obj  = (ilist0 -> __h_table -> append )(ilist2 , ilist1 );
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      __auto_type ilist4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1103 */
        __auto_type tmp_obj  = (ilist0 -> __h_table -> take )(5, ilist3 );
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      // ----------
      fprintf (stdout , "first elem of int list0: %d\n", ({ /* cicili#Let1111 */
          __auto_type __h_data1110  = (ilist0 -> __h_table -> head )(ilist0 );
          __auto_type i  = (((__h_data1110 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block1114 */
          ({ /* cicili#Let1116 */
            bool __h_case_result  = ((__h_data1110 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? i  : ({ /* cicili#Let1120 */
                // ----------
                /* cicili#Block1122 */
                -1;
              }));
          });
        }));
      fprintf (stdout , "first elem of int list1: %d\n", ({ /* cicili#Let1128 */
          __auto_type __h_data1127  = (ilist0 -> __h_table -> head )(ilist1 );
          __auto_type i  = (((__h_data1127 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block1131 */
          ({ /* cicili#Let1133 */
            bool __h_case_result  = ((__h_data1127 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? i  : ({ /* cicili#Let1137 */
                // ----------
                /* cicili#Block1139 */
                -1;
              }));
          });
        }));
      fprintf (stdout , "list0:\n");
      (ilist0 -> __h_table -> show )(ilist0 );
      fprintf (stdout , "\nlist1:\n");
      (ilist0 -> __h_table -> show )(ilist1 );
      fprintf (stdout , "\nlist2:\n");
      (ilist0 -> __h_table -> show )(ilist2 );
      fprintf (stdout , "\nlist3:\n");
      (ilist0 -> __h_table -> show )(ilist3 );
      fprintf (stdout , "\nlist4: take 5 of list3:\n");
      (ilist0 -> __h_table -> show )(ilist4 );
      putchar ('\n');
    });
  });
  ({ /* cicili#Let1152 */
    __auto_type ra0  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1154 */
      __auto_type tmp_obj  = new_Range_int (1, 20, 3);
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type ra1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1157 */
      __auto_type tmp_obj  = (ra0 -> __h_table -> take )(3, ra0 );
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type ra2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1161 */
      __auto_type tmp_obj  = (ra0 -> __h_table -> take )(4, ra0 );
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type ra3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1165 */
      __auto_type tmp_obj  = (ra0 -> __h_table -> take )(10, ra0 );
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type str0  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1169 */
      __auto_type tmp_obj  = new_String_Const ("Hello World!");
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type str1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1174 */
      __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 33}), 12);
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    // ----------
    fprintf (stdout , "range 1 20 3:\n");
    (ra0 -> __h_table -> show )(ra0 );
    fprintf (stdout , "\ntake 3  of range 1 20 3:\n");
    (ra0 -> __h_table -> show )(ra1 );
    fprintf (stdout , "\ntake 4  of range 1 20 3:\n");
    (ra0 -> __h_table -> show )(ra2 );
    fprintf (stdout , "\ntake 10 of range 1 20 3:\n");
    (str1 -> __h_table -> show )(((List_int)ra3 ));
    fprintf (stdout , "\nString to List^int:\n");
    (str1 -> __h_table -> show )(((List_int)str0 ));
    fprintf (stdout , "\nList^int to String:\n");
    show_String (((String)str1 ));
    putchar ('\n');
  });
}
