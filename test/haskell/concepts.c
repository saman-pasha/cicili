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
  union { /* ciciliUnion157 */
    struct { /* ciciliStruct158 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct159 */
      int __h_0_mem ;
    } Right , _ ;
  } __h_data ;
} Either_String_int;
Either_String_int Left_String_int (String error );
Either_String_int Right_String_int (int value );
__attribute__((weak)) Either_String_int Default_Either_String_int (int value ) {
  return Right_String_int (value );
}
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
typedef int (*Functor_Maybe_int_int_a_b_t) (int value );
typedef Maybe_int (*Functor_Maybe_int_int_fmap_t) (Functor_Maybe_int_int_a_b_t a_b , Maybe_int input );
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_Maybe_int_int Functor_Maybe_int_int ;
typedef void (*free_Functor_Maybe_int_int_t) (Functor_Maybe_int_int * this );
typedef struct Functor_Maybe_int_int {
  free_Functor_Maybe_int_int_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion213 */
    struct { /* ciciliStruct214 */
      Functor_Maybe_int_int_fmap_t __h_0_mem ;
      Functor_Maybe_int_int_a_b_t __h_1_mem ;
    } Functor , _ ;
  } __h_data ;
} Functor_Maybe_int_int;
Functor_Maybe_int_int __h_Functor_Maybe_int_int_ctor_ctor (Functor_Maybe_int_int_fmap_t fmap , Functor_Maybe_int_int_a_b_t a_b );
void free_Functor_Maybe_int_int (Functor_Maybe_int_int * this );
Maybe_int Functor_Maybe_int_int_fmap (Functor_Maybe_int_int_a_b_t a_b , Maybe_int input );
Functor_Maybe_int_int get_Functor_Maybe_int_int (Functor_Maybe_int_int_a_b_t a_b );
void free_Functor_Maybe_int_int (Functor_Maybe_int_int * this ) {
}
Functor_Maybe_int_int __h_Functor_Maybe_int_int_ctor_ctor (Functor_Maybe_int_int_fmap_t fmap , Functor_Maybe_int_int_a_b_t a_b ) {
  return ((Functor_Maybe_int_int){ free_Functor_Maybe_int_int , __h___t , .__h_data._ = { fmap , a_b }});
}
Maybe_int Functor_Maybe_int_int_fmap (Functor_Maybe_int_int_a_b_t a_b , Maybe_int input ) {
  return ({ /* cicili#Let252 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block254 */
      ({ /* cicili#Let256 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_int (a_b (val )) : ({ /* cicili#Let266 */
            // ----------
            /* cicili#Block268 */
            Nothing_int ();
          }));
      });
    });
}
Functor_Maybe_int_int get_Functor_Maybe_int_int (Functor_Maybe_int_int_a_b_t a_b ) {
  return __h_Functor_Maybe_int_int_ctor_ctor (Functor_Maybe_int_int_fmap , a_b );
}
#ifndef __H_Maybe_Functor_Maybe_int_int
#define __H_Maybe_Functor_Maybe_int_int
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Functor_Maybe_int_int Maybe_Functor_Maybe_int_int ;
typedef void (*free_Maybe_Functor_Maybe_int_int_t) (Maybe_Functor_Maybe_int_int * this );
typedef struct Maybe_Functor_Maybe_int_int {
  free_Maybe_Functor_Maybe_int_int_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion292 */
    struct { /* ciciliStruct293 */
    } Nothing , _0 ;
    struct { /* ciciliStruct294 */
      Functor_Maybe_int_int __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_Functor_Maybe_int_int;
Maybe_Functor_Maybe_int_int Nothing_Functor_Maybe_int_int ();
Maybe_Functor_Maybe_int_int Just_Functor_Maybe_int_int (Functor_Maybe_int_int value );
__attribute__((weak)) Maybe_Functor_Maybe_int_int Default_Maybe_Functor_Maybe_int_int (Functor_Maybe_int_int value ) {
  return Just_Functor_Maybe_int_int (value );
}
void free_Maybe_Functor_Maybe_int_int (Maybe_Functor_Maybe_int_int * this );
#endif /* __H_Maybe_Functor_Maybe_int_int */ 
void free_Maybe_Functor_Maybe_int_int (Maybe_Functor_Maybe_int_int * this ) {
}
Maybe_Functor_Maybe_int_int Nothing_Functor_Maybe_int_int () {
  return ((Maybe_Functor_Maybe_int_int){ free_Maybe_Functor_Maybe_int_int , __h_Nothing_t });
}
Maybe_Functor_Maybe_int_int Just_Functor_Maybe_int_int (Functor_Maybe_int_int value ) {
  return ((Maybe_Functor_Maybe_int_int){ free_Maybe_Functor_Maybe_int_int , __h___t , .__h_data._ = { value }});
}
typedef Maybe_Functor_Maybe_int_int (*Applicative_Maybe_int_int_pure_t) (Functor_Maybe_int_int ftor );
typedef Maybe_int (*Applicative_Maybe_int_int_ap_t) (Maybe_Functor_Maybe_int_int functor , Maybe_int input );
#ifndef __H___h_Applicative_ctor_t__
#define __H___h_Applicative_ctor_t__
typedef enum __h_Applicative_ctor_t {
  __h_Applicative_t = 0
} __h_Applicative_ctor_t;
#endif /* __H___h_Applicative_ctor_t__ */ 
typedef struct Applicative_Maybe_int_int Applicative_Maybe_int_int ;
typedef void (*free_Applicative_Maybe_int_int_t) (Applicative_Maybe_int_int * this );
typedef struct Applicative_Maybe_int_int {
  free_Applicative_Maybe_int_int_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion342 */
    struct { /* ciciliStruct343 */
      Applicative_Maybe_int_int_pure_t __h_0_mem ;
      Applicative_Maybe_int_int_ap_t __h_1_mem ;
    } Applicative , _ ;
  } __h_data ;
} Applicative_Maybe_int_int;
Applicative_Maybe_int_int __h_Applicative_Maybe_int_int_ctor_ctor (Applicative_Maybe_int_int_pure_t pure , Applicative_Maybe_int_int_ap_t ap );
void free_Applicative_Maybe_int_int (Applicative_Maybe_int_int * this );
Maybe_Functor_Maybe_int_int Applicative_Maybe_int_int_pure (Functor_Maybe_int_int ftor );
Maybe_int Applicative_Maybe_int_int_ap (Maybe_Functor_Maybe_int_int functor , Maybe_int input );
Applicative_Maybe_int_int get_Applicative_Maybe_int_int ();
void free_Applicative_Maybe_int_int (Applicative_Maybe_int_int * this ) {
}
Applicative_Maybe_int_int __h_Applicative_Maybe_int_int_ctor_ctor (Applicative_Maybe_int_int_pure_t pure , Applicative_Maybe_int_int_ap_t ap ) {
  return ((Applicative_Maybe_int_int){ free_Applicative_Maybe_int_int , __h___t , .__h_data._ = { pure , ap }});
}
Maybe_Functor_Maybe_int_int Applicative_Maybe_int_int_pure (Functor_Maybe_int_int ftor ) {
  return Just_Functor_Maybe_int_int (ftor );
}
Maybe_int Applicative_Maybe_int_int_ap (Maybe_Functor_Maybe_int_int functor , Maybe_int input ) {
  return ({ /* cicili#Let391 */
      __auto_type __h_match389_0_arg  = (((functor . __h_data ). Just ). __h_0_mem );
      __auto_type fmap  = (((__h_match389_0_arg . __h_data ). _ ). __h_0_mem );
      __auto_type a_b  = (((__h_match389_0_arg . __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block393 */
      ({ /* cicili#Let395 */
        bool __h_case_result  = (((functor . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match389_0_arg . __h_ctor ) ==  __h___t  ) );
        // ----------
        ((__h_case_result ) ? fmap (a_b , input ) : ({ /* cicili#Let399 */
            // ----------
            /* cicili#Block401 */
            Nothing_int ();
          }));
      });
    });
}
Applicative_Maybe_int_int get_Applicative_Maybe_int_int () {
  return __h_Applicative_Maybe_int_int_ctor_ctor (Applicative_Maybe_int_int_pure , Applicative_Maybe_int_int_ap );
}
static int __ciciliL_661 (int value ) {
  return (5 *  value  );
}
static Bool __ciciliL_663 (int value ) {
  return (((value  %  3 )) ? False () : True ());
}
static int __ciciliL_736 (int value ) {
  return (5 *  value  );
}
static Bool __ciciliL_761 (int value ) {
  return (((value  %  3 )) ? False () : True ());
}
static int __ciciliL_812 (int value ) {
  return (15 *  value  );
}
int main () {
  ({ /* cicili#Let418 */
    __auto_type rc0  __attribute__((__cleanup__(__h_free_class_router ))) = new_Rc_List_int_Pure (({ /* cicili#Let421 */
      __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    }));
    // ----------
    ({ /* cicili#Let427 */
      __auto_type rc1  __attribute__((__cleanup__(free_Rc_List_int ))) = clone_Rc_List_int (rc0 );
      // ----------
      fprintf (stdout , "list0:\n");
      { /* cicili#Let433 */
        __auto_type __h_data432  = deref_Rc_List_int (rc0 );
        __auto_type list0  = (((__h_data432 . __h_data ). _ ). __h_0_mem );
        // ----------
        /* cicili#Block435 */
        ({ /* cicili#Let437 */
          bool __h_case_result  = ((__h_data432 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            show_List_int (list0 );
        });
      }
      putchar ('\n');
      fprintf (stdout , "list1:\n");
      { /* cicili#Let444 */
        __auto_type __h_data443  = deref_Rc_List_int (rc1 );
        __auto_type list1  = (((__h_data443 . __h_data ). _ ). __h_0_mem );
        // ----------
        /* cicili#Block446 */
        ({ /* cicili#Let448 */
          bool __h_case_result  = ((__h_data443 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            show_List_int (list1 );
        });
      }
      putchar ('\n');
    });
  });
  { /* cicili#Let454 */
    __auto_type __h_data453  = divideByZero (34, 0);
    __auto_type e  = (((__h_data453 . __h_data ). Left ). __h_0_mem );
    // ----------
    /* cicili#Block456 */
    ({ /* cicili#Let458 */
      bool __h_case_result  = ((__h_data453 . __h_ctor ) ==  __h_Left_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn461 */
          printf ("error raised: ");
          show_String (e );
          putchar ('\n');
          free_String ((&e ));
        });
      else
        { /* cicili#Let466 */
          __auto_type a  = (((__h_data453 . __h_data ). Right ). __h_0_mem );
          // ----------
          /* cicili#Block468 */
          ({ /* cicili#Let470 */
            bool __h_case_result  = ((__h_data453 . __h_ctor ) ==  __h_Right_t  );
            // ----------
            if (__h_case_result )
              printf ("division result: %d\n", a );
          });
        }
    });
  }
  { /* cicili#Let476 */
    __auto_type __h_data475  = divideByZero (34, 2);
    __auto_type e  = (((__h_data475 . __h_data ). Left ). __h_0_mem );
    // ----------
    /* cicili#Block478 */
    ({ /* cicili#Let480 */
      bool __h_case_result  = ((__h_data475 . __h_ctor ) ==  __h_Left_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn483 */
          printf ("error raised: ");
          show_String (e );
          putchar ('\n');
          free_String ((&e ));
        });
      else
        { /* cicili#Let488 */
          __auto_type a  = (((__h_data475 . __h_data ). Right ). __h_0_mem );
          // ----------
          /* cicili#Block490 */
          ({ /* cicili#Let492 */
            bool __h_case_result  = ((__h_data475 . __h_ctor ) ==  __h_Right_t  );
            // ----------
            if (__h_case_result )
              printf ("division result: %d\n", a );
          });
        }
    });
  }
  ({ /* cicili#Let496 */
    __auto_type chrlst  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let498 */
      __auto_type tmp_obj  = new_String_Const ("Hello List!");
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    });
    __auto_type m0  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let503 */
      __auto_type tmp_obj  = nth_List_char (3, chrlst );
      // ----------
      ((void)(tmp_obj . __h_free_data ));
      tmp_obj ;
    });
    __auto_type m1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let506 */
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
    { /* cicili#Let511 */
      __auto_type ch  = (((m0 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block513 */
      ({ /* cicili#Let515 */
        bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "4th element is: %c\n", ch );
        else
          { /* cicili#Let522 */
            // ----------
            /* cicili#Block524 */
            ({ /* cicili#Let526 */
              bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "4th element is: Nothing\n");
            });
          }
      });
    }
    { /* cicili#Let532 */
      __auto_type ch  = (((m1 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block534 */
      ({ /* cicili#Let536 */
        bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "16th element is: %c\n", ch );
        else
          { /* cicili#Let543 */
            // ----------
            /* cicili#Block545 */
            ({ /* cicili#Let547 */
              bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "16th element is: Nothing\n");
            });
          }
      });
    }
  });
  fprintf (stdout , "Sum of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let555 */
      __auto_type __h_data554  = get_Monoid_Sum_int ();
      __auto_type mappend  = (((__h_data554 . __h_data ). _ ). __h_0_mem );
      __auto_type mempty  = (((__h_data554 . __h_data ). _ ). __h_1_mem );
      __auto_type mconcat  = (((__h_data554 . __h_data ). _ ). __h_2_mem );
      // ----------
      /* cicili#Block557 */
      ({ /* cicili#Let559 */
        bool __h_case_result  = ((__h_data554 . __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let562 */
            __auto_type l  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let564 */
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
          }) : ({ /* cicili#Let576 */
            // ----------
            /* cicili#Block578 */
            -1;
          }));
      });
    }));
  fprintf (stdout , "Product of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let584 */
      __auto_type __h_data583  = get_Monoid_Product_int ();
      __auto_type mappend  = (((__h_data583 . __h_data ). _ ). __h_0_mem );
      __auto_type mempty  = (((__h_data583 . __h_data ). _ ). __h_1_mem );
      __auto_type mconcat  = (((__h_data583 . __h_data ). _ ). __h_2_mem );
      // ----------
      /* cicili#Block586 */
      ({ /* cicili#Let588 */
        bool __h_case_result  = ((__h_data583 . __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let591 */
            __auto_type l  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let593 */
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
          }) : ({ /* cicili#Let605 */
            // ----------
            /* cicili#Block607 */
            -1;
          }));
      });
    }));
  ({ /* cicili#Let610 */
    __auto_type l1  = new_List_int_Pure (((const int[]){ 1, 3, 5}), 3);
    __auto_type l2  = new_List_int_Pure (((const int[]){ 2, 4, 6}), 3);
    __auto_type l3  = new_List_int_Pure (((const int[]){ 7, 8, 9}), 3);
    // ----------
    ({ /* cicili#Let622 */
      __auto_type result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let624 */
        __auto_type tmp_obj  = Monoid_List_int_mconcat (new_List_List_int_Pure (((const List_int[]){ l1 , l2 , l3 }), 3));
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
  { /* cicili#Let636 */
    __auto_type __h_data635  = get_Semigroup_String_char ();
    __auto_type mappend  = (((__h_data635 . __h_data ). _ ). __h_0_mem );
    // ----------
    /* cicili#Block638 */
    ({ /* cicili#Let640 */
      bool __h_case_result  = ((__h_data635 . __h_ctor ) ==  __h___t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Let644 */
          __auto_type s1  = new_String_Const ("Hello ");
          __auto_type s2  = new_String_Const ("Cicili!");
          // ----------
          ({ /* cicili#Let653 */
            __auto_type result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let655 */
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
  ({ /* cicili#Let660 */
    __auto_type ftor_mul_5  = get_Functor_List_int_int (__ciciliL_661 );
    __auto_type ftor_mod_3  = get_Functor_List_int_Bool (__ciciliL_663 );
    // ----------
    ({ /* cicili#Let674 */
      __auto_type l1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let676 */
        __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4, 5, 6}), 6);
        // ----------
        ((void)(tmp_obj -> __h_free_class ));
        tmp_obj ;
      });
      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let682 */
        __auto_type tmp_obj  = ({ /* cicili#Let687 */
          __auto_type fmap  = (((ftor_mul_5 . __h_data ). _ ). __h_0_mem );
          __auto_type a_b  = (((ftor_mul_5 . __h_data ). _ ). __h_1_mem );
          // ----------
          /* cicili#Block689 */
          ({ /* cicili#Let691 */
            bool __h_case_result  = ((ftor_mul_5 . __h_ctor ) ==  __h___t  );
            // ----------
            ((__h_case_result ) ? fmap (a_b , l1 ) : ({ /* cicili#Let695 */
                // ----------
                /* cicili#Block697 */
                Empty_int ();
              }));
          });
        });
        // ----------
        ((void)(tmp_obj -> __h_free_class ));
        tmp_obj ;
      });
      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let701 */
        __auto_type tmp_obj  = ({ /* cicili#Let706 */
          __auto_type fmap  = (((ftor_mod_3 . __h_data ). _ ). __h_0_mem );
          __auto_type a_b  = (((ftor_mod_3 . __h_data ). _ ). __h_1_mem );
          // ----------
          /* cicili#Block708 */
          ({ /* cicili#Let710 */
            bool __h_case_result  = ((ftor_mod_3 . __h_ctor ) ==  __h___t  );
            // ----------
            ((__h_case_result ) ? fmap (a_b , r1 ) : ({ /* cicili#Let714 */
                // ----------
                /* cicili#Block716 */
                Empty_Bool ();
              }));
          });
        });
        // ----------
        ((void)(tmp_obj -> __h_free_class ));
        tmp_obj ;
      });
      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let720 */
        __auto_type tmp_obj  = ({ /* cicili#Let729 */
          __auto_type strict_in  __attribute__((__cleanup__(free_List_int ))) = ({ /* cicili#Let734 */
            __auto_type __h_data733  = get_Functor_List_int_int (__ciciliL_736 );
            __auto_type fmap  = (((__h_data733 . __h_data ). _ ). __h_0_mem );
            __auto_type a_b  = (((__h_data733 . __h_data ). _ ). __h_1_mem );
            // ----------
            /* cicili#Block743 */
            ({ /* cicili#Let745 */
              bool __h_case_result  = ((__h_data733 . __h_ctor ) ==  __h___t  );
              // ----------
              ((__h_case_result ) ? fmap (a_b , l1 ) : ({ /* cicili#Let749 */
                  // ----------
                  /* cicili#Block751 */
                  mempty_List_int ();
                }));
            });
          });
          // ----------
          ({ /* cicili#Let759 */
            __auto_type __h_data758  = get_Functor_List_int_Bool (__ciciliL_761 );
            __auto_type fmap  = (((__h_data758 . __h_data ). _ ). __h_0_mem );
            __auto_type a_b  = (((__h_data758 . __h_data ). _ ). __h_1_mem );
            // ----------
            /* cicili#Block768 */
            ({ /* cicili#Let770 */
              bool __h_case_result  = ((__h_data758 . __h_ctor ) ==  __h___t  );
              // ----------
              ((__h_case_result ) ? fmap (a_b , strict_in ) : ({ /* cicili#Let774 */
                  // ----------
                  /* cicili#Block776 */
                  mempty_List_Bool ();
                }));
            });
          });
        });
        // ----------
        ((void)(tmp_obj -> __h_free_class ));
        tmp_obj ;
      });
      // ----------
      fprintf (stdout , "fmap (*5) of { 1 2 3 4 5 6 } is:\n");
      show_List_int (r1 );
      putchar ('\n');
      fprintf (stdout , "fmap (%%3) of { 1 2 3 4 5 6 } is:\n");
      show_List_Bool (r2 );
      putchar ('\n');
      fprintf (stdout , "fmap (%%3) ! fmap (*5) of { 1 2 3 4 5 6 } is:\n");
      show_List_Bool (r3 );
      putchar ('\n');
      { /* cicili#Let787 */
        __auto_type __h_data786  = get_Monoid_All_Bool ();
        __auto_type mconcat  = (((__h_data786 . __h_data ). _ ). __h_2_mem );
        // ----------
        /* cicili#Block789 */
        ({ /* cicili#Let791 */
          bool __h_case_result  = ((__h_data786 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            ({ /* cicili#Progn794 */
              fprintf (stdout , "the result of 'All' monoid is: ");
              show_Bool (mconcat (r3 ));
              putchar ('\n');
            });
        });
      }
      { /* cicili#Let800 */
        __auto_type __h_data799  = get_Monoid_Any_Bool ();
        __auto_type mconcat  = (((__h_data799 . __h_data ). _ ). __h_2_mem );
        // ----------
        /* cicili#Block802 */
        ({ /* cicili#Let804 */
          bool __h_case_result  = ((__h_data799 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            ({ /* cicili#Progn807 */
              fprintf (stdout , "the result of 'Any' monoid is: ");
              show_Bool (mconcat (r3 ));
              putchar ('\n');
            });
        });
      }
    });
  });
  ({ /* cicili#Let811 */
    __auto_type ftor_mul_15  = get_Functor_Maybe_int_int (__ciciliL_812 );
    // ----------
    { /* cicili#Let818 */
      __auto_type __h_data817  = get_Applicative_Maybe_int_int ();
      __auto_type pure  = (((__h_data817 . __h_data ). _ ). __h_0_mem );
      __auto_type ap  = (((__h_data817 . __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block820 */
      ({ /* cicili#Let822 */
        bool __h_case_result  = ((__h_data817 . __h_ctor ) ==  __h___t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Let828 */
            __auto_type __h_data827  = ap (pure (ftor_mul_15 ), Just_int (12));
            __auto_type output  = (((__h_data827 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block830 */
            ({ /* cicili#Let832 */
              bool __h_case_result  = ((__h_data827 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "the result of 'Applicative for Maybe (*15)' is: Just %d\n", output );
              else
                { /* cicili#Let839 */
                  // ----------
                  /* cicili#Block841 */
                  fprintf (stdout , "the result of 'Applicative for Maybe (*15)' is: Nothing\n");
                }
            });
          }
      });
    }
    { /* cicili#Let847 */
      __auto_type __h_data846  = Applicative_Maybe_int_int_ap (Applicative_Maybe_int_int_pure (ftor_mul_15 ), Just_int (12));
      __auto_type output  = (((__h_data846 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block855 */
      ({ /* cicili#Let857 */
        bool __h_case_result  = ((__h_data846 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "the result of easy 'Applicative for Maybe (*15)' is: Just %d\n", output );
        else
          { /* cicili#Let864 */
            // ----------
            /* cicili#Block866 */
            fprintf (stdout , "the result of easy 'Applicative for Maybe (*15)' is: Nothing\n");
          }
      });
    }
  });
}
