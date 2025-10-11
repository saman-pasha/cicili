#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../../haskell.h"
void reduce_List_char (List_char * list ) {
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
void List_char_m_show (List_char * this ) {
  show_List_char (this );
}
int main () {
  ({ /* cicili#Let154 */
    __auto_type chrlst  __attribute__((__cleanup__(free_List_char ))) = new_List_char_Pure ("Hello List!", 11);
    __auto_type m0  = nth_List_char (3, chrlst );
    __auto_type m1  = nth_List_char (15, chrlst );
    // ----------
    show_String (chrlst );
    putchar ('\n');
    List_char_m_show(chrlst );
    putchar ('\n');
    reduce_List_char (chrlst );
    putchar ('\n');
    { /* cicili#Let160 */
      __auto_type ch  = (((m0 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block162 */
      ({ /* cicili#Let164 */
        bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "4th element is: %c\n", ch );
        else
          { /* cicili#Let171 */
            // ----------
            /* cicili#Block173 */
            ({ /* cicili#Let175 */
              bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "16th element is: Nothing\n");
            });
          }
      });
    }
    { /* cicili#Let181 */
      __auto_type ch  = (((m1 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block183 */
      ({ /* cicili#Let185 */
        bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "16th element is: %c\n", ch );
        else
          { /* cicili#Let192 */
            // ----------
            /* cicili#Block194 */
            ({ /* cicili#Let196 */
              bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "16th element is: Nothing\n");
            });
          }
      });
    }
  });
  fprintf (stdout , "Sum of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let204 */
    __auto_type __h_data203  = get_Monoid_Sum_int ();
    __auto_type mempty  = (((__h_data203 . __h_data ). _ ). __h_0_mem );
    __auto_type mappend  = (((__h_data203 . __h_data ). _ ). __h_1_mem );
    __auto_type mconcat  = (((__h_data203 . __h_data ). _ ). __h_2_mem );
    // ----------
    /* cicili#Block206 */
    ({ /* cicili#Let208 */
      bool __h_case_result  = ((__h_data203 . __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let211 */
        __auto_type l  = new_List_int_Pure (((const int[]){ 1, 3, 5, 7}), 4);
        // ----------
        fprintf (stdout , "mempty is: %d\n", mempty );
        fprintf (stdout , "left identity (%d 12) is: %d\n", mempty , mappend (mempty , 12));
        fprintf (stdout , "right identity (12 %d) is: %d\n", mempty , mappend (12, mempty ));
        fprintf (stdout , "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n", mappend (5, mappend (7, 12)), mappend (mappend (5, 7), 12));
        mconcat (l );
      }) : ({ /* cicili#Let222 */
        // ----------
        /* cicili#Block224 */
        -1;
      }));
    });
  }));
  fprintf (stdout , "Product of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let230 */
    __auto_type __h_data229  = get_Monoid_Product_int ();
    __auto_type mempty  = (((__h_data229 . __h_data ). _ ). __h_0_mem );
    __auto_type mappend  = (((__h_data229 . __h_data ). _ ). __h_1_mem );
    __auto_type mconcat  = (((__h_data229 . __h_data ). _ ). __h_2_mem );
    // ----------
    /* cicili#Block232 */
    ({ /* cicili#Let234 */
      bool __h_case_result  = ((__h_data229 . __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let237 */
        __auto_type l  = new_List_int_Pure (((const int[]){ 1, 3, 5, 7}), 4);
        // ----------
        fprintf (stdout , "mempty is: %d\n", mempty );
        fprintf (stdout , "left identity (%d 12) is: %d\n", mempty , mappend (mempty , 12));
        fprintf (stdout , "right identity (12 %d) is: %d\n", mempty , mappend (12, mempty ));
        fprintf (stdout , "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n", mappend (5, mappend (7, 12)), mappend (mappend (5, 7), 12));
        mconcat (l );
      }) : ({ /* cicili#Let248 */
        // ----------
        /* cicili#Block250 */
        -1;
      }));
    });
  }));
}
