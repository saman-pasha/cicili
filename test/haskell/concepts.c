#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../../haskell.h"
void reduce_List_char (List_char list ) {
  { /* cicili#Let110 */
    typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
    typeof((((list -> __h_data ). Cons ). __h_1_mem )) t ;
    typeof((((t -> __h_data ). Cons ). __h_0_mem )) head1 ;
    typeof((((t -> __h_data ). Cons ). __h_1_mem )) __h_match108_1_arg ;
    typeof((((__h_match108_1_arg -> __h_data ). Cons ). __h_0_mem )) head2 ;
    // ----------
    
    ({ /* cicili#Let114 */
      bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn115 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn117 */
                (t  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) &&  (true  &&  (((t -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn119 */
                      (head1  =  (((t -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn121 */
                      (__h_match108_1_arg  =  (((t -> __h_data ). Cons ). __h_1_mem ) );
                      true ;
                    }) ) &&  (true  &&  (((__h_match108_1_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn123 */
                        (head2  =  (((__h_match108_1_arg -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) ) ) ) ) ) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block127 */
          { /* cicili#Block129 */
            printf ("%c%c%c ", head , head1 , head2 );
            reduce_List_char (t );
          }
        }
      else
        { /* cicili#Let136 */
          typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
          typeof((((list -> __h_data ). Cons ). __h_1_mem )) t ;
          typeof((((t -> __h_data ). Cons ). __h_0_mem )) head1 ;
          // ----------
          
          ({ /* cicili#Let140 */
            bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn141 */
                      (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn143 */
                      (t  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                      true ;
                    }) ) &&  (true  &&  (((t -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn145 */
                        (head1  =  (((t -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) ) ) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block149 */
                { /* cicili#Block151 */
                  printf ("%c%c ", head , head1 );
                  reduce_List_char (t );
                }
              }
            else
              { /* cicili#Let157 */
                typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let161 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn162 */
                          (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn164 */
                          (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block168 */
                      { /* cicili#Block170 */
                        printf ("%c ", head );
                        reduce_List_char (tail );
                      }
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
  __h_Left_t = 0,
  __h_Right_t = 1
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
  union { /* ciciliUnion185 */
    struct { /* ciciliStruct186 */
      int __h_0_mem ;
    } Right , _0 ;
    struct { /* ciciliStruct187 */
      String __h_0_mem ;
    } Left , _ ;
  } __h_data ;
} Either_String_int;
Either_String_int Right_String_int (int value );
Either_String_int Left_String_int (String error );
__attribute__((weak)) Either_String_int Default_Either_String_int (String error ) {
  return Left_String_int (error );
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
Either_String_int Right_String_int (int value ) {
  return ((Either_String_int){ get_Either_String_int__H_Table (), __h_Right_t , .__h_data.Right = { value }});
}
Either_String_int Left_String_int (String error ) {
  return ((Either_String_int){ get_Either_String_int__H_Table (), __h___t , .__h_data._ = { error }});
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
  __h_Nothing_t = 0,
  __h_Just_t = 1
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
  union { /* ciciliUnion245 */
    struct { /* ciciliStruct246 */
      int_to_int_t __h_0_mem ;
    } Just , _0 ;
    struct { /* ciciliStruct247 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_int_to_int_t;
Maybe_int_to_int_t Just_int_to_int_t (int_to_int_t value );
Maybe_int_to_int_t Nothing_int_to_int_t ();
__attribute__((weak)) Maybe_int_to_int_t Default_Maybe_int_to_int_t () {
  return Nothing_int_to_int_t ();
}
const Maybe_int_to_int_t__H_Table * const get_Maybe_int_to_int_t__H_Table ();
void free_Maybe_int_to_int_t (Maybe_int_to_int_t * this );
#endif /* __Maybe_int_to_int_t__H_DECL__ */ 
#ifndef __List_int_to_int_t__H_DECL__
#define __List_int_to_int_t__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_int_to_int_t class_List_int_to_int_t ;
typedef class_List_int_to_int_t * List_int_to_int_t ;
typedef void (*free_List_int_to_int_t_t) (List_int_to_int_t * this_ptr );
typedef struct List_int_to_int_t__H_Table {
  free_List_int_to_int_t_t freeClass ;
    List_int_to_int_t (*wrap) (const int_to_int_t item );
    List_int_to_int_t (*pure) (const int_to_int_t * buf , int len );
    void (*show) (List_int_to_int_t list );
    List_int_to_int_t (*copy) (List_int_to_int_t list );
    List_int_to_int_t (*replaceAt) (List_int_to_int_t list , int_to_int_t item , int index );
    List_int_to_int_t (*deleteAt) (List_int_to_int_t list , int index );
    List_int_to_int_t (*insertAt) (List_int_to_int_t llist , int_to_int_t item , int index );
    List_int_to_int_t (*replace) (List_int_to_int_t list , int_to_int_t item , List_int_to_int_t aimed );
    List_int_to_int_t (*delete) (List_int_to_int_t list , List_int_to_int_t aimed );
    List_int_to_int_t (*insert) (List_int_to_int_t llist , int_to_int_t item , List_int_to_int_t rlist );
    List_int_to_int_t (*append) (List_int_to_int_t llist , List_int_to_int_t rlist );
    List_int_to_int_t (*push) (int_to_int_t item , List_int_to_int_t list );
    List_int_to_int_t (*take) (int len , List_int_to_int_t list );
    List_int_to_int_t (*last) (List_int_to_int_t list );
    List_int_to_int_t (*init) (List_int_to_int_t list );
    int (*hasLen) (List_int_to_int_t list , int desired );
    int (*len) (List_int_to_int_t list );
    List_int_to_int_t (*tail) (List_int_to_int_t list );
    List_int_to_int_t (*drop) (int index , List_int_to_int_t list );
    Maybe_int_to_int_t (*head) (List_int_to_int_t list );
    List_int_to_int_t (*nthcdr) (int index , List_int_to_int_t list );
    Maybe_int_to_int_t (*nth) (int index , List_int_to_int_t list );
} List_int_to_int_t__H_Table;
typedef struct class_List_int_to_int_t {
  const List_int_to_int_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion295 */
    struct { /* ciciliStruct296 */
      int_to_int_t __h_0_mem ;
      List_int_to_int_t __h_1_mem ;
    } Cons , _0 ;
    struct { /* ciciliStruct297 */
    } Nil , _ ;
  } __h_data ;
} class_List_int_to_int_t;
List_int_to_int_t Cons_int_to_int_t (int_to_int_t head , List_int_to_int_t tail );
List_int_to_int_t Nil_int_to_int_t ();
__attribute__((weak)) List_int_to_int_t Default_List_int_to_int_t () {
  return Nil_int_to_int_t ();
}
List_int_to_int_t wrap_List_int_to_int_t (const int_to_int_t item );
List_int_to_int_t pure_List_int_to_int_t (const int_to_int_t * buf , int len );
void show_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t copy_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t replaceAt_List_int_to_int_t (List_int_to_int_t list , int_to_int_t item , int index );
List_int_to_int_t deleteAt_List_int_to_int_t (List_int_to_int_t list , int index );
List_int_to_int_t insertAt_List_int_to_int_t (List_int_to_int_t llist , int_to_int_t item , int index );
List_int_to_int_t replace_List_int_to_int_t (List_int_to_int_t list , int_to_int_t item , List_int_to_int_t aimed );
List_int_to_int_t delete_List_int_to_int_t (List_int_to_int_t list , List_int_to_int_t aimed );
List_int_to_int_t insert_List_int_to_int_t (List_int_to_int_t llist , int_to_int_t item , List_int_to_int_t rlist );
List_int_to_int_t append_List_int_to_int_t (List_int_to_int_t llist , List_int_to_int_t rlist );
List_int_to_int_t push_List_int_to_int_t (int_to_int_t item , List_int_to_int_t list );
List_int_to_int_t take_List_int_to_int_t (int len , List_int_to_int_t list );
List_int_to_int_t last_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t init_List_int_to_int_t (List_int_to_int_t list );
int hasLen_List_int_to_int_t (List_int_to_int_t list , int desired );
int len_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t tail_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t drop_List_int_to_int_t (int index , List_int_to_int_t list );
Maybe_int_to_int_t head_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t nthcdr_List_int_to_int_t (int index , List_int_to_int_t list );
Maybe_int_to_int_t nth_List_int_to_int_t (int index , List_int_to_int_t list );
List_int_to_int_t__H_Table * const get_List_int_to_int_t__H_Table ();
void free_List_int_to_int_t (List_int_to_int_t * this_ptr );
#endif /* __List_int_to_int_t__H_DECL__ */ 
#ifndef __Maybe_List_int_to_int_t__H_DECL__
#define __Maybe_List_int_to_int_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
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
  union { /* ciciliUnion391 */
    struct { /* ciciliStruct392 */
      List_int_to_int_t __h_0_mem ;
    } Just , _0 ;
    struct { /* ciciliStruct393 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_int_to_int_t;
Maybe_List_int_to_int_t Just_List_int_to_int_t (List_int_to_int_t value );
Maybe_List_int_to_int_t Nothing_List_int_to_int_t ();
__attribute__((weak)) Maybe_List_int_to_int_t Default_Maybe_List_int_to_int_t () {
  return Nothing_List_int_to_int_t ();
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
  union { /* ciciliUnion426 */
    struct { /* ciciliStruct427 */
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
Maybe_int_to_int_t Just_int_to_int_t (int_to_int_t value ) {
  return ((Maybe_int_to_int_t){ get_Maybe_int_to_int_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
}
Maybe_int_to_int_t Nothing_int_to_int_t () {
  return ((Maybe_int_to_int_t){ get_Maybe_int_to_int_t__H_Table (), __h___t });
}
#endif /* __Maybe_int_to_int_t__H_IMPL__ */ 
#ifndef __List_int_to_int_t__H_IMPL__
#define __List_int_to_int_t__H_IMPL__
List_int_to_int_t wrap_List_int_to_int_t (const int_to_int_t item ) {
  return Cons_int_to_int_t (item , Nil_int_to_int_t ());
}
List_int_to_int_t pure_List_int_to_int_t (const int_to_int_t * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_int_to_int_t () : ({ /* cicili#Let487 */
        int_to_int_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_int_to_int_t () : Cons_int_to_int_t (item , pure_List_int_to_int_t ((++buf ), (--len ))));
      }));
}
void show_List_int_to_int_t (List_int_to_int_t list ) {
  { /* cicili#Let497 */
    typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
    typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
    // ----------
    
    ({ /* cicili#Let501 */
      bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn502 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn504 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block508 */
          { /* cicili#Block510 */
            { /* cicili#Let514 */
              // ----------
              
              ({ /* cicili#Let518 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block521 */
                    { /* cicili#Block523 */
                      printf ("%p", head );
                      putchar (' ');
                    }
                  }
                else
                  { /* cicili#Let531 */
                    // ----------
                    
                    { /* cicili#Block535 */
                      printf ("%p", head );
                    }
                  }
              });
            }
            show_List_int_to_int_t (tail );
          }
        }
    });
  }
}
List_int_to_int_t copy_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* cicili#Let545 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let549 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn550 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn552 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn555 */
            Cons_int_to_int_t (head , copy_List_int_to_int_t (tail ));
          }) : ({ /* cicili#Let561 */
            // ----------
            
            ({ /* cicili#Progn565 */
              Nil_int_to_int_t ();
            });
          }));
      });
    });
}
List_int_to_int_t replaceAt_List_int_to_int_t (List_int_to_int_t list , int_to_int_t item , int index ) {
  return ({ /* cicili#Let572 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let576 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn577 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn579 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn582 */
            Cons_int_to_int_t (head , replaceAt_List_int_to_int_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let588 */
            // ----------
            
            ({ /* cicili#Progn592 */
              ({ /* cicili#Let596 */
                // ----------
                
                ({ /* cicili#Let600 */
                  bool __h_case_result  = (true  &&  ((list -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn602 */
                      Cons_int_to_int_t (item , copy_List_int_to_int_t (tail ));
                    }) : ({ /* cicili#Let608 */
                      // ----------
                      
                      ({ /* cicili#Progn612 */
                        Nil_int_to_int_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int_to_int_t deleteAt_List_int_to_int_t (List_int_to_int_t list , int index ) {
  return ({ /* cicili#Let619 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let623 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn624 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn626 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn629 */
            Cons_int_to_int_t (head , deleteAt_List_int_to_int_t (tail , (index  -  1 )));
          }) : ({ /* cicili#Let635 */
            // ----------
            
            ({ /* cicili#Progn639 */
              ({ /* cicili#Let643 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let647 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn648 */
                        (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn651 */
                      copy_List_int_to_int_t (tail );
                    }) : ({ /* cicili#Let656 */
                      // ----------
                      
                      ({ /* cicili#Progn660 */
                        Nil_int_to_int_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int_to_int_t insertAt_List_int_to_int_t (List_int_to_int_t llist , int_to_int_t item , int index ) {
  return ({ /* cicili#Let667 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let671 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn672 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn674 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn677 */
            Cons_int_to_int_t (head , insertAt_List_int_to_int_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let683 */
            // ----------
            
            ({ /* cicili#Progn687 */
              Cons_int_to_int_t (item , copy_List_int_to_int_t (llist ));
            });
          }));
      });
    });
}
List_int_to_int_t replace_List_int_to_int_t (List_int_to_int_t list , int_to_int_t item , List_int_to_int_t aimed ) {
  return ({ /* cicili#Let695 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let699 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn700 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn702 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn705 */
            Cons_int_to_int_t (head , replace_List_int_to_int_t (tail , item , aimed ));
          }) : ({ /* cicili#Let711 */
            // ----------
            
            ({ /* cicili#Progn715 */
              ({ /* cicili#Let719 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let723 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn724 */
                        (tail  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn727 */
                      Cons_int_to_int_t (item , copy_List_int_to_int_t (tail ));
                    }) : ({ /* cicili#Let733 */
                      // ----------
                      
                      ({ /* cicili#Progn737 */
                        Nil_int_to_int_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int_to_int_t delete_List_int_to_int_t (List_int_to_int_t list , List_int_to_int_t aimed ) {
  return ({ /* cicili#Let744 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let748 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn749 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn751 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn754 */
            Cons_int_to_int_t (head , delete_List_int_to_int_t (tail , aimed ));
          }) : ({ /* cicili#Let760 */
            // ----------
            
            ({ /* cicili#Progn764 */
              ({ /* cicili#Let768 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let772 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn773 */
                        (tail  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn776 */
                      copy_List_int_to_int_t (tail );
                    }) : ({ /* cicili#Let781 */
                      // ----------
                      
                      ({ /* cicili#Progn785 */
                        Nil_int_to_int_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int_to_int_t insert_List_int_to_int_t (List_int_to_int_t llist , int_to_int_t item , List_int_to_int_t rlist ) {
  return ({ /* cicili#Let792 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let796 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn797 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn799 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn802 */
            Cons_int_to_int_t (head , insert_List_int_to_int_t (tail , item , rlist ));
          }) : ({ /* cicili#Let808 */
            // ----------
            
            ({ /* cicili#Progn812 */
              Cons_int_to_int_t (item , copy_List_int_to_int_t (rlist ));
            });
          }));
      });
    });
}
List_int_to_int_t append_List_int_to_int_t (List_int_to_int_t llist , List_int_to_int_t rlist ) {
  return ({ /* cicili#Let820 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let824 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn825 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn827 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn830 */
            Cons_int_to_int_t (head , append_List_int_to_int_t (tail , rlist ));
          }) : ({ /* cicili#Let836 */
            // ----------
            
            ({ /* cicili#Progn840 */
              copy_List_int_to_int_t (rlist );
            });
          }));
      });
    });
}
List_int_to_int_t push_List_int_to_int_t (int_to_int_t item , List_int_to_int_t list ) {
  return Cons_int_to_int_t (item , copy_List_int_to_int_t (list ));
}
List_int_to_int_t take_List_int_to_int_t (int len , List_int_to_int_t list ) {
  return (((len  <=  0 )) ? Nil_int_to_int_t () : ({ /* cicili#Let853 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let857 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn858 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn860 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn863 */
              Cons_int_to_int_t (head , take_List_int_to_int_t ((--len ), tail ));
            }) : ({ /* cicili#Let869 */
              // ----------
              
              ({ /* cicili#Progn873 */
                Nil_int_to_int_t ();
              });
            }));
        });
      }));
}
List_int_to_int_t last_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* cicili#Let880 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let884 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn885 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn888 */
            ({ /* cicili#Let892 */
              // ----------
              
              ({ /* cicili#Let896 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn898 */
                    copy_List_int_to_int_t (list );
                  }) : ({ /* cicili#Let903 */
                    // ----------
                    
                    ({ /* cicili#Progn907 */
                      last_List_int_to_int_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let912 */
            // ----------
            
            ({ /* cicili#Progn916 */
              Nil_int_to_int_t ();
            });
          }));
      });
    });
}
List_int_to_int_t init_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* cicili#Let924 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let928 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn929 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn931 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn934 */
            Cons_int_to_int_t (head , init_List_int_to_int_t (tail ));
          }) : ({ /* cicili#Let940 */
            // ----------
            
            ({ /* cicili#Progn944 */
              Nil_int_to_int_t ();
            });
          }));
      });
    });
}
int hasLen_List_int_to_int_t (List_int_to_int_t list , int desired ) {
  return ({ /* cicili#Let951 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let955 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn956 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn959 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_int_to_int_t (tail , (--desired )) ));
          }) : ({ /* cicili#Let965 */
            // ----------
            
            ({ /* cicili#Progn969 */
              0;
            });
          }));
      });
    });
}
int len_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* cicili#Let975 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let979 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn980 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn983 */
            (1 +  len_List_int_to_int_t (tail ) );
          }) : ({ /* cicili#Let988 */
            // ----------
            
            ({ /* cicili#Progn992 */
              0;
            });
          }));
      });
    });
}
List_int_to_int_t tail_List_int_to_int_t (List_int_to_int_t list ) {
  return drop_List_int_to_int_t (1, list );
}
List_int_to_int_t drop_List_int_to_int_t (int len , List_int_to_int_t list ) {
  return (((len  <=  0 )) ? copy_List_int_to_int_t (list ) : ({ /* cicili#Let1003 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let1007 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1008 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1011 */
              drop_List_int_to_int_t ((--len ), tail );
            }) : ({ /* cicili#Let1016 */
              // ----------
              
              ({ /* cicili#Progn1020 */
                Nil_int_to_int_t ();
              });
            }));
        });
      }));
}
Maybe_int_to_int_t head_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* cicili#Let1028 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let1032 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1033 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1036 */
            Just_int_to_int_t (head );
          }) : ({ /* cicili#Let1041 */
            // ----------
            
            ({ /* cicili#Progn1045 */
              Nothing_int_to_int_t ();
            });
          }));
      });
    });
}
List_int_to_int_t nthcdr_List_int_to_int_t (int index , List_int_to_int_t list ) {
  return ({ /* cicili#Let1052 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1056 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1057 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1060 */
            nthcdr_List_int_to_int_t ((--index ), tail );
          }) : ({ /* cicili#Let1065 */
            // ----------
            
            ({ /* cicili#Progn1069 */
              list ;
            });
          }));
      });
    });
}
Maybe_int_to_int_t nth_List_int_to_int_t (int index , List_int_to_int_t list ) {
  return ({ /* cicili#Let1076 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1080 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1081 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1083 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1086 */
            (((index  ==  0 )) ? Just_int_to_int_t (head ) : (((index  <  0 )) ? Nothing_int_to_int_t () : nth_List_int_to_int_t ((--index ), tail )));
          }) : ({ /* cicili#Let1095 */
            // ----------
            
            ({ /* cicili#Progn1099 */
              Nothing_int_to_int_t ();
            });
          }));
      });
    });
}
void free_List_int_to_int_t (List_int_to_int_t * this_ptr ) {
  { /* cicili#Let1104 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1108 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1112 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1113 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1117 */
            { /* cicili#Block1119 */
              ({ /* cicili#Progn1122 */
              });
              free_List_int_to_int_t (&tail );
              free (this );
            }
          }
        else
          { /* cicili#Let1128 */
            // ----------
            
            ({ /* cicili#Let1132 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1135 */
                  { /* cicili#Block1137 */
                    ({ /* cicili#Progn1140 */
                    });
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_int_to_int_t__H_Table * const get_List_int_to_int_t__H_Table () {
  static List_int_to_int_t__H_Table table  = { free_List_int_to_int_t , wrap_List_int_to_int_t , pure_List_int_to_int_t , show_List_int_to_int_t , copy_List_int_to_int_t , replaceAt_List_int_to_int_t , deleteAt_List_int_to_int_t , insertAt_List_int_to_int_t , replace_List_int_to_int_t , delete_List_int_to_int_t , insert_List_int_to_int_t , append_List_int_to_int_t , push_List_int_to_int_t , take_List_int_to_int_t , last_List_int_to_int_t , init_List_int_to_int_t , hasLen_List_int_to_int_t , len_List_int_to_int_t , tail_List_int_to_int_t , drop_List_int_to_int_t , head_List_int_to_int_t , nthcdr_List_int_to_int_t , nth_List_int_to_int_t };
  return (&table );
}
List_int_to_int_t Cons_int_to_int_t (int_to_int_t head , List_int_to_int_t tail ) {
  { /* cicili#Let1149 */
    List_int_to_int_t instance  = malloc (sizeof(class_List_int_to_int_t));
    // ----------
    (*instance ) = ((class_List_int_to_int_t){ get_List_int_to_int_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_int_to_int_t Nil_int_to_int_t () {
  { /* cicili#Let1154 */
    List_int_to_int_t instance  = malloc (sizeof(class_List_int_to_int_t));
    // ----------
    (*instance ) = ((class_List_int_to_int_t){ get_List_int_to_int_t__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_int_to_int_t__H_IMPL__ */ 
#ifndef __Maybe_List_int_to_int_t__H_IMPL__
#define __Maybe_List_int_to_int_t__H_IMPL__
void free_Maybe_List_int_to_int_t (Maybe_List_int_to_int_t * this ) {
}
const Maybe_List_int_to_int_t__H_Table * const get_Maybe_List_int_to_int_t__H_Table () {
  static const Maybe_List_int_to_int_t__H_Table table  = { free_Maybe_List_int_to_int_t };
  return (&table );
}
Maybe_List_int_to_int_t Just_List_int_to_int_t (List_int_to_int_t value ) {
  return ((Maybe_List_int_to_int_t){ get_Maybe_List_int_to_int_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
}
Maybe_List_int_to_int_t Nothing_List_int_to_int_t () {
  return ((Maybe_List_int_to_int_t){ get_Maybe_List_int_to_int_t__H_Table (), __h___t });
}
#endif /* __Maybe_List_int_to_int_t__H_IMPL__ */ 
#ifndef __Applicative_List_int_int__H_IMPL__
#define __Applicative_List_int_int__H_IMPL__
List_int ap_Applicative_List_int_int (List_int_to_int_t f_a_b , List_int input ) {
  return ({ /* cicili#Let1183 */
      typeof((((f_a_b -> __h_data ). Cons ). __h_0_mem )) a_b ;
      typeof((((f_a_b -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1187 */
        bool __h_case_result  = (true  &&  (((f_a_b -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1188 */
                (a_b  =  (((f_a_b -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1190 */
                (tail  =  (((f_a_b -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1193 */
            mconcat_List_int (Cons_List_int (fmap_Functor_List_int_int (a_b , input ), wrap_List_List_int (ap_Applicative_List_int_int (tail , input ))));
          }) : ({ /* cicili#Let1202 */
            // ----------
            
            ({ /* cicili#Progn1206 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int_to_int_t pure_Applicative_List_int_int (int_to_int_t a_b ) {
  return wrap_List_int_to_int_t (a_b );
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
  __h_Nothing_t = 0,
  __h_Just_t = 1
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
  union { /* ciciliUnion1246 */
    struct { /* ciciliStruct1247 */
      Maybe_int_to_int_t __h_0_mem ;
    } Just , _0 ;
    struct { /* ciciliStruct1248 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Maybe_int_to_int_t;
Maybe_Maybe_int_to_int_t Just_Maybe_int_to_int_t (Maybe_int_to_int_t value );
Maybe_Maybe_int_to_int_t Nothing_Maybe_int_to_int_t ();
__attribute__((weak)) Maybe_Maybe_int_to_int_t Default_Maybe_Maybe_int_to_int_t () {
  return Nothing_Maybe_int_to_int_t ();
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
  union { /* ciciliUnion1281 */
    struct { /* ciciliStruct1282 */
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
Maybe_Maybe_int_to_int_t Just_Maybe_int_to_int_t (Maybe_int_to_int_t value ) {
  return ((Maybe_Maybe_int_to_int_t){ get_Maybe_Maybe_int_to_int_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
}
Maybe_Maybe_int_to_int_t Nothing_Maybe_int_to_int_t () {
  return ((Maybe_Maybe_int_to_int_t){ get_Maybe_Maybe_int_to_int_t__H_Table (), __h___t });
}
#endif /* __Maybe_Maybe_int_to_int_t__H_IMPL__ */ 
#ifndef __Applicative_Maybe_int_int__H_IMPL__
#define __Applicative_Maybe_int_int__H_IMPL__
Maybe_int ap_Applicative_Maybe_int_int (Maybe_int_to_int_t f_a_b , Maybe_int input ) {
  return ({ /* cicili#Let1338 */
      typeof((((f_a_b . __h_data ). Just ). __h_0_mem )) a_b ;
      // ----------
      
      ({ /* cicili#Let1342 */
        bool __h_case_result  = (true  &&  (((f_a_b . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1343 */
              (a_b  =  (((f_a_b . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1346 */
            fmap_Functor_Maybe_int_int (a_b , input );
          }) : ({ /* cicili#Let1351 */
            // ----------
            
            ({ /* cicili#Progn1355 */
              Nothing_int ();
            });
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
int __ciciliL_1711 (int value ) {
  return (5 *  value  );
}
Bool __ciciliL_1720 (int value ) {
  return (((value  %  3 )) ? False () : True ());
}
int __ciciliL_1782 (int value ) {
  return (15 *  value  );
}
int __ciciliL_1815 (int __h_value ) {
  return (15 *  __h_value  );
}
int __ciciliL_1889 (int value ) {
  return (3 *  value  );
}
int __ciciliL_1891 (int value ) {
  return (4 +  value  );
}
int main () {
  fprintf (stdout , "concepts test\n");
  { /* cicili#Let1391 */
    __auto_type match1390  = divideByZero (34, 0);
    typeof((((match1390 . __h_data ). Left ). __h_0_mem )) e ;
    // ----------
    
    ({ /* cicili#Let1395 */
      bool __h_case_result  = (true  &&  (((match1390 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn1396 */
            (e  =  (((match1390 . __h_data ). Left ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1400 */
          ({ /* cicili#Progn1402 */
            printf ("error raised: ");
            show_String (e );
            putchar ('\n');
            free_String ((&e ));
          });
        }
      else
        { /* cicili#Let1407 */
          typeof((((match1390 . __h_data ). Right ). __h_0_mem )) a ;
          // ----------
          
          ({ /* cicili#Let1411 */
            bool __h_case_result  = (true  &&  (((match1390 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn1412 */
                  (a  =  (((match1390 . __h_data ). Right ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1416 */
                printf ("division result: %d\n", a );
              }
          });
        }
    });
  }
  { /* cicili#Let1420 */
    __auto_type match1419  = divideByZero (34, 2);
    typeof((((match1419 . __h_data ). Left ). __h_0_mem )) e ;
    // ----------
    
    ({ /* cicili#Let1424 */
      bool __h_case_result  = (true  &&  (((match1419 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn1425 */
            (e  =  (((match1419 . __h_data ). Left ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1429 */
          ({ /* cicili#Progn1431 */
            printf ("error raised: ");
            show_String (e );
            putchar ('\n');
            free_String ((&e ));
          });
        }
      else
        { /* cicili#Let1436 */
          typeof((((match1419 . __h_data ). Right ). __h_0_mem )) a ;
          // ----------
          
          ({ /* cicili#Let1440 */
            bool __h_case_result  = (true  &&  (((match1419 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn1441 */
                  (a  =  (((match1419 . __h_data ). Right ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1445 */
                printf ("division result: %d\n", a );
              }
          });
        }
    });
  }
  ({ /* cicili#Let1448 */
    __auto_type rc0  __attribute__((__cleanup__(__h_free_data_router ))) = new_Rc_List_int (({ /* cicili#Let1451 */
      __auto_type rc0  = pure_List_int (((const int[]){ 1, 2, 3, 4}), 4);
      // ----------
      ((void)(rc0 -> __h_table -> freeClass ));
      rc0 ;
    }));
    // ----------
    { /* cicili#Let1458 */
      __auto_type match1457  = get_Rc_List_int (rc0 );
      typeof((((match1457 . __h_data ). Just ). __h_0_mem )) list0 ;
      // ----------
      
      ({ /* cicili#Let1462 */
        bool __h_case_result  = (true  &&  (((match1457 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1463 */
              (list0  =  (((match1457 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1467 */
            { /* cicili#Block1469 */
              fprintf (stdout , "list from rc0: ");
              show_List_int (list0 );
              putchar ('\n');
            }
          }
      });
    }
    ({ /* cicili#Let1473 */
      __auto_type rc1  __attribute__((__cleanup__(free_Rc_List_int ))) = clone_Rc_List_int (rc0 );
      // ----------
      { /* cicili#Let1477 */
        __auto_type match1476  = get_Rc_List_int (rc1 );
        typeof((((match1476 . __h_data ). Just ). __h_0_mem )) list1 ;
        // ----------
        
        ({ /* cicili#Let1481 */
          bool __h_case_result  = (true  &&  (((match1476 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1482 */
                (list1  =  (((match1476 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block1486 */
              { /* cicili#Block1488 */
                fprintf (stdout , "list from rc1: ");
                show_List_int (list1 );
                putchar ('\n');
              }
            }
        });
      }
    });
  });
  ({ /* cicili#Let1492 */
    __auto_type chrlst  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1494 */
      __auto_type chrlst  = new_String_Const ("Hello List!");
      // ----------
      ((void)(chrlst -> __h_table -> freeClass ));
      chrlst ;
    });
    __auto_type m0  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1499 */
      __auto_type m0  = nth_String (3, chrlst );
      // ----------
      ((void)((m0 . __h_table )-> freeData ));
      m0 ;
    });
    __auto_type m1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1502 */
      __auto_type m1  = nth_String (15, chrlst );
      // ----------
      ((void)((m1 . __h_table )-> freeData ));
      m1 ;
    });
    // ----------
    show_String (chrlst );
    putchar ('\n');
    reduce_List_char (((List_char)(*((List_char *)(&chrlst )))));
    putchar ('\n');
    { /* cicili#Let1508 */
      typeof((((m0 . __h_data ). Just ). __h_0_mem )) ch ;
      // ----------
      
      ({ /* cicili#Let1512 */
        bool __h_case_result  = (true  &&  (((m0 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1513 */
              (ch  =  (((m0 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1517 */
            fprintf (stdout , "4th element is: %c\n", ch );
          }
        else
          { /* cicili#Let1523 */
            // ----------
            
            ({ /* cicili#Let1527 */
              bool __h_case_result  = (true  &&  ((m0 . __h_ctor ) ==  __h_Nothing_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1530 */
                  fprintf (stdout , "4th element is: Nothing\n");
                }
            });
          }
      });
    }
    { /* cicili#Let1535 */
      typeof((((m1 . __h_data ). Just ). __h_0_mem )) ch ;
      // ----------
      
      ({ /* cicili#Let1539 */
        bool __h_case_result  = (true  &&  (((m1 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1540 */
              (ch  =  (((m1 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1544 */
            fprintf (stdout , "16th element is: %c\n", ch );
          }
        else
          { /* cicili#Let1550 */
            // ----------
            
            ({ /* cicili#Let1554 */
              bool __h_case_result  = (true  &&  ((m1 . __h_ctor ) ==  __h_Nothing_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1557 */
                  fprintf (stdout , "16th element is: Nothing\n");
                }
            });
          }
      });
    }
  });
  fprintf (stdout , "Sum of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let1563 */
      __auto_type match1562  = get_Monoid_Sum_int ();
      typeof((((match1562 . __h_data ). Monoid ). __h_0_mem )) mappend ;
      typeof((((match1562 . __h_data ). Monoid ). __h_1_mem )) mempty ;
      typeof((((match1562 . __h_data ). Monoid ). __h_2_mem )) mconcat ;
      // ----------
      
      ({ /* cicili#Let1567 */
        bool __h_case_result  = (true  &&  (((match1562 . __h_ctor ) ==  __h_Monoid_t  ) &&  ((({ /* cicili#Progn1568 */
                  (mappend  =  (((match1562 . __h_data ). Monoid ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1570 */
                  (mempty  =  (((match1562 . __h_data ). Monoid ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1572 */
                (mconcat  =  (((match1562 . __h_data ). Monoid ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1575 */
            ({ /* cicili#Let1578 */
              __auto_type l  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1580 */
                __auto_type l  = pure_List_int (((const int[]){ 1, 3, 5, 7}), 4);
                // ----------
                ((void)(l -> __h_table -> freeClass ));
                l ;
              });
              // ----------
              fprintf (stdout , "Sum mempty is: %d\n", mempty );
              fprintf (stdout , "left identity (%d 12) is: %d\n", mempty , mappend (mempty , 12));
              fprintf (stdout , "right identity (12 %d) is: %d\n", mempty , mappend (12, mempty ));
              fprintf (stdout , "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n", mappend (5, mappend (7, 12)), mappend (mappend (5, 7), 12));
              mconcat (l );
            });
          }) : ({ /* cicili#Let1592 */
            // ----------
            
            ({ /* cicili#Progn1596 */
              -1;
            });
          }));
      });
    }));
  fprintf (stdout , "Product of List (mconcat) of '{ 1 3 5 7 } is: %d\n", ({ /* cicili#Let1601 */
      __auto_type match1600  = get_Monoid_Product_int ();
      typeof((((match1600 . __h_data ). Monoid ). __h_0_mem )) mappend ;
      typeof((((match1600 . __h_data ). Monoid ). __h_1_mem )) mempty ;
      typeof((((match1600 . __h_data ). Monoid ). __h_2_mem )) mconcat ;
      // ----------
      
      ({ /* cicili#Let1605 */
        bool __h_case_result  = (true  &&  (((match1600 . __h_ctor ) ==  __h_Monoid_t  ) &&  ((({ /* cicili#Progn1606 */
                  (mappend  =  (((match1600 . __h_data ). Monoid ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1608 */
                  (mempty  =  (((match1600 . __h_data ). Monoid ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1610 */
                (mconcat  =  (((match1600 . __h_data ). Monoid ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1613 */
            ({ /* cicili#Let1616 */
              __auto_type l  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1618 */
                __auto_type l  = pure_List_int (((const int[]){ 1, 3, 5, 7}), 4);
                // ----------
                ((void)(l -> __h_table -> freeClass ));
                l ;
              });
              // ----------
              fprintf (stdout , "Product mempty is: %d\n", mempty );
              fprintf (stdout , "left identity (%d 12) is: %d\n", mempty , mappend (mempty , 12));
              fprintf (stdout , "right identity (12 %d) is: %d\n", mempty , mappend (12, mempty ));
              fprintf (stdout , "associativity: (5 (7 12)) is: %d and ((5 7) 12)) is: %d\n", mappend (5, mappend (7, 12)), mappend (mappend (5, 7), 12));
              mconcat (l );
            });
          }) : ({ /* cicili#Let1630 */
            // ----------
            
            ({ /* cicili#Progn1634 */
              -1;
            });
          }));
      });
    }));
  ({ /* cicili#Let1637 */
    __auto_type l1  = pure_List_int (((const int[]){ 1, 3, 5}), 3);
    __auto_type l2  = pure_List_int (((const int[]){ 2, 4, 6}), 3);
    __auto_type l3  = pure_List_int (((const int[]){ 7, 8, 9}), 3);
    __auto_type l4  = pure_List_List_int (((const List_int[]){ l1 , l2 , l3 }), 3);
    // ----------
    ({ /* cicili#Let1652 */
      __auto_type result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1654 */
        __auto_type result  = mconcat_List_int (l4 );
        // ----------
        ((void)(result -> __h_table -> freeClass ));
        result ;
      });
      // ----------
      fprintf (stdout , "Concat of Lists (mconcat Monoid) of '{ 1 3 5 } and '{ 2 4 6 } and '{ 7 8 9 } is:\n");
      show_List_int (result );
      putchar ('\n');
    });
  });
  { /* cicili#Let1660 */
    __auto_type match1659  = get_Semigroup_String_char ();
    typeof((((match1659 . __h_data ). Semigroup ). __h_0_mem )) mappend ;
    // ----------
    
    ({ /* cicili#Let1664 */
      bool __h_case_result  = (true  &&  (((match1659 . __h_ctor ) ==  __h_Semigroup_t  ) &&  ({ /* cicili#Progn1665 */
            (mappend  =  (((match1659 . __h_data ). Semigroup ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1669 */
          ({ /* cicili#Let1672 */
            __auto_type s1  = pure_List_char ("Hello ", 6);
            __auto_type s2  = pure_List_char ("Cicili!", 7);
            // ----------
            ({ /* cicili#Let1681 */
              __auto_type result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1683 */
                __auto_type result  = mappend (s1 , s2 );
                // ----------
                ((void)(result -> __h_table -> freeClass ));
                result ;
              });
              // ----------
              fprintf (stdout , "Concat of Strings (mappend Semigroup) of 'Hello ' and 'Cicili' is:\n");
              show_String (((String)(*((String *)(&result )))));
              putchar ('\n');
            });
          });
        }
    });
  }
  ({ /* cicili#Let1689 */
    __auto_type ftor_mul_5  = get_Functor_List_int_int ();
    __auto_type ftor_mod_3  = get_Functor_List_int_Bool ();
    // ----------
    ({ /* cicili#Let1698 */
      __auto_type l1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1700 */
        __auto_type l1  = pure_List_int (((const int[]){ 1, 2, 3, 4, 5, 6}), 6);
        // ----------
        ((void)(l1 -> __h_table -> freeClass ));
        l1 ;
      });
      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1706 */
        __auto_type r1  = ((&ftor_mul_5 )-> __h_table -> fmap )(__ciciliL_1711 , l1 );
        // ----------
        ((void)(r1 -> __h_table -> freeClass ));
        r1 ;
      });
      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1715 */
        __auto_type r2  = ((&ftor_mod_3 )-> __h_table -> fmap )(__ciciliL_1720 , r1 );
        // ----------
        ((void)(r2 -> __h_table -> freeClass ));
        r2 ;
      });
      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1725 */
        __auto_type r3  = ({ /* cicili#Let1734 */
          __auto_type strict_in  __attribute__((__cleanup__(free_List_int ))) = fmap_Functor_List_int_int (({ /* cicili#Progn1739 */
            int __ciciliC_1738 (int __h_value ) {
              return (5 *  __h_value  );
            }
            __ciciliC_1738 ;
          }), l1 );
          // ----------
          fmap_Functor_List_int_Bool (({ /* cicili#Progn1751 */
              Bool __ciciliC_1750 (int __h_value ) {
                return (((__h_value  %  3 )) ? False () : True ());
              }
              __ciciliC_1750 ;
            }), strict_in );
        });
        // ----------
        ((void)(r3 -> __h_table -> freeClass ));
        r3 ;
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
      { /* cicili#Let1765 */
        __auto_type match1764  = get_Monoid_All_Bool ();
        typeof((((match1764 . __h_data ). _ ). __h_2_mem )) mconcat ;
        // ----------
        
        ({ /* cicili#Let1769 */
          bool __h_case_result  = (true  &&  (((match1764 . __h_ctor ) ==  __h___t  ) &&  ({ /* cicili#Progn1770 */
                (mconcat  =  (((match1764 . __h_data ). _ ). __h_2_mem ) );
                true ;
              }) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block1774 */
              ({ /* cicili#Progn1776 */
                fprintf (stdout , "the result of 'All' monoid is: ");
                show_Bool (mconcat (r3 ));
                putchar ('\n');
              });
            }
        });
      }
      fprintf (stdout , "the result of 'Any' monoid is: ");
      show_Bool (mconcat_Any_Bool (r3 ));
      putchar ('\n');
    });
  });
  ({ /* cicili#Let1781 */
    __auto_type mul_15  = __ciciliL_1782 ;
    __auto_type apmii  = get_Applicative_Maybe_int_int ();
    // ----------
    { /* cicili#Let1787 */
      __auto_type match1786  = ((&apmii )-> __h_table -> ap )(((&apmii )-> __h_table -> pure )(mul_15 ), Just_int (12));
      typeof((((match1786 . __h_data ). Just ). __h_0_mem )) output ;
      // ----------
      
      ({ /* cicili#Let1793 */
        bool __h_case_result  = (true  &&  (((match1786 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1794 */
              (output  =  (((match1786 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1798 */
            fprintf (stdout , "the result of 'Applicative for Maybe (*15) (Just 12)' is: Just %d\n", output );
          }
        else
          { /* cicili#Let1804 */
            // ----------
            
            { /* cicili#Block1808 */
              fprintf (stdout , "the result of 'Applicative for Maybe (*15) (Just 12)' is: Nothing\n");
            }
          }
      });
    }
  });
  ({ /* cicili#Let1812 */
    __auto_type wrapped  = pure_Applicative_Maybe_int_int (__ciciliL_1815 );
    // ----------
    { /* cicili#Let1824 */
      __auto_type match1823  = ap_Applicative_Maybe_int_int (wrapped , Just_int (12));
      typeof((((match1823 . __h_data ). Just ). __h_0_mem )) output ;
      // ----------
      
      ({ /* cicili#Let1832 */
        bool __h_case_result  = (true  &&  (((match1823 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1833 */
              (output  =  (((match1823 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1837 */
            fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) (Just 12)' is: Just %d\n", output );
          }
        else
          { /* cicili#Let1843 */
            // ----------
            
            { /* cicili#Block1847 */
              fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) (Just 12)' is: Nothing\n");
            }
          }
      });
    }
    { /* cicili#Let1852 */
      __auto_type match1851  = ap_Applicative_Maybe_int_int (wrapped , Nothing_int ());
      typeof((((match1851 . __h_data ). Just ). __h_0_mem )) output ;
      // ----------
      
      ({ /* cicili#Let1860 */
        bool __h_case_result  = (true  &&  (((match1851 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1861 */
              (output  =  (((match1851 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1865 */
            fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) Nothing' is: Just %d\n", output );
          }
        else
          { /* cicili#Let1871 */
            // ----------
            
            { /* cicili#Block1875 */
              fprintf (stdout , "the result of easy 'Applicative for Maybe (*15) Nothing' is: Nothing\n");
            }
          }
      });
    }
  });
  ({ /* cicili#Let1883 */
    __auto_type lf  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1885 */
      __auto_type lf  = pure_List_int_to_int_t (((const int_to_int_t[]){ __ciciliL_1889 , __ciciliL_1891 }), 2);
      // ----------
      ((void)(lf -> __h_table -> freeClass ));
      lf ;
    });
    __auto_type li  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1895 */
      __auto_type li  = pure_List_int (((const int[]){ 1, 2, 3, 4, 5, 6}), 6);
      // ----------
      ((void)(li -> __h_table -> freeClass ));
      li ;
    });
    __auto_type afi  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let1901 */
      __auto_type afi  = ap_Applicative_List_int_int (lf , li );
      // ----------
      ((void)(afi -> __h_table -> freeClass ));
      afi ;
    });
    // ----------
    fprintf (stdout , "applicative [(*3) (+4)] of { 1 2 3 4 5 6 } is:\n");
    show_List_int (afi );
    putchar ('\n');
  });
}
