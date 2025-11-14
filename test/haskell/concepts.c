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
#ifndef __Maybe_List_int_to_int_t__H_DECL__
#define __Maybe_List_int_to_int_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_int_to_int_t Maybe_List_int_to_int_t ;
typedef void (*free_Maybe_List_int_to_int_t_t) (Maybe_List_int_to_int_t * this );
typedef struct Maybe_List_int_to_int_t__H_Table {
  free_Maybe_List_int_to_int_t_t freeData ;
} Maybe_List_int_to_int_t__H_Table;
typedef struct Maybe_List_int_to_int_t {
  const Maybe_List_int_to_int_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion385 */
    struct { /* ciciliStruct386 */
    } Nothing , _0 ;
    struct { /* ciciliStruct387 */
      List_int_to_int_t __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_List_int_to_int_t;
Maybe_List_int_to_int_t Nothing_List_int_to_int_t ();
Maybe_List_int_to_int_t Just_List_int_to_int_t (List_int_to_int_t value );
__attribute__((weak)) Maybe_List_int_to_int_t Default_Maybe_List_int_to_int_t (List_int_to_int_t value ) {
  return Just_List_int_to_int_t (value );
}
const Maybe_List_int_to_int_t__H_Table * const get_Maybe_List_int_to_int_t__H_Table ();
void free_Maybe_List_int_to_int_t (Maybe_List_int_to_int_t * this );
#endif /* __Maybe_List_int_to_int_t__H_DECL__ */ 
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
  union { /* ciciliUnion422 */
    struct { /* ciciliStruct423 */
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
  { /* cicili#Let482 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block484 */
    ({ /* cicili#Let486 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block489 */
          { /* cicili#Let493 */
            // ----------
            /* cicili#Block495 */
            ({ /* cicili#Let497 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block500 */
                  printf ("%p", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let508 */
                  // ----------
                  /* cicili#Block510 */
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
  return ({ /* cicili#Let521 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let526 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block528 */
        ({ /* cicili#Let530 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn532 */
              free_List_int_to_int_t ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let537 */
              // ----------
              /* cicili#Block539 */
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
  return ({ /* cicili#Let554 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block556 */
      ({ /* cicili#Let558 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let562 */
            // ----------
            /* cicili#Block564 */
            ({ /* cicili#Let566 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let570 */
                  // ----------
                  /* cicili#Block572 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let577 */
            // ----------
            /* cicili#Block579 */
            list ;
          }));
      });
    });
}
List_int_to_int_t take_List_int_to_int_t (int len , List_int_to_int_t list ) {
  return ({ /* cicili#Let587 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block589 */
      ({ /* cicili#Let591 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let597 */
            // ----------
            /* cicili#Block599 */
            Empty_int_to_int_t ();
          }));
      });
    });
}
int hasLen_List_int_to_int_t (List_int_to_int_t list , int desired ) {
  return ({ /* cicili#Let607 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block609 */
      ({ /* cicili#Let611 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let617 */
            // ----------
            /* cicili#Block619 */
            0;
          }));
      });
    });
}
int len_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* cicili#Let626 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block628 */
      ({ /* cicili#Let630 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let635 */
            // ----------
            /* cicili#Block637 */
            0;
          }));
      });
    });
}
List_int_to_int_t tail_List_int_to_int_t (List_int_to_int_t list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_int_to_int_t drop_List_int_to_int_t (int index , List_int_to_int_t list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let651 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block653 */
        ({ /* cicili#Let655 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let660 */
              // ----------
              /* cicili#Block662 */
              Empty_int_to_int_t ();
            }));
        });
      }));
}
Maybe_int_to_int_t head_List_int_to_int_t (List_int_to_int_t list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_int_to_int_t nth_List_int_to_int_t (int index , List_int_to_int_t list ) {
  return ({ /* cicili#Let676 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block678 */
      ({ /* cicili#Let680 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_int_to_int_t (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let687 */
            // ----------
            /* cicili#Block689 */
            Nothing_int_to_int_t ();
          }));
      });
    });
}
List_int_to_int_t next_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* cicili#Let698 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block700 */
      ({ /* cicili#Let702 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let706 */
            // ----------
            /* cicili#Block708 */
            Empty_int_to_int_t ();
          }));
      });
    });
}
void free_List_int_to_int_t (List_int_to_int_t * this_ptr ) {
  { /* cicili#Let714 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let718 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block720 */
      ({ /* cicili#Let722 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block725 */
            free_List_int_to_int_t ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let731 */
            // ----------
            /* cicili#Block733 */
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
  { /* cicili#Let742 */
    List_int_to_int_t instance  = malloc (sizeof(__h_List_int_to_int_t_class_t));
    // ----------
    (*instance ) = ((__h_List_int_to_int_t_class_t){ get_List_int_to_int_t__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_int_to_int_t Cons_int_to_int_t (int_to_int_t head , List_int_to_int_t tail ) {
  { /* cicili#Let747 */
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
    { /* cicili#Let759 */
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
#ifndef __Maybe_List_int_to_int_t__H_IMPL__
#define __Maybe_List_int_to_int_t__H_IMPL__
void free_Maybe_List_int_to_int_t (Maybe_List_int_to_int_t * this ) {
}
const Maybe_List_int_to_int_t__H_Table * const get_Maybe_List_int_to_int_t__H_Table () {
  static const Maybe_List_int_to_int_t__H_Table table  = { free_Maybe_List_int_to_int_t };
  return (&table );
}
Maybe_List_int_to_int_t Nothing_List_int_to_int_t () {
  return ((Maybe_List_int_to_int_t){ get_Maybe_List_int_to_int_t__H_Table (), __h_Nothing_t });
}
Maybe_List_int_to_int_t Just_List_int_to_int_t (List_int_to_int_t value ) {
  return ((Maybe_List_int_to_int_t){ get_Maybe_List_int_to_int_t__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_List_int_to_int_t__H_IMPL__ */ 
#ifndef __Applicative_List_int_int__H_IMPL__
#define __Applicative_List_int_int__H_IMPL__
List_int ap_Applicative_List_int_int (List_int_to_int_t f_a_b , List_int input ) {
  return ({ /* cicili#Let802 */
      __auto_type a_b  = (((f_a_b -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((f_a_b -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block804 */
      ({ /* cicili#Let806 */
        bool __h_case_result  = ((f_a_b -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? mconcat_List_int (Cons_List_int (fmap_Functor_List_int_int (a_b , input ), new_List_List_int_Wrap (ap_Applicative_List_int_int (tail , input )))) : ({ /* cicili#Let815 */
            // ----------
            /* cicili#Block817 */
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
  union { /* ciciliUnion858 */
    struct { /* ciciliStruct859 */
    } Nothing , _0 ;
    struct { /* ciciliStruct860 */
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
  union { /* ciciliUnion895 */
    struct { /* ciciliStruct896 */
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
  return ({ /* cicili#Let954 */
      __auto_type a_b  = (((f_a_b . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block956 */
      ({ /* cicili#Let958 */
        bool __h_case_result  = ((f_a_b . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? fmap_Functor_Maybe_int_int (a_b , input ) : ({ /* cicili#Let963 */
            // ----------
            /* cicili#Block965 */
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
int __ciciliL_1262 (int value ) {
  return (5 *  value  );
}
Bool __ciciliL_1271 (int value ) {
  return (((value  %  3 )) ? False () : True ());
}
int __ciciliL_1289 (int __h_value ) {
  return (5 *  __h_value  );
}
Bool __ciciliL_1299 (int __h_value ) {
  return (((__h_value  %  3 )) ? False () : True ());
}
int __ciciliL_1326 (int value ) {
  return (15 *  value  );
}
int __ciciliL_1354 (int __h_value ) {
  return (15 *  __h_value  );
}
int __ciciliL_1419 (int value ) {
  return (3 *  value  );
}
int __ciciliL_1421 (int value ) {
  return (4 +  value  );
}
int main () {
  ({ /* cicili#Let1000 */
    __auto_type rc0  __attribute__((__cleanup__(__h_free_class_router ))) = new_Rc_List_int_Pure (({ /* cicili#Let1003 */
      __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4}), 4);
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    }));
    // ----------
    ({ /* cicili#Let1009 */
      __auto_type rc1  __attribute__((__cleanup__(free_Rc_List_int ))) = clone_Rc_List_int (rc0 );
      // ----------
      fprintf (stdout , "list0:\n");
      { /* cicili#Let1015 */
        __auto_type __h_data1014  = deref_Rc_List_int (rc0 );
        __auto_type list0  = (((__h_data1014 . __h_data ). _ ). __h_0_mem );
        // ----------
        /* cicili#Block1017 */
        ({ /* cicili#Let1019 */
          bool __h_case_result  = ((__h_data1014 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            show_List_int (list0 );
        });
      }
      putchar ('\n');
      fprintf (stdout , "list1:\n");
      { /* cicili#Let1026 */
        __auto_type __h_data1025  = deref_Rc_List_int (rc1 );
        __auto_type list1  = (((__h_data1025 . __h_data ). _ ). __h_0_mem );
        // ----------
        /* cicili#Block1028 */
        ({ /* cicili#Let1030 */
          bool __h_case_result  = ((__h_data1025 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            show_List_int (list1 );
        });
      }
      putchar ('\n');
    });
  });
  { /* cicili#Let1036 */
    __auto_type __h_data1035  = divideByZero (34, 0);
    __auto_type e  = (((__h_data1035 . __h_data ). Left ). __h_0_mem );
    // ----------
    /* cicili#Block1038 */
    ({ /* cicili#Let1040 */
      bool __h_case_result  = ((__h_data1035 . __h_ctor ) ==  __h_Left_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn1043 */
          printf ("error raised: ");
          show_String (e );
          putchar ('\n');
          free_String ((&e ));
        });
      else
        { /* cicili#Let1048 */
          __auto_type a  = (((__h_data1035 . __h_data ). Right ). __h_0_mem );
          // ----------
          /* cicili#Block1050 */
          ({ /* cicili#Let1052 */
            bool __h_case_result  = ((__h_data1035 . __h_ctor ) ==  __h_Right_t  );
            // ----------
            if (__h_case_result )
              printf ("division result: %d\n", a );
          });
        }
    });
  }
  { /* cicili#Let1058 */
    __auto_type __h_data1057  = divideByZero (34, 2);
    __auto_type e  = (((__h_data1057 . __h_data ). Left ). __h_0_mem );
    // ----------
    /* cicili#Block1060 */
    ({ /* cicili#Let1062 */
      bool __h_case_result  = ((__h_data1057 . __h_ctor ) ==  __h_Left_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn1065 */
          printf ("error raised: ");
          show_String (e );
          putchar ('\n');
          free_String ((&e ));
        });
      else
        { /* cicili#Let1070 */
          __auto_type a  = (((__h_data1057 . __h_data ). Right ). __h_0_mem );
          // ----------
          /* cicili#Block1072 */
          ({ /* cicili#Let1074 */
            bool __h_case_result  = ((__h_data1057 . __h_ctor ) ==  __h_Right_t  );
            // ----------
            if (__h_case_result )
              printf ("division result: %d\n", a );
          });
        }
    });
  }
  ({ /* cicili#Let1078 */
    __auto_type chrlst  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1080 */
      __auto_type tmp_obj  = new_String_Const ("Hello List!");
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type m0  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1085 */
      __auto_type tmp_obj  = nth_List_char (3, chrlst );
      // ----------
      ((void)((tmp_obj . __h_table )-> freeData ));
      tmp_obj ;
    });
    __auto_type m1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1088 */
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
    { /* cicili#Let1093 */
      __auto_type ch  = (((m0 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1095 */
      ({ /* cicili#Let1097 */
        bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "4th element is: %c\n", ch );
        else
          { /* cicili#Let1104 */
            // ----------
            /* cicili#Block1106 */
            ({ /* cicili#Let1108 */
              bool __h_case_result  = ((m0 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "4th element is: Nothing\n");
            });
          }
      });
    }
    { /* cicili#Let1114 */
      __auto_type ch  = (((m1 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1116 */
      ({ /* cicili#Let1118 */
        bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "16th element is: %c\n", ch );
        else
          { /* cicili#Let1125 */
            // ----------
            /* cicili#Block1127 */
            ({ /* cicili#Let1129 */
              bool __h_case_result  = ((m1 . __h_ctor ) ==  __h_Nothing_t  );
              // ----------
              if (__h_case_result )
                fprintf (stdout , "16th element is: Nothing\n");
            });
          }
      });
    }
  });
  fprintf (stdout , "Sum of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let1137 */
      __auto_type __h_data1136  = get_Monoid_Sum_int ();
      __auto_type mappend  = (((__h_data1136 . __h_data ). _ ). __h_0_mem );
      __auto_type mempty  = (((__h_data1136 . __h_data ). _ ). __h_1_mem );
      __auto_type mconcat  = (((__h_data1136 . __h_data ). _ ). __h_2_mem );
      // ----------
      /* cicili#Block1139 */
      ({ /* cicili#Let1141 */
        bool __h_case_result  = ((__h_data1136 . __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let1144 */
            __auto_type l  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1146 */
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
          }) : ({ /* cicili#Let1158 */
            // ----------
            /* cicili#Block1160 */
            -1;
          }));
      });
    }));
  fprintf (stdout , "Product of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let1166 */
      __auto_type __h_data1165  = get_Monoid_Product_int ();
      __auto_type mappend  = (((__h_data1165 . __h_data ). _ ). __h_0_mem );
      __auto_type mempty  = (((__h_data1165 . __h_data ). _ ). __h_1_mem );
      __auto_type mconcat  = (((__h_data1165 . __h_data ). _ ). __h_2_mem );
      // ----------
      /* cicili#Block1168 */
      ({ /* cicili#Let1170 */
        bool __h_case_result  = ((__h_data1165 . __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let1173 */
            __auto_type l  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1175 */
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
          }) : ({ /* cicili#Let1187 */
            // ----------
            /* cicili#Block1189 */
            -1;
          }));
      });
    }));
  ({ /* cicili#Let1192 */
    __auto_type l1  = new_List_int_Pure (((const int[]){ 1, 3, 5}), 3);
    __auto_type l2  = new_List_int_Pure (((const int[]){ 2, 4, 6}), 3);
    __auto_type l3  = new_List_int_Pure (((const int[]){ 7, 8, 9}), 3);
    __auto_type l4  = new_List_List_int_Pure (((const List_int[]){ l1 , l2 , l3 }), 3);
    // ----------
    ({ /* cicili#Let1207 */
      __auto_type result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1209 */
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
  { /* cicili#Let1216 */
    __auto_type __h_data1215  = get_Semigroup_String_char ();
    __auto_type mappend  = (((__h_data1215 . __h_data ). _ ). __h_0_mem );
    // ----------
    /* cicili#Block1218 */
    ({ /* cicili#Let1220 */
      bool __h_case_result  = ((__h_data1215 . __h_ctor ) ==  __h___t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Let1224 */
          __auto_type s1  = new_String_Const ("Hello ");
          __auto_type s2  = new_String_Const ("Cicili!");
          // ----------
          ({ /* cicili#Let1233 */
            __auto_type result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1235 */
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
  ({ /* cicili#Let1240 */
    __auto_type ftor_mul_5  = get_Functor_List_int_int ();
    __auto_type ftor_mod_3  = get_Functor_List_int_Bool ();
    // ----------
    ({ /* cicili#Let1249 */
      __auto_type l1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1251 */
        __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4, 5, 6}), 6);
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1257 */
        __auto_type tmp_obj  = ((&ftor_mul_5 )-> __h_table -> fmap )(__ciciliL_1262 , l1 );
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1266 */
        __auto_type tmp_obj  = ((&ftor_mod_3 )-> __h_table -> fmap )(__ciciliL_1271 , r1 );
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1276 */
        __auto_type tmp_obj  = ({ /* cicili#Let1285 */
          __auto_type strict_in  __attribute__((__cleanup__(free_List_int ))) = fmap_Functor_List_int_int (__ciciliL_1289 , l1 );
          // ----------
          fmap_Functor_List_int_Bool (__ciciliL_1299 , strict_in );
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
      { /* cicili#Let1313 */
        __auto_type __h_data1312  = get_Monoid_All_Bool ();
        __auto_type mconcat  = (((__h_data1312 . __h_data ). _ ). __h_2_mem );
        // ----------
        /* cicili#Block1315 */
        ({ /* cicili#Let1317 */
          bool __h_case_result  = ((__h_data1312 . __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            ({ /* cicili#Progn1320 */
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
  ({ /* cicili#Let1325 */
    __auto_type mul_15  = __ciciliL_1326 ;
    __auto_type apmii  = get_Applicative_Maybe_int_int ();
    // ----------
    { /* cicili#Let1332 */
      __auto_type __h_data1331  = ((&apmii )-> __h_table -> ap )(((&apmii )-> __h_table -> pure )(mul_15 ), Just_int (12));
      __auto_type output  = (((__h_data1331 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1336 */
      ({ /* cicili#Let1338 */
        bool __h_case_result  = ((__h_data1331 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "the result of 'Applicative for Maybe (*15) (Just 12)' is: Just %d\n", output );
        else
          { /* cicili#Let1345 */
            // ----------
            /* cicili#Block1347 */
            fprintf (stdout , "the result of 'Applicative for Maybe (*15) (Just 12)' is: Nothing\n");
          }
      });
    }
  });
  ({ /* cicili#Let1351 */
    __auto_type wrapped  = pure_Applicative_Maybe_int_int (__ciciliL_1354 );
    // ----------
    { /* cicili#Let1364 */
      __auto_type __h_data1363  = ap_Applicative_Maybe_int_int (wrapped , Just_int (12));
      __auto_type output  = (((__h_data1363 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1370 */
      ({ /* cicili#Let1372 */
        bool __h_case_result  = ((__h_data1363 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) (Just 12)' is: Just %d\n", output );
        else
          { /* cicili#Let1379 */
            // ----------
            /* cicili#Block1381 */
            fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) (Just 12)' is: Nothing\n");
          }
      });
    }
    { /* cicili#Let1387 */
      __auto_type __h_data1386  = ap_Applicative_Maybe_int_int (wrapped , Nothing_int ());
      __auto_type output  = (((__h_data1386 . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block1393 */
      ({ /* cicili#Let1395 */
        bool __h_case_result  = ((__h_data1386 . __h_ctor ) ==  __h_Just_t  );
        // ----------
        if (__h_case_result )
          fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) Nothing' is: Just %d\n", output );
        else
          { /* cicili#Let1402 */
            // ----------
            /* cicili#Block1404 */
            fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) Nothing' is: Nothing\n");
          }
      });
    }
  });
  ({ /* cicili#Let1412 */
    __auto_type lf  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1414 */
      __auto_type tmp_obj  = new_List_int_to_int_t_Pure (((const int_to_int_t[]){ __ciciliL_1419 , __ciciliL_1421 }), 2);
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type li  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1425 */
      __auto_type tmp_obj  = new_List_int_Pure (((const int[]){ 1, 2, 3, 4, 5, 6}), 6);
      // ----------
      ((void)(tmp_obj -> __h_table -> freeClass ));
      tmp_obj ;
    });
    __auto_type afi  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1431 */
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
