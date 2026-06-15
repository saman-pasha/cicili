#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
typedef struct ciciliLvHPODMa_EoAm84U_RhrBDqp1mQ_ {
  String __h_0_mem ;
  int __h_1_mem ;
} ciciliLvHPODMa_EoAm84U_RhrBDqp1mQ_;
typedef ciciliLvHPODMa_EoAm84U_RhrBDqp1mQ_ User ;
#ifndef __Maybe_User__H_DECL__
#define __Maybe_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_User Maybe_User ;
typedef void (*free_Maybe_User_t) (Maybe_User * this );
typedef struct Maybe_User__H_Table {
  free_Maybe_User_t freeData ;
} Maybe_User__H_Table;
typedef struct Maybe_User {
  const Maybe_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion117 */
    struct { /* ciciliStruct118 */
      User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct119 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_User;
Maybe_User Just_User (User value );
Maybe_User Nothing_User ();
__attribute__((weak)) Maybe_User Default_Maybe_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_User ();
}
const Maybe_User__H_Table * const get_Maybe_User__H_Table ();
void free_Maybe_User (Maybe_User * this );
#endif /* __Maybe_User__H_DECL__ */ 
#ifndef __List_User__H_DECL__
#define __List_User__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_User class_List_User ;
typedef class_List_User * List_User ;
typedef void (*free_List_User_t) (List_User * this_ptr );
typedef struct List_User__H_Table {
  free_List_User_t freeClass ;
    User * (*toArray) (List_User list , User term );
    List_User (*wrap) (const User item );
    List_User (*pure) (const User * buf , int len );
    int (*show) (CFile file , List_User list );
    List_User (*copy) (List_User list );
    List_User (*replaceAt) (List_User list , User item , int index );
    List_User (*deleteAt) (List_User list , int index );
    List_User (*insertAt) (List_User llist , User item , int index );
    List_User (*replace) (List_User list , User item , List_User aimed );
    List_User (*delete) (List_User list , List_User aimed );
    List_User (*insert) (List_User llist , User item , List_User rlist );
    List_User (*reverse) (List_User list );
    List_User (*append) (List_User llist , List_User rlist );
    List_User (*push) (User item , List_User list );
    List_User (*take) (int len , List_User list );
    List_User (*last) (List_User list );
    List_User (*init) (List_User list );
    int (*hasLen) (List_User list , int desired );
    int (*len) (List_User list );
    List_User (*tail) (List_User list );
    List_User (*drop) (int len , List_User list );
    Maybe_User (*head) (List_User list );
    List_User (*nthcdr) (int index , List_User list );
    Maybe_User (*nth) (int index , List_User list );
} List_User__H_Table;
typedef struct class_List_User {
  const List_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion169 */
    struct { /* ciciliStruct170 */
      User __h_0_mem ;
      List_User __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct171 */
    } Nil , _ ;
  } __h_data ;
} class_List_User;
List_User Cons_User (User head , List_User tail );
List_User Nil_User ();
__attribute__((weak)) List_User Default_List_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nil_User ();
}
User * toArray_List_User (List_User list , User term );
List_User wrap_List_User (const User item );
List_User pure_List_User (const User * buf , int len );
int show_List_User (CFile file , List_User list );
List_User copy_List_User (List_User list );
List_User replaceAt_List_User (List_User list , User item , int index );
List_User deleteAt_List_User (List_User list , int index );
List_User insertAt_List_User (List_User llist , User item , int index );
List_User replace_List_User (List_User list , User item , List_User aimed );
List_User delete_List_User (List_User list , List_User aimed );
List_User insert_List_User (List_User llist , User item , List_User rlist );
List_User reverse_List_User (List_User list );
List_User append_List_User (List_User llist , List_User rlist );
List_User push_List_User (User item , List_User list );
List_User take_List_User (int len , List_User list );
List_User last_List_User (List_User list );
List_User init_List_User (List_User list );
int hasLen_List_User (List_User list , int desired );
int len_List_User (List_User list );
List_User tail_List_User (List_User list );
List_User drop_List_User (int len , List_User list );
Maybe_User head_List_User (List_User list );
List_User nthcdr_List_User (int index , List_User list );
Maybe_User nth_List_User (int index , List_User list );
List_User__H_Table * const get_List_User__H_Table ();
void free_List_User (List_User * this_ptr );
#endif /* __List_User__H_DECL__ */ 
#ifndef __Maybe_List_User__H_DECL__
#define __Maybe_List_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_User Maybe_List_User ;
typedef void (*free_Maybe_List_User_t) (Maybe_List_User * this );
typedef struct Maybe_List_User__H_Table {
  free_Maybe_List_User_t freeData ;
} Maybe_List_User__H_Table;
typedef struct Maybe_List_User {
  const Maybe_List_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion271 */
    struct { /* ciciliStruct272 */
      List_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct273 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_User;
Maybe_List_User Just_List_User (List_User value );
Maybe_List_User Nothing_List_User ();
__attribute__((weak)) Maybe_List_User Default_Maybe_List_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_List_User ();
}
const Maybe_List_User__H_Table * const get_Maybe_List_User__H_Table ();
void free_Maybe_List_User (Maybe_List_User * this );
#endif /* __Maybe_List_User__H_DECL__ */ 
typedef struct class_BTree_int_User * BTree_int_User ;
typedef struct ciciliuCCq6c1Pu7l02Epk4_C3WFU5aas_ {
  int __h_0_mem ;
  User __h_1_mem ;
} ciciliuCCq6c1Pu7l02Epk4_C3WFU5aas_;
typedef ciciliuCCq6c1Pu7l02Epk4_C3WFU5aas_ BTree_int_User_pair_t ;
#ifndef __BTree_int_User_Error__H_DECL__
#define __BTree_int_User_Error__H_DECL__
#ifndef __H___h_BTreeError_ctor_t__
#define __H___h_BTreeError_ctor_t__
typedef enum __h_BTreeError_ctor_t {
  __h_ERR_CANT_BORROW_t = 0,
  __h_ERR_INVALID_BRANCH_t = 1,
  __h_ERR_ACCESS_DEAD_CHILD_t = 2,
  __h_ERR_NOT_FOUND_t = 3,
  __h_ERR_UNIQUE_KEY_t = 4,
  __h_ERR_INVALID_ORDER_t = 5,
  __h_ERR_INVALID_OBJECT_t = 6
} __h_BTreeError_ctor_t;
#endif /* __H___h_BTreeError_ctor_t__ */ 
typedef struct BTree_int_User_Error BTree_int_User_Error ;
typedef void (*free_BTree_int_User_Error_t) (BTree_int_User_Error * this );
typedef struct BTree_int_User_Error__H_Table {
  free_BTree_int_User_Error_t freeData ;
    void (*show) (BTree_int_User_Error error );
} BTree_int_User_Error__H_Table;
typedef struct BTree_int_User_Error {
  const BTree_int_User_Error__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion310 */
    struct { /* ciciliStruct311 */
    } ERR_INVALID_OBJECT , _6 ;
    struct { /* ciciliStruct312 */
      size_t __h_0_mem ;
    } ERR_INVALID_ORDER , _5 ;
    struct { /* ciciliStruct313 */
      BTree_int_User_pair_t __h_0_mem ;
    } ERR_UNIQUE_KEY , _4 ;
    struct { /* ciciliStruct314 */
      int __h_0_mem ;
    } ERR_NOT_FOUND , _3 ;
    struct { /* ciciliStruct315 */
      BTree_int_User_pair_t __h_0_mem ;
      size_t __h_1_mem ;
    } ERR_ACCESS_DEAD_CHILD , _2 ;
    struct { /* ciciliStruct316 */
      BTree_int_User __h_0_mem ;
    } ERR_INVALID_BRANCH , _1 ;
    struct { /* ciciliStruct317 */
      char * __h_0_mem ;
    } ERR_CANT_BORROW , _ ;
  } __h_data ;
} BTree_int_User_Error;
BTree_int_User_Error BTree_int_User_ERR_INVALID_OBJECT ();
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (size_t order );
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item );
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key );
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , size_t index );
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch );
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason );
__attribute__((weak)) BTree_int_User_Error Default_BTree_int_User_Error (char * reason ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return BTree_int_User_ERR_CANT_BORROW (reason );
}
void show_BTree_int_User_Error (BTree_int_User_Error error );
const BTree_int_User_Error__H_Table * const get_BTree_int_User_Error__H_Table ();
void free_BTree_int_User_Error (BTree_int_User_Error * this );
#endif /* __BTree_int_User_Error__H_DECL__ */ 
#ifndef __Either_BTree_int_User_Error_BTree_int_User__H_DECL__
#define __Either_BTree_int_User_Error_BTree_int_User__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Left_t = 0,
  __h_Right_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_BTree_int_User_Error_BTree_int_User Either_BTree_int_User_Error_BTree_int_User ;
