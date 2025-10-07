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
typedef enum DefaultCtor {
  __h___t
} DefaultCtor;
typedef enum Bool {
  False,
  True
} Bool;
typedef enum Maybe {
  __h_Nothing_t,
  __h_Just_t
} Maybe;
typedef enum __h_Ordering_ctor_t {
  __h_LT_t,
  __h_EQ_t,
  __h_GT_t
} __h_Ordering_ctor_t;
typedef struct Ordering {
  __h_Ordering_ctor_t __h_ctor ;
  union { /* ciciliUnion119 */
    struct { /* ciciliStruct120 */
    } LT ;
    struct { /* ciciliStruct121 */
    } EQ ;
    struct { /* ciciliStruct122 */
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
  union { /* ciciliUnion128 */
    struct { /* ciciliStruct129 */
      char __h_0_mem ;
    } Byte ;
    struct { /* ciciliStruct130 */
      short __h_0_mem ;
    } Short ;
    struct { /* ciciliStruct131 */
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
#ifndef _H_Maybe_char
#define _H_Maybe_char
typedef struct Maybe_char {
  Maybe __h_ctor ;
  union { /* ciciliUnion184 */
    struct { /* ciciliStruct185 */
    } Nothing ;
    struct { /* ciciliStruct186 */
      char __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_char;
Maybe_char Nothing_char () {
  return ((Maybe_char){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_char Just_char (char value ) {
  return ((Maybe_char){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
}
#endif /* _H_Maybe_char */ 
typedef struct Maybe_Maybe_char {
  Maybe __h_ctor ;
  union { /* ciciliUnion198 */
    struct { /* ciciliStruct199 */
    } Nothing ;
    struct { /* ciciliStruct200 */
      Maybe_char __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_Maybe_char;
Maybe_Maybe_char Nothing_Maybe_char () {
  return ((Maybe_Maybe_char){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_Maybe_char Just_Maybe_char (Maybe_char value ) {
  return ((Maybe_Maybe_char){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
}
void print_inside_maybe (Maybe_Maybe_char mb ) {
  { /* cicili#Let214 */
    // ----------
    /* cicili#Block216 */
    ({ /* cicili#Let218 */
      bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "wrapper Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let225 */
          __auto_type mc  = (((mb . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block227 */
          ({ /* cicili#Let229 */
            bool __h_case_result  = ((mb . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let234 */
                // ----------
                /* cicili#Block236 */
                ({ /* cicili#Let238 */
                  bool __h_case_result  = ((mc . __h_ctor ) ==  __h_Nothing_t  );
                  // ----------
                  if (__h_case_result )
                    fprintf (stdout , "wrapper Just Nothing char: Nothing\n");
                  else
                    { /* cicili#Let245 */
                      __auto_type c  = (((mc . __h_data ). Just ). __h_0_mem );
                      // ----------
                      /* cicili#Block247 */
                      ({ /* cicili#Let249 */
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
  { /* cicili#Let257 */
    // ----------
    /* cicili#Block259 */
    ({ /* cicili#Let261 */
      bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "inner Nothing Maybe char: Nothing\n");
      else
        { /* cicili#Let268 */
          __auto_type Nothing  = (((imb . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block270 */
          ({ /* cicili#Let272 */
            bool __h_case_result  = ((imb . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "inner Just Nothing char: Nothing\n");
            else
              { /* cicili#Let280 */
                __auto_type __h_match278_0_arg  = (((imb . __h_data ). Just ). __h_0_mem );
                __auto_type c  = (((__h_match278_0_arg . __h_data ). Just ). __h_0_mem );
                // ----------
                /* cicili#Block282 */
                ({ /* cicili#Let284 */
                  bool __h_case_result  = (((imb . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match278_0_arg . __h_ctor ) ==  __h_Just_t  ) );
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
typedef struct __ciciliS_290 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_290;
typedef __ciciliS_290 aTuple ;
void print_tuple (aTuple tup ) {
  { /* cicili#Let294 */
    const __auto_type i  = (tup . __h_0_mem );
    const __auto_type c  = (tup . __h_1_mem );
    const __auto_type s  = (tup . __h_2_mem );
    // ----------
    /* cicili#Block296 */
    ({ /* cicili#Let298 */
      bool __h_case_result  = (s  >  10 );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
      else
        { /* cicili#Let305 */
          const __auto_type i  = (tup . __h_0_mem );
          const __auto_type c  = (tup . __h_1_mem );
          const __auto_type s  = (tup . __h_2_mem );
          // ----------
          /* cicili#Block307 */
          ({ /* cicili#Let309 */
            bool __h_case_result  = true ;
            // ----------
            if (__h_case_result )
              fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
          });
        }
    });
  }
}
typedef struct Maybe_aTuple {
  Maybe __h_ctor ;
  union { /* ciciliUnion316 */
    struct { /* ciciliStruct317 */
    } Nothing ;
    struct { /* ciciliStruct318 */
      aTuple __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_aTuple;
Maybe_aTuple Nothing_aTuple () {
  return ((Maybe_aTuple){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_aTuple Just_aTuple (aTuple value ) {
  return ((Maybe_aTuple){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
}
#ifndef _H_Maybe_char
#define _H_Maybe_char
typedef struct Maybe_char {
  Maybe __h_ctor ;
  union { /* ciciliUnion333 */
    struct { /* ciciliStruct334 */
    } Nothing ;
    struct { /* ciciliStruct335 */
      char __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_char;
Maybe_char Nothing_char () {
  return ((Maybe_char){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_char Just_char (char value ) {
  return ((Maybe_char){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
}
#endif /* _H_Maybe_char */ 
typedef enum __h_String_ctor_t {
  __h___h_String_ctor_t_t
} __h_String_ctor_t;
typedef struct String_class_t String_class_t ;
typedef String_class_t * String ;
typedef struct Maybe_String Maybe_String ;
typedef struct Maybe_String {
  Maybe __h_ctor ;
  union { /* ciciliUnion354 */
    struct { /* ciciliStruct355 */
    } Nothing ;
    struct { /* ciciliStruct356 */
      String __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_String;
Maybe_String Nothing_String () {
  return ((Maybe_String){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_String Just_String (String value ) {
  return ((Maybe_String){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
}
typedef struct String_class_t {
  DefaultCtor __h_ctor ;
  union { /* ciciliUnion366 */
    struct { /* ciciliStruct367 */
      char __h_0_mem ;
      Maybe_String __h_1_mem ;
    } _ ;
  } __h_data ;
} String_class_t;
String __h_Cons_char_ctor (char __h_0_mem , Maybe_String __h_1_mem ) {
  String this  = malloc (sizeof(String_class_t ));
  (*this ) = ((String_class_t){ __h___t , .__h_data._ = { __h_0_mem , __h_1_mem }});
  return this ;
}
Maybe_String new_String_Pure (const char * buf , int len ) {
  if (buf  ==  NULL  )
    return Nothing_String ();
  else
    { /* cicili#Let380 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Nothing_String ();
      else
        return Just_String (__h_Cons_char_ctor (item , new_String_Pure ((++buf ), (--len ))));
    }
}
void release_String (Maybe_String list ) {
  { /* cicili#Let400 */
    __auto_type __h_match398_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type ls  = __h_match398_0_arg ;
    __auto_type tail  = (((ls -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block402 */
    ({ /* cicili#Let404 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((ls -> __h_ctor ) ==  __h___t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block407 */
          release_String (tail );
          free (ls );
        }
    });
  }
}
void free_String (Maybe_String * list ) {
  release_String ((*list ));
}
Maybe_String next_String (Maybe_String list ) {
  return ({ /* cicili#Let421 */
    __auto_type __h_match419_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type ls  = __h_match419_0_arg ;
    __auto_type tail  = (((ls -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block423 */
    ({ /* cicili#Let425 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((ls -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let429 */
        // ----------
        /* cicili#Block431 */
        Nothing_String ();
      }));
    });
  });
}
Maybe_char nth_String (int index , Maybe_String list ) {
  return ({ /* cicili#Let441 */
    __auto_type __h_match439_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match439_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match439_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block443 */
    ({ /* cicili#Let445 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match439_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_String ((--index ), tail )) : ({ /* cicili#Let452 */
        // ----------
        /* cicili#Block454 */
        Nothing_char ();
      }));
    });
  });
}
Maybe_String drop_String (int index , Maybe_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let466 */
      __auto_type __h_match464_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
      __auto_type tail  = (((__h_match464_0_arg -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block468 */
      ({ /* cicili#Let470 */
        bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match464_0_arg -> __h_ctor ) ==  __h___t  ) );
        // ----------
        ((__h_case_result ) ? drop_String ((--index ), tail ) : ({ /* cicili#Let475 */
          // ----------
          /* cicili#Block477 */
          Nothing_String ();
        }));
      });
    }));
}
int len_String (Maybe_String list ) {
  return ({ /* cicili#Let486 */
    __auto_type __h_match484_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type tail  = (((__h_match484_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block488 */
    ({ /* cicili#Let490 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match484_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? (1 +  len_String (tail ) ) : ({ /* cicili#Let495 */
        // ----------
        /* cicili#Block497 */
        0;
      }));
    });
  });
}
int has_len_String (Maybe_String list , int desired ) {
  return ({ /* cicili#Let505 */
    __auto_type __h_match503_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type tail  = (((__h_match503_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block507 */
    ({ /* cicili#Let509 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match503_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_String (tail , (--desired )) )) : ({ /* cicili#Let515 */
        // ----------
        /* cicili#Block517 */
        0;
      }));
    });
  });
}
Maybe_String take_String (int len , Maybe_String list ) {
  return ({ /* cicili#Let528 */
    __auto_type __h_match526_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match526_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match526_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block530 */
    ({ /* cicili#Let532 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  (((__h_match526_0_arg -> __h_ctor ) ==  __h___t  ) &&  (len  >  0 ) ) );
      // ----------
      ((__h_case_result ) ? Just_String (__h_Cons_char_ctor (head , take_String ((--len ), tail ))) : ({ /* cicili#Let549 */
        // ----------
        /* cicili#Block551 */
        Nothing_String ();
      }));
    });
  });
}
Maybe_String append_String (Maybe_String llist , Maybe_String rlist ) {
  return ({ /* cicili#Let563 */
    __auto_type __h_match561_0_arg  = (((llist . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match561_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match561_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block565 */
    ({ /* cicili#Let567 */
      bool __h_case_result  = (((llist . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match561_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? Just_String (__h_Cons_char_ctor (head , append_String (tail , rlist ))) : ({ /* cicili#Let584 */
        // ----------
        /* cicili#Block586 */
        rlist ;
      }));
    });
  });
}
Maybe_char nth_Cons_char (int index , String cons ) {
  return ({ /* cicili#Let596 */
    __auto_type head  = (((cons -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block598 */
    ({ /* cicili#Let600 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_String ((--index ), tail )) : ({ /* cicili#Let607 */
        // ----------
        /* cicili#Block609 */
        Nothing_char ();
      }));
    });
  });
}
Maybe_String drop_Cons_char (int index , String cons ) {
  return (((index  ==  0 )) ? Just_String (cons ) : ({ /* cicili#Let619 */
      __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block621 */
      ({ /* cicili#Let623 */
        bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? drop_String ((--index ), tail ) : ({ /* cicili#Let628 */
          // ----------
          /* cicili#Block630 */
          Nothing_String ();
        }));
      });
    }));
}
int len_Cons_char (String cons ) {
  return ({ /* cicili#Let637 */
    __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block639 */
    ({ /* cicili#Let641 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_String (tail ) ) : ({ /* cicili#Let646 */
        // ----------
        /* cicili#Block648 */
        0;
      }));
    });
  });
}
int has_len_Cons_char (String cons , int desired ) {
  return ({ /* cicili#Let654 */
    __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block656 */
    ({ /* cicili#Let658 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? (1 +  has_len_String (tail , (--desired )) ) : ({ /* cicili#Let663 */
        // ----------
        /* cicili#Block665 */
        0;
      }));
    });
  });
}
Maybe_String new_String_Const (const char * buf ) {
  if (buf  ==  NULL  )
    return Nothing_String ();
  else
    { /* cicili#Let677 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Nothing_String ();
      else
        return Just_String (__h_Cons_char_ctor (item , new_String_Const ((++buf ))));
    }
}
void show_String (Maybe_String list ) {
  { /* cicili#Let698 */
    __auto_type __h_match696_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match696_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match696_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block700 */
    ({ /* cicili#Let702 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match696_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn705 */
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
typedef struct Maybe_int {
  Maybe __h_ctor ;
  union { /* ciciliUnion718 */
    struct { /* ciciliStruct719 */
    } Nothing ;
    struct { /* ciciliStruct720 */
      int __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_int;
Maybe_int Nothing_int () {
  return ((Maybe_int){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_int Just_int (int value ) {
  return ((Maybe_int){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
}
#endif /* _H_Maybe_int */ 
typedef enum __h_List_int_ctor_t {
  __h___h_List_int_ctor_t_t
} __h_List_int_ctor_t;
typedef struct List_int_class_t List_int_class_t ;
typedef List_int_class_t * List_int ;
typedef struct Maybe_List_int Maybe_List_int ;
typedef struct Maybe_List_int {
  Maybe __h_ctor ;
  union { /* ciciliUnion739 */
    struct { /* ciciliStruct740 */
    } Nothing ;
    struct { /* ciciliStruct741 */
      List_int __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_List_int;
Maybe_List_int Nothing_List_int () {
  return ((Maybe_List_int){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_List_int Just_List_int (List_int value ) {
  return ((Maybe_List_int){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
}
typedef struct List_int_class_t {
  DefaultCtor __h_ctor ;
  union { /* ciciliUnion751 */
    struct { /* ciciliStruct752 */
      int __h_0_mem ;
      Maybe_List_int __h_1_mem ;
    } _ ;
  } __h_data ;
} List_int_class_t;
List_int __h_Cons_int_ctor (int __h_0_mem , Maybe_List_int __h_1_mem ) {
  List_int this  = malloc (sizeof(List_int_class_t ));
  (*this ) = ((List_int_class_t){ __h___t , .__h_data._ = { __h_0_mem , __h_1_mem }});
  return this ;
}
Maybe_List_int new_List_int_Pure (const int * buf , int len ) {
  if (buf  ==  NULL  )
    return Nothing_List_int ();
  else
    { /* cicili#Let765 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Nothing_List_int ();
      else
        return Just_List_int (__h_Cons_int_ctor (item , new_List_int_Pure ((++buf ), (--len ))));
    }
}
void release_List_int (Maybe_List_int list ) {
  { /* cicili#Let785 */
    __auto_type __h_match783_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type ls  = __h_match783_0_arg ;
    __auto_type tail  = (((ls -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block787 */
    ({ /* cicili#Let789 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((ls -> __h_ctor ) ==  __h___t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block792 */
          release_List_int (tail );
          free (ls );
        }
    });
  }
}
void free_List_int (Maybe_List_int * list ) {
  release_List_int ((*list ));
}
Maybe_List_int next_List_int (Maybe_List_int list ) {
  return ({ /* cicili#Let806 */
    __auto_type __h_match804_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type ls  = __h_match804_0_arg ;
    __auto_type tail  = (((ls -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block808 */
    ({ /* cicili#Let810 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((ls -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let814 */
        // ----------
        /* cicili#Block816 */
        Nothing_List_int ();
      }));
    });
  });
}
Maybe_int nth_List_int (int index , Maybe_List_int list ) {
  return ({ /* cicili#Let826 */
    __auto_type __h_match824_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match824_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match824_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block828 */
    ({ /* cicili#Let830 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match824_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let837 */
        // ----------
        /* cicili#Block839 */
        Nothing_int ();
      }));
    });
  });
}
Maybe_List_int drop_List_int (int index , Maybe_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let851 */
      __auto_type __h_match849_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
      __auto_type tail  = (((__h_match849_0_arg -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block853 */
      ({ /* cicili#Let855 */
        bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match849_0_arg -> __h_ctor ) ==  __h___t  ) );
        // ----------
        ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let860 */
          // ----------
          /* cicili#Block862 */
          Nothing_List_int ();
        }));
      });
    }));
}
int len_List_int (Maybe_List_int list ) {
  return ({ /* cicili#Let871 */
    __auto_type __h_match869_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type tail  = (((__h_match869_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block873 */
    ({ /* cicili#Let875 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match869_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let880 */
        // ----------
        /* cicili#Block882 */
        0;
      }));
    });
  });
}
int has_len_List_int (Maybe_List_int list , int desired ) {
  return ({ /* cicili#Let890 */
    __auto_type __h_match888_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type tail  = (((__h_match888_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block892 */
    ({ /* cicili#Let894 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match888_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let900 */
        // ----------
        /* cicili#Block902 */
        0;
      }));
    });
  });
}
Maybe_List_int take_List_int (int len , Maybe_List_int list ) {
  return ({ /* cicili#Let913 */
    __auto_type __h_match911_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match911_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match911_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block915 */
    ({ /* cicili#Let917 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  (((__h_match911_0_arg -> __h_ctor ) ==  __h___t  ) &&  (len  >  0 ) ) );
      // ----------
      ((__h_case_result ) ? Just_List_int (__h_Cons_int_ctor (head , take_List_int ((--len ), tail ))) : ({ /* cicili#Let934 */
        // ----------
        /* cicili#Block936 */
        Nothing_List_int ();
      }));
    });
  });
}
Maybe_List_int append_List_int (Maybe_List_int llist , Maybe_List_int rlist ) {
  return ({ /* cicili#Let948 */
    __auto_type __h_match946_0_arg  = (((llist . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match946_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match946_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block950 */
    ({ /* cicili#Let952 */
      bool __h_case_result  = (((llist . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match946_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? Just_List_int (__h_Cons_int_ctor (head , append_List_int (tail , rlist ))) : ({ /* cicili#Let969 */
        // ----------
        /* cicili#Block971 */
        rlist ;
      }));
    });
  });
}
Maybe_int nth_Cons_int (int index , List_int cons ) {
  return ({ /* cicili#Let981 */
    __auto_type head  = (((cons -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block983 */
    ({ /* cicili#Let985 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let992 */
        // ----------
        /* cicili#Block994 */
        Nothing_int ();
      }));
    });
  });
}
Maybe_List_int drop_Cons_int (int index , List_int cons ) {
  return (((index  ==  0 )) ? Just_List_int (cons ) : ({ /* cicili#Let1005 */
      __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block1007 */
      ({ /* cicili#Let1009 */
        bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let1014 */
          // ----------
          /* cicili#Block1016 */
          Nothing_List_int ();
        }));
      });
    }));
}
int len_Cons_int (List_int cons ) {
  return ({ /* cicili#Let1024 */
    __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block1026 */
    ({ /* cicili#Let1028 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let1033 */
        // ----------
        /* cicili#Block1035 */
        0;
      }));
    });
  });
}
int has_len_Cons_int (List_int cons , int desired ) {
  return ({ /* cicili#Let1042 */
    __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block1044 */
    ({ /* cicili#Let1046 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? (1 +  has_len_List_int (tail , (--desired )) ) : ({ /* cicili#Let1051 */
        // ----------
        /* cicili#Block1053 */
        0;
      }));
    });
  });
}
void show_List_int (Maybe_List_int list ) {
  { /* cicili#Let1065 */
    __auto_type __h_match1063_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match1063_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match1063_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block1067 */
    ({ /* cicili#Let1069 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match1063_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1072 */
          { /* cicili#Let1076 */
            // ----------
            /* cicili#Block1078 */
            ({ /* cicili#Let1080 */
              bool __h_case_result  = ((tail . __h_ctor ) ==  __h_Just_t  );
              // ----------
              if (__h_case_result )
                printf ("%d, ", head );
              else
                { /* cicili#Let1086 */
                  // ----------
                  /* cicili#Block1088 */
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
  __h___h_Range_int_ctor_t_t
} __h_Range_int_ctor_t;
typedef struct Range_int_class_t Range_int_class_t ;
typedef Range_int_class_t * Range_int ;
typedef struct Maybe_Range_int Maybe_Range_int ;
typedef struct Maybe_Range_int {
  Maybe __h_ctor ;
  union { /* ciciliUnion1104 */
    struct { /* ciciliStruct1105 */
    } Nothing ;
    struct { /* ciciliStruct1106 */
      Range_int __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_Range_int;
Maybe_Range_int Nothing_Range_int () {
  return ((Maybe_Range_int){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_Range_int Just_Range_int (Range_int value ) {
  return ((Maybe_Range_int){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
}
typedef struct Range_int_class_t {
  DefaultCtor __h_ctor ;
  union { /* ciciliUnion1116 */
    struct { /* ciciliStruct1117 */
      int __h_0_mem ;
      Maybe_Range_int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } _ ;
  } __h_data ;
} Range_int_class_t;
Range_int __h_Cons_Range_int_ctor (int __h_0_mem , Maybe_Range_int __h_1_mem , int __h_2_mem , int __h_3_mem ) {
  Range_int this  = malloc (sizeof(Range_int_class_t ));
  (*this ) = ((Range_int_class_t){ __h___t , .__h_data._ = { __h_0_mem , __h_1_mem , __h_2_mem , __h_3_mem }});
  return this ;
}
Maybe_Range_int new_Range_int (int from , int to , int step ) {
  return (((from  <=  to  )) ? Just_Range_int (__h_Cons_Range_int_ctor (from , Nothing_Range_int (), to , step )) : Nothing_Range_int ());
}
void release_Range_int (Maybe_Range_int list ) {
  { /* cicili#Let1141 */
    __auto_type __h_match1139_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type ls  = __h_match1139_0_arg ;
    __auto_type from  = (((ls -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((ls -> __h_data ). _ ). __h_1_mem );
    __auto_type to  = (((ls -> __h_data ). _ ). __h_2_mem );
    __auto_type step  = (((ls -> __h_data ). _ ). __h_3_mem );
    // ----------
    /* cicili#Block1143 */
    ({ /* cicili#Let1145 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((ls -> __h_ctor ) ==  __h___t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1148 */
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
  return ({ /* cicili#Let1162 */
    __auto_type __h_match1160_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type ls  = __h_match1160_0_arg ;
    __auto_type from  = (((ls -> __h_data ). _ ). __h_0_mem );
    __auto_type to  = (((ls -> __h_data ). _ ). __h_2_mem );
    __auto_type step  = (((ls -> __h_data ). _ ). __h_3_mem );
    // ----------
    /* cicili#Block1164 */
    ({ /* cicili#Let1166 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  (((ls -> __h_ctor ) ==  __h___t  ) &&  ((from  +  step  ) <=  to  ) ) );
      // ----------
      ((__h_case_result ) ? Just_Range_int (__h_Cons_Range_int_ctor ((from  +  step  ), Nothing_Range_int (), to , step )) : ({ /* cicili#Let1178 */
        // ----------
        /* cicili#Block1180 */
        Nothing_Range_int ();
      }));
    });
  });
}
Maybe_Range_int take_Range_int (int len , Maybe_Range_int list ) {
  return ({ /* cicili#Let1192 */
    __auto_type __h_match1190_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type from  = (((__h_match1190_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type to  = (((__h_match1190_0_arg -> __h_data ). _ ). __h_2_mem );
    __auto_type step  = (((__h_match1190_0_arg -> __h_data ). _ ). __h_3_mem );
    // ----------
    /* cicili#Block1194 */
    ({ /* cicili#Let1196 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  (((__h_match1190_0_arg -> __h_ctor ) ==  __h___t  ) &&  (len  >  0 ) ) );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let1199 */
        __auto_type ne  __attribute__((__cleanup__(free_Range_int ))) = next_Range_int (list );
        // ----------
        ({ /* cicili#Let1205 */
          // ----------
          /* cicili#Block1207 */
          ({ /* cicili#Let1209 */
            bool __h_case_result  = ((ne . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? Just_Range_int (__h_Cons_Range_int_ctor (from , take_Range_int ((--len ), ne ), to , step )) : ({ /* cicili#Let1226 */
              // ----------
              /* cicili#Block1228 */
              Just_Range_int (__h_Cons_Range_int_ctor (from , ne , to , step ));
            }));
          });
        });
      }) : ({ /* cicili#Let1244 */
        // ----------
        /* cicili#Block1246 */
        Nothing_Range_int ();
      }));
    });
  });
}
void show_Range_int (Maybe_Range_int list ) {
  { /* cicili#Let1255 */
    __auto_type __h_match1253_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match1253_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match1253_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block1257 */
    ({ /* cicili#Let1259 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match1253_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Let1264 */
          // ----------
          /* cicili#Block1266 */
          ({ /* cicili#Let1268 */
            bool __h_case_result  = ((tail . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1271 */
                printf ("%d, ", head );
                show_Range_int (tail );
              }
            else
              { /* cicili#Let1277 */
                // ----------
                /* cicili#Block1279 */
                printf ("%d ", head );
              }
          });
        }
    });
  }
}
static int __ciciliL_1379 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_1387 (int x , int y ) {
  return ((int)pow (((double)x ), ((double)y )));
}
typedef struct __ciciliS_1464 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_1464;
typedef struct __ciciliS_1466 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
} __ciciliS_1466;
typedef struct __ciciliS_1547 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
} __ciciliS_1547;
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
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_1379 (2, 16));
  fprintf (stdout , "output of reducible function: %d\n", __ciciliL_1387 (2, 16));
  fprintf (stdout , "output of function closure with $>: %d\n", (2 +  3 ));
  { /* cicili#Block1401 */
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
  { /* cicili#Let1462 */
    aTuple tup0  = { 4400, 'A', 33};
    __ciciliS_1464 tup1  = { 4401, 'B', 34};
    __auto_type tup2  = ((struct __ciciliS_1466 ){ 4402, 'C', 35});
    // ----------
    print_tuple (tup0 );
    print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
    ({ /* cicili#Let1474 */
      const __auto_type i  = (tup2 . __h_0_mem );
      const __auto_type c  = (tup2 . __h_1_mem );
      const __auto_type s  = (tup2 . __h_2_mem );
      // ----------
      /* cicili#Block1476 */
      ({ /* cicili#Let1478 */
        bool __h_case_result  = (s  >  10 );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let1483 */
          const __auto_type i  = (tup2 . __h_0_mem );
          const __auto_type c  = (tup2 . __h_1_mem );
          const __auto_type s  = (tup2 . __h_2_mem );
          // ----------
          /* cicili#Block1485 */
          ({ /* cicili#Let1487 */
            bool __h_case_result  = true ;
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s ) : ({ /* cicili#Let1492 */
              // ----------
              /* cicili#Block1494 */
              fprintf (stdout , "No Tuple?!");
            }));
          });
        }));
      });
    });
  }
  { /* cicili#Let1497 */
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
  { /* cicili#Let1509 */
    __auto_type __h_data1508  = Just_aTuple (((aTuple){ 55, 'D', 93}));
    // ----------
    /* cicili#Block1512 */
    ({ /* cicili#Let1514 */
      bool __h_case_result  = ((__h_data1508 . __h_ctor ) ==  __h_Nothing_t  );
      // ----------
      if (__h_case_result )
        fprintf (stdout , "tuple inside maybe: Nothing");
      else
        { /* cicili#Let1522 */
          __auto_type __h_match1520_0_arg  = (((__h_data1508 . __h_data ). Just ). __h_0_mem );
          __auto_type t  = __h_match1520_0_arg ;
          const __auto_type i  = (t . __h_0_mem );
          const __auto_type c  = (t . __h_1_mem );
          const __auto_type s  = (t . __h_2_mem );
          // ----------
          /* cicili#Block1524 */
          ({ /* cicili#Let1526 */
            bool __h_case_result  = ((__h_data1508 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Let1531 */
                const __auto_type ii  = (t . __h_0_mem );
                const __auto_type cc  = (t . __h_1_mem );
                const __auto_type ss  = (t . __h_2_mem );
                // ----------
                /* cicili#Block1533 */
                ({ /* cicili#Let1535 */
                  bool __h_case_result  = true ;
                  // ----------
                  if (__h_case_result )
                    ({ /* cicili#Progn1538 */
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
                      fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", ii , cc , ss );
                    });
                });
              }
          });
        }
    });
  }
  { /* cicili#Let1545 */
    __auto_type __h_data1544  = ((struct __ciciliS_1547 ){ 5060, Just_char ('M')});
    const __auto_type Nothing  = (__h_data1544 . __h_1_mem );
    // ----------
    /* cicili#Block1549 */
    ({ /* cicili#Let1551 */
      bool __h_case_result  = true ;
      // ----------
      if (__h_case_result )
        fprintf (stdout , "maybe inside tuple: Nothing\n");
      else
        { /* cicili#Let1559 */
          const __auto_type i  = (__h_data1544 . __h_0_mem );
          __auto_type __h_match1557_1_arg  = (__h_data1544 . __h_1_mem );
          __auto_type c  = (((__h_match1557_1_arg . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block1561 */
          ({ /* cicili#Let1563 */
            bool __h_case_result  = (((__h_match1557_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  >  'L' ) );
            // ----------
            if (__h_case_result )
              fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
            else
              { /* cicili#Let1571 */
                __auto_type t  = __h_data1544 ;
                __auto_type __h_match1569_1_arg  = (t . __h_1_mem );
                __auto_type c  = (((__h_match1569_1_arg . __h_data ). Just ). __h_0_mem );
                // ----------
                /* cicili#Block1573 */
                ({ /* cicili#Let1575 */
                  bool __h_case_result  = (((__h_match1569_1_arg . __h_ctor ) ==  __h_Just_t  ) &&  (c  <  'L' ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Let1581 */
                      const __auto_type i  = (t . __h_0_mem );
                      __auto_type __h_match1579_1_arg  = (t . __h_1_mem );
                      // ----------
                      /* cicili#Block1583 */
                      ({ /* cicili#Let1585 */
                        bool __h_case_result  = ((__h_match1579_1_arg . __h_ctor ) ==  __h_Just_t  );
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
  ({ /* cicili#Let1590 */
    __auto_type hello  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Hello Haskell\n");
    __auto_type txt  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Haskell List");
    // ----------
    show_String (hello );
    fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let1600 */
      __auto_type __h_data1599  = nth_String (3, txt );
      __auto_type c  = (((__h_data1599 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1602 */
      ({ /* cicili#Let1604 */
        bool __h_case_result  = ((__h_data1599 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let1609 */
          // ----------
          /* cicili#Block1611 */
          fprintf (stdout , "4th element not found\n");
        }));
      });
    }));
    ({ /* cicili#Progn1620 */
      ({ /* cicili#Let1629 */
        __auto_type __h_data1628  = nth_String (4, txt );
        __auto_type c  = (((__h_data1628 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block1634 */
        ({ /* cicili#Let1636 */
          bool __h_case_result  = ((__h_data1628 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let1641 */
            // ----------
            /* cicili#Block1643 */
            fprintf (stdout , "%dth element not found\n", 4);
          }));
        });
      });
      ({ /* cicili#Let1653 */
        __auto_type __h_data1652  = nth_String (5, txt );
        __auto_type c  = (((__h_data1652 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block1658 */
        ({ /* cicili#Let1660 */
          bool __h_case_result  = ((__h_data1652 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let1665 */
            // ----------
            /* cicili#Block1667 */
            fprintf (stdout , "%dth element not found\n", 5);
          }));
        });
      });
      ({ /* cicili#Let1677 */
        __auto_type __h_data1676  = nth_String (6, txt );
        __auto_type c  = (((__h_data1676 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block1682 */
        ({ /* cicili#Let1684 */
          bool __h_case_result  = ((__h_data1676 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let1689 */
            // ----------
            /* cicili#Block1691 */
            fprintf (stdout , "%dth element not found\n", 6);
          }));
        });
      });
      ({ /* cicili#Let1701 */
        __auto_type __h_data1700  = nth_String (len_String (txt ), txt );
        __auto_type c  = (((__h_data1700 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block1706 */
        ({ /* cicili#Let1708 */
          bool __h_case_result  = ((__h_data1700 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", len_String (txt ), c ) : ({ /* cicili#Let1713 */
            // ----------
            /* cicili#Block1715 */
            fprintf (stdout , "%dth element not found\n", len_String (txt ));
          }));
        });
      });
    });
    fprintf (stdout , "output of letin: %d\n", ({ /* cicili#Let1720 */
      __auto_type llen  = len_String (txt );
      // ----------
      ({ /* cicili#Progn1727 */
        ({ /* cicili#Let1736 */
          __auto_type __h_data1735  = nth_String (4, txt );
          __auto_type c  = (((__h_data1735 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block1744 */
          ({ /* cicili#Let1746 */
            bool __h_case_result  = ((__h_data1735 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let1751 */
              // ----------
              /* cicili#Block1753 */
              fprintf (stdout , "%dth element not found\n", 4);
            }));
          });
        });
        ({ /* cicili#Let1763 */
          __auto_type __h_data1762  = nth_String (5, txt );
          __auto_type c  = (((__h_data1762 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block1771 */
          ({ /* cicili#Let1773 */
            bool __h_case_result  = ((__h_data1762 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let1778 */
              // ----------
              /* cicili#Block1780 */
              fprintf (stdout , "%dth element not found\n", 5);
            }));
          });
        });
        ({ /* cicili#Let1790 */
          __auto_type __h_data1789  = nth_String (6, txt );
          __auto_type c  = (((__h_data1789 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block1798 */
          ({ /* cicili#Let1800 */
            bool __h_case_result  = ((__h_data1789 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let1805 */
              // ----------
              /* cicili#Block1807 */
              fprintf (stdout , "%dth element not found\n", 6);
            }));
          });
        });
        ({ /* cicili#Let1817 */
          __auto_type __h_data1816  = nth_String (llen , txt );
          __auto_type c  = (((__h_data1816 . __h_data ). Just ). __h_0_mem );
          // ----------
          /* cicili#Block1825 */
          ({ /* cicili#Let1827 */
            bool __h_case_result  = ((__h_data1816 . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", llen , c ) : ({ /* cicili#Let1832 */
              // ----------
              /* cicili#Block1834 */
              fprintf (stdout , "%dth element not found\n", llen );
            }));
          });
        });
      });
    }));
    { /* cicili#Let1840 */
      __auto_type __h_match1838_0_arg  = (((txt . __h_data ). Just ). __h_0_mem );
      __auto_type str  = __h_match1838_0_arg ;
      __auto_type head  = (((str -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((str -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block1842 */
      ({ /* cicili#Let1844 */
        bool __h_case_result  = (((txt . __h_ctor ) ==  __h_Just_t  ) &&  ((str -> __h_ctor ) ==  __h___t  ) );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , len_String (tail ));
      });
    }
    ({ /* cicili#Let1849 */
      __auto_type str5  __attribute__((__cleanup__(free_String ))) = new_String_Pure (((const char[]){ 'C', 'i', 'c', 'i', 'l', 'i', '\0'}), 7);
      // ----------
      fprintf (stdout , "has 'Cicili' desired length 5: %d\n", has_len_String (str5 , 5));
      fprintf (stdout , "has 'Cicili' desired length 6: %d\n", has_len_String (str5 , 6));
      fprintf (stdout , "has 'Cicili' desired length 7: %d\n", has_len_String (str5 , 7));
    });
    { /* cicili#Let1860 */
      __auto_type __h_data1858  = drop_String (12, txt );
      __auto_type __h_match1857_0_arg  = (((__h_data1858 . __h_data ). Just ). __h_0_mem );
      typeof(has_len_Cons_char (__h_match1857_0_arg , 3)) __h_has_len ;
      typeof((((nth_Cons_char (0, __h_match1857_0_arg ). __h_data ). Just ). __h_0_mem )) fst ;
      typeof((((nth_Cons_char (1, __h_match1857_0_arg ). __h_data ). Just ). __h_0_mem )) snd ;
      typeof((((nth_Cons_char (2, __h_match1857_0_arg ). __h_data ). Just ). __h_0_mem )) trd ;
      typeof(drop_Cons_char (3, __h_match1857_0_arg )) tail ;
      // ----------
      if ((__h_data1858 . __h_ctor ) ==  __h_Just_t  )
        { /* cicili#Block1868 */
          __h_has_len  = has_len_Cons_char (__h_match1857_0_arg , 3);
          fst  = (((nth_Cons_char (0, __h_match1857_0_arg ). __h_data ). Just ). __h_0_mem );
          snd  = (((nth_Cons_char (1, __h_match1857_0_arg ). __h_data ). Just ). __h_0_mem );
          trd  = (((nth_Cons_char (2, __h_match1857_0_arg ). __h_data ). Just ). __h_0_mem );
          tail  = drop_Cons_char (3, __h_match1857_0_arg );
        }
      ({ /* cicili#Let1875 */
        bool __h_case_result  = (((__h_data1858 . __h_ctor ) ==  __h_Just_t  ) &&  (__h_has_len  ==  3 ) );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first, second and third char from String: %c %c %c\n", fst , snd , trd );
        else
          { /* cicili#Let1883 */
            __auto_type __h_match1881_0_arg  = (((__h_data1858 . __h_data ). Just ). __h_0_mem );
            typeof(has_len_Cons_char (__h_match1881_0_arg , 2)) __h_has_len ;
            typeof((((nth_Cons_char (0, __h_match1881_0_arg ). __h_data ). Just ). __h_0_mem )) fst ;
            typeof((((nth_Cons_char (1, __h_match1881_0_arg ). __h_data ). Just ). __h_0_mem )) snd ;
            typeof(drop_Cons_char (2, __h_match1881_0_arg )) tail ;
            // ----------
            if ((__h_data1858 . __h_ctor ) ==  __h_Just_t  )
              { /* cicili#Block1890 */
                __h_has_len  = has_len_Cons_char (__h_match1881_0_arg , 2);
                fst  = (((nth_Cons_char (0, __h_match1881_0_arg ). __h_data ). Just ). __h_0_mem );
                snd  = (((nth_Cons_char (1, __h_match1881_0_arg ). __h_data ). Just ). __h_0_mem );
                tail  = drop_Cons_char (2, __h_match1881_0_arg );
              }
            ({ /* cicili#Let1896 */
              bool __h_case_result  = (((__h_data1858 . __h_ctor ) ==  __h_Just_t  ) &&  (__h_has_len  ==  2 ) );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "first and second char from String: %c %c\n", fst , snd );
              else
                { /* cicili#Let1904 */
                  __auto_type __h_match1902_0_arg  = (((__h_data1858 . __h_data ). Just ). __h_0_mem );
                  typeof(has_len_Cons_char (__h_match1902_0_arg , 1)) __h_has_len ;
                  typeof((((nth_Cons_char (0, __h_match1902_0_arg ). __h_data ). Just ). __h_0_mem )) fst ;
                  typeof(drop_Cons_char (1, __h_match1902_0_arg )) tail ;
                  // ----------
                  if ((__h_data1858 . __h_ctor ) ==  __h_Just_t  )
                    { /* cicili#Block1910 */
                      __h_has_len  = has_len_Cons_char (__h_match1902_0_arg , 1);
                      fst  = (((nth_Cons_char (0, __h_match1902_0_arg ). __h_data ). Just ). __h_0_mem );
                      tail  = drop_Cons_char (1, __h_match1902_0_arg );
                    }
                  ({ /* cicili#Let1915 */
                    bool __h_case_result  = (((__h_data1858 . __h_ctor ) ==  __h_Just_t  ) &&  (__h_has_len  ==  1 ) );
                    // ----------
                    if (__h_case_result )
                      fprintf (stdout , "first char from String: %c\n", fst );
                    else
                      { /* cicili#Let1922 */
                        // ----------
                        /* cicili#Block1924 */
                        fprintf (stdout , "default case String\n");
                      }
                  });
                }
            });
          }
      });
    }
  });
  ({ /* cicili#Let1928 */
    __auto_type ilist0  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
    __auto_type ilist1  __attribute__((__cleanup__(free_List_int ))) = Just_List_int (__h_Cons_int_ctor (5, ilist0 ));
    __auto_type ilist2  __attribute__((__cleanup__(free_List_int ))) = append_List_int (ilist1 , ilist0 );
    __auto_type intarr  = ((const int[]){ 4, 3, 2});
    __auto_type ilist3  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (intarr , 3);
    __auto_type ilist4  __attribute__((__cleanup__(free_List_int ))) = take_List_int (2, ilist2 );
    // ----------
    fprintf (stdout , "first elem of int list0: %d\n", ({ /* cicili#Let1953 */
      __auto_type __h_data1952  = nth_List_int (0, ilist0 );
      __auto_type i  = (((__h_data1952 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1957 */
      ({ /* cicili#Let1959 */
        bool __h_case_result  = ((__h_data1952 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? i  : ({ /* cicili#Let1963 */
          // ----------
          /* cicili#Block1965 */
          -1;
        }));
      });
    }));
    fprintf (stdout , "first elem of int list1: %d\n", ({ /* cicili#Let1971 */
      __auto_type __h_data1970  = nth_List_int (0, ilist1 );
      __auto_type i  = (((__h_data1970 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1975 */
      ({ /* cicili#Let1977 */
        bool __h_case_result  = ((__h_data1970 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? i  : ({ /* cicili#Let1981 */
          // ----------
          /* cicili#Block1983 */
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
  ({ /* cicili#Let1991 */
    __auto_type ra0  __attribute__((__cleanup__(free_Range_int ))) = new_Range_int (1, 20, 3);
    __auto_type ra1  __attribute__((__cleanup__(free_Range_int ))) = take_Range_int (3, ra0 );
    __auto_type ra2  __attribute__((__cleanup__(free_Range_int ))) = take_Range_int (4, ra0 );
    __auto_type ra3  __attribute__((__cleanup__(free_Range_int ))) = take_Range_int (10, ra0 );
    // ----------
    fprintf (stdout , "range 1 20 3:\n");
    show_Range_int (ra0 );
    fprintf (stdout , "\ntake 3  of range 1 20 3:\n");
    show_Range_int (ra1 );
    fprintf (stdout , "\ntake 4  of range 1 20 3:\n");
    show_Range_int (ra2 );
    fprintf (stdout , "\ntake 10 of range 1 20 3:\n");
    show_List_int (((Maybe_List_int)(*((Maybe_List_int *)(&ra3 )))));
  });
}
