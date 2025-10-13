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
static int __ciciliL_317 (int input ) {
  return (input  *  2 );
}
static Bool __ciciliL_323 (int input ) {
  return (((input  %  3 )) ? False () : True ());
}
static Bool __ciciliL_335 (int input ) {
  return (((input  %  3 )) ? False () : True ());
}
static int __ciciliL_342 (int input ) {
  return (input  *  2 );
}
int main () {
  ({ /* cicili#Let161 */
    __auto_type chrlst  __attribute__((__cleanup__(free_List_char ))) = new_List_char_Pure ("Hello List!", 11);
    __auto_type m0  = nth_List_char (3, chrlst );
    __auto_type m1  = nth_List_char (15, chrlst );
    // ----------
    show_String (chrlst );
    putchar ('\n');
    reduce_List_char (chrlst );
    putchar ('\n');
    { /* cicili#Let167 */
      __auto_type ch  = (((m0 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block169 */
      ({ /* cicili#Let171 */
        bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "4th element is: %c\n", ch );
        else
          { /* cicili#Let178 */
            // ----------
            /* cicili#Block180 */
            ({ /* cicili#Let182 */
              bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "4th element is: Nothing\n");
            });
          }
      });
    }
    { /* cicili#Let188 */
      __auto_type ch  = (((m1 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block190 */
      ({ /* cicili#Let192 */
        bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "16th element is: %c\n", ch );
        else
          { /* cicili#Let199 */
            // ----------
            /* cicili#Block201 */
            ({ /* cicili#Let203 */
              bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "16th element is: Nothing\n");
            });
          }
      });
    }
  });
  fprintf (stdout , "Sum of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let211 */
    __auto_type __h_data210  = get_Monoid_Sum_int ();
    __auto_type mappend  = (((__h_data210 . __h_data ). _ ). __h_0_mem );
    __auto_type mempty  = (((__h_data210 . __h_data ). _ ). __h_1_mem );
    __auto_type mconcat  = (((__h_data210 . __h_data ). _ ). __h_2_mem );
    // ----------
    /* cicili#Block213 */
    ({ /* cicili#Let215 */
      bool __h_case_result  = ((__h_data210 . __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let218 */
        __auto_type l  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 1, 3, 5, 7}), 4);
        // ----------
        fprintf (stdout , "Sum mempty is: %d\n", mempty );
        fprintf (stdout , "left identity (%d 12) is: %d\n", mempty , mappend (mempty , 12));
        fprintf (stdout , "right identity (12 %d) is: %d\n", mempty , mappend (12, mempty ));
        fprintf (stdout , "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n", mappend (5, mappend (7, 12)), mappend (mappend (5, 7), 12));
        mconcat (l );
      }) : ({ /* cicili#Let229 */
        // ----------
        /* cicili#Block231 */
        -1;
      }));
    });
  }));
  fprintf (stdout , "Product of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let237 */
    __auto_type __h_data236  = get_Monoid_Product_int ();
    __auto_type mappend  = (((__h_data236 . __h_data ). _ ). __h_0_mem );
    __auto_type mempty  = (((__h_data236 . __h_data ). _ ). __h_1_mem );
    __auto_type mconcat  = (((__h_data236 . __h_data ). _ ). __h_2_mem );
    // ----------
    /* cicili#Block239 */
    ({ /* cicili#Let241 */
      bool __h_case_result  = ((__h_data236 . __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let244 */
        __auto_type l  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 1, 3, 5, 7}), 4);
        // ----------
        fprintf (stdout , "Product mempty is: %d\n", mempty );
        fprintf (stdout , "left identity (%d 12) is: %d\n", mempty , mappend (mempty , 12));
        fprintf (stdout , "right identity (12 %d) is: %d\n", mempty , mappend (12, mempty ));
        fprintf (stdout , "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n", mappend (5, mappend (7, 12)), mappend (mappend (5, 7), 12));
        mconcat (l );
      }) : ({ /* cicili#Let255 */
        // ----------
        /* cicili#Block257 */
        -1;
      }));
    });
  }));
  { /* cicili#Let262 */
    __auto_type __h_data261  = get_Monoid_Concat_List_int ();
    __auto_type mconcat  = (((__h_data261 . __h_data ). _ ). __h_2_mem );
    // ----------
    /* cicili#Block264 */
    ({ /* cicili#Let266 */
      bool __h_case_result  = ((__h_data261 . __h_ctor ) ==  __h___t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Let270 */
          __auto_type l1  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 1, 3, 5}), 3);
          __auto_type l2  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 2, 4, 6}), 3);
          __auto_type l3  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 7, 8, 9}), 3);
          // ----------
          fprintf (stdout , "Concat of Lists (mconcat Monoid) of '{ 1 3 5 } and '{ 2 4 6 } and '{ 7 8 9 } is:\n");
          show_List_int (mconcat (new_List_List_int_Pure (((const List_int[]){ l1 , l2 , l3 }), 3)));
          putchar ('\n');
        });
    });
  }
  { /* cicili#Let287 */
    __auto_type __h_data286  = get_Semigroup_Concat_String_char ();
    __auto_type mappend  = (((__h_data286 . __h_data ). _ ). __h_0_mem );
    // ----------
    /* cicili#Block289 */
    ({ /* cicili#Let291 */
      bool __h_case_result  = ((__h_data286 . __h_ctor ) ==  __h___t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Let295 */
          __auto_type s1  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Hello ");
          __auto_type s2  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Cicili");
          // ----------
          fprintf (stdout , "Concat of Strings (mappend Semigroup) of 'Hello ' and 'Cicili' is:\n");
          show_String (mappend (s1 , s2 ));
          putchar ('\n');
        });
    });
  }
  ({ /* cicili#Let309 */
    __auto_type l1  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 1, 2, 3, 4, 5, 6}), 6);
    __auto_type r1  __attribute__((__cleanup__(free_List_int ))) = fmap_List_int_List_int_Pure (__ciciliL_317 , l1 );
    __auto_type r2  __attribute__((__cleanup__(free_List_Bool ))) = fmap_List_int_List_Bool_Pure (__ciciliL_323 , l1 );
    __auto_type r3  __attribute__((__cleanup__(free_List_Bool ))) = fmap_List_int_List_Bool_Pure (__ciciliL_335 , fmap_List_int_List_int_Pure (__ciciliL_342 , l1 ));
    // ----------
    fprintf (stdout , "fmap (*2) of { 1 2 3 4 5 6 } is:\n");
    show_List_int (r1 );
    putchar ('\n');
    fprintf (stdout , "fmap (%%3) of { 1 2 3 4 5 6 } is:\n");
    show_List_Bool (r2 );
    putchar ('\n');
    fprintf (stdout , "fmap (%%3) ! fmap (*2) of { 1 2 3 4 5 6 } is:\n");
    show_List_Bool (r3 );
    putchar ('\n');
  });
}