typedef void (*free_Either_BTree_int_User_Error_BTree_int_User_t) (Either_BTree_int_User_Error_BTree_int_User * this );
typedef struct Either_BTree_int_User_Error_BTree_int_User__H_Table {
  free_Either_BTree_int_User_Error_BTree_int_User_t freeData ;
} Either_BTree_int_User_Error_BTree_int_User__H_Table;
typedef struct Either_BTree_int_User_Error_BTree_int_User {
  const Either_BTree_int_User_Error_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion364 */
    struct { /* ciciliStruct365 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct366 */
      BTree_int_User_Error __h_0_mem ;
    } Left , _ ;
  } __h_data ;
} Either_BTree_int_User_Error_BTree_int_User;
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value );
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error );
__attribute__((weak)) Either_BTree_int_User_Error_BTree_int_User Default_Either_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Left_BTree_int_User_Error_BTree_int_User (error );
}
const Either_BTree_int_User_Error_BTree_int_User__H_Table * const get_Either_BTree_int_User_Error_BTree_int_User__H_Table ();
void free_Either_BTree_int_User_Error_BTree_int_User (Either_BTree_int_User_Error_BTree_int_User * this );
#endif /* __Either_BTree_int_User_Error_BTree_int_User__H_DECL__ */ 
#ifndef __Maybe_BTree_int_User__H_DECL__
#define __Maybe_BTree_int_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BTree_int_User Maybe_BTree_int_User ;
typedef void (*free_Maybe_BTree_int_User_t) (Maybe_BTree_int_User * this );
typedef struct Maybe_BTree_int_User__H_Table {
  free_Maybe_BTree_int_User_t freeData ;
} Maybe_BTree_int_User__H_Table;
typedef struct Maybe_BTree_int_User {
  const Maybe_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion392 */
    struct { /* ciciliStruct393 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct394 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_int_User;
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value );
Maybe_BTree_int_User Nothing_BTree_int_User ();
__attribute__((weak)) Maybe_BTree_int_User Default_Maybe_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_BTree_int_User ();
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table ();
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this );
#endif /* __Maybe_BTree_int_User__H_DECL__ */ 
#ifndef __Maybe_BTree_int_User_pair_t__H_DECL__
#define __Maybe_BTree_int_User_pair_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BTree_int_User_pair_t Maybe_BTree_int_User_pair_t ;
typedef void (*free_Maybe_BTree_int_User_pair_t_t) (Maybe_BTree_int_User_pair_t * this );
typedef struct Maybe_BTree_int_User_pair_t__H_Table {
  free_Maybe_BTree_int_User_pair_t_t freeData ;
} Maybe_BTree_int_User_pair_t__H_Table;
typedef struct Maybe_BTree_int_User_pair_t {
  const Maybe_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion422 */
    struct { /* ciciliStruct423 */
      BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct424 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_int_User_pair_t;
Maybe_BTree_int_User_pair_t Just_BTree_int_User_pair_t (BTree_int_User_pair_t value );
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t ();
__attribute__((weak)) Maybe_BTree_int_User_pair_t Default_Maybe_BTree_int_User_pair_t () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_BTree_int_User_pair_t ();
}
const Maybe_BTree_int_User_pair_t__H_Table * const get_Maybe_BTree_int_User_pair_t__H_Table ();
void free_Maybe_BTree_int_User_pair_t (Maybe_BTree_int_User_pair_t * this );
#endif /* __Maybe_BTree_int_User_pair_t__H_DECL__ */ 
#ifndef __List_BTree_int_User_pair_t__H_DECL__
#define __List_BTree_int_User_pair_t__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_BTree_int_User_pair_t class_List_BTree_int_User_pair_t ;
typedef class_List_BTree_int_User_pair_t * List_BTree_int_User_pair_t ;
typedef void (*free_List_BTree_int_User_pair_t_t) (List_BTree_int_User_pair_t * this_ptr );
typedef struct List_BTree_int_User_pair_t__H_Table {
  free_List_BTree_int_User_pair_t_t freeClass ;
    BTree_int_User_pair_t * (*toArray) (List_BTree_int_User_pair_t list , BTree_int_User_pair_t term );
    List_BTree_int_User_pair_t (*wrap) (const BTree_int_User_pair_t item );
    List_BTree_int_User_pair_t (*pure) (const BTree_int_User_pair_t * buf , int len );
    int (*show) (CFile file , List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*copy) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*replaceAt) (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , int index );
    List_BTree_int_User_pair_t (*deleteAt) (List_BTree_int_User_pair_t list , int index );
    List_BTree_int_User_pair_t (*insertAt) (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , int index );
    List_BTree_int_User_pair_t (*replace) (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed );
    List_BTree_int_User_pair_t (*delete) (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t aimed );
    List_BTree_int_User_pair_t (*insert) (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , List_BTree_int_User_pair_t rlist );
    List_BTree_int_User_pair_t (*reverse) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*append) (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist );
    List_BTree_int_User_pair_t (*push) (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*take) (int len , List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*last) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*init) (List_BTree_int_User_pair_t list );
    int (*hasLen) (List_BTree_int_User_pair_t list , int desired );
    int (*len) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*tail) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*drop) (int len , List_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*head) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*nthcdr) (int index , List_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*nth) (int index , List_BTree_int_User_pair_t list );
} List_BTree_int_User_pair_t__H_Table;
typedef struct class_List_BTree_int_User_pair_t {
  const List_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion474 */
    struct { /* ciciliStruct475 */
      BTree_int_User_pair_t __h_0_mem ;
      List_BTree_int_User_pair_t __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct476 */
    } Nil , _ ;
  } __h_data ;
} class_List_BTree_int_User_pair_t;
List_BTree_int_User_pair_t Cons_BTree_int_User_pair_t (BTree_int_User_pair_t head , List_BTree_int_User_pair_t tail );
List_BTree_int_User_pair_t Nil_BTree_int_User_pair_t ();
__attribute__((weak)) List_BTree_int_User_pair_t Default_List_BTree_int_User_pair_t () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nil_BTree_int_User_pair_t ();
}
BTree_int_User_pair_t * toArray_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t term );
List_BTree_int_User_pair_t wrap_List_BTree_int_User_pair_t (const BTree_int_User_pair_t item );
List_BTree_int_User_pair_t pure_List_BTree_int_User_pair_t (const BTree_int_User_pair_t * buf , int len );
int show_List_BTree_int_User_pair_t (CFile file , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , int index );
List_BTree_int_User_pair_t deleteAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , int index );
List_BTree_int_User_pair_t insertAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , int index );
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed );
List_BTree_int_User_pair_t delete_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t aimed );
List_BTree_int_User_pair_t insert_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , List_BTree_int_User_pair_t rlist );
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist );
List_BTree_int_User_pair_t push_List_BTree_int_User_pair_t (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t take_List_BTree_int_User_pair_t (int len , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
int hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , int desired );
int len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t tail_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (int len , List_BTree_int_User_pair_t list );
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (int index , List_BTree_int_User_pair_t list );
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (int index , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t__H_Table * const get_List_BTree_int_User_pair_t__H_Table ();
void free_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t * this_ptr );
#endif /* __List_BTree_int_User_pair_t__H_DECL__ */ 
#ifndef __Maybe_List_BTree_int_User_pair_t__H_DECL__
#define __Maybe_List_BTree_int_User_pair_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_BTree_int_User_pair_t Maybe_List_BTree_int_User_pair_t ;
typedef void (*free_Maybe_List_BTree_int_User_pair_t_t) (Maybe_List_BTree_int_User_pair_t * this );
typedef struct Maybe_List_BTree_int_User_pair_t__H_Table {
  free_Maybe_List_BTree_int_User_pair_t_t freeData ;
} Maybe_List_BTree_int_User_pair_t__H_Table;
typedef struct Maybe_List_BTree_int_User_pair_t {
  const Maybe_List_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion576 */
    struct { /* ciciliStruct577 */
      List_BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct578 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_BTree_int_User_pair_t;
Maybe_List_BTree_int_User_pair_t Just_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t value );
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t ();
__attribute__((weak)) Maybe_List_BTree_int_User_pair_t Default_Maybe_List_BTree_int_User_pair_t () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_List_BTree_int_User_pair_t ();
}
const Maybe_List_BTree_int_User_pair_t__H_Table * const get_Maybe_List_BTree_int_User_pair_t__H_Table ();
void free_Maybe_List_BTree_int_User_pair_t (Maybe_List_BTree_int_User_pair_t * this );
#endif /* __Maybe_List_BTree_int_User_pair_t__H_DECL__ */ 
#ifndef __Maybe_BTree_int_User__H_DECL__
#define __Maybe_BTree_int_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BTree_int_User Maybe_BTree_int_User ;
typedef void (*free_Maybe_BTree_int_User_t) (Maybe_BTree_int_User * this );
typedef struct Maybe_BTree_int_User__H_Table {
  free_Maybe_BTree_int_User_t freeData ;
} Maybe_BTree_int_User__H_Table;
typedef struct Maybe_BTree_int_User {
  const Maybe_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion608 */
    struct { /* ciciliStruct609 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct610 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_int_User;
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value );
Maybe_BTree_int_User Nothing_BTree_int_User ();
__attribute__((weak)) Maybe_BTree_int_User Default_Maybe_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_BTree_int_User ();
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table ();
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this );
#endif /* __Maybe_BTree_int_User__H_DECL__ */ 
#ifndef __Rc_BTree_int_User__H_DECL__
#define __Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Rc_BTree_int_User Rc_BTree_int_User ;
typedef void (*free_Rc_BTree_int_User_t) (Rc_BTree_int_User * this );
typedef struct Rc_BTree_int_User__H_Table {
  free_Rc_BTree_int_User_t freeData ;
    Rc_BTree_int_User (*new) (BTree_int_User pointer );
    Rc_BTree_int_User (*clone) (Rc_BTree_int_User rc );
    Maybe_BTree_int_User (*take) (Rc_BTree_int_User * this );
    Maybe_BTree_int_User (*get) (Rc_BTree_int_User rc );
} Rc_BTree_int_User__H_Table;
typedef struct Rc_BTree_int_User {
  const Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion640 */
    struct { /* ciciliStruct641 */
      BTree_int_User * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct642 */
    } Gone , _ ;
  } __h_data ;
} Rc_BTree_int_User;
Rc_BTree_int_User __h_Hold_BTree_int_User (BTree_int_User * pointer , int * count , size_t address );
Rc_BTree_int_User Gone_BTree_int_User ();
__attribute__((weak)) Rc_BTree_int_User Default_Rc_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Gone_BTree_int_User ();
}
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User pointer );
Rc_BTree_int_User clone_Rc_BTree_int_User (Rc_BTree_int_User rc );
Maybe_BTree_int_User take_Rc_BTree_int_User (Rc_BTree_int_User * this );
Maybe_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User rc );
const Rc_BTree_int_User__H_Table * const get_Rc_BTree_int_User__H_Table ();
void free_Rc_BTree_int_User (Rc_BTree_int_User * this );
#endif /* __Rc_BTree_int_User__H_DECL__ */ 
#ifndef __Maybe_Rc_BTree_int_User__H_DECL__
#define __Maybe_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Rc_BTree_int_User Maybe_Rc_BTree_int_User ;
typedef void (*free_Maybe_Rc_BTree_int_User_t) (Maybe_Rc_BTree_int_User * this );
typedef struct Maybe_Rc_BTree_int_User__H_Table {
  free_Maybe_Rc_BTree_int_User_t freeData ;
} Maybe_Rc_BTree_int_User__H_Table;
typedef struct Maybe_Rc_BTree_int_User {
  const Maybe_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion684 */
    struct { /* ciciliStruct685 */
      Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct686 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Rc_BTree_int_User;
Maybe_Rc_BTree_int_User Just_Rc_BTree_int_User (Rc_BTree_int_User value );
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User ();
__attribute__((weak)) Maybe_Rc_BTree_int_User Default_Maybe_Rc_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_Rc_BTree_int_User ();
}
const Maybe_Rc_BTree_int_User__H_Table * const get_Maybe_Rc_BTree_int_User__H_Table ();
void free_Maybe_Rc_BTree_int_User (Maybe_Rc_BTree_int_User * this );
#endif /* __Maybe_Rc_BTree_int_User__H_DECL__ */ 
#ifndef __List_Rc_BTree_int_User__H_DECL__
#define __List_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_Rc_BTree_int_User class_List_Rc_BTree_int_User ;
typedef class_List_Rc_BTree_int_User * List_Rc_BTree_int_User ;
typedef void (*free_List_Rc_BTree_int_User_t) (List_Rc_BTree_int_User * this_ptr );
typedef struct List_Rc_BTree_int_User__H_Table {
  free_List_Rc_BTree_int_User_t freeClass ;
    Rc_BTree_int_User * (*toArray) (List_Rc_BTree_int_User list , Rc_BTree_int_User term );
    List_Rc_BTree_int_User (*wrap) (const Rc_BTree_int_User item );
    List_Rc_BTree_int_User (*pure) (const Rc_BTree_int_User * buf , int len );
    int (*show) (CFile file , List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*copy) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*replaceAt) (List_Rc_BTree_int_User list , Rc_BTree_int_User item , int index );
    List_Rc_BTree_int_User (*deleteAt) (List_Rc_BTree_int_User list , int index );
    List_Rc_BTree_int_User (*insertAt) (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , int index );
    List_Rc_BTree_int_User (*replace) (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed );
    List_Rc_BTree_int_User (*delete) (List_Rc_BTree_int_User list , List_Rc_BTree_int_User aimed );
    List_Rc_BTree_int_User (*insert) (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , List_Rc_BTree_int_User rlist );
    List_Rc_BTree_int_User (*reverse) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*append) (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist );
    List_Rc_BTree_int_User (*push) (Rc_BTree_int_User item , List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*take) (int len , List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*last) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*init) (List_Rc_BTree_int_User list );
    int (*hasLen) (List_Rc_BTree_int_User list , int desired );
    int (*len) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*tail) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*drop) (int len , List_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*head) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*nthcdr) (int index , List_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*nth) (int index , List_Rc_BTree_int_User list );
} List_Rc_BTree_int_User__H_Table;
typedef struct class_List_Rc_BTree_int_User {
  const List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion736 */
    struct { /* ciciliStruct737 */
      Rc_BTree_int_User __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct738 */
    } Nil , _ ;
  } __h_data ;
} class_List_Rc_BTree_int_User;
List_Rc_BTree_int_User Cons_Rc_BTree_int_User (Rc_BTree_int_User head , List_Rc_BTree_int_User tail );
List_Rc_BTree_int_User Nil_Rc_BTree_int_User ();
__attribute__((weak)) List_Rc_BTree_int_User Default_List_Rc_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nil_Rc_BTree_int_User ();
}
Rc_BTree_int_User * toArray_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User term );
List_Rc_BTree_int_User wrap_List_Rc_BTree_int_User (const Rc_BTree_int_User item );
List_Rc_BTree_int_User pure_List_Rc_BTree_int_User (const Rc_BTree_int_User * buf , int len );
int show_List_Rc_BTree_int_User (CFile file , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , int index );
List_Rc_BTree_int_User deleteAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , int index );
List_Rc_BTree_int_User insertAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , int index );
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed );
List_Rc_BTree_int_User delete_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , List_Rc_BTree_int_User aimed );
List_Rc_BTree_int_User insert_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , List_Rc_BTree_int_User rlist );
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist );
List_Rc_BTree_int_User push_List_Rc_BTree_int_User (Rc_BTree_int_User item , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User take_List_Rc_BTree_int_User (int len , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
int hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , int desired );
int len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User tail_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (int len , List_Rc_BTree_int_User list );
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (int index , List_Rc_BTree_int_User list );
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (int index , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User__H_Table * const get_List_Rc_BTree_int_User__H_Table ();
void free_List_Rc_BTree_int_User (List_Rc_BTree_int_User * this_ptr );
#endif /* __List_Rc_BTree_int_User__H_DECL__ */ 
#ifndef __Maybe_List_Rc_BTree_int_User__H_DECL__
#define __Maybe_List_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_Rc_BTree_int_User Maybe_List_Rc_BTree_int_User ;
typedef void (*free_Maybe_List_Rc_BTree_int_User_t) (Maybe_List_Rc_BTree_int_User * this );
typedef struct Maybe_List_Rc_BTree_int_User__H_Table {
  free_Maybe_List_Rc_BTree_int_User_t freeData ;
} Maybe_List_Rc_BTree_int_User__H_Table;
typedef struct Maybe_List_Rc_BTree_int_User {
  const Maybe_List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion838 */
    struct { /* ciciliStruct839 */
      List_Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct840 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_Rc_BTree_int_User;
Maybe_List_Rc_BTree_int_User Just_List_Rc_BTree_int_User (List_Rc_BTree_int_User value );
Maybe_List_Rc_BTree_int_User Nothing_List_Rc_BTree_int_User ();
__attribute__((weak)) Maybe_List_Rc_BTree_int_User Default_Maybe_List_Rc_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_List_Rc_BTree_int_User ();
}
const Maybe_List_Rc_BTree_int_User__H_Table * const get_Maybe_List_Rc_BTree_int_User__H_Table ();
void free_Maybe_List_Rc_BTree_int_User (Maybe_List_Rc_BTree_int_User * this );
#endif /* __Maybe_List_Rc_BTree_int_User__H_DECL__ */ 
typedef Rc_BTree_int_User (*Rc_BTree_int_User_to_Rc_BTree_int_User_t) (Rc_BTree_int_User value );
#ifndef __Functor_List_Rc_BTree_int_User__H_DECL__
#define __Functor_List_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_List_Rc_BTree_int_User Functor_List_Rc_BTree_int_User ;
typedef void (*free_Functor_List_Rc_BTree_int_User_t) (Functor_List_Rc_BTree_int_User * this );
typedef struct Functor_List_Rc_BTree_int_User__H_Table {
  free_Functor_List_Rc_BTree_int_User_t freeData ;
    List_Rc_BTree_int_User (*fmap) (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input );
} Functor_List_Rc_BTree_int_User__H_Table;
typedef struct Functor_List_Rc_BTree_int_User {
  const Functor_List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion875 */
    struct { /* ciciliStruct876 */
    } Functor , _ ;
  } __h_data ;
} Functor_List_Rc_BTree_int_User;
Functor_List_Rc_BTree_int_User Functor_List_Rc_BTree_int_User_ctor ();
__attribute__((weak)) Functor_List_Rc_BTree_int_User Default_Functor_List_Rc_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Functor_List_Rc_BTree_int_User_ctor ();
}
List_Rc_BTree_int_User fmap_Functor_List_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input );
const Functor_List_Rc_BTree_int_User__H_Table * const get_Functor_List_Rc_BTree_int_User__H_Table ();
void free_Functor_List_Rc_BTree_int_User (Functor_List_Rc_BTree_int_User * this );
#endif /* __Functor_List_Rc_BTree_int_User__H_DECL__ */ 
Functor_List_Rc_BTree_int_User get_Functor_List_Rc_BTree_int_User ();
#ifndef __BTree_int_User__H_DECL__
#define __BTree_int_User__H_DECL__
#ifndef __H___h_BTree_ctor_t__
#define __H___h_BTree_ctor_t__
typedef enum __h_BTree_ctor_t {
  __h_Leaf_t = 0,
  __h_Internal_t = 1,
  __h_Branch_t = 2
} __h_BTree_ctor_t;
#endif /* __H___h_BTree_ctor_t__ */ 
typedef struct class_BTree_int_User class_BTree_int_User ;
typedef class_BTree_int_User * BTree_int_User ;
typedef void (*free_BTree_int_User_t) (BTree_int_User * this_ptr );
typedef struct BTree_int_User__H_Table {
  free_BTree_int_User_t freeClass ;
    Either_BTree_int_User_Error_BTree_int_User (*fromLists) (List_int keys , List_User values );
    Either_BTree_int_User_Error_BTree_int_User (*pure) (int keys [], User values [], size_t len );
    size_t (*show) (CFile file , BTree_int_User tree );
    void (*traverse) (BTree_int_User tree ,   void (*callback) (BTree_int_User_pair_t item , Bool hasNext ));
    Maybe_BTree_int_User_pair_t (*max) (BTree_int_User tree );
    Maybe_BTree_int_User_pair_t (*min) (BTree_int_User tree );
    Either_BTree_int_User_Error_BTree_int_User (*delete) (BTree_int_User tree , int skey ,   void (*callback) (BTree_int_User_pair_t item ));
    Maybe_BTree_int_User_pair_t (*search) (BTree_int_User tree , int skey );
    Either_BTree_int_User_Error_BTree_int_User (*insert) (BTree_int_User tree , int skey , User svalue );
    size_t (*order) ();
} BTree_int_User__H_Table;
typedef struct class_BTree_int_User {
  const BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion935 */
    struct { /* ciciliStruct936 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Branch , _2 ;
    struct { /* ciciliStruct937 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Internal , _1 ;
    struct { /* ciciliStruct938 */
      List_BTree_int_User_pair_t __h_0_mem ;
    } Leaf , _ ;
  } __h_data ;
} class_BTree_int_User;
BTree_int_User Branch_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children );
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children );
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items );
__attribute__((weak)) BTree_int_User Default_BTree_int_User (List_BTree_int_User_pair_t items ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Leaf_BTree_int_User (items );
}
Either_BTree_int_User_Error_BTree_int_User fromLists_BTree_int_User (List_int keys , List_User values );
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], size_t len );
size_t show_BTree_int_User (CFile file , BTree_int_User tree );
void traverse_BTree_int_User (BTree_int_User tree , void (*callback) (BTree_int_User_pair_t item , Bool hasNext ));
Maybe_BTree_int_User_pair_t max_BTree_int_User (BTree_int_User tree );
Maybe_BTree_int_User_pair_t min_BTree_int_User (BTree_int_User tree );
Either_BTree_int_User_Error_BTree_int_User delete_BTree_int_User (BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item ));
Maybe_BTree_int_User_pair_t search_BTree_int_User (BTree_int_User tree , int skey );
Either_BTree_int_User_Error_BTree_int_User insert_BTree_int_User (BTree_int_User tree , int skey , User svalue );
size_t order_BTree_int_User ();
BTree_int_User__H_Table * const get_BTree_int_User__H_Table ();
void free_BTree_int_User (BTree_int_User * this_ptr );
#endif /* __BTree_int_User__H_DECL__ */ 
Ordering compareKey (int lkey , int rkey ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return (((lkey  <  rkey  )) ? LT () : (((lkey  ==  rkey  )) ? EQ () : GT ()));
}
#ifndef __Maybe_User__H_IMPL__
#define __Maybe_User__H_IMPL__
void free_Maybe_User (Maybe_User * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_User__H_Table * const get_Maybe_User__H_Table () {
  static const Maybe_User__H_Table table  = { free_Maybe_User };
  return (&table );
}
Maybe_User Just_User (User value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1026 */
    Maybe_User instance  = ((Maybe_User){ get_Maybe_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_User Nothing_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1031 */
    Maybe_User instance  = ((Maybe_User){ get_Maybe_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_User__H_IMPL__ */ 
#ifndef __List_User__H_IMPL__
#define __List_User__H_IMPL__
User * toArray_List_User (List_User list , User term ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  User * array (List_User list , int count ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let1041 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let1043 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1044 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1046 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1051 */
              ({ /* cicili#Let1053 */
                User * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let1057 */
              // ----------
              ;
              ({ /* cicili#Progn1059 */
                ({ /* cicili#Let1061 */
                  User * arr  = calloc (count , sizeof(User));
                  // ----------
                  arr [(count  -  1 )] = term ;
                  arr ;
                });
              });
            }));
        });
      });
  }
  return array (list , 0);
}
List_User wrap_List_User (const User item ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Cons_User (item , Nil_User ());
}
List_User pure_List_User (const User * buf , int len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return (((buf  ==  NULL  )) ? Nil_User () : ({ /* cicili#Let1072 */
        User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_User () : Cons_User (item , pure_List_User ((++buf ), (--len ))));
      }));
}
int show_List_User (CFile file , List_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1082 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1084 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1085 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1087 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1092 */
            (({ /* cicili#Let1096 */
                // ----------
                ;
                ({ /* cicili#Let1098 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1102 */
                      (({ /* cicili#Let1108 */
                          typeof((head . __h_0_mem )) name ;
                          typeof((head . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let1110 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn1111 */
                                  (name  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1113 */
                                  (salary  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1118 */
                                (fprintf (file , "(") +  show_String (file , name ) +  fprintf (file , ", %d)", salary ) );
                              }) : ({ /* cicili#Let1122 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1124 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let1128 */
                      // ----------
                      ;
                      ({ /* cicili#Progn1130 */
                        ({ /* cicili#Let1136 */
                          typeof((head . __h_0_mem )) name ;
                          typeof((head . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let1138 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn1139 */
                                  (name  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1141 */
                                  (salary  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1146 */
                                (fprintf (file , "(") +  show_String (file , name ) +  fprintf (file , ", %d)", salary ) );
                              }) : ({ /* cicili#Let1150 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1152 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_User (file , tail ) );
          }) : ({ /* cicili#Let1157 */
            // ----------
            ;
            ({ /* cicili#Progn1159 */
              0;
            });
          }));
      });
    });
}
List_User copy_List_User (List_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1165 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1167 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1168 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1170 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1175 */
            Cons_User (head , copy_List_User (tail ));
          }) : ({ /* cicili#Let1181 */
            // ----------
            ;
            ({ /* cicili#Progn1183 */
              Nil_User ();
            });
          }));
      });
    });
}
List_User replaceAt_List_User (List_User list , User item , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1190 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1192 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1193 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1195 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1200 */
            Cons_User (head , replaceAt_List_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let1206 */
            // ----------
            ;
            ({ /* cicili#Progn1208 */
              ({ /* cicili#Let1212 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let1214 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1215 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1220 */
                      Cons_User (item , copy_List_User (taill ));
                    }) : ({ /* cicili#Let1226 */
                      // ----------
                      ;
                      ({ /* cicili#Progn1228 */
                        Nil_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_User deleteAt_List_User (List_User list , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1235 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1237 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1238 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1240 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1245 */
            Cons_User (head , deleteAt_List_User (tail , (index  -  1 )));
          }) : ({ /* cicili#Let1251 */
            // ----------
            ;
            ({ /* cicili#Progn1253 */
              ({ /* cicili#Let1257 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let1259 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1260 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1265 */
                      copy_List_User (taill );
                    }) : ({ /* cicili#Let1270 */
                      // ----------
                      ;
                      ({ /* cicili#Progn1272 */
                        Nil_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_User insertAt_List_User (List_User list , User item , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1279 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1281 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1282 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1284 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1289 */
            Cons_User (head , insertAt_List_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let1295 */
            // ----------
            ;
            ({ /* cicili#Progn1297 */
              Cons_User (item , copy_List_User (list ));
            });
          }));
      });
    });
}
List_User replace_List_User (List_User list , User item , List_User aimed ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1305 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1307 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1308 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1310 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1315 */
            Cons_User (head , replace_List_User (tail , item , aimed ));
          }) : ({ /* cicili#Let1321 */
            // ----------
            ;
            ({ /* cicili#Progn1323 */
              ({ /* cicili#Let1327 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let1329 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1330 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1335 */
                      Cons_User (item , copy_List_User (taill ));
                    }) : ({ /* cicili#Let1341 */
                      // ----------
                      ;
                      ({ /* cicili#Progn1343 */
                        Nil_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_User delete_List_User (List_User list , List_User aimed ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1350 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1352 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1353 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1355 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1360 */
            Cons_User (head , delete_List_User (tail , aimed ));
          }) : ({ /* cicili#Let1366 */
            // ----------
            ;
            ({ /* cicili#Progn1368 */
              ({ /* cicili#Let1372 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let1374 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1375 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1380 */
                      copy_List_User (taill );
                    }) : ({ /* cicili#Let1385 */
                      // ----------
                      ;
                      ({ /* cicili#Progn1387 */
                        Nil_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_User insert_List_User (List_User llist , User item , List_User rlist ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1394 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1396 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1397 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1399 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1404 */
            Cons_User (head , insert_List_User (tail , item , rlist ));
          }) : ({ /* cicili#Let1410 */
            // ----------
            ;
            ({ /* cicili#Progn1412 */
              Cons_User (item , copy_List_User (rlist ));
            });
          }));
      });
    });
}
List_User reverse_List_User (List_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  List_User _reverse (List_User list , List_User rlist ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let1421 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let1423 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1424 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1426 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1431 */
              _reverse (tail , Cons_User (head , rlist ));
            }) : ({ /* cicili#Let1436 */
              // ----------
              ;
              ({ /* cicili#Progn1438 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let1442 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1444 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1445 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1447 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1452 */
            _reverse (tail , Cons_User (head , Nil_User ()));
          }) : ({ /* cicili#Let1458 */
            // ----------
            ;
            ({ /* cicili#Progn1460 */
              list ;
            });
          }));
      });
    });
}
List_User append_List_User (List_User llist , List_User rlist ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1466 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1468 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1469 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1471 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1476 */
            Cons_User (head , append_List_User (tail , rlist ));
          }) : ({ /* cicili#Let1482 */
            // ----------
            ;
            ({ /* cicili#Progn1484 */
              copy_List_User (rlist );
            });
          }));
      });
    });
}
List_User push_List_User (User item , List_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Cons_User (item , copy_List_User (list ));
}
List_User take_List_User (int len , List_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return (((len  <=  0 )) ? Nil_User () : ({ /* cicili#Let1497 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let1499 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1500 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1502 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1507 */
              Cons_User (head , take_List_User ((--len ), tail ));
            }) : ({ /* cicili#Let1513 */
              // ----------
              ;
              ({ /* cicili#Progn1515 */
                Nil_User ();
              });
            }));
        });
      }));
}
List_User last_List_User (List_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1522 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1524 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1525 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1530 */
            ({ /* cicili#Let1534 */
              // ----------
              ;
              ({ /* cicili#Let1536 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn1540 */
                    copy_List_User (list );
                  }) : ({ /* cicili#Let1545 */
                    // ----------
                    ;
                    ({ /* cicili#Progn1547 */
                      last_List_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1552 */
            // ----------
            ;
            ({ /* cicili#Progn1554 */
              Nil_User ();
            });
          }));
      });
    });
}
List_User init_List_User (List_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1562 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1564 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1565 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1567 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1572 */
            Cons_User (head , init_List_User (tail ));
          }) : ({ /* cicili#Let1578 */
            // ----------
            ;
            ({ /* cicili#Progn1580 */
              Nil_User ();
            });
          }));
      });
    });
}
int hasLen_List_User (List_User list , int desired ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1587 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1589 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1590 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1595 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_User (tail , (--desired )) ));
          }) : ({ /* cicili#Let1601 */
            // ----------
            ;
            ({ /* cicili#Progn1603 */
              0;
            });
          }));
      });
    });
}
int len_List_User (List_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1609 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1611 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1612 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1617 */
            (1 +  len_List_User (tail ) );
          }) : ({ /* cicili#Let1622 */
            // ----------
            ;
            ({ /* cicili#Progn1624 */
              0;
            });
          }));
      });
    });
}
List_User tail_List_User (List_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return drop_List_User (1, list );
}
List_User drop_List_User (int len , List_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return (((len  <=  0 )) ? copy_List_User (list ) : ({ /* cicili#Let1635 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let1637 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1638 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1643 */
              drop_List_User ((--len ), tail );
            }) : ({ /* cicili#Let1648 */
              // ----------
              ;
              ({ /* cicili#Progn1650 */
                Nil_User ();
              });
            }));
        });
      }));
}
Maybe_User head_List_User (List_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1658 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let1660 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1661 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1666 */
            Just_User (head );
          }) : ({ /* cicili#Let1671 */
            // ----------
            ;
            ({ /* cicili#Progn1673 */
              Nothing_User ();
            });
          }));
      });
    });
}
List_User nthcdr_List_User (int index , List_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1680 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1682 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1683 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1688 */
            nthcdr_List_User ((--index ), tail );
          }) : ({ /* cicili#Let1693 */
            // ----------
            ;
            ({ /* cicili#Progn1695 */
              list ;
            });
          }));
      });
    });
}
Maybe_User nth_List_User (int index , List_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1702 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1704 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1705 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1707 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1712 */
            (((index  ==  0 )) ? Just_User (head ) : (((index  <  0 )) ? Nothing_User () : nth_List_User ((--index ), tail )));
          }) : ({ /* cicili#Let1721 */
            // ----------
            ;
            ({ /* cicili#Progn1723 */
              Nothing_User ();
            });
          }));
      });
    });
}
void free_List_User (List_User * this_ptr ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1728 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1732 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1734 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1735 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block1741 */
            { /* cicili#Block1743 */
              free (this );
              free_List_User ((&tail ));
            }
          }
        else
          { /* cicili#Let1751 */
            // ----------
            ;
            ({ /* cicili#Let1753 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block1758 */
                  { /* cicili#Block1760 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_User__H_Table * const get_List_User__H_Table () {
  static List_User__H_Table table  = { free_List_User , toArray_List_User , wrap_List_User , pure_List_User , show_List_User , copy_List_User , replaceAt_List_User , deleteAt_List_User , insertAt_List_User , replace_List_User , delete_List_User , insert_List_User , reverse_List_User , append_List_User , push_List_User , take_List_User , last_List_User , init_List_User , hasLen_List_User , len_List_User , tail_List_User , drop_List_User , head_List_User , nthcdr_List_User , nth_List_User };
  return (&table );
}
List_User Cons_User (User head , List_User tail ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1771 */
    List_User instance  = malloc (sizeof(class_List_User));
    // ----------
    (*instance ) = ((class_List_User){ get_List_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return __h_stack_push (instance );
  }
}
List_User Nil_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1777 */
    List_User instance  = malloc (sizeof(class_List_User));
    // ----------
    (*instance ) = ((class_List_User){ get_List_User__H_Table (), __h___t });
    return __h_stack_push (instance );
  }
}
#endif /* __List_User__H_IMPL__ */ 
#ifndef __Maybe_List_User__H_IMPL__
#define __Maybe_List_User__H_IMPL__
void free_Maybe_List_User (Maybe_List_User * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_List_User__H_Table * const get_Maybe_List_User__H_Table () {
  static const Maybe_List_User__H_Table table  = { free_Maybe_List_User };
  return (&table );
}
Maybe_List_User Just_List_User (List_User value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1794 */
    Maybe_List_User instance  = ((Maybe_List_User){ get_Maybe_List_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_User Nothing_List_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1799 */
    Maybe_List_User instance  = ((Maybe_List_User){ get_Maybe_List_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_User__H_IMPL__ */ 
#ifndef __BTree_int_User_Error__H_IMPL__
#define __BTree_int_User_Error__H_IMPL__
void show_BTree_int_User_Error (BTree_int_User_Error error ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1812 */
    // ----------
    ;
    ({ /* cicili#Let1814 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block1819 */
          printf ("invalid B-Tree object");
        }
      else
        { /* cicili#Let1824 */
          typeof((((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem )) order ;
          // ----------
          ;
          ({ /* cicili#Let1826 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* cicili#Progn1827 */
                  (order  =  (((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block1833 */
                printf ("invalid B-Tree order: %zu", order );
              }
            else
              { /* cicili#Let1838 */
                typeof((((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let1840 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* cicili#Progn1841 */
                        (item  =  (((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block1847 */
                      { /* cicili#Block1849 */
                        printf ("unique key: ");
                        ({ /* cicili#Let1856 */
                          typeof((item . __h_0_mem )) id ;
                          typeof((item . __h_1_mem )) __h_match1854_1_arg ;
                          typeof((__h_match1854_1_arg . __h_0_mem )) name ;
                          typeof((__h_match1854_1_arg . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let1858 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn1859 */
                                    (id  =  (item . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1861 */
                                    (__h_match1854_1_arg  =  (item . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn1863 */
                                      (name  =  (__h_match1854_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn1865 */
                                      (salary  =  (__h_match1854_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1870 */
                                (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                              }) : ({ /* cicili#Let1874 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1876 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* cicili#Let1881 */
                      typeof((((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem )) key ;
                      // ----------
                      ;
                      ({ /* cicili#Let1883 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* cicili#Progn1884 */
                              (key  =  (((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block1890 */
                            { /* cicili#Block1892 */
                              printf ("key not found: ");
                              fprintf (stdout , "%d", key );
                            }
                          }
                        else
                          { /* cicili#Let1900 */
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem )) item ;
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem )) index ;
                            // ----------
                            ;
                            ({ /* cicili#Let1902 */
                              bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* cicili#Progn1903 */
                                      (item  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn1905 */
                                      (index  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem ) );
                                      true ;
                                    }) ) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block1911 */
                                  { /* cicili#Block1913 */
                                    printf ("dead child at index: %zu of item: ", index );
                                    ({ /* cicili#Let1920 */
                                      typeof((item . __h_0_mem )) id ;
                                      typeof((item . __h_1_mem )) __h_match1918_1_arg ;
                                      typeof((__h_match1918_1_arg . __h_0_mem )) name ;
                                      typeof((__h_match1918_1_arg . __h_1_mem )) salary ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let1922 */
                                        bool __h_case_result  = (true  &&  ((({ /* cicili#Progn1923 */
                                                (id  =  (item . __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn1925 */
                                                (__h_match1918_1_arg  =  (item . __h_1_mem ) );
                                                true ;
                                              }) ) &&  (true  &&  (({ /* cicili#Progn1927 */
                                                  (name  =  (__h_match1918_1_arg . __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn1929 */
                                                  (salary  =  (__h_match1918_1_arg . __h_1_mem ) );
                                                  true ;
                                                }) ) ) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn1934 */
                                            (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                                          }) : ({ /* cicili#Let1938 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn1940 */
                                              0;
                                            });
                                          }));
                                      });
                                    });
                                  }
                                }
                              else
                                { /* cicili#Let1945 */
                                  typeof((((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem )) branch ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let1947 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* cicili#Progn1948 */
                                          (branch  =  (((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block1954 */
                                        { /* cicili#Block1956 */
                                          printf ("invalid branch: ");
                                          (branch -> __h_table -> show )(stdout , branch );
                                        }
                                      }
                                    else
                                      { /* cicili#Let1963 */
                                        typeof((((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem )) reason ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1965 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* cicili#Progn1966 */
                                                (reason  =  (((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block1972 */
                                              printf ("borrow error: %s", reason );
                                            }
                                          else
                                            { /* cicili#Let1977 */
                                              // ----------
                                              ;
                                              { /* cicili#Block1979 */
                                                printf ("unknown error");
                                              }
                                            }
                                        });
                                      }
                                  });
                                }
                            });
                          }
                      });
                    }
                });
              }
          });
        }
    });
  }
}
void free_BTree_int_User_Error (BTree_int_User_Error * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const BTree_int_User_Error__H_Table * const get_BTree_int_User_Error__H_Table () {
  static const BTree_int_User_Error__H_Table table  = { free_BTree_int_User_Error , show_BTree_int_User_Error };
  return (&table );
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_OBJECT () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1991 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (size_t order ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1996 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2001 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2007 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , size_t index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2012 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2018 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2023 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h___t , .__h_data._ = { reason }});
    // ----------
    return instance ;
  }
}
#endif /* __BTree_int_User_Error__H_IMPL__ */ 
#ifndef __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__
#define __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__
void free_Either_BTree_int_User_Error_BTree_int_User (Either_BTree_int_User_Error_BTree_int_User * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Either_BTree_int_User_Error_BTree_int_User__H_Table * const get_Either_BTree_int_User_Error_BTree_int_User__H_Table () {
  static const Either_BTree_int_User_Error_BTree_int_User__H_Table table  = { free_Either_BTree_int_User_Error_BTree_int_User };
  return (&table );
}
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2039 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2044 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h___t , .__h_data._ = { error }});
    // ----------
    return instance ;
  }
}
#endif /* __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_BTree_int_User__H_IMPL__
#define __Maybe_BTree_int_User__H_IMPL__
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table () {
  static const Maybe_BTree_int_User__H_Table table  = { free_Maybe_BTree_int_User };
  return (&table );
}
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2060 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2065 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_BTree_int_User_pair_t__H_IMPL__
#define __Maybe_BTree_int_User_pair_t__H_IMPL__
void free_Maybe_BTree_int_User_pair_t (Maybe_BTree_int_User_pair_t * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_BTree_int_User_pair_t__H_Table * const get_Maybe_BTree_int_User_pair_t__H_Table () {
  static const Maybe_BTree_int_User_pair_t__H_Table table  = { free_Maybe_BTree_int_User_pair_t };
  return (&table );
}
Maybe_BTree_int_User_pair_t Just_BTree_int_User_pair_t (BTree_int_User_pair_t value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2083 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2088 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __List_BTree_int_User_pair_t__H_IMPL__
#define __List_BTree_int_User_pair_t__H_IMPL__
BTree_int_User_pair_t * toArray_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t term ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  BTree_int_User_pair_t * array (List_BTree_int_User_pair_t list , int count ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let2098 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let2100 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2101 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2103 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2108 */
              ({ /* cicili#Let2110 */
                BTree_int_User_pair_t * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let2114 */
              // ----------
              ;
              ({ /* cicili#Progn2116 */
                ({ /* cicili#Let2118 */
                  BTree_int_User_pair_t * arr  = calloc (count , sizeof(BTree_int_User_pair_t));
                  // ----------
                  arr [(count  -  1 )] = term ;
                  arr ;
                });
              });
            }));
        });
      });
  }
  return array (list , 0);
}
List_BTree_int_User_pair_t wrap_List_BTree_int_User_pair_t (const BTree_int_User_pair_t item ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Cons_BTree_int_User_pair_t (item , Nil_BTree_int_User_pair_t ());
}
List_BTree_int_User_pair_t pure_List_BTree_int_User_pair_t (const BTree_int_User_pair_t * buf , int len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return (((buf  ==  NULL  )) ? Nil_BTree_int_User_pair_t () : ({ /* cicili#Let2129 */
        BTree_int_User_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_BTree_int_User_pair_t () : Cons_BTree_int_User_pair_t (item , pure_List_BTree_int_User_pair_t ((++buf ), (--len ))));
      }));
}
int show_List_BTree_int_User_pair_t (CFile file , List_BTree_int_User_pair_t list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2139 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2141 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2142 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2144 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2149 */
            (({ /* cicili#Let2153 */
                // ----------
                ;
                ({ /* cicili#Let2155 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2159 */
                      (({ /* cicili#Let2166 */
                          typeof((head . __h_0_mem )) id ;
                          typeof((head . __h_1_mem )) __h_match2164_1_arg ;
                          typeof((__h_match2164_1_arg . __h_0_mem )) name ;
                          typeof((__h_match2164_1_arg . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let2168 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2169 */
                                    (id  =  (head . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2171 */
                                    (__h_match2164_1_arg  =  (head . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn2173 */
                                      (name  =  (__h_match2164_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2175 */
                                      (salary  =  (__h_match2164_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2180 */
                                (fprintf (file , "(id: %d, name: ", id ) +  show_String (file , name ) +  fprintf (file , ", salary: %d)", salary ) );
                              }) : ({ /* cicili#Let2184 */
                                // ----------
                                ;
                                ({ /* cicili#Progn2186 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let2190 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2192 */
                        ({ /* cicili#Let2199 */
                          typeof((head . __h_0_mem )) id ;
                          typeof((head . __h_1_mem )) __h_match2197_1_arg ;
                          typeof((__h_match2197_1_arg . __h_0_mem )) name ;
                          typeof((__h_match2197_1_arg . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let2201 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2202 */
                                    (id  =  (head . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2204 */
                                    (__h_match2197_1_arg  =  (head . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn2206 */
                                      (name  =  (__h_match2197_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2208 */
                                      (salary  =  (__h_match2197_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2213 */
                                (fprintf (file , "(id: %d, name: ", id ) +  show_String (file , name ) +  fprintf (file , ", salary: %d)", salary ) );
                              }) : ({ /* cicili#Let2217 */
                                // ----------
                                ;
                                ({ /* cicili#Progn2219 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_BTree_int_User_pair_t (file , tail ) );
          }) : ({ /* cicili#Let2224 */
            // ----------
            ;
            ({ /* cicili#Progn2226 */
              0;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2232 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2234 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2235 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2237 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2242 */
            Cons_BTree_int_User_pair_t (head , copy_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* cicili#Let2248 */
            // ----------
            ;
            ({ /* cicili#Progn2250 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2257 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2259 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2260 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2262 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2267 */
            Cons_BTree_int_User_pair_t (head , replaceAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let2273 */
            // ----------
            ;
            ({ /* cicili#Progn2275 */
              ({ /* cicili#Let2279 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let2281 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2282 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2287 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* cicili#Let2293 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2295 */
                        Nil_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t deleteAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2302 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2304 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2305 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2307 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2312 */
            Cons_BTree_int_User_pair_t (head , deleteAt_List_BTree_int_User_pair_t (tail , (index  -  1 )));
          }) : ({ /* cicili#Let2318 */
            // ----------
            ;
            ({ /* cicili#Progn2320 */
              ({ /* cicili#Let2324 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let2326 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2327 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2332 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* cicili#Let2337 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2339 */
                        Nil_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t insertAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2346 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2348 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2349 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2351 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2356 */
            Cons_BTree_int_User_pair_t (head , insertAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let2362 */
            // ----------
            ;
            ({ /* cicili#Progn2364 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (list ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2372 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2374 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2375 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2377 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2382 */
            Cons_BTree_int_User_pair_t (head , replace_List_BTree_int_User_pair_t (tail , item , aimed ));
          }) : ({ /* cicili#Let2388 */
            // ----------
            ;
            ({ /* cicili#Progn2390 */
              ({ /* cicili#Let2394 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let2396 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2397 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2402 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* cicili#Let2408 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2410 */
                        Nil_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t delete_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t aimed ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2417 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2419 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2420 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2422 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2427 */
            Cons_BTree_int_User_pair_t (head , delete_List_BTree_int_User_pair_t (tail , aimed ));
          }) : ({ /* cicili#Let2433 */
            // ----------
            ;
            ({ /* cicili#Progn2435 */
              ({ /* cicili#Let2439 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let2441 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2442 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2447 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* cicili#Let2452 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2454 */
                        Nil_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t insert_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , List_BTree_int_User_pair_t rlist ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2461 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2463 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2464 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2466 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2471 */
            Cons_BTree_int_User_pair_t (head , insert_List_BTree_int_User_pair_t (tail , item , rlist ));
          }) : ({ /* cicili#Let2477 */
            // ----------
            ;
            ({ /* cicili#Progn2479 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  List_BTree_int_User_pair_t _reverse (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t rlist ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let2488 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let2490 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2491 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2493 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2498 */
              _reverse (tail , Cons_BTree_int_User_pair_t (head , rlist ));
            }) : ({ /* cicili#Let2503 */
              // ----------
              ;
              ({ /* cicili#Progn2505 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let2509 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2511 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2512 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2514 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2519 */
            _reverse (tail , Cons_BTree_int_User_pair_t (head , Nil_BTree_int_User_pair_t ()));
          }) : ({ /* cicili#Let2525 */
            // ----------
            ;
            ({ /* cicili#Progn2527 */
              list ;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2533 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2535 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2536 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2538 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2543 */
            Cons_BTree_int_User_pair_t (head , append_List_BTree_int_User_pair_t (tail , rlist ));
          }) : ({ /* cicili#Let2549 */
            // ----------
            ;
            ({ /* cicili#Progn2551 */
              copy_List_BTree_int_User_pair_t (rlist );
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t push_List_BTree_int_User_pair_t (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (list ));
}
List_BTree_int_User_pair_t take_List_BTree_int_User_pair_t (int len , List_BTree_int_User_pair_t list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return (((len  <=  0 )) ? Nil_BTree_int_User_pair_t () : ({ /* cicili#Let2564 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let2566 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2567 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2569 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2574 */
              Cons_BTree_int_User_pair_t (head , take_List_BTree_int_User_pair_t ((--len ), tail ));
            }) : ({ /* cicili#Let2580 */
              // ----------
              ;
              ({ /* cicili#Progn2582 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2589 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2591 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2592 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2597 */
            ({ /* cicili#Let2601 */
              // ----------
              ;
              ({ /* cicili#Let2603 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn2607 */
                    copy_List_BTree_int_User_pair_t (list );
                  }) : ({ /* cicili#Let2612 */
                    // ----------
                    ;
                    ({ /* cicili#Progn2614 */
                      last_List_BTree_int_User_pair_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let2619 */
            // ----------
            ;
            ({ /* cicili#Progn2621 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2629 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2631 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2632 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2634 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2639 */
            Cons_BTree_int_User_pair_t (head , init_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* cicili#Let2645 */
            // ----------
            ;
            ({ /* cicili#Progn2647 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
int hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , int desired ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2654 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2656 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2657 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2662 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_int_User_pair_t (tail , (--desired )) ));
          }) : ({ /* cicili#Let2668 */
            // ----------
            ;
            ({ /* cicili#Progn2670 */
              0;
            });
          }));
      });
    });
}
int len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2676 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2678 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2679 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2684 */
            (1 +  len_List_BTree_int_User_pair_t (tail ) );
          }) : ({ /* cicili#Let2689 */
            // ----------
            ;
            ({ /* cicili#Progn2691 */
              0;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t tail_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return drop_List_BTree_int_User_pair_t (1, list );
}
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (int len , List_BTree_int_User_pair_t list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return (((len  <=  0 )) ? copy_List_BTree_int_User_pair_t (list ) : ({ /* cicili#Let2702 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let2704 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2705 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2710 */
              drop_List_BTree_int_User_pair_t ((--len ), tail );
            }) : ({ /* cicili#Let2715 */
              // ----------
              ;
              ({ /* cicili#Progn2717 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2725 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let2727 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2728 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2733 */
            Just_BTree_int_User_pair_t (head );
          }) : ({ /* cicili#Let2738 */
            // ----------
            ;
            ({ /* cicili#Progn2740 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (int index , List_BTree_int_User_pair_t list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2747 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2749 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2750 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2755 */
            nthcdr_List_BTree_int_User_pair_t ((--index ), tail );
          }) : ({ /* cicili#Let2760 */
            // ----------
            ;
            ({ /* cicili#Progn2762 */
              list ;
            });
          }));
      });
    });
}
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (int index , List_BTree_int_User_pair_t list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2769 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2771 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2772 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2774 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2779 */
            (((index  ==  0 )) ? Just_BTree_int_User_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_int_User_pair_t () : nth_List_BTree_int_User_pair_t ((--index ), tail )));
          }) : ({ /* cicili#Let2788 */
            // ----------
            ;
            ({ /* cicili#Progn2790 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
void free_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t * this_ptr ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2795 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2799 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2801 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2802 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block2808 */
            { /* cicili#Block2810 */
              free (this );
              free_List_BTree_int_User_pair_t ((&tail ));
            }
          }
        else
          { /* cicili#Let2818 */
            // ----------
            ;
            ({ /* cicili#Let2820 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block2825 */
                  { /* cicili#Block2827 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_BTree_int_User_pair_t__H_Table * const get_List_BTree_int_User_pair_t__H_Table () {
  static List_BTree_int_User_pair_t__H_Table table  = { free_List_BTree_int_User_pair_t , toArray_List_BTree_int_User_pair_t , wrap_List_BTree_int_User_pair_t , pure_List_BTree_int_User_pair_t , show_List_BTree_int_User_pair_t , copy_List_BTree_int_User_pair_t , replaceAt_List_BTree_int_User_pair_t , deleteAt_List_BTree_int_User_pair_t , insertAt_List_BTree_int_User_pair_t , replace_List_BTree_int_User_pair_t , delete_List_BTree_int_User_pair_t , insert_List_BTree_int_User_pair_t , reverse_List_BTree_int_User_pair_t , append_List_BTree_int_User_pair_t , push_List_BTree_int_User_pair_t , take_List_BTree_int_User_pair_t , last_List_BTree_int_User_pair_t , init_List_BTree_int_User_pair_t , hasLen_List_BTree_int_User_pair_t , len_List_BTree_int_User_pair_t , tail_List_BTree_int_User_pair_t , drop_List_BTree_int_User_pair_t , head_List_BTree_int_User_pair_t , nthcdr_List_BTree_int_User_pair_t , nth_List_BTree_int_User_pair_t };
  return (&table );
}
List_BTree_int_User_pair_t Cons_BTree_int_User_pair_t (BTree_int_User_pair_t head , List_BTree_int_User_pair_t tail ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2838 */
    List_BTree_int_User_pair_t instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return __h_stack_push (instance );
  }
}
List_BTree_int_User_pair_t Nil_BTree_int_User_pair_t () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2844 */
    List_BTree_int_User_pair_t instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h___t });
    return __h_stack_push (instance );
  }
}
#endif /* __List_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __Maybe_List_BTree_int_User_pair_t__H_IMPL__
#define __Maybe_List_BTree_int_User_pair_t__H_IMPL__
void free_Maybe_List_BTree_int_User_pair_t (Maybe_List_BTree_int_User_pair_t * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_List_BTree_int_User_pair_t__H_Table * const get_Maybe_List_BTree_int_User_pair_t__H_Table () {
  static const Maybe_List_BTree_int_User_pair_t__H_Table table  = { free_Maybe_List_BTree_int_User_pair_t };
  return (&table );
}
Maybe_List_BTree_int_User_pair_t Just_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2861 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2866 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __Maybe_BTree_int_User__H_IMPL__
#define __Maybe_BTree_int_User__H_IMPL__
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table () {
  static const Maybe_BTree_int_User__H_Table table  = { free_Maybe_BTree_int_User };
  return (&table );
}
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2886 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let2891 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Rc_BTree_int_User__H_IMPL__
#define __Rc_BTree_int_User__H_IMPL__
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User pointer ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2898 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_int_User *)malloc (sizeof(BTree_int_User *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BTree_int_User (holder , count , ((size_t)pointer ));
    });
}
Rc_BTree_int_User clone_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2907 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let2909 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2910 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2912 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn2914 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2919 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn2922 */
                (++(*count ));
                __h_Hold_BTree_int_User (pointer , count , address );
              }) : Gone_BTree_int_User ());
          }) : ({ /* cicili#Let2928 */
            // ----------
            ;
            ({ /* cicili#Progn2930 */
              Gone_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User take_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2938 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let2940 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2941 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2943 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn2945 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2950 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let2954 */
                __auto_type result  = Just_BTree_int_User ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block2960 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let2965 */
            // ----------
            ;
            ({ /* cicili#Progn2967 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2975 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let2977 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2978 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2980 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn2982 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2987 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_int_User ((*pointer )) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let2994 */
            // ----------
            ;
            ({ /* cicili#Progn2996 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3005 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let3007 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3008 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3010 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn3012 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block3018 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block3021 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_BTree_int_User ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block3029 */
                if ((*count ) ==  1 )
                  { /* cicili#Block3032 */
                    free_BTree_int_User (pointer );
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_BTree_int_User ();
                  }
                else
                  (--(*count ));
              }
              }        }
      else
        { /* cicili#Let3042 */
          // ----------
          ;
          ({ /* cicili#Let3044 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block3049 */
              }
          });
        }
    });
  }
}
const Rc_BTree_int_User__H_Table * const get_Rc_BTree_int_User__H_Table () {
  static const Rc_BTree_int_User__H_Table table  = { free_Rc_BTree_int_User , new_Rc_BTree_int_User , clone_Rc_BTree_int_User , take_Rc_BTree_int_User , get_Rc_BTree_int_User };
  return (&table );
}
Rc_BTree_int_User __h_Hold_BTree_int_User (BTree_int_User * pointer , int * count , size_t address ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3060 */
    Rc_BTree_int_User instance  = ((Rc_BTree_int_User){ get_Rc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_BTree_int_User Gone_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3065 */
    Rc_BTree_int_User instance  = ((Rc_BTree_int_User){ get_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_Rc_BTree_int_User__H_IMPL__
#define __Maybe_Rc_BTree_int_User__H_IMPL__
void free_Maybe_Rc_BTree_int_User (Maybe_Rc_BTree_int_User * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_Rc_BTree_int_User__H_Table * const get_Maybe_Rc_BTree_int_User__H_Table () {
  static const Maybe_Rc_BTree_int_User__H_Table table  = { free_Maybe_Rc_BTree_int_User };
  return (&table );
}
Maybe_Rc_BTree_int_User Just_Rc_BTree_int_User (Rc_BTree_int_User value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3083 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3088 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __List_Rc_BTree_int_User__H_IMPL__
#define __List_Rc_BTree_int_User__H_IMPL__
Rc_BTree_int_User * toArray_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User term ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  Rc_BTree_int_User * array (List_Rc_BTree_int_User list , int count ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let3098 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let3100 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3101 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3103 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3108 */
              ({ /* cicili#Let3110 */
                Rc_BTree_int_User * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let3114 */
              // ----------
              ;
              ({ /* cicili#Progn3116 */
                ({ /* cicili#Let3118 */
                  Rc_BTree_int_User * arr  = calloc (count , sizeof(Rc_BTree_int_User));
                  // ----------
                  arr [(count  -  1 )] = term ;
                  arr ;
                });
              });
            }));
        });
      });
  }
  return array (list , 0);
}
List_Rc_BTree_int_User wrap_List_Rc_BTree_int_User (const Rc_BTree_int_User item ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Cons_Rc_BTree_int_User (item , Nil_Rc_BTree_int_User ());
}
List_Rc_BTree_int_User pure_List_Rc_BTree_int_User (const Rc_BTree_int_User * buf , int len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return (((buf  ==  NULL  )) ? Nil_Rc_BTree_int_User () : ({ /* cicili#Let3129 */
        Rc_BTree_int_User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Rc_BTree_int_User () : Cons_Rc_BTree_int_User (item , pure_List_Rc_BTree_int_User ((++buf ), (--len ))));
      }));
}
int show_List_Rc_BTree_int_User (CFile file , List_Rc_BTree_int_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3139 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3141 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3142 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3144 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3149 */
            (({ /* cicili#Let3153 */
                // ----------
                ;
                ({ /* cicili#Let3155 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3159 */
                      (({ /* cicili#Let3167 */
                          __auto_type match3166  = get_Rc_BTree_int_User (head );
                          typeof((((match3166 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          ;
                          ({ /* cicili#Let3170 */
                            bool __h_case_result  = (true  &&  (((match3166 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3171 */
                                  (child  =  (((match3166 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn3176 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* cicili#Let3181 */
                                // ----------
                                ;
                                ({ /* cicili#Progn3183 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let3187 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3189 */
                        ({ /* cicili#Let3197 */
                          __auto_type match3196  = get_Rc_BTree_int_User (head );
                          typeof((((match3196 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          ;
                          ({ /* cicili#Let3200 */
                            bool __h_case_result  = (true  &&  (((match3196 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3201 */
                                  (child  =  (((match3196 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn3206 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* cicili#Let3211 */
                                // ----------
                                ;
                                ({ /* cicili#Progn3213 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_Rc_BTree_int_User (file , tail ) );
          }) : ({ /* cicili#Let3218 */
            // ----------
            ;
            ({ /* cicili#Progn3220 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3226 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3228 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3229 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3231 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3236 */
            Cons_Rc_BTree_int_User (head , copy_List_Rc_BTree_int_User (tail ));
          }) : ({ /* cicili#Let3242 */
            // ----------
            ;
            ({ /* cicili#Progn3244 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3251 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3253 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3254 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3256 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3261 */
            Cons_Rc_BTree_int_User (head , replaceAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3267 */
            // ----------
            ;
            ({ /* cicili#Progn3269 */
              ({ /* cicili#Let3273 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let3275 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3276 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3281 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* cicili#Let3287 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3289 */
                        Nil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_int_User deleteAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3296 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3298 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3299 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3301 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3306 */
            Cons_Rc_BTree_int_User (head , deleteAt_List_Rc_BTree_int_User (tail , (index  -  1 )));
          }) : ({ /* cicili#Let3312 */
            // ----------
            ;
            ({ /* cicili#Progn3314 */
              ({ /* cicili#Let3318 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let3320 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3321 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3326 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* cicili#Let3331 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3333 */
                        Nil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_int_User insertAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3340 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3342 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3343 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3345 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3350 */
            Cons_Rc_BTree_int_User (head , insertAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3356 */
            // ----------
            ;
            ({ /* cicili#Progn3358 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (list ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3366 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3368 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3369 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3371 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3376 */
            Cons_Rc_BTree_int_User (head , replace_List_Rc_BTree_int_User (tail , item , aimed ));
          }) : ({ /* cicili#Let3382 */
            // ----------
            ;
            ({ /* cicili#Progn3384 */
              ({ /* cicili#Let3388 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let3390 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3391 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3396 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* cicili#Let3402 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3404 */
                        Nil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_int_User delete_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , List_Rc_BTree_int_User aimed ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3411 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3413 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3414 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3416 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3421 */
            Cons_Rc_BTree_int_User (head , delete_List_Rc_BTree_int_User (tail , aimed ));
          }) : ({ /* cicili#Let3427 */
            // ----------
            ;
            ({ /* cicili#Progn3429 */
              ({ /* cicili#Let3433 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let3435 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3436 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3441 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* cicili#Let3446 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3448 */
                        Nil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_int_User insert_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , List_Rc_BTree_int_User rlist ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3455 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3457 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3458 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3460 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3465 */
            Cons_Rc_BTree_int_User (head , insert_List_Rc_BTree_int_User (tail , item , rlist ));
          }) : ({ /* cicili#Let3471 */
            // ----------
            ;
            ({ /* cicili#Progn3473 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  List_Rc_BTree_int_User _reverse (List_Rc_BTree_int_User list , List_Rc_BTree_int_User rlist ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let3482 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let3484 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3485 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3487 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3492 */
              _reverse (tail , Cons_Rc_BTree_int_User (head , rlist ));
            }) : ({ /* cicili#Let3497 */
              // ----------
              ;
              ({ /* cicili#Progn3499 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let3503 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3505 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3506 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3508 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3513 */
            _reverse (tail , Cons_Rc_BTree_int_User (head , Nil_Rc_BTree_int_User ()));
          }) : ({ /* cicili#Let3519 */
            // ----------
            ;
            ({ /* cicili#Progn3521 */
              list ;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3527 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3529 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3530 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3532 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3537 */
            Cons_Rc_BTree_int_User (head , append_List_Rc_BTree_int_User (tail , rlist ));
          }) : ({ /* cicili#Let3543 */
            // ----------
            ;
            ({ /* cicili#Progn3545 */
              copy_List_Rc_BTree_int_User (rlist );
            });
          }));
      });
    });
}
List_Rc_BTree_int_User push_List_Rc_BTree_int_User (Rc_BTree_int_User item , List_Rc_BTree_int_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (list ));
}
List_Rc_BTree_int_User take_List_Rc_BTree_int_User (int len , List_Rc_BTree_int_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return (((len  <=  0 )) ? Nil_Rc_BTree_int_User () : ({ /* cicili#Let3558 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let3560 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3561 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3563 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3568 */
              Cons_Rc_BTree_int_User (head , take_List_Rc_BTree_int_User ((--len ), tail ));
            }) : ({ /* cicili#Let3574 */
              // ----------
              ;
              ({ /* cicili#Progn3576 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3583 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3585 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3586 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3591 */
            ({ /* cicili#Let3595 */
              // ----------
              ;
              ({ /* cicili#Let3597 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn3601 */
                    copy_List_Rc_BTree_int_User (list );
                  }) : ({ /* cicili#Let3606 */
                    // ----------
                    ;
                    ({ /* cicili#Progn3608 */
                      last_List_Rc_BTree_int_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3613 */
            // ----------
            ;
            ({ /* cicili#Progn3615 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3623 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3625 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3626 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3628 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3633 */
            Cons_Rc_BTree_int_User (head , init_List_Rc_BTree_int_User (tail ));
          }) : ({ /* cicili#Let3639 */
            // ----------
            ;
            ({ /* cicili#Progn3641 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
int hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , int desired ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3648 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3650 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3651 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3656 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_int_User (tail , (--desired )) ));
          }) : ({ /* cicili#Let3662 */
            // ----------
            ;
            ({ /* cicili#Progn3664 */
              0;
            });
          }));
      });
    });
}
int len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3670 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3672 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3673 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3678 */
            (1 +  len_List_Rc_BTree_int_User (tail ) );
          }) : ({ /* cicili#Let3683 */
            // ----------
            ;
            ({ /* cicili#Progn3685 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User tail_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return drop_List_Rc_BTree_int_User (1, list );
}
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (int len , List_Rc_BTree_int_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return (((len  <=  0 )) ? copy_List_Rc_BTree_int_User (list ) : ({ /* cicili#Let3696 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let3698 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3699 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3704 */
              drop_List_Rc_BTree_int_User ((--len ), tail );
            }) : ({ /* cicili#Let3709 */
              // ----------
              ;
              ({ /* cicili#Progn3711 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3719 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let3721 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3722 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3727 */
            Just_Rc_BTree_int_User (head );
          }) : ({ /* cicili#Let3732 */
            // ----------
            ;
            ({ /* cicili#Progn3734 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (int index , List_Rc_BTree_int_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3741 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3743 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3744 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3749 */
            nthcdr_List_Rc_BTree_int_User ((--index ), tail );
          }) : ({ /* cicili#Let3754 */
            // ----------
            ;
            ({ /* cicili#Progn3756 */
              list ;
            });
          }));
      });
    });
}
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (int index , List_Rc_BTree_int_User list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3763 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3765 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3766 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3768 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3773 */
            (((index  ==  0 )) ? Just_Rc_BTree_int_User (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_int_User () : nth_List_Rc_BTree_int_User ((--index ), tail )));
          }) : ({ /* cicili#Let3782 */
            // ----------
            ;
            ({ /* cicili#Progn3784 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
void free_List_Rc_BTree_int_User (List_Rc_BTree_int_User * this_ptr ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3789 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3793 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3795 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3796 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3802 */
            { /* cicili#Block3804 */
              free (this );
              free_List_Rc_BTree_int_User ((&tail ));
            }
          }
        else
          { /* cicili#Let3812 */
            // ----------
            ;
            ({ /* cicili#Let3814 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3819 */
                  { /* cicili#Block3821 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_Rc_BTree_int_User__H_Table * const get_List_Rc_BTree_int_User__H_Table () {
  static List_Rc_BTree_int_User__H_Table table  = { free_List_Rc_BTree_int_User , toArray_List_Rc_BTree_int_User , wrap_List_Rc_BTree_int_User , pure_List_Rc_BTree_int_User , show_List_Rc_BTree_int_User , copy_List_Rc_BTree_int_User , replaceAt_List_Rc_BTree_int_User , deleteAt_List_Rc_BTree_int_User , insertAt_List_Rc_BTree_int_User , replace_List_Rc_BTree_int_User , delete_List_Rc_BTree_int_User , insert_List_Rc_BTree_int_User , reverse_List_Rc_BTree_int_User , append_List_Rc_BTree_int_User , push_List_Rc_BTree_int_User , take_List_Rc_BTree_int_User , last_List_Rc_BTree_int_User , init_List_Rc_BTree_int_User , hasLen_List_Rc_BTree_int_User , len_List_Rc_BTree_int_User , tail_List_Rc_BTree_int_User , drop_List_Rc_BTree_int_User , head_List_Rc_BTree_int_User , nthcdr_List_Rc_BTree_int_User , nth_List_Rc_BTree_int_User };
  return (&table );
}
List_Rc_BTree_int_User Cons_Rc_BTree_int_User (Rc_BTree_int_User head , List_Rc_BTree_int_User tail ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3832 */
    List_Rc_BTree_int_User instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return __h_stack_push (instance );
  }
}
List_Rc_BTree_int_User Nil_Rc_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3838 */
    List_Rc_BTree_int_User instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h___t });
    return __h_stack_push (instance );
  }
}
#endif /* __List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_List_Rc_BTree_int_User__H_IMPL__
#define __Maybe_List_Rc_BTree_int_User__H_IMPL__
void free_Maybe_List_Rc_BTree_int_User (Maybe_List_Rc_BTree_int_User * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_List_Rc_BTree_int_User__H_Table * const get_Maybe_List_Rc_BTree_int_User__H_Table () {
  static const Maybe_List_Rc_BTree_int_User__H_Table table  = { free_Maybe_List_Rc_BTree_int_User };
  return (&table );
}
Maybe_List_Rc_BTree_int_User Just_List_Rc_BTree_int_User (List_Rc_BTree_int_User value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3855 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_int_User Nothing_List_Rc_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3860 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_int_User__H_IMPL__
#define __Functor_List_Rc_BTree_int_User__H_IMPL__
List_Rc_BTree_int_User fmap_Functor_List_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3874 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3876 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3877 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3879 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3884 */
            Cons_Rc_BTree_int_User (a_b (head ), fmap_Functor_List_Rc_BTree_int_User (a_b , tail ));
          }) : ({ /* cicili#Let3891 */
            // ----------
            ;
            ({ /* cicili#Progn3893 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Functor_List_Rc_BTree_int_User (Functor_List_Rc_BTree_int_User * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Functor_List_Rc_BTree_int_User__H_Table * const get_Functor_List_Rc_BTree_int_User__H_Table () {
  static const Functor_List_Rc_BTree_int_User__H_Table table  = { free_Functor_List_Rc_BTree_int_User , fmap_Functor_List_Rc_BTree_int_User };
  return (&table );
}
Functor_List_Rc_BTree_int_User Functor_List_Rc_BTree_int_User_ctor () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3907 */
    Functor_List_Rc_BTree_int_User instance  = ((Functor_List_Rc_BTree_int_User){ get_Functor_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_Rc_BTree_int_User__H_IMPL__ */ 
Functor_List_Rc_BTree_int_User get_Functor_List_Rc_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Functor_List_Rc_BTree_int_User_ctor ();
}
size_t U_BTree_int_User  = 3;
size_t L_BTree_int_User  = 2;
BTree_int_User split_BTree_int_User (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3925 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let3927 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn3928 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3930 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3935 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let3941 */
                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let3943 */
                  __auto_type tree  = tree ;
                  // ----------
                  ((void)(tree -> __h_table -> freeClass ));
                  tree ;
                });
                // ----------
                Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let3951 */
                    __auto_type match3950  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                    typeof((((match3950 . __h_data ). Just ). __h_0_mem )) nitem ;
                    // ----------
                    ;
                    ({ /* cicili#Let3955 */
                      bool __h_case_result  = (true  &&  (((match3950 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3956 */
                            (nitem  =  (((match3950 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn3961 */
                          nitem ;
                        }) : ({ /* cicili#Let3965 */
                          // ----------
                          ;
                          ({ /* cicili#Progn3967 */
                            ((BTree_int_User_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let3978 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let3980 */
                        __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn3990 */
                          Rc_BTree_int_User __ciciliC_3989 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_3989 ;
                        }), r1 );
                    }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4001 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4003 */
                        __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4013 */
                          Rc_BTree_int_User __ciciliC_4012 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_4012 ;
                        }), r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* cicili#Let4020 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let4022 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn4023 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn4025 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4030 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let4036 */
                      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4038 */
                        __auto_type tree  = tree ;
                        // ----------
                        ((void)(tree -> __h_table -> freeClass ));
                        tree ;
                      });
                      // ----------
                      Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4046 */
                          __auto_type match4045  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                          typeof((((match4045 . __h_data ). Just ). __h_0_mem )) nitem ;
                          // ----------
                          ;
                          ({ /* cicili#Let4050 */
                            bool __h_case_result  = (true  &&  (((match4045 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4051 */
                                  (nitem  =  (((match4045 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4056 */
                                nitem ;
                              }) : ({ /* cicili#Let4060 */
                                // ----------
                                ;
                                ({ /* cicili#Progn4062 */
                                  ((BTree_int_User_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4073 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4075 */
                              __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4085 */
                                Rc_BTree_int_User __ciciliC_4084 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_4084 ;
                              }), r1 );
                          }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4096 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4098 */
                              __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4108 */
                                Rc_BTree_int_User __ciciliC_4107 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_4107 ;
                              }), r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* cicili#Let4115 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let4117 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4118 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4123 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let4129 */
                            __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4131 */
                              __auto_type tree  = tree ;
                              // ----------
                              ((void)(tree -> __h_table -> freeClass ));
                              tree ;
                            });
                            // ----------
                            Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4139 */
                                __auto_type match4138  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                                typeof((((match4138 . __h_data ). Just ). __h_0_mem )) nitem ;
                                // ----------
                                ;
                                ({ /* cicili#Let4143 */
                                  bool __h_case_result  = (true  &&  (((match4138 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4144 */
                                        (nitem  =  (((match4138 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4149 */
                                      nitem ;
                                    }) : ({ /* cicili#Let4153 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4155 */
                                        ((BTree_int_User_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2));
                          }) : tree );
                      }) : ({ /* cicili#Let4172 */
                        // ----------
                        ;
                        ({ /* cicili#Progn4174 */
                          tree ;
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
BTree_int_User splitForDelete_BTree_int_User (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let4180 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let4182 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn4183 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4185 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4190 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4200 */
                __auto_type match4199  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                typeof((((match4199 . __h_data ). Just ). __h_0_mem )) nitem ;
                // ----------
                ;
                ({ /* cicili#Let4204 */
                  bool __h_case_result  = (true  &&  (((match4199 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4205 */
                        (nitem  =  (((match4199 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4210 */
                      nitem ;
                    }) : ({ /* cicili#Let4214 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4216 */
                        ((BTree_int_User_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4227 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4229 */
                    __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4239 */
                      Rc_BTree_int_User __ciciliC_4238 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_4238 ;
                    }), r1 );
                }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4250 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4252 */
                    __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4262 */
                      Rc_BTree_int_User __ciciliC_4261 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_4261 ;
                    }), r1 );
                })))}), 2)) : tree );
          }) : ({ /* cicili#Let4269 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let4271 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn4272 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn4274 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4279 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4289 */
                      __auto_type match4288  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                      typeof((((match4288 . __h_data ). Just ). __h_0_mem )) nitem ;
                      // ----------
                      ;
                      ({ /* cicili#Let4293 */
                        bool __h_case_result  = (true  &&  (((match4288 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4294 */
                              (nitem  =  (((match4288 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4299 */
                            nitem ;
                          }) : ({ /* cicili#Let4303 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4305 */
                              ((BTree_int_User_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4316 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4318 */
                          __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4328 */
                            Rc_BTree_int_User __ciciliC_4327 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4327 ;
                          }), r1 );
                      }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4339 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4341 */
                          __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4351 */
                            Rc_BTree_int_User __ciciliC_4350 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4350 ;
                          }), r1 );
                      })))}), 2)) : tree );
                }) : ({ /* cicili#Let4358 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let4360 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4361 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4366 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4376 */
                            __auto_type match4375  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                            typeof((((match4375 . __h_data ). Just ). __h_0_mem )) nitem ;
                            // ----------
                            ;
                            ({ /* cicili#Let4380 */
                              bool __h_case_result  = (true  &&  (((match4375 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4381 */
                                    (nitem  =  (((match4375 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn4386 */
                                  nitem ;
                                }) : ({ /* cicili#Let4390 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4392 */
                                    ((BTree_int_User_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2)) : tree );
                      }) : ({ /* cicili#Let4409 */
                        // ----------
                        ;
                        ({ /* cicili#Progn4411 */
                          tree ;
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
BTree_int_User mergeUp_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , size_t pitem_index , size_t pchild_index , List_BTree_int_User_pair_t left_items , List_Rc_BTree_int_User left_children , List_BTree_int_User_pair_t right_items , List_Rc_BTree_int_User right_children ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let4418 */
      __auto_type merged  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_items , right_items ), ({ /* cicili#Let4423 */
        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4425 */
          __auto_type r1  = append_List_Rc_BTree_int_User (left_children , right_children );
          // ----------
          ((void)(r1 -> __h_table -> freeClass ));
          r1 ;
        });
        // ----------
        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4434 */
            Rc_BTree_int_User __ciciliC_4433 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
              return clone_Rc_BTree_int_User (__h_value );
            }
            __ciciliC_4433 ;
          }), r1 );
      }));
      // ----------
      ({ /* cicili#Let4443 */
        __auto_type tmp_child  = splitForDelete_BTree_int_User (merged );
        typeof((((tmp_child -> __h_data ). Branch ). __h_0_mem )) __h_match4441_0_arg ;
        typeof((((__h_match4441_0_arg -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((tmp_child -> __h_data ). Branch ). __h_1_mem )) tmp_children ;
        // ----------
        ;
        ({ /* cicili#Let4446 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor ) ==  __h_Branch_t  ) &&  ((({ /* cicili#Progn4447 */
                    (__h_match4441_0_arg  =  (((tmp_child -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  (((__h_match4441_0_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4449 */
                        (head  =  (((__h_match4441_0_arg -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) ) ) ) &&  ({ /* cicili#Progn4451 */
                  (tmp_children  =  (((tmp_child -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4456 */
              ({ /* cicili#Let4459 */
                __auto_type merged  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4461 */
                  __auto_type merged  = merged ;
                  // ----------
                  ((void)(merged -> __h_table -> freeClass ));
                  merged ;
                });
                __auto_type tmp_child  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4464 */
                  __auto_type tmp_child  = tmp_child ;
                  // ----------
                  ((void)(tmp_child -> __h_table -> freeClass ));
                  tmp_child ;
                });
                // ----------
                Internal_BTree_int_User (replaceAt_List_BTree_int_User_pair_t (items , head , pitem_index ), ({ /* cicili#Let4471 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4473 */
                      __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                      // ----------
                      ((void)(r1 -> __h_table -> freeClass ));
                      r1 ;
                    });
                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4477 */
                      __auto_type r2  = take_List_Rc_BTree_int_User (pchild_index , r1 );
                      // ----------
                      ((void)(r2 -> __h_table -> freeClass ));
                      r2 ;
                    });
                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4481 */
                      __auto_type r3  = drop_List_Rc_BTree_int_User ((pchild_index  +  1 ), r1 );
                      // ----------
                      ((void)(r3 -> __h_table -> freeClass ));
                      r3 ;
                    });
                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4485 */
                      __auto_type r4  = append_List_Rc_BTree_int_User (tmp_children , r3 );
                      // ----------
                      ((void)(r4 -> __h_table -> freeClass ));
                      r4 ;
                    });
                    __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4489 */
                      __auto_type r5  = append_List_Rc_BTree_int_User (r2 , r4 );
                      // ----------
                      ((void)(r5 -> __h_table -> freeClass ));
                      r5 ;
                    });
                    // ----------
                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4498 */
                        Rc_BTree_int_User __ciciliC_4497 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                          return clone_Rc_BTree_int_User (__h_value );
                        }
                        __ciciliC_4497 ;
                      }), r5 );
                  }));
              });
            }) : ({ /* cicili#Let4505 */
              // ----------
              ;
              ({ /* cicili#Let4507 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor ) ==  __h_Internal_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn4511 */
                    Internal_BTree_int_User (deleteAt_List_BTree_int_User_pair_t (items , pitem_index ), ({ /* cicili#Let4517 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4519 */
                          __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4523 */
                          __auto_type r2  = new_Rc_BTree_int_User (merged );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4527 */
                          __auto_type r3  = replaceAt_List_Rc_BTree_int_User (r1 , r2 , pchild_index );
                          // ----------
                          ((void)(r3 -> __h_table -> freeClass ));
                          r3 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4536 */
                            Rc_BTree_int_User __ciciliC_4535 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4535 ;
                          }), r3 );
                      }));
                  }) : ({ /* cicili#Let4543 */
                    // ----------
                    ;
                    ({ /* cicili#Progn4545 */
                      Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
                    });
                  }));
              });
            }));
        });
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User deleteWithParent_BTree_int_User (Maybe_BTree_int_User wparent , size_t pitem_index , size_t pchild_index , BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item ));
Either_BTree_int_User_Error_BTree_int_User borrowLeaf_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , Maybe_List_BTree_int_User_pair_t wleft , List_BTree_int_User_pair_t current , size_t index , BTree_int_User nchild , void (*callback) (BTree_int_User_pair_t item )) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  Either_BTree_int_User_Error_BTree_int_User borrowRight (List_BTree_int_User_pair_t child_items ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let4572 */
        __auto_type match4571  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4571 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let4575 */
          bool __h_case_result  = (true  &&  (((match4571 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4576 */
                (right_child_rc  =  (((match4571 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4581 */
              ({ /* cicili#Let4584 */
                __auto_type __h_matchbox  = right_child_rc ;
                // ----------
                ({ /* cicili#Let4588 */
                  __auto_type match4587  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match4587 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  ;
                  ({ /* cicili#Let4591 */
                    bool __h_case_result  = (true  &&  (((match4587 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4592 */
                          (unboxed  =  (((match4587 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4597 */
                        ({ /* cicili#Let4601 */
                          typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                          // ----------
                          ;
                          ({ /* cicili#Let4603 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4604 */
                                  (right_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4609 */
                                (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let4617 */
                                    __auto_type first  = right_child_items ;
                                    typeof((((first -> __h_data ). Cons ). __h_0_mem )) first_item ;
                                    typeof((((first -> __h_data ). Cons ). __h_1_mem )) tail ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4619 */
                                      bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4620 */
                                              (first_item  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn4622 */
                                              (tail  =  (((first -> __h_data ). Cons ). __h_1_mem ) );
                                              true ;
                                            }) ) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4627 */
                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , first_item , current ), ({ /* cicili#Let4635 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4637 */
                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4641 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4647 */
                                                  Rc_BTree_int_User __ciciliC_4646 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4646 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4654 */
                                                __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4658 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4664 */
                                                  Rc_BTree_int_User __ciciliC_4663 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4663 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4671 */
                                                __auto_type r5  = take_List_BTree_int_User_pair_t (1, current );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4675 */
                                                __auto_type r7  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (child_items , r5 ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (copy_List_BTree_int_User_pair_t (tail )))}), 2);
                                                // ----------
                                                ((void)(r7 -> __h_table -> freeClass ));
                                                r7 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4688 */
                                                __auto_type r6  = append_List_Rc_BTree_int_User (r7 , r4 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_int_User (r2 , r6 );
                                            })));
                                        }) : ({ /* cicili#Let4695 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4697 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R1"));
                                          });
                                        }));
                                    });
                                  }) : ({ /* cicili#Let4704 */
                                    typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4706 */
                                      bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4707 */
                                            (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4712 */
                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let4720 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4722 */
                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4726 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4732 */
                                                  Rc_BTree_int_User __ciciliC_4731 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4731 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4739 */
                                                __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4743 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4749 */
                                                  Rc_BTree_int_User __ciciliC_4748 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4748 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4756 */
                                                __auto_type r5  = wrap_List_BTree_int_User_pair_t (head );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4760 */
                                                __auto_type r6  = append_List_BTree_int_User_pair_t (child_items , r5 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4764 */
                                                __auto_type r8  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r6 , right_child_items ))), r4 );
                                                // ----------
                                                ((void)(r8 -> __h_table -> freeClass ));
                                                r8 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_int_User (r2 , r8 );
                                            })));
                                        }) : ({ /* cicili#Let4775 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4777 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R2"));
                                          });
                                        }));
                                    });
                                  }));
                              }) : ({ /* cicili#Let4784 */
                                // ----------
                                ;
                                ({ /* cicili#Progn4786 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let4793 */
                        // ----------
                        ;
                        ({ /* cicili#Progn4795 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let4802 */
              // ----------
              ;
              ({ /* cicili#Progn4804 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowLeft (List_BTree_int_User_pair_t child_items ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let4817 */
        typeof((((wleft . __h_data ). Just ). __h_0_mem )) left ;
        typeof((((left -> __h_data ). Cons ). __h_0_mem )) left_item ;
        // ----------
        ;
        ({ /* cicili#Let4819 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn4820 */
                  (left  =  (((wleft . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) &&  (true  &&  (((left -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4822 */
                      (left_item  =  (((left -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) ) ) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4827 */
              ({ /* cicili#Let4831 */
                __auto_type match4830  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                typeof((((match4830 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
                // ----------
                ;
                ({ /* cicili#Let4834 */
                  bool __h_case_result  = (true  &&  (((match4830 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4835 */
                        (left_child_rc  =  (((match4830 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4840 */
                      ({ /* cicili#Let4843 */
                        __auto_type __h_matchbox  = left_child_rc ;
                        // ----------
                        ({ /* cicili#Let4847 */
                          __auto_type match4846  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match4846 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let4850 */
                            bool __h_case_result  = (true  &&  (((match4846 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4851 */
                                  (unboxed  =  (((match4846 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4856 */
                                ({ /* cicili#Let4860 */
                                  typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let4862 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4863 */
                                          (left_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn4868 */
                                        (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let4876 */
                                            __auto_type last  = last_List_BTree_int_User_pair_t (left_child_items );
                                            typeof((((last -> __h_data ). Cons ). __h_0_mem )) last_item ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let4879 */
                                              bool __h_case_result  = (true  &&  (((last -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4880 */
                                                    (last_item  =  (((last -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn4885 */
                                                  ({ /* cicili#Let4888 */
                                                    __auto_type last  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4890 */
                                                      __auto_type last  = last ;
                                                      // ----------
                                                      ((void)(last -> __h_table -> freeClass ));
                                                      last ;
                                                    });
                                                    // ----------
                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , last_item , left ), ({ /* cicili#Let4899 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4901 */
                                                          __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                          // ----------
                                                          ((void)(r1 -> __h_table -> freeClass ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4905 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4911 */
                                                            Rc_BTree_int_User __ciciliC_4910 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_4910 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)(r2 -> __h_table -> freeClass ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4918 */
                                                          __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                          // ----------
                                                          ((void)(r3 -> __h_table -> freeClass ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4922 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4928 */
                                                            Rc_BTree_int_User __ciciliC_4927 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_4927 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)(r4 -> __h_table -> freeClass ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4935 */
                                                          __auto_type r5  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (init_List_BTree_int_User_pair_t (left_child_items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (push_List_BTree_int_User_pair_t (left_item , child_items )))}), 2);
                                                          // ----------
                                                          ((void)(r5 -> __h_table -> freeClass ));
                                                          r5 ;
                                                        });
                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4948 */
                                                          __auto_type r7  = append_List_Rc_BTree_int_User (r5 , r4 );
                                                          // ----------
                                                          ((void)(r7 -> __h_table -> freeClass ));
                                                          r7 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_int_User (r2 , r7 );
                                                      })));
                                                  });
                                                }) : ({ /* cicili#Let4955 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn4957 */
                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 2"));
                                                  });
                                                }));
                                            });
                                          }) : ({ /* cicili#Let4964 */
                                            __auto_type match4963  = borrowRight (child_items );
                                            // ----------
                                            ;
                                            ({ /* cicili#Let4966 */
                                              bool __h_case_result  = (true  &&  ((match4963 . __h_ctor ) ==  __h_Left_t  ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn4970 */
                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , left ), ({ /* cicili#Let4978 */
                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4980 */
                                                        __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                        // ----------
                                                        ((void)(r1 -> __h_table -> freeClass ));
                                                        r1 ;
                                                      });
                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4984 */
                                                        __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4990 */
                                                          Rc_BTree_int_User __ciciliC_4989 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                            return clone_Rc_BTree_int_User (__h_value );
                                                          }
                                                          __ciciliC_4989 ;
                                                        }), r1 );
                                                        // ----------
                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                        r2 ;
                                                      });
                                                      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4997 */
                                                        __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                        // ----------
                                                        ((void)(r3 -> __h_table -> freeClass ));
                                                        r3 ;
                                                      });
                                                      __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5001 */
                                                        __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5007 */
                                                          Rc_BTree_int_User __ciciliC_5006 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                            return clone_Rc_BTree_int_User (__h_value );
                                                          }
                                                          __ciciliC_5006 ;
                                                        }), r3 );
                                                        // ----------
                                                        ((void)(r4 -> __h_table -> freeClass ));
                                                        r4 ;
                                                      });
                                                      __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5014 */
                                                        __auto_type r8  = wrap_List_BTree_int_User_pair_t (left_item );
                                                        // ----------
                                                        ((void)(r8 -> __h_table -> freeClass ));
                                                        r8 ;
                                                      });
                                                      __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5018 */
                                                        __auto_type r5  = append_List_BTree_int_User_pair_t (left_child_items , r8 );
                                                        // ----------
                                                        ((void)(r5 -> __h_table -> freeClass ));
                                                        r5 ;
                                                      });
                                                      __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5022 */
                                                        __auto_type r7  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r5 , child_items ))), r4 );
                                                        // ----------
                                                        ((void)(r7 -> __h_table -> freeClass ));
                                                        r7 ;
                                                      });
                                                      // ----------
                                                      append_List_Rc_BTree_int_User (r2 , r7 );
                                                    })));
                                                }) : ({ /* cicili#Let5033 */
                                                  __auto_type right  = match4963 ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn5035 */
                                                    right ;
                                                  });
                                                }));
                                            });
                                          }));
                                      }) : ({ /* cicili#Let5039 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5041 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 3"));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let5048 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5050 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 4"));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5057 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5059 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 5"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5066 */
              // ----------
              ;
              ({ /* cicili#Progn5068 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let5072 */
      __auto_type result  = ({ /* cicili#Let5075 */
        typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
        // ----------
        ;
        ({ /* cicili#Let5077 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn5078 */
                (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5083 */
              (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5095 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5097 */
                    __auto_type r1  = new_Rc_BTree_int_User (nchild );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5101 */
                    __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                    // ----------
                    ((void)(r2 -> __h_table -> freeClass ));
                    r2 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5110 */
                      Rc_BTree_int_User __ciciliC_5109 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_5109 ;
                    }), r2 );
                }))) : ({ /* cicili#Let5116 */
                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5118 */
                    __auto_type nchild  = nchild ;
                    // ----------
                    ((void)(nchild -> __h_table -> freeClass ));
                    nchild ;
                  });
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* cicili#Let5123 */
              typeof((((nchild -> __h_data ). Internal ). __h_0_mem )) child_items ;
              // ----------
              ;
              ({ /* cicili#Let5125 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn5126 */
                      (child_items  =  (((nchild -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn5131 */
                    (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5143 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5145 */
                          __auto_type r1  = new_Rc_BTree_int_User (nchild );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5149 */
                          __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                          // ----------
                          ((void)(r2 -> __h_table -> freeClass ));
                          r2 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5158 */
                            Rc_BTree_int_User __ciciliC_5157 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_5157 ;
                          }), r2 );
                      }))) : ({ /* cicili#Let5164 */
                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5166 */
                          __auto_type nchild  = nchild ;
                          // ----------
                          ((void)(nchild -> __h_table -> freeClass ));
                          nchild ;
                        });
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* cicili#Let5171 */
                    typeof((((nchild -> __h_data ). Leaf ). __h_0_mem )) child_items ;
                    // ----------
                    ;
                    ({ /* cicili#Let5173 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn5174 */
                            (child_items  =  (((nchild -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn5179 */
                          (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5191 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5193 */
                                __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5197 */
                                __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                // ----------
                                ((void)(r2 -> __h_table -> freeClass ));
                                r2 ;
                              });
                              // ----------
                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5206 */
                                  Rc_BTree_int_User __ciciliC_5205 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                    return clone_Rc_BTree_int_User (__h_value );
                                  }
                                  __ciciliC_5205 ;
                                }), r2 );
                            }))) : ({ /* cicili#Let5212 */
                              __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5214 */
                                __auto_type nchild  = nchild ;
                                // ----------
                                ((void)(nchild -> __h_table -> freeClass ));
                                nchild ;
                              });
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* cicili#Let5219 */
                          // ----------
                          ;
                          ({ /* cicili#Progn5221 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrow 1"));
                          });
                        }));
                    });
                  }));
              });
            }));
        });
      });
      // ----------
      result ;
    });
}
Either_BTree_int_User_Error_BTree_int_User borrowInternal_BTree_int_User (Maybe_BTree_int_User wtree , List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index , void (*callback) (BTree_int_User_pair_t item )) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  Either_BTree_int_User_Error_BTree_int_User borrowRightInternal (List_BTree_int_User_pair_t left_child_items , List_Rc_BTree_int_User left_child_children ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let5246 */
        __auto_type match5245  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match5245 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let5249 */
          bool __h_case_result  = (true  &&  (((match5245 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5250 */
                (right_child_rc  =  (((match5245 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5255 */
              ({ /* cicili#Let5259 */
                __auto_type match5258  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match5258 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                ;
                ({ /* cicili#Let5262 */
                  bool __h_case_result  = (true  &&  (((match5258 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5263 */
                        (right_child  =  (((match5258 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5268 */
                      ({ /* cicili#Let5272 */
                        typeof((((right_child -> __h_data ). Branch ). __h_0_mem )) right_child_items ;
                        typeof((((right_child -> __h_data ). Branch ). __h_1_mem )) right_child_children ;
                        // ----------
                        ;
                        ({ /* cicili#Let5274 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5275 */
                                  (right_child_items  =  (((right_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5277 */
                                  (right_child_children  =  (((right_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5282 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let5291 */
                                  __auto_type match5289  = min_BTree_int_User (right_child );
                                  typeof((((match5289 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5294 */
                                    bool __h_case_result  = (true  &&  (((match5289 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5295 */
                                            (min  =  (((match5289 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn5297 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5302 */
                                        ({ /* cicili#Let5306 */
                                          __auto_type match5305  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match5305 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let5309 */
                                            bool __h_case_result  = (true  &&  (((match5305 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5310 */
                                                  (nchild  =  (((match5305 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn5315 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let5323 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5325 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5329 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5338 */
                                                        Rc_BTree_int_User __ciciliC_5337 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_5337 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let5345 */
                                                __auto_type left  = match5305 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn5347 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let5351 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5353 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* cicili#Let5361 */
                                  typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                  typeof((current_item . __h_0_mem )) current_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5363 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5364 */
                                            (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn5366 */
                                              (current_key  =  (current_item . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5371 */
                                        ({ /* cicili#Let5374 */
                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5376 */
                                            __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                            // ----------
                                            ((void)(r1 -> __h_table -> freeClass ));
                                            r1 ;
                                          });
                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5380 */
                                            __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                            // ----------
                                            ((void)(r2 -> __h_table -> freeClass ));
                                            r2 ;
                                          });
                                          __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5384 */
                                            __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5393 */
                                              Rc_BTree_int_User __ciciliC_5392 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                return clone_Rc_BTree_int_User (__h_value );
                                              }
                                              __ciciliC_5392 ;
                                            }), r2 ));
                                            // ----------
                                            ((void)(r4 -> __h_table -> freeClass ));
                                            r4 ;
                                          });
                                          __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5400 */
                                            __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                            // ----------
                                            ((void)(r5 -> __h_table -> freeClass ));
                                            r5 ;
                                          });
                                          __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5404 */
                                            __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                            // ----------
                                            ((void)(r7 -> __h_table -> freeClass ));
                                            r7 ;
                                          });
                                          // ----------
                                          ({ /* cicili#Let5410 */
                                            __auto_type match5409  = delete_BTree_int_User (r4 , current_key , NULL );
                                            typeof((((match5409 . __h_data ). Right ). __h_0_mem )) ntree ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let5413 */
                                              bool __h_case_result  = (true  &&  (((match5409 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5414 */
                                                    (ntree  =  (((match5409 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn5419 */
                                                  ({ /* cicili#Let5423 */
                                                    __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let5426 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5427 */
                                                              (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn5429 */
                                                              (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn5434 */
                                                          ({ /* cicili#Let5438 */
                                                            typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let5440 */
                                                              bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5441 */
                                                                    (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn5446 */
                                                                  ({ /* cicili#Let5449 */
                                                                    __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5451 */
                                                                      __auto_type ntree  = ntree ;
                                                                      // ----------
                                                                      ((void)(ntree -> __h_table -> freeClass ));
                                                                      ntree ;
                                                                    });
                                                                    __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5454 */
                                                                      __auto_type tmp_result  = tmp_result ;
                                                                      // ----------
                                                                      ((void)(tmp_result -> __h_table -> freeClass ));
                                                                      tmp_result ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let5463 */
                                                                        __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5465 */
                                                                          __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                          // ----------
                                                                          ((void)(r10 -> __h_table -> freeClass ));
                                                                          r10 ;
                                                                        });
                                                                        __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5469 */
                                                                          __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                          // ----------
                                                                          ((void)(r11 -> __h_table -> freeClass ));
                                                                          r11 ;
                                                                        });
                                                                        // ----------
                                                                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5478 */
                                                                            Rc_BTree_int_User __ciciliC_5477 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                              return clone_Rc_BTree_int_User (__h_value );
                                                                            }
                                                                            __ciciliC_5477 ;
                                                                          }), r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* cicili#Let5485 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn5487 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let5494 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let5496 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn5500 */
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let5508 */
                                                                    __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5510 */
                                                                      __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                      // ----------
                                                                      ((void)((r9 . __h_table )-> freeData ));
                                                                      r9 ;
                                                                    });
                                                                    __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5514 */
                                                                      __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                      // ----------
                                                                      ((void)(r10 -> __h_table -> freeClass ));
                                                                      r10 ;
                                                                    });
                                                                    __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5518 */
                                                                      __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                      // ----------
                                                                      ((void)(r11 -> __h_table -> freeClass ));
                                                                      r11 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5527 */
                                                                        Rc_BTree_int_User __ciciliC_5526 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_5526 ;
                                                                      }), r11 );
                                                                  })));
                                                              }) : ({ /* cicili#Let5534 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn5536 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let5543 */
                                                  __auto_type left  = match5409 ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn5545 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* cicili#Let5549 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5551 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* cicili#Let5558 */
                              typeof((((right_child -> __h_data ). Internal ). __h_0_mem )) right_child_items ;
                              typeof((((right_child -> __h_data ). Internal ). __h_1_mem )) right_child_children ;
                              // ----------
                              ;
                              ({ /* cicili#Let5560 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn5561 */
                                        (right_child_items  =  (((right_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn5563 */
                                        (right_child_children  =  (((right_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn5568 */
                                    (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let5577 */
                                        __auto_type match5575  = min_BTree_int_User (right_child );
                                        typeof((((match5575 . __h_data ). Just ). __h_0_mem )) min ;
                                        typeof((min . __h_0_mem )) min_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5580 */
                                          bool __h_case_result  = (true  &&  (((match5575 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5581 */
                                                  (min  =  (((match5575 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn5583 */
                                                    (min_key  =  (min . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5588 */
                                              ({ /* cicili#Let5592 */
                                                __auto_type match5591  = delete_BTree_int_User (right_child , min_key , NULL );
                                                typeof((((match5591 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5595 */
                                                  bool __h_case_result  = (true  &&  (((match5591 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5596 */
                                                        (nchild  =  (((match5591 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5601 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let5609 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5611 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5615 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5624 */
                                                              Rc_BTree_int_User __ciciliC_5623 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_5623 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let5631 */
                                                      __auto_type left  = match5591 ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5633 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5637 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn5639 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* cicili#Let5647 */
                                        typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                        typeof((current_item . __h_0_mem )) current_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5649 */
                                          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5650 */
                                                  (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn5652 */
                                                    (current_key  =  (current_item . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5657 */
                                              ({ /* cicili#Let5660 */
                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5662 */
                                                  __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                  // ----------
                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                  r1 ;
                                                });
                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5666 */
                                                  __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                  // ----------
                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                  r2 ;
                                                });
                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5670 */
                                                  __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5679 */
                                                    Rc_BTree_int_User __ciciliC_5678 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                      return clone_Rc_BTree_int_User (__h_value );
                                                    }
                                                    __ciciliC_5678 ;
                                                  }), r2 ));
                                                  // ----------
                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                  r4 ;
                                                });
                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5686 */
                                                  __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                                  // ----------
                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                  r5 ;
                                                });
                                                __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5690 */
                                                  __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                  // ----------
                                                  ((void)(r7 -> __h_table -> freeClass ));
                                                  r7 ;
                                                });
                                                // ----------
                                                ({ /* cicili#Let5696 */
                                                  __auto_type match5695  = delete_BTree_int_User (r4 , current_key , NULL );
                                                  typeof((((match5695 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let5699 */
                                                    bool __h_case_result  = (true  &&  (((match5695 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5700 */
                                                          (ntree  =  (((match5695 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn5705 */
                                                        ({ /* cicili#Let5709 */
                                                          __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let5712 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5713 */
                                                                    (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn5715 */
                                                                    (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn5720 */
                                                                ({ /* cicili#Let5724 */
                                                                  typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let5726 */
                                                                    bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5727 */
                                                                          (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn5732 */
                                                                        ({ /* cicili#Let5735 */
                                                                          __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5737 */
                                                                            __auto_type ntree  = ntree ;
                                                                            // ----------
                                                                            ((void)(ntree -> __h_table -> freeClass ));
                                                                            ntree ;
                                                                          });
                                                                          __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5740 */
                                                                            __auto_type tmp_result  = tmp_result ;
                                                                            // ----------
                                                                            ((void)(tmp_result -> __h_table -> freeClass ));
                                                                            tmp_result ;
                                                                          });
                                                                          // ----------
                                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let5749 */
                                                                              __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5751 */
                                                                                __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                                // ----------
                                                                                ((void)(r10 -> __h_table -> freeClass ));
                                                                                r10 ;
                                                                              });
                                                                              __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5755 */
                                                                                __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                // ----------
                                                                                ((void)(r11 -> __h_table -> freeClass ));
                                                                                r11 ;
                                                                              });
                                                                              // ----------
                                                                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5764 */
                                                                                  Rc_BTree_int_User __ciciliC_5763 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                                  }
                                                                                  __ciciliC_5763 ;
                                                                                }), r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* cicili#Let5771 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn5773 */
                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let5780 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let5782 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn5786 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let5794 */
                                                                          __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5796 */
                                                                            __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                            // ----------
                                                                            ((void)((r9 . __h_table )-> freeData ));
                                                                            r9 ;
                                                                          });
                                                                          __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5800 */
                                                                            __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                            // ----------
                                                                            ((void)(r10 -> __h_table -> freeClass ));
                                                                            r10 ;
                                                                          });
                                                                          __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5804 */
                                                                            __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                            // ----------
                                                                            ((void)(r11 -> __h_table -> freeClass ));
                                                                            r11 ;
                                                                          });
                                                                          // ----------
                                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5813 */
                                                                              Rc_BTree_int_User __ciciliC_5812 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_5812 ;
                                                                            }), r11 );
                                                                        })));
                                                                    }) : ({ /* cicili#Let5820 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn5822 */
                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let5829 */
                                                        __auto_type left  = match5695 ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn5831 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* cicili#Let5835 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn5837 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* cicili#Let5844 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn5846 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5853 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5855 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5862 */
              // ----------
              ;
              ({ /* cicili#Progn5864 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowRightLeaf (List_BTree_int_User_pair_t left_child_items ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let5877 */
        __auto_type match5876  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match5876 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let5880 */
          bool __h_case_result  = (true  &&  (((match5876 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5881 */
                (right_child_rc  =  (((match5876 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5886 */
              ({ /* cicili#Let5890 */
                __auto_type match5889  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match5889 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                ;
                ({ /* cicili#Let5893 */
                  bool __h_case_result  = (true  &&  (((match5889 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5894 */
                        (right_child  =  (((match5889 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5899 */
                      ({ /* cicili#Let5903 */
                        typeof((((right_child -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                        // ----------
                        ;
                        ({ /* cicili#Let5905 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn5906 */
                                (right_child_items  =  (((right_child -> __h_data ). Leaf ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5911 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let5920 */
                                  __auto_type match5918  = min_BTree_int_User (right_child );
                                  typeof((((match5918 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5923 */
                                    bool __h_case_result  = (true  &&  (((match5918 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5924 */
                                            (min  =  (((match5918 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn5926 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5931 */
                                        ({ /* cicili#Let5935 */
                                          __auto_type match5934  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match5934 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let5938 */
                                            bool __h_case_result  = (true  &&  (((match5934 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5939 */
                                                  (nchild  =  (((match5934 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn5944 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let5952 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5954 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5958 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5967 */
                                                        Rc_BTree_int_User __ciciliC_5966 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_5966 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let5974 */
                                                __auto_type left  = match5934 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn5976 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let5980 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5982 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let5993 */
                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5995 */
                                    __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                    // ----------
                                    ((void)(r1 -> __h_table -> freeClass ));
                                    r1 ;
                                  });
                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5999 */
                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6005 */
                                      Rc_BTree_int_User __ciciliC_6004 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_6004 ;
                                    }), r1 );
                                    // ----------
                                    ((void)(r2 -> __h_table -> freeClass ));
                                    r2 ;
                                  });
                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6012 */
                                    __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                    // ----------
                                    ((void)(r3 -> __h_table -> freeClass ));
                                    r3 ;
                                  });
                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6016 */
                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6022 */
                                      Rc_BTree_int_User __ciciliC_6021 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_6021 ;
                                    }), r3 );
                                    // ----------
                                    ((void)(r4 -> __h_table -> freeClass ));
                                    r4 ;
                                  });
                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6029 */
                                    __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , right_child_items ))), r4 );
                                    // ----------
                                    ((void)(r5 -> __h_table -> freeClass ));
                                    r5 ;
                                  });
                                  // ----------
                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                }))));
                            }) : ({ /* cicili#Let6040 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6042 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6049 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6051 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6058 */
              // ----------
              ;
              ({ /* cicili#Progn6060 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let6067 */
      __auto_type result  = ({ /* cicili#Let6070 */
        __auto_type match6069  = nth_List_Rc_BTree_int_User (index , children );
        typeof((((match6069 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let6073 */
          bool __h_case_result  = (true  &&  (((match6069 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6074 */
                (left_child_rc  =  (((match6069 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6079 */
              ({ /* cicili#Let6083 */
                __auto_type match6082  = get_Rc_BTree_int_User (left_child_rc );
                typeof((((match6082 . __h_data ). Just ). __h_0_mem )) left_child ;
                // ----------
                ;
                ({ /* cicili#Let6086 */
                  bool __h_case_result  = (true  &&  (((match6082 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6087 */
                        (left_child  =  (((match6082 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6092 */
                      ({ /* cicili#Let6096 */
                        typeof((((left_child -> __h_data ). Branch ). __h_0_mem )) left_child_items ;
                        typeof((((left_child -> __h_data ). Branch ). __h_1_mem )) left_child_children ;
                        // ----------
                        ;
                        ({ /* cicili#Let6098 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6099 */
                                  (left_child_items  =  (((left_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6101 */
                                  (left_child_children  =  (((left_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6106 */
                              (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6115 */
                                  __auto_type match6113  = max_BTree_int_User (left_child );
                                  typeof((((match6113 . __h_data ). Just ). __h_0_mem )) max ;
                                  typeof((max . __h_0_mem )) max_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6118 */
                                    bool __h_case_result  = (true  &&  (((match6113 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6119 */
                                            (max  =  (((match6113 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn6121 */
                                              (max_key  =  (max . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6126 */
                                        ({ /* cicili#Let6130 */
                                          __auto_type match6129  = delete_BTree_int_User (left_child , max_key , NULL );
                                          typeof((((match6129 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let6133 */
                                            bool __h_case_result  = (true  &&  (((match6129 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6134 */
                                                  (nchild  =  (((match6129 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn6139 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6147 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6149 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6153 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6162 */
                                                        Rc_BTree_int_User __ciciliC_6161 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_6161 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let6169 */
                                                __auto_type left  = match6129 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn6171 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let6175 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn6177 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* cicili#Let6184 */
                              typeof((((left_child -> __h_data ). Internal ). __h_0_mem )) left_child_items ;
                              typeof((((left_child -> __h_data ). Internal ). __h_1_mem )) left_child_children ;
                              // ----------
                              ;
                              ({ /* cicili#Let6186 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6187 */
                                        (left_child_items  =  (((left_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn6189 */
                                        (left_child_children  =  (((left_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6194 */
                                    (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6203 */
                                        __auto_type match6201  = max_BTree_int_User (left_child );
                                        typeof((((match6201 . __h_data ). Just ). __h_0_mem )) max ;
                                        typeof((max . __h_0_mem )) max_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6206 */
                                          bool __h_case_result  = (true  &&  (((match6201 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6207 */
                                                  (max  =  (((match6201 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn6209 */
                                                    (max_key  =  (max . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6214 */
                                              ({ /* cicili#Let6218 */
                                                __auto_type match6217  = delete_BTree_int_User (left_child , max_key , NULL );
                                                typeof((((match6217 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let6221 */
                                                  bool __h_case_result  = (true  &&  (((match6217 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6222 */
                                                        (nchild  =  (((match6217 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6227 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6235 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6237 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6241 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6250 */
                                                              Rc_BTree_int_User __ciciliC_6249 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_6249 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let6257 */
                                                      __auto_type left  = match6217 ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn6259 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6263 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn6265 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* cicili#Let6272 */
                                    typeof((((left_child -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let6274 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6275 */
                                            (left_child_items  =  (((left_child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn6280 */
                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6289 */
                                              __auto_type match6287  = max_BTree_int_User (left_child );
                                              typeof((((match6287 . __h_data ). Just ). __h_0_mem )) max ;
                                              typeof((max . __h_0_mem )) max_key ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6292 */
                                                bool __h_case_result  = (true  &&  (((match6287 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6293 */
                                                        (max  =  (((match6287 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  (true  &&  ({ /* cicili#Progn6295 */
                                                          (max_key  =  (max . __h_0_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6300 */
                                                    ({ /* cicili#Let6304 */
                                                      __auto_type match6303  = delete_BTree_int_User (left_child , max_key , NULL );
                                                      typeof((((match6303 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let6307 */
                                                        bool __h_case_result  = (true  &&  (((match6303 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6308 */
                                                              (nchild  =  (((match6303 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn6313 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6321 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6323 */
                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6327 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6336 */
                                                                    Rc_BTree_int_User __ciciliC_6335 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_6335 ;
                                                                  }), r2 );
                                                              })));
                                                          }) : ({ /* cicili#Let6343 */
                                                            __auto_type left  = match6303 ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn6345 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let6349 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6351 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* cicili#Let6358 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn6360 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6367 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6369 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6376 */
              // ----------
              ;
              ({ /* cicili#Progn6378 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 16"));
              });
            }));
        });
      });
      // ----------
      result ;
    });
}
Either_BTree_int_User_Error_BTree_int_User deleteWithParent_BTree_int_User (Maybe_BTree_int_User wparent , size_t pitem_index , size_t pchild_index , BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item )) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let6396 */
    char * __h_stack_buffer  = calloc (2048, sizeof(char));
    CFile __h_stack_out  = fmemopen (__h_stack_buffer , 2048, "w+");
    // ----------
    fprintf (__h_stack_out , "*** deleteWithParent: ");
    fprintf (__h_stack_out , "%d", skey );
    fclose (__h_stack_out );
    __h_stack_push_data (__h_stack_buffer );
    __h_stack_push_separator ();
  }
  Either_BTree_int_User_Error_BTree_int_User deleteInternal (Maybe_BTree_int_User tree , List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , Maybe_List_BTree_int_User_pair_t wleft , List_BTree_int_User_pair_t current , size_t index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    { /* cicili#Let6406 */
      char * __h_stack_buffer  = calloc (2048, sizeof(char));
      CFile __h_stack_out  = fmemopen (__h_stack_buffer , 2048, "w+");
      // ----------
      show_List_BTree_int_User_pair_t (__h_stack_out , current );
      fclose (__h_stack_out );
      __h_stack_push_data (__h_stack_buffer );
      __h_stack_push_separator ();
    }
    return ({ /* cicili#Let6412 */
        __auto_type result  = ({ /* cicili#Let6416 */
          typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
          typeof((head . __h_0_mem )) key ;
          typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
          // ----------
          ;
          ({ /* cicili#Let6418 */
            bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6419 */
                      (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) &&  (true  &&  ({ /* cicili#Progn6421 */
                        (key  =  (head . __h_0_mem ) );
                        true ;
                      }) ) ) &&  ({ /* cicili#Progn6423 */
                    (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn6428 */
                ({ /* cicili#Let6432 */
                  __auto_type match6431  = compareKey (skey , key );
                  // ----------
                  ;
                  ({ /* cicili#Let6434 */
                    bool __h_case_result  = (true  &&  ((match6431 . __h_ctor ) ==  __h_LT_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6438 */
                        ({ /* cicili#Let6442 */
                          __auto_type match6441  = nth_List_Rc_BTree_int_User (index , children );
                          typeof((((match6441 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          ;
                          ({ /* cicili#Let6445 */
                            bool __h_case_result  = (true  &&  (((match6441 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6446 */
                                  (child  =  (((match6441 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6451 */
                                ({ /* cicili#Let6455 */
                                  __auto_type match6454  = get_Rc_BTree_int_User (child );
                                  typeof((((match6454 . __h_data ). Just ). __h_0_mem )) tr ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6458 */
                                    bool __h_case_result  = (true  &&  (((match6454 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6459 */
                                          (tr  =  (((match6454 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6464 */
                                        ({ /* cicili#Let6468 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Let6470 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn6474 */
                                                ({ /* cicili#Let6478 */
                                                  __auto_type match6477  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                  typeof((((match6477 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let6481 */
                                                    bool __h_case_result  = (true  &&  (((match6477 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6482 */
                                                          (nchild  =  (((match6477 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn6487 */
                                                        ({ /* cicili#Let6491 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let6493 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6494 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn6496 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn6501 */
                                                                ({ /* cicili#Let6505 */
                                                                  __auto_type match6504  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match6504 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let6508 */
                                                                    bool __h_case_result  = (true  &&  (((match6504 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6509 */
                                                                          (wleft  =  (((match6504 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6514 */
                                                                        ({ /* cicili#Let6517 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let6521 */
                                                                            __auto_type match6520  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match6520 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let6524 */
                                                                              bool __h_case_result  = (true  &&  (((match6520 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6525 */
                                                                                    (unboxed  =  (((match6520 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn6530 */
                                                                                  ({ /* cicili#Let6534 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Let6536 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6537 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn6539 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn6544 */
                                                                                          ({ /* cicili#Let6547 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6549 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let6557 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Let6559 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6560 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn6562 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn6567 */
                                                                                                ({ /* cicili#Let6570 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6572 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let6580 */
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Progn6582 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let6589 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn6591 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let6598 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn6600 */
                                                                          ({ /* cicili#Let6604 */
                                                                            __auto_type match6603  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match6603 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let6607 */
                                                                              bool __h_case_result  = (true  &&  (((match6603 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6608 */
                                                                                    (wright  =  (((match6603 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn6613 */
                                                                                  ({ /* cicili#Let6616 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let6620 */
                                                                                      __auto_type match6619  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match6619 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let6623 */
                                                                                        bool __h_case_result  = (true  &&  (((match6619 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6624 */
                                                                                              (unboxed  =  (((match6619 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn6629 */
                                                                                            ({ /* cicili#Let6633 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let6635 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6636 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn6638 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn6643 */
                                                                                                    ({ /* cicili#Let6646 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6648 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let6656 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let6658 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6659 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn6661 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn6666 */
                                                                                                          ({ /* cicili#Let6669 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6671 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let6679 */
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Progn6681 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let6688 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn6690 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let6697 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn6699 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let6706 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn6708 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let6716 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6718 */
                                                                        __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6722 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6731 */
                                                                          Rc_BTree_int_User __ciciliC_6730 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                          }
                                                                          __ciciliC_6730 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let6738 */
                                                        __auto_type left  = match6477 ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn6740 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let6744 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let6746 */
                                                  bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6750 */
                                                      ({ /* cicili#Let6754 */
                                                        __auto_type match6753  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                        typeof((((match6753 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Let6757 */
                                                          bool __h_case_result  = (true  &&  (((match6753 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6758 */
                                                                (nchild  =  (((match6753 . __h_data ). Right ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* cicili#Progn6763 */
                                                              ({ /* cicili#Let6767 */
                                                                typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let6769 */
                                                                  bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6770 */
                                                                          (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                          true ;
                                                                        }) &&  ({ /* cicili#Progn6772 */
                                                                          (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn6777 */
                                                                      ({ /* cicili#Let6781 */
                                                                        __auto_type match6780  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                        typeof((((match6780 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Let6784 */
                                                                          bool __h_case_result  = (true  &&  (((match6780 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6785 */
                                                                                (wleft  =  (((match6780 . __h_data ). Just ). __h_0_mem ) );
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn6790 */
                                                                              ({ /* cicili#Let6793 */
                                                                                __auto_type __h_matchbox  = wleft ;
                                                                                // ----------
                                                                                ({ /* cicili#Let6797 */
                                                                                  __auto_type match6796  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                  typeof((((match6796 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Let6800 */
                                                                                    bool __h_case_result  = (true  &&  (((match6796 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6801 */
                                                                                          (unboxed  =  (((match6796 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6806 */
                                                                                        ({ /* cicili#Let6810 */
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Let6812 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6813 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn6815 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn6820 */
                                                                                                ({ /* cicili#Let6823 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6825 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let6833 */
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Let6835 */
                                                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6836 */
                                                                                                          (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                          true ;
                                                                                                        }) &&  ({ /* cicili#Progn6838 */
                                                                                                          (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                          true ;
                                                                                                        }) ) ) );
                                                                                                  // ----------
                                                                                                  
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn6843 */
                                                                                                      ({ /* cicili#Let6846 */
                                                                                                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6848 */
                                                                                                          __auto_type nchild  = nchild ;
                                                                                                          // ----------
                                                                                                          ((void)(nchild -> __h_table -> freeClass ));
                                                                                                          nchild ;
                                                                                                        });
                                                                                                        // ----------
                                                                                                        Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let6856 */
                                                                                                      // ----------
                                                                                                      ;
                                                                                                      ({ /* cicili#Progn6858 */
                                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let6865 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Progn6867 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }) : ({ /* cicili#Let6874 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Progn6876 */
                                                                                ({ /* cicili#Let6880 */
                                                                                  __auto_type match6879  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                  typeof((((match6879 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Let6883 */
                                                                                    bool __h_case_result  = (true  &&  (((match6879 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6884 */
                                                                                          (wright  =  (((match6879 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6889 */
                                                                                        ({ /* cicili#Let6892 */
                                                                                          __auto_type __h_matchbox  = wright ;
                                                                                          // ----------
                                                                                          ({ /* cicili#Let6896 */
                                                                                            __auto_type match6895  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                            typeof((((match6895 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Let6899 */
                                                                                              bool __h_case_result  = (true  &&  (((match6895 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6900 */
                                                                                                    (unboxed  =  (((match6895 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn6905 */
                                                                                                  ({ /* cicili#Let6909 */
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let6911 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6912 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn6914 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn6919 */
                                                                                                          ({ /* cicili#Let6922 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6924 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let6932 */
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Let6934 */
                                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6935 */
                                                                                                                    (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                    true ;
                                                                                                                  }) &&  ({ /* cicili#Progn6937 */
                                                                                                                    (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                    true ;
                                                                                                                  }) ) ) );
                                                                                                            // ----------
                                                                                                            
                                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn6942 */
                                                                                                                ({ /* cicili#Let6945 */
                                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6947 */
                                                                                                                    __auto_type nchild  = nchild ;
                                                                                                                    // ----------
                                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                    nchild ;
                                                                                                                  });
                                                                                                                  // ----------
                                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                });
                                                                                                              }) : ({ /* cicili#Let6955 */
                                                                                                                // ----------
                                                                                                                ;
                                                                                                                ({ /* cicili#Progn6957 */
                                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                });
                                                                                                              }));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let6964 */
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* cicili#Progn6966 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let6973 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Progn6975 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* cicili#Let6982 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn6984 */
                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let6992 */
                                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6994 */
                                                                              __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                              // ----------
                                                                              ((void)((r1 . __h_table )-> freeData ));
                                                                              r1 ;
                                                                            });
                                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6998 */
                                                                              __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                              // ----------
                                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                                              r2 ;
                                                                            });
                                                                            // ----------
                                                                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7007 */
                                                                                Rc_BTree_int_User __ciciliC_7006 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                                }
                                                                                __ciciliC_7006 ;
                                                                              }), r2 );
                                                                          })));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }) : ({ /* cicili#Let7014 */
                                                              __auto_type left  = match6753 ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Progn7016 */
                                                                left ;
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let7020 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn7022 */
                                                        ({ /* cicili#Let7026 */
                                                          __auto_type match7025  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                          typeof((((match7025 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let7029 */
                                                            bool __h_case_result  = (true  &&  (((match7025 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7030 */
                                                                  (nchild  =  (((match7025 . __h_data ). Right ). __h_0_mem ) );
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn7035 */
                                                                borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                              }) : ({ /* cicili#Let7040 */
                                                                __auto_type left  = match7025 ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn7042 */
                                                                  left ;
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let7046 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn7048 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7055 */
                                // ----------
                                ;
                                ({ /* cicili#Progn7057 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let7064 */
                        // ----------
                        ;
                        ({ /* cicili#Let7066 */
                          bool __h_case_result  = (true  &&  ((match6431 . __h_ctor ) ==  __h_EQ_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7070 */
                              ({ /* cicili#Let7073 */
                                __auto_type result  = borrowInternal_BTree_int_User (tree , items , children , current , index , callback );
                                // ----------
                                { /* cicili#Let7078 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let7080 */
                                    bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block7085 */
                                        if (callback )
                                          { /* cicili#Block7089 */
                                            callback (head );
                                          }
                                      }
                                  });
                                }
                                result ;
                              });
                            }) : ({ /* cicili#Let7093 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7095 */
                                deleteInternal (tree , items , children , Just_List_BTree_int_User_pair_t (current ), tail , (index  +  1 ));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let7100 */
                // ----------
                ;
                ({ /* cicili#Progn7102 */
                  ({ /* cicili#Let7106 */
                    __auto_type match7105  = nth_List_Rc_BTree_int_User (index , children );
                    typeof((((match7105 . __h_data ). Just ). __h_0_mem )) child ;
                    // ----------
                    ;
                    ({ /* cicili#Let7109 */
                      bool __h_case_result  = (true  &&  (((match7105 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7110 */
                            (child  =  (((match7105 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn7115 */
                          ({ /* cicili#Let7119 */
                            __auto_type match7118  = get_Rc_BTree_int_User (child );
                            typeof((((match7118 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            ;
                            ({ /* cicili#Let7122 */
                              bool __h_case_result  = (true  &&  (((match7118 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7123 */
                                    (tr  =  (((match7118 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn7128 */
                                  ({ /* cicili#Let7132 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let7134 */
                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn7138 */
                                          ({ /* cicili#Let7142 */
                                            __auto_type match7141  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                            typeof((((match7141 . __h_data ). Right ). __h_0_mem )) nchild ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let7145 */
                                              bool __h_case_result  = (true  &&  (((match7141 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7146 */
                                                    (nchild  =  (((match7141 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn7151 */
                                                  ({ /* cicili#Let7155 */
                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let7157 */
                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7158 */
                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn7160 */
                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn7165 */
                                                          ({ /* cicili#Let7169 */
                                                            __auto_type match7168  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                            typeof((((match7168 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let7172 */
                                                              bool __h_case_result  = (true  &&  (((match7168 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7173 */
                                                                    (wleft  =  (((match7168 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn7178 */
                                                                  ({ /* cicili#Let7181 */
                                                                    __auto_type __h_matchbox  = wleft ;
                                                                    // ----------
                                                                    ({ /* cicili#Let7185 */
                                                                      __auto_type match7184  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match7184 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let7188 */
                                                                        bool __h_case_result  = (true  &&  (((match7184 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7189 */
                                                                              (unboxed  =  (((match7184 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7194 */
                                                                            ({ /* cicili#Let7198 */
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Let7200 */
                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7201 */
                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) &&  ({ /* cicili#Progn7203 */
                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                        true ;
                                                                                      }) ) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7208 */
                                                                                    ({ /* cicili#Let7211 */
                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7213 */
                                                                                        __auto_type nchild  = nchild ;
                                                                                        // ----------
                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                        nchild ;
                                                                                      });
                                                                                      // ----------
                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                    });
                                                                                  }) : ({ /* cicili#Let7221 */
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Let7223 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7224 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn7226 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7231 */
                                                                                          ({ /* cicili#Let7234 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7236 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let7244 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Progn7246 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let7253 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn7255 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let7262 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn7264 */
                                                                    ({ /* cicili#Let7268 */
                                                                      __auto_type match7267  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      typeof((((match7267 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let7271 */
                                                                        bool __h_case_result  = (true  &&  (((match7267 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7272 */
                                                                              (wright  =  (((match7267 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7277 */
                                                                            ({ /* cicili#Let7280 */
                                                                              __auto_type __h_matchbox  = wright ;
                                                                              // ----------
                                                                              ({ /* cicili#Let7284 */
                                                                                __auto_type match7283  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match7283 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let7287 */
                                                                                  bool __h_case_result  = (true  &&  (((match7283 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7288 */
                                                                                        (unboxed  =  (((match7283 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7293 */
                                                                                      ({ /* cicili#Let7297 */
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Let7299 */
                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7300 */
                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) &&  ({ /* cicili#Progn7302 */
                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn7307 */
                                                                                              ({ /* cicili#Let7310 */
                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7312 */
                                                                                                  __auto_type nchild  = nchild ;
                                                                                                  // ----------
                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                  nchild ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let7320 */
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let7322 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7323 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn7325 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7330 */
                                                                                                    ({ /* cicili#Let7333 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7335 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let7343 */
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Progn7345 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let7352 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn7354 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let7361 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn7363 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let7370 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn7372 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7380 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7382 */
                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7386 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7395 */
                                                                    Rc_BTree_int_User __ciciliC_7394 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_7394 ;
                                                                  }), r2 );
                                                              })));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let7402 */
                                                  __auto_type left  = match7141 ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn7404 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let7408 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Let7410 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn7414 */
                                                ({ /* cicili#Let7418 */
                                                  __auto_type match7417  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                  typeof((((match7417 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let7421 */
                                                    bool __h_case_result  = (true  &&  (((match7417 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7422 */
                                                          (nchild  =  (((match7417 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn7427 */
                                                        ({ /* cicili#Let7431 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let7433 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7434 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn7436 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn7441 */
                                                                ({ /* cicili#Let7445 */
                                                                  __auto_type match7444  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match7444 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let7448 */
                                                                    bool __h_case_result  = (true  &&  (((match7444 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7449 */
                                                                          (wleft  =  (((match7444 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn7454 */
                                                                        ({ /* cicili#Let7457 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let7461 */
                                                                            __auto_type match7460  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match7460 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let7464 */
                                                                              bool __h_case_result  = (true  &&  (((match7460 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7465 */
                                                                                    (unboxed  =  (((match7460 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7470 */
                                                                                  ({ /* cicili#Let7474 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Let7476 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7477 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn7479 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7484 */
                                                                                          ({ /* cicili#Let7487 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7489 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let7497 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Let7499 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7500 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn7502 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7507 */
                                                                                                ({ /* cicili#Let7510 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7512 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let7520 */
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Progn7522 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let7529 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn7531 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let7538 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn7540 */
                                                                          ({ /* cicili#Let7544 */
                                                                            __auto_type match7543  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match7543 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let7547 */
                                                                              bool __h_case_result  = (true  &&  (((match7543 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7548 */
                                                                                    (wright  =  (((match7543 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7553 */
                                                                                  ({ /* cicili#Let7556 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let7560 */
                                                                                      __auto_type match7559  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match7559 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let7563 */
                                                                                        bool __h_case_result  = (true  &&  (((match7559 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7564 */
                                                                                              (unboxed  =  (((match7559 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7569 */
                                                                                            ({ /* cicili#Let7573 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let7575 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7576 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn7578 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7583 */
                                                                                                    ({ /* cicili#Let7586 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7588 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let7596 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let7598 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7599 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn7601 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7606 */
                                                                                                          ({ /* cicili#Let7609 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7611 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let7619 */
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Progn7621 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let7628 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn7630 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let7637 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn7639 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let7646 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn7648 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7656 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7658 */
                                                                        __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7662 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7671 */
                                                                          Rc_BTree_int_User __ciciliC_7670 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                          }
                                                                          __ciciliC_7670 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let7678 */
                                                        __auto_type left  = match7417 ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn7680 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let7684 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn7686 */
                                                  ({ /* cicili#Let7690 */
                                                    __auto_type match7689  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                    typeof((((match7689 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let7693 */
                                                      bool __h_case_result  = (true  &&  (((match7689 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7694 */
                                                            (nchild  =  (((match7689 . __h_data ). Right ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn7699 */
                                                          borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                        }) : ({ /* cicili#Let7704 */
                                                          __auto_type left  = match7689 ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn7706 */
                                                            left ;
                                                          });
                                                        }));
                                                    });
                                                  });
                                                });
                                              }));
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let7710 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn7712 */
                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let7719 */
                          // ----------
                          ;
                          ({ /* cicili#Progn7721 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                          });
                        }));
                    });
                  });
                });
              }));
          });
        });
        // ----------
        ({ /* cicili#Let7730 */
          __auto_type rs  = ({ /* cicili#Let7733 */
            typeof((((result . __h_data ). Right ). __h_0_mem )) ntr ;
            // ----------
            ;
            ({ /* cicili#Let7735 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7736 */
                    (ntr  =  (((result . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn7741 */
                  ({ /* cicili#Let7745 */
                    typeof((((ntr -> __h_data ). Branch ). __h_0_mem )) items ;
                    typeof((((ntr -> __h_data ). Branch ). __h_1_mem )) children ;
                    // ----------
                    ;
                    ({ /* cicili#Let7747 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7748 */
                              (items  =  (((ntr -> __h_data ). Branch ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn7750 */
                              (children  =  (((ntr -> __h_data ). Branch ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn7755 */
                          ({ /* cicili#Let7758 */
                            __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let7766 */
                                typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                // ----------
                                ;
                                ({ /* cicili#Let7768 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7769 */
                                        (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn7774 */
                                      ({ /* cicili#Let7778 */
                                        typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let7780 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn7781 */
                                                (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn7786 */
                                              ({ /* cicili#Let7790 */
                                                __auto_type match7789  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                typeof((((match7789 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let7793 */
                                                  bool __h_case_result  = (true  &&  (((match7789 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7794 */
                                                        (bitem  =  (((match7789 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn7799 */
                                                      ({ /* cicili#Let7802 */
                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7804 */
                                                          __auto_type ntr  = ntr ;
                                                          // ----------
                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                          ntr ;
                                                        });
                                                        // ----------
                                                        Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7817 */
                                                            Rc_BTree_int_User __ciciliC_7816 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_7816 ;
                                                          }), children )));
                                                      });
                                                    }) : ({ /* cicili#Let7824 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn7826 */
                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let7833 */
                                              typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let7835 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn7836 */
                                                      (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn7841 */
                                                    ({ /* cicili#Let7845 */
                                                      __auto_type match7844  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match7844 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let7848 */
                                                        bool __h_case_result  = (true  &&  (((match7844 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7849 */
                                                              (bitem  =  (((match7844 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn7854 */
                                                            ({ /* cicili#Let7857 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7859 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7872 */
                                                                  Rc_BTree_int_User __ciciliC_7871 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_7871 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let7879 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn7881 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let7888 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn7890 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let7897 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn7899 */
                                        (((items_len  ==  0 )) ? ({ /* cicili#Let7904 */
                                            typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let7906 */
                                              bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7907 */
                                                    (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn7912 */
                                                  ({ /* cicili#Let7915 */
                                                    __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                    // ----------
                                                    ({ /* cicili#Let7920 */
                                                      __auto_type match7919  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match7919 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let7923 */
                                                        bool __h_case_result  = (true  &&  (((match7919 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7924 */
                                                              (unboxed  =  (((match7919 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn7929 */
                                                            ({ /* cicili#Let7933 */
                                                              __auto_type chtr  = unboxed ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Progn7935 */
                                                                ({ /* cicili#Let7938 */
                                                                  __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7940 */
                                                                    __auto_type ntr  = ntr ;
                                                                    // ----------
                                                                    ((void)(ntr -> __h_table -> freeClass ));
                                                                    ntr ;
                                                                  });
                                                                  // ----------
                                                                  Right_BTree_int_User_Error_BTree_int_User (chtr );
                                                                });
                                                              });
                                                            });
                                                          }) : ({ /* cicili#Let7947 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn7949 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let7956 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn7958 */
                                                    result ;
                                                  });
                                                }));
                                            });
                                          }) : result );
                                      });
                                    }));
                                });
                              }));
                          });
                        }) : ({ /* cicili#Let7962 */
                          typeof((((ntr -> __h_data ). Internal ). __h_0_mem )) items ;
                          typeof((((ntr -> __h_data ). Internal ). __h_1_mem )) children ;
                          // ----------
                          ;
                          ({ /* cicili#Let7964 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7965 */
                                    (items  =  (((ntr -> __h_data ). Internal ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn7967 */
                                    (children  =  (((ntr -> __h_data ). Internal ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn7972 */
                                ({ /* cicili#Let7975 */
                                  __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let7983 */
                                      typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let7985 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7986 */
                                              (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn7991 */
                                            ({ /* cicili#Let7995 */
                                              typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let7997 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn7998 */
                                                      (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn8003 */
                                                    ({ /* cicili#Let8007 */
                                                      __auto_type match8006  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match8006 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let8010 */
                                                        bool __h_case_result  = (true  &&  (((match8006 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8011 */
                                                              (bitem  =  (((match8006 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8016 */
                                                            ({ /* cicili#Let8019 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8021 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8034 */
                                                                  Rc_BTree_int_User __ciciliC_8033 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_8033 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let8041 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn8043 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8050 */
                                                    typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let8052 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn8053 */
                                                            (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8058 */
                                                          ({ /* cicili#Let8062 */
                                                            __auto_type match8061  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                            typeof((((match8061 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let8065 */
                                                              bool __h_case_result  = (true  &&  (((match8061 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8066 */
                                                                    (bitem  =  (((match8061 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8071 */
                                                                  ({ /* cicili#Let8074 */
                                                                    __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8076 */
                                                                      __auto_type ntr  = ntr ;
                                                                      // ----------
                                                                      ((void)(ntr -> __h_table -> freeClass ));
                                                                      ntr ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8089 */
                                                                        Rc_BTree_int_User __ciciliC_8088 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_8088 ;
                                                                      }), children )));
                                                                  });
                                                                }) : ({ /* cicili#Let8096 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn8098 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let8105 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn8107 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let8114 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn8116 */
                                              (((items_len  ==  0 )) ? ({ /* cicili#Let8121 */
                                                  typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let8123 */
                                                    bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8124 */
                                                          (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn8129 */
                                                        ({ /* cicili#Let8132 */
                                                          __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                          // ----------
                                                          ({ /* cicili#Let8137 */
                                                            __auto_type match8136  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                            typeof((((match8136 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let8140 */
                                                              bool __h_case_result  = (true  &&  (((match8136 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8141 */
                                                                    (unboxed  =  (((match8136 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8146 */
                                                                  ({ /* cicili#Let8150 */
                                                                    __auto_type chtr  = unboxed ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn8152 */
                                                                      ({ /* cicili#Let8155 */
                                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8157 */
                                                                          __auto_type ntr  = ntr ;
                                                                          // ----------
                                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                                          ntr ;
                                                                        });
                                                                        // ----------
                                                                        Right_BTree_int_User_Error_BTree_int_User (chtr );
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let8164 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn8166 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let8173 */
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn8175 */
                                                          result ;
                                                        });
                                                      }));
                                                  });
                                                }) : result );
                                            });
                                          }));
                                      });
                                    }));
                                });
                              }) : ({ /* cicili#Let8179 */
                                // ----------
                                ;
                                ({ /* cicili#Progn8181 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let8185 */
                  // ----------
                  ;
                  ({ /* cicili#Progn8187 */
                    result ;
                  });
                }));
            });
          });
          // ----------
          rs ;
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User deleteLeaf (List_BTree_int_User_pair_t items , List_BTree_int_User_pair_t current , size_t index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let8204 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8206 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8207 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn8209 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn8211 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8216 */
              ({ /* cicili#Let8220 */
                __auto_type match8219  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let8222 */
                  bool __h_case_result  = (true  &&  ((match8219 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8226 */
                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                    }) : ({ /* cicili#Let8233 */
                      // ----------
                      ;
                      ({ /* cicili#Let8235 */
                        bool __h_case_result  = (true  &&  ((match8219 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn8239 */
                            ({ /* cicili#Let8242 */
                              __auto_type result  = Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current )));
                              // ----------
                              { /* cicili#Let8251 */
                                // ----------
                                ;
                                ({ /* cicili#Let8253 */
                                  bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* cicili#Block8258 */
                                      if (callback )
                                        { /* cicili#Block8262 */
                                          callback (head );
                                        }
                                    }
                                });
                              }
                              result ;
                            });
                          }) : ({ /* cicili#Let8266 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8268 */
                              deleteLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8272 */
              // ----------
              ;
              ({ /* cicili#Progn8274 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8282 */
      __auto_type result  = ({ /* cicili#Let8285 */
        typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
        typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
        // ----------
        ;
        ({ /* cicili#Let8287 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8288 */
                  (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8290 */
                  (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8295 */
              deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
            }) : ({ /* cicili#Let8301 */
              typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
              typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
              // ----------
              ;
              ({ /* cicili#Let8303 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8304 */
                        (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn8306 */
                        (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn8311 */
                    deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
                  }) : ({ /* cicili#Let8317 */
                    typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                    // ----------
                    ;
                    ({ /* cicili#Let8319 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8320 */
                            (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn8325 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* cicili#Let8329 */
                          // ----------
                          ;
                          ({ /* cicili#Progn8331 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_OBJECT ());
                          });
                        }));
                    });
                  }));
              });
            }));
        });
      });
      // ----------
      result ;
    });
}
#ifndef __BTree_int_User__H_IMPL__
#define __BTree_int_User__H_IMPL__
Either_BTree_int_User_Error_BTree_int_User fromLists_BTree_int_User (List_int keys , List_User values ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let8354 */
      typeof((((keys -> __h_data ). Cons ). __h_0_mem )) khead ;
      typeof((((keys -> __h_data ). Cons ). __h_1_mem )) ktail ;
      // ----------
      ;
      ({ /* cicili#Let8356 */
        bool __h_case_result  = (true  &&  (((keys -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8357 */
                (khead  =  (((keys -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8359 */
                (ktail  =  (((keys -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8364 */
            ({ /* cicili#Let8368 */
              typeof((((values -> __h_data ). Cons ). __h_0_mem )) vhead ;
              typeof((((values -> __h_data ). Cons ). __h_1_mem )) vtail ;
              // ----------
              ;
              ({ /* cicili#Let8370 */
                bool __h_case_result  = (true  &&  (((values -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8371 */
                        (vhead  =  (((values -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn8373 */
                        (vtail  =  (((values -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn8378 */
                    ({ /* cicili#Let8381 */
                      __auto_type etree  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8383 */
                        __auto_type etree  = fromLists_BTree_int_User (ktail , vtail );
                        // ----------
                        ((void)((etree . __h_table )-> freeData ));
                        etree ;
                      });
                      // ----------
                      ({ /* cicili#Let8389 */
                        typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
                        // ----------
                        ;
                        ({ /* cicili#Let8391 */
                          bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8392 */
                                (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8397 */
                              ({ /* cicili#Let8400 */
                                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8402 */
                                  __auto_type tree  = tree ;
                                  // ----------
                                  ((void)(tree -> __h_table -> freeClass ));
                                  tree ;
                                });
                                // ----------
                                insert_BTree_int_User (tree , khead , vhead );
                              });
                            }) : ({ /* cicili#Let8408 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8410 */
                                etree ;
                              });
                            }));
                        });
                      });
                    });
                  }) : ({ /* cicili#Let8414 */
                    // ----------
                    ;
                    ({ /* cicili#Progn8416 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ()));
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let8424 */
            // ----------
            ;
            ({ /* cicili#Progn8426 */
              Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ()));
            });
          }));
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], size_t len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let8437 */
      BTree_int_User tree  = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
      // ----------
      for (size_t i  = 0; (i  <  len  ); (++i )) {
          { /* cicili#Let8445 */
            __auto_type match8444  = insert_BTree_int_User (tree , keys [i ], values [i ]);
            typeof((((match8444 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            ;
            ({ /* cicili#Let8448 */
              bool __h_case_result  = (true  &&  (((match8444 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8449 */
                    (new_tree  =  (((match8444 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8455 */
                  { /* cicili#Block8457 */
                    free_BTree_int_User ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* cicili#Let8463 */
                  __auto_type left  = match8444 ;
                  // ----------
                  ;
                  { /* cicili#Block8465 */
                    return left ;
                  }
                }
            });
          }
      }
      Right_BTree_int_User_Error_BTree_int_User (tree );
    });
}
size_t show_BTree_int_User (CFile file , BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  auto size_t showTree (int indent , BTree_int_User tree );
  size_t showChildren (int indent , List_Rc_BTree_int_User children ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let8475 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8477 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8478 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8480 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8485 */
              (({ /* cicili#Let8489 */
                  // ----------
                  ;
                  ({ /* cicili#Let8491 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn8495 */
                        ({ /* cicili#Let8499 */
                          __auto_type match8498  = get_Rc_BTree_int_User (head );
                          typeof((((match8498 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          ;
                          ({ /* cicili#Let8502 */
                            bool __h_case_result  = (true  &&  (((match8498 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8503 */
                                  (tr  =  (((match8498 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn8508 */
                                (showTree (indent , tr ) +  fprintf (file , "\n") );
                              }) : ({ /* cicili#Let8512 */
                                // ----------
                                ;
                                ({ /* cicili#Progn8514 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let8518 */
                        // ----------
                        ;
                        ({ /* cicili#Progn8520 */
                          ({ /* cicili#Let8524 */
                            __auto_type match8523  = get_Rc_BTree_int_User (head );
                            typeof((((match8523 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            ;
                            ({ /* cicili#Let8527 */
                              bool __h_case_result  = (true  &&  (((match8523 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8528 */
                                    (tr  =  (((match8523 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn8533 */
                                  showTree (indent , tr );
                                }) : ({ /* cicili#Let8537 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn8539 */
                                    0;
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }) +  showChildren (indent , tail ) );
            }) : ({ /* cicili#Let8543 */
              // ----------
              ;
              ({ /* cicili#Progn8545 */
                0;
              });
            }));
        });
      });
  }
  size_t showTree (int indent , BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* cicili#Let8551 */
          typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
          // ----------
          ;
          ({ /* cicili#Let8553 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8554 */
                    (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn8556 */
                    (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn8561 */
                (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let8566 */
                    // ----------
                    ;
                    ({ /* cicili#Let8568 */
                      bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn8572 */
                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                        }) : ({ /* cicili#Let8576 */
                          // ----------
                          ;
                          ({ /* cicili#Progn8578 */
                            0;
                          });
                        }));
                    });
                  }) );
              }) : ({ /* cicili#Let8582 */
                typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
                typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
                // ----------
                ;
                ({ /* cicili#Let8584 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8585 */
                          (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn8587 */
                          (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8592 */
                      (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let8597 */
                          // ----------
                          ;
                          ({ /* cicili#Let8599 */
                            bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn8603 */
                                (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                              }) : ({ /* cicili#Let8607 */
                                // ----------
                                ;
                                ({ /* cicili#Progn8609 */
                                  0;
                                });
                              }));
                          });
                        }) );
                    }) : ({ /* cicili#Let8613 */
                      typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                      // ----------
                      ;
                      ({ /* cicili#Let8615 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8616 */
                              (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn8621 */
                            show_List_BTree_int_User_pair_t (file , items );
                          }) : ({ /* cicili#Let8626 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8628 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              }));
          });
        }) );
  }
  return (showTree (1, tree ) +  fprintf (file , "\n") );
}
void traverse_BTree_int_User (BTree_int_User tree , void (*callback) (BTree_int_User_pair_t item , Bool hasNext )) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  auto void traverseLeaf (List_BTree_int_User_pair_t current , Bool hasNextLeaf );
  void traverseInternal (List_BTree_int_User_pair_t currentItem , List_Rc_BTree_int_User currentChild ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    { /* cicili#Let8637 */
      typeof((((currentChild -> __h_data ). Cons ). __h_0_mem )) wheadC ;
      typeof((((currentChild -> __h_data ). Cons ). __h_1_mem )) tailC ;
      // ----------
      ;
      ({ /* cicili#Let8639 */
        bool __h_case_result  = (true  &&  (((currentChild -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8640 */
                (wheadC  =  (((currentChild -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8642 */
                (tailC  =  (((currentChild -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block8648 */
            { /* cicili#Let8652 */
              __auto_type match8651  = get_Rc_BTree_int_User (wheadC );
              typeof((((match8651 . __h_data ). Just ). __h_0_mem )) headC ;
              // ----------
              ;
              ({ /* cicili#Let8655 */
                bool __h_case_result  = (true  &&  (((match8651 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8656 */
                      (headC  =  (((match8651 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block8662 */
                    { /* cicili#Let8666 */
                      // ----------
                      ;
                      ({ /* cicili#Let8668 */
                        bool __h_case_result  = (true  &&  ((tailC -> __h_ctor ) ==  __h_Cons_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block8673 */
                            { /* cicili#Block8675 */
                              { /* cicili#Let8679 */
                                typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                // ----------
                                ;
                                ({ /* cicili#Let8681 */
                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8682 */
                                          (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn8684 */
                                          (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* cicili#Block8690 */
                                      traverseInternal (items , children );
                                    }
                                  else
                                    { /* cicili#Let8695 */
                                      typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                      typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let8697 */
                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8698 */
                                                (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn8700 */
                                                (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        
                                        if (__h_case_result )
                                          { /* cicili#Block8706 */
                                            traverseInternal (items , children );
                                          }
                                        else
                                          { /* cicili#Let8711 */
                                            typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let8713 */
                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8714 */
                                                    (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* cicili#Block8720 */
                                                  traverseLeaf (items , True ());
                                                }
                                            });
                                          }
                                      });
                                    }
                                });
                              }
                              { /* cicili#Let8724 */
                                typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                // ----------
                                ;
                                ({ /* cicili#Let8726 */
                                  bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8727 */
                                          (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn8729 */
                                          (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* cicili#Block8735 */
                                      { /* cicili#Block8737 */
                                        callback (headI , True ());
                                        traverseInternal (tailI , tailC );
                                      }
                                    }
                                });
                              }
                            }
                          }
                        else
                          { /* cicili#Let8742 */
                            // ----------
                            ;
                            { /* cicili#Block8744 */
                              { /* cicili#Block8746 */
                                { /* cicili#Let8750 */
                                  typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                  typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let8752 */
                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8753 */
                                            (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn8755 */
                                            (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block8761 */
                                        traverseInternal (items , children );
                                      }
                                    else
                                      { /* cicili#Let8766 */
                                        typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                        typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let8768 */
                                          bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8769 */
                                                  (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn8771 */
                                                  (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                  true ;
                                                }) ) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block8777 */
                                              traverseInternal (items , children );
                                            }
                                          else
                                            { /* cicili#Let8782 */
                                              typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let8784 */
                                                bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8785 */
                                                      (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                if (__h_case_result )
                                                  { /* cicili#Block8791 */
                                                    traverseLeaf (items , False ());
                                                  }
                                              });
                                            }
                                        });
                                      }
                                  });
                                }
                                { /* cicili#Let8795 */
                                  typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                  typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let8797 */
                                    bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8798 */
                                            (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn8800 */
                                            (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block8806 */
                                        { /* cicili#Block8808 */
                                          callback (headI , False ());
                                          traverseInternal (tailI , tailC );
                                        }
                                      }
                                  });
                                }
                              }
                            }
                          }
                      });
                    }
                  }
              });
            }
          }
      });
    }
  }
  void traverseLeaf (List_BTree_int_User_pair_t current , Bool hasNextLeaf ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    { /* cicili#Let8815 */
      typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8817 */
        bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8818 */
                (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8820 */
                (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block8826 */
            { /* cicili#Block8828 */
              callback (head , ({ /* cicili#Let8832 */
                  // ----------
                  ;
                  ({ /* cicili#Let8834 */
                    bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor ) ==  __h_True_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn8838 */
                        hasNextLeaf ;
                      }) : ({ /* cicili#Let8842 */
                        // ----------
                        ;
                        ({ /* cicili#Progn8844 */
                          ({ /* cicili#Let8848 */
                            // ----------
                            ;
                            ({ /* cicili#Let8850 */
                              bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn8854 */
                                  True ();
                                }) : ({ /* cicili#Let8858 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn8860 */
                                    False ();
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }));
              traverseLeaf (tail , hasNextLeaf );
            }
          }
      });
    }
  }
  { /* cicili#Let8865 */
    typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
    typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
    // ----------
    ;
    ({ /* cicili#Let8867 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8868 */
              (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn8870 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block8876 */
          traverseInternal (items , children );
        }
      else
        { /* cicili#Let8881 */
          typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
          // ----------
          ;
          ({ /* cicili#Let8883 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8884 */
                    (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn8886 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8892 */
                traverseInternal (items , children );
              }
            else
              { /* cicili#Let8897 */
                typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                // ----------
                ;
                ({ /* cicili#Let8899 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8900 */
                        (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8906 */
                      traverseLeaf (items , False ());
                    }
                });
              }
          });
        }
    });
  }
}
Maybe_BTree_int_User_pair_t max_BTree_int_User (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  auto Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current );
  Maybe_BTree_int_User_pair_t maxInternal (List_Rc_BTree_int_User current ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let8922 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8924 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8925 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8927 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8932 */
              ({ /* cicili#Let8936 */
                // ----------
                ;
                ({ /* cicili#Let8938 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8942 */
                      ({ /* cicili#Let8946 */
                        __auto_type match8945  = get_Rc_BTree_int_User (head );
                        typeof((((match8945 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        ;
                        ({ /* cicili#Let8949 */
                          bool __h_case_result  = (true  &&  (((match8945 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8950 */
                                (child  =  (((match8945 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8955 */
                              ({ /* cicili#Let8959 */
                                typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                // ----------
                                ;
                                ({ /* cicili#Let8961 */
                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn8962 */
                                        (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn8967 */
                                      maxInternal (nchildren );
                                    }) : ({ /* cicili#Let8971 */
                                      typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let8973 */
                                        bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn8974 */
                                              (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn8979 */
                                            maxInternal (nchildren );
                                          }) : ({ /* cicili#Let8983 */
                                            typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let8985 */
                                              bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8986 */
                                                    (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn8991 */
                                                  maxLeaf (items );
                                                }) : ({ /* cicili#Let8995 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn8997 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          }));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let9002 */
                              // ----------
                              ;
                              ({ /* cicili#Progn9004 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9009 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9011 */
                        maxInternal (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9015 */
              // ----------
              ;
              ({ /* cicili#Progn9017 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let9025 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9027 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9028 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9030 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9035 */
              ({ /* cicili#Let9039 */
                // ----------
                ;
                ({ /* cicili#Let9041 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9045 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* cicili#Let9050 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9052 */
                        maxLeaf (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9056 */
              // ----------
              ;
              ({ /* cicili#Progn9058 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9064 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let9066 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9067 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9072 */
            maxInternal (children );
          }) : ({ /* cicili#Let9076 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let9078 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9079 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn9084 */
                  maxInternal (children );
                }) : ({ /* cicili#Let9088 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let9090 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9091 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn9096 */
                        maxLeaf (items );
                      }) : ({ /* cicili#Let9100 */
                        // ----------
                        ;
                        ({ /* cicili#Progn9102 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
Maybe_BTree_int_User_pair_t min_BTree_int_User (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  auto Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first );
  Maybe_BTree_int_User_pair_t minInternal (List_Rc_BTree_int_User first ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let9117 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        ;
        ({ /* cicili#Let9119 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9120 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9125 */
              ({ /* cicili#Let9129 */
                __auto_type match9128  = get_Rc_BTree_int_User (head );
                typeof((((match9128 . __h_data ). Just ). __h_0_mem )) child ;
                // ----------
                ;
                ({ /* cicili#Let9132 */
                  bool __h_case_result  = (true  &&  (((match9128 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9133 */
                        (child  =  (((match9128 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9138 */
                      ({ /* cicili#Let9142 */
                        typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                        // ----------
                        ;
                        ({ /* cicili#Let9144 */
                          bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9145 */
                                (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9150 */
                              minInternal (nchildren );
                            }) : ({ /* cicili#Let9154 */
                              typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                              // ----------
                              ;
                              ({ /* cicili#Let9156 */
                                bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9157 */
                                      (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn9162 */
                                    minInternal (nchildren );
                                  }) : ({ /* cicili#Let9166 */
                                    typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let9168 */
                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9169 */
                                            (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn9174 */
                                          minLeaf (items );
                                        }) : ({ /* cicili#Let9178 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn9180 */
                                            Nothing_BTree_int_User_pair_t ();
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9185 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9187 */
                        Nothing_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9192 */
              // ----------
              ;
              ({ /* cicili#Progn9194 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let9202 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        ;
        ({ /* cicili#Let9204 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9205 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9210 */
              Just_BTree_int_User_pair_t (head );
            }) : ({ /* cicili#Let9215 */
              // ----------
              ;
              ({ /* cicili#Progn9217 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9223 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let9225 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9226 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9231 */
            minInternal (children );
          }) : ({ /* cicili#Let9235 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let9237 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9238 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn9243 */
                  minInternal (children );
                }) : ({ /* cicili#Let9247 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let9249 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9250 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn9255 */
                        minLeaf (items );
                      }) : ({ /* cicili#Let9259 */
                        // ----------
                        ;
                        ({ /* cicili#Progn9261 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User delete_BTree_int_User (BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item )) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return deleteWithParent_BTree_int_User (Nothing_BTree_int_User (), 0, 0, tree , skey , callback );
}
Maybe_BTree_int_User_pair_t search_BTree_int_User (BTree_int_User tree , int skey ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  Maybe_BTree_int_User_pair_t searchInternal (List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let9279 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9281 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9282 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn9284 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn9286 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9291 */
              ({ /* cicili#Let9295 */
                __auto_type match9294  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let9297 */
                  bool __h_case_result  = (true  &&  ((match9294 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9301 */
                      ({ /* cicili#Let9305 */
                        __auto_type match9304  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match9304 . __h_data ). Just ). __h_0_mem )) node ;
                        // ----------
                        ;
                        ({ /* cicili#Let9308 */
                          bool __h_case_result  = (true  &&  (((match9304 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9309 */
                                (node  =  (((match9304 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9314 */
                              ({ /* cicili#Let9318 */
                                __auto_type match9317  = get_Rc_BTree_int_User (node );
                                typeof((((match9317 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                ;
                                ({ /* cicili#Let9321 */
                                  bool __h_case_result  = (true  &&  (((match9317 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9322 */
                                        (tr  =  (((match9317 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn9327 */
                                      search_BTree_int_User (tr , skey );
                                    }) : ({ /* cicili#Let9332 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn9334 */
                                        Nothing_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let9339 */
                              // ----------
                              ;
                              ({ /* cicili#Progn9341 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9346 */
                      // ----------
                      ;
                      ({ /* cicili#Let9348 */
                        bool __h_case_result  = (true  &&  ((match9294 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn9352 */
                            Just_BTree_int_User_pair_t (head );
                          }) : ({ /* cicili#Let9357 */
                            // ----------
                            ;
                            ({ /* cicili#Progn9359 */
                              ({ /* cicili#Let9363 */
                                // ----------
                                ;
                                ({ /* cicili#Let9365 */
                                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn9369 */
                                      ({ /* cicili#Let9373 */
                                        __auto_type match9372  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                        typeof((((match9372 . __h_data ). Just ). __h_0_mem )) node ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let9376 */
                                          bool __h_case_result  = (true  &&  (((match9372 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9377 */
                                                (node  =  (((match9372 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn9382 */
                                              ({ /* cicili#Let9386 */
                                                __auto_type match9385  = get_Rc_BTree_int_User (node );
                                                typeof((((match9385 . __h_data ). Just ). __h_0_mem )) tr ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let9389 */
                                                  bool __h_case_result  = (true  &&  (((match9385 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9390 */
                                                        (tr  =  (((match9385 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn9395 */
                                                      search_BTree_int_User (tr , skey );
                                                    }) : ({ /* cicili#Let9400 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn9402 */
                                                        Nothing_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let9407 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn9409 */
                                                Nothing_BTree_int_User_pair_t ();
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let9414 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn9416 */
                                        searchInternal (children , tail , (index  +  1 ));
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9420 */
              // ----------
              ;
              ({ /* cicili#Progn9422 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t searchLeaf (List_BTree_int_User_pair_t current , size_t index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let9432 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9434 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9435 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn9437 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn9439 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9444 */
              ({ /* cicili#Let9448 */
                __auto_type match9447  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let9450 */
                  bool __h_case_result  = (true  &&  ((match9447 . __h_ctor ) ==  __h_EQ_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9454 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* cicili#Let9459 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9461 */
                        ({ /* cicili#Let9465 */
                          // ----------
                          ;
                          ({ /* cicili#Let9467 */
                            bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn9471 */
                                Nothing_BTree_int_User_pair_t ();
                              }) : ({ /* cicili#Let9476 */
                                // ----------
                                ;
                                ({ /* cicili#Progn9478 */
                                  searchLeaf (tail , (index  +  1 ));
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9482 */
              // ----------
              ;
              ({ /* cicili#Progn9484 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9490 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let9492 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9493 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9495 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9500 */
            searchInternal (children , items , 0);
          }) : ({ /* cicili#Let9504 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let9506 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9507 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn9509 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn9514 */
                  searchInternal (children , items , 0);
                }) : ({ /* cicili#Let9518 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let9520 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9521 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn9526 */
                        searchLeaf (items , 0);
                      }) : ({ /* cicili#Let9530 */
                        // ----------
                        ;
                        ({ /* cicili#Progn9532 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User insert_BTree_int_User (BTree_int_User tree , int skey , User svalue ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let9539 */
    char * __h_stack_buffer  = calloc (2048, sizeof(char));
    CFile __h_stack_out  = fmemopen (__h_stack_buffer , 2048, "w+");
    // ----------
    fprintf (__h_stack_out , "*** insert ");
    fprintf (__h_stack_out , "%d", skey );
    fclose (__h_stack_out );
    __h_stack_push_data (__h_stack_buffer );
    __h_stack_push_separator ();
  }
  if (3 <  3 )
    { /* cicili#Block9548 */
      return Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_ORDER (3));
    }
  Either_BTree_int_User_Error_BTree_int_User insertInternal (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let9560 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9562 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9563 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn9565 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn9567 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9572 */
              ({ /* cicili#Let9576 */
                __auto_type match9575  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let9578 */
                  bool __h_case_result  = (true  &&  ((match9575 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9582 */
                      ({ /* cicili#Let9586 */
                        __auto_type match9585  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match9585 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        ;
                        ({ /* cicili#Let9589 */
                          bool __h_case_result  = (true  &&  (((match9585 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9590 */
                                (child  =  (((match9585 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9595 */
                              ({ /* cicili#Let9599 */
                                __auto_type match9598  = get_Rc_BTree_int_User (child );
                                typeof((((match9598 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                ;
                                ({ /* cicili#Let9602 */
                                  bool __h_case_result  = (true  &&  (((match9598 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9603 */
                                        (tr  =  (((match9598 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn9608 */
                                      ({ /* cicili#Let9612 */
                                        __auto_type match9611  = insert_BTree_int_User (tr , skey , svalue );
                                        typeof((((match9611 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let9615 */
                                          bool __h_case_result  = (true  &&  (((match9611 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9616 */
                                                (child_tree  =  (((match9611 . __h_data ). Right ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn9621 */
                                              ({ /* cicili#Let9625 */
                                                typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let9627 */
                                                  bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9628 */
                                                          (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn9630 */
                                                          (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn9635 */
                                                      ({ /* cicili#Let9640 */
                                                        typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                        typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match9638_1_arg ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Let9642 */
                                                          bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9643 */
                                                                    (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn9645 */
                                                                    (__h_match9638_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) &&  (true  &&  ((__h_match9638_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* cicili#Progn9650 */
                                                              ({ /* cicili#Let9653 */
                                                                __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9655 */
                                                                  __auto_type child_tree  = child_tree ;
                                                                  // ----------
                                                                  ((void)(child_tree -> __h_table -> freeClass ));
                                                                  child_tree ;
                                                                });
                                                                // ----------
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let9664 */
                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9666 */
                                                                      __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                      // ----------
                                                                      ((void)(r1 -> __h_table -> freeClass ));
                                                                      r1 ;
                                                                    });
                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9670 */
                                                                      __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      // ----------
                                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                                      r2 ;
                                                                    });
                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9674 */
                                                                      __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                      // ----------
                                                                      ((void)(r3 -> __h_table -> freeClass ));
                                                                      r3 ;
                                                                    });
                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9678 */
                                                                      __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                      // ----------
                                                                      ((void)(r4 -> __h_table -> freeClass ));
                                                                      r4 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9687 */
                                                                        Rc_BTree_int_User __ciciliC_9686 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_9686 ;
                                                                      }), r4 );
                                                                  })));
                                                              });
                                                            }) : ({ /* cicili#Let9694 */
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Progn9696 */
                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let9703 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let9705 */
                                                        bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn9709 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let9717 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9719 */
                                                                  __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                  // ----------
                                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9723 */
                                                                  __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9729 */
                                                                    Rc_BTree_int_User __ciciliC_9728 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_9728 ;
                                                                  }), r1 );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9736 */
                                                                  __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                  // ----------
                                                                  ((void)(r3 -> __h_table -> freeClass ));
                                                                  r3 ;
                                                                });
                                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9740 */
                                                                  __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9746 */
                                                                    Rc_BTree_int_User __ciciliC_9745 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_9745 ;
                                                                  }), r3 );
                                                                  // ----------
                                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                                  r4 ;
                                                                });
                                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9753 */
                                                                  __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                  // ----------
                                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                                  r5 ;
                                                                });
                                                                // ----------
                                                                append_List_Rc_BTree_int_User (r2 , r5 );
                                                              })));
                                                          }) : ({ /* cicili#Let9761 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn9763 */
                                                              Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let9771 */
                                                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9773 */
                                                                    __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                    // ----------
                                                                    ((void)(r1 -> __h_table -> freeClass ));
                                                                    r1 ;
                                                                  });
                                                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9777 */
                                                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9783 */
                                                                      Rc_BTree_int_User __ciciliC_9782 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                        return clone_Rc_BTree_int_User (__h_value );
                                                                      }
                                                                      __ciciliC_9782 ;
                                                                    }), r1 );
                                                                    // ----------
                                                                    ((void)(r2 -> __h_table -> freeClass ));
                                                                    r2 ;
                                                                  });
                                                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9790 */
                                                                    __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                    // ----------
                                                                    ((void)(r3 -> __h_table -> freeClass ));
                                                                    r3 ;
                                                                  });
                                                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9794 */
                                                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9800 */
                                                                      Rc_BTree_int_User __ciciliC_9799 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                        return clone_Rc_BTree_int_User (__h_value );
                                                                      }
                                                                      __ciciliC_9799 ;
                                                                    }), r3 );
                                                                    // ----------
                                                                    ((void)(r4 -> __h_table -> freeClass ));
                                                                    r4 ;
                                                                  });
                                                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9807 */
                                                                    __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                    // ----------
                                                                    ((void)(r5 -> __h_table -> freeClass ));
                                                                    r5 ;
                                                                  });
                                                                  // ----------
                                                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                                                })));
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let9815 */
                                              __auto_type left  = match9611 ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn9817 */
                                                left ;
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let9821 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn9823 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let9830 */
                              // ----------
                              ;
                              ({ /* cicili#Progn9832 */
                                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9842 */
                      // ----------
                      ;
                      ({ /* cicili#Let9844 */
                        bool __h_case_result  = (true  &&  ((match9575 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn9848 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let9855 */
                            // ----------
                            ;
                            ({ /* cicili#Progn9857 */
                              insertInternal (items , children , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9861 */
              // ----------
              ;
              ({ /* cicili#Progn9863 */
                ({ /* cicili#Let9867 */
                  __auto_type match9866  = nth_List_Rc_BTree_int_User (index , children );
                  typeof((((match9866 . __h_data ). Just ). __h_0_mem )) child ;
                  // ----------
                  ;
                  ({ /* cicili#Let9870 */
                    bool __h_case_result  = (true  &&  (((match9866 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9871 */
                          (child  =  (((match9866 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn9876 */
                        ({ /* cicili#Let9880 */
                          __auto_type match9879  = get_Rc_BTree_int_User (child );
                          typeof((((match9879 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          ;
                          ({ /* cicili#Let9883 */
                            bool __h_case_result  = (true  &&  (((match9879 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9884 */
                                  (tr  =  (((match9879 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn9889 */
                                ({ /* cicili#Let9893 */
                                  __auto_type match9892  = insert_BTree_int_User (tr , skey , svalue );
                                  typeof((((match9892 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let9896 */
                                    bool __h_case_result  = (true  &&  (((match9892 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9897 */
                                          (child_tree  =  (((match9892 . __h_data ). Right ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn9902 */
                                        ({ /* cicili#Let9906 */
                                          typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                          typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let9908 */
                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9909 */
                                                    (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn9911 */
                                                    (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn9916 */
                                                ({ /* cicili#Let9921 */
                                                  typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                  typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match9919_1_arg ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let9923 */
                                                    bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9924 */
                                                              (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn9926 */
                                                              (__h_match9919_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                              true ;
                                                            }) ) &&  (true  &&  ((__h_match9919_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn9931 */
                                                        ({ /* cicili#Let9934 */
                                                          __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9936 */
                                                            __auto_type child_tree  = child_tree ;
                                                            // ----------
                                                            ((void)(child_tree -> __h_table -> freeClass ));
                                                            child_tree ;
                                                          });
                                                          // ----------
                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let9945 */
                                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9947 */
                                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                // ----------
                                                                ((void)(r1 -> __h_table -> freeClass ));
                                                                r1 ;
                                                              });
                                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9951 */
                                                                __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                // ----------
                                                                ((void)(r2 -> __h_table -> freeClass ));
                                                                r2 ;
                                                              });
                                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9955 */
                                                                __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                // ----------
                                                                ((void)(r3 -> __h_table -> freeClass ));
                                                                r3 ;
                                                              });
                                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9959 */
                                                                __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                // ----------
                                                                ((void)(r4 -> __h_table -> freeClass ));
                                                                r4 ;
                                                              });
                                                              // ----------
                                                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9968 */
                                                                  Rc_BTree_int_User __ciciliC_9967 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_9967 ;
                                                                }), r4 );
                                                            })));
                                                        });
                                                      }) : ({ /* cicili#Let9975 */
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn9977 */
                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let9984 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let9986 */
                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn9990 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let9998 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10000 */
                                                            __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                            // ----------
                                                            ((void)(r1 -> __h_table -> freeClass ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10004 */
                                                            __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10010 */
                                                              Rc_BTree_int_User __ciciliC_10009 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_10009 ;
                                                            }), r1 );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10017 */
                                                            __auto_type r3  = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                            // ----------
                                                            ((void)(r3 -> __h_table -> freeClass ));
                                                            r3 ;
                                                          });
                                                          // ----------
                                                          append_List_Rc_BTree_int_User (r2 , r3 );
                                                        })));
                                                    }) : ({ /* cicili#Let10025 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn10027 */
                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10035 */
                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10037 */
                                                              __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                              // ----------
                                                              ((void)(r1 -> __h_table -> freeClass ));
                                                              r1 ;
                                                            });
                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10041 */
                                                              __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10047 */
                                                                Rc_BTree_int_User __ciciliC_10046 (Rc_BTree_int_User __h_value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                }
                                                                __ciciliC_10046 ;
                                                              }), r1 );
                                                              // ----------
                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                              r2 ;
                                                            });
                                                            __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10054 */
                                                              __auto_type r3  = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                              // ----------
                                                              ((void)(r3 -> __h_table -> freeClass ));
                                                              r3 ;
                                                            });
                                                            // ----------
                                                            append_List_Rc_BTree_int_User (r2 , r3 );
                                                          })));
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let10062 */
                                        __auto_type left  = match9892 ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn10064 */
                                          left ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let10068 */
                                // ----------
                                ;
                                ({ /* cicili#Progn10070 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let10077 */
                        // ----------
                        ;
                        ({ /* cicili#Progn10079 */
                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let10086 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10088 */
                                __auto_type r1  = wrap_List_BTree_int_User_pair_t (((BTree_int_User_pair_t){ skey , svalue }));
                                // ----------
                                ((void)(r1 -> __h_table -> freeClass ));
                                r1 ;
                              });
                              // ----------
                              append_List_BTree_int_User_pair_t (items , r1 );
                            })));
                        });
                      }));
                  });
                });
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User insertLeaf (List_BTree_int_User_pair_t items , List_BTree_int_User_pair_t current , size_t index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let10104 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let10106 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10107 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn10109 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn10111 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10116 */
              ({ /* cicili#Let10120 */
                __auto_type match10119  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let10122 */
                  bool __h_case_result  = (true  &&  ((match10119 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10126 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                    }) : ({ /* cicili#Let10136 */
                      // ----------
                      ;
                      ({ /* cicili#Let10138 */
                        bool __h_case_result  = (true  &&  ((match10119 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn10142 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let10149 */
                            // ----------
                            ;
                            ({ /* cicili#Progn10151 */
                              insertLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10155 */
              // ----------
              ;
              ({ /* cicili#Progn10157 */
                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let10164 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10166 */
                      __auto_type r1  = wrap_List_BTree_int_User_pair_t (((BTree_int_User_pair_t){ skey , svalue }));
                      // ----------
                      ((void)(r1 -> __h_table -> freeClass ));
                      r1 ;
                    });
                    // ----------
                    append_List_BTree_int_User_pair_t (items , r1 );
                  })));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let10176 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let10178 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10179 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10181 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10186 */
            ({ /* cicili#Let10190 */
              __auto_type match10189  = insertInternal (items , children , items , 0);
              typeof((((match10189 . __h_data ). Right ). __h_0_mem )) tr ;
              // ----------
              ;
              ({ /* cicili#Let10192 */
                bool __h_case_result  = (true  &&  (((match10189 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10193 */
                      (tr  =  (((match10189 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn10198 */
                    Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                  }) : ({ /* cicili#Let10205 */
                    __auto_type left  = match10189 ;
                    // ----------
                    ;
                    ({ /* cicili#Progn10207 */
                      left ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let10211 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let10213 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10214 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn10216 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn10221 */
                  ({ /* cicili#Let10225 */
                    __auto_type match10224  = insertInternal (items , children , items , 0);
                    typeof((((match10224 . __h_data ). Right ). __h_0_mem )) tr ;
                    // ----------
                    ;
                    ({ /* cicili#Let10227 */
                      bool __h_case_result  = (true  &&  (((match10224 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10228 */
                            (tr  =  (((match10224 . __h_data ). Right ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn10233 */
                          Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                        }) : ({ /* cicili#Let10240 */
                          __auto_type left  = match10224 ;
                          // ----------
                          ;
                          ({ /* cicili#Progn10242 */
                            left ;
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let10246 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let10248 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10249 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn10254 */
                        ({ /* cicili#Let10258 */
                          __auto_type match10257  = insertLeaf (items , items , 0);
                          typeof((((match10257 . __h_data ). Right ). __h_0_mem )) tr ;
                          // ----------
                          ;
                          ({ /* cicili#Let10260 */
                            bool __h_case_result  = (true  &&  (((match10257 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10261 */
                                  (tr  =  (((match10257 . __h_data ). Right ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn10266 */
                                Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                              }) : ({ /* cicili#Let10273 */
                                __auto_type left  = match10257 ;
                                // ----------
                                ;
                                ({ /* cicili#Progn10275 */
                                  left ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let10279 */
                        // ----------
                        ;
                        ({ /* cicili#Progn10281 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_OBJECT ());
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
size_t order_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return 3;
}
void free_BTree_int_User (BTree_int_User * this_ptr ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let10290 */
    __auto_type this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_int_User children ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
      { /* cicili#Let10295 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let10297 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10298 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10300 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block10306 */
              { /* cicili#Block10308 */
                free_Rc_BTree_int_User (&head );
                freeChildren (tail );
              }
            }
        });
      }
    }
    { /* cicili#Let10314 */
      typeof((((this -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((this -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let10316 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10317 */
                (items  =  (((this -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10319 */
                (children  =  (((this -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block10325 */
            { /* cicili#Block10327 */
              free_List_BTree_int_User_pair_t ((&items ));
              freeChildren (children );
              free_List_Rc_BTree_int_User ((&children ));
              free (this );
            }
          }
        else
          { /* cicili#Let10338 */
            typeof((((this -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((this -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let10340 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10341 */
                      (items  =  (((this -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn10343 */
                      (children  =  (((this -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10349 */
                  { /* cicili#Block10351 */
                    free_List_BTree_int_User_pair_t ((&items ));
                    freeChildren (children );
                    free_List_Rc_BTree_int_User ((&children ));
                    free (this );
                  }
                }
              else
                { /* cicili#Let10362 */
                  typeof((((this -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let10364 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10365 */
                          (items  =  (((this -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10371 */
                        { /* cicili#Block10373 */
                          free_List_BTree_int_User_pair_t ((&items ));
                          free (this );
                        }
                      }
                  });
                }
            });
          }
      });
    }
  }
}
BTree_int_User__H_Table * const get_BTree_int_User__H_Table () {
  static BTree_int_User__H_Table table  = { free_BTree_int_User , fromLists_BTree_int_User , pure_BTree_int_User , show_BTree_int_User , traverse_BTree_int_User , max_BTree_int_User , min_BTree_int_User , delete_BTree_int_User , search_BTree_int_User , insert_BTree_int_User , order_BTree_int_User };
  return (&table );
}
BTree_int_User Branch_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let10385 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return __h_stack_push (instance );
  }
}
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let10393 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return __h_stack_push (instance );
  }
}
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let10401 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h___t , .__h_data._ = { items }});
    return __h_stack_push (instance );
  }
}
#endif /* __BTree_int_User__H_IMPL__ */ 
#ifndef __Either_BTree_int_User_Error_BTree_int_User__H_DECL__
#define __Either_BTree_int_User_Error_BTree_int_User__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Left_t = 0,
  __h_Right_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_BTree_int_User_Error_BTree_int_User Either_BTree_int_User_Error_BTree_int_User ;
typedef void (*free_Either_BTree_int_User_Error_BTree_int_User_t) (Either_BTree_int_User_Error_BTree_int_User * this );
typedef struct Either_BTree_int_User_Error_BTree_int_User__H_Table {
  free_Either_BTree_int_User_Error_BTree_int_User_t freeData ;
} Either_BTree_int_User_Error_BTree_int_User__H_Table;
typedef struct Either_BTree_int_User_Error_BTree_int_User {
  const Either_BTree_int_User_Error_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion10419 */
    struct { /* ciciliStruct10420 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct10421 */
      BTree_int_User_Error __h_0_mem ;
    } Left , _ ;
  } __h_data ;
} Either_BTree_int_User_Error_BTree_int_User;
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value );
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error );
__attribute__((weak)) Either_BTree_int_User_Error_BTree_int_User Default_Either_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Left_BTree_int_User_Error_BTree_int_User (error );
}
const Either_BTree_int_User_Error_BTree_int_User__H_Table * const get_Either_BTree_int_User_Error_BTree_int_User__H_Table ();
void free_Either_BTree_int_User_Error_BTree_int_User (Either_BTree_int_User_Error_BTree_int_User * this );
#endif /* __Either_BTree_int_User_Error_BTree_int_User__H_DECL__ */ 
#ifndef __Either_BTree_int_User_Error_BTree_int_User__H_DECL__
#define __Either_BTree_int_User_Error_BTree_int_User__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Left_t = 0,
  __h_Right_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_BTree_int_User_Error_BTree_int_User Either_BTree_int_User_Error_BTree_int_User ;
typedef void (*free_Either_BTree_int_User_Error_BTree_int_User_t) (Either_BTree_int_User_Error_BTree_int_User * this );
typedef struct Either_BTree_int_User_Error_BTree_int_User__H_Table {
  free_Either_BTree_int_User_Error_BTree_int_User_t freeData ;
} Either_BTree_int_User_Error_BTree_int_User__H_Table;
typedef struct Either_BTree_int_User_Error_BTree_int_User {
  const Either_BTree_int_User_Error_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion10447 */
    struct { /* ciciliStruct10448 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct10449 */
      BTree_int_User_Error __h_0_mem ;
    } Left , _ ;
  } __h_data ;
} Either_BTree_int_User_Error_BTree_int_User;
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value );
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error );
__attribute__((weak)) Either_BTree_int_User_Error_BTree_int_User Default_Either_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Left_BTree_int_User_Error_BTree_int_User (error );
}
const Either_BTree_int_User_Error_BTree_int_User__H_Table * const get_Either_BTree_int_User_Error_BTree_int_User__H_Table ();
void free_Either_BTree_int_User_Error_BTree_int_User (Either_BTree_int_User_Error_BTree_int_User * this );
#endif /* __Either_BTree_int_User_Error_BTree_int_User__H_DECL__ */ 
typedef Either_BTree_int_User_Error_BTree_int_User (*BTree_int_User_to_Either_BTree_int_User_Error_BTree_int_User_t) (BTree_int_User value );
#ifndef __Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_DECL__
#define __Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_DECL__
#ifndef __H___h_Monad_ctor_t__
#define __H___h_Monad_ctor_t__
typedef enum __h_Monad_ctor_t {
  __h_Monad_t = 0
} __h_Monad_ctor_t;
#endif /* __H___h_Monad_ctor_t__ */ 
typedef struct Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User ;
typedef void (*free_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User_t) (Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User * this );
typedef struct Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_Table {
  free_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User_t freeData ;
    Either_BTree_int_User_Error_BTree_int_User (*returnB) (BTree_int_User value );
    Either_BTree_int_User_Error_BTree_int_User (*returnA) (BTree_int_User value );
    Either_BTree_int_User_Error_BTree_int_User (*bind) (Either_BTree_int_User_Error_BTree_int_User input , BTree_int_User_to_Either_BTree_int_User_Error_BTree_int_User_t a_mb );
} Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_Table;
typedef struct Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User {
  const Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion10487 */
    struct { /* ciciliStruct10488 */
    } Monad , _ ;
  } __h_data ;
} Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User;
Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User_ctor ();
__attribute__((weak)) Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User Default_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User_ctor ();
}
Either_BTree_int_User_Error_BTree_int_User returnB_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User (BTree_int_User value );
Either_BTree_int_User_Error_BTree_int_User returnA_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User (BTree_int_User value );
Either_BTree_int_User_Error_BTree_int_User bind_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User (Either_BTree_int_User_Error_BTree_int_User input , BTree_int_User_to_Either_BTree_int_User_Error_BTree_int_User_t a_mb );
const Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_Table * const get_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_Table ();
void free_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User (Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User * this );
#endif /* __Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_DECL__ */ 
Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User get_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User ();
#ifndef __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__
#define __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__
void free_Either_BTree_int_User_Error_BTree_int_User (Either_BTree_int_User_Error_BTree_int_User * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Either_BTree_int_User_Error_BTree_int_User__H_Table * const get_Either_BTree_int_User_Error_BTree_int_User__H_Table () {
  static const Either_BTree_int_User_Error_BTree_int_User__H_Table table  = { free_Either_BTree_int_User_Error_BTree_int_User };
  return (&table );
}
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let10535 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let10540 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h___t , .__h_data._ = { error }});
    // ----------
    return instance ;
  }
}
#endif /* __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__ */ 
#ifndef __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__
#define __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__
void free_Either_BTree_int_User_Error_BTree_int_User (Either_BTree_int_User_Error_BTree_int_User * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Either_BTree_int_User_Error_BTree_int_User__H_Table * const get_Either_BTree_int_User_Error_BTree_int_User__H_Table () {
  static const Either_BTree_int_User_Error_BTree_int_User__H_Table table  = { free_Either_BTree_int_User_Error_BTree_int_User };
  return (&table );
}
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let10556 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let10561 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h___t , .__h_data._ = { error }});
    // ----------
    return instance ;
  }
}
#endif /* __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__ */ 
#ifndef __Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_IMPL__
#define __Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_IMPL__
Either_BTree_int_User_Error_BTree_int_User returnB_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User (BTree_int_User value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Right_BTree_int_User_Error_BTree_int_User (value );
}
Either_BTree_int_User_Error_BTree_int_User returnA_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User (BTree_int_User value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Right_BTree_int_User_Error_BTree_int_User (value );
}
Either_BTree_int_User_Error_BTree_int_User bind_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User (Either_BTree_int_User_Error_BTree_int_User input , BTree_int_User_to_Either_BTree_int_User_Error_BTree_int_User_t a_mb ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let10579 */
      typeof((((input . __h_data ). Right ). __h_0_mem )) value ;
      // ----------
      ;
      ({ /* cicili#Let10581 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10582 */
              (value  =  (((input . __h_data ). Right ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10587 */
            a_mb (value );
          }) : ({ /* cicili#Let10591 */
            typeof((((input . __h_data ). Left ). __h_0_mem )) error ;
            // ----------
            ;
            ({ /* cicili#Let10593 */
              bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn10594 */
                    (error  =  (((input . __h_data ). Left ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn10599 */
                  Left_BTree_int_User_Error_BTree_int_User (error );
                }) : ({ /* cicili#Let10604 */
                  // ----------
                  ;
                  ({ /* cicili#Progn10606 */
                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_OBJECT ());
                  });
                }));
            });
          }));
      });
    });
}
void free_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User (Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_Table * const get_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_Table () {
  static const Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_Table table  = { free_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User , returnB_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User , returnA_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User , bind_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User };
  return (&table );
}
Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User_ctor () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let10621 */
    Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User instance  = ((Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User){ get_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_IMPL__ */ 
Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User get_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User_ctor ();
}
Either_BTree_int_User_Error_BTree_int_User insertAndFree (BTree_int_User tree , int key , User value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  printf ("Inserting: %d\n", key );
  return ({ /* cicili#Let10631 */
      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10633 */
        __auto_type tree  = tree ;
        // ----------
        ((void)(tree -> __h_table -> freeClass ));
        tree ;
      });
      // ----------
      ({ /* cicili#Let10637 */
        __auto_type wtr  = insert_BTree_int_User (tree , key , value );
        // ----------
        { /* cicili#Let10642 */
          typeof((((wtr . __h_data ). Right ). __h_0_mem )) ntr ;
          // ----------
          ;
          ({ /* cicili#Let10644 */
            bool __h_case_result  = (true  &&  (((wtr . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10645 */
                  (ntr  =  (((wtr . __h_data ). Right ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block10651 */
                { /* cicili#Block10653 */
                  printf ("\nInserted: %d\n", key );
                  show_BTree_int_User (stdout , ntr );
                  putchar ('\n');
                }
              }
          });
        }
        wtr ;
      });
    });
}
void __ciciliL_10667 (BTree_int_User_pair_t item ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let10672 */
    typeof((item . __h_0_mem )) key ;
    typeof((item . __h_1_mem )) __h_match10670_1_arg ;
    typeof((__h_match10670_1_arg . __h_0_mem )) name ;
    // ----------
    ;
    ({ /* cicili#Let10674 */
      bool __h_case_result  = (true  &&  ((({ /* cicili#Progn10675 */
              (key  =  (item . __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn10677 */
              (__h_match10670_1_arg  =  (item . __h_1_mem ) );
              true ;
            }) ) &&  (true  &&  ({ /* cicili#Progn10679 */
              (name  =  (__h_match10670_1_arg . __h_0_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block10685 */
          { /* cicili#Block10687 */
            printf ("\nDeleted: %d, ", key );
            (name -> __h_table -> show )(stdout , name );
            putchar ('\n');
            free_String ((&name ));
          }
        }
    });
  }
}
Either_BTree_int_User_Error_BTree_int_User deleteAndFree (BTree_int_User tree , int key ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  printf ("Deleting: %d\n", key );
  return ({ /* cicili#Let10659 */
      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10661 */
        __auto_type tree  = tree ;
        // ----------
        ((void)(tree -> __h_table -> freeClass ));
        tree ;
      });
      // ----------
      ({ /* cicili#Let10665 */
        __auto_type wtr  = delete_BTree_int_User (tree , key , __ciciliL_10667 );
        // ----------
        { /* cicili#Let10695 */
          typeof((((wtr . __h_data ). Right ). __h_0_mem )) ntr ;
          // ----------
          ;
          ({ /* cicili#Let10697 */
            bool __h_case_result  = (true  &&  (((wtr . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10698 */
                  (ntr  =  (((wtr . __h_data ). Right ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block10704 */
                { /* cicili#Block10706 */
                  show_BTree_int_User (stdout , ntr );
                  putchar ('\n');
                }
              }
          });
        }
        wtr ;
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User insertMany (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let10712 */
      __auto_type bind  = bind_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User ;
      // ----------
      bind (insertAndFree (tree , 30, ((User){ new_String_Const ("Dennis Ritchie 01"), 2000})), ({ /* cicili#Progn10719 */
          Either_BTree_int_User_Error_BTree_int_User __ciciliC_10718 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
            return bind (insertAndFree (tree , 20, ((User){ new_String_Const ("Dennis Ritchie 02"), 3000})), ({ /* cicili#Progn10726 */
                Either_BTree_int_User_Error_BTree_int_User __ciciliC_10725 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                  return bind (insertAndFree (tree , 40, ((User){ new_String_Const ("Dennis Ritchie 03"), 4000})), ({ /* cicili#Progn10733 */
                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_10732 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                        return bind (insertAndFree (tree , 18, ((User){ new_String_Const ("Dennis Ritchie 04"), 5000})), ({ /* cicili#Progn10740 */
                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_10739 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                              return bind (insertAndFree (tree , 28, ((User){ new_String_Const ("Dennis Ritchie 05"), 6000})), ({ /* cicili#Progn10747 */
                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_10746 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                    return bind (insertAndFree (tree , 50, ((User){ new_String_Const ("John McCarthy 06"), 2000})), ({ /* cicili#Progn10754 */
                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_10753 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                          return bind (insertAndFree (tree , 10, ((User){ new_String_Const ("John McCarthy 07"), 3000})), ({ /* cicili#Progn10761 */
                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_10760 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                return bind (insertAndFree (tree , 42, ((User){ new_String_Const ("John McCarthy 08"), 4000})), ({ /* cicili#Progn10768 */
                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_10767 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                      return bind (insertAndFree (tree , 52, ((User){ new_String_Const ("John McCarthy 09"), 5000})), ({ /* cicili#Progn10775 */
                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_10774 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                            return bind (insertAndFree (tree , 8, ((User){ new_String_Const ("Haskell Curry 10"), 6000})), ({ /* cicili#Progn10782 */
                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_10781 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                  return bind (insertAndFree (tree , 26, ((User){ new_String_Const ("Haskell Curry 11"), 2000})), ({ /* cicili#Progn10789 */
                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_10788 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                        return bind (insertAndFree (tree , 60, ((User){ new_String_Const ("Haskell Curry 12"), 3000})), ({ /* cicili#Progn10796 */
                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_10795 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                              return bind (insertAndFree (tree , 70, ((User){ new_String_Const ("Saman Pasha 13"), 4000})), ({ /* cicili#Progn10803 */
                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_10802 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                    return bind (insertAndFree (tree , 56, ((User){ new_String_Const ("Dennis Ritchie 14"), 5000})), ({ /* cicili#Progn10810 */
                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_10809 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                          return bind (insertAndFree (tree , 58, ((User){ new_String_Const ("Dennis Ritchie 15"), 6000})), ({ /* cicili#Progn10817 */
                                                                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_10816 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                return bind (insertAndFree (tree , 74, ((User){ new_String_Const ("Dennis Ritchie 16"), 2000})), ({ /* cicili#Progn10824 */
                                                                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_10823 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                      return bind (insertAndFree (tree , 76, ((User){ new_String_Const ("Dennis Ritchie 17"), 3000})), ({ /* cicili#Progn10831 */
                                                                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_10830 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                            return bind (insertAndFree (tree , 2, ((User){ new_String_Const ("John McCarthy 18"), 4000})), ({ /* cicili#Progn10838 */
                                                                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_10837 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                  return bind (insertAndFree (tree , 4, ((User){ new_String_Const ("John McCarthy 19"), 5000})), ({ /* cicili#Progn10845 */
                                                                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_10844 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                        return bind (insertAndFree (tree , 6, ((User){ new_String_Const ("John McCarthy 20"), 6000})), ({ /* cicili#Progn10852 */
                                                                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_10851 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                              return bind (insertAndFree (tree , 38, ((User){ new_String_Const ("Haskell Curry 21"), 2000})), ({ /* cicili#Progn10859 */
                                                                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_10858 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                    return bind (insertAndFree (tree , 36, ((User){ new_String_Const ("Haskell Curry 22"), 3000})), ({ /* cicili#Progn10866 */
                                                                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_10865 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                          return bind (insertAndFree (tree , 34, ((User){ new_String_Const ("Saman Pasha 23"), 4000})), ({ /* cicili#Progn10873 */
                                                                                                                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_10872 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                return bind (insertAndFree (tree , 62, ((User){ new_String_Const ("Cicili 24"), 5000})), ({ /* cicili#Progn10880 */
                                                                                                                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_10879 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                      return bind (insertAndFree (tree , 46, ((User){ new_String_Const ("Cicili 25"), 6000})), ({ /* cicili#Progn10887 */
                                                                                                                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_10886 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                            return bind (insertAndFree (tree , 48, ((User){ new_String_Const ("Cicili 26"), 2000})), ({ /* cicili#Progn10894 */
                                                                                                                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_10893 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                                  return bind (insertAndFree (tree , 54, ((User){ new_String_Const ("Cicili 27"), 3000})), ({ /* cicili#Progn10901 */
                                                                                                                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_10900 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                                        return bind (insertAndFree (tree , 31, ((User){ new_String_Const ("Cicili 28"), 6000})), ({ /* cicili#Progn10908 */
                                                                                                                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_10907 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                                              return bind (insertAndFree (tree , 32, ((User){ new_String_Const ("Cicili 29"), 2000})), ({ /* cicili#Progn10915 */
                                                                                                                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_10914 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                                                    return bind (insertAndFree (tree , 33, ((User){ new_String_Const ("Cicili 30"), 3000})), ({ /* cicili#Progn10922 */
                                                                                                                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_10921 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                                                          return Right_BTree_int_User_Error_BTree_int_User (tree );
                                                                                                                                                                                        }
                                                                                                                                                                                        __ciciliC_10921 ;
                                                                                                                                                                                      }));
                                                                                                                                                                                  }
                                                                                                                                                                                  __ciciliC_10914 ;
                                                                                                                                                                                }));
                                                                                                                                                                            }
                                                                                                                                                                            __ciciliC_10907 ;
                                                                                                                                                                          }));
                                                                                                                                                                      }
                                                                                                                                                                      __ciciliC_10900 ;
                                                                                                                                                                    }));
                                                                                                                                                                }
                                                                                                                                                                __ciciliC_10893 ;
                                                                                                                                                              }));
                                                                                                                                                          }
                                                                                                                                                          __ciciliC_10886 ;
                                                                                                                                                        }));
                                                                                                                                                    }
                                                                                                                                                    __ciciliC_10879 ;
                                                                                                                                                  }));
                                                                                                                                              }
                                                                                                                                              __ciciliC_10872 ;
                                                                                                                                            }));
                                                                                                                                        }
                                                                                                                                        __ciciliC_10865 ;
                                                                                                                                      }));
                                                                                                                                  }
                                                                                                                                  __ciciliC_10858 ;
                                                                                                                                }));
                                                                                                                            }
                                                                                                                            __ciciliC_10851 ;
                                                                                                                          }));
                                                                                                                      }
                                                                                                                      __ciciliC_10844 ;
                                                                                                                    }));
                                                                                                                }
                                                                                                                __ciciliC_10837 ;
                                                                                                              }));
                                                                                                          }
                                                                                                          __ciciliC_10830 ;
                                                                                                        }));
                                                                                                    }
                                                                                                    __ciciliC_10823 ;
                                                                                                  }));
                                                                                              }
                                                                                              __ciciliC_10816 ;
                                                                                            }));
                                                                                        }
                                                                                        __ciciliC_10809 ;
                                                                                      }));
                                                                                  }
                                                                                  __ciciliC_10802 ;
                                                                                }));
                                                                            }
                                                                            __ciciliC_10795 ;
                                                                          }));
                                                                      }
                                                                      __ciciliC_10788 ;
                                                                    }));
                                                                }
                                                                __ciciliC_10781 ;
                                                              }));
                                                          }
                                                          __ciciliC_10774 ;
                                                        }));
                                                    }
                                                    __ciciliC_10767 ;
                                                  }));
                                              }
                                              __ciciliC_10760 ;
                                            }));
                                        }
                                        __ciciliC_10753 ;
                                      }));
                                  }
                                  __ciciliC_10746 ;
                                }));
                            }
                            __ciciliC_10739 ;
                          }));
                      }
                      __ciciliC_10732 ;
                    }));
                }
                __ciciliC_10725 ;
              }));
          }
          __ciciliC_10718 ;
        }));
    });
}
Either_BTree_int_User_Error_BTree_int_User deleteMany (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let10930 */
      __auto_type bind  = bind_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User ;
      // ----------
      bind (deleteAndFree (tree , 76), ({ /* cicili#Progn10935 */
          Either_BTree_int_User_Error_BTree_int_User __ciciliC_10934 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
            return bind (deleteAndFree (tree , 74), ({ /* cicili#Progn10940 */
                Either_BTree_int_User_Error_BTree_int_User __ciciliC_10939 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                  return bind (deleteAndFree (tree , 70), ({ /* cicili#Progn10945 */
                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_10944 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                        return bind (deleteAndFree (tree , 10), ({ /* cicili#Progn10950 */
                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_10949 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                              return bind (deleteAndFree (tree , 42), ({ /* cicili#Progn10955 */
                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_10954 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                    return bind (deleteAndFree (tree , 30), ({ /* cicili#Progn10960 */
                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_10959 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                          return bind (deleteAndFree (tree , 28), ({ /* cicili#Progn10965 */
                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_10964 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                return bind (deleteAndFree (tree , 40), ({ /* cicili#Progn10970 */
                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_10969 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                      return bind (deleteAndFree (tree , 52), ({ /* cicili#Progn10975 */
                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_10974 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                            return bind (deleteAndFree (tree , 50), ({ /* cicili#Progn10980 */
                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_10979 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                  return bind (deleteAndFree (tree , 18), ({ /* cicili#Progn10985 */
                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_10984 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                        return bind (deleteAndFree (tree , 2), ({ /* cicili#Progn10990 */
                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_10989 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                              return bind (deleteAndFree (tree , 8), ({ /* cicili#Progn10995 */
                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_10994 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                    return bind (deleteAndFree (tree , 58), ({ /* cicili#Progn11000 */
                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_10999 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                          return bind (deleteAndFree (tree , 20), ({ /* cicili#Progn11005 */
                                                                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_11004 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                return bind (deleteAndFree (tree , 56), ({ /* cicili#Progn11010 */
                                                                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_11009 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                      return bind (deleteAndFree (tree , 26), ({ /* cicili#Progn11015 */
                                                                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_11014 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                            return bind (deleteAndFree (tree , 4), ({ /* cicili#Progn11020 */
                                                                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_11019 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                  return bind (deleteAndFree (tree , 60), ({ /* cicili#Progn11025 */
                                                                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_11024 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                        return bind (deleteAndFree (tree , 31), ({ /* cicili#Progn11030 */
                                                                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_11029 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                              return bind (deleteAndFree (tree , 54), ({ /* cicili#Progn11035 */
                                                                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_11034 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                    return bind (deleteAndFree (tree , 38), ({ /* cicili#Progn11040 */
                                                                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_11039 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                          return bind (deleteAndFree (tree , 62), ({ /* cicili#Progn11045 */
                                                                                                                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_11044 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                return bind (deleteAndFree (tree , 36), ({ /* cicili#Progn11050 */
                                                                                                                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_11049 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                      return bind (deleteAndFree (tree , 6), ({ /* cicili#Progn11055 */
                                                                                                                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_11054 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                            return bind (deleteAndFree (tree , 48), ({ /* cicili#Progn11060 */
                                                                                                                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_11059 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                                  return bind (deleteAndFree (tree , 34), ({ /* cicili#Progn11065 */
                                                                                                                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_11064 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                                        return bind (deleteAndFree (tree , 32), ({ /* cicili#Progn11070 */
                                                                                                                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_11069 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                                              return bind (deleteAndFree (tree , 46), ({ /* cicili#Progn11075 */
                                                                                                                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_11074 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                                                    return bind (deleteAndFree (tree , 33), ({ /* cicili#Progn11080 */
                                                                                                                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_11079 (BTree_int_User tree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
                                                                                                                                                                                          return Right_BTree_int_User_Error_BTree_int_User (tree );
                                                                                                                                                                                        }
                                                                                                                                                                                        __ciciliC_11079 ;
                                                                                                                                                                                      }));
                                                                                                                                                                                  }
                                                                                                                                                                                  __ciciliC_11074 ;
                                                                                                                                                                                }));
                                                                                                                                                                            }
                                                                                                                                                                            __ciciliC_11069 ;
                                                                                                                                                                          }));
                                                                                                                                                                      }
                                                                                                                                                                      __ciciliC_11064 ;
                                                                                                                                                                    }));
                                                                                                                                                                }
                                                                                                                                                                __ciciliC_11059 ;
                                                                                                                                                              }));
                                                                                                                                                          }
                                                                                                                                                          __ciciliC_11054 ;
                                                                                                                                                        }));
                                                                                                                                                    }
                                                                                                                                                    __ciciliC_11049 ;
                                                                                                                                                  }));
                                                                                                                                              }
                                                                                                                                              __ciciliC_11044 ;
                                                                                                                                            }));
                                                                                                                                        }
                                                                                                                                        __ciciliC_11039 ;
                                                                                                                                      }));
                                                                                                                                  }
                                                                                                                                  __ciciliC_11034 ;
                                                                                                                                }));
                                                                                                                            }
                                                                                                                            __ciciliC_11029 ;
                                                                                                                          }));
                                                                                                                      }
                                                                                                                      __ciciliC_11024 ;
                                                                                                                    }));
                                                                                                                }
                                                                                                                __ciciliC_11019 ;
                                                                                                              }));
                                                                                                          }
                                                                                                          __ciciliC_11014 ;
                                                                                                        }));
                                                                                                    }
                                                                                                    __ciciliC_11009 ;
                                                                                                  }));
                                                                                              }
                                                                                              __ciciliC_11004 ;
                                                                                            }));
                                                                                        }
                                                                                        __ciciliC_10999 ;
                                                                                      }));
                                                                                  }
                                                                                  __ciciliC_10994 ;
                                                                                }));
                                                                            }
                                                                            __ciciliC_10989 ;
                                                                          }));
                                                                      }
                                                                      __ciciliC_10984 ;
                                                                    }));
                                                                }
                                                                __ciciliC_10979 ;
                                                              }));
                                                          }
                                                          __ciciliC_10974 ;
                                                        }));
                                                    }
                                                    __ciciliC_10969 ;
                                                  }));
                                              }
                                              __ciciliC_10964 ;
                                            }));
                                        }
                                        __ciciliC_10959 ;
                                      }));
                                  }
                                  __ciciliC_10954 ;
                                }));
                            }
                            __ciciliC_10949 ;
                          }));
                      }
                      __ciciliC_10944 ;
                    }));
                }
                __ciciliC_10939 ;
              }));
          }
          __ciciliC_10934 ;
        }));
    });
}
void __ciciliL_11396 (BTree_int_User_pair_t item , Bool hasNext ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let11401 */
    typeof((item . __h_0_mem )) key ;
    typeof((item . __h_1_mem )) __h_match11399_1_arg ;
    typeof((__h_match11399_1_arg . __h_0_mem )) name ;
    // ----------
    ;
    ({ /* cicili#Let11403 */
      bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11404 */
              (key  =  (item . __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn11406 */
              (__h_match11399_1_arg  =  (item . __h_1_mem ) );
              true ;
            }) ) &&  (true  &&  ({ /* cicili#Progn11408 */
              (name  =  (__h_match11399_1_arg . __h_0_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block11414 */
          { /* cicili#Block11416 */
            fprintf (stdout , "%d", key );
            putchar (' ');
            (name -> __h_table -> show )(stdout , name );
            putchar ('\n');
          }
        }
    });
  }
}
void __ciciliL_11550 (BTree_int_User_pair_t item , Bool hasNext ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let11555 */
    typeof((item . __h_1_mem )) __h_match11553_1_arg ;
    typeof((__h_match11553_1_arg . __h_0_mem )) name ;
    // ----------
    ;
    ({ /* cicili#Let11557 */
      bool __h_case_result  = (true  &&  (({ /* cicili#Progn11558 */
            (__h_match11553_1_arg  =  (item . __h_1_mem ) );
            true ;
          }) &&  (true  &&  ({ /* cicili#Progn11560 */
              (name  =  (__h_match11553_1_arg . __h_0_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block11566 */
          { /* cicili#Block11568 */
            (name -> __h_table -> show )(stdout , name );
            free_String ((&name ));
            putchar ('\n');
          }
        }
    });
  }
}
void showTreeResult (Either_BTree_int_User_Error_BTree_int_User etree ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let11088 */
    typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
    // ----------
    ;
    ({ /* cicili#Let11090 */
      bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11091 */
            (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block11097 */
          { /* cicili#Block11103 */
            putchar ('\n');
            { /* cicili#Block11108 */
              printf ("searching for %d: ", 30);
              { /* cicili#Let11112 */
                __auto_type match11111  = search_BTree_int_User (tree , 30);
                typeof((((match11111 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let11115 */
                  bool __h_case_result  = (true  &&  (((match11111 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11116 */
                        (item  =  (((match11111 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block11122 */
                      ({ /* cicili#Let11129 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match11127_1_arg ;
                        typeof((__h_match11127_1_arg . __h_0_mem )) name ;
                        typeof((__h_match11127_1_arg . __h_1_mem )) salary ;
                        // ----------
                        ;
                        ({ /* cicili#Let11131 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11132 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11134 */
                                  (__h_match11127_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn11136 */
                                    (name  =  (__h_match11127_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11138 */
                                    (salary  =  (__h_match11127_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11143 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let11147 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11149 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let11154 */
                      // ----------
                      ;
                      ({ /* cicili#Let11156 */
                        bool __h_case_result  = (true  &&  ((match11111 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block11161 */
                            printf ("not found!");
                          }
                      });
                    }
                });
              }
              putchar ('\n');
            }
            { /* cicili#Block11166 */
              printf ("searching for %d: ", 50);
              { /* cicili#Let11170 */
                __auto_type match11169  = search_BTree_int_User (tree , 50);
                typeof((((match11169 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let11173 */
                  bool __h_case_result  = (true  &&  (((match11169 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11174 */
                        (item  =  (((match11169 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block11180 */
                      ({ /* cicili#Let11187 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match11185_1_arg ;
                        typeof((__h_match11185_1_arg . __h_0_mem )) name ;
                        typeof((__h_match11185_1_arg . __h_1_mem )) salary ;
                        // ----------
                        ;
                        ({ /* cicili#Let11189 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11190 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11192 */
                                  (__h_match11185_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn11194 */
                                    (name  =  (__h_match11185_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11196 */
                                    (salary  =  (__h_match11185_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11201 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let11205 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11207 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let11212 */
                      // ----------
                      ;
                      ({ /* cicili#Let11214 */
                        bool __h_case_result  = (true  &&  ((match11169 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block11219 */
                            printf ("not found!");
                          }
                      });
                    }
                });
              }
              putchar ('\n');
            }
            { /* cicili#Block11224 */
              printf ("searching for %d: ", 60);
              { /* cicili#Let11228 */
                __auto_type match11227  = search_BTree_int_User (tree , 60);
                typeof((((match11227 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let11231 */
                  bool __h_case_result  = (true  &&  (((match11227 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11232 */
                        (item  =  (((match11227 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block11238 */
                      ({ /* cicili#Let11245 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match11243_1_arg ;
                        typeof((__h_match11243_1_arg . __h_0_mem )) name ;
                        typeof((__h_match11243_1_arg . __h_1_mem )) salary ;
                        // ----------
                        ;
                        ({ /* cicili#Let11247 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11248 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11250 */
                                  (__h_match11243_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn11252 */
                                    (name  =  (__h_match11243_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11254 */
                                    (salary  =  (__h_match11243_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11259 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let11263 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11265 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let11270 */
                      // ----------
                      ;
                      ({ /* cicili#Let11272 */
                        bool __h_case_result  = (true  &&  ((match11227 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block11277 */
                            printf ("not found!");
                          }
                      });
                    }
                });
              }
              putchar ('\n');
            }
            { /* cicili#Block11282 */
              printf ("searching for %d: ", 70);
              { /* cicili#Let11286 */
                __auto_type match11285  = search_BTree_int_User (tree , 70);
                typeof((((match11285 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let11289 */
                  bool __h_case_result  = (true  &&  (((match11285 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11290 */
                        (item  =  (((match11285 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block11296 */
                      ({ /* cicili#Let11303 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match11301_1_arg ;
                        typeof((__h_match11301_1_arg . __h_0_mem )) name ;
                        typeof((__h_match11301_1_arg . __h_1_mem )) salary ;
                        // ----------
                        ;
                        ({ /* cicili#Let11305 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11306 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11308 */
                                  (__h_match11301_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn11310 */
                                    (name  =  (__h_match11301_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11312 */
                                    (salary  =  (__h_match11301_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11317 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let11321 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11323 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let11328 */
                      // ----------
                      ;
                      ({ /* cicili#Let11330 */
                        bool __h_case_result  = (true  &&  ((match11285 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block11335 */
                            printf ("not found!");
                          }
                      });
                    }
                });
              }
              putchar ('\n');
            }
            { /* cicili#Block11340 */
              printf ("searching for %d: ", 56);
              { /* cicili#Let11344 */
                __auto_type match11343  = search_BTree_int_User (tree , 56);
                typeof((((match11343 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let11347 */
                  bool __h_case_result  = (true  &&  (((match11343 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11348 */
                        (item  =  (((match11343 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block11354 */
                      ({ /* cicili#Let11361 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match11359_1_arg ;
                        typeof((__h_match11359_1_arg . __h_0_mem )) name ;
                        typeof((__h_match11359_1_arg . __h_1_mem )) salary ;
                        // ----------
                        ;
                        ({ /* cicili#Let11363 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11364 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11366 */
                                  (__h_match11359_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn11368 */
                                    (name  =  (__h_match11359_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11370 */
                                    (salary  =  (__h_match11359_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11375 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let11379 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11381 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let11386 */
                      // ----------
                      ;
                      ({ /* cicili#Let11388 */
                        bool __h_case_result  = (true  &&  ((match11343 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block11393 */
                            printf ("not found!");
                          }
                      });
                    }
                });
              }
              putchar ('\n');
            }
            putchar ('\n');
            printf ("Traversing B-Tree: \n");
            traverse_BTree_int_User (tree , __ciciliL_11396 );
            putchar ('\n');
            { /* cicili#Let11426 */
              __auto_type match11425  = min_BTree_int_User (tree );
              typeof((((match11425 . __h_data ). Just ). __h_0_mem )) item ;
              // ----------
              ;
              ({ /* cicili#Let11429 */
                bool __h_case_result  = (true  &&  (((match11425 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11430 */
                      (item  =  (((match11425 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block11436 */
                    { /* cicili#Block11438 */
                      printf ("minimum: ");
                      ({ /* cicili#Let11445 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match11443_1_arg ;
                        typeof((__h_match11443_1_arg . __h_0_mem )) name ;
                        typeof((__h_match11443_1_arg . __h_1_mem )) salary ;
                        // ----------
                        ;
                        ({ /* cicili#Let11447 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11448 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11450 */
                                  (__h_match11443_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn11452 */
                                    (name  =  (__h_match11443_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11454 */
                                    (salary  =  (__h_match11443_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11459 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let11463 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11465 */
                                0;
                              });
                            }));
                        });
                      });
                      putchar ('\n');
                    }
                  }
                else
                  { /* cicili#Let11470 */
                    // ----------
                    ;
                    ({ /* cicili#Let11472 */
                      bool __h_case_result  = (true  &&  ((match11425 . __h_ctor ) ==  __h_Nothing_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11477 */
                          printf ("minimum not found!");
                        }
                    });
                  }
              });
            }
            putchar ('\n');
            { /* cicili#Let11481 */
              __auto_type match11480  = max_BTree_int_User (tree );
              typeof((((match11480 . __h_data ). Just ). __h_0_mem )) item ;
              // ----------
              ;
              ({ /* cicili#Let11484 */
                bool __h_case_result  = (true  &&  (((match11480 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11485 */
                      (item  =  (((match11480 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block11491 */
                    { /* cicili#Block11493 */
                      printf ("maximum: ");
                      ({ /* cicili#Let11500 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match11498_1_arg ;
                        typeof((__h_match11498_1_arg . __h_0_mem )) name ;
                        typeof((__h_match11498_1_arg . __h_1_mem )) salary ;
                        // ----------
                        ;
                        ({ /* cicili#Let11502 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11503 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11505 */
                                  (__h_match11498_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn11507 */
                                    (name  =  (__h_match11498_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11509 */
                                    (salary  =  (__h_match11498_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11514 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let11518 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11520 */
                                0;
                              });
                            }));
                        });
                      });
                      putchar ('\n');
                    }
                  }
                else
                  { /* cicili#Let11525 */
                    // ----------
                    ;
                    ({ /* cicili#Let11527 */
                      bool __h_case_result  = (true  &&  ((match11480 . __h_ctor ) ==  __h_Nothing_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11532 */
                          printf ("maximum not found!");
                        }
                    });
                  }
              });
            }
            putchar ('\n');
            { /* cicili#Let11536 */
              __auto_type match11535  = deleteMany (tree );
              typeof((((match11535 . __h_data ). Right ). __h_0_mem )) tree ;
              // ----------
              ;
              ({ /* cicili#Let11538 */
                bool __h_case_result  = (true  &&  (((match11535 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11539 */
                      (tree  =  (((match11535 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block11545 */
                    { /* cicili#Block11547 */
                      printf ("Traversing B-Tree to free strings allocated names if were not deleted.\n");
                      traverse_BTree_int_User (tree , __ciciliL_11550 );
                      free_BTree_int_User ((&tree ));
                    }
                  }
                else
                  { /* cicili#Let11577 */
                    typeof((((match11535 . __h_data ). Left ). __h_0_mem )) error ;
                    // ----------
                    ;
                    ({ /* cicili#Let11579 */
                      bool __h_case_result  = (true  &&  (((match11535 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn11580 */
                            (error  =  (((match11535 . __h_data ). Left ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11586 */
                          ({ /* cicili#Let11589 */
                            __auto_type tmp_stdout  = stdout ;
                            // ----------
                            stdout  = stderr ;
                            printf ("\nB-Tree Deletion Error: ");
                            show_BTree_int_User_Error (error );
                            putchar ('\n');
                            stdout  = tmp_stdout ;
                          });
                        }
                    });
                  }
              });
            }
            printf ("Done\n");
          }
        }
      else
        { /* cicili#Let11595 */
          typeof((((etree . __h_data ). Left ). __h_0_mem )) error ;
          // ----------
          ;
          ({ /* cicili#Let11597 */
            bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn11598 */
                  (error  =  (((etree . __h_data ). Left ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block11604 */
                ({ /* cicili#Let11607 */
                  __auto_type tmp_stdout  = stdout ;
                  // ----------
                  stdout  = stderr ;
                  printf ("\nB-Tree Insertion Error: ");
                  show_BTree_int_User_Error (error );
                  putchar ('\n');
                  stdout  = tmp_stdout ;
                });
              }
          });
        }
    });
  }
}
int main () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_init_haskell ();
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem  __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free_main))) = __h_stack ();
__h_stack_push_separator ();
#else
printf ("Cicili Haskell is not included!\n");
exit (EXIT_FAILURE);
#endif
  ({ /* cicili#Let11614 */
    __auto_type tree  = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
    // ----------
    showTreeResult (insertMany (tree ));
  });
}
