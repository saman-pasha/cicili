#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../../haskell.h"
typedef struct List_char {
  Maybe __h_ctor ;
  union { /* ciciliUnion105 */
    struct { /* ciciliStruct106 */
    } Nothing ;
    struct { /* ciciliStruct107 */
      char __h_0_mem ;
      struct List_char * __h_1_mem ;
    } Just ;
  } __h_data ;
} List_char;
List_char Nothing_List_char () {
  return ((List_char){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
List_char Just_List_char (char head , List_char * tail ) {
  return ((List_char){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = head , .__h_1_mem = tail }});
}
List_char new_List_char (const char * buf , int len ) {
  if (buf  ==  NULL  )
    return Nothing_List_char ();
  else
    { /* cicili#Let125 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Nothing_List_char ();
      else
        return Just_List_char (item , ({ /* cicili#Let131 */
          List_char * elem  = malloc (sizeof(List_char ));
          // ----------
          (*elem ) = new_List_char ((++buf ), (--len ));
          elem ;
        }));
    }
}
void show_List_char (List_char * list ) {
  { /* cicili#Let140 */
    __auto_type head  = (((list -> __h_data ). Just ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Just ). __h_1_mem );
    // ----------
    /* cicili#Block142 */
    ({ /* cicili#Let144 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Just_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block147 */
          { /* cicili#Let151 */
            // ----------
            /* cicili#Block153 */
            ({ /* cicili#Let155 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Just_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block158 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let163 */
                  // ----------
                  /* cicili#Block165 */
                  printf ("%c", head );
                }
            });
          }
          show_List_char (tail );
        }
    });
  }
}
void reduce_List_char (List_char * list ) {
  { /* cicili#Let175 */
    __auto_type head1  = (((list -> __h_data ). Just ). __h_0_mem );
    __auto_type __h_match172_1_arg  = (((list -> __h_data ). Just ). __h_1_mem );
    __auto_type t  = __h_match172_1_arg ;
    __auto_type head2  = (((t -> __h_data ). Just ). __h_0_mem );
    __auto_type __h_match173_1_arg  = (((t -> __h_data ). Just ). __h_1_mem );
    __auto_type head3  = (((__h_match173_1_arg -> __h_data ). Just ). __h_0_mem );
    __auto_type tail  = (((__h_match173_1_arg -> __h_data ). Just ). __h_1_mem );
    // ----------
    /* cicili#Block177 */
    ({ /* cicili#Let179 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Just_t  ) &&  (((t -> __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match173_1_arg -> __h_ctor ) ==  __h_Just_t  ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block182 */
          printf ("%c%c%c ", head1 , head2 , head3 );
          reduce_List_char (t );
        }
      else
        { /* cicili#Let189 */
          __auto_type head1  = (((list -> __h_data ). Just ). __h_0_mem );
          __auto_type __h_match187_1_arg  = (((list -> __h_data ). Just ). __h_1_mem );
          __auto_type t  = __h_match187_1_arg ;
          __auto_type head2  = (((t -> __h_data ). Just ). __h_0_mem );
          __auto_type tail  = (((t -> __h_data ). Just ). __h_1_mem );
          // ----------
          /* cicili#Block191 */
          ({ /* cicili#Let193 */
            bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Just_t  ) &&  ((t -> __h_ctor ) ==  __h_Just_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block196 */
                printf ("%c%c ", head1 , head2 );
                reduce_List_char (t );
              }
            else
              { /* cicili#Let202 */
                __auto_type head  = (((list -> __h_data ). Just ). __h_0_mem );
                __auto_type tail  = (((list -> __h_data ). Just ). __h_1_mem );
                // ----------
                /* cicili#Block204 */
                ({ /* cicili#Let206 */
                  bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Just_t  );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block209 */
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
void release_List_char (List_char * list ) {
  { /* cicili#Let217 */
    __auto_type tail  = (((list -> __h_data ). Just ). __h_1_mem );
    // ----------
    /* cicili#Block219 */
    ({ /* cicili#Let221 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Just_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let226 */
          // ----------
          /* cicili#Block228 */
          ({ /* cicili#Let230 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block233 */
                release_List_char (tail );
                free (list );
              }
          });
        }
      else
        { /* cicili#Let239 */
          // ----------
          /* cicili#Block241 */
          ({ /* cicili#Let243 */
            bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Nothing_t  );
            // ----------
            if (__h_case_result )
              free (list );
          });
        }
    });
  }
}
void free_List_char (List_char * list ) {
  { /* cicili#Let251 */
    __auto_type tail  = (((list -> __h_data ). Just ). __h_1_mem );
    // ----------
    /* cicili#Block253 */
    ({ /* cicili#Let255 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Just_t  );
      // ----------
      if (__h_case_result )
        release_List_char (tail );
    });
  }
}
int main () {
  ({ /* cicili#Let263 */
    __auto_type chrlst  __attribute__((__cleanup__(free_List_char ))) = new_List_char ("Hello List!", 11);
    // ----------
    show_List_char ((&chrlst ));
    putchar ('\n');
    reduce_List_char ((&chrlst ));
    putchar ('\n');
  });
}
