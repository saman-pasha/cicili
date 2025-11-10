#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../../haskell.h"
void reduce_List_char (List_char list ) {
  { /* cicili#Let110 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type __h_match107_1_arg  = (((list -> __h_data ). Cons ). __h_1_mem );
    __auto_type t  = __h_match107_1_arg ;
    __auto_type head1  = (((t -> __h_data ). Cons ). __h_0_mem );
    __auto_type __h_match108_1_arg  = (((t -> __h_data ). Cons ). __h_1_mem );
    __auto_type head2  = (((__h_match108_1_arg -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((__h_match108_1_arg -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block112 */
    ({ /* cicili#Let114 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (((t -> __h_ctor ) ==  __h_Cons_t  ) &&  ((__h_match108_1_arg -> __h_ctor ) ==  __h_Cons_t  ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block117 */
          printf ("%c%c%c ", head , head1 , head2 );
          reduce_List_char (t );
        }
      else
        { /* cicili#Let124 */
          __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
          __auto_type __h_match122_1_arg  = (((list -> __h_data ). Cons ). __h_1_mem );
          __auto_type t  = __h_match122_1_arg ;
          __auto_type head1  = (((t -> __h_data ). Cons ). __h_0_mem );
          __auto_type tail  = (((t -> __h_data ). Cons ). __h_1_mem );
          // ----------
          /* cicili#Block126 */
          ({ /* cicili#Let128 */
            bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((t -> __h_ctor ) ==  __h_Cons_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block131 */
                printf ("%c%c ", head , head1 );
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
#ifndef __Either_String_int__H_DECL__
#define __Either_String_int__H_DECL__
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
const Either_String_int__H_Table * const get_Either_String_int__H_Table ();
void free_Either_String_int (Either_String_int * this );
#endif /* __Either_String_int__H_DECL__ */ 
#ifndef __Either_String_int__H_IMPL__
#define __Either_String_int__H_IMPL__
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
#endif /* __Either_String_int__H_IMPL__ */ 
Either_String_int divideByZero (int x , int y ) {
  if (y  ==  0 )
    return Left_String_int (new_String_Const ("zero division"));
  else
    return Right_String_int ((x  /  y  ));
}
#ifndef __Maybe_int_to_int_t__H_DECL__
#define __Maybe_int_to_int_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_int_to_int_t Maybe_int_to_int_t ;
typedef void (*free_Maybe_int_to_int_t_t) (Maybe_int_to_int_t * this );
typedef struct Maybe_int_to_int_t__H_Table {
  free_Maybe_int_to_int_t_t freeData ;
} Maybe_int_to_int_t__H_Table;
typedef struct Maybe_int_to_int_t {
  const Maybe_int_to_int_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion220 */
    struct { /* ciciliStruct221 */
    } Nothing , _0 ;
    struct { /* ciciliStruct222 */
      int_to_int_t __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_int_to_int_t;
Maybe_int_to_int_t Nothing_int_to_int_t ();
Maybe_int_to_int_t Just_int_to_int_t (int_to_int_t value );
__attribute__((weak)) Maybe_int_to_int_t Default_Maybe_int_to_int_t (int_to_int_t value ) {
  return Just_int_to_int_t (value );
}
const Maybe_int_to_int_t__H_Table * const get_Maybe_int_to_int_t__H_Table ();
void free_Maybe_int_to_int_t (Maybe_int_to_int_t * this );
#endif /* __Maybe_int_to_int_t__H_DECL__ */ 
#ifndef __List_int_to_int_t__H_DECL__
#define __List_int_to_int_t__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_int_to_int_t_class_t __h_List_int_to_int_t_class_t ;
typedef __h_List_int_to_int_t_class_t * List_int_to_int_t ;
typedef void (*free_List_int_to_int_t_t) (List_int_to_int_t * this_ptr );
typedef struct List_int_to_int_t__H_Table {
  free_List_int_to_int_t_t freeClass ;
    void (*show) (List_int_to_int_t list );
    List_int_to_int_t (*append) (List_int_to_int_t llist , List_int_to_int_t rlist );
    List_int_to_int_t (*push) (int_to_int_t item , List_int_to_int_t list );
    List_int_to_int_t (*last) (List_int_to_int_t list );
    List_int_to_int_t (*take) (int len , List_int_to_int_t list );
    int (*hasLen) (List_int_to_int_t list , int desired );
    int (*len) (List_int_to_int_t list );
    List_int_to_int_t (*tail) (List_int_to_int_t list );
    List_int_to_int_t (*drop) (int index , List_int_to_int_t list );
    Maybe_int_to_int_t (*head) (List_int_to_int_t list );
    Maybe_int_to_int_t (*nth) (int index , List_int_to_int_t list );
    List_int_to_int_t (*next) (List_int_to_int_t list );
} List_int_to_int_t__H_Table;
typedef struct __h_List_int_to_int_t_class_t {
  const List_int_to_int_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion285 */
    struct { /* ciciliStruct286 */
    } Empty , _0 ;
    struct { /* ciciliStruct287 */
      int_to_int_t __h_0_mem ;
      List_int_to_int_t __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_int_to_int_t_class_t;
List_int_to_int_t Empty_int_to_int_t ();
List_int_to_int_t Cons_int_to_int_t (int_to_int_t head , List_int_to_int_t tail );
__attribute__((weak)) List_int_to_int_t Default_List_int_to_int_t (int_to_int_t head , List_int_to_int_t tail ) {
  return Cons_int_to_int_t (head , tail );
}
void show_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t append_List_int_to_int_t (List_int_to_int_t llist , List_int_to_int_t rlist );
List_int_to_int_t push_List_int_to_int_t (int_to_int_t item , List_int_to_int_t list );
List_int_to_int_t last_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t take_List_int_to_int_t (int len , List_int_to_int_t list );
int hasLen_List_int_to_int_t (List_int_to_int_t list , int desired );
int len_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t tail_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t drop_List_int_to_int_t (int index , List_int_to_int_t list );
Maybe_int_to_int_t head_List_int_to_int_t (List_int_to_int_t list );
Maybe_int_to_int_t nth_List_int_to_int_t (int index , List_int_to_int_t list );
List_int_to_int_t next_List_int_to_int_t (List_int_to_int_t list );
const List_int_to_int_t__H_Table * const get_List_int_to_int_t__H_Table ();
void free_List_int_to_int_t (List_int_to_int_t * this_ptr );
#endif /* __List_int_to_int_t__H_DECL__ */ 
List_int_to_int_t new_List_int_to_int_t_Pure (const int_to_int_t * buf , int len );
List_int_to_int_t new_List_int_to_int_t_Wrap (const int_to_int_t item );
#ifndef __Applicative_List_int_int__H_DECL__
#define __Applicative_List_int_int__H_DECL__
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
    List_int (*ap) (List_int_to_int_t f_a_b , List_int input );
    List_int_to_int_t (*pure) (int_to_int_t a_b );
} Applicative_List_int_int__H_Table;
typedef struct Applicative_List_int_int {
  const Applicative_List_int_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion391 */
    struct { /* ciciliStruct392 */
    } Applicative , _ ;
  } __h_data ;
} Applicative_List_int_int;
Applicative_List_int_int Applicative_List_int_int_ctor ();
__attribute__((weak)) Applicative_List_int_int Default_Applicative_List_int_int () {
  return Applicative_List_int_int_ctor ();
}
List_int ap_Applicative_List_int_int (List_int_to_int_t f_a_b , List_int input );
List_int_to_int_t pure_Applicative_List_int_int (int_to_int_t a_b );
const Applicative_List_int_int__H_Table * const get_Applicative_List_int_int__H_Table ();
void free_Applicative_List_int_int (Applicative_List_int_int * this );
#endif /* __Applicative_List_int_int__H_DECL__ */ 
Applicative_List_int_int get_Applicative_List_int_int ();
#ifndef __Maybe_int_to_int_t__H_IMPL__
#define __Maybe_int_to_int_t__H_IMPL__
void free_Maybe_int_to_int_t (Maybe_int_to_int_t * this ) {
}
const Maybe_int_to_int_t__H_Table * const get_Maybe_int_to_int_t__H_Table () {
  static const Maybe_int_to_int_t__H_Table table  = { free_Maybe_int_to_int_t };
  return (&table );
}
Maybe_int_to_int_t Nothing_int_to_int_t () {
  return ((Maybe_int_to_int_t){ get_Maybe_int_to_int_t__H_Table (), __h_Nothing_t });
}
Maybe_int_to_int_t Just_int_to_int_t (int_to_int_t value ) {
  return ((Maybe_int_to_int_t){ get_Maybe_int_to_int_t__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_int_to_int_t__H_IMPL__ */ 
#ifndef __List_int_to_int_t__H_IMPL__
#define __List_int_to_int_t__H_IMPL__
void show_List_int_to_int_t (List_int_to_int_t list ) {
  { /* cicili#Let451 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block453 */
    ({ /* cicili#Let455 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block458 */
          { /* cicili#Let462 */
            // ----------
            /* cicili#Block464 */
            ({ /* cicili#Let466 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block469 */
                  printf ("%p", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let477 */
                  // ----------
                  /* cicili#Block479 */
                  printf ("%p", head );
                }
            });
          }
          show_List_int_to_int_t (tail );
        }
    });
  }
}
List_int_to_int_t append_List_int_to_int_t (List_int_to_int_t llist , List_int_to_int_t rlist ) {
  return ({ /* cicili#Let490 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let495 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block497 */
        ({ /* cicili#Let499 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn501 */
              free_List_int_to_int_t ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let506 */
              // ----------
              /* cicili#Block508 */
              rlist ;
            }));
        });
      });
    });
}
List_int_to_int_t push_List_int_to_int_t (int_to_int_t item , List_int_to_int_t list ) {
  return Cons_int_to_int_t (item , list );
}
List_int_to_int_t last_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* cicili#Let523 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block525 */
      ({ /* cicili#Let527 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let531 */
            // ----------
            /* cicili#Block533 */
            ({ /* cicili#Let535 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let539 */
                  // ----------
                  /* cicili#Block541 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let546 */
            // ----------
            /* cicili#Block548 */
            list ;
          }));
      });
    });
}
List_int_to_int_t take_List_int_to_int_t (int len , List_int_to_int_t list ) {
  return ({ /* cicili#Let556 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block558 */
      ({ /* cicili#Let560 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let566 */
            // ----------
            /* cicili#Block568 */
            Empty_int_to_int_t ();
          }));
      });
    });
}
int hasLen_List_int_to_int_t (List_int_to_int_t list , int desired ) {
  return ({ /* cicili#Let576 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block578 */
      ({ /* cicili#Let580 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let586 */
            // ----------
            /* cicili#Block588 */
            0;
          }));
      });
    });
}
int len_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* cicili#Let595 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block597 */
      ({ /* cicili#Let599 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let604 */
            // ----------
            /* cicili#Block606 */
            0;
          }));
      });
    });
}
List_int_to_int_t tail_List_int_to_int_t (List_int_to_int_t list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_int_to_int_t drop_List_int_to_int_t (int index , List_int_to_int_t list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let620 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block622 */
        ({ /* cicili#Let624 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let629 */
              // ----------
              /* cicili#Block631 */
              Empty_int_to_int_t ();
            }));
        });
      }));
}
Maybe_int_to_int_t head_List_int_to_int_t (List_int_to_int_t list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_int_to_int_t nth_List_int_to_int_t (int index , List_int_to_int_t list ) {
  return ({ /* cicili#Let645 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block647 */
      ({ /* cicili#Let649 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_int_to_int_t (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let656 */
            // ----------
            /* cicili#Block658 */
            Nothing_int_to_int_t ();
          }));
      });
    });
}
List_int_to_int_t next_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* cicili#Let667 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block669 */
      ({ /* cicili#Let671 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let675 */
            // ----------
            /* cicili#Block677 */
            Empty_int_to_int_t ();
          }));
      });
    });
}
void free_List_int_to_int_t (List_int_to_int_t * this_ptr ) {
  { /* cicili#Let683 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let687 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block689 */
      ({ /* cicili#Let691 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block694 */
            printf ("destructuring List: %p, ", this );
            printf ("%p", head );
            putchar ('\n');
            free_List_int_to_int_t ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let703 */
            // ----------
            /* cicili#Block705 */
            free (this );
          }
      });
    }
  }
}
const List_int_to_int_t__H_Table * const get_List_int_to_int_t__H_Table () {
  static const List_int_to_int_t__H_Table table  = { free_List_int_to_int_t , show_List_int_to_int_t , append_List_int_to_int_t , push_List_int_to_int_t , last_List_int_to_int_t , take_List_int_to_int_t , hasLen_List_int_to_int_t , len_List_int_to_int_t , tail_List_int_to_int_t , drop_List_int_to_int_t , head_List_int_to_int_t , nth_List_int_to_int_t , next_List_int_to_int_t };
  return (&table );
}
List_int_to_int_t Empty_int_to_int_t () {
  { /* cicili#Let714 */
    List_int_to_int_t instance  = malloc (sizeof(__h_List_int_to_int_t_class_t));
    // ----------
    (*instance ) = ((__h_List_int_to_int_t_class_t){ get_List_int_to_int_t__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_int_to_int_t Cons_int_to_int_t (int_to_int_t head , List_int_to_int_t tail ) {
  { /* cicili#Let719 */
    List_int_to_int_t instance  = malloc (sizeof(__h_List_int_to_int_t_class_t));
    // ----------
    (*instance ) = ((__h_List_int_to_int_t_class_t){ get_List_int_to_int_t__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_int_to_int_t__H_IMPL__ */ 
List_int_to_int_t new_List_int_to_int_t_Pure (const int_to_int_t * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_int_to_int_t ();
  else
    { /* cicili#Let731 */
      int_to_int_t item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_int_to_int_t ();
      else
        return Cons_int_to_int_t (item , new_List_int_to_int_t_Pure ((++buf ), (--len )));
    }
}
List_int_to_int_t new_List_int_to_int_t_Wrap (const int_to_int_t item ) {
  return Cons_int_to_int_t (item , Empty_int_to_int_t ());
}
#ifndef __Applicative_List_int_int__H_IMPL__
#define __Applicative_List_int_int__H_IMPL__
List_int ap_Applicative_List_int_int (List_int_to_int_t f_a_b , List_int input ) {
  return ({ /* cicili#Let755 */
      __auto_type a_b  = (((f_a_b -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((f_a_b -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block757 */
      ({ /* cicili#Let759 */
        bool __h_case_result  = ((f_a_b -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? mconcat_List_int (Cons_List_int (fmap_Functor_List_int_int (a_b , input ), new_List_List_int_Wrap (ap_Applicative_List_int_int (tail , input )))) : ({ /* cicili#Let768 */
            // ----------
            /* cicili#Block770 */
            Empty_int ();
          }));
      });
    });
}
List_int_to_int_t pure_Applicative_List_int_int (int_to_int_t a_b ) {
  return new_List_int_to_int_t_Wrap (a_b );
}
void free_Applicative_List_int_int (Applicative_List_int_int * this ) {
}
const Applicative_List_int_int__H_Table * const get_Applicative_List_int_int__H_Table () {
  static const Applicative_List_int_int__H_Table table  = { free_Applicative_List_int_int , ap_Applicative_List_int_int , pure_Applicative_List_int_int };
  return (&table );
}
Applicative_List_int_int Applicative_List_int_int_ctor () {
  return ((Applicative_List_int_int){ get_Applicative_List_int_int__H_Table (), __h___t });
}
#endif /* __Applicative_List_int_int__H_IMPL__ */ 
Applicative_List_int_int get_Applicative_List_int_int () {
  return Applicative_List_int_int_ctor ();
}
#ifndef __Maybe_Maybe_int_to_int_t__H_DECL__
#define __Maybe_Maybe_int_to_int_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Maybe_int_to_int_t Maybe_Maybe_int_to_int_t ;
typedef void (*free_Maybe_Maybe_int_to_int_t_t) (Maybe_Maybe_int_to_int_t * this );
typedef struct Maybe_Maybe_int_to_int_t__H_Table {
  free_Maybe_Maybe_int_to_int_t_t freeData ;
} Maybe_Maybe_int_to_int_t__H_Table;
typedef struct Maybe_Maybe_int_to_int_t {
  const Maybe_Maybe_int_to_int_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion811 */
    struct { /* ciciliStruct812 */
    } Nothing , _0 ;
    struct { /* ciciliStruct813 */
      Maybe_int_to_int_t __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_Maybe_int_to_int_t;
Maybe_Maybe_int_to_int_t Nothing_Maybe_int_to_int_t ();
Maybe_Maybe_int_to_int_t Just_Maybe_int_to_int_t (Maybe_int_to_int_t value );
__attribute__((weak)) Maybe_Maybe_int_to_int_t Default_Maybe_Maybe_int_to_int_t (Maybe_int_to_int_t value ) {
  return Just_Maybe_int_to_int_t (value );
}
const Maybe_Maybe_int_to_int_t__H_Table * const get_Maybe_Maybe_int_to_int_t__H_Table ();
void free_Maybe_Maybe_int_to_int_t (Maybe_Maybe_int_to_int_t * this );
#endif /* __Maybe_Maybe_int_to_int_t__H_DECL__ */ 
#ifndef __Applicative_Maybe_int_int__H_DECL__
#define __Applicative_Maybe_int_int__H_DECL__
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
    Maybe_int (*ap) (Maybe_int_to_int_t f_a_b , Maybe_int input );
    Maybe_int_to_int_t (*pure) (int_to_int_t a_b );
} Applicative_Maybe_int_int__H_Table;
typedef struct Applicative_Maybe_int_int {
  const Applicative_Maybe_int_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion848 */
    struct { /* ciciliStruct849 */
    } Applicative , _ ;
  } __h_data ;
} Applicative_Maybe_int_int;
Applicative_Maybe_int_int Applicative_Maybe_int_int_ctor ();
__attribute__((weak)) Applicative_Maybe_int_int Default_Applicative_Maybe_int_int () {
  return Applicative_Maybe_int_int_ctor ();
}
Maybe_int ap_Applicative_Maybe_int_int (Maybe_int_to_int_t f_a_b , Maybe_int input );
Maybe_int_to_int_t pure_Applicative_Maybe_int_int (int_to_int_t a_b );
const Applicative_Maybe_int_int__H_Table * const get_Applicative_Maybe_int_int__H_Table ();
void free_Applicative_Maybe_int_int (Applicative_Maybe_int_int * this );
#endif /* __Applicative_Maybe_int_int__H_DECL__ */ 
Applicative_Maybe_int_int get_Applicative_Maybe_int_int ();
#ifndef __Maybe_Maybe_int_to_int_t__H_IMPL__
#define __Maybe_Maybe_int_to_int_t__H_IMPL__
void free_Maybe_Maybe_int_to_int_t (Maybe_Maybe_int_to_int_t * this ) {
}
const Maybe_Maybe_int_to_int_t__H_Table * const get_Maybe_Maybe_int_to_int_t__H_Table () {
  static const Maybe_Maybe_int_to_int_t__H_Table table  = { free_Maybe_Maybe_int_to_int_t };
  return (&table );
}
Maybe_Maybe_int_to_int_t Nothing_Maybe_int_to_int_t () {
  return ((Maybe_Maybe_int_to_int_t){ get_Maybe_Maybe_int_to_int_t__H_Table (), __h_Nothing_t });
}
Maybe_Maybe_int_to_int_t Just_Maybe_int_to_int_t (Maybe_int_to_int_t value ) {
  return ((Maybe_Maybe_int_to_int_t){ get_Maybe_Maybe_int_to_int_t__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_Maybe_int_to_int_t__H_IMPL__ */ 
#ifndef __Applicative_Maybe_int_int__H_IMPL__
#define __Applicative_Maybe_int_int__H_IMPL__
Maybe_int ap_Applicative_Maybe_int_int (Maybe_int_to_int_t f_a_b , Maybe_int input ) {
  return ({ /* cicili#Let907 */
      __auto_type a_b  = (((f_a_b . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block909 */
      ({ /* cicili#Let911 */
        bool __h_case_result  = ((f_a_b . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? fmap_Functor_Maybe_int_int (a_b , input ) : ({ /* cicili#Let916 */
            // ----------
            /* cicili#Block918 */
            Nothing_int ();
          }));
      });
    });
}
Maybe_int_to_int_t pure_Applicative_Maybe_int_int (int_to_int_t a_b ) {
  return Just_int_to_int_t (a_b );
}
void free_Applicative_Maybe_int_int (Applicative_Maybe_int_int * this ) {
}
const Applicative_Maybe_int_int__H_Table * const get_Applicative_Maybe_int_int__H_Table () {
  static const Applicative_Maybe_int_int__H_Table table  = { free_Applicative_Maybe_int_int , ap_Applicative_Maybe_int_int , pure_Applicative_Maybe_int_int };
  return (&table );
}
Applicative_Maybe_int_int Applicative_Maybe_int_int_ctor () {
  return ((Applicative_Maybe_int_int){ get_Applicative_Maybe_int_int__H_Table (), __h___t });
}
#endif /* __Applicative_Maybe_int_int__H_IMPL__ */ 
Applicative_Maybe_int_int get_Applicative_Maybe_int_int () {
  return Applicative_Maybe_int_int_ctor ();
}
int main () {
  ({ /* cicili#Let951 */
    __auto_type rc0  __attribute__((__cleanup__(__h_free_class_router ))) = new_Rc_List_int_Pure (({ /* cicili#Let954 */
      __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    }));
    // ----------
    ({ /* cicili#Let960 */
      __auto_type rc1  __attribute__((__cleanup__(free_Rc_List_int ))) = clone_Rc_List_int (rc0 );
      // ----------
      fprintf (stdout , "list0:\n");
      { /* cicili#Let966 */
        __auto_type __h_data965  = deref_Rc_List_int (rc0 );
        __auto_type list0  = (((__h_data965 . __h_data ). _ ). __h_0_mem );
        // ----------
        /* cicili#Block968 */
        ({ /* cicili#Let970 */
          bool __h_case_result  = ((__h_data965 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            show_List_int (list0 );
        });
      }
      putchar ('\n');
      fprintf (stdout , "list1:\n");
      { /* cicili#Let977 */
        __auto_type __h_data976  = deref_Rc_List_int (rc1 );
        __auto_type list1  = (((__h_data976 . __h_data ). _ ). __h_0_mem );
        // ----------
        /* cicili#Block979 */
        ({ /* cicili#Let981 */
          bool __h_case_result  = ((__h_data976 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            show_List_int (list1 );
        });
      }
      putchar ('\n');
    });
  });
  { /* cicili#Let987 */
    __auto_type __h_data986  = divideByZero (34, 0);
    __auto_type e  = (((__h_data986 . __h_data ). Left ). __h_0_mem );
    // ----------
    /* cicili#Block989 */
    ({ /* cicili#Let991 */
      bool __h_case_result  = ((__h_data986 . __h_ctor ) ==  __h_Left_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn994 */
          printf ("error raised: ");
          show_String (e );
          putchar ('\n');
          free_String ((&e ));
        });
      else
        { /* cicili#Let999 */
          __auto_type a  = (((__h_data986 . __h_data ). Right ). __h_0_mem );
          // ----------
          /* cicili#Block1001 */
          ({ /* cicili#Let1003 */
            bool __h_case_result  = ((__h_data986 . __h_ctor ) ==  __h_Right_t  );
            // ----------
            if (__h_case_result )
              printf ("division result: %d\n", a );
          });
        }
    });
  }
  { /* cicili#Let1009 */
    __auto_type __h_data1008  = divideByZero (34, 2);
    __auto_type e  = (((__h_data1008 . __h_data ). Left ). __h_0_mem );
    // ----------
    /* cicili#Block1011 */
    ({ /* cicili#Let1013 */
      bool __h_case_result  = ((__h_data1008 . __h_ctor ) ==  __h_Left_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn1016 */
          printf ("error raised: ");
          show_String (e );
          putchar ('\n');
          free_String ((&e ));
        });
      else
        { /* cicili#Let1021 */
          __auto_type a  = (((__h_data1008 . __h_data ). Right ). __h_0_mem );
          // ----------
          /* cicili#Block1023 */
          ({ /* cicili#Let1025 */
            bool __h_case_result  = ((__h_data1008 . __h_ctor ) ==  __h_Right_t  );
            // ----------
            if (__h_case_result )
              printf ("division result: %d\n", a );
          });
        }
    });
  }
  ({ /* cicili#Let1029 */
    __auto_type chrlst  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1031 */
      __auto_type tmp_obj  = new_String_Const ("Hello List!");
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type m0  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1036 */
      __auto_type tmp_obj  = nth_List_char (3, chrlst );
      // ----------
      ((void)((tmp_obj . __h_table )-> freeData ));
      tmp_obj ;
    });
    __auto_type m1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1039 */
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
    { /* cicili#Let1044 */
      __auto_type ch  = (((m0 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1046 */
      ({ /* cicili#Let1048 */
        bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "4th element is: %c\n", ch );
        else
          { /* cicili#Let1055 */
            // ----------
            /* cicili#Block1057 */
            ({ /* cicili#Let1059 */
              bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "4th element is: Nothing\n");
            });
          }
      });
    }
    { /* cicili#Let1065 */
      __auto_type ch  = (((m1 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1067 */
      ({ /* cicili#Let1069 */
        bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "16th element is: %c\n", ch );
        else
          { /* cicili#Let1076 */
            // ----------
            /* cicili#Block1078 */
            ({ /* cicili#Let1080 */
              bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "16th element is: Nothing\n");
            });
          }
      });
    }
  });
  fprintf (stdout , "Sum of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let1088 */
      __auto_type __h_data1087  = get_Monoid_Sum_int ();
      __auto_type mappend  = (((__h_data1087 . __h_data ). _ ). __h_0_mem );
      __auto_type mempty  = (((__h_data1087 . __h_data ). _ ). __h_1_mem );
      __auto_type mconcat  = (((__h_data1087 . __h_data ). _ ). __h_2_mem );
      // ----------
      /* cicili#Block1090 */
      ({ /* cicili#Let1092 */
        bool __h_case_result  = ((__h_data1087 . __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let1095 */
            __auto_type l  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1097 */
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
          }) : ({ /* cicili#Let1109 */
            // ----------
            /* cicili#Block1111 */
            -1;
          }));
      });
    }));
  fprintf (stdout , "Product of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let1117 */
      __auto_type __h_data1116  = get_Monoid_Product_int ();
      __auto_type mappend  = (((__h_data1116 . __h_data ). _ ). __h_0_mem );
      __auto_type mempty  = (((__h_data1116 . __h_data ). _ ). __h_1_mem );
      __auto_type mconcat  = (((__h_data1116 . __h_data ). _ ). __h_2_mem );
      // ----------
      /* cicili#Block1119 */
      ({ /* cicili#Let1121 */
        bool __h_case_result  = ((__h_data1116 . __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let1124 */
            __auto_type l  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1126 */
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
          }) : ({ /* cicili#Let1138 */
            // ----------
            /* cicili#Block1140 */
            -1;
          }));
      });
    }));
  ({ /* cicili#Let1143 */
    __auto_type l1  = new_List_int_Pure (((const int[]){ 1, 3, 5}), 3);
    __auto_type l2  = new_List_int_Pure (((const int[]){ 2, 4, 6}), 3);
    __auto_type l3  = new_List_int_Pure (((const int[]){ 7, 8, 9}), 3);
    __auto_type l4  = new_List_List_int_Pure (((const List_int[]){ l1 , l2 , l3 }), 3);
    // ----------
    ({ /* cicili#Let1158 */
      __auto_type result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1160 */
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
  { /* cicili#Let1167 */
    __auto_type __h_data1166  = get_Semigroup_String_char ();
    __auto_type mappend  = (((__h_data1166 . __h_data ). _ ). __h_0_mem );
    // ----------
    /* cicili#Block1169 */
    ({ /* cicili#Let1171 */
      bool __h_case_result  = ((__h_data1166 . __h_ctor ) ==  __h___t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Let1175 */
          __auto_type s1  = new_String_Const ("Hello ");
          __auto_type s2  = new_String_Const ("Cicili!");
          // ----------
          ({ /* cicili#Let1184 */
            __auto_type result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1186 */
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
  ({ /* cicili#Let1191 */
    __auto_type ftor_mul_5  = get_Functor_List_int_int ();
    __auto_type ftor_mod_3  = get_Functor_List_int_Bool ();
    // ----------
    ({ /* cicili#Let1200 */
      __auto_type l1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1202 */
        __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4, 5, 6}), 6);
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1208 */
        __auto_type tmp_obj  = ((&ftor_mul_5 )-> __h_table -> fmap )(({ /* cicili#Progn1213 */
          int lambda (int value ) {
            return (5 *  value  );
          }
          lambda ;
        }), l1 );
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1218 */
        __auto_type tmp_obj  = ((&ftor_mod_3 )-> __h_table -> fmap )(({ /* cicili#Progn1223 */
          Bool lambda (int value ) {
            return (((value  %  3 )) ? False () : True ());
          }
          lambda ;
        }), r1 );
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1229 */
        __auto_type tmp_obj  = ({ /* cicili#Let1238 */
          __auto_type strict_in  __attribute__((__cleanup__(free_List_int ))) = fmap_Functor_List_int_int (({ /* cicili#Progn1242 */
            int lambda (int __h_value ) {
              return (5 *  __h_value  );
            }
            lambda ;
          }), l1 );
          // ----------
          fmap_Functor_List_int_Bool (({ /* cicili#Progn1253 */
              Bool lambda (int __h_value ) {
                return (((__h_value  %  3 )) ? False () : True ());
              }
              lambda ;
            }), strict_in );
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
      { /* cicili#Let1268 */
        __auto_type __h_data1267  = get_Monoid_All_Bool ();
        __auto_type mconcat  = (((__h_data1267 . __h_data ). _ ). __h_2_mem );
        // ----------
        /* cicili#Block1270 */
        ({ /* cicili#Let1272 */
          bool __h_case_result  = ((__h_data1267 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            ({ /* cicili#Progn1275 */
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
  ({ /* cicili#Let1280 */
    __auto_type mul_15  = ({ /* cicili#Progn1281 */
      int lambda (int value ) {
        return (15 *  value  );
      }
      lambda ;
    });
    __auto_type apmii  = get_Applicative_Maybe_int_int ();
    // ----------
    { /* cicili#Let1288 */
      __auto_type __h_data1287  = ((&apmii )-> __h_table -> ap )(((&apmii )-> __h_table -> pure )(mul_15 ), Just_int (12));
      __auto_type output  = (((__h_data1287 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1292 */
      ({ /* cicili#Let1294 */
        bool __h_case_result  = ((__h_data1287 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "the result of 'Applicative for Maybe (*15) (Just 12)' is: Just %d\n", output );
        else
          { /* cicili#Let1301 */
            // ----------
            /* cicili#Block1303 */
            fprintf (stdout , "the result of 'Applicative for Maybe (*15) (Just 12)' is: Nothing\n");
          }
      });
    }
  });
  ({ /* cicili#Let1307 */
    __auto_type wrapped  = pure_Applicative_Maybe_int_int (({ /* cicili#Progn1310 */
      int lambda (int __h_value ) {
        return (15 *  __h_value  );
      }
      lambda ;
    }));
    // ----------
    { /* cicili#Let1321 */
      __auto_type __h_data1320  = ap_Applicative_Maybe_int_int (wrapped , Just_int (12));
      __auto_type output  = (((__h_data1320 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1327 */
      ({ /* cicili#Let1329 */
        bool __h_case_result  = ((__h_data1320 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) (Just 12)' is: Just %d\n", output );
        else
          { /* cicili#Let1336 */
            // ----------
            /* cicili#Block1338 */
            fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) (Just 12)' is: Nothing\n");
          }
      });
    }
    { /* cicili#Let1344 */
      __auto_type __h_data1343  = ap_Applicative_Maybe_int_int (wrapped , Nothing_int ());
      __auto_type output  = (((__h_data1343 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1350 */
      ({ /* cicili#Let1352 */
        bool __h_case_result  = ((__h_data1343 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) Nothing' is: Just %d\n", output );
        else
          { /* cicili#Let1359 */
            // ----------
            /* cicili#Block1361 */
            fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) Nothing' is: Nothing\n");
          }
      });
    }
  });
  ({ /* cicili#Let1369 */
    __auto_type lf  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1371 */
      __auto_type tmp_obj  = new_List_int_to_int_t_Pure (((const int_to_int_t[]){ ({ /* cicili#Progn1376 */
          int lambda (int value ) {
            return (3 *  value  );
          }
          lambda ;
        }), ({ /* cicili#Progn1379 */
          int lambda (int value ) {
            return (4 +  value  );
          }
          lambda ;
        })}), 2);
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type li  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1384 */
      __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4, 5, 6}), 6);
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type afi  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1390 */
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
