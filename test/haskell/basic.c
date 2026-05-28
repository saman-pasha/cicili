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
    typeof((((this -> __h_data ). Byte ). __h_0_mem )) c ;
    // ----------
    
    ({ /* cicili#Let154 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Byte_t  ) &&  ({ /* cicili#Progn155 */
            (c  =  (((this -> __h_data ). Byte ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block159 */
          fprintf (stdout , "Integer was Byte:  %d\n", c );
        }
      else
        { /* cicili#Let165 */
          typeof((((this -> __h_data ). Short ). __h_0_mem )) s ;
          // ----------
          
          ({ /* cicili#Let169 */
            bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Short_t  ) &&  ({ /* cicili#Progn170 */
                  (s  =  (((this -> __h_data ). Short ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block174 */
                fprintf (stdout , "Integer was Short: %d\n", s );
              }
            else
              { /* cicili#Let180 */
                typeof((((this -> __h_data ). Int ). __h_0_mem )) i ;
                // ----------
                
                ({ /* cicili#Let184 */
                  bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Int_t  ) &&  ({ /* cicili#Progn185 */
                        (i  =  (((this -> __h_data ). Int ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block189 */
                      fprintf (stdout , "Integer was Int:   %d\n", i );
                    }
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
  ({ /* cicili#Let207 */
    typeof((((self . __h_data ). Byte ). __h_0_mem )) c ;
    // ----------
    
    ({ /* cicili#Let211 */
      bool __h_case_result  = (true  &&  (((self . __h_ctor ) ==  __h_Byte_t  ) &&  ({ /* cicili#Progn212 */
            (c  =  (((self . __h_data ). Byte ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Progn215 */
          fprintf (stdout , "Integer is Byte: %d\n", c );
        }) : ({ /* cicili#Let220 */
          typeof((((self . __h_data ). Short ). __h_0_mem )) sh ;
          // ----------
          
          ({ /* cicili#Let224 */
            bool __h_case_result  = (true  &&  (((self . __h_ctor ) ==  __h_Short_t  ) &&  ({ /* cicili#Progn225 */
                  (sh  =  (((self . __h_data ). Short ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn228 */
                fprintf (stdout , "Integer is Short: %d\n", sh );
              }) : ({ /* cicili#Let233 */
                typeof((((self . __h_data ). Int ). __h_0_mem )) il ;
                // ----------
                
                ({ /* cicili#Let237 */
                  bool __h_case_result  = (true  &&  (((self . __h_ctor ) ==  __h_Int_t  ) &&  (({ /* cicili#Progn238 */
                          (il  =  (((self . __h_data ). Int ). __h_0_mem ) );
                          true ;
                        }) &&  (il  <  1000 ) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn241 */
                      fprintf (stdout , "Integer is Int below 1000: %d\n", il );
                    }) : ({ /* cicili#Let246 */
                      typeof((((self . __h_data ). Int ). __h_0_mem )) i ;
                      // ----------
                      
                      ({ /* cicili#Let250 */
                        bool __h_case_result  = (true  &&  (((self . __h_ctor ) ==  __h_Int_t  ) &&  (({ /* cicili#Progn251 */
                                (i  =  (((self . __h_data ). Int ). __h_0_mem ) );
                                true ;
                              }) &&  ((i  >=  1000 ) &&  (i  <  10000 ) ) ) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn254 */
                            fprintf (stdout , "Integer is Int between 1000 and 10000: %d\n", i );
                          }) : ({ /* cicili#Let259 */
                            // ----------
                            
                            ({ /* cicili#Progn263 */
                              fprintf (stdout , "Integer is N/A\n");
                            });
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
  __h_Nothing_t = 0,
  __h_Just_t = 1
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
  union { /* ciciliUnion277 */
    struct { /* ciciliStruct278 */
      Maybe_char __h_0_mem ;
    } Just , _0 ;
    struct { /* ciciliStruct279 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Maybe_char;
Maybe_Maybe_char Just_Maybe_char (Maybe_char value );
Maybe_Maybe_char Nothing_Maybe_char ();
__attribute__((weak)) Maybe_Maybe_char Default_Maybe_Maybe_char () {
  return Nothing_Maybe_char ();
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
Maybe_Maybe_char Just_Maybe_char (Maybe_char value ) {
  return ((Maybe_Maybe_char){ get_Maybe_Maybe_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
}
Maybe_Maybe_char Nothing_Maybe_char () {
  return ((Maybe_Maybe_char){ get_Maybe_Maybe_char__H_Table (), __h___t });
}
#endif /* __Maybe_Maybe_char__H_IMPL__ */ 
void print_inside_maybe (Maybe_Maybe_char mb ) {
  { /* cicili#Let314 */
    // ----------
    
    ({ /* cicili#Let318 */
      bool __h_case_result  = (true  &&  ((mb . __h_ctor ) ==  __h_Nothing_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block321 */
          fprintf (stdout , "wrapper Nothing Maybe char: Nothing\n");
        }
      else
        { /* cicili#Let327 */
          typeof((((mb . __h_data ). Just ). __h_0_mem )) mc ;
          // ----------
          
          ({ /* cicili#Let331 */
            bool __h_case_result  = (true  &&  (((mb . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn332 */
                  (mc  =  (((mb . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block336 */
                { /* cicili#Let340 */
                  // ----------
                  
                  ({ /* cicili#Let344 */
                    bool __h_case_result  = (true  &&  ((mc . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block347 */
                        fprintf (stdout , "wrapper Just Nothing char: Nothing\n");
                      }
                    else
                      { /* cicili#Let353 */
                        typeof((((mc . __h_data ). Just ). __h_0_mem )) c ;
                        // ----------
                        
                        ({ /* cicili#Let357 */
                          bool __h_case_result  = (true  &&  (((mc . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn358 */
                                (c  =  (((mc . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block362 */
                              fprintf (stdout , "wrapper Just Just char: Just %c\n", c );
                            }
                        });
                      }
                  });
                }
              }
          });
        }
    });
  }
}
void print_inner_maybe (Maybe_Maybe_char imb ) {
  { /* cicili#Let369 */
    // ----------
    
    ({ /* cicili#Let373 */
      bool __h_case_result  = (true  &&  ((imb . __h_ctor ) ==  __h_Nothing_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block376 */
          fprintf (stdout , "inner Nothing Maybe char: Nothing\n");
        }
      else
        { /* cicili#Let383 */
          typeof((((imb . __h_data ). Just ). __h_0_mem )) __h_match381_0_arg ;
          // ----------
          
          ({ /* cicili#Let387 */
            bool __h_case_result  = (true  &&  (((imb . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn388 */
                    (__h_match381_0_arg  =  (((imb . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ((__h_match381_0_arg . __h_ctor ) ==  __h_Nothing_t  ) ) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block392 */
                fprintf (stdout , "inner Just Nothing char: Nothing\n");
              }
            else
              { /* cicili#Let399 */
                typeof((((imb . __h_data ). Just ). __h_0_mem )) __h_match397_0_arg ;
                typeof((((__h_match397_0_arg . __h_data ). Just ). __h_0_mem )) c ;
                // ----------
                
                ({ /* cicili#Let403 */
                  bool __h_case_result  = (true  &&  (((imb . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn404 */
                          (__h_match397_0_arg  =  (((imb . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) &&  (true  &&  (((__h_match397_0_arg . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn406 */
                              (c  =  (((__h_match397_0_arg . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) ) ) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block410 */
                      fprintf (stdout , "inner Just Just char: Just %c\n", c );
                    }
                });
              }
          });
        }
    });
  }
}
typedef struct __ciciliS_415 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_415;
typedef __ciciliS_415 aTuple ;
void print_tuple (aTuple tup ) {
  { /* cicili#Let419 */
    typeof((tup . __h_0_mem )) i ;
    typeof((tup . __h_1_mem )) c ;
    typeof((tup . __h_2_mem )) s ;
    // ----------
    
    ({ /* cicili#Let423 */
      bool __h_case_result  = (true  &&  (((({ /* cicili#Progn424 */
                (i  =  (tup . __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn426 */
                (c  =  (tup . __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn428 */
              (s  =  (tup . __h_2_mem ) );
              true ;
            }) ) &&  (s  >  10 ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block432 */
          fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
        }
      else
        { /* cicili#Let438 */
          typeof((tup . __h_0_mem )) fi ;
          typeof((tup . __h_1_mem )) fc ;
          typeof((tup . __h_2_mem )) fs ;
          // ----------
          
          ({ /* cicili#Let442 */
            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn443 */
                    (fi  =  (tup . __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn445 */
                    (fc  =  (tup . __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn447 */
                  (fs  =  (tup . __h_2_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block451 */
                fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", fi , fc , fs );
              }
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
  __h_Nothing_t = 0,
  __h_Just_t = 1
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
  union { /* ciciliUnion465 */
    struct { /* ciciliStruct466 */
      aTuple __h_0_mem ;
    } Just , _0 ;
    struct { /* ciciliStruct467 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_aTuple;
Maybe_aTuple Just_aTuple (aTuple value );
Maybe_aTuple Nothing_aTuple ();
__attribute__((weak)) Maybe_aTuple Default_Maybe_aTuple () {
  return Nothing_aTuple ();
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
Maybe_aTuple Just_aTuple (aTuple value ) {
  return ((Maybe_aTuple){ get_Maybe_aTuple__H_Table (), __h_Just_t , .__h_data.Just = { value }});
}
Maybe_aTuple Nothing_aTuple () {
  return ((Maybe_aTuple){ get_Maybe_aTuple__H_Table (), __h___t });
}
#endif /* __Maybe_aTuple__H_IMPL__ */ 
int factorial (int n ) {
  return (((n  ==  1 )) ? 1 : (n  *  factorial ((n  -  1 )) ));
}
int __ciciliL_600 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
int __ciciliL_608 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
typedef struct __ciciliS_697 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_697;
typedef struct __ciciliS_699 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_699;
typedef struct __ciciliS_850 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
} __ciciliS_850;
int main () {
  fprintf (stdout , "basic test\n");
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
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_600 (2, 16));
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_608 (2, 16));
  fprintf (stdout , "output of function closure with $>: %d\n", (2 +  3 ));
  { /* cicili#Block622 */
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
  ({ /* cicili#Let684 */
    __auto_type b  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let686 */
      __auto_type b  = Byte (11);
      // ----------
      ((void)((b . __h_table )-> freeData ));
      b ;
    });
    __auto_type s  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let689 */
      __auto_type s  = Short (21);
      // ----------
      ((void)((s . __h_table )-> freeData ));
      s ;
    });
    __auto_type i  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let692 */
      __auto_type i  = Int (31);
      // ----------
      ((void)((i . __h_table )-> freeData ));
      i ;
    });
    // ----------
    printf ("test destructure of Integer\n");
  });
  { /* cicili#Let695 */
    aTuple tup0  = { 4400, 'A', 33};
    struct __ciciliS_697 tup1  = { 4401, 'B', 34};
    __auto_type tup2  = ((struct __ciciliS_699 ){ 4402, 'C', 35});
    // ----------
    print_tuple (tup0 );
    print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
    ({ /* cicili#Let707 */
      typeof((tup2 . __h_0_mem )) i ;
      typeof((tup2 . __h_1_mem )) c ;
      typeof((tup2 . __h_2_mem )) s ;
      // ----------
      
      ({ /* cicili#Let711 */
        bool __h_case_result  = (true  &&  (((({ /* cicili#Progn712 */
                  (i  =  (tup2 . __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn714 */
                  (c  =  (tup2 . __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn716 */
                (s  =  (tup2 . __h_2_mem ) );
                true ;
              }) ) &&  (s  >  10 ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn719 */
            fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
          }) : ({ /* cicili#Let724 */
            typeof((tup2 . __h_0_mem )) fi ;
            typeof((tup2 . __h_1_mem )) fc ;
            typeof((tup2 . __h_2_mem )) fs ;
            // ----------
            
            ({ /* cicili#Let728 */
              bool __h_case_result  = (true  &&  ((({ /* cicili#Progn729 */
                      (fi  =  (tup2 . __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn731 */
                      (fc  =  (tup2 . __h_1_mem ) );
                      true ;
                    }) ) &&  ({ /* cicili#Progn733 */
                    (fs  =  (tup2 . __h_2_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn736 */
                  fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", fi , fc , fs );
                }) : ({ /* cicili#Let741 */
                  // ----------
                  
                  ({ /* cicili#Progn745 */
                    fprintf (stdout , "No Tuple?!");
                  });
                }));
            });
          }));
      });
    });
  }
  { /* cicili#Let748 */
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
  { /* cicili#Let759 */
    __auto_type match758  = Just_aTuple (((aTuple){ 55, 'D', 93}));
    // ----------
    
    ({ /* cicili#Let764 */
      bool __h_case_result  = (true  &&  ((match758 . __h_ctor ) ==  __h_Nothing_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block767 */
          fprintf (stdout , "tuple inside maybe: Nothing");
        }
      else
        { /* cicili#Let774 */
          typeof((((match758 . __h_data ). Just ). __h_0_mem )) t ;
          typeof((t . __h_0_mem )) i ;
          typeof((t . __h_1_mem )) c ;
          typeof((t . __h_2_mem )) s ;
          // ----------
          
          ({ /* cicili#Let778 */
            bool __h_case_result  = (true  &&  (((match758 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn779 */
                    (t  =  (((match758 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ((({ /* cicili#Progn781 */
                          (i  =  (t . __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn783 */
                          (c  =  (t . __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn785 */
                        (s  =  (t . __h_2_mem ) );
                        true ;
                      }) ) ) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block789 */
                { /* cicili#Let793 */
                  typeof((t . __h_0_mem )) ii ;
                  typeof((t . __h_1_mem )) cc ;
                  typeof((t . __h_2_mem )) ss ;
                  // ----------
                  
                  ({ /* cicili#Let797 */
                    bool __h_case_result  = (true  &&  ((({ /* cicili#Progn798 */
                            (ii  =  (t . __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn800 */
                            (cc  =  (t . __h_1_mem ) );
                            true ;
                          }) ) &&  ({ /* cicili#Progn802 */
                          (ss  =  (t . __h_2_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block806 */
                        ({ /* cicili#Progn808 */
                          fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
                          fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", ii , cc , ss );
                        });
                      }
                  });
                }
              }
          });
        }
    });
  }
  { /* cicili#Let814 */
    __auto_type match813  = Just_aTuple (((aTuple){ 56, 'E', 94}));
    // ----------
    
    ({ /* cicili#Let819 */
      bool __h_case_result  = (true  &&  ((match813 . __h_ctor ) ==  __h_Nothing_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block822 */
          fprintf (stdout , "ow tuple inside maybe: Nothing");
        }
      else
        { /* cicili#Let829 */
          typeof((((match813 . __h_data ). Just ). __h_0_mem )) __h_match827_0_arg ;
          typeof((__h_match827_0_arg . __h_0_mem )) i ;
          typeof((__h_match827_0_arg . __h_1_mem )) c ;
          typeof((__h_match827_0_arg . __h_2_mem )) s ;
          // ----------
          
          ({ /* cicili#Let833 */
            bool __h_case_result  = (true  &&  (((match813 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn834 */
                    (__h_match827_0_arg  =  (((match813 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ((({ /* cicili#Progn836 */
                          (i  =  (__h_match827_0_arg . __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn838 */
                          (c  =  (__h_match827_0_arg . __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn840 */
                        (s  =  (__h_match827_0_arg . __h_2_mem ) );
                        true ;
                      }) ) ) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block844 */
                fprintf (stdout , "ow tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
              }
          });
        }
    });
  }
  ({ /* cicili#Let848 */
    __auto_type tt  = ((struct __ciciliS_850 ){ 5060, Just_char ('M')});
    // ----------
    { /* cicili#Let855 */
      typeof((tt . __h_1_mem )) __h_match853_1_arg ;
      // ----------
      
      ({ /* cicili#Let859 */
        bool __h_case_result  = (true  &&  (({ /* cicili#Progn860 */
              (__h_match853_1_arg  =  (tt . __h_1_mem ) );
              true ;
            }) &&  (true  &&  ((__h_match853_1_arg . __h_ctor ) ==  __h_Nothing_t  ) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block864 */
            fprintf (stdout , "maybe inside tuple: Nothing\n");
          }
        else
          { /* cicili#Let871 */
            typeof((tt . __h_0_mem )) i ;
            typeof((tt . __h_1_mem )) __h_match869_1_arg ;
            typeof((((__h_match869_1_arg . __h_data ). Just ). __h_0_mem )) c ;
            // ----------
            
            ({ /* cicili#Let875 */
              bool __h_case_result  = (true  &&  ((({ /* cicili#Progn876 */
                      (i  =  (tt . __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn878 */
                      (__h_match869_1_arg  =  (tt . __h_1_mem ) );
                      true ;
                    }) ) &&  (true  &&  (((__h_match869_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn880 */
                          (c  =  (((__h_match869_1_arg . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) &&  (c  >  'L' ) ) ) ) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block884 */
                  fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
                }
              else
                { /* cicili#Let891 */
                  __auto_type t  = tt ;
                  typeof((t . __h_1_mem )) __h_match889_1_arg ;
                  typeof((((__h_match889_1_arg . __h_data ). Just ). __h_0_mem )) cm ;
                  // ----------
                  
                  ({ /* cicili#Let895 */
                    bool __h_case_result  = (true  &&  (({ /* cicili#Progn896 */
                          (__h_match889_1_arg  =  (t . __h_1_mem ) );
                          true ;
                        }) &&  (true  &&  (((__h_match889_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn898 */
                                (cm  =  (((__h_match889_1_arg . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) &&  (cm  <  'L' ) ) ) ) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block902 */
                        { /* cicili#Let907 */
                          typeof((t . __h_0_mem )) im ;
                          typeof((t . __h_1_mem )) __h_match905_1_arg ;
                          // ----------
                          
                          ({ /* cicili#Let911 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn912 */
                                    (im  =  (t . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn914 */
                                    (__h_match905_1_arg  =  (t . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  ((__h_match905_1_arg . __h_ctor ) ==  __h_Just_t  ) ) ) );
                            // ----------
                            if (__h_case_result )
                              { /* cicili#Block918 */
                                fprintf (stdout , "maybe inside tuple: (c < L) int, Just char: = (%d, %c)\n", im , cm );
                              }
                          });
                        }
                      }
                  });
                }
            });
          }
      });
    }
  });
  ({ /* cicili#Let922 */
    __auto_type txt  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let924 */
      __auto_type txt  = new_String_Const ("Haskell List");
      // ----------
      ((void)(txt -> __h_table -> freeClass ));
      txt ;
    });
    // ----------
    (txt -> __h_table -> show )(txt );
    putchar ('\n');
    fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let934 */
        __auto_type match933  = (txt -> __h_table -> nth )(3, txt );
        typeof((((match933 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        
        ({ /* cicili#Let940 */
          bool __h_case_result  = (true  &&  (((match933 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn941 */
                (c  =  (((match933 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn944 */
              fprintf (stdout , "the 4th element is: %c\n", c );
            }) : ({ /* cicili#Let949 */
              // ----------
              
              ({ /* cicili#Progn953 */
                fprintf (stdout , "4th element not found\n");
              });
            }));
        });
      }));
    ({ /* cicili#Progn962 */
      ({ /* cicili#Let970 */
        __auto_type match969  = (txt -> __h_table -> nth )(4, txt );
        typeof((((match969 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        
        ({ /* cicili#Let978 */
          bool __h_case_result  = (true  &&  (((match969 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn979 */
                (c  =  (((match969 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn982 */
              fprintf (stdout , "the %dth element is: %c\n", 4, c );
            }) : ({ /* cicili#Let987 */
              // ----------
              
              ({ /* cicili#Progn991 */
                fprintf (stdout , "%dth element not found\n", 4);
              });
            }));
        });
      });
      ({ /* cicili#Let1000 */
        __auto_type match999  = (txt -> __h_table -> nth )(5, txt );
        typeof((((match999 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        
        ({ /* cicili#Let1008 */
          bool __h_case_result  = (true  &&  (((match999 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1009 */
                (c  =  (((match999 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1012 */
              fprintf (stdout , "the %dth element is: %c\n", 5, c );
            }) : ({ /* cicili#Let1017 */
              // ----------
              
              ({ /* cicili#Progn1021 */
                fprintf (stdout , "%dth element not found\n", 5);
              });
            }));
        });
      });
      ({ /* cicili#Let1030 */
        __auto_type match1029  = (txt -> __h_table -> nth )(6, txt );
        typeof((((match1029 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        
        ({ /* cicili#Let1038 */
          bool __h_case_result  = (true  &&  (((match1029 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1039 */
                (c  =  (((match1029 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1042 */
              fprintf (stdout , "the %dth element is: %c\n", 6, c );
            }) : ({ /* cicili#Let1047 */
              // ----------
              
              ({ /* cicili#Progn1051 */
                fprintf (stdout , "%dth element not found\n", 6);
              });
            }));
        });
      });
      ({ /* cicili#Let1060 */
        __auto_type match1059  = (txt -> __h_table -> nth )((txt -> __h_table -> len )(txt ), txt );
        typeof((((match1059 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        
        ({ /* cicili#Let1069 */
          bool __h_case_result  = (true  &&  (((match1059 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1070 */
                (c  =  (((match1059 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1073 */
              fprintf (stdout , "the %dth element is: %c\n", (txt -> __h_table -> len )(txt ), c );
            }) : ({ /* cicili#Let1079 */
              // ----------
              
              ({ /* cicili#Progn1083 */
                fprintf (stdout , "%dth element not found\n", (txt -> __h_table -> len )(txt ));
              });
            }));
        });
      });
    });
    fprintf (stdout , "output of letin: %d\n", ({ /* cicili#Let1088 */
        __auto_type llen  = (txt -> __h_table -> len )(txt );
        // ----------
        ({ /* cicili#Progn1096 */
          ({ /* cicili#Let1104 */
            __auto_type match1103  = (txt -> __h_table -> nth )(4, txt );
            typeof((((match1103 . __h_data ). Just ). __h_0_mem )) c ;
            // ----------
            
            ({ /* cicili#Let1112 */
              bool __h_case_result  = (true  &&  (((match1103 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1113 */
                    (c  =  (((match1103 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn1116 */
                  fprintf (stdout , "the %dth element is: %c\n", 4, c );
                }) : ({ /* cicili#Let1121 */
                  // ----------
                  
                  ({ /* cicili#Progn1125 */
                    fprintf (stdout , "%dth element not found\n", 4);
                  });
                }));
            });
          });
          ({ /* cicili#Let1134 */
            __auto_type match1133  = (txt -> __h_table -> nth )(5, txt );
            typeof((((match1133 . __h_data ). Just ). __h_0_mem )) c ;
            // ----------
            
            ({ /* cicili#Let1142 */
              bool __h_case_result  = (true  &&  (((match1133 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1143 */
                    (c  =  (((match1133 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn1146 */
                  fprintf (stdout , "the %dth element is: %c\n", 5, c );
                }) : ({ /* cicili#Let1151 */
                  // ----------
                  
                  ({ /* cicili#Progn1155 */
                    fprintf (stdout , "%dth element not found\n", 5);
                  });
                }));
            });
          });
          ({ /* cicili#Let1164 */
            __auto_type match1163  = (txt -> __h_table -> nth )(6, txt );
            typeof((((match1163 . __h_data ). Just ). __h_0_mem )) c ;
            // ----------
            
            ({ /* cicili#Let1172 */
              bool __h_case_result  = (true  &&  (((match1163 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1173 */
                    (c  =  (((match1163 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn1176 */
                  fprintf (stdout , "the %dth element is: %c\n", 6, c );
                }) : ({ /* cicili#Let1181 */
                  // ----------
                  
                  ({ /* cicili#Progn1185 */
                    fprintf (stdout , "%dth element not found\n", 6);
                  });
                }));
            });
          });
          ({ /* cicili#Let1194 */
            __auto_type match1193  = (txt -> __h_table -> nth )(llen , txt );
            typeof((((match1193 . __h_data ). Just ). __h_0_mem )) c ;
            // ----------
            
            ({ /* cicili#Let1202 */
              bool __h_case_result  = (true  &&  (((match1193 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1203 */
                    (c  =  (((match1193 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn1206 */
                  fprintf (stdout , "the %dth element is: %c\n", llen , c );
                }) : ({ /* cicili#Let1211 */
                  // ----------
                  
                  ({ /* cicili#Progn1215 */
                    fprintf (stdout , "%dth element not found\n", llen );
                  });
                }));
            });
          });
        });
      }));
    { /* cicili#Let1220 */
      typeof((((txt -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((txt -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1224 */
        bool __h_case_result  = (true  &&  (((txt -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1225 */
                (head  =  (((txt -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1227 */
                (tail  =  (((txt -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1231 */
            fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , (tail -> __h_table -> len )(tail ));
          }
      });
    }
    ({ /* cicili#Let1236 */
      __auto_type str5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1238 */
        __auto_type str5  = pure_String (((const char[]){ 'C', 'i', 'c', 'i', 'l', 'i'}), 6);
        // ----------
        ((void)(str5 -> __h_table -> freeClass ));
        str5 ;
      });
      // ----------
      fprintf (stdout , "has 'Cicili' desired length 5: %d\n", (get_String__H_Table ()-> hasLen )(str5 , 5));
      fprintf (stdout , "has 'Cicili' desired length 6: %d\n", hasLen_String (str5 , 6));
      fprintf (stdout , "has 'Cicili' desired length 7: %d\n", (str5 -> __h_table -> hasLen )(str5 , 7));
      { /* cicili#Let1254 */
        typeof(str5 ) __h_match1251_0_item ;
        typeof((((__h_match1251_0_item -> __h_data ). Cons ). __h_0_mem )) ch0 ;
        typeof((((__h_match1251_0_item -> __h_data ). Cons ). __h_1_mem )) __h_match1251_1_arg ;
        typeof((((__h_match1251_1_arg -> __h_data ). Cons ). __h_0_mem )) ch1 ;
        typeof((((__h_match1251_1_arg -> __h_data ). Cons ). __h_1_mem )) __h_match1252_1_arg ;
        typeof((((__h_match1252_1_arg -> __h_data ). Cons ). __h_0_mem )) ch2 ;
        typeof((((__h_match1252_1_arg -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        if ((str5 -> __h_table -> hasLen )(str5 , 1) ==  1 )
          { /* cicili#Block1258 */
            __h_match1251_0_item  = str5 ;
            ch0  = (((__h_match1251_0_item -> __h_data ). Cons ). __h_0_mem );
            __h_match1251_1_arg  = (((__h_match1251_0_item -> __h_data ). Cons ). __h_1_mem );
          }
        ({ /* cicili#Let1260 */
          bool __h_case_result  = (((str5 -> __h_table -> hasLen )(str5 , 1) ==  1 ) &&  (true  &&  (((__h_match1251_1_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1262 */
                      (ch1  =  (((__h_match1251_1_arg -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn1264 */
                      (__h_match1252_1_arg  =  (((__h_match1251_1_arg -> __h_data ). Cons ). __h_1_mem ) );
                      true ;
                    }) ) &&  (true  &&  (((__h_match1252_1_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1266 */
                          (ch2  =  (((__h_match1252_1_arg -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn1268 */
                          (tail  =  (((__h_match1252_1_arg -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) ) ) ) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block1272 */
              { /* cicili#Block1274 */
                fprintf (stdout , "fst snd trd chars and tail from String: %c, %c, %c, ", ch0 , ch1 , ch2 );
                show_String (tail );
                putchar ('\n');
              }
            }
        });
      }
    });
    fprintf (stdout , "drop 10 of 'Haskell List'\n");
    { /* cicili#Let1280 */
      __auto_type match1279  = (txt -> __h_table -> drop )(10, txt );
      typeof(match1279 ) __h_match1279_0_item ;
      typeof((((__h_match1279_0_item -> __h_data ). Cons ). __h_0_mem )) fst ;
      typeof((((__h_match1279_0_item -> __h_data ). Cons ). __h_1_mem )) __h_match1279_1_item ;
      typeof((((__h_match1279_1_item -> __h_data ). Cons ). __h_0_mem )) snd ;
      typeof((((__h_match1279_1_item -> __h_data ). Cons ). __h_1_mem )) __h_match1279_2_item ;
      typeof((((__h_match1279_2_item -> __h_data ). Cons ). __h_0_mem )) trd ;
      // ----------
      if ((match1279 -> __h_table -> hasLen )(match1279 , 3) ==  3 )
        { /* cicili#Block1285 */
          __h_match1279_0_item  = match1279 ;
          fst  = (((__h_match1279_0_item -> __h_data ). Cons ). __h_0_mem );
          __h_match1279_1_item  = (((__h_match1279_0_item -> __h_data ). Cons ). __h_1_mem );
          snd  = (((__h_match1279_1_item -> __h_data ). Cons ). __h_0_mem );
          __h_match1279_2_item  = (((__h_match1279_1_item -> __h_data ). Cons ). __h_1_mem );
          trd  = (((__h_match1279_2_item -> __h_data ). Cons ). __h_0_mem );
        }
      ({ /* cicili#Let1287 */
        bool __h_case_result  = ((match1279 -> __h_table -> hasLen )(match1279 , 3) ==  3 );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1291 */
            fprintf (stdout , "first, second and third char from String: %c %c %c\n", fst , snd , trd );
          }
        else
          { /* cicili#Let1297 */
            typeof(match1279 ) __h_match1296_0_item ;
            typeof((((__h_match1296_0_item -> __h_data ). Cons ). __h_0_mem )) fst1 ;
            typeof((((__h_match1296_0_item -> __h_data ). Cons ). __h_1_mem )) __h_match1296_1_item ;
            typeof((((__h_match1296_1_item -> __h_data ). Cons ). __h_0_mem )) snd1 ;
            // ----------
            if ((match1279 -> __h_table -> hasLen )(match1279 , 2) ==  2 )
              { /* cicili#Block1301 */
                __h_match1296_0_item  = match1279 ;
                fst1  = (((__h_match1296_0_item -> __h_data ). Cons ). __h_0_mem );
                __h_match1296_1_item  = (((__h_match1296_0_item -> __h_data ). Cons ). __h_1_mem );
                snd1  = (((__h_match1296_1_item -> __h_data ). Cons ). __h_0_mem );
              }
            ({ /* cicili#Let1303 */
              bool __h_case_result  = ((match1279 -> __h_table -> hasLen )(match1279 , 2) ==  2 );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1307 */
                  fprintf (stdout , "first and second char from String: %c %c\n", fst1 , snd1 );
                }
              else
                { /* cicili#Let1314 */
                  typeof(match1279 ) __h_match1312_0_item ;
                  typeof((((__h_match1312_0_item -> __h_data ). Cons ). __h_0_mem )) fst21 ;
                  typeof((((__h_match1312_0_item -> __h_data ). Cons ). __h_1_mem )) __h_match1312_1_arg ;
                  typeof((((__h_match1312_1_arg -> __h_data ). Cons ). __h_0_mem )) ch1 ;
                  typeof((((__h_match1312_1_arg -> __h_data ). Cons ). __h_1_mem )) tail1 ;
                  // ----------
                  if ((match1279 -> __h_table -> hasLen )(match1279 , 1) ==  1 )
                    { /* cicili#Block1318 */
                      __h_match1312_0_item  = match1279 ;
                      fst21  = (((__h_match1312_0_item -> __h_data ). Cons ). __h_0_mem );
                      __h_match1312_1_arg  = (((__h_match1312_0_item -> __h_data ). Cons ). __h_1_mem );
                    }
                  ({ /* cicili#Let1320 */
                    bool __h_case_result  = (((match1279 -> __h_table -> hasLen )(match1279 , 1) ==  1 ) &&  (true  &&  (((__h_match1312_1_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1322 */
                              (ch1  =  (((__h_match1312_1_arg -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn1324 */
                              (tail1  =  (((__h_match1312_1_arg -> __h_data ). Cons ). __h_1_mem ) );
                              true ;
                            }) ) ) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block1328 */
                        fprintf (stdout , "first and second char from String: %c, %c, %p\n", fst21 , ch1 , tail1 );
                      }
                    else
                      { /* cicili#Let1334 */
                        typeof(match1279 ) __h_match1333_0_item ;
                        typeof((((__h_match1333_0_item -> __h_data ). Cons ). __h_0_mem )) fst3 ;
                        // ----------
                        if ((match1279 -> __h_table -> hasLen )(match1279 , 1) ==  1 )
                          { /* cicili#Block1338 */
                            __h_match1333_0_item  = match1279 ;
                            fst3  = (((__h_match1333_0_item -> __h_data ). Cons ). __h_0_mem );
                          }
                        ({ /* cicili#Let1340 */
                          bool __h_case_result  = ((match1279 -> __h_table -> hasLen )(match1279 , 1) ==  1 );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block1344 */
                              fprintf (stdout , "first char from String: %c\n", fst3 );
                            }
                          else
                            { /* cicili#Let1350 */
                              // ----------
                              
                              { /* cicili#Block1354 */
                                fprintf (stdout , "default case String\n");
                              }
                            }
                        });
                      }
                  });
                }
            });
          }
      });
    }
  });
  ({ /* cicili#Let1358 */
    __auto_type intarr  = ((const int[]){ 8, 7, 6});
    __auto_type ilist2  __attribute__((__cleanup__(free_List_int ))) = pure_List_int (intarr , 3);
    // ----------
    ({ /* cicili#Let1363 */
      __auto_type ilist0  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1365 */
        __auto_type ilist0  = pure_List_int (((const int[]){ 1, 2, 3, 4}), 4);
        // ----------
        ((void)(ilist0 -> __h_table -> freeClass ));
        ilist0 ;
      });
      __auto_type ilist1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1370 */
        __auto_type ilist1  = (ilist0 -> __h_table -> push )(5, ilist0 );
        // ----------
        ((void)(ilist1 -> __h_table -> freeClass ));
        ilist1 ;
      });
      __auto_type ilist3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1375 */
        __auto_type ilist3  = (ilist2 -> __h_table -> append )(ilist2 , ilist1 );
        // ----------
        ((void)(ilist3 -> __h_table -> freeClass ));
        ilist3 ;
      });
      __auto_type ilist4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1380 */
        __auto_type ilist4  = (ilist3 -> __h_table -> take )(5, ilist3 );
        // ----------
        ((void)(ilist4 -> __h_table -> freeClass ));
        ilist4 ;
      });
      // ----------
      fprintf (stdout , "first elem of int list0: %d\n", ({ /* cicili#Let1388 */
          __auto_type match1387  = (ilist0 -> __h_table -> head )(ilist0 );
          typeof((((match1387 . __h_data ). Just ). __h_0_mem )) i ;
          // ----------
          
          ({ /* cicili#Let1393 */
            bool __h_case_result  = (true  &&  (((match1387 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1394 */
                  (i  =  (((match1387 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn1397 */
                i ;
              }) : ({ /* cicili#Let1401 */
                // ----------
                
                ({ /* cicili#Progn1405 */
                  -1;
                });
              }));
          });
        }));
      fprintf (stdout , "first elem of int list1: %d\n", ({ /* cicili#Let1410 */
          __auto_type match1409  = (ilist0 -> __h_table -> head )(ilist1 );
          typeof((((match1409 . __h_data ). Just ). __h_0_mem )) i ;
          // ----------
          
          ({ /* cicili#Let1415 */
            bool __h_case_result  = (true  &&  (((match1409 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1416 */
                  (i  =  (((match1409 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn1419 */
                i ;
              }) : ({ /* cicili#Let1423 */
                // ----------
                
                ({ /* cicili#Progn1427 */
                  -1;
                });
              }));
          });
        }));
      fprintf (stdout , "list0:\n");
      (ilist0 -> __h_table -> show )(ilist0 );
      fprintf (stdout , "\nlist1 push 5:\n");
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
  ({ /* cicili#Let1440 */
    __auto_type ra0  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1442 */
      __auto_type ra0  = new_Range_int (1, 20, 3);
      // ----------
      ((void)(ra0 -> __h_table -> freeClass ));
      ra0 ;
    });
    __auto_type ra1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1445 */
      __auto_type ra1  = (ra0 -> __h_table -> take )(3, ra0 );
      // ----------
      ((void)(ra1 -> __h_table -> freeClass ));
      ra1 ;
    });
    __auto_type ra2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1450 */
      __auto_type ra2  = (ra0 -> __h_table -> take )(4, ra0 );
      // ----------
      ((void)(ra2 -> __h_table -> freeClass ));
      ra2 ;
    });
    __auto_type rad1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1455 */
      __auto_type rad1  = (ra0 -> __h_table -> drop )(4, ra0 );
      // ----------
      ((void)(rad1 -> __h_table -> freeClass ));
      rad1 ;
    });
    __auto_type ra4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1460 */
      __auto_type ra4  = (rad1 -> __h_table -> take )(2, rad1 );
      // ----------
      ((void)(ra4 -> __h_table -> freeClass ));
      ra4 ;
    });
    __auto_type ra5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1465 */
      __auto_type ra5  = (rad1 -> __h_table -> take )(4, rad1 );
      // ----------
      ((void)(ra5 -> __h_table -> freeClass ));
      ra5 ;
    });
    __auto_type ra3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1470 */
      __auto_type ra3  = (ra0 -> __h_table -> take )(10, ra0 );
      // ----------
      ((void)(ra3 -> __h_table -> freeClass ));
      ra3 ;
    });
    // ----------
    fprintf (stdout , "range 1 20 3:\n");
    (ra0 -> __h_table -> show )(ra0 );
    fprintf (stdout , "\ntake 3  of range 1 20 3:\n");
    show_List_int (ra1 );
    fprintf (stdout , "\ntake 4  of range 1 20 3:\n");
    (ra1 -> __h_table -> show )(ra2 );
    fprintf (stdout , "\ntake 2  of drop  4 range 1 20 3:\n");
    (ra1 -> __h_table -> show )(ra4 );
    fprintf (stdout , "\ntake 4  of drop  4 range 1 20 3:\n");
    (ra1 -> __h_table -> show )(ra5 );
    fprintf (stdout , "\ntake 10 of range 1 20 3:\n");
    (get_List_int__H_Table ()-> show )(ra3 );
  });
  ({ /* cicili#Let1489 */
    __auto_type str0  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1491 */
      __auto_type str0  = new_String_Const ("Hello World!");
      // ----------
      ((void)(str0 -> __h_table -> freeClass ));
      str0 ;
    });
    __auto_type str1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1496 */
      __auto_type str1  = pure_List_int (((const int[]){ 72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 33}), 12);
      // ----------
      ((void)(str1 -> __h_table -> freeClass ));
      str1 ;
    });
    // ----------
    fprintf (stdout , "\nString to List^int:\n");
    (get_List_int__H_Table ()-> show )(((List_int)(*((List_int *)(&str0 )))));
    fprintf (stdout , "\nString to List^char:\n");
    (get_List_char__H_Table ()-> show )(((List_char)(*((List_char *)(&str0 )))));
    fprintf (stdout , "\nList^int to List^char:\n");
    show_List_char (((List_char)(*((List_char *)(&str1 )))));
    fprintf (stdout , "\nList^int to String:\n");
    show_String (((String)(*((String *)(&str1 )))));
    putchar ('\n');
  });
}
