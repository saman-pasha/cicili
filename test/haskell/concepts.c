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
static int __ciciliL_467 (int input ) {
  return (input  *  2 );
}
static Bool __ciciliL_480 (int input ) {
  return (((input  %  3 )) ? False () : True ());
}
static int __ciciliL_502 (int input ) {
  return (input  *  2 );
}
static Bool __ciciliL_513 (int input ) {
  return (((input  %  3 )) ? False () : True ());
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
  ({ /* cicili#Let279 */
    __auto_type chrlst  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let281 */
      __auto_type tmp_obj  = new_String_Const ("Hello List!");
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    });
    __auto_type m0  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let286 */
      __auto_type tmp_obj  = nth_List_char (3, chrlst );
      // ----------
      ((void)(tmp_obj . __h_free_data ));
      tmp_obj ;
    });
    __auto_type m1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let289 */
      __auto_type tmp_obj  = nth_List_char (15, chrlst );
      // ----------
      ((void)(tmp_obj . __h_free_data ));
      tmp_obj ;
    });
    // ----------
    show_String (chrlst );
    putchar ('\n');
    reduce_List_char (chrlst );
    putchar ('\n');
    { /* cicili#Let294 */
      __auto_type ch  = (((m0 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block296 */
      ({ /* cicili#Let298 */
        bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "4th element is: %c\n", ch );
        else
          { /* cicili#Let305 */
            // ----------
            /* cicili#Block307 */
            ({ /* cicili#Let309 */
              bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "4th element is: Nothing\n");
            });
          }
      });
    }
    { /* cicili#Let315 */
      __auto_type ch  = (((m1 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block317 */
      ({ /* cicili#Let319 */
        bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "16th element is: %c\n", ch );
        else
          { /* cicili#Let326 */
            // ----------
            /* cicili#Block328 */
            ({ /* cicili#Let330 */
              bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "16th element is: Nothing\n");
            });
          }
      });
    }
  });
  fprintf (stdout , "Sum of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let338 */
      __auto_type __h_data337  = get_Monoid_Sum_int ();
      __auto_type mappend  = (((__h_data337 . __h_data ). _ ). __h_0_mem );
      __auto_type mempty  = (((__h_data337 . __h_data ). _ ). __h_1_mem );
      __auto_type mconcat  = (((__h_data337 . __h_data ). _ ). __h_2_mem );
      // ----------
      /* cicili#Block340 */
      ({ /* cicili#Let342 */
        bool __h_case_result  = ((__h_data337 . __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let345 */
            __auto_type l  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let347 */
              __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 3, 5, 7}), 4);
              // ----------
              ((void)(tmp_obj -> __h_free_class ));
              tmp_obj ;
            });
            // ----------
            fprintf (stdout , "Sum mempty is: %d\n", mempty );
            fprintf (stdout , "left identity (%d 12) is: %d\n", mempty , mappend (mempty , 12));
            fprintf (stdout , "right identity (12 %d) is: %d\n", mempty , mappend (12, mempty ));
            fprintf (stdout , "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n", mappend (5, mappend (7, 12)), mappend (mappend (5, 7), 12));
            mconcat (l );
          }) : ({ /* cicili#Let359 */
            // ----------
            /* cicili#Block361 */
            -1;
          }));
      });
    }));
  fprintf (stdout , "Product of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let367 */
      __auto_type __h_data366  = get_Monoid_Product_int ();
      __auto_type mappend  = (((__h_data366 . __h_data ). _ ). __h_0_mem );
      __auto_type mempty  = (((__h_data366 . __h_data ). _ ). __h_1_mem );
      __auto_type mconcat  = (((__h_data366 . __h_data ). _ ). __h_2_mem );
      // ----------
      /* cicili#Block369 */
      ({ /* cicili#Let371 */
        bool __h_case_result  = ((__h_data366 . __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let374 */
            __auto_type l  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let376 */
              __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 3, 5, 7}), 4);
              // ----------
              ((void)(tmp_obj -> __h_free_class ));
              tmp_obj ;
            });
            // ----------
            fprintf (stdout , "Product mempty is: %d\n", mempty );
            fprintf (stdout , "left identity (%d 12) is: %d\n", mempty , mappend (mempty , 12));
            fprintf (stdout , "right identity (12 %d) is: %d\n", mempty , mappend (12, mempty ));
            fprintf (stdout , "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n", mappend (5, mappend (7, 12)), mappend (mappend (5, 7), 12));
            mconcat (l );
          }) : ({ /* cicili#Let388 */
            // ----------
            /* cicili#Block390 */
            -1;
          }));
      });
    }));
  { /* cicili#Let395 */
    __auto_type __h_data394  = get_Monoid_Concat_List_int ();
    __auto_type mconcat  = (((__h_data394 . __h_data ). _ ). __h_2_mem );
    // ----------
    /* cicili#Block397 */
    ({ /* cicili#Let399 */
      bool __h_case_result  = ((__h_data394 . __h_ctor ) ==  __h___t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Let403 */
          __auto_type l1  = new_List_int_Pure (((const int[]){ 1, 3, 5}), 3);
          __auto_type l2  = new_List_int_Pure (((const int[]){ 2, 4, 6}), 3);
          __auto_type l3  = new_List_int_Pure (((const int[]){ 7, 8, 9}), 3);
          // ----------
          ({ /* cicili#Let415 */
            __auto_type result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let417 */
              __auto_type tmp_obj  = mconcat (new_List_List_int_Pure (((const List_int[]){ l1 , l2 , l3 }), 3));
              // ----------
              ((void)(tmp_obj -> __h_free_class ));
              tmp_obj ;
            });
            // ----------
            fprintf (stdout , "Concat of Lists (mconcat Monoid) of '{ 1 3 5 } and '{ 2 4 6 } and '{ 7 8 9 } is:\n");
            show_List_int (result );
            putchar ('\n');
          });
        });
    });
  }
  { /* cicili#Let426 */
    __auto_type __h_data425  = get_Semigroup_Concat_String_char ();
    __auto_type mappend  = (((__h_data425 . __h_data ). _ ). __h_0_mem );
    // ----------
    /* cicili#Block428 */
    ({ /* cicili#Let430 */
      bool __h_case_result  = ((__h_data425 . __h_ctor ) ==  __h___t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Let434 */
          __auto_type s1  = new_String_Const ("Hello ");
          __auto_type s2  = new_String_Const ("Cicili");
          // ----------
          ({ /* cicili#Let443 */
            __auto_type result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let445 */
              __auto_type tmp_obj  = mappend (s1 , s2 );
              // ----------
              ((void)(tmp_obj -> __h_free_class ));
              tmp_obj ;
            });
            // ----------
            fprintf (stdout , "Concat of Strings (mappend Semigroup) of 'Hello ' and 'Cicili' is:\n");
            show_String (result );
            putchar ('\n');
          });
        });
    });
  }
  ({ /* cicili#Let454 */
    __auto_type l1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let456 */
      __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4, 5, 6}), 6);
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    });
    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let462 */
      __auto_type tmp_obj  = fmap_List_int_List_int_Pure (__ciciliL_467 , l1 );
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    });
    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let475 */
      __auto_type tmp_obj  = fmap_List_int_List_Bool_Pure (__ciciliL_480 , l1 );
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    });
    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let488 */
      __auto_type tmp_obj  = ({ /* cicili#Let497 */
        __auto_type strict_in  __attribute__((__cleanup__(free_List_int ))) = fmap_List_int_List_int_Pure (__ciciliL_502 , l1 );
        // ----------
        fmap_List_int_List_Bool_Pure (__ciciliL_513 , strict_in );
      });
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    });
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
