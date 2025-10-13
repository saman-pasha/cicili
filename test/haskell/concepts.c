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
List_int fmap_List_int_List_int (int (*atob) (int value ), List_int input );
List_int fmap_List_int_List_int (int (*atob) (int value ), List_int input ) {
  return ({ /* cicili#Let162 */
    __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block164 */
    ({ /* cicili#Let166 */
      bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (atob (head ), fmap_List_int_List_int (atob , tail )) : ({ /* cicili#Let175 */
        // ----------
        /* cicili#Block177 */
        Empty_int ();
      }));
    });
  });
}
List_Bool fmap_List_int_List_Bool (Bool (*atob) (int value ), List_int input );
List_Bool fmap_List_int_List_Bool (Bool (*atob) (int value ), List_int input ) {
  return ({ /* cicili#Let196 */
    __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block198 */
    ({ /* cicili#Let200 */
      bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (atob (head ), fmap_List_int_List_Bool (atob , tail )) : ({ /* cicili#Let209 */
        // ----------
        /* cicili#Block211 */
        Empty_Bool ();
      }));
    });
  });
}
static int __ciciliL_368 (int v ) {
  return (v  *  3 );
}
static Bool __ciciliL_371 (int v ) {
  return (((v  %  2 )) ? False () : True ());
}
int main () {
  ({ /* cicili#Let219 */
    __auto_type chrlst  __attribute__((__cleanup__(free_List_char ))) = new_List_char_Pure ("Hello List!", 11);
    __auto_type m0  = nth_List_char (3, chrlst );
    __auto_type m1  = nth_List_char (15, chrlst );
    // ----------
    show_String (chrlst );
    putchar ('\n');
    reduce_List_char (chrlst );
    putchar ('\n');
    { /* cicili#Let225 */
      __auto_type ch  = (((m0 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block227 */
      ({ /* cicili#Let229 */
        bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "4th element is: %c\n", ch );
        else
          { /* cicili#Let236 */
            // ----------
            /* cicili#Block238 */
            ({ /* cicili#Let240 */
              bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "4th element is: Nothing\n");
            });
          }
      });
    }
    { /* cicili#Let246 */
      __auto_type ch  = (((m1 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block248 */
      ({ /* cicili#Let250 */
        bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "16th element is: %c\n", ch );
        else
          { /* cicili#Let257 */
            // ----------
            /* cicili#Block259 */
            ({ /* cicili#Let261 */
              bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "16th element is: Nothing\n");
            });
          }
      });
    }
  });
  fprintf (stdout , "Sum of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let269 */
    __auto_type __h_data268  = get_Monoid_Sum_int ();
    __auto_type mappend  = (((__h_data268 . __h_data ). _ ). __h_0_mem );
    __auto_type mempty  = (((__h_data268 . __h_data ). _ ). __h_1_mem );
    __auto_type mconcat  = (((__h_data268 . __h_data ). _ ). __h_2_mem );
    // ----------
    /* cicili#Block271 */
    ({ /* cicili#Let273 */
      bool __h_case_result  = ((__h_data268 . __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let276 */
        __auto_type l  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 1, 3, 5, 7}), 4);
        // ----------
        fprintf (stdout , "Sum mempty is: %d\n", mempty );
        fprintf (stdout , "left identity (%d 12) is: %d\n", mempty , mappend (mempty , 12));
        fprintf (stdout , "right identity (12 %d) is: %d\n", mempty , mappend (12, mempty ));
        fprintf (stdout , "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n", mappend (5, mappend (7, 12)), mappend (mappend (5, 7), 12));
        mconcat (l );
      }) : ({ /* cicili#Let287 */
        // ----------
        /* cicili#Block289 */
        -1;
      }));
    });
  }));
  fprintf (stdout , "Product of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let295 */
    __auto_type __h_data294  = get_Monoid_Product_int ();
    __auto_type mappend  = (((__h_data294 . __h_data ). _ ). __h_0_mem );
    __auto_type mempty  = (((__h_data294 . __h_data ). _ ). __h_1_mem );
    __auto_type mconcat  = (((__h_data294 . __h_data ). _ ). __h_2_mem );
    // ----------
    /* cicili#Block297 */
    ({ /* cicili#Let299 */
      bool __h_case_result  = ((__h_data294 . __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let302 */
        __auto_type l  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 1, 3, 5, 7}), 4);
        // ----------
        fprintf (stdout , "Product mempty is: %d\n", mempty );
        fprintf (stdout , "left identity (%d 12) is: %d\n", mempty , mappend (mempty , 12));
        fprintf (stdout , "right identity (12 %d) is: %d\n", mempty , mappend (12, mempty ));
        fprintf (stdout , "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n", mappend (5, mappend (7, 12)), mappend (mappend (5, 7), 12));
        mconcat (l );
      }) : ({ /* cicili#Let313 */
        // ----------
        /* cicili#Block315 */
        -1;
      }));
    });
  }));
  { /* cicili#Let320 */
    __auto_type __h_data319  = get_Monoid_Concat_List_int ();
    __auto_type mconcat  = (((__h_data319 . __h_data ). _ ). __h_2_mem );
    // ----------
    /* cicili#Block322 */
    ({ /* cicili#Let324 */
      bool __h_case_result  = ((__h_data319 . __h_ctor ) ==  __h___t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Let328 */
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
  { /* cicili#Let345 */
    __auto_type __h_data344  = get_Semigroup_Concat_String_char ();
    __auto_type mappend  = (((__h_data344 . __h_data ). _ ). __h_0_mem );
    // ----------
    /* cicili#Block347 */
    ({ /* cicili#Let349 */
      bool __h_case_result  = ((__h_data344 . __h_ctor ) ==  __h___t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Let353 */
          __auto_type s1  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Hello ");
          __auto_type s2  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Cicili");
          // ----------
          fprintf (stdout , "Concat of Strings (mappend Semigroup) of 'Hello ' and 'Cicili' is:\n");
          show_String (mappend (s1 , s2 ));
          putchar ('\n');
        });
    });
  }
  ({ /* cicili#Let363 */
    __auto_type l1  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 1, 2, 3, 4, 5, 6}), 6);
    __auto_type r1  __attribute__((__cleanup__(free_List_int ))) = fmap_List_int_List_int (__ciciliL_368 , l1 );
    __auto_type r2  __attribute__((__cleanup__(free_List_Bool ))) = fmap_List_int_List_Bool (__ciciliL_371 , r1 );
    // ----------
    fprintf (stdout , "fmap (*3) of { 1 2 3 4 5 6 } is:\n");
    show_List_int (r1 );
    putchar ('\n');
    fprintf (stdout , "fmap (%%2) . fmap (*3) of { 1 2 3 4 5 6 } is:\n");
    show_List_Bool (r2 );
    putchar ('\n');
  });
}
