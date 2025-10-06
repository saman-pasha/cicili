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
  ({ /* cicili#Let146 */
    __auto_type c  = (((self . __h_data ). Byte ). __h_0_mem );
    // ----------
    /* cicili#Block148 */
    ({ /* cicili#Let150 */
      bool __h_case_result  = ((self . __h_ctor ) ==  __h_Byte_t  );
      // ----------
      ((__h_case_result ) ? fprintf (stdout , "Integer is Byte: %d\n", c ) : ({ /* cicili#Let155 */
        __auto_type sh  = (((self . __h_data ). Short ). __h_0_mem );
        // ----------
        /* cicili#Block157 */
        ({ /* cicili#Let159 */
          bool __h_case_result  = ((self . __h_ctor ) ==  __h_Short_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "Integer is Short: %d\n", sh ) : ({ /* cicili#Let164 */
            __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
            // ----------
            /* cicili#Block166 */
            ({ /* cicili#Let168 */
              bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  (i  <  1000 ) );
              // ----------
              ((__h_case_result ) ? fprintf (stdout , "Integer is Int below 1000: %d\n", i ) : ({ /* cicili#Let173 */
                __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
                // ----------
                /* cicili#Block175 */
                ({ /* cicili#Let177 */
                  bool __h_case_result  = (((self . __h_ctor ) ==  __h_Int_t  ) &&  ((i  >=  1000 ) &&  (i  <  10000 ) ) );
                  // ----------
                  ((__h_case_result ) ? fprintf (stdout , "Integer is Int between 1000 and 10000: %d\n", i ) : ({ /* cicili#Let182 */
                    // ----------
                    /* cicili#Block184 */
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
  union { /* ciciliUnion192 */
    struct { /* ciciliStruct193 */
    } Nothing_char ;
    struct { /* ciciliStruct194 */
      char __h_0_mem ;
    } Just_char ;
  } __h_data ;
} Maybe_char;
Maybe_char Nothing_char () {
  return ((Maybe_char){ __h_Nothing_char_t });
}
Maybe_char Just_char (char __h_0_mem ) {
  return ((Maybe_char){ __h_Just_char_t , .__h_data.Just_char = { __h_0_mem }});
}
#endif /* _H_Maybe_char */ 
typedef enum __h_Maybe_Maybe_char_ctor_t {
  __h_Nothing_Maybe_char_t,
  __h_Just_Maybe_char_t
} __h_Maybe_Maybe_char_ctor_t;
typedef struct Maybe_Maybe_char {
  __h_Maybe_Maybe_char_ctor_t __h_ctor ;
  union { /* ciciliUnion203 */
    struct { /* ciciliStruct204 */
    } Nothing_Maybe_char ;
    struct { /* ciciliStruct205 */
      Maybe_char __h_0_mem ;
    } Just_Maybe_char ;
  } __h_data ;
} Maybe_Maybe_char;
Maybe_Maybe_char Nothing_Maybe_char () {
  return ((Maybe_Maybe_char){ __h_Nothing_Maybe_char_t });
}
Maybe_Maybe_char Just_Maybe_char (Maybe_char __h_0_mem ) {
  return ((Maybe_Maybe_char){ __h_Just_Maybe_char_t , .__h_data.Just_Maybe_char = { __h_0_mem }});
}
void print_inside_maybe (Maybe_Maybe_char mb ) {
  { /* cicili#Let211 */
    // ----------
    /* cicili#Block213 */
    ({ /* cicili#Let215 */
      bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Nothing_Maybe_char_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "wrapper Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let222 */
          __auto_type mc  = (((mb . __h_data ). Just_Maybe_char ). __h_0_mem );
          // ----------
          /* cicili#Block224 */
          ({ /* cicili#Let226 */
            bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Just_Maybe_char_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let231 */
                // ----------
                /* cicili#Block233 */
                ({ /* cicili#Let235 */
                  bool __h_case_result  = ((mc . __h_ctor ) ==  __h_Nothing_char_t  );
                  // ----------
                  if (__h_case_result )
                    fprintf (stdout , "wrapper Just Nothing char: Nothing\n");
                  else
                    { /* cicili#Let242 */
                      __auto_type c  = (((mc . __h_data ). Just_char ). __h_0_mem );
                      // ----------
                      /* cicili#Block244 */
                      ({ /* cicili#Let246 */
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
  { /* cicili#Let254 */
    // ----------
    /* cicili#Block256 */
    ({ /* cicili#Let258 */
      bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Nothing_Maybe_char_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "inner Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let266 */
          __auto_type __h_match264_0_arg  = (((imb . __h_data ). Just_Maybe_char ). __h_0_mem );
          // ----------
          /* cicili#Block268 */
          ({ /* cicili#Let270 */
            bool __h_case_result  = (((imb . __h_ctor ) ==  __h_Just_Maybe_char_t  ) &&  ((__h_match264_0_arg . __h_ctor ) ==  __h_Nothing_char_t  ) );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "inner Just Nothing char: Nothing\n");
            else
              { /* cicili#Let278 */
                __auto_type __h_match276_0_arg  = (((imb . __h_data ). Just_Maybe_char ). __h_0_mem );
                __auto_type c  = (((__h_match276_0_arg . __h_data ). Just_char ). __h_0_mem );
                // ----------
                /* cicili#Block280 */
                ({ /* cicili#Let282 */
                  bool __h_case_result  = (((imb . __h_ctor ) ==  __h_Just_Maybe_char_t  ) &&  ((__h_match276_0_arg . __h_ctor ) ==  __h_Just_char_t  ) );
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
typedef struct __ciciliS_288 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_288;
typedef __ciciliS_288 aTuple ;
void print_tuple (aTuple tup ) {
  { /* cicili#Let292 */
    const __auto_type i  = (tup . __h_0_mem );
    const __auto_type c  = (tup . __h_1_mem );
    const __auto_type s  = (tup . __h_2_mem );
    // ----------
    /* cicili#Block294 */
    ({ /* cicili#Let296 */
      bool __h_case_result  = (s  >  10 );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
      else
        { /* cicili#Let303 */
          const __auto_type i  = (tup . __h_0_mem );
          const __auto_type c  = (tup . __h_1_mem );
          const __auto_type s  = (tup . __h_2_mem );
          // ----------
          /* cicili#Block305 */
          ({ /* cicili#Let307 */
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
  union { /* ciciliUnion315 */
    struct { /* ciciliStruct316 */
    } Nothing_aTuple ;
    struct { /* ciciliStruct317 */
      aTuple __h_0_mem ;
    } Just_aTuple ;
  } __h_data ;
} Maybe_aTuple;
Maybe_aTuple Nothing_aTuple () {
  return ((Maybe_aTuple){ __h_Nothing_aTuple_t });
}
Maybe_aTuple Just_aTuple (aTuple __h_0_mem ) {
  return ((Maybe_aTuple){ __h_Just_aTuple_t , .__h_data.Just_aTuple = { __h_0_mem }});
}
#ifndef _H_Maybe_char
#define _H_Maybe_char
typedef enum __h_Maybe_char_ctor_t {
  __h_Nothing_char_t,
  __h_Just_char_t
} __h_Maybe_char_ctor_t;
typedef struct Maybe_char {
  __h_Maybe_char_ctor_t __h_ctor ;
  union { /* ciciliUnion327 */
    struct { /* ciciliStruct328 */
    } Nothing_char ;
    struct { /* ciciliStruct329 */
      char __h_0_mem ;
    } Just_char ;
  } __h_data ;
} Maybe_char;
Maybe_char Nothing_char () {
  return ((Maybe_char){ __h_Nothing_char_t });
}
Maybe_char Just_char (char __h_0_mem ) {
  return ((Maybe_char){ __h_Just_char_t , .__h_data.Just_char = { __h_0_mem }});
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
  union { /* ciciliUnion343 */
    struct { /* ciciliStruct344 */
    } Nothing_String ;
    struct { /* ciciliStruct345 */
      String __h_0_mem ;
    } Just_String ;
  } __h_data ;
} Maybe_String;
Maybe_String Nothing_String () {
  return ((Maybe_String){ __h_Nothing_String_t });
}
Maybe_String Just_String (String __h_0_mem ) {
  return ((Maybe_String){ __h_Just_String_t , .__h_data.Just_String = { __h_0_mem }});
}
typedef struct String_class_t {
  __h_String_ctor_t __h_ctor ;
  union { /* ciciliUnion349 */
    struct { /* ciciliStruct350 */
      char __h_0_mem ;
      Maybe_String __h_1_mem ;
    } Cons_char ;
  } __h_data ;
} String_class_t;
String __h_Cons_char_ctor (char __h_0_mem , Maybe_String __h_1_mem ) {
  String this  = malloc (sizeof(String_class_t ));
  (*this ) = ((String_class_t){ __h_Cons_char_t , .__h_data.Cons_char = { __h_0_mem , __h_1_mem }});
  return this ;
}
Maybe_String new_String_Pure (const char * buf , int len ) {
  if (buf  ==  NULL  )
    return Nothing_String ();
  else
    { /* cicili#Let363 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Nothing_String ();
      else
        return Just_String (__h_Cons_char_ctor (item , new_String_Pure ((++buf ), (--len ))));
    }
}
void release_String (Maybe_String list ) {
  { /* cicili#Let383 */
    __auto_type __h_match381_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
    __auto_type ls  = __h_match381_0_arg ;
    __auto_type tail  = (((ls -> __h_data ). Cons_char ). __h_1_mem );
    // ----------
    /* cicili#Block385 */
    ({ /* cicili#Let387 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((ls -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block390 */
          release_String (tail );
          free (ls );
        }
    });
  }
}
void free_String (Maybe_String * list ) {
  release_String ((*list ));
}
Maybe_char nth_String (int index , Maybe_String list ) {
  return ({ /* cicili#Let404 */
    __auto_type __h_match402_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
    __auto_type head  = (((__h_match402_0_arg -> __h_data ). Cons_char ). __h_0_mem );
    __auto_type tail  = (((__h_match402_0_arg -> __h_data ). Cons_char ). __h_1_mem );
    // ----------
    /* cicili#Block406 */
    ({ /* cicili#Let408 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match402_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_String ((--index ), tail )) : ({ /* cicili#Let415 */
        // ----------
        /* cicili#Block417 */
        Nothing_char ();
      }));
    });
  });
}
Maybe_String drop_String (int index , Maybe_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let429 */
      __auto_type __h_match427_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
      __auto_type tail  = (((__h_match427_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      // ----------
      /* cicili#Block431 */
      ({ /* cicili#Let433 */
        bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match427_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
        // ----------
        ((__h_case_result ) ? drop_String ((--index ), tail ) : ({ /* cicili#Let438 */
          // ----------
          /* cicili#Block440 */
          Nothing_String ();
        }));
      });
    }));
}
int len_String (Maybe_String list ) {
  return ({ /* cicili#Let449 */
    __auto_type __h_match447_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
    __auto_type tail  = (((__h_match447_0_arg -> __h_data ). Cons_char ). __h_1_mem );
    // ----------
    /* cicili#Block451 */
    ({ /* cicili#Let453 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match447_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      ((__h_case_result ) ? (1 +  len_String (tail ) ) : ({ /* cicili#Let458 */
        // ----------
        /* cicili#Block460 */
        0;
      }));
    });
  });
}
int has_len_String (Maybe_String list , int desired ) {
  return ({ /* cicili#Let468 */
    __auto_type __h_match466_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
    __auto_type tail  = (((__h_match466_0_arg -> __h_data ). Cons_char ). __h_1_mem );
    // ----------
    /* cicili#Block470 */
    ({ /* cicili#Let472 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match466_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_String (tail , (--desired )) )) : ({ /* cicili#Let478 */
        // ----------
        /* cicili#Block480 */
        0;
      }));
    });
  });
}
Maybe_String take_String (int len , Maybe_String list ) {
  return ({ /* cicili#Let491 */
    __auto_type __h_match489_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
    __auto_type head  = (((__h_match489_0_arg -> __h_data ). Cons_char ). __h_0_mem );
    __auto_type tail  = (((__h_match489_0_arg -> __h_data ). Cons_char ). __h_1_mem );
    // ----------
    /* cicili#Block493 */
    ({ /* cicili#Let495 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  (((__h_match489_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) &&  (len  >  0 ) ) );
      // ----------
      ((__h_case_result ) ? Just_String (__h_Cons_char_ctor (head , take_String ((--len ), tail ))) : ({ /* cicili#Let512 */
        // ----------
        /* cicili#Block514 */
        Nothing_String ();
      }));
    });
  });
}
Maybe_String append_String (Maybe_String llist , Maybe_String rlist ) {
  return ({ /* cicili#Let526 */
    __auto_type __h_match524_0_arg  = (((llist . __h_data ). Just_String ). __h_0_mem );
    __auto_type head  = (((__h_match524_0_arg -> __h_data ). Cons_char ). __h_0_mem );
    __auto_type tail  = (((__h_match524_0_arg -> __h_data ). Cons_char ). __h_1_mem );
    // ----------
    /* cicili#Block528 */
    ({ /* cicili#Let530 */
      bool __h_case_result  = (((llist . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match524_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      ((__h_case_result ) ? Just_String (__h_Cons_char_ctor (head , append_String (tail , rlist ))) : ({ /* cicili#Let547 */
        // ----------
        /* cicili#Block549 */
        rlist ;
      }));
    });
  });
}
Maybe_char nth_Cons_char (int index , String cons ) {
  return ({ /* cicili#Let559 */
    __auto_type head  = (((cons -> __h_data ). Cons_char ). __h_0_mem );
    __auto_type tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
    // ----------
    /* cicili#Block561 */
    ({ /* cicili#Let563 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_String ((--index ), tail )) : ({ /* cicili#Let570 */
        // ----------
        /* cicili#Block572 */
        Nothing_char ();
      }));
    });
  });
}
Maybe_String drop_Cons_char (int index , String cons ) {
  return (((index  ==  0 )) ? Just_String (cons ) : ({ /* cicili#Let582 */
      __auto_type tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
      // ----------
      /* cicili#Block584 */
      ({ /* cicili#Let586 */
        bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
        // ----------
        ((__h_case_result ) ? drop_String ((--index ), tail ) : ({ /* cicili#Let591 */
          // ----------
          /* cicili#Block593 */
          Nothing_String ();
        }));
      });
    }));
}
int len_Cons_char (String cons ) {
  return ({ /* cicili#Let600 */
    __auto_type tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
    // ----------
    /* cicili#Block602 */
    ({ /* cicili#Let604 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_String (tail ) ) : ({ /* cicili#Let609 */
        // ----------
        /* cicili#Block611 */
        0;
      }));
    });
  });
}
int has_len_Cons_char (String cons , int desired ) {
  return ({ /* cicili#Let617 */
    __auto_type tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
    // ----------
    /* cicili#Block619 */
    ({ /* cicili#Let621 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
      // ----------
      ((__h_case_result ) ? (1 +  has_len_String (tail , (--desired )) ) : ({ /* cicili#Let626 */
        // ----------
        /* cicili#Block628 */
        0;
      }));
    });
  });
}
Maybe_String new_String_Const (const char * buf ) {
  if (buf  ==  NULL  )
    return Nothing_String ();
  else
    { /* cicili#Let640 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Nothing_String ();
      else
        return Just_String (__h_Cons_char_ctor (item , new_String_Const ((++buf ))));
    }
}
void show_String (Maybe_String list ) {
  { /* cicili#Let661 */
    __auto_type __h_match659_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
    __auto_type head  = (((__h_match659_0_arg -> __h_data ). Cons_char ). __h_0_mem );
    __auto_type tail  = (((__h_match659_0_arg -> __h_data ). Cons_char ). __h_1_mem );
    // ----------
    /* cicili#Block663 */
    ({ /* cicili#Let665 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match659_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn668 */
          putchar (head );
          show_String (tail );
        });
    });
  }
}
int factorial (int n ) {
  return (((n  ==  1 )) ? 1 : (n  *  factorial ((n  -  1 )) ));
}
#ifndef _H_Maybe_int
#define _H_Maybe_int
typedef enum __h_Maybe_int_ctor_t {
  __h_Nothing_int_t,
  __h_Just_int_t
} __h_Maybe_int_ctor_t;
typedef struct Maybe_int {
  __h_Maybe_int_ctor_t __h_ctor ;
  union { /* ciciliUnion682 */
    struct { /* ciciliStruct683 */
    } Nothing_int ;
    struct { /* ciciliStruct684 */
      int __h_0_mem ;
    } Just_int ;
  } __h_data ;
} Maybe_int;
Maybe_int Nothing_int () {
  return ((Maybe_int){ __h_Nothing_int_t });
}
Maybe_int Just_int (int __h_0_mem ) {
  return ((Maybe_int){ __h_Just_int_t , .__h_data.Just_int = { __h_0_mem }});
}
#endif /* _H_Maybe_int */ 
typedef enum __h_List_int_ctor_t {
  __h_Cons_int_t
} __h_List_int_ctor_t;
typedef struct List_int_class_t List_int_class_t ;
typedef List_int_class_t * List_int ;
typedef struct Maybe_List_int Maybe_List_int ;
typedef enum __h_Maybe_List_int_ctor_t {
  __h_Nothing_List_int_t,
  __h_Just_List_int_t
} __h_Maybe_List_int_ctor_t;
typedef struct Maybe_List_int {
  __h_Maybe_List_int_ctor_t __h_ctor ;
  union { /* ciciliUnion698 */
    struct { /* ciciliStruct699 */
    } Nothing_List_int ;
    struct { /* ciciliStruct700 */
      List_int __h_0_mem ;
    } Just_List_int ;
  } __h_data ;
} Maybe_List_int;
Maybe_List_int Nothing_List_int () {
  return ((Maybe_List_int){ __h_Nothing_List_int_t });
}
Maybe_List_int Just_List_int (List_int __h_0_mem ) {
  return ((Maybe_List_int){ __h_Just_List_int_t , .__h_data.Just_List_int = { __h_0_mem }});
}
typedef struct List_int_class_t {
  __h_List_int_ctor_t __h_ctor ;
  union { /* ciciliUnion704 */
    struct { /* ciciliStruct705 */
      int __h_0_mem ;
      Maybe_List_int __h_1_mem ;
    } Cons_int ;
  } __h_data ;
} List_int_class_t;
List_int __h_Cons_int_ctor (int __h_0_mem , Maybe_List_int __h_1_mem ) {
  List_int this  = malloc (sizeof(List_int_class_t ));
  (*this ) = ((List_int_class_t){ __h_Cons_int_t , .__h_data.Cons_int = { __h_0_mem , __h_1_mem }});
  return this ;
}
Maybe_List_int new_List_int_Pure (const int * buf , int len ) {
  if (buf  ==  NULL  )
    return Nothing_List_int ();
  else
    { /* cicili#Let718 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Nothing_List_int ();
      else
        return Just_List_int (__h_Cons_int_ctor (item , new_List_int_Pure ((++buf ), (--len ))));
    }
}
void release_List_int (Maybe_List_int list ) {
  { /* cicili#Let738 */
    __auto_type __h_match736_0_arg  = (((list . __h_data ). Just_List_int ). __h_0_mem );
    __auto_type ls  = __h_match736_0_arg ;
    __auto_type tail  = (((ls -> __h_data ). Cons_int ). __h_1_mem );
    // ----------
    /* cicili#Block740 */
    ({ /* cicili#Let742 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_List_int_t  ) &&  ((ls -> __h_ctor ) ==  __h_Cons_int_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block745 */
          release_List_int (tail );
          free (ls );
        }
    });
  }
}
void free_List_int (Maybe_List_int * list ) {
  release_List_int ((*list ));
}
Maybe_int nth_List_int (int index , Maybe_List_int list ) {
  return ({ /* cicili#Let759 */
    __auto_type __h_match757_0_arg  = (((list . __h_data ). Just_List_int ). __h_0_mem );
    __auto_type head  = (((__h_match757_0_arg -> __h_data ). Cons_int ). __h_0_mem );
    __auto_type tail  = (((__h_match757_0_arg -> __h_data ). Cons_int ). __h_1_mem );
    // ----------
    /* cicili#Block761 */
    ({ /* cicili#Let763 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_List_int_t  ) &&  ((__h_match757_0_arg -> __h_ctor ) ==  __h_Cons_int_t  ) );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let770 */
        // ----------
        /* cicili#Block772 */
        Nothing_int ();
      }));
    });
  });
}
Maybe_List_int drop_List_int (int index , Maybe_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let784 */
      __auto_type __h_match782_0_arg  = (((list . __h_data ). Just_List_int ). __h_0_mem );
      __auto_type tail  = (((__h_match782_0_arg -> __h_data ). Cons_int ). __h_1_mem );
      // ----------
      /* cicili#Block786 */
      ({ /* cicili#Let788 */
        bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_List_int_t  ) &&  ((__h_match782_0_arg -> __h_ctor ) ==  __h_Cons_int_t  ) );
        // ----------
        ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let793 */
          // ----------
          /* cicili#Block795 */
          Nothing_List_int ();
        }));
      });
    }));
}
int len_List_int (Maybe_List_int list ) {
  return ({ /* cicili#Let804 */
    __auto_type __h_match802_0_arg  = (((list . __h_data ). Just_List_int ). __h_0_mem );
    __auto_type tail  = (((__h_match802_0_arg -> __h_data ). Cons_int ). __h_1_mem );
    // ----------
    /* cicili#Block806 */
    ({ /* cicili#Let808 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_List_int_t  ) &&  ((__h_match802_0_arg -> __h_ctor ) ==  __h_Cons_int_t  ) );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let813 */
        // ----------
        /* cicili#Block815 */
        0;
      }));
    });
  });
}
int has_len_List_int (Maybe_List_int list , int desired ) {
  return ({ /* cicili#Let823 */
    __auto_type __h_match821_0_arg  = (((list . __h_data ). Just_List_int ). __h_0_mem );
    __auto_type tail  = (((__h_match821_0_arg -> __h_data ). Cons_int ). __h_1_mem );
    // ----------
    /* cicili#Block825 */
    ({ /* cicili#Let827 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_List_int_t  ) &&  ((__h_match821_0_arg -> __h_ctor ) ==  __h_Cons_int_t  ) );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let833 */
        // ----------
        /* cicili#Block835 */
        0;
      }));
    });
  });
}
Maybe_List_int take_List_int (int len , Maybe_List_int list ) {
  return ({ /* cicili#Let846 */
    __auto_type __h_match844_0_arg  = (((list . __h_data ). Just_List_int ). __h_0_mem );
    __auto_type head  = (((__h_match844_0_arg -> __h_data ). Cons_int ). __h_0_mem );
    __auto_type tail  = (((__h_match844_0_arg -> __h_data ). Cons_int ). __h_1_mem );
    // ----------
    /* cicili#Block848 */
    ({ /* cicili#Let850 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_List_int_t  ) &&  (((__h_match844_0_arg -> __h_ctor ) ==  __h_Cons_int_t  ) &&  (len  >  0 ) ) );
      // ----------
      ((__h_case_result ) ? Just_List_int (__h_Cons_int_ctor (head , take_List_int ((--len ), tail ))) : ({ /* cicili#Let867 */
        // ----------
        /* cicili#Block869 */
        Nothing_List_int ();
      }));
    });
  });
}
Maybe_List_int append_List_int (Maybe_List_int llist , Maybe_List_int rlist ) {
  return ({ /* cicili#Let881 */
    __auto_type __h_match879_0_arg  = (((llist . __h_data ). Just_List_int ). __h_0_mem );
    __auto_type head  = (((__h_match879_0_arg -> __h_data ). Cons_int ). __h_0_mem );
    __auto_type tail  = (((__h_match879_0_arg -> __h_data ). Cons_int ). __h_1_mem );
    // ----------
    /* cicili#Block883 */
    ({ /* cicili#Let885 */
      bool __h_case_result  = (((llist . __h_ctor ) ==  __h_Just_List_int_t  ) &&  ((__h_match879_0_arg -> __h_ctor ) ==  __h_Cons_int_t  ) );
      // ----------
      ((__h_case_result ) ? Just_List_int (__h_Cons_int_ctor (head , append_List_int (tail , rlist ))) : ({ /* cicili#Let902 */
        // ----------
        /* cicili#Block904 */
        rlist ;
      }));
    });
  });
}
Maybe_int nth_Cons_int (int index , List_int cons ) {
  return ({ /* cicili#Let914 */
    __auto_type head  = (((cons -> __h_data ). Cons_int ). __h_0_mem );
    __auto_type tail  = (((cons -> __h_data ). Cons_int ). __h_1_mem );
    // ----------
    /* cicili#Block916 */
    ({ /* cicili#Let918 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_int_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let925 */
        // ----------
        /* cicili#Block927 */
        Nothing_int ();
      }));
    });
  });
}
Maybe_List_int drop_Cons_int (int index , List_int cons ) {
  return (((index  ==  0 )) ? Just_List_int (cons ) : ({ /* cicili#Let938 */
      __auto_type tail  = (((cons -> __h_data ). Cons_int ). __h_1_mem );
      // ----------
      /* cicili#Block940 */
      ({ /* cicili#Let942 */
        bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_int_t  );
        // ----------
        ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let947 */
          // ----------
          /* cicili#Block949 */
          Nothing_List_int ();
        }));
      });
    }));
}
int len_Cons_int (List_int cons ) {
  return ({ /* cicili#Let957 */
    __auto_type tail  = (((cons -> __h_data ). Cons_int ). __h_1_mem );
    // ----------
    /* cicili#Block959 */
    ({ /* cicili#Let961 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_int_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let966 */
        // ----------
        /* cicili#Block968 */
        0;
      }));
    });
  });
}
int has_len_Cons_int (List_int cons , int desired ) {
  return ({ /* cicili#Let975 */
    __auto_type tail  = (((cons -> __h_data ). Cons_int ). __h_1_mem );
    // ----------
    /* cicili#Block977 */
    ({ /* cicili#Let979 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_int_t  );
      // ----------
      ((__h_case_result ) ? (1 +  has_len_List_int (tail , (--desired )) ) : ({ /* cicili#Let984 */
        // ----------
        /* cicili#Block986 */
        0;
      }));
    });
  });
}
void show_List_int (Maybe_List_int list ) {
  { /* cicili#Let998 */
    __auto_type __h_match996_0_arg  = (((list . __h_data ). Just_List_int ). __h_0_mem );
    __auto_type head  = (((__h_match996_0_arg -> __h_data ). Cons_int ). __h_0_mem );
    __auto_type tail  = (((__h_match996_0_arg -> __h_data ). Cons_int ). __h_1_mem );
    // ----------
    /* cicili#Block1000 */
    ({ /* cicili#Let1002 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_List_int_t  ) &&  ((__h_match996_0_arg -> __h_ctor ) ==  __h_Cons_int_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1005 */
          { /* cicili#Let1009 */
            // ----------
            /* cicili#Block1011 */
            ({ /* cicili#Let1013 */
              bool __h_case_result  = ((tail . __h_ctor ) ==  __h_Just_List_int_t  );
              // ----------
              if (__h_case_result )
                printf ("%d, ", head );
              else
                { /* cicili#Let1019 */
                  // ----------
                  /* cicili#Block1021 */
                  printf ("%d ", head );
                }
            });
          }
          show_List_int (tail );
        }
    });
  }
}
typedef enum __h_Range_int_ctor_t {
  __h_Cons_Range_int_t
} __h_Range_int_ctor_t;
typedef struct Range_int_class_t Range_int_class_t ;
typedef Range_int_class_t * Range_int ;
typedef struct Maybe_Range_int Maybe_Range_int ;
typedef enum __h_Maybe_Range_int_ctor_t {
  __h_Nothing_Range_int_t,
  __h_Just_Range_int_t
} __h_Maybe_Range_int_ctor_t;
typedef struct Maybe_Range_int {
  __h_Maybe_Range_int_ctor_t __h_ctor ;
  union { /* ciciliUnion1038 */
    struct { /* ciciliStruct1039 */
    } Nothing_Range_int ;
    struct { /* ciciliStruct1040 */
      Range_int __h_0_mem ;
    } Just_Range_int ;
  } __h_data ;
} Maybe_Range_int;
Maybe_Range_int Nothing_Range_int () {
  return ((Maybe_Range_int){ __h_Nothing_Range_int_t });
}
Maybe_Range_int Just_Range_int (Range_int __h_0_mem ) {
  return ((Maybe_Range_int){ __h_Just_Range_int_t , .__h_data.Just_Range_int = { __h_0_mem }});
}
typedef struct Range_int_class_t {
  __h_Range_int_ctor_t __h_ctor ;
  union { /* ciciliUnion1044 */
    struct { /* ciciliStruct1045 */
      int __h_0_mem ;
      Maybe_Range_int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } Cons_Range_int ;
  } __h_data ;
} Range_int_class_t;
Range_int __h_Cons_Range_int_ctor (int __h_0_mem , Maybe_Range_int __h_1_mem , int __h_2_mem , int __h_3_mem ) {
  Range_int this  = malloc (sizeof(Range_int_class_t ));
  (*this ) = ((Range_int_class_t){ __h_Cons_Range_int_t , .__h_data.Cons_Range_int = { __h_0_mem , __h_1_mem , __h_2_mem , __h_3_mem }});
  return this ;
}
Maybe_Range_int new_Range_int (int from , int to , int step ) {
  return (((from  <=  to  )) ? Just_Range_int (__h_Cons_Range_int_ctor (from , Nothing_Range_int (), to , step )) : Nothing_Range_int ());
}
void release_Range_int (Maybe_Range_int list ) {
  { /* cicili#Let1069 */
    __auto_type __h_match1067_0_arg  = (((list . __h_data ). Just_Range_int ). __h_0_mem );
    __auto_type ls  = __h_match1067_0_arg ;
    __auto_type from  = (((ls -> __h_data ). Cons_Range_int ). __h_0_mem );
    __auto_type tail  = (((ls -> __h_data ). Cons_Range_int ). __h_1_mem );
    __auto_type to  = (((ls -> __h_data ). Cons_Range_int ). __h_2_mem );
    __auto_type step  = (((ls -> __h_data ). Cons_Range_int ). __h_3_mem );
    // ----------
    /* cicili#Block1071 */
    ({ /* cicili#Let1073 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_Range_int_t  ) &&  ((ls -> __h_ctor ) ==  __h_Cons_Range_int_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1076 */
          release_Range_int (tail );
          free (ls );
        }
    });
  }
}
void free_Range_int (Maybe_Range_int * list ) {
  release_Range_int ((*list ));
}
Maybe_Range_int next_Range_int (Maybe_Range_int list ) {
  return ({ /* cicili#Let1090 */
    __auto_type __h_match1088_0_arg  = (((list . __h_data ). Just_Range_int ). __h_0_mem );
    __auto_type ls  = __h_match1088_0_arg ;
    __auto_type from  = (((ls -> __h_data ). Cons_Range_int ). __h_0_mem );
    __auto_type to  = (((ls -> __h_data ). Cons_Range_int ). __h_2_mem );
    __auto_type step  = (((ls -> __h_data ). Cons_Range_int ). __h_3_mem );
    // ----------
    /* cicili#Block1092 */
    ({ /* cicili#Let1094 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_Range_int_t  ) &&  (((ls -> __h_ctor ) ==  __h_Cons_Range_int_t  ) &&  ((from  +  step  ) <=  to  ) ) );
      // ----------
      ((__h_case_result ) ? Just_Range_int (__h_Cons_Range_int_ctor ((from  +  step  ), Nothing_Range_int (), to , step )) : ({ /* cicili#Let1106 */
        // ----------
        /* cicili#Block1108 */
        Nothing_Range_int ();
      }));
    });
  });
}
Maybe_Range_int take_Range_int (int len , Maybe_Range_int list ) {
  return ({ /* cicili#Let1120 */
    __auto_type __h_match1118_0_arg  = (((list . __h_data ). Just_Range_int ). __h_0_mem );
    __auto_type from  = (((__h_match1118_0_arg -> __h_data ). Cons_Range_int ). __h_0_mem );
    __auto_type to  = (((__h_match1118_0_arg -> __h_data ). Cons_Range_int ). __h_2_mem );
    __auto_type step  = (((__h_match1118_0_arg -> __h_data ). Cons_Range_int ). __h_3_mem );
    // ----------
    /* cicili#Block1122 */
    ({ /* cicili#Let1124 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_Range_int_t  ) &&  (((__h_match1118_0_arg -> __h_ctor ) ==  __h_Cons_Range_int_t  ) &&  (len  >  0 ) ) );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let1127 */
        __auto_type ne  __attribute__((__cleanup__(free_Range_int ))) = next_Range_int (list );
        // ----------
        ({ /* cicili#Let1133 */
          // ----------
          /* cicili#Block1135 */
          ({ /* cicili#Let1137 */
            bool __h_case_result  = (((ne . __h_ctor ) ==  __h_Just_Range_int_t  ) &&  (len  >  0 ) );
            // ----------
            ((__h_case_result ) ? Just_Range_int (__h_Cons_Range_int_ctor (from , take_Range_int ((--len ), ne ), from , step )) : ({ /* cicili#Let1154 */
              // ----------
              /* cicili#Block1156 */
              Nothing_Range_int ();
            }));
          });
        });
      }) : ({ /* cicili#Let1161 */
        // ----------
        /* cicili#Block1163 */
        Nothing_Range_int ();
      }));
    });
  });
}
void show_Range_int (Maybe_Range_int list ) {
  { /* cicili#Let1172 */
    __auto_type __h_match1170_0_arg  = (((list . __h_data ). Just_Range_int ). __h_0_mem );
    __auto_type head  = (((__h_match1170_0_arg -> __h_data ). Cons_Range_int ). __h_0_mem );
    __auto_type tail  = (((__h_match1170_0_arg -> __h_data ). Cons_Range_int ). __h_1_mem );
    // ----------
    /* cicili#Block1174 */
    ({ /* cicili#Let1176 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_Range_int_t  ) &&  ((__h_match1170_0_arg -> __h_ctor ) ==  __h_Cons_Range_int_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Let1181 */
          // ----------
          /* cicili#Block1183 */
          ({ /* cicili#Let1185 */
            bool __h_case_result  = ((tail . __h_ctor ) ==  __h_Just_Range_int_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1188 */
                printf ("%d, ", head );
                show_Range_int (tail );
              }
            else
              { /* cicili#Let1194 */
                // ----------
                /* cicili#Block1196 */
                ({ /* cicili#Let1199 */
                  __auto_type ne  __attribute__((__cleanup__(free_Range_int ))) = next_Range_int (list );
                  // ----------
                  { /* cicili#Let1205 */
                    // ----------
                    /* cicili#Block1207 */
                    ({ /* cicili#Let1209 */
                      bool __h_case_result  = ((ne . __h_ctor ) ==  __h_Just_Range_int_t  );
                      // ----------
                      if (__h_case_result )
                        printf ("%d, ", head );
                      else
                        { /* cicili#Let1215 */
                          // ----------
                          /* cicili#Block1217 */
                          printf ("%d ", head );
                        }
                    });
                  }
                  show_Range_int (ne );
                });
              }
          });
        }
    });
  }
}
static int __ciciliL_1318 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_1326 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
typedef struct __ciciliS_1403 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_1403;
typedef struct __ciciliS_1405 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_1405;
typedef struct __ciciliS_1487 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
} __ciciliS_1487;
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
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_1318 (2, 16));
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_1326 (2, 16));
  fprintf (stdout , "output of function closure with $>: %d\n", (2 +  3 ));
  { /* cicili#Block1340 */
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
  { /* cicili#Let1401 */
    aTuple tup0  = { 4400, 'A', 33};
    __ciciliS_1403 tup1  = { 4401, 'B', 34};
    __auto_type tup2  = ((struct __ciciliS_1405 ){ 4402, 'C', 35});
    // ----------
    print_tuple (tup0 );
    print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
    ({ /* cicili#Let1413 */
      const __auto_type i  = (tup2 . __h_0_mem );
      const __auto_type c  = (tup2 . __h_1_mem );
      const __auto_type s  = (tup2 . __h_2_mem );
      // ----------
      /* cicili#Block1415 */
      ({ /* cicili#Let1417 */
        bool __h_case_result  = (s  >  10 );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let1422 */
          const __auto_type i  = (tup2 . __h_0_mem );
          const __auto_type c  = (tup2 . __h_1_mem );
          const __auto_type s  = (tup2 . __h_2_mem );
          // ----------
          /* cicili#Block1424 */
          ({ /* cicili#Let1426 */
            bool __h_case_result  = true ;
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let1431 */
              // ----------
              /* cicili#Block1433 */
              fprintf (stdout , "No Tuple?!");
            }));
          });
        }));
      });
    });
  }
  { /* cicili#Let1436 */
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
  { /* cicili#Let1448 */
    __auto_type __h_data1447  = Just_aTuple (((aTuple){ 55, 'D', 93}));
    // ----------
    /* cicili#Block1451 */
    ({ /* cicili#Let1453 */
      bool __h_case_result  = ((__h_data1447 . __h_ctor ) ==  __h_Nothing_aTuple_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple inside maybe: Nothing");
      else
        { /* cicili#Let1461 */
          __auto_type __h_match1459_0_arg  = (((__h_data1447 . __h_data ). Just_aTuple ). __h_0_mem );
          __auto_type t  = __h_match1459_0_arg ;
          const __auto_type i  = (t . __h_0_mem );
          const __auto_type c  = (t . __h_1_mem );
          const __auto_type s  = (t . __h_2_mem );
          // ----------
          /* cicili#Block1463 */
          ({ /* cicili#Let1465 */
            bool __h_case_result  = ((__h_data1447 . __h_ctor ) ==  __h_Just_aTuple_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let1470 */
                const __auto_type ii  = (t . __h_0_mem );
                const __auto_type cc  = (t . __h_1_mem );
                const __auto_type ss  = (t . __h_2_mem );
                // ----------
                /* cicili#Block1472 */
                ({ /* cicili#Let1474 */
                  bool __h_case_result  = true ;
                  // ----------
                  if (__h_case_result )
                    ({ /* cicili#Progn1477 */
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", ii , cc , ss );
                    });
                });
              }
          });
        }
    });
  }
  { /* cicili#Let1485 */
    __auto_type __h_data1483  = ((struct __ciciliS_1487 ){ 5060, Just_char ('M')});
    __auto_type __h_match1482_1_arg  = (__h_data1483 . __h_1_mem );
    // ----------
    /* cicili#Block1489 */
    ({ /* cicili#Let1491 */
      bool __h_case_result  = ((__h_match1482_1_arg . __h_ctor ) ==  __h_Nothing_char_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "maybe inside tuple: Nothing\n");
      else
        { /* cicili#Let1499 */
          const __auto_type i  = (__h_data1483 . __h_0_mem );
          __auto_type __h_match1497_1_arg  = (__h_data1483 . __h_1_mem );
          __auto_type c  = (((__h_match1497_1_arg . __h_data ). Just_char ). __h_0_mem );
          // ----------
          /* cicili#Block1501 */
          ({ /* cicili#Let1503 */
            bool __h_case_result  = (((__h_match1497_1_arg . __h_ctor ) ==  __h_Just_char_t  ) &&  (c  >  'L' ) );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
            else
              { /* cicili#Let1511 */
                __auto_type t  = __h_data1483 ;
                __auto_type __h_match1509_1_arg  = (t . __h_1_mem );
                __auto_type c  = (((__h_match1509_1_arg . __h_data ). Just_char ). __h_0_mem );
                // ----------
                /* cicili#Block1513 */
                ({ /* cicili#Let1515 */
                  bool __h_case_result  = (((__h_match1509_1_arg . __h_ctor ) ==  __h_Just_char_t  ) &&  (c  <  'L' ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Let1521 */
                      const __auto_type i  = (t . __h_0_mem );
                      __auto_type __h_match1519_1_arg  = (t . __h_1_mem );
                      // ----------
                      /* cicili#Block1523 */
                      ({ /* cicili#Let1525 */
                        bool __h_case_result  = ((__h_match1519_1_arg . __h_ctor ) ==  __h_Just_char_t  );
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
  ({ /* cicili#Let1530 */
    __auto_type hello  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Hello Haskell\n");
    __auto_type txt  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Haskell List");
    // ----------
    show_String (hello );
    fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let1540 */
      __auto_type __h_data1539  = nth_String (3, txt );
      __auto_type c  = (((__h_data1539 . __h_data ). Just_char ). __h_0_mem );
      // ----------
      /* cicili#Block1542 */
      ({ /* cicili#Let1544 */
        bool __h_case_result  = ((__h_data1539 . __h_ctor ) ==  __h_Just_char_t  );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let1549 */
          // ----------
          /* cicili#Block1551 */
          fprintf (stdout , "4th element not found\n");
        }));
      });
    }));
    ({ /* cicili#Progn1560 */
      ({ /* cicili#Let1569 */
        __auto_type __h_data1568  = nth_String (4, txt );
        __auto_type c  = (((__h_data1568 . __h_data ). Just_char ). __h_0_mem );
        // ----------
        /* cicili#Block1574 */
        ({ /* cicili#Let1576 */
          bool __h_case_result  = ((__h_data1568 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let1581 */
            // ----------
            /* cicili#Block1583 */
            fprintf (stdout , "%dth element not found\n", 4);
          }));
        });
      });
      ({ /* cicili#Let1593 */
        __auto_type __h_data1592  = nth_String (5, txt );
        __auto_type c  = (((__h_data1592 . __h_data ). Just_char ). __h_0_mem );
        // ----------
        /* cicili#Block1598 */
        ({ /* cicili#Let1600 */
          bool __h_case_result  = ((__h_data1592 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let1605 */
            // ----------
            /* cicili#Block1607 */
            fprintf (stdout , "%dth element not found\n", 5);
          }));
        });
      });
      ({ /* cicili#Let1617 */
        __auto_type __h_data1616  = nth_String (6, txt );
        __auto_type c  = (((__h_data1616 . __h_data ). Just_char ). __h_0_mem );
        // ----------
        /* cicili#Block1622 */
        ({ /* cicili#Let1624 */
          bool __h_case_result  = ((__h_data1616 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let1629 */
            // ----------
            /* cicili#Block1631 */
            fprintf (stdout , "%dth element not found\n", 6);
          }));
        });
      });
      ({ /* cicili#Let1641 */
        __auto_type __h_data1640  = nth_String (len_String (txt ), txt );
        __auto_type c  = (((__h_data1640 . __h_data ). Just_char ). __h_0_mem );
        // ----------
        /* cicili#Block1646 */
        ({ /* cicili#Let1648 */
          bool __h_case_result  = ((__h_data1640 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", len_String (txt ), c ) : ({ /* cicili#Let1653 */
            // ----------
            /* cicili#Block1655 */
            fprintf (stdout , "%dth element not found\n", len_String (txt ));
          }));
        });
      });
    });
    fprintf (stdout , "output of letin: %d\n", ({ /* cicili#Let1660 */
      __auto_type llen  = len_String (txt );
      // ----------
      ({ /* cicili#Progn1667 */
        ({ /* cicili#Let1676 */
          __auto_type __h_data1675  = nth_String (4, txt );
          __auto_type c  = (((__h_data1675 . __h_data ). Just_char ). __h_0_mem );
          // ----------
          /* cicili#Block1684 */
          ({ /* cicili#Let1686 */
            bool __h_case_result  = ((__h_data1675 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let1691 */
              // ----------
              /* cicili#Block1693 */
              fprintf (stdout , "%dth element not found\n", 4);
            }));
          });
        });
        ({ /* cicili#Let1703 */
          __auto_type __h_data1702  = nth_String (5, txt );
          __auto_type c  = (((__h_data1702 . __h_data ). Just_char ). __h_0_mem );
          // ----------
          /* cicili#Block1711 */
          ({ /* cicili#Let1713 */
            bool __h_case_result  = ((__h_data1702 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let1718 */
              // ----------
              /* cicili#Block1720 */
              fprintf (stdout , "%dth element not found\n", 5);
            }));
          });
        });
        ({ /* cicili#Let1730 */
          __auto_type __h_data1729  = nth_String (6, txt );
          __auto_type c  = (((__h_data1729 . __h_data ). Just_char ). __h_0_mem );
          // ----------
          /* cicili#Block1738 */
          ({ /* cicili#Let1740 */
            bool __h_case_result  = ((__h_data1729 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let1745 */
              // ----------
              /* cicili#Block1747 */
              fprintf (stdout , "%dth element not found\n", 6);
            }));
          });
        });
        ({ /* cicili#Let1757 */
          __auto_type __h_data1756  = nth_String (llen , txt );
          __auto_type c  = (((__h_data1756 . __h_data ). Just_char ). __h_0_mem );
          // ----------
          /* cicili#Block1765 */
          ({ /* cicili#Let1767 */
            bool __h_case_result  = ((__h_data1756 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", llen , c ) : ({ /* cicili#Let1772 */
              // ----------
              /* cicili#Block1774 */
              fprintf (stdout , "%dth element not found\n", llen );
            }));
          });
        });
      });
    }));
    { /* cicili#Let1780 */
      __auto_type __h_match1778_0_arg  = (((txt . __h_data ). Just_String ). __h_0_mem );
      __auto_type str  = __h_match1778_0_arg ;
      __auto_type head  = (((str -> __h_data ). Cons_char ). __h_0_mem );
      __auto_type tail  = (((str -> __h_data ). Cons_char ). __h_1_mem );
      // ----------
      /* cicili#Block1782 */
      ({ /* cicili#Let1784 */
        bool __h_case_result  = (((txt . __h_ctor ) ==  __h_Just_String_t  ) &&  ((str -> __h_ctor ) ==  __h_Cons_char_t  ) );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , len_String (tail ));
      });
    }
    ({ /* cicili#Let1789 */
      __auto_type str5  __attribute__((__cleanup__(free_String ))) = new_String_Pure (((const char[]){ 'C', 'i', 'c', 'i', 'l', 'i', '\0'}), 7);
      // ----------
      fprintf (stdout , "has 'Cicili' desired length 5: %d\n", has_len_String (str5 , 5));
      fprintf (stdout , "has 'Cicili' desired length 6: %d\n", has_len_String (str5 , 6));
      fprintf (stdout , "has 'Cicili' desired length 7: %d\n", has_len_String (str5 , 7));
    });
    { /* cicili#Let1800 */
      __auto_type __h_data1798  = drop_String (12, txt );
      __auto_type __h_match1797_0_arg  = (((__h_data1798 . __h_data ). Just_String ). __h_0_mem );
      typeof(has_len_Cons_char (__h_match1797_0_arg , 3)) __h_has_len ;
      typeof((((nth_Cons_char (0, __h_match1797_0_arg ). __h_data ). Just_char ). __h_0_mem )) fst ;
      typeof((((nth_Cons_char (1, __h_match1797_0_arg ). __h_data ). Just_char ). __h_0_mem )) snd ;
      typeof((((nth_Cons_char (2, __h_match1797_0_arg ). __h_data ). Just_char ). __h_0_mem )) trd ;
      typeof(drop_Cons_char (3, __h_match1797_0_arg )) tail ;
      // ----------
      if ((__h_data1798 . __h_ctor ) ==  __h_Just_String_t  )
        { /* cicili#Block1811 */
          __h_has_len  = has_len_Cons_char (__h_match1797_0_arg , 3);
          fst  = (((nth_Cons_char (0, __h_match1797_0_arg ). __h_data ). Just_char ). __h_0_mem );
          snd  = (((nth_Cons_char (1, __h_match1797_0_arg ). __h_data ). Just_char ). __h_0_mem );
          trd  = (((nth_Cons_char (2, __h_match1797_0_arg ). __h_data ). Just_char ). __h_0_mem );
          tail  = drop_Cons_char (3, __h_match1797_0_arg );
        }
      ({ /* cicili#Let1821 */
        bool __h_case_result  = (((__h_data1798 . __h_ctor ) ==  __h_Just_String_t  ) &&  (__h_has_len  ==  3 ) );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first, second and third char from String: %c %c %c\n", fst , snd , trd );
        else
          { /* cicili#Let1829 */
            __auto_type __h_match1827_0_arg  = (((__h_data1798 . __h_data ). Just_String ). __h_0_mem );
            typeof(has_len_Cons_char (__h_match1827_0_arg , 2)) __h_has_len ;
            typeof((((nth_Cons_char (0, __h_match1827_0_arg ). __h_data ). Just_char ). __h_0_mem )) fst ;
            typeof((((nth_Cons_char (1, __h_match1827_0_arg ). __h_data ). Just_char ). __h_0_mem )) snd ;
            typeof(drop_Cons_char (2, __h_match1827_0_arg )) tail ;
            // ----------
            if ((__h_data1798 . __h_ctor ) ==  __h_Just_String_t  )
              { /* cicili#Block1838 */
                __h_has_len  = has_len_Cons_char (__h_match1827_0_arg , 2);
                fst  = (((nth_Cons_char (0, __h_match1827_0_arg ). __h_data ). Just_char ). __h_0_mem );
                snd  = (((nth_Cons_char (1, __h_match1827_0_arg ). __h_data ). Just_char ). __h_0_mem );
                tail  = drop_Cons_char (2, __h_match1827_0_arg );
              }
            ({ /* cicili#Let1846 */
              bool __h_case_result  = (((__h_data1798 . __h_ctor ) ==  __h_Just_String_t  ) &&  (__h_has_len  ==  2 ) );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "first and second char from String: %c %c\n", fst , snd );
              else
                { /* cicili#Let1854 */
                  __auto_type __h_match1852_0_arg  = (((__h_data1798 . __h_data ). Just_String ). __h_0_mem );
                  typeof(has_len_Cons_char (__h_match1852_0_arg , 1)) __h_has_len ;
                  typeof((((nth_Cons_char (0, __h_match1852_0_arg ). __h_data ). Just_char ). __h_0_mem )) fst ;
                  typeof(drop_Cons_char (1, __h_match1852_0_arg )) tail ;
                  // ----------
                  if ((__h_data1798 . __h_ctor ) ==  __h_Just_String_t  )
                    { /* cicili#Block1861 */
                      __h_has_len  = has_len_Cons_char (__h_match1852_0_arg , 1);
                      fst  = (((nth_Cons_char (0, __h_match1852_0_arg ). __h_data ). Just_char ). __h_0_mem );
                      tail  = drop_Cons_char (1, __h_match1852_0_arg );
                    }
                  ({ /* cicili#Let1867 */
                    bool __h_case_result  = (((__h_data1798 . __h_ctor ) ==  __h_Just_String_t  ) &&  (__h_has_len  ==  1 ) );
                    // ----------
                    if (__h_case_result )
                      fprintf (stdout , "first char from String: %c\n", fst );
                    else
                      { /* cicili#Let1874 */
                        // ----------
                        /* cicili#Block1876 */
                        fprintf (stdout , "default case String\n");
                      }
                  });
                }
            });
          }
      });
    }
  });
  ({ /* cicili#Let1880 */
    __auto_type ilist0  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
    __auto_type ilist1  __attribute__((__cleanup__(free_List_int ))) = Just_List_int (__h_Cons_int_ctor (5, ilist0 ));
    __auto_type ilist2  __attribute__((__cleanup__(free_List_int ))) = append_List_int (ilist1 , ilist0 );
    __auto_type intarr  = ((const int[]){ 4, 3, 2});
    __auto_type ilist3  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (intarr , 3);
    __auto_type ilist4  __attribute__((__cleanup__(free_List_int ))) = take_List_int (2, ilist2 );
    // ----------
    fprintf (stdout , "first elem of int list0: %d\n", ({ /* cicili#Let1905 */
      __auto_type __h_data1904  = nth_List_int (0, ilist0 );
      __auto_type i  = (((__h_data1904 . __h_data ). Just_int ). __h_0_mem );
      // ----------
      /* cicili#Block1909 */
      ({ /* cicili#Let1911 */
        bool __h_case_result  = ((__h_data1904 . __h_ctor ) ==  __h_Just_int_t  );
        // ----------
        ((__h_case_result ) ? i  : ({ /* cicili#Let1915 */
          // ----------
          /* cicili#Block1917 */
          -1;
        }));
      });
    }));
    fprintf (stdout , "first elem of int list1: %d\n", ({ /* cicili#Let1923 */
      __auto_type __h_data1922  = nth_List_int (0, ilist1 );
      __auto_type i  = (((__h_data1922 . __h_data ). Just_int ). __h_0_mem );
      // ----------
      /* cicili#Block1927 */
      ({ /* cicili#Let1929 */
        bool __h_case_result  = ((__h_data1922 . __h_ctor ) ==  __h_Just_int_t  );
        // ----------
        ((__h_case_result ) ? i  : ({ /* cicili#Let1933 */
          // ----------
          /* cicili#Block1935 */
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
  ({ /* cicili#Let1943 */
    __auto_type ra0  __attribute__((__cleanup__(free_Range_int ))) = new_Range_int (1, 20, 3);
    __auto_type ra1  __attribute__((__cleanup__(free_Range_int ))) = take_Range_int (3, ra0 );
    // ----------
    fprintf (stdout , "range 1 20 3:\n");
    show_Range_int (ra0 );
    fprintf (stdout , "\ntake 3 of range 1 20 3:\n");
    show_Range_int (ra1 );
  });
}
