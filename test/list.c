#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
#ifndef __Maybe_int__H_DECL__
#define __Maybe_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_int Maybe_int ;
typedef void (*free_Maybe_int_t) (Maybe_int * this );
typedef struct Maybe_int__H_Table {
  free_Maybe_int_t freeData ;
} Maybe_int__H_Table;
typedef struct Maybe_int {
  const Maybe_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion115 */
    struct { /* ciciliStruct116 */
      int __h_0_mem ;
    } Just , _0 ;
    struct { /* ciciliStruct117 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_int;
Maybe_int Just_int (int value );
Maybe_int Nothing_int ();
__attribute__((weak)) Maybe_int Default_Maybe_int () {
  return Nothing_int ();
}
const Maybe_int__H_Table * const get_Maybe_int__H_Table ();
void free_Maybe_int (Maybe_int * this );
#endif /* __Maybe_int__H_DECL__ */ 
#ifndef __BoxedList_int__H_DECL__
#define __BoxedList_int__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_BoxedList_int class_BoxedList_int ;
typedef class_BoxedList_int * BoxedList_int_x ;
#ifndef __Maybe_BoxedList_int_x__H_DECL__
#define __Maybe_BoxedList_int_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BoxedList_int_x Maybe_BoxedList_int_x ;
typedef void (*free_Maybe_BoxedList_int_x_t) (Maybe_BoxedList_int_x * this );
typedef struct Maybe_BoxedList_int_x__H_Table {
  free_Maybe_BoxedList_int_x_t freeData ;
} Maybe_BoxedList_int_x__H_Table;
typedef struct Maybe_BoxedList_int_x {
  const Maybe_BoxedList_int_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion148 */
    struct { /* ciciliStruct149 */
      BoxedList_int_x __h_0_mem ;
    } Just , _0 ;
    struct { /* ciciliStruct150 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BoxedList_int_x;
Maybe_BoxedList_int_x Just_BoxedList_int_x (BoxedList_int_x value );
Maybe_BoxedList_int_x Nothing_BoxedList_int_x ();
__attribute__((weak)) Maybe_BoxedList_int_x Default_Maybe_BoxedList_int_x () {
  return Nothing_BoxedList_int_x ();
}
const Maybe_BoxedList_int_x__H_Table * const get_Maybe_BoxedList_int_x__H_Table ();
void free_Maybe_BoxedList_int_x (Maybe_BoxedList_int_x * this );
#endif /* __Maybe_BoxedList_int_x__H_DECL__ */ 
#ifndef __Box_BoxedList_int__H_DECL__
#define __Box_BoxedList_int__H_DECL__
#ifndef __H___h_Cell_ctor_t__
#define __H___h_Cell_ctor_t__
typedef enum __h_Cell_ctor_t {
  __h_Dead_t = 0,
  __h_Alive_t = 1
} __h_Cell_ctor_t;
#endif /* __H___h_Cell_ctor_t__ */ 
typedef struct Box_BoxedList_int Box_BoxedList_int ;
typedef void (*free_Box_BoxedList_int_t) (Box_BoxedList_int * this );
typedef struct Box_BoxedList_int__H_Table {
  free_Box_BoxedList_int_t freeData ;
    Box_BoxedList_int (*new) (BoxedList_int_x pointer );
    Maybe_BoxedList_int_x (*take) (Box_BoxedList_int * this );
    Maybe_BoxedList_int_x (*get) (Box_BoxedList_int life );
} Box_BoxedList_int__H_Table;
typedef struct Box_BoxedList_int {
  const Box_BoxedList_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion179 */
    struct { /* ciciliStruct180 */
      BoxedList_int_x * __h_0_mem ;
      size_t __h_1_mem ;
    } Alive , _0 ;
    struct { /* ciciliStruct181 */
    } Dead , _ ;
  } __h_data ;
} Box_BoxedList_int;
Box_BoxedList_int __h_Alive_BoxedList_int_x (BoxedList_int_x * pointer , size_t address );
Box_BoxedList_int Dead_BoxedList_int_x ();
__attribute__((weak)) Box_BoxedList_int Default_Box_BoxedList_int () {
  return Dead_BoxedList_int_x ();
}
Box_BoxedList_int new_Box_BoxedList_int (BoxedList_int_x pointer );
Maybe_BoxedList_int_x take_Box_BoxedList_int (Box_BoxedList_int * this );
Maybe_BoxedList_int_x get_Box_BoxedList_int (Box_BoxedList_int life );
const Box_BoxedList_int__H_Table * const get_Box_BoxedList_int__H_Table ();
void free_Box_BoxedList_int (Box_BoxedList_int * this );
#endif /* __Box_BoxedList_int__H_DECL__ */ 
typedef Box_BoxedList_int BoxedList_int ;
typedef void (*free_BoxedList_int_t) (BoxedList_int_x * this );
typedef struct BoxedList_int__H_Table {
  free_BoxedList_int_t freeData ;
    int * (*toArray) (BoxedList_int list , int term );
    BoxedList_int (*wrap) (const int item );
    BoxedList_int (*pure) (const int * buf , int len );
    int (*show) (CFile file , BoxedList_int list );
    BoxedList_int (*copy) (BoxedList_int list );
    BoxedList_int (*replaceAt) (BoxedList_int list , int item , int index );
    BoxedList_int (*deleteAt) (BoxedList_int list , int index );
    BoxedList_int (*insertAt) (BoxedList_int llist , int item , int index );
    BoxedList_int (*replace) (BoxedList_int list , int item , BoxedList_int aimed );
    BoxedList_int (*delete) (BoxedList_int list , BoxedList_int aimed );
    BoxedList_int (*insert) (BoxedList_int llist , int item , BoxedList_int rlist );
    BoxedList_int (*reverse) (BoxedList_int list );
    BoxedList_int (*append) (BoxedList_int llist , BoxedList_int rlist );
    BoxedList_int (*push) (int item , BoxedList_int list );
    BoxedList_int (*take) (int len , BoxedList_int list );
    BoxedList_int (*last) (BoxedList_int list );
    BoxedList_int (*init) (BoxedList_int list );
    int (*hasLen) (BoxedList_int list , int desired );
    int (*len) (BoxedList_int list );
    BoxedList_int (*tail) (BoxedList_int list );
    BoxedList_int (*drop) (int index , BoxedList_int list );
    Maybe_int (*head) (BoxedList_int list );
    BoxedList_int (*nthcdr) (int index , BoxedList_int list );
    Maybe_int (*nth) (int index , BoxedList_int list );
} BoxedList_int__H_Table;
typedef struct class_BoxedList_int {
  const BoxedList_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion240 */
    struct { /* ciciliStruct241 */
      int __h_0_mem ;
      BoxedList_int __h_1_mem ;
    } Cons , _0 ;
    struct { /* ciciliStruct242 */
    } Nil , _ ;
  } __h_data ;
} class_BoxedList_int;
BoxedList_int BoxedCons_int (int head , BoxedList_int tail );
BoxedList_int BoxedNil_int ();
__attribute__((weak)) BoxedList_int Default_BoxedList_int () {
  return BoxedNil_int ();
}
int * toArray_BoxedList_int (BoxedList_int list , int term );
BoxedList_int wrap_BoxedList_int (const int item );
BoxedList_int pure_BoxedList_int (const int * buf , int len );
int show_BoxedList_int (CFile file , BoxedList_int list );
BoxedList_int copy_BoxedList_int (BoxedList_int list );
BoxedList_int replaceAt_BoxedList_int (BoxedList_int list , int item , int index );
BoxedList_int deleteAt_BoxedList_int (BoxedList_int list , int index );
BoxedList_int insertAt_BoxedList_int (BoxedList_int llist , int item , int index );
BoxedList_int replace_BoxedList_int (BoxedList_int list , int item , BoxedList_int aimed );
BoxedList_int delete_BoxedList_int (BoxedList_int list , BoxedList_int aimed );
BoxedList_int insert_BoxedList_int (BoxedList_int llist , int item , BoxedList_int rlist );
BoxedList_int reverse_BoxedList_int (BoxedList_int list );
BoxedList_int append_BoxedList_int (BoxedList_int llist , BoxedList_int rlist );
BoxedList_int push_BoxedList_int (int item , BoxedList_int list );
BoxedList_int take_BoxedList_int (int len , BoxedList_int list );
BoxedList_int last_BoxedList_int (BoxedList_int list );
BoxedList_int init_BoxedList_int (BoxedList_int list );
int hasLen_BoxedList_int (BoxedList_int list , int desired );
int len_BoxedList_int (BoxedList_int list );
BoxedList_int tail_BoxedList_int (BoxedList_int list );
BoxedList_int drop_BoxedList_int (int index , BoxedList_int list );
Maybe_int head_BoxedList_int (BoxedList_int list );
BoxedList_int nthcdr_BoxedList_int (int index , BoxedList_int list );
Maybe_int nth_BoxedList_int (int index , BoxedList_int list );
BoxedList_int__H_Table * const get_BoxedList_int__H_Table ();
void free_BoxedList_int_x (BoxedList_int_x * this );
#endif /* __BoxedList_int__H_DECL__ */ 
#ifndef __Maybe_BoxedList_int__H_DECL__
#define __Maybe_BoxedList_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BoxedList_int Maybe_BoxedList_int ;
typedef void (*free_Maybe_BoxedList_int_t) (Maybe_BoxedList_int * this );
typedef struct Maybe_BoxedList_int__H_Table {
  free_Maybe_BoxedList_int_t freeData ;
} Maybe_BoxedList_int__H_Table;
typedef struct Maybe_BoxedList_int {
  const Maybe_BoxedList_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion342 */
    struct { /* ciciliStruct343 */
      BoxedList_int __h_0_mem ;
    } Just , _0 ;
    struct { /* ciciliStruct344 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BoxedList_int;
Maybe_BoxedList_int Just_BoxedList_int (BoxedList_int value );
Maybe_BoxedList_int Nothing_BoxedList_int ();
__attribute__((weak)) Maybe_BoxedList_int Default_Maybe_BoxedList_int () {
  return Nothing_BoxedList_int ();
}
const Maybe_BoxedList_int__H_Table * const get_Maybe_BoxedList_int__H_Table ();
void free_Maybe_BoxedList_int (Maybe_BoxedList_int * this );
#endif /* __Maybe_BoxedList_int__H_DECL__ */ 
#ifndef __Maybe_int__H_IMPL__
#define __Maybe_int__H_IMPL__
void free_Maybe_int (Maybe_int * this ) {
}
const Maybe_int__H_Table * const get_Maybe_int__H_Table () {
  static const Maybe_int__H_Table table  = { free_Maybe_int };
  return (&table );
}
Maybe_int Just_int (int value ) {
  return ((Maybe_int){ get_Maybe_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
}
Maybe_int Nothing_int () {
  return ((Maybe_int){ get_Maybe_int__H_Table (), __h___t });
}
#endif /* __Maybe_int__H_IMPL__ */ 
#ifndef __BoxedList_int__H_IMPL__
#define __BoxedList_int__H_IMPL__
#ifndef __Maybe_BoxedList_int_x__H_IMPL__
#define __Maybe_BoxedList_int_x__H_IMPL__
void free_Maybe_BoxedList_int_x (Maybe_BoxedList_int_x * this ) {
}
const Maybe_BoxedList_int_x__H_Table * const get_Maybe_BoxedList_int_x__H_Table () {
  static const Maybe_BoxedList_int_x__H_Table table  = { free_Maybe_BoxedList_int_x };
  return (&table );
}
Maybe_BoxedList_int_x Just_BoxedList_int_x (BoxedList_int_x value ) {
  return ((Maybe_BoxedList_int_x){ get_Maybe_BoxedList_int_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
}
Maybe_BoxedList_int_x Nothing_BoxedList_int_x () {
  return ((Maybe_BoxedList_int_x){ get_Maybe_BoxedList_int_x__H_Table (), __h___t });
}
#endif /* __Maybe_BoxedList_int_x__H_IMPL__ */ 
#ifndef __Box_BoxedList_int__H_IMPL__
#define __Box_BoxedList_int__H_IMPL__
Box_BoxedList_int new_Box_BoxedList_int (BoxedList_int_x pointer ) {
  return ({ /* cicili#Let403 */
      __auto_type holder  = ((BoxedList_int_x *)malloc (sizeof(BoxedList_int_x *)));
      // ----------
      (*holder ) = pointer ;
      __h_Alive_BoxedList_int_x (holder , ((size_t)pointer ));
    });
}
Maybe_BoxedList_int_x take_Box_BoxedList_int (Box_BoxedList_int * this ) {
  return ({ /* cicili#Let411 */
      typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      
      ({ /* cicili#Let415 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn416 */
                (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn418 */
                (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn421 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let425 */
                __auto_type result  = Just_BoxedList_int_x ((*pointer ));
                // ----------
                ({ /* cicili#Progn429 */
                });
                (*pointer ) = NULL ;
                free (((void *)pointer ));
                (*this ) = Dead_BoxedList_int_x ();
                result ;
              }) : Nothing_BoxedList_int_x ());
          }) : ({ /* cicili#Let435 */
            // ----------
            
            ({ /* cicili#Progn439 */
              Nothing_BoxedList_int_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList_int_x get_Box_BoxedList_int (Box_BoxedList_int life ) {
  return ({ /* cicili#Let447 */
      typeof((((life . __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((life . __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      
      ({ /* cicili#Let451 */
        bool __h_case_result  = (true  &&  (((life . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn452 */
                (pointer  =  (((life . __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn454 */
                (address  =  (((life . __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn457 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? Just_BoxedList_int_x ((*pointer )) : Nothing_BoxedList_int_x ());
          }) : ({ /* cicili#Let464 */
            // ----------
            
            ({ /* cicili#Progn468 */
              Nothing_BoxedList_int_x ();
            });
          }));
      });
    });
}
void free_Box_BoxedList_int (Box_BoxedList_int * this ) {
  ({ /* cicili#Progn474 */
  });
  { /* cicili#Let478 */
    typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
    // ----------
    
    ({ /* cicili#Let482 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn483 */
              (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn485 */
              (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block489 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block493 */
              ({ /* cicili#Progn496 */
              });
              free_BoxedList_int_x (pointer );
              (*pointer ) = NULL ;
              free (((void *)pointer ));
              (*this ) = Dead_BoxedList_int_x ();
            }
        }
      else
        { /* cicili#Let503 */
          // ----------
          
          ({ /* cicili#Let507 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Dead_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block510 */
                ({ /* cicili#Progn513 */
                });
              }
          });
        }
    });
  }
}
const Box_BoxedList_int__H_Table * const get_Box_BoxedList_int__H_Table () {
  static const Box_BoxedList_int__H_Table table  = { free_Box_BoxedList_int , new_Box_BoxedList_int , take_Box_BoxedList_int , get_Box_BoxedList_int };
  return (&table );
}
Box_BoxedList_int __h_Alive_BoxedList_int_x (BoxedList_int_x * pointer , size_t address ) {
  return ((Box_BoxedList_int){ get_Box_BoxedList_int__H_Table (), __h_Alive_t , .__h_data.Alive = { pointer , address }});
}
Box_BoxedList_int Dead_BoxedList_int_x () {
  return ((Box_BoxedList_int){ get_Box_BoxedList_int__H_Table (), __h___t });
}
#endif /* __Box_BoxedList_int__H_IMPL__ */ 
int * toArray_BoxedList_int (BoxedList_int list , int term ) {
  int * array (BoxedList_int list , int count ) {
    return ({ /* cicili#Let531 */
        typeof(((