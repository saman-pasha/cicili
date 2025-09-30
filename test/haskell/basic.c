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
void free_String (Maybe_String   );
void Maybe_String_m_free (Maybe_String * this ) {
    free_String ((*this ));
}
typedef struct String_class_t {
  __h_String_ctor_t __h_ctor ;
  union { /* ciciliUnion136 */
    struct { /* ciciliStruct137 */
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
        { /* cicili#Let151 */
          char item  = (*buf );
          // ----------
          if (item  ==  '\0' )
              return Nothing_String ();
          else
              return Just_String (__h_Cons_char_ctor (item , new_String ((++buf ))));
        }
}
void free_String (Maybe_String list ) {
    { /* cicili#Let167 */
      const __auto_type __h_match165_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
      const __auto_type ls  = __h_match165_0_arg ;
      const __auto_type tail  = (((ls -> __h_data ). Cons_char ). __h_1_mem );
      // ----------
      if (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((ls -> __h_ctor ) ==  __h_Cons_char_t  ) )
          ({ /* cicili#Progn171 */
            free_String (tail );
            free (ls );
          });
    }
}
void show_String (Maybe_String list ) {
    { /* cicili#Let180 */
      const __auto_type __h_match178_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
      const __auto_type head  = (((__h_match178_0_arg -> __h_data ). Cons_char ). __h_0_mem );
      const __auto_type tail  = (((__h_match178_0_arg -> __h_data ). Cons_char ). __h_1_mem );
      // ----------
      if (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match178_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) )
          ({ /* cicili#Progn184 */
            putchar (head );
            show_String (tail );
          });
    }
}
Maybe_char nth_String (Maybe_String list , int index ) {
    return ({ /* cicili#Let194 */
        const __auto_type __h_match192_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        const __auto_type head  = (((__h_match192_0_arg -> __h_data ). Cons_char ). __h_0_mem );
        const __auto_type tail  = (((__h_match192_0_arg -> __h_data ). Cons_char ). __h_1_mem );
        // ----------
        (((((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match192_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) )) ? (((index  ==  0 )) ? Just_char (head ) : nth_String (tail , (--index ))) : ({ /* cicili#Let201 */
          // ----------
          Nothing_char ();
        }));
      });
}
int len_String (Maybe_String list ) {
    return ({ /* cicili#Let211 */
        const __auto_type __h_match209_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        const __auto_type head  = (((__h_match209_0_arg -> __h_data ). Cons_char ). __h_0_mem );
        const __auto_type tail  = (((__h_match209_0_arg -> __h_data ). Cons_char ). __h_1_mem );
        // ----------
        (((((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match209_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) )) ? (1 +  len_String (tail ) ) : ({ /* cicili#Let217 */
          // ----------
          0;
        }));
      });
}
struct __ciciliS_229 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
};
static void __ciciliL_273 (typeof(new_String ("Haskell List")) * txt ) {
    Maybe_String_m_free(txt );
}
int main () {
    { /* cicili#Let227 */
      const __auto_type __h_data225  = ((struct __ciciliS_229 ){ 5060, Just_char ('M')});
      const __auto_type __h_match224_1_arg  = (__h_data225 . __h_1_mem );
      // ----------
      if ((__h_match224_1_arg . __h_ctor ) ==  __h_Nothing_char_t  )
          fprintf (stdout , "maybe inside tuple: Nothing\n");
      else
          { /* cicili#Let238 */
            const __auto_type i  = (__h_data225 . __h_0_mem );
            const __auto_type __h_match236_1_arg  = (__h_data225 . __h_1_mem );
            const __auto_type c  = (((__h_match236_1_arg . __h_data ). Just_char ). __h_0_mem );
            // ----------
            if (((__h_match236_1_arg . __h_ctor ) ==  __h_Just_char_t  ) &&  (c  >  'L' ) )
                fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
            else
                { /* cicili#Let247 */
                  const __auto_type t  = __h_data225 ;
                  const __auto_type __h_match245_1_arg  = (t . __h_1_mem );
                  const __auto_type c  = (((__h_match245_1_arg . __h_data ). Just_char ). __h_0_mem );
                  // ----------
                  if (((__h_match245_1_arg . __h_ctor ) ==  __h_Just_char_t  ) &&  (c  <  'L' ) )
                      { /* cicili#Let254 */
                        const __auto_type i  = (t . __h_0_mem );
                        const __auto_type __h_match252_1_arg  = (t . __h_1_mem );
                        // ----------
                        if ((__h_match252_1_arg . __h_ctor ) ==  __h_Just_char_t  )
                            fprintf (stdout , "maybe inside tuple: (c < L) int, Just char: = (%d, %c)\n", i , c );
                      }
                }
          }
    }
    show_String (new_String ("Haskell List\n"));
    ({ /* cicili#Let262 */
      const __auto_type __h_data261  = nth_String (new_String ("Haskell List"), 3);
      const __auto_type c  = (((__h_data261 . __h_data ). Just_char ). __h_0_mem );
      // ----------
      ((((__h_data261 . __h_ctor ) ==  __h_Just_char_t  )) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let268 */
        // ----------
        fprintf (stdout , "4th element not found\n");
      }));
    });
    ({ /* cicili#Let272 */
      __auto_type txt  __attribute__((__cleanup__(__ciciliL_273 ))) = new_String ("Haskell List");
      // ----------
      { /* cicili#Let279 */
        const __auto_type __h_match277_0_arg  = (((txt . __h_data ). Just_String ). __h_0_mem );
        const __auto_type str  = __h_match277_0_arg ;
        const __auto_type head  = (((str -> __h_data ). Cons_char ). __h_0_mem );
        const __auto_type tail  = (((str -> __h_data ). Cons_char ). __h_1_mem );
        // ----------
        if (((txt . __h_ctor ) ==  __h_Just_String_t  ) &&  ((str -> __h_ctor ) ==  __h_Cons_char_t  ) )
            fprintf (stdout , "first char is: %c, and length of tail is: %d\n", head , len_String (tail ));
      }
    });
    ({ /* cicili#Let287 */
      const __auto_type __h_data286  = new_String ("Haskell List");
      // ----------
      fprintf (stdout , "Nothing String\n");
    });
}
