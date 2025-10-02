#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "math.h"
int power_irreducible_int (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
typedef enum __h_Bool_ctor_t {
  __h_False_t,
  __h_True_t
} __h_Bool_ctor_t;
typedef struct Bool {
  __h_Bool_ctor_t __h_ctor ;
  union { /* ciciliUnion119 */
    struct { /* ciciliStruct120 */
    } False ;
    struct { /* ciciliStruct121 */
    } True ;
  } __h_data ;
} Bool;
Bool False () {
  return ((Bool){ __h_False_t });
}
Bool True () {
  return ((Bool){ __h_True_t });
}
typedef enum __h_Integer_ctor_t {
  __h_Byte_t,
  __h_Short_t,
  __h_Int_t
} __h_Integer_ctor_t;
typedef struct Integer {
  __h_Integer_ctor_t __h_ctor ;
  union { /* ciciliUnion126 */
    struct { /* ciciliStruct127 */
      char __h_0_mem ;
    } Byte ;
    struct { /* ciciliStruct128 */
      short __h_0_mem ;
    } Short ;
    struct { /* ciciliStruct129 */
      int __h_0_mem ;
    } Int ;
  } __h_data ;
} Integer;
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
  ({ /* cicili#Let137 */
    typeof((((self . __h_data ). Byte ). __h_0_mem )) c ;
    // ----------
    if ((self . __h_ctor ) ==  __h_Byte_t  )
      { /* cicili#Block140 */
        c  = (((self . __h_data ). Byte ). __h_0_mem );
      }
    ({ /* cicili#Let142 */
      bool __h_case_result  = ((self . __h_ctor ) ==  __h_Byte_t  );
      // ----------
      ((__h_case_result ) ? fprintf (stdout , "Integer is Byte: %d\n", c ) : ({ /* cicili#Let147 */
        typeof((((self . __h_data ). Short ). __h_0_mem )) sh ;
        // ----------
        if ((self . __h_ctor ) ==  __h_Short_t  )
          { /* cicili#Block150 */
            sh  = (((self . __h_data ). Short ). __h_0_mem );
          }
        ({ /* cicili#Let152 */
          bool __h_case_result  = ((self . __h_ctor ) ==  __h_Short_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "Integer is Short: %d\n", sh ) : ({ /* cicili#Let157 */
            typeof((((self . __h_data ). Int ). __h_0_mem )) i ;
            // ----------
            if ((self . __h_ctor ) ==  __h_Int_t  )
              { /* cicili#Block160 */
                i  = (((self . __h_data ). Int ). __h_0_mem );
              }
            ({ /* cicili#Let162 */
              bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  (i  <  1000 ) );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "Integer is Int below 1000: %d\n", i ) : ({ /* cicili#Let167 */
                typeof((((self . __h_data ). Int ). __h_0_mem )) i ;
                // ----------
                if ((self . __h_ctor ) ==  __h_Int_t  )
                  { /* cicili#Block170 */
                    i  = (((self . __h_data ). Int ). __h_0_mem );
                  }
                ({ /* cicili#Let172 */
                  bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  ((i  >=  1000 ) &&  (i  <  10000 ) ) );
                  // ----------
                  ((__h_case_result ) ? fprintf (stdout , "Integer is Int between 1000 and 10000: %d\n", i ) : ({ /* cicili#Let177 */
                    // ----------
                    /* cicili#Block179 */
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
#ifndef _H_Maybe_char
#define _H_Maybe_char
typedef enum __h_Maybe_char_ctor_t {
  __h_Nothing_char_t,
  __h_Just_char_t
} __h_Maybe_char_ctor_t;
typedef struct Maybe_char {
  __h_Maybe_char_ctor_t __h_ctor ;
  union { /* ciciliUnion187 */
    struct { /* ciciliStruct188 */
    } Nothing_char ;
    struct { /* ciciliStruct189 */
      char __h_0_mem ;
    } Just_char ;
  } __h_data ;
} Maybe_char;
Maybe_char Nothing_char () {
  return ((Maybe_char){ __h_Nothing_char_t });
}
Maybe_char Just_char (char value ) {
  return ((Maybe_char){ __h_Just_char_t , .__h_data.Just_char = { value }});
}
#endif /* _H_Maybe_char */ 
typedef enum __h_Maybe_Maybe_char_ctor_t {
  __h_Nothing_Maybe_char_t,
  __h_Just_Maybe_char_t
} __h_Maybe_Maybe_char_ctor_t;
typedef struct Maybe_Maybe_char {
  __h_Maybe_Maybe_char_ctor_t __h_ctor ;
  union { /* ciciliUnion197 */
    struct { /* ciciliStruct198 */
    } Nothing_Maybe_char ;
    struct { /* ciciliStruct199 */
      Maybe_char __h_0_mem ;
    } Just_Maybe_char ;
  } __h_data ;
} Maybe_Maybe_char;
Maybe_Maybe_char Nothing_Maybe_char () {
  return ((Maybe_Maybe_char){ __h_Nothing_Maybe_char_t });
}
Maybe_Maybe_char Just_Maybe_char (Maybe_char value ) {
  return ((Maybe_Maybe_char){ __h_Just_Maybe_char_t , .__h_data.Just_Maybe_char = { value }});
}
void print_inside_maybe (Maybe_Maybe_char mb ) {
  { /* cicili#Let206 */
    // ----------
    /* cicili#Block208 */
    ({ /* cicili#Let210 */
      bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Nothing_Maybe_char_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "wrapper Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let217 */
          typeof((((mb . __h_data ). Just_Maybe_char ). __h_0_mem )) mc ;
          // ----------
          if ((mb . __h_ctor ) ==  __h_Just_Maybe_char_t  )
            { /* cicili#Block220 */
              mc  = (((mb . __h_data ). Just_Maybe_char ). __h_0_mem );
            }
          ({ /* cicili#Let222 */
            bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Just_Maybe_char_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let227 */
                // ----------
                /* cicili#Block229 */
                ({ /* cicili#Let231 */
                  bool __h_case_result  = ((mc . __h_ctor ) ==  __h_Nothing_char_t  );
                  // ----------
                  if (__h_case_result )
                    fprintf (stdout , "wrapper Just Nothing char: Nothing\n");
                  else
                    { /* cicili#Let238 */
                      typeof((((mc . __h_data ). Just_char ). __h_0_mem )) c ;
                      // ----------
                      if ((mc . __h_ctor ) ==  __h_Just_char_t  )
                        { /* cicili#Block241 */
                          c  = (((mc . __h_data ). Just_char ). __h_0_mem );
                        }
                      ({ /* cicili#Let243 */
                        bool __h_case_result  = ((mc . __h_ctor ) ==  __h_Just_char_t  );
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
  { /* cicili#Let251 */
    // ----------
    /* cicili#Block253 */
    ({ /* cicili#Let255 */
      bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Nothing_Maybe_char_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "inner Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let263 */
          typeof((((imb . __h_data ). Just_Maybe_char ). __h_0_mem )) __h_match261_0_arg ;
          // ----------
          if ((imb . __h_ctor ) ==  __h_Just_Maybe_char_t  )
            { /* cicili#Block266 */
              __h_match261_0_arg  = (((imb . __h_data ). Just_Maybe_char ). __h_0_mem );
            }
          ({ /* cicili#Let268 */
            bool __h_case_result  = (((imb . __h_ctor ) ==  __h_Just_Maybe_char_t  ) &&  ((__h_match261_0_arg . __h_ctor ) ==  __h_Nothing_char_t  ) );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "inner Just Nothing char: Nothing\n");
            else
              { /* cicili#Let276 */
                typeof((((imb . __h_data ). Just_Maybe_char ). __h_0_mem )) __h_match274_0_arg ;
                typeof((((__h_match274_0_arg . __h_data ). Just_char ). __h_0_mem )) c ;
                // ----------
                if ((imb . __h_ctor ) ==  __h_Just_Maybe_char_t  )
                  { /* cicili#Block279 */
                    __h_match274_0_arg  = (((imb . __h_data ). Just_Maybe_char ). __h_0_mem );
                    c  = (((__h_match274_0_arg . __h_data ). Just_char ). __h_0_mem );
                  }
                ({ /* cicili#Let281 */
                  bool __h_case_result  = (((imb . __h_ctor ) ==  __h_Just_Maybe_char_t  ) &&  ((__h_match274_0_arg . __h_ctor ) ==  __h_Just_char_t  ) );
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
typedef struct __ciciliS_287 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_287;
typedef __ciciliS_287 aTuple ;
void print_tuple (aTuple tup ) {
  { /* cicili#Let291 */
    const __auto_type i  = (tup . __h_0_mem );
    const __auto_type c  = (tup . __h_1_mem );
    const __auto_type s  = (tup . __h_2_mem );
    // ----------
    /* cicili#Block293 */
    ({ /* cicili#Let295 */
      bool __h_case_result  = (s  >  10 );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
      else
        { /* cicili#Let302 */
          const __auto_type i  = (tup . __h_0_mem );
          const __auto_type c  = (tup . __h_1_mem );
          const __auto_type s  = (tup . __h_2_mem );
          // ----------
          /* cicili#Block304 */
          ({ /* cicili#Let306 */
            bool __h_case_result  = true ;
            // ----------
            if (__h_case_result )
              fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
          });
        }
    });
  }
}
typedef enum __h_Maybe_aTuple_ctor_t {
  __h_Nothing_aTuple_t,
  __h_Just_aTuple_t
} __h_Maybe_aTuple_ctor_t;
typedef struct Maybe_aTuple {
  __h_Maybe_aTuple_ctor_t __h_ctor ;
  union { /* ciciliUnion314 */
    struct { /* ciciliStruct315 */
    } Nothing_aTuple ;
    struct { /* ciciliStruct316 */
      aTuple __h_0_mem ;
    } Just_aTuple ;
  } __h_data ;
} Maybe_aTuple;
Maybe_aTuple Nothing_aTuple () {
  return ((Maybe_aTuple){ __h_Nothing_aTuple_t });
}
Maybe_aTuple Just_aTuple (aTuple value ) {
  return ((Maybe_aTuple){ __h_Just_aTuple_t , .__h_data.Just_aTuple = { value }});
}
#ifndef _H_Maybe_char
#define _H_Maybe_char
typedef enum __h_Maybe_char_ctor_t {
  __h_Nothing_char_t,
  __h_Just_char_t
} __h_Maybe_char_ctor_t;
typedef struct Maybe_char {
  __h_Maybe_char_ctor_t __h_ctor ;
  union { /* ciciliUnion326 */
    struct { /* ciciliStruct327 */
    } Nothing_char ;
    struct { /* ciciliStruct328 */
      char __h_0_mem ;
    } Just_char ;
  } __h_data ;
} Maybe_char;
Maybe_char Nothing_char () {
  return ((Maybe_char){ __h_Nothing_char_t });
}
Maybe_char Just_char (char value ) {
  return ((Maybe_char){ __h_Just_char_t , .__h_data.Just_char = { value }});
}
#endif /* _H_Maybe_char */ 
typedef enum __h_String_ctor_t {
  __h_Cons_char_t
} __h_String_ctor_t;
typedef struct String_class_t String_class_t ;
typedef String_class_t * String ;
typedef struct Maybe_String Maybe_String ;
typedef enum __h_Maybe_String_ctor_t {
  __h_Nothing_String_t,
  __h_Just_String_t
} __h_Maybe_String_ctor_t;
typedef struct Maybe_String {
  __h_Maybe_String_ctor_t __h_ctor ;
  union { /* ciciliUnion341 */
    struct { /* ciciliStruct342 */
    } Nothing_String ;
    struct { /* ciciliStruct343 */
      String __h_0_mem ;
    } Just_String ;
  } __h_data ;
} Maybe_String;
Maybe_String Nothing_String () {
  return ((Maybe_String){ __h_Nothing_String_t });
}
Maybe_String Just_String (String value ) {
  return ((Maybe_String){ __h_Just_String_t , .__h_data.Just_String = { value }});
}
typedef struct String_class_t {
  __h_String_ctor_t __h_ctor ;
  union { /* ciciliUnion347 */
    struct { /* ciciliStruct348 */
      char __h_0_mem ;
      Maybe_String __h_1_mem ;
    } Cons_char ;
  } __h_data ;
} String_class_t;
String __h_Cons_char_ctor (char head , Maybe_String tail ) {
  String this  = malloc (sizeof(String_class_t ));
  (*this ) = ((String_class_t){ __h_Cons_char_t , .__h_data.Cons_char = { head , tail }});
  return this ;
}
Maybe_String new_String (const char * buf ) {
  if (buf  ==  NULL  )
    return Nothing_String ();
  else
    { /* cicili#Let362 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Nothing_String ();
      else
        return Just_String (__h_Cons_char_ctor (item , new_String ((++buf ))));
    }
}
void drop_String (Maybe_String list ) {
  { /* cicili#Let378 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match376_0_arg ;
    __auto_type ls  = __h_match376_0_arg ;
    typeof((((ls -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block381 */
        __h_match376_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        tail  = (((ls -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let383 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((ls -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn386 */
          drop_String (tail );
          free (ls );
        });
    });
  }
}
void free_String (Maybe_String * list ) {
  drop_String ((*list ));
}
void show_String (Maybe_String list ) {
  { /* cicili#Let399 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match397_0_arg ;
    typeof((((__h_match397_0_arg -> __h_data ). Cons_char ). __h_0_mem )) head ;
    typeof((((__h_match397_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block402 */
        __h_match397_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        head  = (((__h_match397_0_arg -> __h_data ). Cons_char ). __h_0_mem );
        tail  = (((__h_match397_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let404 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match397_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn407 */
          putchar (head );
          show_String (tail );
        });
    });
  }
}
Maybe_char nth_String (Maybe_String list , int index ) {
  return ({ /* cicili#Let417 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match415_0_arg ;
    typeof((((__h_match415_0_arg -> __h_data ). Cons_char ). __h_0_mem )) head ;
    typeof((((__h_match415_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block420 */
        __h_match415_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        head  = (((__h_match415_0_arg -> __h_data ). Cons_char ). __h_0_mem );
        tail  = (((__h_match415_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let422 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match415_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_String (tail , (--index ))) : ({ /* cicili#Let428 */
        // ----------
        /* cicili#Block430 */
        Nothing_char ();
      }));
    });
  });
}
Maybe_String nthcdr_String (Maybe_String list , int index ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let440 */
      typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match438_0_arg ;
      typeof((((__h_match438_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
      // ----------
      if ((list . __h_ctor ) ==  __h_Just_String_t  )
        { /* cicili#Block443 */
          __h_match438_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
          tail  = (((__h_match438_0_arg -> __h_data ). Cons_char ). __h_1_mem );
        }
      ({ /* cicili#Let445 */
        bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match438_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
        // ----------
        ((__h_case_result ) ? nthcdr_String (tail , (--index )) : ({ /* cicili#Let450 */
          // ----------
          /* cicili#Block452 */
          Nothing_String ();
        }));
      });
    }));
}
int len_String (Maybe_String list ) {
  return ({ /* cicili#Let461 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match459_0_arg ;
    typeof((((__h_match459_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block464 */
        __h_match459_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        tail  = (((__h_match459_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let466 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match459_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      ((__h_case_result ) ? (1 +  len_String (tail ) ) : ({ /* cicili#Let471 */
        // ----------
        /* cicili#Block473 */
        0;
      }));
    });
  });
}
int has_len_String (Maybe_String list , int desired ) {
  return ({ /* cicili#Let481 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match479_0_arg ;
    typeof((((__h_match479_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block484 */
        __h_match479_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        tail  = (((__h_match479_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let486 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match479_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_String (tail , (--desired )) )) : ({ /* cicili#Let491 */
        // ----------
        /* cicili#Block493 */
        0;
      }));
    });
  });
}
Maybe_char nth_Cons_char (String cons , int index ) {
  return ({ /* cicili#Let501 */
    typeof((((cons -> __h_data ). Cons_char ). __h_0_mem )) head ;
    typeof((((cons -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((cons -> __h_ctor ) ==  __h_Cons_char_t  )
      { /* cicili#Block504 */
        head  = (((cons -> __h_data ). Cons_char ). __h_0_mem );
        tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let506 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_String (tail , (--index ))) : ({ /* cicili#Let512 */
        // ----------
        /* cicili#Block514 */
        Nothing_char ();
      }));
    });
  });
}
Maybe_String nthcdr_Cons_char (String cons , int index ) {
  return (((index  ==  0 )) ? Just_String (cons ) : ({ /* cicili#Let523 */
      typeof((((cons -> __h_data ). Cons_char ). __h_1_mem )) tail ;
      // ----------
      if ((cons -> __h_ctor ) ==  __h_Cons_char_t  )
        { /* cicili#Block526 */
          tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
        }
      ({ /* cicili#Let528 */
        bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
        // ----------
        ((__h_case_result ) ? nthcdr_String (tail , (--index )) : ({ /* cicili#Let533 */
          // ----------
          /* cicili#Block535 */
          Nothing_String ();
        }));
      });
    }));
}
int len_Cons_char (String cons ) {
  return ({ /* cicili#Let542 */
    typeof((((cons -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((cons -> __h_ctor ) ==  __h_Cons_char_t  )
      { /* cicili#Block545 */
        tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let547 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_String (tail ) ) : ({ /* cicili#Let552 */
        // ----------
        /* cicili#Block554 */
        0;
      }));
    });
  });
}
int has_len_Cons_char (String cons , int desired ) {
  return ({ /* cicili#Let560 */
    typeof((((cons -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((cons -> __h_ctor ) ==  __h_Cons_char_t  )
      { /* cicili#Block563 */
        tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let565 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
      // ----------
      ((__h_case_result ) ? (1 +  has_len_String (tail , (--desired )) ) : ({ /* cicili#Let570 */
        // ----------
        /* cicili#Block572 */
        0;
      }));
    });
  });
}
static int __ciciliL_671 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_679 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
typedef struct __ciciliS_688 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_688;
typedef struct __ciciliS_690 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_690;
typedef struct __ciciliS_773 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
} __ciciliS_773;
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
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_671 (2, 16));
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_679 (2, 16));
  show_Integer (Byte (10));
  show_Integer (Short (20));
  show_Integer (Int (30));
  show_Integer (Int (2000));
  show_Integer (Int (20000));
  { /* cicili#Let686 */
    aTuple tup0  = { 4400, 'A', 33};
    __ciciliS_688 tup1  = { 4401, 'B', 34};
    __auto_type tup2  = ((struct __ciciliS_690 ){ 4402, 'C', 35});
    // ----------
    print_tuple (tup0 );
    print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
    ({ /* cicili#Let698 */
      const __auto_type i  = (tup2 . __h_0_mem );
      const __auto_type c  = (tup2 . __h_1_mem );
      const __auto_type s  = (tup2 . __h_2_mem );
      // ----------
      /* cicili#Block700 */
      ({ /* cicili#Let702 */
        bool __h_case_result  = (s  >  10 );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let707 */
          const __auto_type i  = (tup2 . __h_0_mem );
          const __auto_type c  = (tup2 . __h_1_mem );
          const __auto_type s  = (tup2 . __h_2_mem );
          // ----------
          /* cicili#Block709 */
          ({ /* cicili#Let711 */
            bool __h_case_result  = true ;
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let716 */
              // ----------
              /* cicili#Block718 */
              fprintf (stdout , "No Tuple?!");
            }));
          });
        }));
      });
    });
  }
  { /* cicili#Let721 */
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
  { /* cicili#Let733 */
    __auto_type __h_data732  = Just_aTuple (((aTuple){ 55, 'D', 93}));
    // ----------
    /* cicili#Block736 */
    ({ /* cicili#Let738 */
      bool __h_case_result  = ((__h_data732 . __h_ctor ) ==  __h_Nothing_aTuple_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple inside maybe: Nothing");
      else
        { /* cicili#Let746 */
          typeof((((__h_data732 . __h_data ). Just_aTuple ). __h_0_mem )) __h_match744_0_arg ;
          __auto_type t  = __h_match744_0_arg ;
          const __auto_type i  = (t . __h_0_mem );
          const __auto_type c  = (t . __h_1_mem );
          const __auto_type s  = (t . __h_2_mem );
          // ----------
          if ((__h_data732 . __h_ctor ) ==  __h_Just_aTuple_t  )
            { /* cicili#Block749 */
              __h_match744_0_arg  = (((__h_data732 . __h_data ). Just_aTuple ). __h_0_mem );
            }
          ({ /* cicili#Let751 */
            bool __h_case_result  = ((__h_data732 . __h_ctor ) ==  __h_Just_aTuple_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let756 */
                const __auto_type ii  = (t . __h_0_mem );
                const __auto_type cc  = (t . __h_1_mem );
                const __auto_type ss  = (t . __h_2_mem );
                // ----------
                /* cicili#Block758 */
                ({ /* cicili#Let760 */
                  bool __h_case_result  = true ;
                  // ----------
                  if (__h_case_result )
                    ({ /* cicili#Progn763 */
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", ii , cc , ss );
                    });
                });
              }
          });
        }
    });
  }
  { /* cicili#Let771 */
    __auto_type __h_data769  = ((struct __ciciliS_773 ){ 5060, Just_char ('M')});
    __auto_type __h_match768_1_arg  = (__h_data769 . __h_1_mem );
    // ----------
    /* cicili#Block775 */
    ({ /* cicili#Let777 */
      bool __h_case_result  = ((__h_match768_1_arg . __h_ctor ) ==  __h_Nothing_char_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "maybe inside tuple: Nothing\n");
      else
        { /* cicili#Let785 */
          const __auto_type i  = (__h_data769 . __h_0_mem );
          __auto_type __h_match783_1_arg  = (__h_data769 . __h_1_mem );
          typeof((((__h_match783_1_arg . __h_data ). Just_char ). __h_0_mem )) c ;
          // ----------
          if ((__h_match783_1_arg . __h_ctor ) ==  __h_Just_char_t  )
            { /* cicili#Block788 */
              c  = (((__h_match783_1_arg . __h_data ). Just_char ). __h_0_mem );
            }
          ({ /* cicili#Let790 */
            bool __h_case_result  = (((__h_match783_1_arg . __h_ctor ) ==  __h_Just_char_t  ) &&  (c  >  'L' ) );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
            else
              { /* cicili#Let798 */
                __auto_type t  = __h_data769 ;
                __auto_type __h_match796_1_arg  = (t . __h_1_mem );
                typeof((((__h_match796_1_arg . __h_data ). Just_char ). __h_0_mem )) c ;
                // ----------
                if ((__h_match796_1_arg . __h_ctor ) ==  __h_Just_char_t  )
                  { /* cicili#Block801 */
                    c  = (((__h_match796_1_arg . __h_data ). Just_char ). __h_0_mem );
                  }
                ({ /* cicili#Let803 */
                  bool __h_case_result  = (((__h_match796_1_arg . __h_ctor ) ==  __h_Just_char_t  ) &&  (c  <  'L' ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Let809 */
                      const __auto_type i  = (t . __h_0_mem );
                      __auto_type __h_match807_1_arg  = (t . __h_1_mem );
                      // ----------
                      /* cicili#Block811 */
                      ({ /* cicili#Let813 */
                        bool __h_case_result  = ((__h_match807_1_arg . __h_ctor ) ==  __h_Just_char_t  );
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
  ({ /* cicili#Let818 */
    __auto_type hello  __attribute__((__cleanup__(free_String ))) = new_String ("Hello Haskell\n");
    __auto_type txt  __attribute__((__cleanup__(free_String ))) = new_String ("Haskell List");
    // ----------
    show_String (hello );
    fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let824 */
      __auto_type __h_data823  = nth_String (txt , 3);
      typeof((((__h_data823 . __h_data ). Just_char ). __h_0_mem )) c ;
      // ----------
      if ((__h_data823 . __h_ctor ) ==  __h_Just_char_t  )
        { /* cicili#Block827 */
          c  = (((__h_data823 . __h_data ). Just_char ). __h_0_mem );
        }
      ({ /* cicili#Let829 */
        bool __h_case_result  = ((__h_data823 . __h_ctor ) ==  __h_Just_char_t  );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let834 */
          // ----------
          /* cicili#Block836 */
          fprintf (stdout , "4th element not found\n");
        }));
      });
    }));
    ({ /* cicili#Progn845 */
      ({ /* cicili#Let854 */
        __auto_type __h_data853  = nth_String (txt , 4);
        typeof((((__h_data853 . __h_data ). Just_char ). __h_0_mem )) c ;
        // ----------
        if ((__h_data853 . __h_ctor ) ==  __h_Just_char_t  )
          { /* cicili#Block860 */
            c  = (((__h_data853 . __h_data ). Just_char ). __h_0_mem );
          }
        ({ /* cicili#Let862 */
          bool __h_case_result  = ((__h_data853 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let867 */
            // ----------
            /* cicili#Block869 */
            fprintf (stdout , "%dth element not found\n", 4);
          }));
        });
      });
      ({ /* cicili#Let879 */
        __auto_type __h_data878  = nth_String (txt , 5);
        typeof((((__h_data878 . __h_data ). Just_char ). __h_0_mem )) c ;
        // ----------
        if ((__h_data878 . __h_ctor ) ==  __h_Just_char_t  )
          { /* cicili#Block885 */
            c  = (((__h_data878 . __h_data ). Just_char ). __h_0_mem );
          }
        ({ /* cicili#Let887 */
          bool __h_case_result  = ((__h_data878 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let892 */
            // ----------
            /* cicili#Block894 */
            fprintf (stdout , "%dth element not found\n", 5);
          }));
        });
      });
      ({ /* cicili#Let904 */
        __auto_type __h_data903  = nth_String (txt , 6);
        typeof((((__h_data903 . __h_data ). Just_char ). __h_0_mem )) c ;
        // ----------
        if ((__h_data903 . __h_ctor ) ==  __h_Just_char_t  )
          { /* cicili#Block910 */
            c  = (((__h_data903 . __h_data ). Just_char ). __h_0_mem );
          }
        ({ /* cicili#Let912 */
          bool __h_case_result  = ((__h_data903 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let917 */
            // ----------
            /* cicili#Block919 */
            fprintf (stdout , "%dth element not found\n", 6);
          }));
        });
      });
      ({ /* cicili#Let929 */
        __auto_type __h_data928  = nth_String (txt , len_String (txt ));
        typeof((((__h_data928 . __h_data ). Just_char ). __h_0_mem )) c ;
        // ----------
        if ((__h_data928 . __h_ctor ) ==  __h_Just_char_t  )
          { /* cicili#Block935 */
            c  = (((__h_data928 . __h_data ). Just_char ). __h_0_mem );
          }
        ({ /* cicili#Let937 */
          bool __h_case_result  = ((__h_data928 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", len_String (txt ), c ) : ({ /* cicili#Let942 */
            // ----------
            /* cicili#Block944 */
            fprintf (stdout , "%dth element not found\n", len_String (txt ));
          }));
        });
      });
    });
    fprintf (stdout , "output of letin: %d\n", ({ /* cicili#Let949 */
      __auto_type llen  = len_String (txt );
      // ----------
      ({ /* cicili#Progn956 */
        ({ /* cicili#Let965 */
          __auto_type __h_data964  = nth_String (txt , 4);
          typeof((((__h_data964 . __h_data ). Just_char ). __h_0_mem )) c ;
          // ----------
          if ((__h_data964 . __h_ctor ) ==  __h_Just_char_t  )
            { /* cicili#Block971 */
              c  = (((__h_data964 . __h_data ). Just_char ). __h_0_mem );
            }
          ({ /* cicili#Let973 */
            bool __h_case_result  = ((__h_data964 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let978 */
              // ----------
              /* cicili#Block980 */
              fprintf (stdout , "%dth element not found\n", 4);
            }));
          });
        });
        ({ /* cicili#Let990 */
          __auto_type __h_data989  = nth_String (txt , 5);
          typeof((((__h_data989 . __h_data ). Just_char ). __h_0_mem )) c ;
          // ----------
          if ((__h_data989 . __h_ctor ) ==  __h_Just_char_t  )
            { /* cicili#Block996 */
              c  = (((__h_data989 . __h_data ). Just_char ). __h_0_mem );
            }
          ({ /* cicili#Let998 */
            bool __h_case_result  = ((__h_data989 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let1003 */
              // ----------
              /* cicili#Block1005 */
              fprintf (stdout , "%dth element not found\n", 5);
            }));
          });
        });
        ({ /* cicili#Let1015 */
          __auto_type __h_data1014  = nth_String (txt , 6);
          typeof((((__h_data1014 . __h_data ). Just_char ). __h_0_mem )) c ;
          // ----------
          if ((__h_data1014 . __h_ctor ) ==  __h_Just_char_t  )
            { /* cicili#Block1021 */
              c  = (((__h_data1014 . __h_data ). Just_char ). __h_0_mem );
            }
          ({ /* cicili#Let1023 */
            bool __h_case_result  = ((__h_data1014 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let1028 */
              // ----------
              /* cicili#Block1030 */
              fprintf (stdout , "%dth element not found\n", 6);
            }));
          });
        });
        ({ /* cicili#Let1040 */
          __auto_type __h_data1039  = nth_String (txt , llen );
          typeof((((__h_data1039 . __h_data ). Just_char ). __h_0_mem )) c ;
          // ----------
          if ((__h_data1039 . __h_ctor ) ==  __h_Just_char_t  )
            { /* cicili#Block1046 */
              c  = (((__h_data1039 . __h_data ). Just_char ). __h_0_mem );
            }
          ({ /* cicili#Let1048 */
            bool __h_case_result  = ((__h_data1039 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", llen , c ) : ({ /* cicili#Let1053 */
              // ----------
              /* cicili#Block1055 */
              fprintf (stdout , "%dth element not found\n", llen );
            }));
          });
        });
      });
    }));
    { /* cicili#Let1061 */
      typeof((((txt . __h_data ). Just_String ). __h_0_mem )) __h_match1059_0_arg ;
      __auto_type str  = __h_match1059_0_arg ;
      typeof((((str -> __h_data ). Cons_char ). __h_0_mem )) head ;
      typeof((((str -> __h_data ). Cons_char ). __h_1_mem )) tail ;
      // ----------
      if ((txt . __h_ctor ) ==  __h_Just_String_t  )
        { /* cicili#Block1064 */
          __h_match1059_0_arg  = (((txt . __h_data ). Just_String ). __h_0_mem );
          head  = (((str -> __h_data ). Cons_char ). __h_0_mem );
          tail  = (((str -> __h_data ). Cons_char ). __h_1_mem );
        }
      ({ /* cicili#Let1066 */
        bool __h_case_result  = (((txt . __h_ctor ) ==  __h_Just_String_t  ) &&  ((str -> __h_ctor ) ==  __h_Cons_char_t  ) );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , len_String (tail ));
      });
    }
    ({ /* cicili#Let1071 */
      __auto_type str5  __attribute__((__cleanup__(free_String ))) = new_String ("Cicili");
      // ----------
      fprintf (stdout , "has 'Cicili' desired length 5: %d\n", has_len_String (str5 , 5));
      fprintf (stdout , "has 'Cicili' desired length 6: %d\n", has_len_String (str5 , 6));
      fprintf (stdout , "has 'Cicili' desired length 7: %d\n", has_len_String (str5 , 7));
    });
    { /* cicili#Let1080 */
      __auto_type __h_data1078  = nthcdr_String (txt , 12);
      typeof((((__h_data1078 . __h_data ). Just_String ). __h_0_mem )) __h_match1077_0_arg ;
      typeof(has_len_Cons_char (__h_match1077_0_arg , 3)) __h_has_len ;
      typeof((((nth_Cons_char (__h_match1077_0_arg , 0). __h_data ). Just_char ). __h_0_mem )) fst ;
      typeof((((nth_Cons_char (__h_match1077_0_arg , 1). __h_data ). Just_char ). __h_0_mem )) snd ;
      typeof((((nth_Cons_char (__h_match1077_0_arg , 2). __h_data ). Just_char ). __h_0_mem )) trd ;
      typeof(nthcdr_Cons_char (__h_match1077_0_arg , 3)) tail ;
      // ----------
      if ((__h_data1078 . __h_ctor ) ==  __h_Just_String_t  )
        { /* cicili#Block1091 */
          __h_match1077_0_arg  = (((__h_data1078 . __h_data ). Just_String ). __h_0_mem );
          __h_has_len  = has_len_Cons_char (__h_match1077_0_arg , 3);
          fst  = (((nth_Cons_char (__h_match1077_0_arg , 0). __h_data ). Just_char ). __h_0_mem );
          snd  = (((nth_Cons_char (__h_match1077_0_arg , 1). __h_data ). Just_char ). __h_0_mem );
          trd  = (((nth_Cons_char (__h_match1077_0_arg , 2). __h_data ). Just_char ). __h_0_mem );
          tail  = nthcdr_Cons_char (__h_match1077_0_arg , 3);
        }
      ({ /* cicili#Let1101 */
        bool __h_case_result  = (((__h_data1078 . __h_ctor ) ==  __h_Just_String_t  ) &&  (__h_has_len  ==  3 ) );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first, second and third char from String: %c %c %c\n", fst , snd , trd );
        else
          { /* cicili#Let1109 */
            typeof((((__h_data1078 . __h_data ). Just_String ). __h_0_mem )) __h_match1107_0_arg ;
            typeof(has_len_Cons_char (__h_match1107_0_arg , 2)) __h_has_len ;
            typeof((((nth_Cons_char (__h_match1107_0_arg , 0). __h_data ). Just_char ). __h_0_mem )) fst ;
            typeof((((nth_Cons_char (__h_match1107_0_arg , 1). __h_data ). Just_char ). __h_0_mem )) snd ;
            typeof(nthcdr_Cons_char (__h_match1107_0_arg , 2)) tail ;
            // ----------
            if ((__h_data1078 . __h_ctor ) ==  __h_Just_String_t  )
              { /* cicili#Block1118 */
                __h_match1107_0_arg  = (((__h_data1078 . __h_data ). Just_String ). __h_0_mem );
                __h_has_len  = has_len_Cons_char (__h_match1107_0_arg , 2);
                fst  = (((nth_Cons_char (__h_match1107_0_arg , 0). __h_data ). Just_char ). __h_0_mem );
                snd  = (((nth_Cons_char (__h_match1107_0_arg , 1). __h_data ). Just_char ). __h_0_mem );
                tail  = nthcdr_Cons_char (__h_match1107_0_arg , 2);
              }
            ({ /* cicili#Let1126 */
              bool __h_case_result  = (((__h_data1078 . __h_ctor ) ==  __h_Just_String_t  ) &&  (__h_has_len  ==  2 ) );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "first and second char from String: %c %c\n", fst , snd );
              else
                { /* cicili#Let1134 */
                  typeof((((__h_data1078 . __h_data ). Just_String ). __h_0_mem )) __h_match1132_0_arg ;
                  typeof(has_len_Cons_char (__h_match1132_0_arg , 1)) __h_has_len ;
                  typeof((((nth_Cons_char (__h_match1132_0_arg , 0). __h_data ). Just_char ). __h_0_mem )) fst ;
                  typeof(nthcdr_Cons_char (__h_match1132_0_arg , 1)) tail ;
                  // ----------
                  if ((__h_data1078 . __h_ctor ) ==  __h_Just_String_t  )
                    { /* cicili#Block1141 */
                      __h_match1132_0_arg  = (((__h_data1078 . __h_data ). Just_String ). __h_0_mem );
                      __h_has_len  = has_len_Cons_char (__h_match1132_0_arg , 1);
                      fst  = (((nth_Cons_char (__h_match1132_0_arg , 0). __h_data ). Just_char ). __h_0_mem );
                      tail  = nthcdr_Cons_char (__h_match1132_0_arg , 1);
                    }
                  ({ /* cicili#Let1147 */
                    bool __h_case_result  = (((__h_data1078 . __h_ctor ) ==  __h_Just_String_t  ) &&  (__h_has_len  ==  1 ) );
                    // ----------
                    if (__h_case_result )
                      fprintf (stdout , "first char from String: %c\n", fst );
                    else
                      { /* cicili#Let1154 */
                        // ----------
                        /* cicili#Block1156 */
                        fprintf (stdout , "default case String\n");
                      }
                  });
                }
            });
          }
      });
    }
  });
}
