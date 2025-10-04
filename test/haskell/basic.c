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
int main () {
  { /* cicili#Block596 */
    fprintf (stdout , "output of function composition1: %d\n", (3 *  (2 +  5 ) ));
    fprintf (stdout , "output of function composition2: %d\n", (3 *  (2 +  5 ) ));
    fprintf (stdout , "output of function composition3: %d\n", (3 *  (2 +  5 ) ));
    fprintf (stdout , "output of function composition4: %d\n", (3 *  (2 +  5 ) ));
  }
  (((1 ==  1 )) ? fprintf (stdout , "output of function guard1: %d\n", 1) : (((1 ==  2 )) ? fprintf (stdout , "output of function guard2: %d\n", 1) : fprintf (stdout , "output of function guard otherwise: %d\n", 1)));
  (((2 ==  1 )) ? fprintf (stdout , "output of function guard1: %d\n", 2) : (((2 ==  2 )) ? fprintf (stdout , "output of function guard2: %d\n", 2) : fprintf (stdout , "output of function guard otherwise: %d\n", 2)));
  (((3 ==  1 )) ? fprintf (stdout , "output of function guard1: %d\n", 3) : (((3 ==  2 )) ? fprintf (stdout , "output of function guard2: %d\n", 3) : fprintf (stdout , "output of function guard otherwise: %d\n", 3)));
}
