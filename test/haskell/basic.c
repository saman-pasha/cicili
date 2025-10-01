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
      const __auto_type __h_match158_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
      const __auto_type ls  = __h_match158_0_arg ;
      const __auto_type tail  = (((ls -> __h_data ). Cons_char ). __h_1_mem );
      // ----------
      if (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((ls -> __h_ctor ) ==  __h_Cons_char_t  ) )
          ({ /* cicili#Progn164 */
            drop_String (tail );
            free (ls );
          });
    }
}
void free_String (Maybe_String * list ) {
    drop_String ((*list ));
}
void show_String (Maybe_String list ) {
    { /* cicili#Let177 */
      const __auto_type __h_match175_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
      const __auto_type head  = (((__h_match175_0_arg -> __h_data ). Cons_char ). __h_0_mem );
      const __auto_type tail  = (((__h_match175_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      // ----------
      if (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match175_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) )
          ({ /* cicili#Progn181 */
            putchar (head );
            show_String (tail );
          });
    }
}
Maybe_char nth_String (Maybe_String list , int index ) {
    return ({ /* cicili#Let191 */
        const __auto_type __h_match189_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        const __auto_type head  = (((__h_match189_0_arg -> __h_data ). Cons_char ). __h_0_mem );
        const __auto_type tail  = (((__h_match189_0_arg -> __h_data ). Cons_char ). __h_1_mem );
        // ----------
        (((((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match189_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) )) ? (((index  ==  0 )) ? Just_char (head ) : nth_String (tail , (--index ))) : ({ /* cicili#Let198 */
          // ----------
          Nothing_char ();
        }));
      });
}
int len_String (Maybe_String list ) {
    return ({ /* cicili#Let208 */
        const __auto_type __h_match206_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        const __auto_type head  = (((__h_match206_0_arg -> __h_data ). Cons_char ). __h_0_mem );
        const __auto_type tail  = (((__h_match206_0_arg -> __h_data ). Cons_char ). __h_1_mem );
        // ----------
        (((((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match206_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) )) ? (1 +  len_String (tail ) ) : ({ /* cicili#Let214 */
          // ----------
          0;
        }));
      });
}
int main () {
    ({ /* cicili#Let221 */
      __auto_type hello  __attribute__((__cleanup__(free_String ))) = new_String ("Hello Haskell\n");
      __auto_type txt  __attribute__((__cleanup__(free_String ))) = new_String ("Haskell List");
      // ----------
      show_String (hello );
      fprintf (stdout , "output of printf match: %d\n", ({ /* cicili#Let227 */
        const __auto_type __h_data226  = nth_String (txt , 3);
        const __auto_type c  = (((__h_data226 . __h_data ). Just_char ). __h_0_mem );
        // ----------
        ((((__h_data226 . __h_ctor ) ==  __h_Just_char_t  )) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let233 */
          // ----------
          fprintf (stdout , "4th element not found\n");
        }));
      }));
      ({ /* cicili#Progn242 */
        ({ /* cicili#Let251 */
          const __auto_type __h_data250  = nth_String (txt , 4);
          const __auto_type c  = (((__h_data250 . __h_data ). Just_char ). __h_0_mem );
          // ----------
          ((((__h_data250 . __h_ctor ) ==  __h_Just_char_t  )) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let260 */
            // ----------
            fprintf (stdout , "%dth element not found\n", 4);
          }));
        });
        ({ /* cicili#Let270 */
          const __auto_type __h_data269  = nth_String (txt , 5);
          const __auto_type c  = (((__h_data269 . __h_data ). Just_char ). __h_0_mem );
          // ----------
          ((((__h_data269 . __h_ctor ) ==  __h_Just_char_t  )) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let279 */
            // ----------
            fprintf (stdout , "%dth element not found\n", 5);
          }));
        });
        ({ /* cicili#Let289 */
          const __auto_type __h_data288  = nth_String (txt , 6);
          const __auto_type c  = (((__h_data288 . __h_data ). Just_char ). __h_0_mem );
          // ----------
          ((((__h_data288 . __h_ctor ) ==  __h_Just_char_t  )) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let298 */
            // ----------
            fprintf (stdout , "%dth element not found\n", 6);
          }));
        });
        ({ /* cicili#Let308 */
          const __auto_type __h_data307  = nth_String (txt , len_String (txt ));
          const __auto_type c  = (((__h_data307 . __h_data ). Just_char ). __h_0_mem );
          // ----------
          ((((__h_data307 . __h_ctor ) ==  __h_Just_char_t  )) ? fprintf (stdout , "the %dth element is: %c\n", len_String (txt ), c ) : ({ /* cicili#Let317 */
            // ----------
            fprintf (stdout , "%dth element not found\n", len_String (txt ));
          }));
        });
      });
      ({ /* cicili#Let321 */
        __auto_type llen  = len_String (txt );
        // ----------
        ({ /* cicili#Progn328 */
          ({ /* cicili#Let337 */
            const __auto_type __h_data336  = nth_String (txt , 4);
            const __auto_type c  = (((__h_data336 . __h_data ). Just_char ). __h_0_mem );
            // ----------
            ((((__h_data336 . __h_ctor ) ==  __h_Just_char_t  )) ? fprintf (stdout , "the %dth element is: %c\n", 4, c ) : ({ /* cicili#Let346 */
              // ----------
              fprintf (stdout , "%dth element not found\n", 4);
            }));
          });
          ({ /* cicili#Let356 */
            const __auto_type __h_data355  = nth_String (txt , 5);
            const __auto_type c  = (((__h_data355 . __h_data ). Just_char ). __h_0_mem );
            // ----------
            ((((__h_data355 . __h_ctor ) ==  __h_Just_char_t  )) ? fprintf (stdout , "the %dth element is: %c\n", 5, c ) : ({ /* cicili#Let365 */
              // ----------
              fprintf (stdout , "%dth element not found\n", 5);
            }));
          });
          ({ /* cicili#Let375 */
            const __auto_type __h_data374  = nth_String (txt , 6);
            const __auto_type c  = (((__h_data374 . __h_data ). Just_char ). __h_0_mem );
            // ----------
            ((((__h_data374 . __h_ctor ) ==  __h_Just_char_t  )) ? fprintf (stdout , "the %dth element is: %c\n", 6, c ) : ({ /* cicili#Let384 */
              // ----------
              fprintf (stdout , "%dth element not found\n", 6);
            }));
          });
          ({ /* cicili#Let394 */
            const __auto_type __h_data393  = nth_String (txt , llen );
            const __auto_type c  = (((__h_data393 . __h_data ). Just_char ). __h_0_mem );
            // ----------
            ((((__h_data393 . __h_ctor ) ==  __h_Just_char_t  )) ? fprintf (stdout , "the %dth element is: %c\n", llen , c ) : ({ /* cicili#Let403 */
              // ----------
              fprintf (stdout , "%dth element not found\n", llen );
            }));
          });
        });
      });
      { /* cicili#Let409 */
        const __auto_type __h_match407_0_arg  = (((txt . __h_data ). Just_String ). __h_0_mem );
        const __auto_type str  = __h_match407_0_arg ;
        const __auto_type head  = (((str -> __h_data ). Cons_char ). __h_0_mem );
        const __auto_type tail  = (((str -> __h_data ). Cons_char ). __h_1_mem );
        // ----------
        if (((txt . __h_ctor ) ==  __h_Just_String_t  ) &&  ((str -> __h_ctor ) ==  __h_Cons_char_t  ) )
            fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , len_String (tail ));
      }
      { /* cicili#Let416 */
        // ----------
        fprintf (stdout , "Nothing String\n");
      }
    });
}
