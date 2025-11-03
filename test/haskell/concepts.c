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
typedef struct Either_String_int__H_Table {
  free_Either_String_int_t freeData ;
} Either_String_int__H_Table;
typedef struct Either_String_int {
  const Either_String_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion159 */
    struct { /* ciciliStruct160 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct161 */
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
const Either_String_int__H_Table * const get_Either_String_int__H_Table () {
  static const Either_String_int__H_Table table  = { free_Either_String_int };
  return (&table );
}
Either_String_int Left_String_int (String error ) {
  return ((Either_String_int){ get_Either_String_int__H_Table (), __h_Left_t , .__h_data.Left = { error }});
}
Either_String_int Right_String_int (int value ) {
  return ((Either_String_int){ get_Either_String_int__H_Table (), __h___t , .__h_data._ = { value }});
}
Either_String_int divideByZero (int x , int y ) {
  if (y  ==  0 )
    return Left_String_int (new_String_Const ("zero division"));
  else
    return Right_String_int ((x  /  y  ));
}
#ifndef __H_Maybe_Functor_List_int_int_a_b_t
#define __H_Maybe_Functor_List_int_int_a_b_t
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Functor_List_int_int_a_b_t Maybe_Functor_List_int_int_a_b_t ;
typedef void (*free_Maybe_Functor_List_int_int_a_b_t_t) (Maybe_Functor_List_int_int_a_b_t * this );
typedef struct Maybe_Functor_List_int_int_a_b_t__H_Table {
  free_Maybe_Functor_List_int_int_a_b_t_t freeData ;
} Maybe_Functor_List_int_int_a_b_t__H_Table;
typedef struct Maybe_Functor_List_int_int_a_b_t {
  const Maybe_Functor_List_int_int_a_b_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion210 */
    struct { /* ciciliStruct211 */
    } Nothing , _0 ;
    struct { /* ciciliStruct212 */
      Functor_List_int_int_a_b_t __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_Functor_List_int_int_a_b_t;
Maybe_Functor_List_int_int_a_b_t Nothing_Functor_List_int_int_a_b_t ();
Maybe_Functor_List_int_int_a_b_t Just_Functor_List_int_int_a_b_t (Functor_List_int_int_a_b_t value );
__attribute__((weak)) Maybe_Functor_List_int_int_a_b_t Default_Maybe_Functor_List_int_int_a_b_t (Functor_List_int_int_a_b_t value ) {
  return Just_Functor_List_int_int_a_b_t (value );
}
void free_Maybe_Functor_List_int_int_a_b_t (Maybe_Functor_List_int_int_a_b_t * this );
#endif /* __H_Maybe_Functor_List_int_int_a_b_t */ 
void free_Maybe_Functor_List_int_int_a_b_t (Maybe_Functor_List_int_int_a_b_t * this ) {
}
const Maybe_Functor_List_int_int_a_b_t__H_Table * const get_Maybe_Functor_List_int_int_a_b_t__H_Table () {
  static const Maybe_Functor_List_int_int_a_b_t__H_Table table  = { free_Maybe_Functor_List_int_int_a_b_t };
  return (&table );
}
Maybe_Functor_List_int_int_a_b_t Nothing_Functor_List_int_int_a_b_t () {
  return ((Maybe_Functor_List_int_int_a_b_t){ get_Maybe_Functor_List_int_int_a_b_t__H_Table (), __h_Nothing_t });
}
Maybe_Functor_List_int_int_a_b_t Just_Functor_List_int_int_a_b_t (Functor_List_int_int_a_b_t value ) {
  return ((Maybe_Functor_List_int_int_a_b_t){ get_Maybe_Functor_List_int_int_a_b_t__H_Table (), __h___t , .__h_data._ = { value }});
}
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_Functor_List_int_int_a_b_t_class_t __h_List_Functor_List_int_int_a_b_t_class_t ;
typedef __h_List_Functor_List_int_int_a_b_t_class_t * List_Functor_List_int_int_a_b_t ;
typedef void (*free_List_Functor_List_int_int_a_b_t_t) (List_Functor_List_int_int_a_b_t * this_ptr );
typedef struct List_Functor_List_int_int_a_b_t__H_Table {
  free_List_Functor_List_int_int_a_b_t_t freeClass ;
  void (*show) (List_Functor_List_int_int_a_b_t list );
  List_Functor_List_int_int_a_b_t (*append) (List_Functor_List_int_int_a_b_t llist , List_Functor_List_int_int_a_b_t rlist );
  List_Functor_List_int_int_a_b_t (*push) (Functor_List_int_int_a_b_t item , List_Functor_List_int_int_a_b_t list );
  List_Functor_List_int_int_a_b_t (*last) (List_Functor_List_int_int_a_b_t list );
  List_Functor_List_int_int_a_b_t (*take) (int len , List_Functor_List_int_int_a_b_t list );
  int (*hasLen) (List_Functor_List_int_int_a_b_t list , int desired );
  int (*len) (List_Functor_List_int_int_a_b_t list );
  List_Functor_List_int_int_a_b_t (*tail) (List_Functor_List_int_int_a_b_t list );
  List_Functor_List_int_int_a_b_t (*drop) (int index , List_Functor_List_int_int_a_b_t list );
  Maybe_Functor_List_int_int_a_b_t (*head) (List_Functor_List_int_int_a_b_t list );
  Maybe_Functor_List_int_int_a_b_t (*nth) (int index , List_Functor_List_int_int_a_b_t list );
  List_Functor_List_int_int_a_b_t (*next) (List_Functor_List_int_int_a_b_t list );
} List_Functor_List_int_int_a_b_t__H_Table;
typedef struct __h_List_Functor_List_int_int_a_b_t_class_t {
  const List_Functor_List_int_int_a_b_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion266 */
    struct { /* ciciliStruct267 */
    } Empty , _0 ;
    struct { /* ciciliStruct268 */
      Functor_List_int_int_a_b_t __h_0_mem ;
      List_Functor_List_int_int_a_b_t __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_Functor_List_int_int_a_b_t_class_t;
List_Functor_List_int_int_a_b_t Empty_Functor_List_int_int_a_b_t ();
List_Functor_List_int_int_a_b_t Cons_Functor_List_int_int_a_b_t (Functor_List_int_int_a_b_t head , List_Functor_List_int_int_a_b_t tail );
__attribute__((weak)) List_Functor_List_int_int_a_b_t Default_List_Functor_List_int_int_a_b_t (Functor_List_int_int_a_b_t head , List_Functor_List_int_int_a_b_t tail ) {
  return Cons_Functor_List_int_int_a_b_t (head , tail );
}
void show_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t list );
List_Functor_List_int_int_a_b_t append_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t llist , List_Functor_List_int_int_a_b_t rlist );
List_Functor_List_int_int_a_b_t push_List_Functor_List_int_int_a_b_t (Functor_List_int_int_a_b_t item , List_Functor_List_int_int_a_b_t list );
List_Functor_List_int_int_a_b_t last_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t list );
List_Functor_List_int_int_a_b_t take_List_Functor_List_int_int_a_b_t (int len , List_Functor_List_int_int_a_b_t list );
int hasLen_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t list , int desired );
int len_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t list );
List_Functor_List_int_int_a_b_t tail_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t list );
List_Functor_List_int_int_a_b_t drop_List_Functor_List_int_int_a_b_t (int index , List_Functor_List_int_int_a_b_t list );
Maybe_Functor_List_int_int_a_b_t head_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t list );
Maybe_Functor_List_int_int_a_b_t nth_List_Functor_List_int_int_a_b_t (int index , List_Functor_List_int_int_a_b_t list );
List_Functor_List_int_int_a_b_t next_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t list );
void free_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t * this_ptr );
List_Functor_List_int_int_a_b_t new_List_Functor_List_int_int_a_b_t_Pure (const Functor_List_int_int_a_b_t * buf , int len );
List_Functor_List_int_int_a_b_t new_List_Functor_List_int_int_a_b_t_Wrap (const Functor_List_int_int_a_b_t item );
void show_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t list ) {
  { /* cicili#Let330 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block332 */
    ({ /* cicili#Let334 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block337 */
          { /* cicili#Let341 */
            // ----------
            /* cicili#Block343 */
            ({ /* cicili#Let345 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block348 */
                  printf ("%p", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let356 */
                  // ----------
                  /* cicili#Block358 */
                  printf ("%p", head );
                }
            });
          }
          show_List_Functor_List_int_int_a_b_t (tail );
        }
    });
  }
}
List_Functor_List_int_int_a_b_t append_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t llist , List_Functor_List_int_int_a_b_t rlist ) {
  return ({ /* cicili#Let367 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let372 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block374 */
        ({ /* cicili#Let376 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn378 */
              free_List_Functor_List_int_int_a_b_t ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let383 */
              // ----------
              /* cicili#Block385 */
              rlist ;
            }));
        });
      });
    });
}
List_Functor_List_int_int_a_b_t push_List_Functor_List_int_int_a_b_t (Functor_List_int_int_a_b_t item , List_Functor_List_int_int_a_b_t list ) {
  return Cons_Functor_List_int_int_a_b_t (item , list );
}
List_Functor_List_int_int_a_b_t last_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t list ) {
  return ({ /* cicili#Let394 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block396 */
      ({ /* cicili#Let398 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let402 */
            // ----------
            /* cicili#Block404 */
            ({ /* cicili#Let406 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let410 */
                  // ----------
                  /* cicili#Block412 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let417 */
            // ----------
            /* cicili#Block419 */
            list ;
          }));
      });
    });
}
List_Functor_List_int_int_a_b_t take_List_Functor_List_int_int_a_b_t (int len , List_Functor_List_int_int_a_b_t list ) {
  return ({ /* cicili#Let425 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block427 */
      ({ /* cicili#Let429 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let435 */
            // ----------
            /* cicili#Block437 */
            Empty_Functor_List_int_int_a_b_t ();
          }));
      });
    });
}
int hasLen_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t list , int desired ) {
  return ({ /* cicili#Let444 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block446 */
      ({ /* cicili#Let448 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let454 */
            // ----------
            /* cicili#Block456 */
            0;
          }));
      });
    });
}
int len_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t list ) {
  return ({ /* cicili#Let462 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block464 */
      ({ /* cicili#Let466 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let471 */
            // ----------
            /* cicili#Block473 */
            0;
          }));
      });
    });
}
List_Functor_List_int_int_a_b_t tail_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_Functor_List_int_int_a_b_t drop_List_Functor_List_int_int_a_b_t (int index , List_Functor_List_int_int_a_b_t list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let483 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block485 */
        ({ /* cicili#Let487 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let492 */
              // ----------
              /* cicili#Block494 */
              Empty_Functor_List_int_int_a_b_t ();
            }));
        });
      }));
}
Maybe_Functor_List_int_int_a_b_t head_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_Functor_List_int_int_a_b_t nth_List_Functor_List_int_int_a_b_t (int index , List_Functor_List_int_int_a_b_t list ) {
  return ({ /* cicili#Let506 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block508 */
      ({ /* cicili#Let510 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_Functor_List_int_int_a_b_t (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let517 */
            // ----------
            /* cicili#Block519 */
            Nothing_Functor_List_int_int_a_b_t ();
          }));
      });
    });
}
List_Functor_List_int_int_a_b_t next_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t list ) {
  return ({ /* cicili#Let526 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block528 */
      ({ /* cicili#Let530 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let534 */
            // ----------
            /* cicili#Block536 */
            Empty_Functor_List_int_int_a_b_t ();
          }));
      });
    });
}
void free_List_Functor_List_int_int_a_b_t (List_Functor_List_int_int_a_b_t * this_ptr ) {
  { /* cicili#Let541 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let545 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block547 */
      ({ /* cicili#Let549 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block552 */
            printf ("destructuring List: %p, ", this );
            printf ("%p", head );
            putchar ('\n');
            free_List_Functor_List_int_int_a_b_t ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let561 */
            // ----------
            /* cicili#Block563 */
            free (this );
          }
      });
    }
  }
}
const List_Functor_List_int_int_a_b_t__H_Table * const get_List_Functor_List_int_int_a_b_t__H_Table () {
  static const List_Functor_List_int_int_a_b_t__H_Table table  = { free_List_Functor_List_int_int_a_b_t , show_List_Functor_List_int_int_a_b_t , append_List_Functor_List_int_int_a_b_t , push_List_Functor_List_int_int_a_b_t , last_List_Functor_List_int_int_a_b_t , take_List_Functor_List_int_int_a_b_t , hasLen_List_Functor_List_int_int_a_b_t , len_List_Functor_List_int_int_a_b_t , tail_List_Functor_List_int_int_a_b_t , drop_List_Functor_List_int_int_a_b_t , head_List_Functor_List_int_int_a_b_t , nth_List_Functor_List_int_int_a_b_t , next_List_Functor_List_int_int_a_b_t };
  return (&table );
}
List_Functor_List_int_int_a_b_t Empty_Functor_List_int_int_a_b_t () {
  { /* cicili#Let572 */
    List_Functor_List_int_int_a_b_t instance  = malloc (sizeof(__h_List_Functor_List_int_int_a_b_t_class_t));
    // ----------
    (*instance ) = ((__h_List_Functor_List_int_int_a_b_t_class_t){ get_List_Functor_List_int_int_a_b_t__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_Functor_List_int_int_a_b_t Cons_Functor_List_int_int_a_b_t (Functor_List_int_int_a_b_t head , List_Functor_List_int_int_a_b_t tail ) {
  { /* cicili#Let577 */
    List_Functor_List_int_int_a_b_t instance  = malloc (sizeof(__h_List_Functor_List_int_int_a_b_t_class_t));
    // ----------
    (*instance ) = ((__h_List_Functor_List_int_int_a_b_t_class_t){ get_List_Functor_List_int_int_a_b_t__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_Functor_List_int_int_a_b_t new_List_Functor_List_int_int_a_b_t_Pure (const Functor_List_int_int_a_b_t * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_Functor_List_int_int_a_b_t ();
  else
    { /* cicili#Let586 */
      Functor_List_int_int_a_b_t item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_Functor_List_int_int_a_b_t ();
      else
        return Cons_Functor_List_int_int_a_b_t (item , new_List_Functor_List_int_int_a_b_t_Pure ((++buf ), (--len )));
    }
}
List_Functor_List_int_int_a_b_t new_List_Functor_List_int_int_a_b_t_Wrap (const Functor_List_int_int_a_b_t item ) {
  return Cons_Functor_List_int_int_a_b_t (item , Empty_Functor_List_int_int_a_b_t ());
}
typedef List_Functor_List_int_int_a_b_t (*Applicative_List_int_int_pure_t) (Functor_List_int_int_a_b_t a_b );
typedef List_int (*Applicative_List_int_int_ap_t) (List_Functor_List_int_int_a_b_t f_a_b , List_int input );
#ifndef __H___h_Applicative_ctor_t__
#define __H___h_Applicative_ctor_t__
typedef enum __h_Applicative_ctor_t {
  __h_Applicative_t = 0
} __h_Applicative_ctor_t;
#endif /* __H___h_Applicative_ctor_t__ */ 
typedef struct Applicative_List_int_int Applicative_List_int_int ;
typedef void (*free_Applicative_List_int_int_t) (Applicative_List_int_int * this );
typedef struct Applicative_List_int_int__H_Table {
  free_Applicative_List_int_int_t freeData ;
} Applicative_List_int_int__H_Table;
typedef struct Applicative_List_int_int {
  const Applicative_List_int_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion627 */
    struct { /* ciciliStruct628 */
      Applicative_List_int_int_pure_t __h_0_mem ;
      Applicative_List_int_int_ap_t __h_1_mem ;
    } Applicative , _ ;
  } __h_data ;
} Applicative_List_int_int;
Applicative_List_int_int Applicative_List_int_int_ctor (Applicative_List_int_int_pure_t pure , Applicative_List_int_int_ap_t ap );
__attribute__((weak)) Applicative_List_int_int Default_Applicative_List_int_int (Applicative_List_int_int_pure_t pure , Applicative_List_int_int_ap_t ap ) {
  return Applicative_List_int_int_ctor (pure , ap );
}
void free_Applicative_List_int_int (Applicative_List_int_int * this );
List_Functor_List_int_int_a_b_t pure_Applicative_List_int_int (Functor_List_int_int_a_b_t a_b );
List_int ap_Applicative_List_int_int (List_Functor_List_int_int_a_b_t f_a_b , List_int input );
Applicative_List_int_int get_Applicative_List_int_int ();
void free_Applicative_List_int_int (Applicative_List_int_int * this ) {
}
const Applicative_List_int_int__H_Table * const get_Applicative_List_int_int__H_Table () {
  static const Applicative_List_int_int__H_Table table  = { free_Applicative_List_int_int };
  return (&table );
}
Applicative_List_int_int Applicative_List_int_int_ctor (Applicative_List_int_int_pure_t pure , Applicative_List_int_int_ap_t ap ) {
  return ((Applicative_List_int_int){ get_Applicative_List_int_int__H_Table (), __h___t , .__h_data._ = { pure , ap }});
}
List_Functor_List_int_int_a_b_t pure_Applicative_List_int_int (Functor_List_int_int_a_b_t a_b ) {
  return new_List_Functor_List_int_int_a_b_t_Wrap (a_b );
}
List_int ap_Applicative_List_int_int (List_Functor_List_int_int_a_b_t f_a_b , List_int input ) {
  return ({ /* cicili#Let688 */
      __auto_type a_b  = (((f_a_b -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((f_a_b -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block690 */
      ({ /* cicili#Let692 */
        bool __h_case_result  = ((f_a_b -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? mconcat_List_int (Cons_List_int (fmap_Functor_List_int_int (a_b , input ), new_List_List_int_Wrap (ap_Applicative_List_int_int (tail , input )))) : ({ /* cicili#Let701 */
            // ----------
            /* cicili#Block703 */
            Empty_int ();
          }));
      });
    });
}
Applicative_List_int_int get_Applicative_List_int_int () {
  return Applicative_List_int_int_ctor (pure_Applicative_List_int_int , ap_Applicative_List_int_int );
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
typedef struct Functor_Maybe_int_int__H_Table {
  free_Functor_Maybe_int_int_t freeData ;
  Maybe_int (*fmap) (Functor_Maybe_int_int_a_b_t a_b , Maybe_int input );
} Functor_Maybe_int_int__H_Table;
typedef struct Functor_Maybe_int_int {
  const Functor_Maybe_int_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion740 */
    struct { /* ciciliStruct741 */
    } Functor , _ ;
  } __h_data ;
} Functor_Maybe_int_int;
Functor_Maybe_int_int Functor_Maybe_int_int_ctor ();
__attribute__((weak)) Functor_Maybe_int_int Default_Functor_Maybe_int_int () {
  return Functor_Maybe_int_int_ctor ();
}
Maybe_int fmap_Functor_Maybe_int_int (Functor_Maybe_int_int_a_b_t a_b , Maybe_int input );
void free_Functor_Maybe_int_int (Functor_Maybe_int_int * this );
Functor_Maybe_int_int get_Functor_Maybe_int_int ();
Maybe_int fmap_Functor_Maybe_int_int (Functor_Maybe_int_int_a_b_t a_b , Maybe_int input ) {
  return ({ /* cicili#Let771 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block773 */
      ({ /* cicili#Let775 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_int (a_b (val )) : ({ /* cicili#Let785 */
            // ----------
            /* cicili#Block787 */
            Nothing_int ();
          }));
      });
    });
}
void free_Functor_Maybe_int_int (Functor_Maybe_int_int * this ) {
}
const Functor_Maybe_int_int__H_Table * const get_Functor_Maybe_int_int__H_Table () {
  static const Functor_Maybe_int_int__H_Table table  = { free_Functor_Maybe_int_int , fmap_Functor_Maybe_int_int };
  return (&table );
}
Functor_Maybe_int_int Functor_Maybe_int_int_ctor () {
  return ((Functor_Maybe_int_int){ get_Functor_Maybe_int_int__H_Table (), __h___t });
}
Functor_Maybe_int_int get_Functor_Maybe_int_int () {
  return Functor_Maybe_int_int_ctor ();
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
typedef struct Maybe_Functor_Maybe_int_int_a_b_t__H_Table {
  free_Maybe_Functor_Maybe_int_int_a_b_t_t freeData ;
} Maybe_Functor_Maybe_int_int_a_b_t__H_Table;
typedef struct Maybe_Functor_Maybe_int_int_a_b_t {
  const Maybe_Functor_Maybe_int_int_a_b_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion818 */
    struct { /* ciciliStruct819 */
    } Nothing , _0 ;
    struct { /* ciciliStruct820 */
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
const Maybe_Functor_Maybe_int_int_a_b_t__H_Table * const get_Maybe_Functor_Maybe_int_int_a_b_t__H_Table () {
  static const Maybe_Functor_Maybe_int_int_a_b_t__H_Table table  = { free_Maybe_Functor_Maybe_int_int_a_b_t };
  return (&table );
}
Maybe_Functor_Maybe_int_int_a_b_t Nothing_Functor_Maybe_int_int_a_b_t () {
  return ((Maybe_Functor_Maybe_int_int_a_b_t){ get_Maybe_Functor_Maybe_int_int_a_b_t__H_Table (), __h_Nothing_t });
}
Maybe_Functor_Maybe_int_int_a_b_t Just_Functor_Maybe_int_int_a_b_t (Functor_Maybe_int_int_a_b_t value ) {
  return ((Maybe_Functor_Maybe_int_int_a_b_t){ get_Maybe_Functor_Maybe_int_int_a_b_t__H_Table (), __h___t , .__h_data._ = { value }});
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
typedef struct Applicative_Maybe_int_int__H_Table {
  free_Applicative_Maybe_int_int_t freeData ;
} Applicative_Maybe_int_int__H_Table;
typedef struct Applicative_Maybe_int_int {
  const Applicative_Maybe_int_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion875 */
    struct { /* ciciliStruct876 */
      Applicative_Maybe_int_int_pure_t __h_0_mem ;
      Applicative_Maybe_int_int_ap_t __h_1_mem ;
    } Applicative , _ ;
  } __h_data ;
} Applicative_Maybe_int_int;
Applicative_Maybe_int_int Applicative_Maybe_int_int_ctor (Applicative_Maybe_int_int_pure_t pure , Applicative_Maybe_int_int_ap_t ap );
__attribute__((weak)) Applicative_Maybe_int_int Default_Applicative_Maybe_int_int (Applicative_Maybe_int_int_pure_t pure , Applicative_Maybe_int_int_ap_t ap ) {
  return Applicative_Maybe_int_int_ctor (pure , ap );
}
void free_Applicative_Maybe_int_int (Applicative_Maybe_int_int * this );
Maybe_Functor_Maybe_int_int_a_b_t pure_Applicative_Maybe_int_int (Functor_Maybe_int_int_a_b_t a_b );
Maybe_int ap_Applicative_Maybe_int_int (Maybe_Functor_Maybe_int_int_a_b_t f_a_b , Maybe_int input );
Applicative_Maybe_int_int get_Applicative_Maybe_int_int ();
void free_Applicative_Maybe_int_int (Applicative_Maybe_int_int * this ) {
}
const Applicative_Maybe_int_int__H_Table * const get_Applicative_Maybe_int_int__H_Table () {
  static const Applicative_Maybe_int_int__H_Table table  = { free_Applicative_Maybe_int_int };
  return (&table );
}
Applicative_Maybe_int_int Applicative_Maybe_int_int_ctor (Applicative_Maybe_int_int_pure_t pure , Applicative_Maybe_int_int_ap_t ap ) {
  return ((Applicative_Maybe_int_int){ get_Applicative_Maybe_int_int__H_Table (), __h___t , .__h_data._ = { pure , ap }});
}
Maybe_Functor_Maybe_int_int_a_b_t pure_Applicative_Maybe_int_int (Functor_Maybe_int_int_a_b_t a_b ) {
  return Just_Functor_Maybe_int_int_a_b_t (a_b );
}
Maybe_int ap_Applicative_Maybe_int_int (Maybe_Functor_Maybe_int_int_a_b_t f_a_b , Maybe_int input ) {
  return ({ /* cicili#Let933 */
      __auto_type a_b  = (((f_a_b . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block935 */
      ({ /* cicili#Let937 */
        bool __h_case_result  = ((f_a_b . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? fmap_Functor_Maybe_int_int (a_b , input ) : ({ /* cicili#Let942 */
            // ----------
            /* cicili#Block944 */
            Nothing_int ();
          }));
      });
    });
}
Applicative_Maybe_int_int get_Applicative_Maybe_int_int () {
  return Applicative_Maybe_int_int_ctor (pure_Applicative_Maybe_int_int , ap_Applicative_Maybe_int_int );
}
static int __ciciliL_1220 (int value ) {
  return (5 *  value  );
}
static Bool __ciciliL_1229 (int value ) {
  return (((value  %  3 )) ? False () : True ());
}
static int __ciciliL_1247 (int __h_value ) {
  return (5 *  __h_value  );
}
static Bool __ciciliL_1257 (int __h_value ) {
  return (((__h_value  %  3 )) ? False () : True ());
}
static int __ciciliL_1284 (int value ) {
  return (15 *  value  );
}
static int __ciciliL_1377 (int value ) {
  return (3 *  value  );
}
static int __ciciliL_1379 (int value ) {
  return (4 +  value  );
}
int main () {
  ({ /* cicili#Let958 */
    __auto_type rc0  __attribute__((__cleanup__(__h_free_class_router ))) = new_Rc_List_int_Pure (({ /* cicili#Let961 */
      __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    }));
    // ----------
    ({ /* cicili#Let967 */
      __auto_type rc1  __attribute__((__cleanup__(free_Rc_List_int ))) = clone_Rc_List_int (rc0 );
      // ----------
      fprintf (stdout , "list0:\n");
      { /* cicili#Let973 */
        __auto_type __h_data972  = deref_Rc_List_int (rc0 );
        __auto_type list0  = (((__h_data972 . __h_data ). _ ). __h_0_mem );
        // ----------
        /* cicili#Block975 */
        ({ /* cicili#Let977 */
          bool __h_case_result  = ((__h_data972 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            show_List_int (list0 );
        });
      }
      putchar ('\n');
      fprintf (stdout , "list1:\n");
      { /* cicili#Let984 */
        __auto_type __h_data983  = deref_Rc_List_int (rc1 );
        __auto_type list1  = (((__h_data983 . __h_data ). _ ). __h_0_mem );
        // ----------
        /* cicili#Block986 */
        ({ /* cicili#Let988 */
          bool __h_case_result  = ((__h_data983 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            show_List_int (list1 );
        });
      }
      putchar ('\n');
    });
  });
  { /* cicili#Let994 */
    __auto_type __h_data993  = divideByZero (34, 0);
    __auto_type e  = (((__h_data993 . __h_data ). Left ). __h_0_mem );
    // ----------
    /* cicili#Block996 */
    ({ /* cicili#Let998 */
      bool __h_case_result  = ((__h_data993 . __h_ctor ) ==  __h_Left_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn1001 */
          printf ("error raised: ");
          show_String (e );
          putchar ('\n');
          free_String ((&e ));
        });
      else
        { /* cicili#Let1006 */
          __auto_type a  = (((__h_data993 . __h_data ). Right ). __h_0_mem );
          // ----------
          /* cicili#Block1008 */
          ({ /* cicili#Let1010 */
            bool __h_case_result  = ((__h_data993 . __h_ctor ) ==  __h_Right_t  );
            // ----------
            if (__h_case_result )
              printf ("division result: %d\n", a );
          });
        }
    });
  }
  { /* cicili#Let1016 */
    __auto_type __h_data1015  = divideByZero (34, 2);
    __auto_type e  = (((__h_data1015 . __h_data ). Left ). __h_0_mem );
    // ----------
    /* cicili#Block1018 */
    ({ /* cicili#Let1020 */
      bool __h_case_result  = ((__h_data1015 . __h_ctor ) ==  __h_Left_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn1023 */
          printf ("error raised: ");
          show_String (e );
          putchar ('\n');
          free_String ((&e ));
        });
      else
        { /* cicili#Let1028 */
          __auto_type a  = (((__h_data1015 . __h_data ). Right ). __h_0_mem );
          // ----------
          /* cicili#Block1030 */
          ({ /* cicili#Let1032 */
            bool __h_case_result  = ((__h_data1015 . __h_ctor ) ==  __h_Right_t  );
            // ----------
            if (__h_case_result )
              printf ("division result: %d\n", a );
          });
        }
    });
  }
  ({ /* cicili#Let1036 */
    __auto_type chrlst  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1038 */
      __auto_type tmp_obj  = new_String_Const ("Hello List!");
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type m0  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1043 */
      __auto_type tmp_obj  = nth_List_char (3, chrlst );
      // ----------
      ((void)((tmp_obj . __h_table )-> freeData ));
      tmp_obj ;
    });
    __auto_type m1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1046 */
      __auto_type tmp_obj  = nth_List_char (15, chrlst );
      // ----------
      ((void)((tmp_obj . __h_table )-> freeData ));
      tmp_obj ;
    });
    // ----------
    show_String (chrlst );
    putchar ('\n');
    reduce_List_char (chrlst );
    putchar ('\n');
    { /* cicili#Let1051 */
      __auto_type ch  = (((m0 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1053 */
      ({ /* cicili#Let1055 */
        bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "4th element is: %c\n", ch );
        else
          { /* cicili#Let1062 */
            // ----------
            /* cicili#Block1064 */
            ({ /* cicili#Let1066 */
              bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "4th element is: Nothing\n");
            });
          }
      });
    }
    { /* cicili#Let1072 */
      __auto_type ch  = (((m1 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1074 */
      ({ /* cicili#Let1076 */
        bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "16th element is: %c\n", ch );
        else
          { /* cicili#Let1083 */
            // ----------
            /* cicili#Block1085 */
            ({ /* cicili#Let1087 */
              bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "16th element is: Nothing\n");
            });
          }
      });
    }
  });
  fprintf (stdout , "Sum of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let1095 */
      __auto_type __h_data1094  = get_Monoid_Sum_int ();
      __auto_type mappend  = (((__h_data1094 . __h_data ). _ ). __h_0_mem );
      __auto_type mempty  = (((__h_data1094 . __h_data ). _ ). __h_1_mem );
      __auto_type mconcat  = (((__h_data1094 . __h_data ). _ ). __h_2_mem );
      // ----------
      /* cicili#Block1097 */
      ({ /* cicili#Let1099 */
        bool __h_case_result  = ((__h_data1094 . __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let1102 */
            __auto_type l  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1104 */
              __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 3, 5, 7}), 4);
              // ----------
              ((void)(tmp_obj -> __h_table -> freeClass ));
              tmp_obj ;
            });
            // ----------
            fprintf (stdout , "Sum mempty is: %d\n", mempty );
            fprintf (stdout , "left identity (%d 12) is: %d\n", mempty , mappend (mempty , 12));
            fprintf (stdout , "right identity (12 %d) is: %d\n", mempty , mappend (12, mempty ));
            fprintf (stdout , "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n", mappend (5, mappend (7, 12)), mappend (mappend (5, 7), 12));
            mconcat (l );
          }) : ({ /* cicili#Let1116 */
            // ----------
            /* cicili#Block1118 */
            -1;
          }));
      });
    }));
  fprintf (stdout , "Product of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let1124 */
      __auto_type __h_data1123  = get_Monoid_Product_int ();
      __auto_type mappend  = (((__h_data1123 . __h_data ). _ ). __h_0_mem );
      __auto_type mempty  = (((__h_data1123 . __h_data ). _ ). __h_1_mem );
      __auto_type mconcat  = (((__h_data1123 . __h_data ). _ ). __h_2_mem );
      // ----------
      /* cicili#Block1126 */
      ({ /* cicili#Let1128 */
        bool __h_case_result  = ((__h_data1123 . __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let1131 */
            __auto_type l  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1133 */
              __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 3, 5, 7}), 4);
              // ----------
              ((void)(tmp_obj -> __h_table -> freeClass ));
              tmp_obj ;
            });
            // ----------
            fprintf (stdout , "Product mempty is: %d\n", mempty );
            fprintf (stdout , "left identity (%d 12) is: %d\n", mempty , mappend (mempty , 12));
            fprintf (stdout , "right identity (12 %d) is: %d\n", mempty , mappend (12, mempty ));
            fprintf (stdout , "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n", mappend (5, mappend (7, 12)), mappend (mappend (5, 7), 12));
            mconcat (l );
          }) : ({ /* cicili#Let1145 */
            // ----------
            /* cicili#Block1147 */
            -1;
          }));
      });
    }));
  ({ /* cicili#Let1150 */
    __auto_type l1  = new_List_int_Pure (((const int[]){ 1, 3, 5}), 3);
    __auto_type l2  = new_List_int_Pure (((const int[]){ 2, 4, 6}), 3);
    __auto_type l3  = new_List_int_Pure (((const int[]){ 7, 8, 9}), 3);
    __auto_type l4  = new_List_List_int_Pure (((const List_int[]){ l1 , l2 , l3 }), 3);
    // ----------
    ({ /* cicili#Let1165 */
      __auto_type result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1167 */
        __auto_type tmp_obj  = mconcat_List_int (l4 );
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      // ----------
      fprintf (stdout , "Concat of Lists (mconcat Monoid) of '{ 1 3 5 } and '{ 2 4 6 } and '{ 7 8 9 } is:\n");
      show_List_int (result );
      putchar ('\n');
    });
  });
  { /* cicili#Let1174 */
    __auto_type __h_data1173  = get_Semigroup_String_char ();
    __auto_type mappend  = (((__h_data1173 . __h_data ). _ ). __h_0_mem );
    // ----------
    /* cicili#Block1176 */
    ({ /* cicili#Let1178 */
      bool __h_case_result  = ((__h_data1173 . __h_ctor ) ==  __h___t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Let1182 */
          __auto_type s1  = new_String_Const ("Hello ");
          __auto_type s2  = new_String_Const ("Cicili!");
          // ----------
          ({ /* cicili#Let1191 */
            __auto_type result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1193 */
              __auto_type tmp_obj  = mappend (s1 , s2 );
              // ----------
              ((void)(tmp_obj -> __h_table -> freeClass ));
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
  ({ /* cicili#Let1198 */
    __auto_type ftor_mul_5  = get_Functor_List_int_int ();
    __auto_type ftor_mod_3  = get_Functor_List_int_Bool ();
    // ----------
    ({ /* cicili#Let1207 */
      __auto_type l1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1209 */
        __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4, 5, 6}), 6);
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1215 */
        __auto_type tmp_obj  = ((&ftor_mul_5 )-> __h_table -> fmap )(__ciciliL_1220 , l1 );
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1224 */
        __auto_type tmp_obj  = ((&ftor_mod_3 )-> __h_table -> fmap )(__ciciliL_1229 , r1 );
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1234 */
        __auto_type tmp_obj  = ({ /* cicili#Let1243 */
          __auto_type strict_in  __attribute__((__cleanup__(free_List_int ))) = fmap_Functor_List_int_int (__ciciliL_1247 , l1 );
          // ----------
          fmap_Functor_List_int_Bool (__ciciliL_1257 , strict_in );
        });
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
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
      { /* cicili#Let1271 */
        __auto_type __h_data1270  = get_Monoid_All_Bool ();
        __auto_type mconcat  = (((__h_data1270 . __h_data ). _ ). __h_2_mem );
        // ----------
        /* cicili#Block1273 */
        ({ /* cicili#Let1275 */
          bool __h_case_result  = ((__h_data1270 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            ({ /* cicili#Progn1278 */
              fprintf (stdout , "the result of 'All' monoid is: ");
              show_Bool (mconcat (r3 ));
              putchar ('\n');
            });
        });
      }
      fprintf (stdout , "the result of 'Any' monoid is: ");
      show_Bool (mconcat_Any_Bool (r3 ));
      putchar ('\n');
    });
  });
  ({ /* cicili#Let1283 */
    __auto_type mul_15  = __ciciliL_1284 ;
    // ----------
    { /* cicili#Let1290 */
      __auto_type __h_data1289  = get_Applicative_Maybe_int_int ();
      __auto_type pure  = (((__h_data1289 . __h_data ). _ ). __h_0_mem );
      __auto_type ap  = (((__h_data1289 . __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block1292 */
      ({ /* cicili#Let1294 */
        bool __h_case_result  = ((__h_data1289 . __h_ctor ) ==  __h___t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Let1300 */
            __auto_type __h_data1299  = ap (pure (mul_15 ), Just_int (12));
            __auto_type output  = (((__h_data1299 . __h_data ). Just ). __h_0_mem );
            // ----------
            /* cicili#Block1302 */
            ({ /* cicili#Let1304 */
              bool __h_case_result  = ((__h_data1299 . __h_ctor ) ==  __h_Just_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "the result of 'Applicative for Maybe (*15) (Just 12)' is: Just %d\n", output );
              else
                { /* cicili#Let1311 */
                  // ----------
                  /* cicili#Block1313 */
                  fprintf (stdout , "the result of 'Applicative for Maybe (*15) (Just 12)' is: Nothing\n");
                }
            });
          }
      });
    }
    ({ /* cicili#Let1317 */
      __auto_type wrapped  = pure_Applicative_Maybe_int_int (mul_15 );
      // ----------
      { /* cicili#Let1324 */
        __auto_type __h_data1323  = ap_Applicative_Maybe_int_int (wrapped , Just_int (12));
        __auto_type output  = (((__h_data1323 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block1330 */
        ({ /* cicili#Let1332 */
          bool __h_case_result  = ((__h_data1323 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          if (__h_case_result )
            fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) (Just 12)' is: Just %d\n", output );
          else
            { /* cicili#Let1339 */
              // ----------
              /* cicili#Block1341 */
              fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) (Just 12)' is: Nothing\n");
            }
        });
      }
      { /* cicili#Let1347 */
        __auto_type __h_data1346  = ap_Applicative_Maybe_int_int (wrapped , Nothing_int ());
        __auto_type output  = (((__h_data1346 . __h_data ). Just ). __h_0_mem );
        // ----------
        /* cicili#Block1353 */
        ({ /* cicili#Let1355 */
          bool __h_case_result  = ((__h_data1346 . __h_ctor ) ==  __h_Just_t  );
          // ----------
          if (__h_case_result )
            fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) Nothing' is: Just %d\n", output );
          else
            { /* cicili#Let1362 */
              // ----------
              /* cicili#Block1364 */
              fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) Nothing' is: Nothing\n");
            }
        });
      }
    });
  });
  ({ /* cicili#Let1372 */
    __auto_type lf  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1374 */
      __auto_type tmp_obj  = new_List_Functor_List_int_int_a_b_t_Pure (((const Functor_List_int_int_a_b_t[]){ __ciciliL_1377 , __ciciliL_1379 }), 2);
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type li  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1383 */
      __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4, 5, 6}), 6);
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type afi  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1389 */
      __auto_type tmp_obj  = ap_Applicative_List_int_int (lf , li );
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    // ----------
    fprintf (stdout , "applicative [(*3) (+4)] of { 1 2 3 4 5 6 } is:\n");
    show_List_int (afi );
    putchar ('\n');
  });
}
