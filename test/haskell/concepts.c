#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../../haskell.h"
void reduce_List_char (List_char list ) {
  { /* cicili#Let110 */
    __auto_type head1  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type __h_match107_1_arg  = (((list -> __h_data ). Cons ). __h_1_mem );
    __auto_type t  = __h_match107_1_arg ;
    __auto_type head2  = (((t -> __h_data ). Cons ). __h_0_mem );
    __auto_type __h_match108_1_arg  = (((t -> __h_data ). Cons ). __h_1_mem );
    __auto_type head3  = (((__h_match108_1_arg -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((__h_match108_1_arg -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block112 */
    ({ /* cicili#Let114 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (((t -> __h_ctor ) ==  __h_Cons_t  ) &&  ((__h_match108_1_arg -> __h_ctor ) ==  __h_Cons_t  ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block117 */
          printf ("%c%c%c ", head1 , head2 , head3 );
          reduce_List_char (t );
        }
      else
        { /* cicili#Let124 */
          __auto_type head1  = (((list -> __h_data ). Cons ). __h_0_mem );
          __auto_type __h_match122_1_arg  = (((list -> __h_data ). Cons ). __h_1_mem );
          __auto_type t  = __h_match122_1_arg ;
          __auto_type head2  = (((t -> __h_data ). Cons ). __h_0_mem );
          __auto_type tail  = (((t -> __h_data ). Cons ). __h_1_mem );
          // ----------
          /* cicili#Block126 */
          ({ /* cicili#Let128 */
            bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((t -> __h_ctor ) ==  __h_Cons_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block131 */
                printf ("%c%c ", head1 , head2 );
                reduce_List_char (t );
              }
            else
              { /* cicili#Let137 */
                __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
                __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
                // ----------
                /* cicili#Block139 */
                ({ /* cicili#Let141 */
                  bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block144 */
                      printf ("%c ", head );
                      reduce_List_char (tail );
                    }
                });
              }
          });
        }
    });
  }
}
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Right_t = 0,
  __h_Left_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_String_int Either_String_int ;
typedef void (*free_Either_String_int_t) (Either_String_int * this );
typedef struct Either_String_int {
  free_Either_String_int_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion167 */
    struct { /* ciciliStruct168 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct169 */
      int __h_0_mem ;
    } Right , _ ;
  } __h_data ;
} Either_String_int;
Either_String_int Left_String_int (String error );
Either_String_int Right_String_int (int value );
void free_Either_String_int (Either_String_int * this );
void free_Either_String_int (Either_String_int * this ) {
}
Either_String_int Left_String_int (String error ) {
  return ((Either_String_int){ free_Either_String_int , __h_Left_t , .__h_data.Left = { error }});
}
Either_String_int Right_String_int (int value ) {
  return ((Either_String_int){ free_Either_String_int , __h___t , .__h_data._ = { value }});
}
Either_String_int divideByZero (int x , int y ) {
  if (y  ==  0 )
    return Left_String_int (new_String_Const ("zero division"));
  else
    return Right_String_int ((x  /  y  ));
}
int main () {
  ({ /* cicili#Let201 */
    __auto_type rc0  __attribute__((__cleanup__(__h_free_class_router ))) = new_Rc_List_int_Pure (({ /* cicili#Let204 */
      __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    }));
    // ----------
    ({ /* cicili#Let210 */
      __auto_type rc1  __attribute__((__cleanup__(free_Rc_List_int ))) = clone_Rc_List_int (rc0 );
      // ----------
      fprintf (stdout , "list0:\n");
      { /* cicili#Let216 */
        __auto_type __h_data215  = deref_Rc_List_int (rc0 );
        __auto_type list0  = (((__h_data215 . __h_data ). _ ). __h_0_mem );
        // ----------
        /* cicili#Block218 */
        ({ /* cicili#Let220 */
          bool __h_case_result  = ((__h_data215 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            show_List_int (list0 );
        });
      }
      putchar ('\n');
      fprintf (stdout , "list1:\n");
      { /* cicili#Let227 */
        __auto_type __h_data226  = deref_Rc_List_int (rc1 );
        __auto_type list1  = (((__h_data226 . __h_data ). _ ). __h_0_mem );
        // ----------
        /* cicili#Block229 */
        ({ /* cicili#Let231 */
          bool __h_case_result  = ((__h_data226 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            show_List_int (list1 );
        });
      }
      putchar ('\n');
    });
  });
  { /* cicili#Let237 */
    __auto_type __h_data236  = divideByZero (34, 0);
    __auto_type e  = (((__h_data236 . __h_data ). Left ). __h_0_mem );
    // ----------
    /* cicili#Block239 */
    ({ /* cicili#Let241 */
      bool __h_case_result  = ((__h_data236 . __h_ctor ) ==  __h_Left_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn244 */
          printf ("error raised: ");
          show_String (e );
          putchar ('\n');
          free_String ((&e ));
        });
      else
        { /* cicili#Let249 */
          __auto_type a  = (((__h_data236 . __h_data ). Right ). __h_0_mem );
          // ----------
          /* cicili#Block251 */
          ({ /* cicili#Let253 */
            bool __h_case_result  = ((__h_data236 . __h_ctor ) ==  __h_Right_t  );
            // ----------
            if (__h_case_result )
              printf ("division result: %d\n", a );
          });
        }
    });
  }
  { /* cicili#Let259 */
    __auto_type __h_data258  = divideByZero (34, 2);
    __auto_type e  = (((__h_data258 . __h_data ). Left ). __h_0_mem );
    // ----------
    /* cicili#Block261 */
    ({ /* cicili#Let263 */
      bool __h_case_result  = ((__h_data258 . __h_ctor ) ==  __h_Left_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn266 */
          printf ("error raised: ");
          show_String (e );
          putchar ('\n');
          free_String ((&e ));
        });
      else
        { /* cicili#Let271 */
          __auto_type a  = (((__h_data258 . __h_data ). Right ). __h_0_mem );
          // ----------
          /* cicili#Block273 */
          ({ /* cicili#Let275 */
            bool __h_case_result  = ((__h_data258 . __h_ctor ) ==  __h_Right_t  );
            // ----------
            if (__h_case_result )
              printf ("division result: %d\n", a );
          });
        }
    });
  }
}
