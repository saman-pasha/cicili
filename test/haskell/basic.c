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
typedef enum __h_Maybe_String_ctor_t {
  __h_Nothing_String_t,
  __h_Just_String_t
} __h_Maybe_String_ctor_t;
typedef struct Maybe_String {
  __h_Maybe_String_ctor_t __h_ctor ;
  union { /* ciciliUnion121 */
    struct { /* ciciliStruct122 */
    } Nothing_String ;
    struct { /* ciciliStruct123 */
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
  union { /* ciciliUnion126 */
    struct { /* ciciliStruct127 */
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
        { /* cicili#Let140 */
            char item  = (*buf );
            // ----------
            if (item  ==  '\0' )
                return Nothing_String ();
            else
                return Just_String (__h_Cons_char_ctor (item , new_String ((++buf ))));

        }

}
void show_String (Maybe_String list ) {
    { /* cicili#Let155 */
        const __auto_type __h_match153_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
        const __auto_type head  = (((__h_match153_0_arg -> __h_data ). Cons_char ). __h_0_mem );
        const __auto_type tail  = (((__h_match153_0_arg -> __h_data ). Cons_char ). __h_1_mem );
        // ----------
        if (((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match153_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) )
            ({ /* cicili#Progn159 */
                  putchar (head );
                  show_String (tail );
              });

    }
}
Maybe_char nth_String (Maybe_String list , int index ) {
    return ({ /* cicili#Let168 */
          const __auto_type __h_match166_0_arg  = (((list . __h_data ). Just_String ). __h_0_mem );
          const __auto_type head  = (((__h_match166_0_arg -> __h_data ). Cons_char ). __h_0_mem );
          const __auto_type tail  = (((__h_match166_0_arg -> __h_data ). Cons_char ). __h_1_mem );
          // ----------
          (((((list . __h_ctor ) ==  __h_Just_String_t  ) &&  ((__h_match166_0_arg -> __h_ctor ) ==  __h_Cons_char_t  ) )) ? (((index  ==  0 )) ? Just_char (head ) : nth_String (tail , (--index ))) : ({ /* cicili#Let175 */
              // ----------
              Nothing_char ();
          }));
      });
}
struct __ciciliS_188 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
};
int main () {
    { /* cicili#Let186 */
        const __auto_type __h_data184  = ((struct __ciciliS_188 ){ 5060, Just_char ('M')});
        const __auto_type __h_match183_1_arg  = (__h_data184 . __h_1_mem );
        // ----------
        if ((__h_match183_1_arg . __h_ctor ) ==  __h_Nothing_char_t  )
            fprintf (stdout , "maybe inside tuple: Nothing\n");
        else
            { /* cicili#Let197 */
                const __auto_type i  = (__h_data184 . __h_0_mem );
                const __auto_type __h_match195_1_arg  = (__h_data184 . __h_1_mem );
                const __auto_type c  = (((__h_match195_1_arg . __h_data ). Just_char ). __h_0_mem );
                // ----------
                if (((__h_match195_1_arg . __h_ctor ) ==  __h_Just_char_t  ) &&  (c  >  'L' ) )
                    fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
                else
                    { /* cicili#Let206 */
                        const __auto_type t  = __h_data184 ;
                        const __auto_type __h_match204_1_arg  = (t . __h_1_mem );
                        const __auto_type c  = (((__h_match204_1_arg . __h_data ). Just_char ). __h_0_mem );
                        // ----------
                        if (((__h_match204_1_arg . __h_ctor ) ==  __h_Just_char_t  ) &&  (c  <  'L' ) )
                            { /* cicili#Let213 */
                                const __auto_type i  = (t . __h_0_mem );
                                const __auto_type __h_match211_1_arg  = (t . __h_1_mem );
                                // ----------
                                if ((__h_match211_1_arg . __h_ctor ) ==  __h_Just_char_t  )
                                    fprintf (stdout , "maybe inside tuple: (c < L) int, Just char: = (%d, %c)\n", i , c );

                            }

                    }

            }

    }
    show_String (new_String ("Haskell List\n"));
    ({ /* cicili#Let221 */
        const __auto_type __h_data220  = nth_String (new_String ("Haskell List\n"), 3);
        const __auto_type c  = (((__h_data220 . __h_data ). Just_char ). __h_0_mem );
        // ----------
        ((((__h_data220 . __h_ctor ) ==  __h_Just_char_t  )) ? fprintf (stdout , "the 4th element is: %c\n", c ) : ({ /* cicili#Let227 */
            // ----------
            fprintf (stdout , "4th element not found\n");
        }));
    });
    { /* cicili#Let234 */
        const __auto_type __h_data232  = new_String ("Haskell List\n");
        const __auto_type __h_match231_0_arg  = (((__h_data232 . __h_data ). Just_String ). __h_0_mem );
        const __auto_type str  = __h_match231_0_arg ;
        const __auto_type head  = (((str -> __h_data ). Cons_char ). __h_0_mem );
        const __auto_type tail  = (((str -> __h_data ). Cons_char ). __h_1_mem );
        // ----------
        if (((__h_data232 . __h_ctor ) ==  __h_Just_String_t  ) &&  ((str -> __h_ctor ) ==  __h_Cons_char_t  ) )
            fprintf (stdout , "a char: %c\n", head );

    }
    ({ /* cicili#Let242 */
        const __auto_type __h_data241  = new_String ("Haskell List\n");
        // ----------
        fprintf (stdout , "Nothing String\n");
    });
}
