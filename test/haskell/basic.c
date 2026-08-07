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
    } Byte , _2 ;
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
    ;
    ;
    ({ /* cicili#Let152 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Byte_t  ) &&  ({ /* cicili#Progn153 */
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
          ;
          ;
          ({ /* cicili#Let167 */
            bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Short_t  ) &&  ({ /* cicili#Progn168 */
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
                ;
                ;
                ({ /* cicili#Let182 */
                  bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Int_t  ) &&  ({ /* cicili#Progn183 */
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
  { /* cicili#Let198 */
    Integer instance  = ((Integer){ get_Integer__H_Table (), __h_Byte_t , .__h_data.Byte = { c }});
    // ----------
    return instance ;
  }
}
Integer Short (short s ) {
  { /* cicili#Let202 */
    Integer instance  = ((Integer){ get_Integer__H_Table (), __h_Short_t , .__h_data.Short = { s }});
    // ----------
    return instance ;
  }
}
Integer Int (int x ) {
  { /* cicili#Let206 */
    Integer instance  = ((Integer){ get_Integer__H_Table (), __h___t , .__h_data._ = { x }});
    // ----------
    return instance ;
  }
}
#endif /* __Integer__H_IMPL__ */ 
void show_Integer (Integer self ) {
  ({ /* cicili#Let213 */
    typeof((((self . __h_data ). Byte ). __h_0_mem )) c ;
    // ----------
    ;
    ;
    ({ /* cicili#Let215 */
      bool __h_case_result  = (true  &&  (((self . __h_ctor ) ==  __h_Byte_t  ) &&  ({ /* cicili#Progn216 */
            (c  =  (((self . __h_data ). Byte ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      ((__h_case_result ) ? ({ /* cicili#Progn221 */
          fprintf (stdout , "Integer is Byte: %d\n", c );
        }) : ({ /* cicili#Let226 */
          typeof((((self . __h_data ). Short ). __h_0_mem )) sh ;
          // ----------
          ;
          ;
          ({ /* cicili#Let228 */
            bool __h_case_result  = (true  &&  (((self . __h_ctor ) ==  __h_Short_t  ) &&  ({ /* cicili#Progn229 */
                  (sh  =  (((self . __h_data ). Short ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn234 */
                fprintf (stdout , "Integer is Short: %d\n", sh );
              }) : ({ /* cicili#Let239 */
                typeof((((self . __h_data ). Int ). __h_0_mem )) il ;
                // ----------
                ;
                ;
                ({ /* cicili#Let241 */
                  bool __h_case_result  = (true  &&  (((self . __h_ctor ) ==  __h_Int_t  ) &&  (({ /* cicili#Progn242 */
                          (il  =  (((self . __h_data ). Int ). __h_0_mem ) );
                          true ;
                        }) &&  (il  <  1000 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn247 */
                      fprintf (stdout , "Integer is Int below 1000: %d\n", il );
                    }) : ({ /* cicili#Let252 */
                      typeof((((self . __h_data ). Int ). __h_0_mem )) i ;
                      // ----------
                      ;
                      ;
                      ({ /* cicili#Let254 */
                        bool __h_case_result  = (true  &&  (((self . __h_ctor ) ==  __h_Int_t  ) &&  (({ /* cicili#Progn255 */
                                (i  =  (((self . __h_data ). Int ). __h_0_mem ) );
                                true ;
                              }) &&  ((i  >=  1000 ) &&  (i  <  10000 ) ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn260 */
                            fprintf (stdout , "Integer is Int between 1000 and 10000: %d\n", i );
                          }) : ({ /* cicili#Let265 */
                            // ----------
                            ;
                            ;
                            ({ /* cicili#Progn267 */
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
  union { /* ciciliUnion281 */
    struct { /* ciciliStruct282 */
      Maybe_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct283 */
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
  { /* cicili#Let311 */
    Maybe_Maybe_char instance  = ((Maybe_Maybe_char){ get_Maybe_Maybe_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Maybe_char Nothing_Maybe_char () {
  { /* cicili#Let316 */
    Maybe_Maybe_char instance  = ((Maybe_Maybe_char){ get_Maybe_Maybe_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Maybe_char__H_IMPL__ */ 
void print_inside_maybe (Maybe_Maybe_char mb ) {
  { /* cicili#Let322 */
    // ----------
    ;
    ;
    ({ /* cicili#Let324 */
      bool __h_case_result  = (true  &&  ((mb . __h_ctor ) ==  __h_Nothing_t  ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block329 */
          fprintf (stdout , "wrapper Nothing Maybe char: Nothing\n");
        }
      else
        { /* cicili#Let335 */
          typeof((((mb . __h_data ). Just ). __h_0_mem )) mc ;
          // ----------
          ;
          ;
          ({ /* cicili#Let337 */
            bool __h_case_result  = (true  &&  (((mb . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn338 */
                  (mc  =  (((mb . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block344 */
                { /* cicili#Let348 */
                  // ----------
                  ;
                  ;
                  ({ /* cicili#Let350 */
                    bool __h_case_result  = (true  &&  ((mc . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block355 */
                        fprintf (stdout , "wrapper Just Nothing char: Nothing\n");
                      }
                    else
                      { /* cicili#Let361 */
                        typeof((((mc . __h_data ). Just ). __h_0_mem )) c ;
                        // ----------
                        ;
                        ;
                        ({ /* cicili#Let363 */
                          bool __h_case_result  = (true  &&  (((mc . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn364 */
                                (c  =  (((mc . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          if (__h_case_result )
                            { /* cicili#Block370 */
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
  { /* cicili#Let377 */
    // ----------
    ;
    ;
    ({ /* cicili#Let379 */
      bool __h_case_result  = (true  &&  ((imb . __h_ctor ) ==  __h_Nothing_t  ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block384 */
          fprintf (stdout , "inner Nothing Maybe char: Nothing\n");
        }
      else
        { /* cicili#Let391 */
          typeof((((imb . __h_data ). Just ). __h_0_mem )) __h_match389_0_arg ;
          // ----------
          ;
          ;
          ({ /* cicili#Let393 */
            bool __h_case_result  = (true  &&  (((imb . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn394 */
                    (__h_match389_0_arg  =  (((imb . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ((__h_match389_0_arg . __h_ctor ) ==  __h_Nothing_t  ) ) ) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block400 */
                fprintf (stdout , "inner Just Nothing char: Nothing\n");
              }
            else
              { /* cicili#Let407 */
                typeof((((imb . __h_data ). Just ). __h_0_mem )) __h_match405_0_arg ;
                typeof((((__h_match405_0_arg . __h_data ). Just ). __h_0_mem )) c ;
                // ----------
                ;
                ;
                ({ /* cicili#Let409 */
                  bool __h_case_result  = (true  &&  (((imb . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn410 */
                          (__h_match405_0_arg  =  (((imb . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) &&  (true  &&  (((__h_match405_0_arg . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn412 */
                              (c  =  (((__h_match405_0_arg . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) ) ) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block418 */
                      fprintf (stdout , "inner Just Just char: Just %c\n", c );
                    }
                });
              }
          });
        }
    });
  }
}
typedef struct cicilioaVsd10u_RwvfM6chfS08e267TM_ {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} cicilioaVsd10u_RwvfM6chfS08e267TM_;
typedef cicilioaVsd10u_RwvfM6chfS08e267TM_ aTuple ;
void print_tuple (aTuple tup ) {
  { /* cicili#Let427 */
    typeof((tup . __h_0_mem )) i ;
    typeof((tup . __h_1_mem )) c ;
    typeof((tup . __h_2_mem )) s ;
    // ----------
    ;
    ;
    ({ /* cicili#Let429 */
      bool __h_case_result  = (true  &&  (((({ /* cicili#Progn430 */
                (i  =  (tup . __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn432 */
                (c  =  (tup . __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn434 */
              (s  =  (tup . __h_2_mem ) );
              true ;
            }) ) &&  (s  >  10 ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block440 */
          fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
        }
      else
        { /* cicili#Let446 */
          typeof((tup . __h_0_mem )) fi ;
          typeof((tup . __h_1_mem )) fc ;
          typeof((tup . __h_2_mem )) fs ;
          // ----------
          ;
          ;
          ({ /* cicili#Let448 */
            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn449 */
                    (fi  =  (tup . __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn451 */
                    (fc  =  (tup . __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn453 */
                  (fs  =  (tup . __h_2_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block459 */
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
  union { /* ciciliUnion473 */
    struct { /* ciciliStruct474 */
      aTuple __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct475 */
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
  { /* cicili#Let503 */
    Maybe_aTuple instance  = ((Maybe_aTuple){ get_Maybe_aTuple__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_aTuple Nothing_aTuple () {
  { /* cicili#Let508 */
    Maybe_aTuple instance  = ((Maybe_aTuple){ get_Maybe_aTuple__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_aTuple__H_IMPL__ */ 
int factorial (int n ) {
  return (((n  ==  1 )) ? 1 : (n  *  factorial ((n  -  1 )) ));
}
int __ciciliL_612 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
int __ciciliL_620 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
typedef struct cicilio8xH_iSWJTcfx2UNn79qwVSwXrc_ {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} cicilio8xH_iSWJTcfx2UNn79qwVSwXrc_;
typedef struct cicilikGY7ZbLe9n4aBbz8tEzqoymfZ8c_ {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} cicilikGY7ZbLe9n4aBbz8tEzqoymfZ8c_;
typedef struct cicilim6Ou542V5gzuaL1cXsIqpWLQvJo_ {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
} cicilim6Ou542V5gzuaL1cXsIqpWLQvJo_;
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
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_612 (2, 16));
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_620 (2, 16));
  fprintf (stdout , "output of function closure with $>: %d\n", (2 +  3 ));
  { /* cicili#Block634 */
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
  ({ /* cicili#Let696 */
    __auto_type b  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let698 */
      __auto_type b  = Byte (11);
      // ----------
      ((void)((b . __h_table )-> freeData ));
      b ;
    });
    __auto_type s  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let701 */
      __auto_type s  = Short (21);
      // ----------
      ((void)((s . __h_table )-> freeData ));
      s ;
    });
    __auto_type i  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let704 */
      __auto_type i  = Int (31);
      // ----------
      ((void)((i . __h_table )-> freeData ));
      i ;
    });
    // ----------
    printf ("test destructure of Integer\n");
  });
  { /* cicili#Let707 */
    aTuple tup0  = { 4400, 'A', 33};
    struct cicilio8xH_iSWJTcfx2UNn79qwVSwXrc_ tup1  = { 4401, 'B', 34};
    __auto_type tup2  = ((struct cicilikGY7ZbLe9n4aBbz8tEzqoymfZ8c_ ){ 4402, 'C', 35});
    // ----------
    print_tuple (tup0 );
    print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
    ({ /* cicili#Let719 */
      typeof((tup2 . __h_0_mem )) i ;
      typeof((tup2 . __h_1_mem )) c ;
      typeof((tup2 . __h_2_mem )) s ;
      // ----------
      ;
      ;
      ({ /* cicili#Let721 */
        bool __h_case_result  = (true  &&  (((({ /* cicili#Progn722 */
                  (i  =  (tup2 . __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn724 */
                  (c  =  (tup2 . __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn726 */
                (s  =  (tup2 . __h_2_mem ) );
                true ;
              }) ) &&  (s  >  10 ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn731 */
            fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
          }) : ({ /* cicili#Let736 */
            typeof((tup2 . __h_0_mem )) fi ;
            typeof((tup2 . __h_1_mem )) fc ;
            typeof((tup2 . __h_2_mem )) fs ;
            // ----------
            ;
            ;
            ({ /* cicili#Let738 */
              bool __h_case_result  = (true  &&  ((({ /* cicili#Progn739 */
                      (fi  =  (tup2 . __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn741 */
                      (fc  =  (tup2 . __h_1_mem ) );
                      true ;
                    }) ) &&  ({ /* cicili#Progn743 */
                    (fs  =  (tup2 . __h_2_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn748 */
                  fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", fi , fc , fs );
                }) : ({ /* cicili#Let753 */
                  // ----------
                  ;
                  ;
                  ({ /* cicili#Progn755 */
                    fprintf (stdout , "No Tuple?!");
                  });
                }));
            });
          }));
      });
    });
  }
  { /* cicili#Let758 */
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
  { /* cicili#Let769 */
    __auto_type match768  = Just_aTuple (((aTuple){ 55, 'D', 93}));
    // ----------
    ;
    ;
    ({ /* cicili#Let772 */
      bool __h_case_result  = (true  &&  ((match768 . __h_ctor ) ==  __h_Nothing_t  ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block777 */
          fprintf (stdout , "tuple inside maybe: Nothing");
        }
      else
        { /* cicili#Let784 */
          typeof((((match768 . __h_data ). Just ). __h_0_mem )) t ;
          typeof((t . __h_0_mem )) i ;
          typeof((t . __h_1_mem )) c ;
          typeof((t . __h_2_mem )) s ;
          // ----------
          ;
          ;
          ({ /* cicili#Let786 */
            bool __h_case_result  = (true  &&  (((match768 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn787 */
                    (t  =  (((match768 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ((({ /* cicili#Progn789 */
                          (i  =  (t . __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn791 */
                          (c  =  (t . __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn793 */
                        (s  =  (t . __h_2_mem ) );
                        true ;
                      }) ) ) ) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block799 */
                { /* cicili#Let803 */
                  typeof((t . __h_0_mem )) ii ;
                  typeof((t . __h_1_mem )) cc ;
                  typeof((t . __h_2_mem )) ss ;
                  // ----------
                  ;
                  ;
                  ({ /* cicili#Let805 */
                    bool __h_case_result  = (true  &&  ((({ /* cicili#Progn806 */
                            (ii  =  (t . __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn808 */
                            (cc  =  (t . __h_1_mem ) );
                            true ;
                          }) ) &&  ({ /* cicili#Progn810 */
                          (ss  =  (t . __h_2_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block816 */
                        ({ /* cicili#Progn818 */
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
  { /* cicili#Let824 */
    __auto_type match823  = Just_aTuple (((aTuple){ 56, 'E', 94}));
    // ----------
    ;
    ;
    ({ /* cicili#Let827 */
      bool __h_case_result  = (true  &&  ((match823 . __h_ctor ) ==  __h_Nothing_t  ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block832 */
          fprintf (stdout , "ow tuple inside maybe: Nothing");
        }
      else
        { /* cicili#Let839 */
          typeof((((match823 . __h_data ). Just ). __h_0_mem )) __h_match837_0_arg ;
          typeof((__h_match837_0_arg . __h_0_mem )) i ;
          typeof((__h_match837_0_arg . __h_1_mem )) c ;
          typeof((__h_match837_0_arg . __h_2_mem )) s ;
          // ----------
          ;
          ;
          ({ /* cicili#Let841 */
            bool __h_case_result  = (true  &&  (((match823 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn842 */
                    (__h_match837_0_arg  =  (((match823 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ((({ /* cicili#Progn844 */
                          (i  =  (__h_match837_0_arg . __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn846 */
                          (c  =  (__h_match837_0_arg . __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn848 */
                        (s  =  (__h_match837_0_arg . __h_2_mem ) );
                        true ;
                      }) ) ) ) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block854 */
                fprintf (stdout , "ow tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
              }
          });
        }
    });
  }
  ({ /* cicili#Let858 */
    __auto_type tt  = ((struct cicilim6Ou542V5gzuaL1cXsIqpWLQvJo_ ){ 5060, Just_char ('M')});
    // ----------
    { /* cicili#Let865 */
      typeof((tt . __h_1_mem )) __h_match863_1_arg ;
      // ----------
      ;
      ;
      ({ /* cicili#Let867 */
        bool __h_case_result  = (true  &&  (({ /* cicili#Progn868 */
              (__h_match863_1_arg  =  (tt . __h_1_mem ) );
              true ;
            }) &&  (true  &&  ((__h_match863_1_arg . __h_ctor ) ==  __h_Nothing_t  ) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block874 */
            fprintf (stdout , "maybe inside tuple: Nothing\n");
          }
        else
          { /* cicili#Let881 */
            typeof((tt . __h_0_mem )) i ;
            typeof((tt . __h_1_mem )) __h_match879_1_arg ;
            typeof((((__h_match879_1_arg . __h_data ). Just ). __h_0_mem )) c ;
            // ----------
            ;
            ;
            ({ /* cicili#Let883 */
              bool __h_case_result  = (true  &&  ((({ /* cicili#Progn884 */
                      (i  =  (tt . __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn886 */
                      (__h_match879_1_arg  =  (tt . __h_1_mem ) );
                      true ;
                    }) ) &&  (true  &&  (((__h_match879_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn888 */
                          (c  =  (((__h_match879_1_arg . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) &&  (c  >  'L' ) ) ) ) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block894 */
                  fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
                }
              else
                { /* cicili#Let901 */
                  __auto_type t  = tt ;
                  typeof((t . __h_1_mem )) __h_match899_1_arg ;
                  typeof((((__h_match899_1_arg . __h_data ). Just ). __h_0_mem )) cm ;
                  // ----------
                  ;
                  ;
                  ({ /* cicili#Let903 */
                    bool __h_case_result  = (true  &&  (({ /* cicili#Progn904 */
                          (__h_match899_1_arg  =  (t . __h_1_mem ) );
                          true ;
                        }) &&  (true  &&  (((__h_match899_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn906 */
                                (cm  =  (((__h_match899_1_arg . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) &&  (cm  <  'L' ) ) ) ) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block912 */
                        { /* cicili#Let917 */
                          typeof((t . __h_0_mem )) im ;
                          typeof((t . __h_1_mem )) __h_match915_1_arg ;
                          // ----------
                          ;
                          ;
                          ({ /* cicili#Let919 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn920 */
                                    (im  =  (t . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn922 */
                                    (__h_match915_1_arg  =  (t . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  ((__h_match915_1_arg . __h_ctor ) ==  __h_Just_t  ) ) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block928 */
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
  ({ /* cicili#Let932 */
    __auto_type txt  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let934 */
      __auto_type txt  = new_String_Const ("Haskell List");
      // ----------
      ((void)(txt -> __h_table -> freeClass ));
      txt ;
    });
    // ----------
    (txt -> __h_table -> show )(stdout , txt );
    putchar ('\n');
    fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let944 */
        __auto_type match943  = nth_String (3, txt );
        typeof((((match943 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ;
        ({ /* cicili#Let947 */
          bool __h_case_result  = (true  &&  (((match943 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn948 */
                (c  =  (((match943 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn953 */
              fprintf (stdout , "the 4th element is: %c\n", c );
            }) : ({ /* cicili#Let958 */
              // ----------
              ;
              ;
              ({ /* cicili#Progn960 */
                fprintf (stdout , "4th element not found\n");
              });
            }));
        });
      }));
    ({ /* cicili#Progn969 */
      ({ /* cicili#Let977 */
        __auto_type match976  = (txt -> __h_table -> nth )(4, txt );
        typeof((((match976 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ;
        ({ /* cicili#Let983 */
          bool __h_case_result  = (true  &&  (((match976 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn984 */
                (c  =  (((match976 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn989 */
              fprintf (stdout , "the %dth element is: %c\n", 4, c );
            }) : ({ /* cicili#Let994 */
              // ----------
              ;
              ;
              ({ /* cicili#Progn996 */
                fprintf (stdout , "%dth element not found\n", 4);
              });
            }));
        });
      });
      ({ /* cicili#Let1005 */
        __auto_type match1004  = (txt -> __h_table -> nth )(5, txt );
        typeof((((match1004 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ;
        ({ /* cicili#Let1011 */
          bool __h_case_result  = (true  &&  (((match1004 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1012 */
                (c  =  (((match1004 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1017 */
              fprintf (stdout , "the %dth element is: %c\n", 5, c );
            }) : ({ /* cicili#Let1022 */
              // ----------
              ;
              ;
              ({ /* cicili#Progn1024 */
                fprintf (stdout , "%dth element not found\n", 5);
              });
            }));
        });
      });
      ({ /* cicili#Let1033 */
        __auto_type match1032  = (txt -> __h_table -> nth )(6, txt );
        typeof((((match1032 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ;
        ({ /* cicili#Let1039 */
          bool __h_case_result  = (true  &&  (((match1032 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1040 */
                (c  =  (((match1032 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1045 */
              fprintf (stdout , "the %dth element is: %c\n", 6, c );
            }) : ({ /* cicili#Let1050 */
              // ----------
              ;
              ;
              ({ /* cicili#Progn1052 */
                fprintf (stdout , "%dth element not found\n", 6);
              });
            }));
        });
      });
      ({ /* cicili#Let1061 */
        __auto_type match1060  = (txt -> __h_table -> nth )((txt -> __h_table -> len )(txt ), txt );
        typeof((((match1060 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ;
        ({ /* cicili#Let1068 */
          bool __h_case_result  = (true  &&  (((match1060 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1069 */
                (c  =  (((match1060 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1074 */
              fprintf (stdout , "the %dth element is: %c\n", (txt -> __h_table -> len )(txt ), c );
            }) : ({ /* cicili#Let1080 */
              // ----------
              ;
              ;
              ({ /* cicili#Progn1082 */
                fprintf (stdout , "%dth element not found\n", (txt -> __h_table -> len )(txt ));
              });
            }));
        });
      });
    });
    fprintf (stdout , "output of letin: %d\n", ({ /* cicili#Let1087 */
        __auto_type llen  = (txt -> __h_table -> len )(txt );
        // ----------
        ({ /* cicili#Progn1095 */
          ({ /* cicili#Let1103 */
            __auto_type match1102  = (txt -> __h_table -> nth )(4, txt );
            typeof((((match1102 . __h_data ). Just ). __h_0_mem )) c ;
            // ----------
            ;
            ;
            ({ /* cicili#Let1109 */
              bool __h_case_result  = (true  &&  (((match1102 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1110 */
                    (c  =  (((match1102 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn1115 */
                  fprintf (stdout , "the %dth element is: %c\n", 4, c );
                }) : ({ /* cicili#Let1120 */
                  // ----------
                  ;
                  ;
                  ({ /* cicili#Progn1122 */
                    fprintf (stdout , "%dth element not found\n", 4);
                  });
                }));
            });
          });
          ({ /* cicili#Let1131 */
            __auto_type match1130  = (txt -> __h_table -> nth )(5, txt );
            typeof((((match1130 . __h_data ). Just ). __h_0_mem )) c ;
            // ----------
            ;
            ;
            ({ /* cicili#Let1137 */
              bool __h_case_result  = (true  &&  (((match1130 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1138 */
                    (c  =  (((match1130 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn1143 */
                  fprintf (stdout , "the %dth element is: %c\n", 5, c );
                }) : ({ /* cicili#Let1148 */
                  // ----------
                  ;
                  ;
                  ({ /* cicili#Progn1150 */
                    fprintf (stdout , "%dth element not found\n", 5);
                  });
                }));
            });
          });
          ({ /* cicili#Let1159 */
            __auto_type match1158  = (txt -> __h_table -> nth )(6, txt );
            typeof((((match1158 . __h_data ). Just ). __h_0_mem )) c ;
            // ----------
            ;
            ;
            ({ /* cicili#Let1165 */
              bool __h_case_result  = (true  &&  (((match1158 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1166 */
                    (c  =  (((match1158 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn1171 */
                  fprintf (stdout , "the %dth element is: %c\n", 6, c );
                }) : ({ /* cicili#Let1176 */
                  // ----------
                  ;
                  ;
                  ({ /* cicili#Progn1178 */
                    fprintf (stdout , "%dth element not found\n", 6);
                  });
                }));
            });
          });
          ({ /* cicili#Let1187 */
            __auto_type match1186  = (txt -> __h_table -> nth )(llen , txt );
            typeof((((match1186 . __h_data ). Just ). __h_0_mem )) c ;
            // ----------
            ;
            ;
            ({ /* cicili#Let1193 */
              bool __h_case_result  = (true  &&  (((match1186 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1194 */
                    (c  =  (((match1186 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn1199 */
                  fprintf (stdout , "the %dth element is: %c\n", llen , c );
                }) : ({ /* cicili#Let1204 */
                  // ----------
                  ;
                  ;
                  ({ /* cicili#Progn1206 */
                    fprintf (stdout , "%dth element not found\n", llen );
                  });
                }));
            });
          });
        });
      }));
    { /* cicili#Let1211 */
      typeof((((txt -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((txt -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ;
      ({ /* cicili#Let1213 */
        bool __h_case_result  = (true  &&  (((txt -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1214 */
                (head  =  (((txt -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1216 */
                (tail  =  (((txt -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block1222 */
            fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , (tail -> __h_table -> len )(tail ));
          }
      });
    }
    ({ /* cicili#Let1227 */
      __auto_type str5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1229 */
        __auto_type str5  = pure_String (((const Char[]){ 'C', 'i', 'c', 'i', 'l', 'i'}), 6);
        // ----------
        ((void)(str5 -> __h_table -> freeClass ));
        str5 ;
      });
      // ----------
      fprintf (stdout , "has 'Cicili' desired length 5: %d\n", (get_String__H_Table ()-> hasLen )(str5 , 5));
      fprintf (stdout , "has 'Cicili' desired length 6: %d\n", hasLen_String (str5 , 6));
      fprintf (stdout , "has 'Cicili' desired length 7: %d\n", (str5 -> __h_table -> hasLen )(str5 , 7));
      { /* cicili#Let1245 */
        typeof(str5 ) __h_match1242_0_item ;
        typeof((((__h_match1242_0_item -> __h_data ). Cons ). __h_0_mem )) ch0 ;
        typeof((((__h_match1242_0_item -> __h_data ). Cons ). __h_1_mem )) __h_match1242_1_arg ;
        typeof((((__h_match1242_1_arg -> __h_data ). Cons ). __h_0_mem )) ch1 ;
        typeof((((__h_match1242_1_arg -> __h_data ). Cons ). __h_1_mem )) __h_match1243_1_arg ;
        typeof((((__h_match1243_1_arg -> __h_data ). Cons ). __h_0_mem )) ch2 ;
        typeof((((__h_match1243_1_arg -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        if ((str5 -> __h_table -> hasLen )(str5 , 1) ==  1 )
          { /* cicili#Block1249 */
            __h_match1242_0_item  = str5 ;
            ch0  = (((__h_match1242_0_item -> __h_data ). Cons ). __h_0_mem );
            __h_match1242_1_arg  = (((__h_match1242_0_item -> __h_data ). Cons ). __h_1_mem );
          }
        ({ /* cicili#Let1251 */
          bool __h_case_result  = (((str5 -> __h_table -> hasLen )(str5 , 1) ==  1 ) &&  (true  &&  (((__h_match1242_1_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1253 */
                      (ch1  =  (((__h_match1242_1_arg -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn1255 */
                      (__h_match1243_1_arg  =  (((__h_match1242_1_arg -> __h_data ). Cons ). __h_1_mem ) );
                      true ;
                    }) ) &&  (true  &&  (((__h_match1243_1_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1257 */
                          (ch2  =  (((__h_match1243_1_arg -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn1259 */
                          (tail  =  (((__h_match1243_1_arg -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) ) ) ) ) );
          // ----------
          ;
          if (__h_case_result )
            { /* cicili#Block1263 */
              { /* cicili#Block1265 */
                fprintf (stdout , "fst snd trd chars and tail from String: %c, %c, %c, ", ch0 , ch1 , ch2 );
                show_String (stdout , tail );
                putchar ('\n');
              }
            }
        });
      }
    });
    fprintf (stdout , "drop 10 of 'Haskell List'\n");
    { /* cicili#Let1271 */
      __auto_type match1270  = (txt -> __h_table -> drop )(10, txt );
      typeof(match1270 ) __h_match1270_0_item ;
      typeof((((__h_match1270_0_item -> __h_data ). Cons ). __h_0_mem )) fst ;
      typeof((((__h_match1270_0_item -> __h_data ). Cons ). __h_1_mem )) __h_match1270_1_item ;
      typeof((((__h_match1270_1_item -> __h_data ). Cons ). __h_0_mem )) snd ;
      typeof((((__h_match1270_1_item -> __h_data ). Cons ). __h_1_mem )) __h_match1270_2_item ;
      typeof((((__h_match1270_2_item -> __h_data ). Cons ). __h_0_mem )) trd ;
      // ----------
      ;
      if ((match1270 -> __h_table -> hasLen )(match1270 , 3) ==  3 )
        { /* cicili#Block1276 */
          __h_match1270_0_item  = match1270 ;
          fst  = (((__h_match1270_0_item -> __h_data ). Cons ). __h_0_mem );
          __h_match1270_1_item  = (((__h_match1270_0_item -> __h_data ). Cons ). __h_1_mem );
          snd  = (((__h_match1270_1_item -> __h_data ). Cons ). __h_0_mem );
          __h_match1270_2_item  = (((__h_match1270_1_item -> __h_data ). Cons ). __h_1_mem );
          trd  = (((__h_match1270_2_item -> __h_data ). Cons ). __h_0_mem );
        }
      ({ /* cicili#Let1278 */
        bool __h_case_result  = ((match1270 -> __h_table -> hasLen )(match1270 , 3) ==  3 );
        // ----------
        ;
        if (__h_case_result )
          { /* cicili#Block1282 */
            fprintf (stdout , "first, second and third char from String: %c %c %c\n", fst , snd , trd );
          }
        else
          { /* cicili#Let1288 */
            typeof(match1270 ) __h_match1287_0_item ;
            typeof((((__h_match1287_0_item -> __h_data ). Cons ). __h_0_mem )) fst1 ;
            typeof((((__h_match1287_0_item -> __h_data ). Cons ). __h_1_mem )) __h_match1287_1_item ;
            typeof((((__h_match1287_1_item -> __h_data ). Cons ). __h_0_mem )) snd1 ;
            // ----------
            ;
            if ((match1270 -> __h_table -> hasLen )(match1270 , 2) ==  2 )
              { /* cicili#Block1292 */
                __h_match1287_0_item  = match1270 ;
                fst1  = (((__h_match1287_0_item -> __h_data ). Cons ). __h_0_mem );
                __h_match1287_1_item  = (((__h_match1287_0_item -> __h_data ). Cons ). __h_1_mem );
                snd1  = (((__h_match1287_1_item -> __h_data ). Cons ). __h_0_mem );
              }
            ({ /* cicili#Let1294 */
              bool __h_case_result  = ((match1270 -> __h_table -> hasLen )(match1270 , 2) ==  2 );
              // ----------
              ;
              if (__h_case_result )
                { /* cicili#Block1298 */
                  fprintf (stdout , "first and second char from String: %c %c\n", fst1 , snd1 );
                }
              else
                { /* cicili#Let1305 */
                  typeof(match1270 ) __h_match1303_0_item ;
                  typeof((((__h_match1303_0_item -> __h_data ). Cons ). __h_0_mem )) fst21 ;
                  typeof((((__h_match1303_0_item -> __h_data ). Cons ). __h_1_mem )) __h_match1303_1_arg ;
                  typeof((((__h_match1303_1_arg -> __h_data ). Cons ). __h_0_mem )) ch1 ;
                  typeof((((__h_match1303_1_arg -> __h_data ). Cons ). __h_1_mem )) tail1 ;
                  // ----------
                  ;
                  if ((match1270 -> __h_table -> hasLen )(match1270 , 1) ==  1 )
                    { /* cicili#Block1309 */
                      __h_match1303_0_item  = match1270 ;
                      fst21  = (((__h_match1303_0_item -> __h_data ). Cons ). __h_0_mem );
                      __h_match1303_1_arg  = (((__h_match1303_0_item -> __h_data ). Cons ). __h_1_mem );
                    }
                  ({ /* cicili#Let1311 */
                    bool __h_case_result  = (((match1270 -> __h_table -> hasLen )(match1270 , 1) ==  1 ) &&  (true  &&  (((__h_match1303_1_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1313 */
                              (ch1  =  (((__h_match1303_1_arg -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn1315 */
                              (tail1  =  (((__h_match1303_1_arg -> __h_data ). Cons ). __h_1_mem ) );
                              true ;
                            }) ) ) ) );
                    // ----------
                    ;
                    if (__h_case_result )
                      { /* cicili#Block1319 */
                        fprintf (stdout , "first and second char from String: %c, %c, %p\n", fst21 , ch1 , tail1 );
                      }
                    else
                      { /* cicili#Let1325 */
                        typeof(match1270 ) __h_match1324_0_item ;
                        typeof((((__h_match1324_0_item -> __h_data ). Cons ). __h_0_mem )) fst3 ;
                        // ----------
                        ;
                        if ((match1270 -> __h_table -> hasLen )(match1270 , 1) ==  1 )
                          { /* cicili#Block1329 */
                            __h_match1324_0_item  = match1270 ;
                            fst3  = (((__h_match1324_0_item -> __h_data ). Cons ). __h_0_mem );
                          }
                        ({ /* cicili#Let1331 */
                          bool __h_case_result  = ((match1270 -> __h_table -> hasLen )(match1270 , 1) ==  1 );
                          // ----------
                          ;
                          if (__h_case_result )
                            { /* cicili#Block1335 */
                              fprintf (stdout , "first char from String: %c\n", fst3 );
                            }
                          else
                            { /* cicili#Let1341 */
                              // ----------
                              ;
                              ;
                              { /* cicili#Block1343 */
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
  ({ /* cicili#Let1347 */
    __auto_type intarr  = ((const int[]){ 8, 7, 6});
    __auto_type ilist2  __attribute__((__cleanup__(free_List_int ))) = pure_List_int (intarr , 3);
    // ----------
    ({ /* cicili#Let1352 */
      __auto_type ilist0  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1354 */
        __auto_type ilist0  = pure_List_int (((const int[]){ 1, 2, 3, 4}), 4);
        // ----------
        ((void)(ilist0 -> __h_table -> freeClass ));
        ilist0 ;
      });
      __auto_type ilist1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1359 */
        __auto_type ilist1  = (ilist0 -> __h_table -> push )(5, ilist0 );
        // ----------
        ((void)(ilist1 -> __h_table -> freeClass ));
        ilist1 ;
      });
      __auto_type ilist3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1364 */
        __auto_type ilist3  = (ilist2 -> __h_table -> append )(ilist2 , ilist1 );
        // ----------
        ((void)(ilist3 -> __h_table -> freeClass ));
        ilist3 ;
      });
      __auto_type ilist4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1369 */
        __auto_type ilist4  = (ilist3 -> __h_table -> take )(5, ilist3 );
        // ----------
        ((void)(ilist4 -> __h_table -> freeClass ));
        ilist4 ;
      });
      // ----------
      fprintf (stdout , "first elem of int list0: %d\n", ({ /* cicili#Let1377 */
          __auto_type match1376  = (ilist0 -> __h_table -> head )(ilist0 );
          typeof((((match1376 . __h_data ). Just ). __h_0_mem )) i ;
          // ----------
          ;
          ;
          ({ /* cicili#Let1380 */
            bool __h_case_result  = (true  &&  (((match1376 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1381 */
                  (i  =  (((match1376 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1386 */
                i ;
              }) : ({ /* cicili#Let1390 */
                // ----------
                ;
                ;
                ({ /* cicili#Progn1392 */
                  -1;
                });
              }));
          });
        }));
      fprintf (stdout , "first elem of int list1: %d\n", ({ /* cicili#Let1397 */
          __auto_type match1396  = (ilist0 -> __h_table -> head )(ilist1 );
          typeof((((match1396 . __h_data ). Just ). __h_0_mem )) i ;
          // ----------
          ;
          ;
          ({ /* cicili#Let1400 */
            bool __h_case_result  = (true  &&  (((match1396 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1401 */
                  (i  =  (((match1396 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1406 */
                i ;
              }) : ({ /* cicili#Let1410 */
                // ----------
                ;
                ;
                ({ /* cicili#Progn1412 */
                  -1;
                });
              }));
          });
        }));
      fprintf (stdout , "list0:\n");
      (ilist0 -> __h_table -> show )(stdout , ilist0 );
      fprintf (stdout , "\nlist1 push 5:\n");
      (ilist0 -> __h_table -> show )(stdout , ilist1 );
      fprintf (stdout , "\nlist2:\n");
      (ilist0 -> __h_table -> show )(stdout , ilist2 );
      fprintf (stdout , "\nlist3:\n");
      (ilist0 -> __h_table -> show )(stdout , ilist3 );
      fprintf (stdout , "\nlist4: take 5 of list3:\n");
      (ilist0 -> __h_table -> show )(stdout , ilist4 );
      putchar ('\n');
    });
  });
  ({ /* cicili#Let1425 */
    __auto_type ra0  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1427 */
      __auto_type ra0  = new_Range_int (1, 20, 3);
      // ----------
      ((void)(ra0 -> __h_table -> freeClass ));
      ra0 ;
    });
    __auto_type ra1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1430 */
      __auto_type ra1  = (ra0 -> __h_table -> take )(3, ra0 );
      // ----------
      ((void)(ra1 -> __h_table -> freeClass ));
      ra1 ;
    });
    __auto_type ra2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1435 */
      __auto_type ra2  = (ra0 -> __h_table -> take )(4, ra0 );
      // ----------
      ((void)(ra2 -> __h_table -> freeClass ));
      ra2 ;
    });
    __auto_type rad1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1440 */
      __auto_type rad1  = (ra0 -> __h_table -> drop )(4, ra0 );
      // ----------
      ((void)(rad1 -> __h_table -> freeClass ));
      rad1 ;
    });
    __auto_type ra4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1445 */
      __auto_type ra4  = (rad1 -> __h_table -> take )(2, rad1 );
      // ----------
      ((void)(ra4 -> __h_table -> freeClass ));
      ra4 ;
    });
    __auto_type ra5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1450 */
      __auto_type ra5  = (rad1 -> __h_table -> take )(4, rad1 );
      // ----------
      ((void)(ra5 -> __h_table -> freeClass ));
      ra5 ;
    });
    __auto_type ra3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1455 */
      __auto_type ra3  = (ra0 -> __h_table -> take )(10, ra0 );
      // ----------
      ((void)(ra3 -> __h_table -> freeClass ));
      ra3 ;
    });
    // ----------
    fprintf (stdout , "range 1 20 3:\n");
    (ra0 -> __h_table -> show )(stdout , ra0 );
    fprintf (stdout , "\ntake 3  of range 1 20 3:\n");
    show_List_int (stdout , ra1 );
    fprintf (stdout , "\ntake 4  of range 1 20 3:\n");
    (ra1 -> __h_table -> show )(stdout , ra2 );
    fprintf (stdout , "\ntake 2  of drop  4 range 1 20 3:\n");
    (ra1 -> __h_table -> show )(stdout , ra4 );
    fprintf (stdout , "\ntake 4  of drop  4 range 1 20 3:\n");
    (ra1 -> __h_table -> show )(stdout , ra5 );
    fprintf (stdout , "\ntake 10 of range 1 20 3:\n");
    (get_List_int__H_Table ()-> show )(stdout , ra3 );
  });
  ({ /* cicili#Let1474 */
    __auto_type str0  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1476 */
      __auto_type str0  = new_String_Const ("Hello World!");
      // ----------
      ((void)(str0 -> __h_table -> freeClass ));
      str0 ;
    });
    __auto_type str1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1481 */
      __auto_type str1  = pure_List_int (((const int[]){ 72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 33}), 12);
      // ----------
      ((void)(str1 -> __h_table -> freeClass ));
      str1 ;
    });
    // ----------
    fprintf (stdout , "\nString to List^int:\n");
    (get_List_int__H_Table ()-> show )(stdout , ((List_int)(*((List_int *)(&str0 )))));
    fprintf (stdout , "\nString to List^char:\n");
    (get_List_char__H_Table ()-> show )(stdout , ((List_char)(*((List_char *)(&str0 )))));
    fprintf (stdout , "\nList^int to List^char:\n");
    show_List_char (stdout , ((List_char)(*((List_char *)(&str1 )))));
    fprintf (stdout , "\nList^int to String:\n");
    show_String (stdout , ((String)(*((String *)(&str1 )))));
    putchar ('\n');
  });
}
