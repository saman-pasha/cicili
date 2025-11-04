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
#ifndef __Integer__H_DECL__
#define __Integer__H_DECL__
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
const Integer__H_Table * const get_Integer__H_Table ();
void free_Integer (Integer * this );
#endif /* __Integer__H_DECL__ */ 
#ifndef __Integer__H_IMPL__
#define __Integer__H_IMPL__
void free_Integer (Integer * this ) {
  { /* cicili#Let150 */
    __auto_type c  = (((this -> __h_data ). Byte ). __h_0_mem );
    // ----------
    /* cicili#Block152 */
    ({ /* cicili#Let154 */
      bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Byte_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "Integer was Byte:  %d\n", c );
      else
        { /* cicili#Let161 */
          __auto_type s  = (((this -> __h_data ). Short ). __h_0_mem );
          // ----------
          /* cicili#Block163 */
          ({ /* cicili#Let165 */
            bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Short_t  );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "Integer was Short: %d\n", s );
            else
              { /* cicili#Let172 */
                __auto_type i  = (((this -> __h_data ). Int ). __h_0_mem );
                // ----------
                /* cicili#Block174 */
                ({ /* cicili#Let176 */
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
#endif /* __Integer__H_IMPL__ */ 
void show_Integer (Integer self ) {
  ({ /* cicili#Let195 */
    __auto_type c  = (((self . __h_data ). Byte ). __h_0_mem );
    // ----------
    /* cicili#Block197 */
    ({ /* cicili#Let199 */
      bool __h_case_result  = ((self . __h_ctor ) ==  __h_Byte_t  );
      // ----------
      ((__h_case_result ) ? fprintf (stdout , "Integer is Byte: %d\n", c ) : ({ /* cicili#Let204 */
          __auto_type sh  = (((self . __h_data ). Short ). __h_0_mem );
          // ----------
          /* cicili#Block206 */
          ({ /* cicili#Let208 */
            bool __h_case_result  = ((self . __h_ctor ) ==  __h_Short_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "Integer is Short: %d\n", sh ) : ({ /* cicili#Let213 */
                __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
                // ----------
                /* cicili#Block215 */
                ({ /* cicili#Let217 */
                  bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  (i  <  1000 ) );
                  // ----------
                  ((__h_case_result ) ? fprintf (stdout , "Integer is Int below 1000: %d\n", i ) : ({ /* cicili#Let222 */
                      __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
                      // ----------
                      /* cicili#Block224 */
                      ({ /* cicili#Let226 */
                        bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  ((i  >=  1000 ) &&  (i  <  10000 ) ) );
                        // ----------
                        ((__h_case_result ) ? fprintf (stdout , "Integer is Int between 1000 and 10000: %d\n", i ) : ({ /* cicili#Let231 */
                            // ----------
                            /* cicili#Block233 */
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
#ifndef __Maybe_Maybe_char__H_DECL__
#define __Maybe_Maybe_char__H_DECL__
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
  union { /* ciciliUnion248 */
    struct { /* ciciliStruct249 */
    } Nothing , _0 ;
    struct { /* ciciliStruct250 */
      Maybe_char __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_Maybe_char;
Maybe_Maybe_char Nothing_Maybe_char ();
Maybe_Maybe_char Just_Maybe_char (Maybe_char value );
__attribute__((weak)) Maybe_Maybe_char Default_Maybe_Maybe_char (Maybe_char value ) {
  return Just_Maybe_char (value );
}
const Maybe_Maybe_char__H_Table * const get_Maybe_Maybe_char__H_Table ();
void free_Maybe_Maybe_char (Maybe_Maybe_char * this );
#endif /* __Maybe_Maybe_char__H_DECL__ */ 
#ifndef __Maybe_Maybe_char__H_IMPL__
#define __Maybe_Maybe_char__H_IMPL__
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
#endif /* __Maybe_Maybe_char__H_IMPL__ */ 
void print_inside_maybe (Maybe_Maybe_char mb ) {
  { /* cicili#Let289 */
    // ----------
    /* cicili#Block291 */
    ({ /* cicili#Let293 */
      bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "wrapper Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let300 */
          __auto_type mc  = (((mb . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block302 */
          ({ /* cicili#Let304 */
            bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let309 */
                // ----------
                /* cicili#Block311 */
                ({ /* cicili#Let313 */
                  bool __h_case_result  = ((mc . __h_ctor ) ==  __h_Nothing_t  );
                  // ----------
                  if (__h_case_result )
                    fprintf (stdout , "wrapper Just Nothing char: Nothing\n");
                  else
                    { /* cicili#Let320 */
                      __auto_type c  = (((mc . __h_data ). Just ). __h_0_mem );
                      // ----------
                      /* cicili#Block322 */
                      ({ /* cicili#Let324 */
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
  { /* cicili#Let332 */
    // ----------
    /* cicili#Block334 */
    ({ /* cicili#Let336 */
      bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "inner Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let343 */
          __auto_type Nothing  = (((imb . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block345 */
          ({ /* cicili#Let347 */
            bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "inner Just Nothing char: Nothing\n");
            else
              { /* cicili#Let355 */
                __auto_type __h_match353_0_arg  = (((imb . __h_data ). Just ). __h_0_mem );
                __auto_type c  = (((__h_match353_0_arg . __h_data ). Just ). __h_0_mem );
                // ----------
                /* cicili#Block357 */
                ({ /* cicili#Let359 */
                  bool __h_case_result  = (((imb . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match353_0_arg . __h_ctor ) ==  __h_Just_t  ) );
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
typedef struct __ciciliS_365 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_365;
typedef __ciciliS_365 aTuple ;
void print_tuple (aTuple tup ) {
  { /* cicili#Let369 */
    const __auto_type i  = (tup . __h_0_mem );
    const __auto_type c  = (tup . __h_1_mem );
    const __auto_type s  = (tup . __h_2_mem );
    // ----------
    /* cicili#Block371 */
    ({ /* cicili#Let373 */
      bool __h_case_result  = (s  >  10 );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
      else
        { /* cicili#Let380 */
          const __auto_type i  = (tup . __h_0_mem );
          const __auto_type c  = (tup . __h_1_mem );
          const __auto_type s  = (tup . __h_2_mem );
          // ----------
          /* cicili#Block382 */
          ({ /* cicili#Let384 */
            bool __h_case_result  = true ;
            // ----------
            if (__h_case_result )
              fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
          });
        }
    });
  }
}
#ifndef __Maybe_aTuple__H_DECL__
#define __Maybe_aTuple__H_DECL__
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
  union { /* ciciliUnion399 */
    struct { /* ciciliStruct400 */
    } Nothing , _0 ;
    struct { /* ciciliStruct401 */
      aTuple __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_aTuple;
Maybe_aTuple Nothing_aTuple ();
Maybe_aTuple Just_aTuple (aTuple value );
__attribute__((weak)) Maybe_aTuple Default_Maybe_aTuple (aTuple value ) {
  return Just_aTuple (value );
}
const Maybe_aTuple__H_Table * const get_Maybe_aTuple__H_Table ();
void free_Maybe_aTuple (Maybe_aTuple * this );
#endif /* __Maybe_aTuple__H_DECL__ */ 
#ifndef __Maybe_aTuple__H_IMPL__
#define __Maybe_aTuple__H_IMPL__
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
#endif /* __Maybe_aTuple__H_IMPL__ */ 
int factorial (int n ) {
  return (((n  ==  1 )) ? 1 : (n  *  factorial ((n  -  1 )) ));
}
static int __ciciliL_533 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_541 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
typedef struct __ciciliS_630 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_630;
typedef struct __ciciliS_632 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_632;
typedef struct __ciciliS_713 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
} __ciciliS_713;
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
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_533 (2, 16));
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_541 (2, 16));
  fprintf (stdout , "output of function closure with $>: %d\n", (2 +  3 ));
  { /* cicili#Block555 */
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
  ({ /* cicili#Let617 */
    __auto_type b  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let619 */
      __auto_type tmp_obj  = Byte (11);
      // ----------
      ((void)((tmp_obj . __h_table )-> freeData ));
      tmp_obj ;
    });
    __auto_type s  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let622 */
      __auto_type tmp_obj  = Short (21);
      // ----------
      ((void)((tmp_obj . __h_table )-> freeData ));
      tmp_obj ;
    });
    __auto_type i  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let625 */
      __auto_type tmp_obj  = Int (31);
      // ----------
      ((void)((tmp_obj . __h_table )-> freeData ));
      tmp_obj ;
    });
    // ----------
    printf ("test destructure of Integer\n");
  });
  { /* cicili#Let628 */
    aTuple tup0  = { 4400, 'A', 33};
    struct __ciciliS_630 tup1  = { 4401, 'B', 34};
    __auto_type tup2  = ((struct __ciciliS_632 ){ 4402, 'C', 35});
    // ----------
    print_tuple (tup0 );
    print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
    ({ /* cicili#Let640 */
      const __auto_type i  = (tup2 . __h_0_mem );
      const __auto_type c  = (tup2 . __h_1_mem );
      const __auto_type s  = (tup2 . __h_2_mem );
      // ----------
      /* cicili#Block642 */
      ({ /* cicili#Let644 */
        bool __h_case_result  = (s  >  10 );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let649 */
            const __auto_type i  = (tup2 . __h_0_mem );
            const __auto_type c  = (tup2 . __h_1_mem );
            const __auto_type s  = (tup2 . __h_2_mem );
            // ----------
            /* cicili#Block651 */
            ({ /* cicili#Let653 */
              bool __h_case_result  = true ;
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let658 */
                  // ----------
                  /* cicili#Block660 */
                  fprintf (stdout , "No Tuple?!");
                }));
            });
          }));
      });
    });
  }
  { /* cicili#Let663 */
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
  { /* cicili#Let675 */
    __auto_type __h_data674  = Just_aTuple (((aTuple){ 55, 'D', 93}));
    // ----------
    /* cicili#Block678 */
    ({ /* cicili#Let680 */
      bool __h_case_result  = ((__h_data674 . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple inside maybe: Nothing");
      else
        { /* cicili#Let688 */
          __auto_type __h_match686_0_arg  = (((__h_data674 . __h_data ). Just ). __h_0_mem );
          __auto_type t  = __h_match686_0_arg ;
          const __auto_type i  = (t . __h_0_mem );
          const __auto_type c  = (t . __h_1_mem );
          const __auto_type s  = (t . __h_2_mem );
          // ----------
          /* cicili#Block690 */
          ({ /* cicili#Let692 */
            bool __h_case_result  = ((__h_data674 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let697 */
                const __auto_type ii  = (t . __h_0_mem );
                const __auto_type cc  = (t . __h_1_mem );
                const __auto_type ss  = (t . __h_2_mem );
                // ----------
                /* cicili#Block699 */
                ({ /* cicili#Let701 */
                  bool __h_case_result  = true ;
                  // ----------
                  if (__h_case_result )
                    ({ /* cicili#Progn704 */
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", ii , cc , ss );
                    });
                });
              }
          });
        }
    });
  }
  { /* cicili#Let711 */
    __auto_type __h_data710  = ((struct __ciciliS_713 ){ 5060, Just_char ('M')});
    const __auto_type Nothing  = (__h_data710 . __h_1_mem );
    // ----------
    /* cicili#Block715 */
    ({ /* cicili#Let717 */
      bool __h_case_result  = true ;
      // ----------
      if (__h_case_result )
        fprintf (stdout , "maybe inside tuple: Nothing\n");
      else
        { /* cicili#Let725 */
          const __auto_type i  = (__h_data710 . __h_0_mem );
          __auto_type __h_match723_1_arg  = (__h_data710 . __h_1_mem );
          __auto_type c  = (((__h_match723_1_arg . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block727 */
          ({ /* cicili#Let729 */
            bool __h_case_result  = (((__h_match723_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  >  'L' ) );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
            else
              { /* cicili#Let737 */
                __auto_type t  = __h_data710 ;
                __auto_type __h_match735_1_arg  = (t . __h_1_mem );
                __auto_type c  = (((__h_match735_1_arg . __h_data ). Just ). __h_0_mem );
                // ----------
                /* cicili#Block739 */
                ({ /* cicili#Let741 */
                  bool __h_case_result  = (((__h_match735_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  <  'L' ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Let747 */
                      const __auto_type i  = (t . __h_0_mem );
                      __auto_type __h_match745_1_arg  = (t . __h_1_mem );
                      // ----------
                      /* cicili#Block749 */
                      ({ /* cicili#Let751 */
                        bool __h_case_result  = ((__h_match745_1_arg . __h_ctor ) ==  __h_Just_t  );
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
  ({ /* cicili#Let756 */
    __auto_type txt  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let758 */
      __auto_type tmp_obj  = new_String_Const ("Haskell List");
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    // ----------
    show_String (txt );
    putchar ('\n');
    fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let767 */
        __auto_type __h_data766  = (txt -> __h_table -> nth )(3, txt );
        __auto_type c  = (((__h_data766 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block770 */
        ({ /* cicili#Let772 */
          bool __h_case_result  = ((__h_data766 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let777 */
              // ----------
              /* cicili#Block779 */
              fprintf (stdout , "4th element not found\n");
            }));
        });
      }));
    ({ /* cicili#Progn788 */
      ({ /* cicili#Let797 */
        __auto_type __h_data796  = (txt -> __h_table -> nth )(4, txt );
        __auto_type c  = (((__h_data796 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block803 */
        ({ /* cicili#Let805 */
          bool __h_case_result  = ((__h_data796 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let810 */
              // ----------
              /* cicili#Block812 */
              fprintf (stdout , "%dth element not found\n", 4);
            }));
        });
      });
      ({ /* cicili#Let822 */
        __auto_type __h_data821  = (txt -> __h_table -> nth )(5, txt );
        __auto_type c  = (((__h_data821 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block828 */
        ({ /* cicili#Let830 */
          bool __h_case_result  = ((__h_data821 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let835 */
              // ----------
              /* cicili#Block837 */
              fprintf (stdout , "%dth element not found\n", 5);
            }));
        });
      });
      ({ /* cicili#Let847 */
        __auto_type __h_data846  = (txt -> __h_table -> nth )(6, txt );
        __auto_type c  = (((__h_data846 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block853 */
        ({ /* cicili#Let855 */
          bool __h_case_result  = ((__h_data846 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let860 */
              // ----------
              /* cicili#Block862 */
              fprintf (stdout , "%dth element not found\n", 6);
            }));
        });
      });
      ({ /* cicili#Let872 */
        __auto_type __h_data871  = (txt -> __h_table -> nth )((txt -> __h_table -> len )(txt ), txt );
        __auto_type c  = (((__h_data871 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block879 */
        ({ /* cicili#Let881 */
          bool __h_case_result  = ((__h_data871 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", (txt -> __h_table -> len )(txt ), c ) : ({ /* cicili#Let887 */
              // ----------
              /* cicili#Block889 */
              fprintf (stdout , "%dth element not found\n", (txt -> __h_table -> len )(txt ));
            }));
        });
      });
    });
    fprintf (stdout , "output of letin: %d\n", ({ /* cicili#Let894 */
        __auto_type llen  = (txt -> __h_table -> len )(txt );
        // ----------
        ({ /* cicili#Progn902 */
          ({ /* cicili#Let911 */
            __auto_type __h_data910  = (txt -> __h_table -> nth )(4, txt );
            __auto_type c  = (((__h_data910 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block917 */
            ({ /* cicili#Let919 */
              bool __h_case_result  = ((__h_data910 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let924 */
                  // ----------
                  /* cicili#Block926 */
                  fprintf (stdout , "%dth element not found\n", 4);
                }));
            });
          });
          ({ /* cicili#Let936 */
            __auto_type __h_data935  = (txt -> __h_table -> nth )(5, txt );
            __auto_type c  = (((__h_data935 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block942 */
            ({ /* cicili#Let944 */
              bool __h_case_result  = ((__h_data935 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let949 */
                  // ----------
                  /* cicili#Block951 */
                  fprintf (stdout , "%dth element not found\n", 5);
                }));
            });
          });
          ({ /* cicili#Let961 */
            __auto_type __h_data960  = (txt -> __h_table -> nth )(6, txt );
            __auto_type c  = (((__h_data960 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block967 */
            ({ /* cicili#Let969 */
              bool __h_case_result  = ((__h_data960 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let974 */
                  // ----------
                  /* cicili#Block976 */
                  fprintf (stdout , "%dth element not found\n", 6);
                }));
            });
          });
          ({ /* cicili#Let986 */
            __auto_type __h_data985  = (txt -> __h_table -> nth )(llen , txt );
            __auto_type c  = (((__h_data985 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block992 */
            ({ /* cicili#Let994 */
              bool __h_case_result  = ((__h_data985 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", llen , c ) : ({ /* cicili#Let999 */
                  // ----------
                  /* cicili#Block1001 */
                  fprintf (stdout , "%dth element not found\n", llen );
                }));
            });
          });
        });
      }));
    { /* cicili#Let1006 */
      __auto_type head  = (((txt -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((txt -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1008 */
      ({ /* cicili#Let1010 */
        bool __h_case_result  = ((txt -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , (txt -> __h_table -> len )(tail ));
      });
    }
    ({ /* cicili#Let1016 */
      __auto_type str5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1018 */
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
    { /* cicili#Let1032 */
      __auto_type __h_data1031  = (txt -> __h_table -> drop )(12, txt );
      __auto_type __h_has_len  = hasLen_List_char (__h_data1031 , 3);
      typeof((((nth_List_char (0, __h_data1031 ). __h_data ). Just ). __h_0_mem )) fst ;
      typeof((((nth_List_char (1, __h_data1031 ). __h_data ). Just ). __h_0_mem )) snd ;
      typeof((((nth_List_char (2, __h_data1031 ). __h_data ). Just ). __h_0_mem )) trd ;
      typeof(drop_List_char (3, __h_data1031 )) tail ;
      // ----------
      if (__h_has_len  ==  3 )
        { /* cicili#Block1041 */
          fst  = (((nth_List_char (0, __h_data1031 ). __h_data ). Just ). __h_0_mem );
          snd  = (((nth_List_char (1, __h_data1031 ). __h_data ). Just ). __h_0_mem );
          trd  = (((nth_List_char (2, __h_data1031 ). __h_data ). Just ). __h_0_mem );
          tail  = drop_List_char (3, __h_data1031 );
        }
      ({ /* cicili#Let1047 */
        bool __h_case_result  = (__h_has_len  ==  3 );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first, second and third char from String: %c %c %c\n", fst , snd , trd );
        else
          { /* cicili#Let1054 */
            __auto_type __h_has_len  = hasLen_List_char (__h_data1031 , 2);
            typeof((((nth_List_char (0, __h_data1031 ). __h_data ). Just ). __h_0_mem )) fst ;
            typeof((((nth_List_char (1, __h_data1031 ). __h_data ). Just ). __h_0_mem )) snd ;
            typeof(drop_List_char (2, __h_data1031 )) tail ;
            // ----------
            if (__h_has_len  ==  2 )
              { /* cicili#Block1061 */
                fst  = (((nth_List_char (0, __h_data1031 ). __h_data ). Just ). __h_0_mem );
                snd  = (((nth_List_char (1, __h_data1031 ). __h_data ). Just ). __h_0_mem );
                tail  = drop_List_char (2, __h_data1031 );
              }
            ({ /* cicili#Let1066 */
              bool __h_case_result  = (__h_has_len  ==  2 );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "first and second char from String: %c %c\n", fst , snd );
              else
                { /* cicili#Let1073 */
                  __auto_type __h_has_len  = hasLen_List_char (__h_data1031 , 1);
                  typeof((((nth_List_char (0, __h_data1031 ). __h_data ). Just ). __h_0_mem )) fst ;
                  typeof(drop_List_char (1, __h_data1031 )) tail ;
                  // ----------
                  if (__h_has_len  ==  1 )
                    { /* cicili#Block1079 */
                      fst  = (((nth_List_char (0, __h_data1031 ). __h_data ). Just ). __h_0_mem );
                      tail  = drop_List_char (1, __h_data1031 );
                    }
                  ({ /* cicili#Let1083 */
                    bool __h_case_result  = (__h_has_len  ==  1 );
                    // ----------
                    if (__h_case_result )
                      fprintf (stdout , "first char from String: %c\n", fst );
                    else
                      { /* cicili#Let1090 */
                        // ----------
                        /* cicili#Block1092 */
                        fprintf (stdout , "default case String\n");
                      }
                  });
                }
            });
          }
      });
    }
  });
  ({ /* cicili#Let1096 */
    __auto_type ilist0  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
    __auto_type ilist1  = (ilist0 -> __h_table -> push )(5, ilist0 );
    __auto_type intarr  = ((const int[]){ 8, 7, 6});
    __auto_type ilist2  = new_List_int_Pure (intarr , 3);
    // ----------
    ({ /* cicili#Let1104 */
      __auto_type ilist3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1106 */
        __auto_type tmp_obj  = (ilist0 -> __h_table -> append )(ilist2 , ilist1 );
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      __auto_type ilist4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1110 */
        __auto_type tmp_obj  = (ilist0 -> __h_table -> take )(5, ilist3 );
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      // ----------
      fprintf (stdout , "first elem of int list0: %d\n", ({ /* cicili#Let1118 */
          __auto_type __h_data1117  = (ilist0 -> __h_table -> head )(ilist0 );
          __auto_type i  = (((__h_data1117 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block1121 */
          ({ /* cicili#Let1123 */
            bool __h_case_result  = ((__h_data1117 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? i  : ({ /* cicili#Let1127 */
                // ----------
                /* cicili#Block1129 */
                -1;
              }));
          });
        }));
      fprintf (stdout , "first elem of int list1: %d\n", ({ /* cicili#Let1135 */
          __auto_type __h_data1134  = (ilist0 -> __h_table -> head )(ilist1 );
          __auto_type i  = (((__h_data1134 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block1138 */
          ({ /* cicili#Let1140 */
            bool __h_case_result  = ((__h_data1134 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? i  : ({ /* cicili#Let1144 */
                // ----------
                /* cicili#Block1146 */
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
  ({ /* cicili#Let1159 */
    __auto_type ra0  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1161 */
      __auto_type tmp_obj  = new_Range_int (1, 20, 3);
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type ra1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1164 */
      __auto_type tmp_obj  = (ra0 -> __h_table -> take )(3, ra0 );
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type ra2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1168 */
      __auto_type tmp_obj  = (ra0 -> __h_table -> take )(4, ra0 );
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type ra3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1172 */
      __auto_type tmp_obj  = (ra0 -> __h_table -> take )(10, ra0 );
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type str0  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1176 */
      __auto_type tmp_obj  = new_String_Const ("Hello World!");
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type str1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1181 */
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
    (get_List_int__H_Table ()-> show )(((List_int)ra3 ));
    fprintf (stdout , "\nString to List^int:\n");
    (str1 -> __h_table -> show )(((List_int)str0 ));
    fprintf (stdout , "\nList^int to String:\n");
    show_String (((String)str1 ));
    putchar ('\n');
  });
}
