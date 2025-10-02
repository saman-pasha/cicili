#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "math.h"
#ifndef _H_Maybe_char
#define _H_Maybe_char
typedef enum __h_Maybe_char_ctor_t {
  __h_Nothing_char_t,
  __h_Just_char_t
} __h_Maybe_char_ctor_t;
typedef struct Maybe_char {
  __h_Maybe_char_ctor_t __h_ctor ;
  union { /* ciciliUnion108 */
    struct { /* ciciliStruct109 */
    } Nothing_char ;
    struct { /* ciciliStruct110 */
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
  union { /* ciciliUnion123 */
    struct { /* ciciliStruct124 */
    } Nothing_String ;
    struct { /* ciciliStruct125 */
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
  union { /* ciciliUnion129 */
    struct { /* ciciliStruct130 */
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
    { /* cicili#Let144 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Nothing_String ();
      else
        return Just_String (__h_Cons_char_ctor (item , new_String ((++buf ))));
    }
}
void drop_String (Maybe_String list ) {
  { /* cicili#Let160 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match158_0_arg ;
    __auto_type ls  = __h_match158_0_arg ;
    typeof((((ls -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block163 */
        __h_match158_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        tail  = (((ls -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let166 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((ls -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn169 */
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
  { /* cicili#Let182 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match180_0_arg ;
    typeof((((__h_match180_0_arg -> __h_data ). Cons_char ). __h_0_mem )) head ;
    typeof((((__h_match180_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block185 */
        __h_match180_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        head  = (((__h_match180_0_arg -> __h_data ). Cons_char ). __h_0_mem );
        tail  = (((__h_match180_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let188 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match180_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn191 */
          putchar (head );
          show_String (tail );
        });
    });
  }
}
Maybe_char nth_String (Maybe_String list , int index ) {
  return ({ /* cicili#Let201 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match199_0_arg ;
    typeof((((__h_match199_0_arg -> __h_data ). Cons_char ). __h_0_mem )) head ;
    typeof((((__h_match199_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block204 */
        __h_match199_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        head  = (((__h_match199_0_arg -> __h_data ). Cons_char ). __h_0_mem );
        tail  = (((__h_match199_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let207 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match199_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_String (tail , (--index ))) : ({ /* cicili#Let213 */
        // ----------
        /* cicili#Block215 */
        Nothing_char ();
      }));
    });
  });
}
Maybe_String nthcdr_String (Maybe_String list , int index ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let230 */
      typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match228_0_arg ;
      typeof((((__h_match228_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
      // ----------
      if ((list . __h_ctor ) ==  __h_Just_String_t  )
        { /* cicili#Block233 */
          __h_match228_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
          tail  = (((__h_match228_0_arg -> __h_data ). Cons_char ). __h_1_mem );
        }
      ({ /* cicili#Let236 */
        bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match228_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
        // ----------
        ((__h_case_result ) ? nthcdr_String (tail , (--index )) : ({ /* cicili#Let241 */
          // ----------
          /* cicili#Block243 */
          Nothing_String ();
        }));
      });
    }));
}
int len_String (Maybe_String list ) {
  return ({ /* cicili#Let256 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match254_0_arg ;
    typeof((((__h_match254_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block259 */
        __h_match254_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        tail  = (((__h_match254_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let262 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match254_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      ((__h_case_result ) ? (1 +  len_String (tail ) ) : ({ /* cicili#Let267 */
        // ----------
        /* cicili#Block269 */
        0;
      }));
    });
  });
}
int has_len_String (Maybe_String list , int desired ) {
  return ({ /* cicili#Let281 */
    typeof((((list . __h_data ). Just_String ). __h_0_mem )) __h_match279_0_arg ;
    typeof((((__h_match279_0_arg -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_String_t  )
      { /* cicili#Block284 */
        __h_match279_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        tail  = (((__h_match279_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let287 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match279_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_String (tail , (--desired )) )) : ({ /* cicili#Let292 */
        // ----------
        /* cicili#Block294 */
        0;
      }));
    });
  });
}
Maybe_char nth_Cons_char (String cons , int index ) {
  return ({ /* cicili#Let306 */
    typeof((((cons -> __h_data ). Cons_char ). __h_0_mem )) head ;
    typeof((((cons -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((cons -> __h_ctor ) ==  __h_Cons_char_t  )
      { /* cicili#Block309 */
        head  = (((cons -> __h_data ). Cons_char ). __h_0_mem );
        tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let312 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_String (tail , (--index ))) : ({ /* cicili#Let318 */
        // ----------
        /* cicili#Block320 */
        Nothing_char ();
      }));
    });
  });
}
Maybe_String nthcdr_Cons_char (String cons , int index ) {
  return (((index  ==  0 )) ? Just_String (cons ) : ({ /* cicili#Let334 */
      typeof((((cons -> __h_data ). Cons_char ). __h_1_mem )) tail ;
      // ----------
      if ((cons -> __h_ctor ) ==  __h_Cons_char_t  )
        { /* cicili#Block337 */
          tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
        }
      ({ /* cicili#Let340 */
        bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
        // ----------
        ((__h_case_result ) ? nthcdr_String (tail , (--index )) : ({ /* cicili#Let345 */
          // ----------
          /* cicili#Block347 */
          Nothing_String ();
        }));
      });
    }));
}
int len_Cons_char (String cons ) {
  return ({ /* cicili#Let358 */
    typeof((((cons -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((cons -> __h_ctor ) ==  __h_Cons_char_t  )
      { /* cicili#Block361 */
        tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let364 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_String (tail ) ) : ({ /* cicili#Let369 */
        // ----------
        /* cicili#Block371 */
        0;
      }));
    });
  });
}
int has_len_Cons_char (String cons , int desired ) {
  return ({ /* cicili#Let381 */
    typeof((((cons -> __h_data ). Cons_char ). __h_1_mem )) tail ;
    // ----------
    if ((cons -> __h_ctor ) ==  __h_Cons_char_t  )
      { /* cicili#Block384 */
        tail  = (((cons -> __h_data ). Cons_char ). __h_1_mem );
      }
    ({ /* cicili#Let387 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_char_t  );
      // ----------
      ((__h_case_result ) ? (1 +  has_len_String (tail , (--desired )) ) : ({ /* cicili#Let392 */
        // ----------
        /* cicili#Block394 */
        0;
      }));
    });
  });
}
int main () {
  ({ /* cicili#Let403 */
    __auto_type hello  __attribute__((__cleanup__(free_String ))) = new_String ("Hello Haskell\n");
    __auto_type txt  __attribute__((__cleanup__(free_String ))) = new_String ("Haskell List");
    // ----------
    show_String (hello );
    fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let409 */
      __auto_type __h_data408  = nth_String (txt , 3);
      typeof((((__h_data408 . __h_data ). Just_char ). __h_0_mem )) c ;
      // ----------
      if ((__h_data408 . __h_ctor ) ==  __h_Just_char_t  )
        { /* cicili#Block412 */
          c  = (((__h_data408 . __h_data ). Just_char ). __h_0_mem );
        }
      ({ /* cicili#Let415 */
        bool __h_case_result  = ((__h_data408 . __h_ctor ) ==  __h_Just_char_t  );
        // ----------
        ((__h_case_result ) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let420 */
          // ----------
          /* cicili#Block422 */
          fprintf (stdout , "4th element not found\n");
        }));
      });
    }));
    ({ /* cicili#Progn434 */
      ({ /* cicili#Let443 */
        __auto_type __h_data442  = nth_String (txt , 4);
        typeof((((__h_data442 . __h_data ). Just_char ). __h_0_mem )) c ;
        // ----------
        if ((__h_data442 . __h_ctor ) ==  __h_Just_char_t  )
          { /* cicili#Block449 */
            c  = (((__h_data442 . __h_data ). Just_char ). __h_0_mem );
          }
        ({ /* cicili#Let452 */
          bool __h_case_result  = ((__h_data442 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let457 */
            // ----------
            /* cicili#Block459 */
            fprintf (stdout , "%dth element not found\n", 4);
          }));
        });
      });
      ({ /* cicili#Let472 */
        __auto_type __h_data471  = nth_String (txt , 5);
        typeof((((__h_data471 . __h_data ). Just_char ). __h_0_mem )) c ;
        // ----------
        if ((__h_data471 . __h_ctor ) ==  __h_Just_char_t  )
          { /* cicili#Block478 */
            c  = (((__h_data471 . __h_data ). Just_char ). __h_0_mem );
          }
        ({ /* cicili#Let481 */
          bool __h_case_result  = ((__h_data471 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let486 */
            // ----------
            /* cicili#Block488 */
            fprintf (stdout , "%dth element not found\n", 5);
          }));
        });
      });
      ({ /* cicili#Let501 */
        __auto_type __h_data500  = nth_String (txt , 6);
        typeof((((__h_data500 . __h_data ). Just_char ). __h_0_mem )) c ;
        // ----------
        if ((__h_data500 . __h_ctor ) ==  __h_Just_char_t  )
          { /* cicili#Block507 */
            c  = (((__h_data500 . __h_data ). Just_char ). __h_0_mem );
          }
        ({ /* cicili#Let510 */
          bool __h_case_result  = ((__h_data500 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let515 */
            // ----------
            /* cicili#Block517 */
            fprintf (stdout , "%dth element not found\n", 6);
          }));
        });
      });
      ({ /* cicili#Let530 */
        __auto_type __h_data529  = nth_String (txt , len_String (txt ));
        typeof((((__h_data529 . __h_data ). Just_char ). __h_0_mem )) c ;
        // ----------
        if ((__h_data529 . __h_ctor ) ==  __h_Just_char_t  )
          { /* cicili#Block536 */
            c  = (((__h_data529 . __h_data ). Just_char ). __h_0_mem );
          }
        ({ /* cicili#Let539 */
          bool __h_case_result  = ((__h_data529 . __h_ctor ) ==  __h_Just_char_t  );
          // ----------
          ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", len_String (txt ), c ) : ({ /* cicili#Let544 */
            // ----------
            /* cicili#Block546 */
            fprintf (stdout , "%dth element not found\n", len_String (txt ));
          }));
        });
      });
    });
    fprintf (stdout , "output of letin: %d\n", ({ /* cicili#Let554 */
      __auto_type llen  = len_String (txt );
      // ----------
      ({ /* cicili#Progn561 */
        ({ /* cicili#Let570 */
          __auto_type __h_data569  = nth_String (txt , 4);
          typeof((((__h_data569 . __h_data ). Just_char ). __h_0_mem )) c ;
          // ----------
          if ((__h_data569 . __h_ctor ) ==  __h_Just_char_t  )
            { /* cicili#Block576 */
              c  = (((__h_data569 . __h_data ). Just_char ). __h_0_mem );
            }
          ({ /* cicili#Let579 */
            bool __h_case_result  = ((__h_data569 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let584 */
              // ----------
              /* cicili#Block586 */
              fprintf (stdout , "%dth element not found\n", 4);
            }));
          });
        });
        ({ /* cicili#Let599 */
          __auto_type __h_data598  = nth_String (txt , 5);
          typeof((((__h_data598 . __h_data ). Just_char ). __h_0_mem )) c ;
          // ----------
          if ((__h_data598 . __h_ctor ) ==  __h_Just_char_t  )
            { /* cicili#Block605 */
              c  = (((__h_data598 . __h_data ). Just_char ). __h_0_mem );
            }
          ({ /* cicili#Let608 */
            bool __h_case_result  = ((__h_data598 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let613 */
              // ----------
              /* cicili#Block615 */
              fprintf (stdout , "%dth element not found\n", 5);
            }));
          });
        });
        ({ /* cicili#Let628 */
          __auto_type __h_data627  = nth_String (txt , 6);
          typeof((((__h_data627 . __h_data ). Just_char ). __h_0_mem )) c ;
          // ----------
          if ((__h_data627 . __h_ctor ) ==  __h_Just_char_t  )
            { /* cicili#Block634 */
              c  = (((__h_data627 . __h_data ). Just_char ). __h_0_mem );
            }
          ({ /* cicili#Let637 */
            bool __h_case_result  = ((__h_data627 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let642 */
              // ----------
              /* cicili#Block644 */
              fprintf (stdout , "%dth element not found\n", 6);
            }));
          });
        });
        ({ /* cicili#Let657 */
          __auto_type __h_data656  = nth_String (txt , llen );
          typeof((((__h_data656 . __h_data ). Just_char ). __h_0_mem )) c ;
          // ----------
          if ((__h_data656 . __h_ctor ) ==  __h_Just_char_t  )
            { /* cicili#Block663 */
              c  = (((__h_data656 . __h_data ). Just_char ). __h_0_mem );
            }
          ({ /* cicili#Let666 */
            bool __h_case_result  = ((__h_data656 . __h_ctor ) ==  __h_Just_char_t  );
            // ----------
            ((__h_case_result ) ? fprintf (stdout , "the %dth element is: %c\n", llen , c ) : ({ /* cicili#Let671 */
              // ----------
              /* cicili#Block673 */
              fprintf (stdout , "%dth element not found\n", llen );
            }));
          });
        });
      });
    }));
    { /* cicili#Let682 */
      typeof((((txt . __h_data ). Just_String ). __h_0_mem )) __h_match680_0_arg ;
      __auto_type str  = __h_match680_0_arg ;
      typeof((((str -> __h_data ). Cons_char ). __h_0_mem )) head ;
      typeof((((str -> __h_data ). Cons_char ). __h_1_mem )) tail ;
      // ----------
      if ((txt . __h_ctor ) ==  __h_Just_String_t  )
        { /* cicili#Block685 */
          __h_match680_0_arg  = (((txt . __h_data ). Just_String ). __h_0_mem );
          head  = (((str -> __h_data ). Cons_char ). __h_0_mem );
          tail  = (((str -> __h_data ). Cons_char ). __h_1_mem );
        }
      ({ /* cicili#Let688 */
        bool __h_case_result  = (((txt . __h_ctor ) ==  __h_Just_String_t  ) &&  ((str -> __h_ctor ) ==  __h_Cons_char_t  ) );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , len_String (tail ));
      });
    }
    ({ /* cicili#Let693 */
      __auto_type str5  __attribute__((__cleanup__(free_String ))) = new_String ("Cicili");
      // ----------
      fprintf (stdout , "has 'Cicili' desired length 5: %d\n", has_len_String (str5 , 5));
      fprintf (stdout , "has 'Cicili' desired length 6: %d\n", has_len_String (str5 , 6));
      fprintf (stdout , "has 'Cicili' desired length 7: %d\n", has_len_String (str5 , 7));
    });
    { /* cicili#Let702 */
      __auto_type __h_data700  = nthcdr_String (txt , 12);
      typeof((((__h_data700 . __h_data ). Just_String ). __h_0_mem )) __h_match699_0_arg ;
      typeof(has_len_Cons_char (__h_match699_0_arg , 3)) __h_has_len ;
      typeof((((nth_Cons_char (__h_match699_0_arg , 0). __h_data ). Just_char ). __h_0_mem )) fst ;
      typeof((((nth_Cons_char (__h_match699_0_arg , 1). __h_data ). Just_char ). __h_0_mem )) snd ;
      typeof((((nth_Cons_char (__h_match699_0_arg , 2). __h_data ). Just_char ). __h_0_mem )) trd ;
      typeof(nthcdr_Cons_char (__h_match699_0_arg , 3)) tail ;
      // ----------
      if ((__h_data700 . __h_ctor ) ==  __h_Just_String_t  )
        { /* cicili#Block713 */
          __h_match699_0_arg  = (((__h_data700 . __h_data ). Just_String ). __h_0_mem );
          __h_has_len  = has_len_Cons_char (__h_match699_0_arg , 3);
          fst  = (((nth_Cons_char (__h_match699_0_arg , 0). __h_data ). Just_char ). __h_0_mem );
          snd  = (((nth_Cons_char (__h_match699_0_arg , 1). __h_data ). Just_char ). __h_0_mem );
          trd  = (((nth_Cons_char (__h_match699_0_arg , 2). __h_data ). Just_char ). __h_0_mem );
          tail  = nthcdr_Cons_char (__h_match699_0_arg , 3);
        }
      ({ /* cicili#Let724 */
        bool __h_case_result  = (((__h_data700 . __h_ctor ) ==  __h_Just_String_t  ) &&  (__h_has_len  ==  3 ) );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "first, second and third char from String: %c %c %c\n", fst , snd , trd );
        else
          { /* cicili#Let732 */
            typeof((((__h_data700 . __h_data ). Just_String ). __h_0_mem )) __h_match730_0_arg ;
            typeof(has_len_Cons_char (__h_match730_0_arg , 2)) __h_has_len ;
            typeof((((nth_Cons_char (__h_match730_0_arg , 0). __h_data ). Just_char ). __h_0_mem )) fst ;
            typeof((((nth_Cons_char (__h_match730_0_arg , 1). __h_data ). Just_char ). __h_0_mem )) snd ;
            typeof(nthcdr_Cons_char (__h_match730_0_arg , 2)) tail ;
            // ----------
            if ((__h_data700 . __h_ctor ) ==  __h_Just_String_t  )
              { /* cicili#Block741 */
                __h_match730_0_arg  = (((__h_data700 . __h_data ). Just_String ). __h_0_mem );
                __h_has_len  = has_len_Cons_char (__h_match730_0_arg , 2);
                fst  = (((nth_Cons_char (__h_match730_0_arg , 0). __h_data ). Just_char ). __h_0_mem );
                snd  = (((nth_Cons_char (__h_match730_0_arg , 1). __h_data ). Just_char ). __h_0_mem );
                tail  = nthcdr_Cons_char (__h_match730_0_arg , 2);
              }
            ({ /* cicili#Let753 */
              bool __h_case_result  = (((__h_data700 . __h_ctor ) ==  __h_Just_String_t  ) &&  (__h_has_len  ==  2 ) );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "first and second char from String: %c %c\n", fst , snd );
              else
                { /* cicili#Let761 */
                  typeof((((__h_data700 . __h_data ). Just_String ). __h_0_mem )) __h_match759_0_arg ;
                  typeof(has_len_Cons_char (__h_match759_0_arg , 1)) __h_has_len ;
                  typeof((((nth_Cons_char (__h_match759_0_arg , 0). __h_data ). Just_char ). __h_0_mem )) fst ;
                  typeof(nthcdr_Cons_char (__h_match759_0_arg , 1)) tail ;
                  // ----------
                  if ((__h_data700 . __h_ctor ) ==  __h_Just_String_t  )
                    { /* cicili#Block768 */
                      __h_match759_0_arg  = (((__h_data700 . __h_data ). Just_String ). __h_0_mem );
                      __h_has_len  = has_len_Cons_char (__h_match759_0_arg , 1);
                      fst  = (((nth_Cons_char (__h_match759_0_arg , 0). __h_data ). Just_char ). __h_0_mem );
                      tail  = nthcdr_Cons_char (__h_match759_0_arg , 1);
                    }
                  ({ /* cicili#Let778 */
                    bool __h_case_result  = (((__h_data700 . __h_ctor ) ==  __h_Just_String_t  ) &&  (__h_has_len  ==  1 ) );
                    // ----------
                    if (__h_case_result )
                      fprintf (stdout , "first char from String: %c\n", fst );
                    else
                      { /* cicili#Let785 */
                        // ----------
                        /* cicili#Block787 */
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
