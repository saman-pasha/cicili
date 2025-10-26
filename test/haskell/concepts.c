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
  union { /* ciciliUnion212 */
    struct { /* ciciliStruct213 */
      Functor_Maybe_int_int_fmap_t __h_0_mem ;
    } Functor , _ ;
  } __h_data ;
} Functor_Maybe_int_int;
Functor_Maybe_int_int Functor_Maybe_int_int_ctor (Functor_Maybe_int_int_fmap_t fmap );
__attribute__((weak)) Functor_Maybe_int_int Default_Functor_Maybe_int_int (Functor_Maybe_int_int_fmap_t fmap ) {
  return Functor_Maybe_int_int_ctor (fmap );
}
void free_Functor_Maybe_int_int (Functor_Maybe_int_int * this );
Maybe_int Functor_Maybe_int_int_fmap (Functor_Maybe_int_int_a_b_t a_b , Maybe_int input );
Functor_Maybe_int_int get_Functor_Maybe_int_int ();
void free_Functor_Maybe_int_int (Functor_Maybe_int_int * this ) {
}
Functor_Maybe_int_int Functor_Maybe_int_int_ctor (Functor_Maybe_int_int_fmap_t fmap ) {
  return ((Functor_Maybe_int_int){ free_Functor_Maybe_int_int , __h___t , .__h_data._ = { fmap }});
}
Maybe_int Functor_Maybe_int_int_fmap (Functor_Maybe_int_int_a_b_t a_b , Maybe_int input ) {
  return ({ /* cicili#Let251 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block253 */
      ({ /* cicili#Let255 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_int (a_b (val )) : ({ /* cicili#Let265 */
            // ----------
            /* cicili#Block267 */
            Nothing_int ();
          }));
      });
    });
}
Functor_Maybe_int_int get_Functor_Maybe_int_int () {
  return Functor_Maybe_int_int_ctor (Functor_Maybe_int_int_fmap );
}
#ifndef __H_Maybe_Functor_Maybe_int_int_a_b_t
#define __H_Maybe_Functor_Maybe_int_int_a_b_t
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Functor_Maybe_int_int_a_b_t Maybe_Functor_Maybe_int_int_a_b_t ;
typedef void (*free_Maybe_Functor_Maybe_int_int_a_b_t_t) (Maybe_Functor_Maybe_int_int_a_b_t * this );
typedef struct Maybe_Functor_Maybe_int_int_a_b_t {
  free_Maybe_Functor_Maybe_int_int_a_b_t_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion287 */
    struct { /* ciciliStruct288 */
    } Nothing , _0 ;
    struct { /* ciciliStruct289 */
      Functor_Maybe_int_int_a_b_t __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_Functor_Maybe_int_int_a_b_t;
Maybe_Functor_Maybe_int_int_a_b_t Nothing_Functor_Maybe_int_int_a_b_t ();
Maybe_Functor_Maybe_int_int_a_b_t Just_Functor_Maybe_int_int_a_b_t (Functor_Maybe_int_int_a_b_t value );
__attribute__((weak)) Maybe_Functor_Maybe_int_int_a_b_t Default_Maybe_Functor_Maybe_int_int_a_b_t (Functor_Maybe_int_int_a_b_t value ) {
  return Just_Functor_Maybe_int_int_a_b_t (value );
}
void free_Maybe_Functor_Maybe_int_int_a_b_t (Maybe_Functor_Maybe_int_int_a_b_t * this );
#endif /* __H_Maybe_Functor_Maybe_int_int_a_b_t */ 
void free_Maybe_Functor_Maybe_int_int_a_b_t (Maybe_Functor_Maybe_int_int_a_b_t * this ) {
}
Maybe_Functor_Maybe_int_int_a_b_t Nothing_Functor_Maybe_int_int_a_b_t () {
  return ((Maybe_Functor_Maybe_int_int_a_b_t){ free_Maybe_Functor_Maybe_int_int_a_b_t , __h_Nothing_t });
}
Maybe_Functor_Maybe_int_int_a_b_t Just_Functor_Maybe_int_int_a_b_t (Functor_Maybe_int_int_a_b_t value ) {
  return ((Maybe_Functor_Maybe_int_int_a_b_t){ free_Maybe_Functor_Maybe_int_int_a_b_t , __h___t , .__h_data._ = { value }});
}
typedef Maybe_Functor_Maybe_int_int_a_b_t (*Applicative_Maybe_int_int_pure_t) (Functor_Maybe_int_int_a_b_t a_b );
typedef Maybe_int (*Applicative_Maybe_int_int_ap_t) (Maybe_Functor_Maybe_int_int_a_b_t f_a_b , Maybe_int input );
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
  union { /* ciciliUnion337 */
    struct { /* ciciliStruct338 */
      Applicative_Maybe_int_int_pure_t __h_0_mem ;
      Applicative_Maybe_int_int_ap_t __h_1_mem ;
    } Applicative , _ ;
  } __h_data ;
} Applicative_Maybe_int_int;
Applicative_Maybe_int_int __h_Applicative_Maybe_int_int_ctor_ctor (Applicative_Maybe_int_int_pure_t pure , Applicative_Maybe_int_int_ap_t ap );
void free_Applicative_Maybe_int_int (Applicative_Maybe_int_int * this );
Maybe_Functor_Maybe_int_int_a_b_t Applicative_Maybe_int_int_pure (Functor_Maybe_int_int_a_b_t a_b );
Maybe_int Applicative_Maybe_int_int_ap (Maybe_Functor_Maybe_int_int_a_b_t f_a_b , Maybe_int input );
Applicative_Maybe_int_int get_Applicative_Maybe_int_int ();
void free_Applicative_Maybe_int_int (Applicative_Maybe_int_int * this ) {
}
Applicative_Maybe_int_int __h_Applicative_Maybe_int_int_ctor_ctor (Applicative_Maybe_int_int_pure_t pure , Applicative_Maybe_int_int_ap_t ap ) {
  return ((Applicative_Maybe_int_int){ free_Applicative_Maybe_int_int , __h___t , .__h_data._ = { pure , ap }});
}
Maybe_Functor_Maybe_int_int_a_b_t Applicative_Maybe_int_int_pure (Functor_Maybe_int_int_a_b_t a_b ) {
  return Just_Functor_Maybe_int_int_a_b_t (a_b );
}
Maybe_int Applicative_Maybe_int_int_ap (Maybe_Functor_Maybe_int_int_a_b_t f_a_b , Maybe_int input ) {
  return ({ /* cicili#Let385 */
      __auto_type a_b  = (((f_a_b . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block387 */
      ({ /* cicili#Let389 */
        bool __h_case_result  = ((f_a_b . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Functor_Maybe_int_int_fmap (a_b , input ) : ({ /* cicili#Let394 */
            // ----------
            /* cicili#Block396 */
            Nothing_int ();
          }));
      });
    });
}
Applicative_Maybe_int_int get_Applicative_Maybe_int_int () {
  return __h_Applicative_Maybe_int_int_ctor_ctor (Applicative_Maybe_int_int_pure , Applicative_Maybe_int_int_ap );
}
static int __ciciliL_683 (int value ) {
  return (5 *  value  );
}
static Bool __ciciliL_704 (int value ) {
  return (((value  %  3 )) ? False () : True ());
}
static int __ciciliL_728 (int __h_value ) {
  return (5 *  __h_value  );
}
static Bool __ciciliL_738 (int __h_value ) {
  return (((__h_value  %  3 )) ? False () : True ());
}
static int __ciciliL_767 (int value ) {
  return (15 *  value  );
}
int main () {
  ({ /* cicili#Let413 */
    __auto_type rc0  __attribute__((__cleanup__(__h_free_class_router ))) = new_Rc_List_int_Pure (({ /* cicili#Let416 */
      __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    }));
    // ----------
    ({ /* cicili#Let422 */
      __auto_type rc1  __attribute__((__cleanup__(free_Rc_List_int ))) = clone_Rc_List_int (rc0 );
      // ----------
      fprintf (stdout , "list0:\n");
      { /* cicili#Let428 */
        __auto_type __h_data427  = deref_Rc_List_int (rc0 );
        __auto_type list0  = (((__h_data427 . __h_data ). _ ). __h_0_mem );
        // ----------
        /* cicili#Block430 */
        ({ /* cicili#Let432 */
          bool __h_case_result  = ((__h_data427 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            show_List_int (list0 );
        });
      }
      putchar ('\n');
      fprintf (stdout , "list1:\n");
      { /* cicili#Let439 */
        __auto_type __h_data438  = deref_Rc_List_int (rc1 );
        __auto_type list1  = (((__h_data438 . __h_data ). _ ). __h_0_mem );
        // ----------
        /* cicili#Block441 */
        ({ /* cicili#Let443 */
          bool __h_case_result  = ((__h_data438 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            show_List_int (list1 );
        });
      }
      putchar ('\n');
    });
  });
  { /* cicili#Let449 */
    __auto_type __h_data448  = divideByZero (34, 0);
    __auto_type e  = (((__h_data448 . __h_data ). Left ). __h_0_mem );
    // ----------
    /* cicili#Block451 */
    ({ /* cicili#Let453 */
      bool __h_case_result  = ((__h_data448 . __h_ctor ) ==  __h_Left_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn456 */
          printf ("error raised: ");
          show_String (e );
          putchar ('\n');
          free_String ((&e ));
        });
      else
        { /* cicili#Let461 */
          __auto_type a  = (((__h_data448 . __h_data ). Right ). __h_0_mem );
          // ----------
          /* cicili#Block463 */
          ({ /* cicili#Let465 */
            bool __h_case_result  = ((__h_data448 . __h_ctor ) ==  __h_Right_t  );
            // ----------
            if (__h_case_result )
              printf ("division result: %d\n", a );
          });
        }
    });
  }
  { /* cicili#Let471 */
    __auto_type __h_data470  = divideByZero (34, 2);
    __auto_type e  = (((__h_data470 . __h_data ). Left ). __h_0_mem );
    // ----------
    /* cicili#Block473 */
    ({ /* cicili#Let475 */
      bool __h_case_result  = ((__h_data470 . __h_ctor ) ==  __h_Left_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn478 */
          printf ("error raised: ");
          show_String (e );
          putchar ('\n');
          free_String ((&e ));
        });
      else
        { /* cicili#Let483 */
          __auto_type a  = (((__h_data470 . __h_data ). Right ). __h_0_mem );
          // ----------
          /* cicili#Block485 */
          ({ /* cicili#Let487 */
            bool __h_case_result  = ((__h_data470 . __h_ctor ) ==  __h_Right_t  );
            // ----------
            if (__h_case_result )
              printf ("division result: %d\n", a );
          });
        }
    });
  }
  ({ /* cicili#Let491 */
    __auto_type chrlst  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let493 */
      __auto_type tmp_obj  = new_String_Const ("Hello List!");
      // ----------
      ((void)(tmp_obj -> __h_free_class ));
      tmp_obj ;
    });
    __auto_type m0  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let498 */
      __auto_type tmp_obj  = nth_List_char (3, chrlst );
      // ----------
      ((void)(tmp_obj . __h_free_data ));
      tmp_obj ;
    });
    __auto_type m1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let501 */
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
    { /* cicili#Let506 */
      __auto_type ch  = (((m0 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block508 */
      ({ /* cicili#Let510 */
        bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "4th element is: %c\n", ch );
        else
          { /* cicili#Let517 */
            // ----------
            /* cicili#Block519 */
            ({ /* cicili#Let521 */
              bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "4th element is: Nothing\n");
            });
          }
      });
    }
    { /* cicili#Let527 */
      __auto_type ch  = (((m1 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block529 */
      ({ /* cicili#Let531 */
        bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "16th element is: %c\n", ch );
        else
          { /* cicili#Let538 */
            // ----------
            /* cicili#Block540 */
            ({ /* cicili#Let542 */
              bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "16th element is: Nothing\n");
            });
          }
      });
    }
  });
  fprintf (stdout , "Sum of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let550 */
      __auto_type __h_data549  = get_Monoid_Sum_int ();
      __auto_type mappend  = (((__h_data549 . __h_data ). _ ). __h_0_mem );
      __auto_type mempty  = (((__h_data549 . __h_data ). _ ). __h_1_mem );
      __auto_type mconcat  = (((__h_data549 . __h_data ). _ ). __h_2_mem );
      // ----------
      /* cicili#Block552 */
      ({ /* cicili#Let554 */
        bool __h_case_result  = ((__h_data549 . __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let557 */
            __auto_type l  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let559 */
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
          }) : ({ /* cicili#Let571 */
            // ----------
            /* cicili#Block573 */
            -1;
          }));
      });
    }));
  fprintf (stdout , "Product of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let579 */
      __auto_type __h_data578  = get_Monoid_Product_int ();
      __auto_type mappend  = (((__h_data578 . __h_data ). _ ). __h_0_mem );
      __auto_type mempty  = (((__h_data578 . __h_data ). _ ). __h_1_mem );
      __auto_type mconcat  = (((__h_data578 . __h_data ). _ ). __h_2_mem );
      // ----------
      /* cicili#Block581 */
      ({ /* cicili#Let583 */
        bool __h_case_result  = ((__h_data578 . __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let586 */
            __auto_type l  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let588 */
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
          }) : ({ /* cicili#Let600 */
            // ----------
            /* cicili#Block602 */
            -1;
          }));
      });
    }));
  ({ /* cicili#Let605 */
    __auto_type l1  = new_List_int_Pure (((const int[]){ 1, 3, 5}), 3);
    __auto_type l2  = new_List_int_Pure (((const int[]){ 2, 4, 6}), 3);
    __auto_type l3  = new_List_int_Pure (((const int[]){ 7, 8, 9}), 3);
    __auto_type l4  = new_List_List_int_Pure (((const List_int[]){ l1 , l2 , l3 }), 3);
    // ----------
    ({ /* cicili#Let620 */
      __auto_type result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let622 */
        __auto_type tmp_obj  = Monoid_List_int_mconcat (l4 );
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
  { /* cicili#Let631 */
    __auto_type __h_data630  = get_Semigroup_String_char ();
    __auto_type mappend  = (((__h_data630 . __h_data ). _ ). __h_0_mem );
    // ----------
    /* cicili#Block633 */
    ({ /* cicili#Let635 */
      bool __h_case_result  = ((__h_data630 . __h_ctor ) ==  __h___t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Let639 */
          __auto_type s1  = new_String_Const ("Hello ");
          __auto_type s2  = new_String_Const ("Cicili!");
          // ----------
          ({ /* cicili#Let648 */
            __auto_type result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let650 */
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
  ({ /* cicili#Let655 */
    __auto_type ftor_mul_5  = get_Functor_List_int_int ();
    __auto_type ftor_mod_3  = get_Functor_List_int_Bool ();
    // ----------
    ({ /* cicili#Let664 */
      __auto_type l1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let666 */
        __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4, 5, 6}), 6);
        // ----------
        ((void)(tmp_obj -> __h_free_class ));
        tmp_obj ;
      });
      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let672 */
        __auto_type tmp_obj  = ({ /* cicili#Let677 */
          __auto_type fmap  = (((ftor_mul_5 . __h_data ). _ ). __h_0_mem );
          // ----------
          /* cicili#Block679 */
          ({ /* cicili#Let681 */
            bool __h_case_result  = ((ftor_mul_5 . __h_ctor ) ==  __h___t  );
            // ----------
            ((__h_case_result ) ? fmap (__ciciliL_683 , l1 ) : ({ /* cicili#Let687 */
                // ----------
                /* cicili#Block689 */
                Empty_int ();
              }));
          });
        });
        // ----------
        ((void)(tmp_obj -> __h_free_class ));
        tmp_obj ;
      });
      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let693 */
        __auto_type tmp_obj  = ({ /* cicili#Let698 */
          __auto_type fmap  = (((ftor_mod_3 . __h_data ). _ ). __h_0_mem );
          // ----------
          /* cicili#Block700 */
          ({ /* cicili#Let702 */
            bool __h_case_result  = ((ftor_mod_3 . __h_ctor ) ==  __h___t  );
            // ----------
            ((__h_case_result ) ? fmap (__ciciliL_704 , r1 ) : ({ /* cicili#Let709 */
                // ----------
                /* cicili#Block711 */
                Empty_Bool ();
              }));
          });
        });
        // ----------
        ((void)(tmp_obj -> __h_free_class ));
        tmp_obj ;
      });
      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let715 */
        __auto_type tmp_obj  = ({ /* cicili#Let724 */
          __auto_type strict_in  __attribute__((__cleanup__(free_List_int ))) = Functor_List_int_int_fmap (__ciciliL_728 , l1 );
          // ----------
          Functor_List_int_Bool_fmap (__ciciliL_738 , strict_in );
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
      { /* cicili#Let752 */
        __auto_type __h_data751  = get_Monoid_All_Bool ();
        __auto_type mconcat  = (((__h_data751 . __h_data ). _ ). __h_2_mem );
        // ----------
        /* cicili#Block754 */
        ({ /* cicili#Let756 */
          bool __h_case_result  = ((__h_data751 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            ({ /* cicili#Progn759 */
              fprintf (stdout , "the result of 'All' monoid is: ");
              show_Bool (mconcat (r3 ));
              putchar ('\n');
            });
        });
      }
      fprintf (stdout , "the result of 'Any' monoid is: ");
      show_Bool (Monoid_Any_Bool_mconcat (r3 ));
      putchar ('\n');
    });
  });
  ({ /* cicili#Let766 */
    __auto_type mul_15  = __ciciliL_767 ;
    // ----------
    { /* cicili#Let773 */
      __auto_type __h_data772  = get_Applicative_Maybe_int_int ();
      __auto_type pure  = (((__h_data772 . __h_data ). _ ). __h_0_mem );
      __auto_type ap  = (((__h_data772 . __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block775 */
      ({ /* cicili#Let777 */
        bool __h_case_result  = ((__h_data772 . __h_ctor ) ==  __h___t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Let783 */
            __auto_type __h_data782  = ap (pure (mul_15 ), Just_int (12));
            __auto_type output  = (((__h_data782 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block785 */
            ({ /* cicili#Let787 */
              bool __h_case_result  = ((__h_data782 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "the result of 'Applicative for Maybe (*15) (Just 12)' is: Just %d\n", output );
              else
                { /* cicili#Let794 */
                  // ----------
                  /* cicili#Block796 */
                  fprintf (stdout , "the result of 'Applicative for Maybe (*15) (Just 12)' is: Nothing\n");
                }
            });
          }
      });
    }
    ({ /* cicili#Let800 */
      __auto_type wrapped  = Applicative_Maybe_int_int_pure (mul_15 );
      // ----------
      { /* cicili#Let807 */
        __auto_type __h_data806  = Applicative_Maybe_int_int_ap (wrapped , Just_int (12));
        __auto_type output  = (((__h_data806 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block813 */
        ({ /* cicili#Let815 */
          bool __h_case_result  = ((__h_data806 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          if (__h_case_result )
            fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) (Just 12)' is: Just %d\n", output );
          else
            { /* cicili#Let822 */
              // ----------
              /* cicili#Block824 */
              fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) (Just 12)' is: Nothing\n");
            }
        });
      }
      { /* cicili#Let830 */
        __auto_type __h_data829  = Applicative_Maybe_int_int_ap (wrapped , Nothing_int ());
        __auto_type output  = (((__h_data829 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block836 */
        ({ /* cicili#Let838 */
          bool __h_case_result  = ((__h_data829 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          if (__h_case_result )
            fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) Nothing' is: Just %d\n", output );
          else
            { /* cicili#Let845 */
              // ----------
              /* cicili#Block847 */
              fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) Nothing' is: Nothing\n");
            }
        });
      }
    });
  });
}
