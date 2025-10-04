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
typedef enum __h_Ordering_ctor_t {
  __h_LT_t,
  __h_EQ_t,
  __h_GT_t
} __h_Ordering_ctor_t;
typedef struct Ordering {
  __h_Ordering_ctor_t __h_ctor ;
  union { /* ciciliUnion126 */
    struct { /* ciciliStruct127 */
    } LT ;
    struct { /* ciciliStruct128 */
    } EQ ;
    struct { /* ciciliStruct129 */
    } GT ;
  } __h_data ;
} Ordering;
Ordering LT () {
  return ((Ordering){ __h_LT_t });
}
Ordering EQ () {
  return ((Ordering){ __h_EQ_t });
}
Ordering GT () {
  return ((Ordering){ __h_GT_t });
}
typedef enum __h_Integer_ctor_t {
  __h_Byte_t,
  __h_Short_t,
  __h_Int_t
} __h_Integer_ctor_t;
typedef struct Integer {
  __h_Integer_ctor_t __h_ctor ;
  union { /* ciciliUnion135 */
    struct { /* ciciliStruct136 */
      char __h_0_mem ;
    } Byte ;
    struct { /* ciciliStruct137 */
      short __h_0_mem ;
    } Short ;
    struct { /* ciciliStruct138 */
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
  ({ /* cicili#Let146 */
    typeof((((self . __h_data ). Byte ). __h_0_mem )) c ;
    // ----------
    if ((self . __h_ctor ) ==  __h_Byte_t  )
      { /* cicili#Block149 */
        c  = (((self . __h_data ). Byte ). __h_0_mem );
      }
    ({ /* cicili#Let151 */
      bool __h_case_result  = ((self . __h_ctor ) ==  __h_Byte_t  );
      // ----------
      ((__h_case_result ) ? fprintf (stdout , "Integer is Byte: %d\n", c ) : ({ /* cicili#Let156 */
        typeof((((self . __h_data ). Short ). __h_0_mem )) sh ;
        // ----------
        if ((self . __h_ctor ) ==  __h_Short_t  )
          { /* cicili#Block159 */
            sh  = (((self . __h_data ). Short ). __h_0_mem );
          }
        ({ /* cicili#Let161 */
          bool __h_case_result  = ((self . __h_ctor ) ==  __h_Short_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "Integer is Short: %d\n", sh ) : ({ /* cicili#Let166 */
            typeof((((self . __h_data ). Int ). __h_0_mem )) i ;
            // ----------
            if ((self . __h_ctor ) ==  __h_Int_t  )
              { /* cicili#Block169 */
                i  = (((self . __h_data ). Int ). __h_0_mem );
              }
            ({ /* cicili#Let171 */
              bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  (i  <  1000 ) );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "Integer is Int below 1000: %d\n", i ) : ({ /* cicili#Let176 */
                typeof((((self . __h_data ). Int ). __h_0_mem )) i ;
                // ----------
                if ((self . __h_ctor ) ==  __h_Int_t  )
                  { /* cicili#Block179 */
                    i  = (((self . __h_data ). Int ). __h_0_mem );
                  }
                ({ /* cicili#Let181 */
                  bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  ((i  >=  1000 ) &&  (i  <  10000 ) ) );
                  // ----------
                  ((__h_case_result ) ? fprintf (stdout , "Integer is Int between 1000 and 10000: %d\n", i ) : ({ /* cicili#Let186 */
                    // ----------
                    /* cicili#Block188 */
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
  union { /* ciciliUnion196 */
    struct { /* ciciliStruct197 */
    } Nothing_char ;
    struct { /* ciciliStruct198 */
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
  union { /* ciciliUnion206 */
    struct { /* ciciliStruct207 */
    } Nothing_Maybe_char ;
    struct { /* ciciliStruct208 */
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
  { /* cicili#Let215 */
    // ----------
    /* cicili#Block217 */
    ({ /* cicili#Let219 */
      bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Nothing_Maybe_char_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "wrapper Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let226 */
          typeof((((mb . __h_data ). Just_Maybe_char ). __h_0_mem )) mc ;
          // ----------
          if ((mb . __h_ctor ) ==  __h_Just_Maybe_char_t  )
            { /* cicili#Block229 */
              mc  = (((mb . __h_data ). Just_Maybe_char ). __h_0_mem );
            }
          ({ /* cicili#Let231 */
            bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Just_Maybe_char_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let236 */
                // ----------
                /* cicili#Block238 */
                ({ /* cicili#Let240 */
                  bool __h_case_result  = ((mc . __h_ctor ) ==  __h_Nothing_char_t  );
                  // ----------
                  if (__h_case_result )
                    fprintf (stdout , "wrapper Just Nothing char: Nothing\n");
                  else
                    { /* cicili#Let247 */
                      typeof((((mc . __h_data ). Just_char ). __h_0_mem )) c ;
                      // ----------
                      if ((mc . __h_ctor ) ==  __h_Just_char_t  )
                        { /* cicili#Block250 */
                          c  = (((mc . __h_data ). Just_char ). __h_0_mem );
                        }
                      ({ /* cicili#Let252 */
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
  { /* cicili#Let260 */
    // ----------
    /* cicili#Block262 */
    ({ /* cicili#Let264 */
      bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Nothing_Maybe_char_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "inner Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let272 */
          typeof((((imb . __h_data ). Just_Maybe_char ). __h_0_mem )) __h_match270_0_arg ;
          // ----------
          if ((imb . __h_ctor ) ==  __h_Just_Maybe_char_t  )
            { /* cicili#Block275 */
              __h_match270_0_arg  = (((imb . __h_data ). Just_Maybe_char ). __h_0_mem );
            }
          ({ /* cicili#Let277 */
            bool __h_case_result  = (((imb . __h_ctor ) ==  __h_Just_Maybe_char_t  ) &&  ((__h_match270_0_arg . __h_ctor ) ==  __h_Nothing_char_t  ) );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "inner Just Nothing char: Nothing\n");
            else
              { /* cicili#Let285 */
                typeof((((imb . __h_data ). Just_Maybe_char ). __h_0_mem )) __h_match283_0_arg ;
                typeof((((__h_match283_0_arg . __h_data ). Just_char ). __h_0_mem )) c ;
                // ----------
                if ((imb . __h_ctor ) ==  __h_Just_Maybe_char_t  )
                  { /* cicili#Block288 */
                    __h_match283_0_arg  = (((imb . __h_data ). Just_Maybe_char ). __h_0_mem );
                    c  = (((__h_match283_0_arg . __h_data ). Just_char ). __h_0_mem );
                  }
                ({ /* cicili#Let290 */
                  bool __h_case_result  = (((imb . __h_ctor ) ==  __h_Just_Maybe_char_t  ) &&  ((__h_match283_0_arg . __h_ctor ) ==  __h_Just_char_t  ) );
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
typedef struct __ciciliS_296 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_296;
typedef __ciciliS_296 aTuple ;
void print_tuple (aTuple tup ) {
  { /* cicili#Let300 */
    const __auto_type i  = (tup . __h_0_mem );
    const __auto_type c  = (tup . __h_1_mem );
    const __auto_type s  = (tup . __h_2_mem );
    // ----------
    /* cicili#Block302 */
    ({ /* cicili#Let304 */
      bool __h_case_result  = (s  >  10 );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
      else
        { /* cicili#Let311 */
          const __auto_type i  = (tup . __h_0_mem );
          const __auto_type c  = (tup . __h_1_mem );
          const __auto_type s  = (tup . __h_2_mem );
          // ----------
          /* cicili#Block313 */
          ({ /* cicili#Let315 */
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
  union { /* ciciliUnion323 */
    struct { /* ciciliStruct324 */
    } Nothing_aTuple ;
    struct { /* ciciliStruct325 */
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
  union { /* ciciliUnion335 */
    struct { /* ciciliStruct336 */
    } Nothing_char ;
    struct { /* ciciliStruct337 */
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
  union { /* ciciliUnion350 */
    struct { /* ciciliStruct351 */
    } Nothing_String ;
    struct { /* ciciliStruct352 */
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
  union { /* ciciliUnion356 */
    struct { /* ciciliStruct357 */
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
    { /* cicili#Let371 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Nothing_String ();
      else
        return Just_String (__h_Cons_char_ctor (item , new_String ((++buf ))));
    }
}
void drop_String (Maybe_String list ) {
  { /* cicili#Let387 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match385_0_arg ;
    __auto_type ls  = __h_match385_0_arg ;
    typeof((((ls -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block390 */
        __h_match385_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        tail  = (((ls -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let392 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((ls -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn395 */
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
  { /* cicili#Let408 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match406_0_arg ;
    typeof((((__h_match406_0_arg -> __h_data ). Cons_char ). __h_0_mem )) head ;
    typeof((((__h_match406_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block411 */
        __h_match406_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        head  = (((__h_match406_0_arg -> __h_data ). Cons_char ). __h_0_mem );
        tail  = (((__h_match406_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let413 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match406_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn416 */
          putchar (head );
          show_String (tail );
        });
    });
  }
}
Maybe_char nth_String (Maybe_String list , int index ) {
  return ({ /* cicili#Let426 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match424_0_arg ;
    typeof((((__h_match424_0_arg -> __h_data ). Cons_char ). __h_0_mem )) head ;
    typeof((((__h_match424_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block429 */
        __h_match424_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        head  = (((__h_match424_0_arg -> __h_data ). Cons_char ). __h_0_mem );
        tail  = (((__h_match424_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let431 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match424_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_String (tail , (--index ))) : ({ /* cicili#Let438 */
        // ----------
        /* cicili#Block440 */
        Nothing_char ();
      }));
    });
  });
}
Maybe_String nthcdr_String (Maybe_String list , int index ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let451 */
      typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match449_0_arg ;
      typeof((((__h_match449_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
      // ----------
      if ((list . __h_ctor ) ==  __h_Just_String_t  )
        { /* cicili#Block454 */
          __h_match449_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
          tail  = (((__h_match449_0_arg -> __h_data ). Cons_char ). __h_1_mem );
        }
      ({ /* cicili#Let456 */
        bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match449_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
        // ----------
        ((__h_case_result ) ? nthcdr_String (tail , (--index )) : ({ /* cicili#Let461 */
          // ----------
          /* cicili#Block463 */
          Nothing_String ();
        }));
      });
    }));
}
int len_String (Maybe_String list ) {
  return ({ /* cicili#Let472 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match470_0_arg ;
    typeof((((__h_match470_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block475 */
        __h_match470_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        tail  = (((__h_match470_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let477 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match470_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      ((__h_case_result ) ? (1 +  len_String (tail ) ) : ({ /* cicili#Let482 */
        // ----------
        /* cicili#Block484 */
        0;
      }));
    });
  });
}
int has_len_String (Maybe_String list , int desired ) {
  return ({ /* cicili#Let492 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match490_0_arg ;
    typeof((((__h_match490_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block495 */
        __h_match490_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        tail  = (((__h_match490_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let497 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match490_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_String (tail , (--desired )) )) : ({ /* cicili#Let503 */
        // ----------
        /* cicili#Block505 */
        0;
      }));
    });
  });
}
Maybe_char nth_Cons_char (String cons , int index ) {
  return ({ /* cicili#Let513 */
    typeof((((cons -> __h_data ). Cons_char ). __h_0_mem )) head ;
    typeof((((cons -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((cons -> __h_ctor ) ==  __h_Cons_char_t  )
      { /* cicili#Block516 */
        head  = (((cons -> __h_data ). Cons_char ). __h_0_mem );
        tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let518 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_String (tail , (--index ))) : ({ /* cicili#Let525 */
        // ----------
        /* cicili#Block527 */
        Nothing_char ();
      }));
    });
  });
}
Maybe_String nthcdr_Cons_char (String cons , int index ) {
  return (((index  ==  0 )) ? Just_String (cons ) : ({ /* cicili#Let537 */
      typeof((((cons -> __h_data ). Cons_char ). __h_1_mem )) tail ;
      // ----------
      if ((cons -> __h_ctor ) ==  __h_Cons_char_t  )
        { /* cicili#Block540 */
          tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
        }
      ({ /* cicili#Let542 */
        bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
        // ----------
        ((__h_case_result ) ? nthcdr_String (tail , (--index )) : ({ /* cicili#Let547 */
          // ----------
          /* cicili#Block549 */
          Nothing_String ();
        }));
      });
    }));
}
int len_Cons_char (String cons ) {
  return ({ /* cicili#Let556 */
    typeof((((cons -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((cons -> __h_ctor ) ==  __h_Cons_char_t  )
      { /* cicili#Block559 */
        tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let561 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_String (tail ) ) : ({ /* cicili#Let566 */
        // ----------
        /* cicili#Block568 */
        0;
      }));
    });
  });
}
int has_len_Cons_char (String cons , int desired ) {
  return ({ /* cicili#Let574 */
    typeof((((cons -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((cons -> __h_ctor ) ==  __h_Cons_char_t  )
      { /* cicili#Block577 */
        tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let579 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
      // ----------
      ((__h_case_result ) ? (1 +  has_len_String (tail , (--desired )) ) : ({ /* cicili#Let584 */
        // ----------
        /* cicili#Block586 */
        0;
      }));
    });
  });
}
static int __ciciliL_686 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_694 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
typedef struct __ciciliS_770 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_770;
typedef struct __ciciliS_772 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_772;
typedef struct __ciciliS_855 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
} __ciciliS_855;
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
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_686 (2, 16));
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_694 (2, 16));
  fprintf (stdout , "output of function closure with $>: %d\n", (2 +  3 ));
  { /* cicili#Block708 */
    fprintf (stdout , "output of function composition1: %d\n", (3 *  (2 +  5 ) ));
    fprintf (stdout , "output of function composition2: %d\n", (3 *  (2 +  5 ) ));
    fprintf (stdout , "output of function composition3: %d\n", (3 *  (2 +  5 ) ));
    fprintf (stdout , "output of function composition4: %d\n", (3 *  (2 +  5 ) ));
  }
  (((1 ==  1 )) ? fprintf (stdout , "output of function guard1: %d\n", 1) : (((1 ==  2 )) ? fprintf (stdout , "output of function guard2: %d\n", 1) : fprintf (stdout , "output of function guard otherwise: %d\n", 1)));
  (((2 ==  1 )) ? fprintf (stdout , "output of function guard1: %d\n", 2) : (((2 ==  2 )) ? fprintf (stdout , "output of function guard2: %d\n", 2) : fprintf (stdout , "output of function guard otherwise: %d\n", 2)));
  (((3 ==  1 )) ? fprintf (stdout , "output of function guard1: %d\n", 3) : (((3 ==  2 )) ? fprintf (stdout , "output of function guard2: %d\n", 3) : fprintf (stdout , "output of function guard otherwise: %d\n", 3)));
  show_Integer (Byte (10));
  show_Integer (Short (20));
  show_Integer (Int (30));
  show_Integer (Int (2000));
  show_Integer (Int (20000));
  { /* cicili#Let768 */
    aTuple tup0  = { 4400, 'A', 33};
    __ciciliS_770 tup1  = { 4401, 'B', 34};
    __auto_type tup2  = ((struct __ciciliS_772 ){ 4402, 'C', 35});
    // ----------
    print_tuple (tup0 );
    print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
    ({ /* cicili#Let780 */
      const __auto_type i  = (tup2 . __h_0_mem );
      const __auto_type c  = (tup2 . __h_1_mem );
      const __auto_type s  = (tup2 . __h_2_mem );
      // ----------
      /* cicili#Block782 */
      ({ /* cicili#Let784 */
        bool __h_case_result  = (s  >  10 );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let789 */
          const __auto_type i  = (tup2 . __h_0_mem );
          const __auto_type c  = (tup2 . __h_1_mem );
          const __auto_type s  = (tup2 . __h_2_mem );
          // ----------
          /* cicili#Block791 */
          ({ /* cicili#Let793 */
            bool __h_case_result  = true ;
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let798 */
              // ----------
              /* cicili#Block800 */
              fprintf (stdout , "No Tuple?!");
            }));
          });
        }));
      });
    });
  }
  { /* cicili#Let803 */
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
  { /* cicili#Let815 */
    __auto_type __h_data814  = Just_aTuple (((aTuple){ 55, 'D', 93}));
    // ----------
    /* cicili#Block818 */
    ({ /* cicili#Let820 */
      bool __h_case_result  = ((__h_data814 . __h_ctor ) ==  __h_Nothing_aTuple_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple inside maybe: Nothing");
      else
        { /* cicili#Let828 */
          typeof((((__h_data814 . __h_data ). Just_aTuple ). __h_0_mem )) __h_match826_0_arg ;
          __auto_type t  = __h_match826_0_arg ;
          const __auto_type i  = (t . __h_0_mem );
          const __auto_type c  = (t . __h_1_mem );
          const __auto_type s  = (t . __h_2_mem );
          // ----------
          if ((__h_data814 . __h_ctor ) ==  __h_Just_aTuple_t  )
            { /* cicili#Block831 */
              __h_match826_0_arg  = (((__h_data814 . __h_data ). Just_aTuple ). __h_0_mem );
            }
          ({ /* cicili#Let833 */
            bool __h_case_result  = ((__h_data814 . __h_ctor ) ==  __h_Just_aTuple_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let838 */
                const __auto_type ii  = (t . __h_0_mem );
                const __auto_type cc  = (t . __h_1_mem );
                const __auto_type ss  = (t . __h_2_mem );
                // ----------
                /* cicili#Block840 */
                ({ /* cicili#Let842 */
                  bool __h_case_result  = true ;
                  // ----------
                  if (__h_case_result )
                    ({ /* cicili#Progn845 */
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", ii , cc , ss );
                    });
                });
              }
          });
        }
    });
  }
  { /* cicili#Let853 */
    __auto_type __h_data851  = ((struct __ciciliS_855 ){ 5060, Just_char ('M')});
    __auto_type __h_match850_1_arg  = (__h_data851 . __h_1_mem );
    // ----------
    /* cicili#Block857 */
    ({ /* cicili#Let859 */
      bool __h_case_result  = ((__h_match850_1_arg . __h_ctor ) ==  __h_Nothing_char_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "maybe inside tuple: Nothing\n");
      else
        { /* cicili#Let867 */
          const __auto_type i  = (__h_data851 . __h_0_mem );
          __auto_type __h_match865_1_arg  = (__h_data851 . __h_1_mem );
          typeof((((__h_match865_1_arg . __h_data ). Just_char ). __h_0_mem )) c ;
          // ----------
          if ((__h_match865_1_arg . __h_ctor ) ==  __h_Just_char_t  )
            { /* cicili#Block870 */
              c  = (((__h_match865_1_arg . __h_data ). Just_char ). __h_0_mem );
            }
          ({ /* cicili#Let872 */
            bool __h_case_result  = (((__h_match865_1_arg . __h_ctor ) ==  __h_Just_char_t  ) &&  (c  >  'L' ) );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
            else
              { /* cicili#Let880 */
                __auto_type t  = __h_data851 ;
                __auto_type __h_match878_1_arg  = (t . __h_1_mem );
                typeof((((__h_match878_1_arg . __h_data ). Just_char ). __h_0_mem )) c ;
                // ----------
                if ((__h_match878_1_arg . __h_ctor ) ==  __h_Just_char_t  )
                  { /* cicili#Block883 */
                    c  = (((__h_match878_1_arg . __h_data ). Just_char ). __h_0_mem );
                  }
                ({ /* cicili#Let885 */
                  bool __h_case_result  = (((__h_match878_1_arg . __h_ctor ) ==  __h_Just_char_t  ) &&  (c  <  'L' ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Let891 */
                      const __auto_type i  = (t . __h_0_mem );
                      __auto_type __h_match889_1_arg  = (t . __h_1_mem );
                      // ----------
                      /* cicili#Block893 */
                      ({ /* cicili#Let895 */
                        bool __h_case_result  = ((__h_match889_1_arg . __h_ctor ) ==  __h_Just_char_t  );
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
  ({ /* cicili#Let900 */
    __auto_type hello  __attribute__((__cleanup__(free_String ))) = new_String ("Hello Haskell\n");
    __auto_type txt  __attribute__((__cleanup__(free_String ))) = new_String ("Haskell List");
    // ----------
    show_String (hello );
    fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let906 */
      __auto_type __h_data905  = nth_String (txt , 3);
      typeof((((__h_data905 . __h_data ). Just_char ). __h_0_mem )) c ;
      // ----------
      if ((__h_data905 . __h_ctor ) ==  __h_Just_char_t  )
        { /* cicili#Block909 */
          c  = (((__h_data905 . __h_data ). Just_char ). __h_0_mem );
        }
      ({ /* cicili#Let911 */
        bool __h_case_result  = ((__h_data905 . __h_ctor ) ==  __h_Just_char_t  );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let916 */
          // ----------
          /* cicili#Block918 */
          fprintf (stdout , "4th element not found\n");
        }));
      });
    }));
    ({ /* cicili#Progn927 */
      ({ /* cicili#Let936 */
        __auto_type __h_data935  = nth_String (txt , 4);
        typeof((((__h_data935 . __h_data ). Just_char ). __h_0_mem )) c ;
        // ----------
        if ((__h_data935 . __h_ctor ) ==  __h_Just_char_t  )
          { /* cicili#Block942 */
            c  = (((__h_data935 . __h_data ). Just_char ). __h_0_mem );
          }
        ({ /* cicili#Let944 */
          bool __h_case_result  = ((__h_data935 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let949 */
            // ----------
            /* cicili#Block951 */
            fprintf (stdout , "%dth element not found\n", 4);
          }));
        });
      });
      ({ /* cicili#Let961 */
        __auto_type __h_data960  = nth_String (txt , 5);
        typeof((((__h_data960 . __h_data ). Just_char ). __h_0_mem )) c ;
        // ----------
        if ((__h_data960 . __h_ctor ) ==  __h_Just_char_t  )
          { /* cicili#Block967 */
            c  = (((__h_data960 . __h_data ). Just_char ). __h_0_mem );
          }
        ({ /* cicili#Let969 */
          bool __h_case_result  = ((__h_data960 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let974 */
            // ----------
            /* cicili#Block976 */
            fprintf (stdout , "%dth element not found\n", 5);
          }));
        });
      });
      ({ /* cicili#Let986 */
        __auto_type __h_data985  = nth_String (txt , 6);
        typeof((((__h_data985 . __h_data ). Just_char ). __h_0_mem )) c ;
        // ----------
        if ((__h_data985 . __h_ctor ) ==  __h_Just_char_t  )
          { /* cicili#Block992 */
            c  = (((__h_data985 . __h_data ). Just_char ). __h_0_mem );
          }
        ({ /* cicili#Let994 */
          bool __h_case_result  = ((__h_data985 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let999 */
            // ----------
            /* cicili#Block1001 */
            fprintf (stdout , "%dth element not found\n", 6);
          }));
        });
      });
      ({ /* cicili#Let1011 */
        __auto_type __h_data1010  = nth_String (txt , len_String (txt ));
        typeof((((__h_data1010 . __h_data ). Just_char ). __h_0_mem )) c ;
        // ----------
        if ((__h_data1010 . __h_ctor ) ==  __h_Just_char_t  )
          { /* cicili#Block1017 */
            c  = (((__h_data1010 . __h_data ). Just_char ). __h_0_mem );
          }
        ({ /* cicili#Let1019 */
          bool __h_case_result  = ((__h_data1010 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", len_String (txt ), c ) : ({ /* cicili#Let1024 */
            // ----------
            /* cicili#Block1026 */
            fprintf (stdout , "%dth element not found\n", len_String (txt ));
          }));
        });
      });
    });
    fprintf (stdout , "output of letin: %d\n", ({ /* cicili#Let1031 */
      __auto_type llen  = len_String (txt );
      // ----------
      ({ /* cicili#Progn1038 */
        ({ /* cicili#Let1047 */
          __auto_type __h_data1046  = nth_String (txt , 4);
          typeof((((__h_data1046 . __h_data ). Just_char ). __h_0_mem )) c ;
          // ----------
          if ((__h_data1046 . __h_ctor ) ==  __h_Just_char_t  )
            { /* cicili#Block1053 */
              c  = (((__h_data1046 . __h_data ). Just_char ). __h_0_mem );
            }
          ({ /* cicili#Let1055 */
            bool __h_case_result  = ((__h_data1046 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let1060 */
              // ----------
              /* cicili#Block1062 */
              fprintf (stdout , "%dth element not found\n", 4);
            }));
          });
        });
        ({ /* cicili#Let1072 */
          __auto_type __h_data1071  = nth_String (txt , 5);
          typeof((((__h_data1071 . __h_data ). Just_char ). __h_0_mem )) c ;
          // ----------
          if ((__h_data1071 . __h_ctor ) ==  __h_Just_char_t  )
            { /* cicili#Block1078 */
              c  = (((__h_data1071 . __h_data ). Just_char ). __h_0_mem );
            }
          ({ /* cicili#Let1080 */
            bool __h_case_result  = ((__h_data1071 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let1085 */
              // ----------
              /* cicili#Block1087 */
              fprintf (stdout , "%dth element not found\n", 5);
            }));
          });
        });
        ({ /* cicili#Let1097 */
          __auto_type __h_data1096  = nth_String (txt , 6);
          typeof((((__h_data1096 . __h_data ). Just_char ). __h_0_mem )) c ;
          // ----------
          if ((__h_data1096 . __h_ctor ) ==  __h_Just_char_t  )
            { /* cicili#Block1103 */
              c  = (((__h_data1096 . __h_data ). Just_char ). __h_0_mem );
            }
          ({ /* cicili#Let1105 */
            bool __h_case_result  = ((__h_data1096 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let1110 */
              // ----------
              /* cicili#Block1112 */
              fprintf (stdout , "%dth element not found\n", 6);
            }));
          });
        });
        ({ /* cicili#Let1122 */
          __auto_type __h_data1121  = nth_String (txt , llen );
          typeof((((__h_data1121 . __h_data ). Just_char ). __h_0_mem )) c ;
          // ----------
          if ((__h_data1121 . __h_ctor ) ==  __h_Just_char_t  )
            { /* cicili#Block1128 */
              c  = (((__h_data1121 . __h_data ). Just_char ). __h_0_mem );
            }
          ({ /* cicili#Let1130 */
            bool __h_case_result  = ((__h_data1121 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", llen , c ) : ({ /* cicili#Let1135 */
              // ----------
              /* cicili#Block1137 */
              fprintf (stdout , "%dth element not found\n", llen );
            }));
          });
        });
      });
    }));
    { /* cicili#Let1143 */
      typeof((((txt . __h_data ). Just_String ). __h_0_mem )) __h_match1141_0_arg ;
      __auto_type str  = __h_match1141_0_arg ;
      typeof((((str -> __h_data ). Cons_char ). __h_0_mem )) head ;
      typeof((((str -> __h_data ). Cons_char ). __h_1_mem )) tail ;
      // ----------
      if ((txt . __h_ctor ) ==  __h_Just_String_t  )
        { /* cicili#Block1146 */
          __h_match1141_0_arg  = (((txt . __h_data ). Just_String ). __h_0_mem );
          head  = (((str -> __h_data ). Cons_char ). __h_0_mem );
          tail  = (((str -> __h_data ). Cons_char ). __h_1_mem );
        }
      ({ /* cicili#Let1148 */
        bool __h_case_result  = (((txt . __h_ctor ) ==  __h_Just_String_t  ) &&  ((str -> __h_ctor ) ==  __h_Cons_char_t  ) );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , len_String (tail ));
      });
    }
    ({ /* cicili#Let1153 */
      __auto_type str5  __attribute__((__cleanup__(free_String ))) = new_String ("Cicili");
      // ----------
      fprintf (stdout , "has 'Cicili' desired length 5: %d\n", has_len_String (str5 , 5));
      fprintf (stdout , "has 'Cicili' desired length 6: %d\n", has_len_String (str5 , 6));
      fprintf (stdout , "has 'Cicili' desired length 7: %d\n", has_len_String (str5 , 7));
    });
    { /* cicili#Let1162 */
      __auto_type __h_data1160  = nthcdr_String (txt , 12);
      typeof((((__h_data1160 . __h_data ). Just_String ). __h_0_mem )) __h_match1159_0_arg ;
      typeof(has_len_Cons_char (__h_match1159_0_arg , 3)) __h_has_len ;
      typeof((((nth_Cons_char (__h_match1159_0_arg , 0). __h_data ). Just_char ). __h_0_mem )) fst ;
      typeof((((nth_Cons_char (__h_match1159_0_arg , 1). __h_data ). Just_char ). __h_0_mem )) snd ;
      typeof((((nth_Cons_char (__h_match1159_0_arg , 2). __h_data ). Just_char ). __h_0_mem )) trd ;
      typeof(nthcdr_Cons_char (__h_match1159_0_arg , 3)) tail ;
      // ----------
      if ((__h_data1160 . __h_ctor ) ==  __h_Just_String_t  )
        { /* cicili#Block1173 */
          __h_match1159_0_arg  = (((__h_data1160 . __h_data ). Just_String ). __h_0_mem );
          __h_has_len  = has_len_Cons_char (__h_match1159_0_arg , 3);
          fst  = (((nth_Cons_char (__h_match1159_0_arg , 0). __h_data ). Just_char ). __h_0_mem );
          snd  = (((nth_Cons_char (__h_match1159_0_arg , 1). __h_data ). Just_char ). __h_0_mem );
          trd  = (((nth_Cons_char (__h_match1159_0_arg , 2). __h_data ). Just_char ). __h_0_mem );
          tail  = nthcdr_Cons_char (__h_match1159_0_arg , 3);
        }
      ({ /* cicili#Let1183 */
        bool __h_case_result  = (((__h_data1160 . __h_ctor ) ==  __h_Just_String_t  ) &&  (__h_has_len  ==  3 ) );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first, second and third char from String: %c %c %c\n", fst , snd , trd );
        else
          { /* cicili#Let1191 */
            typeof((((__h_data1160 . __h_data ). Just_String ). __h_0_mem )) __h_match1189_0_arg ;
            typeof(has_len_Cons_char (__h_match1189_0_arg , 2)) __h_has_len ;
            typeof((((nth_Cons_char (__h_match1189_0_arg , 0). __h_data ). Just_char ). __h_0_mem )) fst ;
            typeof((((nth_Cons_char (__h_match1189_0_arg , 1). __h_data ). Just_char ). __h_0_mem )) snd ;
            typeof(nthcdr_Cons_char (__h_match1189_0_arg , 2)) tail ;
            // ----------
            if ((__h_data1160 . __h_ctor ) ==  __h_Just_String_t  )
              { /* cicili#Block1200 */
                __h_match1189_0_arg  = (((__h_data1160 . __h_data ). Just_String ). __h_0_mem );
                __h_has_len  = has_len_Cons_char (__h_match1189_0_arg , 2);
                fst  = (((nth_Cons_char (__h_match1189_0_arg , 0). __h_data ). Just_char ). __h_0_mem );
                snd  = (((nth_Cons_char (__h_match1189_0_arg , 1). __h_data ). Just_char ). __h_0_mem );
                tail  = nthcdr_Cons_char (__h_match1189_0_arg , 2);
              }
            ({ /* cicili#Let1208 */
              bool __h_case_result  = (((__h_data1160 . __h_ctor ) ==  __h_Just_String_t  ) &&  (__h_has_len  ==  2 ) );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "first and second char from String: %c %c\n", fst , snd );
              else
                { /* cicili#Let1216 */
                  typeof((((__h_data1160 . __h_data ). Just_String ). __h_0_mem )) __h_match1214_0_arg ;
                  typeof(has_len_Cons_char (__h_match1214_0_arg , 1)) __h_has_len ;
                  typeof((((nth_Cons_char (__h_match1214_0_arg , 0). __h_data ). Just_char ). __h_0_mem )) fst ;
                  typeof(nthcdr_Cons_char (__h_match1214_0_arg , 1)) tail ;
                  // ----------
                  if ((__h_data1160 . __h_ctor ) ==  __h_Just_String_t  )
                    { /* cicili#Block1223 */
                      __h_match1214_0_arg  = (((__h_data1160 . __h_data ). Just_String ). __h_0_mem );
                      __h_has_len  = has_len_Cons_char (__h_match1214_0_arg , 1);
                      fst  = (((nth_Cons_char (__h_match1214_0_arg , 0). __h_data ). Just_char ). __h_0_mem );
                      tail  = nthcdr_Cons_char (__h_match1214_0_arg , 1);
                    }
                  ({ /* cicili#Let1229 */
                    bool __h_case_result  = (((__h_data1160 . __h_ctor ) ==  __h_Just_String_t  ) &&  (__h_has_len  ==  1 ) );
                    // ----------
                    if (__h_case_result )
                      fprintf (stdout , "first char from String: %c\n", fst );
                    else
                      { /* cicili#Let1236 */
                        // ----------
                        /* cicili#Block1238 */
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
