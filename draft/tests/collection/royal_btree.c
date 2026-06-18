#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
typedef struct ciciliOfwJ8kVqljlWV4cvr2VTxg7PTkE_ {
  String __h_0_mem ;
  int __h_1_mem ;
} ciciliOfwJ8kVqljlWV4cvr2VTxg7PTkE_;
typedef ciciliOfwJ8kVqljlWV4cvr2VTxg7PTkE_ User ;
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
    List_User (*pure) (const User * buf , size_t len );
    size_t (*show) (CFile file , List_User list );
    List_User (*copy) (List_User list );
    List_User (*replaceAt) (List_User list , User item , size_t index );
    List_User (*deleteAt) (List_User list , size_t index );
    List_User (*insertAt) (List_User llist , User item , size_t index );
    List_User (*replace) (List_User list , User item , List_User aimed );
    List_User (*delete) (List_User list , List_User aimed );
    List_User (*insert) (List_User llist , User item , List_User rlist );
    List_User (*reverse) (List_User list );
    List_User (*append) (List_User llist , List_User rlist );
    List_User (*push) (User item , List_User list );
    List_User (*take) (size_t len , List_User list );
    List_User (*last) (List_User list );
    List_User (*init) (List_User list );
    size_t (*hasLen) (List_User list , size_t desired );
    size_t (*len) (List_User list );
    List_User (*tail) (List_User list );
    List_User (*drop) (size_t len , List_User list );
    Maybe_User (*head) (List_User list );
    List_User (*nthcdr) (size_t index , List_User list );
    Maybe_User (*nth) (size_t index , List_User list );
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
  return Nil_User ();
}
User * toArray_List_User (List_User list , User term );
List_User wrap_List_User (const User item );
List_User pure_List_User (const User * buf , size_t len );
size_t show_List_User (CFile file , List_User list );
List_User copy_List_User (List_User list );
List_User replaceAt_List_User (List_User list , User item , size_t index );
List_User deleteAt_List_User (List_User list , size_t index );
List_User insertAt_List_User (List_User llist , User item , size_t index );
List_User replace_List_User (List_User list , User item , List_User aimed );
List_User delete_List_User (List_User list , List_User aimed );
List_User insert_List_User (List_User llist , User item , List_User rlist );
List_User reverse_List_User (List_User list );
List_User append_List_User (List_User llist , List_User rlist );
List_User push_List_User (User item , List_User list );
List_User take_List_User (size_t len , List_User list );
List_User last_List_User (List_User list );
List_User init_List_User (List_User list );
size_t hasLen_List_User (List_User list , size_t desired );
size_t len_List_User (List_User list );
List_User tail_List_User (List_User list );
List_User drop_List_User (size_t len , List_User list );
Maybe_User head_List_User (List_User list );
List_User nthcdr_List_User (size_t index , List_User list );
Maybe_User nth_List_User (size_t index , List_User list );
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
  return Nothing_List_User ();
}
const Maybe_List_User__H_Table * const get_Maybe_List_User__H_Table ();
void free_Maybe_List_User (Maybe_List_User * this );
#endif /* __Maybe_List_User__H_DECL__ */ 
typedef struct class_BTree_int_User * BTree_int_User ;
typedef struct cicilihCrsOuE2xNjEZepYUWdvAFhRfCc_ {
  int __h_0_mem ;
  User __h_1_mem ;
} cicilihCrsOuE2xNjEZepYUWdvAFhRfCc_;
typedef cicilihCrsOuE2xNjEZepYUWdvAFhRfCc_ BTree_int_User_pair_t ;
#ifndef __BTree_int_User_Error__H_DECL__
#define __BTree_int_User_Error__H_DECL__
#ifndef __H___h_BTreeError_ctor_t__
#define __H___h_BTreeError_ctor_t__
typedef enum __h_BTreeError_ctor_t {
  __h_ERR_ACCESS_DEAD_CONS_t = 0,
  __h_ERR_CANT_BORROW_t = 1,
  __h_ERR_INVALID_BRANCH_t = 2,
  __h_ERR_ACCESS_DEAD_CHILD_t = 3,
  __h_ERR_NOT_FOUND_t = 4,
  __h_ERR_UNIQUE_KEY_t = 5,
  __h_ERR_INVALID_ORDER_t = 6,
  __h_ERR_INVALID_OBJECT_t = 7
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
    } ERR_INVALID_OBJECT , _7 ;
    struct { /* ciciliStruct312 */
      size_t __h_0_mem ;
    } ERR_INVALID_ORDER , _6 ;
    struct { /* ciciliStruct313 */
      BTree_int_User_pair_t __h_0_mem ;
    } ERR_UNIQUE_KEY , _5 ;
    struct { /* ciciliStruct314 */
      int __h_0_mem ;
    } ERR_NOT_FOUND , _4 ;
    struct { /* ciciliStruct315 */
      BTree_int_User_pair_t __h_0_mem ;
      size_t __h_1_mem ;
    } ERR_ACCESS_DEAD_CHILD , _3 ;
    struct { /* ciciliStruct316 */
      BTree_int_User __h_0_mem ;
    } ERR_INVALID_BRANCH , _2 ;
    struct { /* ciciliStruct317 */
      char * __h_0_mem ;
    } ERR_CANT_BORROW , _1 ;
    struct { /* ciciliStruct318 */
    } ERR_ACCESS_DEAD_CONS , _ ;
  } __h_data ;
} BTree_int_User_Error;
BTree_int_User_Error BTree_int_User_ERR_INVALID_OBJECT ();
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (size_t order );
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item );
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key );
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , size_t index );
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch );
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason );
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CONS ();
__attribute__((weak)) BTree_int_User_Error Default_BTree_int_User_Error () {
  return BTree_int_User_ERR_ACCESS_DEAD_CONS ();
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
  union { /* ciciliUnion368 */
    struct { /* ciciliStruct369 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct370 */
      BTree_int_User_Error __h_0_mem ;
    } Left , _ ;
  } __h_data ;
} Either_BTree_int_User_Error_BTree_int_User;
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value );
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error );
__attribute__((weak)) Either_BTree_int_User_Error_BTree_int_User Default_Either_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
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
  union { /* ciciliUnion396 */
    struct { /* ciciliStruct397 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct398 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_int_User;
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value );
Maybe_BTree_int_User Nothing_BTree_int_User ();
__attribute__((weak)) Maybe_BTree_int_User Default_Maybe_BTree_int_User () {
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
  union { /* ciciliUnion426 */
    struct { /* ciciliStruct427 */
      BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct428 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_int_User_pair_t;
Maybe_BTree_int_User_pair_t Just_BTree_int_User_pair_t (BTree_int_User_pair_t value );
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t ();
__attribute__((weak)) Maybe_BTree_int_User_pair_t Default_Maybe_BTree_int_User_pair_t () {
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
typedef class_List_BTree_int_User_pair_t * List_BTree_int_User_pair_t_x ;
#ifndef __Maybe_List_BTree_int_User_pair_t_x__H_DECL__
#define __Maybe_List_BTree_int_User_pair_t_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_BTree_int_User_pair_t_x Maybe_List_BTree_int_User_pair_t_x ;
typedef void (*free_Maybe_List_BTree_int_User_pair_t_x_t) (Maybe_List_BTree_int_User_pair_t_x * this );
typedef struct Maybe_List_BTree_int_User_pair_t_x__H_Table {
  free_Maybe_List_BTree_int_User_pair_t_x_t freeData ;
} Maybe_List_BTree_int_User_pair_t_x__H_Table;
typedef struct Maybe_List_BTree_int_User_pair_t_x {
  const Maybe_List_BTree_int_User_pair_t_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion459 */
    struct { /* ciciliStruct460 */
      List_BTree_int_User_pair_t_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct461 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_BTree_int_User_pair_t_x;
Maybe_List_BTree_int_User_pair_t_x Just_List_BTree_int_User_pair_t_x (List_BTree_int_User_pair_t_x value );
Maybe_List_BTree_int_User_pair_t_x Nothing_List_BTree_int_User_pair_t_x ();
__attribute__((weak)) Maybe_List_BTree_int_User_pair_t_x Default_Maybe_List_BTree_int_User_pair_t_x () {
  return Nothing_List_BTree_int_User_pair_t_x ();
}
const Maybe_List_BTree_int_User_pair_t_x__H_Table * const get_Maybe_List_BTree_int_User_pair_t_x__H_Table ();
void free_Maybe_List_BTree_int_User_pair_t_x (Maybe_List_BTree_int_User_pair_t_x * this );
#endif /* __Maybe_List_BTree_int_User_pair_t_x__H_DECL__ */ 
#ifndef __Box_List_BTree_int_User_pair_t__H_DECL__
#define __Box_List_BTree_int_User_pair_t__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_List_BTree_int_User_pair_t Box_List_BTree_int_User_pair_t ;
typedef void (*free_Box_List_BTree_int_User_pair_t_t) (Box_List_BTree_int_User_pair_t * this );
typedef struct Box_List_BTree_int_User_pair_t__H_Table {
  free_Box_List_BTree_int_User_pair_t_t freeData ;
    Box_List_BTree_int_User_pair_t (*new) (List_BTree_int_User_pair_t_x pointer );
    Box_List_BTree_int_User_pair_t (*clone) (Box_List_BTree_int_User_pair_t rc );
    Maybe_List_BTree_int_User_pair_t_x (*take) (Box_List_BTree_int_User_pair_t * this );
    Maybe_List_BTree_int_User_pair_t_x (*get) (Box_List_BTree_int_User_pair_t rc );
} Box_List_BTree_int_User_pair_t__H_Table;
typedef struct Box_List_BTree_int_User_pair_t {
  const Box_List_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion491 */
    struct { /* ciciliStruct492 */
      List_BTree_int_User_pair_t_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct493 */
    } Gone , _ ;
  } __h_data ;
} Box_List_BTree_int_User_pair_t;
Box_List_BTree_int_User_pair_t __h_Hold_List_BTree_int_User_pair_t_x (List_BTree_int_User_pair_t_x * pointer , int * count , size_t address );
Box_List_BTree_int_User_pair_t Gone_List_BTree_int_User_pair_t_x ();
__attribute__((weak)) Box_List_BTree_int_User_pair_t Default_Box_List_BTree_int_User_pair_t () {
  return Gone_List_BTree_int_User_pair_t_x ();
}
Box_List_BTree_int_User_pair_t new_Box_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t_x pointer );
Box_List_BTree_int_User_pair_t clone_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t rc );
Maybe_List_BTree_int_User_pair_t_x take_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t * this );
Maybe_List_BTree_int_User_pair_t_x get_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t rc );
const Box_List_BTree_int_User_pair_t__H_Table * const get_Box_List_BTree_int_User_pair_t__H_Table ();
void free_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t * this );
#endif /* __Box_List_BTree_int_User_pair_t__H_DECL__ */ 
typedef Box_List_BTree_int_User_pair_t List_BTree_int_User_pair_t ;
typedef void (*free_List_BTree_int_User_pair_t_t) (List_BTree_int_User_pair_t_x * this );
typedef struct List_BTree_int_User_pair_t__H_Table {
  free_List_BTree_int_User_pair_t_t freeData ;
    BTree_int_User_pair_t * (*toArray) (List_BTree_int_User_pair_t list , BTree_int_User_pair_t term );
    List_BTree_int_User_pair_t (*wrap) (const BTree_int_User_pair_t item );
    List_BTree_int_User_pair_t (*pure) (const BTree_int_User_pair_t * buf , size_t len );
    size_t (*show) (CFile file , List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*copy) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*replaceAt) (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index );
    List_BTree_int_User_pair_t (*deleteAt) (List_BTree_int_User_pair_t list , size_t index );
    List_BTree_int_User_pair_t (*insertAt) (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , size_t index );
    List_BTree_int_User_pair_t (*replace) (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed );
    List_BTree_int_User_pair_t (*delete) (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t aimed );
    List_BTree_int_User_pair_t (*insert) (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , List_BTree_int_User_pair_t rlist );
    List_BTree_int_User_pair_t (*reverse) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*append) (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist );
    List_BTree_int_User_pair_t (*push) (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*take) (size_t len , List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*last) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*init) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*tail) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*drop) (size_t len , List_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*head) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*nthcdr) (size_t index , List_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*nth) (size_t index , List_BTree_int_User_pair_t list );
    size_t (*hasLen) (List_BTree_int_User_pair_t list , size_t desired );
    size_t (*len) (List_BTree_int_User_pair_t list );
} List_BTree_int_User_pair_t__H_Table;
typedef struct class_List_BTree_int_User_pair_t {
  const List_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion555 */
    struct { /* ciciliStruct556 */
      BTree_int_User_pair_t __h_0_mem ;
      List_BTree_int_User_pair_t __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct557 */
    } Nil , _ ;
  } __h_data ;
} class_List_BTree_int_User_pair_t;
List_BTree_int_User_pair_t BoxedCons_BTree_int_User_pair_t (BTree_int_User_pair_t head , List_BTree_int_User_pair_t tail );
List_BTree_int_User_pair_t BoxedNil_BTree_int_User_pair_t ();
__attribute__((weak)) List_BTree_int_User_pair_t Default_List_BTree_int_User_pair_t () {
  return BoxedNil_BTree_int_User_pair_t ();
}
BTree_int_User_pair_t * toArray_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t term );
List_BTree_int_User_pair_t wrap_List_BTree_int_User_pair_t (const BTree_int_User_pair_t item );
List_BTree_int_User_pair_t pure_List_BTree_int_User_pair_t (const BTree_int_User_pair_t * buf , size_t len );
size_t show_List_BTree_int_User_pair_t (CFile file , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index );
List_BTree_int_User_pair_t deleteAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t index );
List_BTree_int_User_pair_t insertAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , size_t index );
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed );
List_BTree_int_User_pair_t delete_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t aimed );
List_BTree_int_User_pair_t insert_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , List_BTree_int_User_pair_t rlist );
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist );
List_BTree_int_User_pair_t push_List_BTree_int_User_pair_t (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t take_List_BTree_int_User_pair_t (size_t len , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t tail_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (size_t len , List_BTree_int_User_pair_t list );
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list );
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list );
size_t hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t desired );
size_t len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t__H_Table * const get_List_BTree_int_User_pair_t__H_Table ();
void free_List_BTree_int_User_pair_t_x (List_BTree_int_User_pair_t_x * this );
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
  union { /* ciciliUnion657 */
    struct { /* ciciliStruct658 */
      List_BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct659 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_BTree_int_User_pair_t;
Maybe_List_BTree_int_User_pair_t Just_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t value );
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t ();
__attribute__((weak)) Maybe_List_BTree_int_User_pair_t Default_Maybe_List_BTree_int_User_pair_t () {
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
  union { /* ciciliUnion689 */
    struct { /* ciciliStruct690 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct691 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_int_User;
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value );
Maybe_BTree_int_User Nothing_BTree_int_User ();
__attribute__((weak)) Maybe_BTree_int_User Default_Maybe_BTree_int_User () {
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
  union { /* ciciliUnion721 */
    struct { /* ciciliStruct722 */
      BTree_int_User * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct723 */
    } Gone , _ ;
  } __h_data ;
} Rc_BTree_int_User;
Rc_BTree_int_User __h_Hold_BTree_int_User (BTree_int_User * pointer , int * count , size_t address );
Rc_BTree_int_User Gone_BTree_int_User ();
__attribute__((weak)) Rc_BTree_int_User Default_Rc_BTree_int_User () {
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
  union { /* ciciliUnion765 */
    struct { /* ciciliStruct766 */
      Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct767 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Rc_BTree_int_User;
Maybe_Rc_BTree_int_User Just_Rc_BTree_int_User (Rc_BTree_int_User value );
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User ();
__attribute__((weak)) Maybe_Rc_BTree_int_User Default_Maybe_Rc_BTree_int_User () {
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
typedef class_List_Rc_BTree_int_User * List_Rc_BTree_int_User_x ;
#ifndef __Maybe_List_Rc_BTree_int_User_x__H_DECL__
#define __Maybe_List_Rc_BTree_int_User_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_Rc_BTree_int_User_x Maybe_List_Rc_BTree_int_User_x ;
typedef void (*free_Maybe_List_Rc_BTree_int_User_x_t) (Maybe_List_Rc_BTree_int_User_x * this );
typedef struct Maybe_List_Rc_BTree_int_User_x__H_Table {
  free_Maybe_List_Rc_BTree_int_User_x_t freeData ;
} Maybe_List_Rc_BTree_int_User_x__H_Table;
typedef struct Maybe_List_Rc_BTree_int_User_x {
  const Maybe_List_Rc_BTree_int_User_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion798 */
    struct { /* ciciliStruct799 */
      List_Rc_BTree_int_User_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct800 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_Rc_BTree_int_User_x;
Maybe_List_Rc_BTree_int_User_x Just_List_Rc_BTree_int_User_x (List_Rc_BTree_int_User_x value );
Maybe_List_Rc_BTree_int_User_x Nothing_List_Rc_BTree_int_User_x ();
__attribute__((weak)) Maybe_List_Rc_BTree_int_User_x Default_Maybe_List_Rc_BTree_int_User_x () {
  return Nothing_List_Rc_BTree_int_User_x ();
}
const Maybe_List_Rc_BTree_int_User_x__H_Table * const get_Maybe_List_Rc_BTree_int_User_x__H_Table ();
void free_Maybe_List_Rc_BTree_int_User_x (Maybe_List_Rc_BTree_int_User_x * this );
#endif /* __Maybe_List_Rc_BTree_int_User_x__H_DECL__ */ 
#ifndef __Box_List_Rc_BTree_int_User__H_DECL__
#define __Box_List_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_List_Rc_BTree_int_User Box_List_Rc_BTree_int_User ;
typedef void (*free_Box_List_Rc_BTree_int_User_t) (Box_List_Rc_BTree_int_User * this );
typedef struct Box_List_Rc_BTree_int_User__H_Table {
  free_Box_List_Rc_BTree_int_User_t freeData ;
    Box_List_Rc_BTree_int_User (*new) (List_Rc_BTree_int_User_x pointer );
    Box_List_Rc_BTree_int_User (*clone) (Box_List_Rc_BTree_int_User rc );
    Maybe_List_Rc_BTree_int_User_x (*take) (Box_List_Rc_BTree_int_User * this );
    Maybe_List_Rc_BTree_int_User_x (*get) (Box_List_Rc_BTree_int_User rc );
} Box_List_Rc_BTree_int_User__H_Table;
typedef struct Box_List_Rc_BTree_int_User {
  const Box_List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion830 */
    struct { /* ciciliStruct831 */
      List_Rc_BTree_int_User_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct832 */
    } Gone , _ ;
  } __h_data ;
} Box_List_Rc_BTree_int_User;
Box_List_Rc_BTree_int_User __h_Hold_List_Rc_BTree_int_User_x (List_Rc_BTree_int_User_x * pointer , int * count , size_t address );
Box_List_Rc_BTree_int_User Gone_List_Rc_BTree_int_User_x ();
__attribute__((weak)) Box_List_Rc_BTree_int_User Default_Box_List_Rc_BTree_int_User () {
  return Gone_List_Rc_BTree_int_User_x ();
}
Box_List_Rc_BTree_int_User new_Box_List_Rc_BTree_int_User (List_Rc_BTree_int_User_x pointer );
Box_List_Rc_BTree_int_User clone_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User rc );
Maybe_List_Rc_BTree_int_User_x take_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User * this );
Maybe_List_Rc_BTree_int_User_x get_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User rc );
const Box_List_Rc_BTree_int_User__H_Table * const get_Box_List_Rc_BTree_int_User__H_Table ();
void free_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User * this );
#endif /* __Box_List_Rc_BTree_int_User__H_DECL__ */ 
typedef Box_List_Rc_BTree_int_User List_Rc_BTree_int_User ;
typedef void (*free_List_Rc_BTree_int_User_t) (List_Rc_BTree_int_User_x * this );
typedef struct List_Rc_BTree_int_User__H_Table {
  free_List_Rc_BTree_int_User_t freeData ;
    Rc_BTree_int_User * (*toArray) (List_Rc_BTree_int_User list , Rc_BTree_int_User term );
    List_Rc_BTree_int_User (*wrap) (const Rc_BTree_int_User item );
    List_Rc_BTree_int_User (*pure) (const Rc_BTree_int_User * buf , size_t len );
    size_t (*show) (CFile file , List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*copy) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*replaceAt) (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index );
    List_Rc_BTree_int_User (*deleteAt) (List_Rc_BTree_int_User list , size_t index );
    List_Rc_BTree_int_User (*insertAt) (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , size_t index );
    List_Rc_BTree_int_User (*replace) (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed );
    List_Rc_BTree_int_User (*delete) (List_Rc_BTree_int_User list , List_Rc_BTree_int_User aimed );
    List_Rc_BTree_int_User (*insert) (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , List_Rc_BTree_int_User rlist );
    List_Rc_BTree_int_User (*reverse) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*append) (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist );
    List_Rc_BTree_int_User (*push) (Rc_BTree_int_User item , List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*take) (size_t len , List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*last) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*init) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*tail) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*drop) (size_t len , List_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*head) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*nthcdr) (size_t index , List_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*nth) (size_t index , List_Rc_BTree_int_User list );
    size_t (*hasLen) (List_Rc_BTree_int_User list , size_t desired );
    size_t (*len) (List_Rc_BTree_int_User list );
} List_Rc_BTree_int_User__H_Table;
typedef struct class_List_Rc_BTree_int_User {
  const List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion894 */
    struct { /* ciciliStruct895 */
      Rc_BTree_int_User __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct896 */
    } Nil , _ ;
  } __h_data ;
} class_List_Rc_BTree_int_User;
List_Rc_BTree_int_User BoxedCons_Rc_BTree_int_User (Rc_BTree_int_User head , List_Rc_BTree_int_User tail );
List_Rc_BTree_int_User BoxedNil_Rc_BTree_int_User ();
__attribute__((weak)) List_Rc_BTree_int_User Default_List_Rc_BTree_int_User () {
  return BoxedNil_Rc_BTree_int_User ();
}
Rc_BTree_int_User * toArray_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User term );
List_Rc_BTree_int_User wrap_List_Rc_BTree_int_User (const Rc_BTree_int_User item );
List_Rc_BTree_int_User pure_List_Rc_BTree_int_User (const Rc_BTree_int_User * buf , size_t len );
size_t show_List_Rc_BTree_int_User (CFile file , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index );
List_Rc_BTree_int_User deleteAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t index );
List_Rc_BTree_int_User insertAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , size_t index );
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed );
List_Rc_BTree_int_User delete_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , List_Rc_BTree_int_User aimed );
List_Rc_BTree_int_User insert_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , List_Rc_BTree_int_User rlist );
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist );
List_Rc_BTree_int_User push_List_Rc_BTree_int_User (Rc_BTree_int_User item , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User take_List_Rc_BTree_int_User (size_t len , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User tail_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (size_t len , List_Rc_BTree_int_User list );
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list );
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list );
size_t hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t desired );
size_t len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User__H_Table * const get_List_Rc_BTree_int_User__H_Table ();
void free_List_Rc_BTree_int_User_x (List_Rc_BTree_int_User_x * this );
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
  union { /* ciciliUnion996 */
    struct { /* ciciliStruct997 */
      List_Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct998 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_Rc_BTree_int_User;
Maybe_List_Rc_BTree_int_User Just_List_Rc_BTree_int_User (List_Rc_BTree_int_User value );
Maybe_List_Rc_BTree_int_User Nothing_List_Rc_BTree_int_User ();
__attribute__((weak)) Maybe_List_Rc_BTree_int_User Default_Maybe_List_Rc_BTree_int_User () {
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
  union { /* ciciliUnion1033 */
    struct { /* ciciliStruct1034 */
    } Functor , _ ;
  } __h_data ;
} Functor_List_Rc_BTree_int_User;
Functor_List_Rc_BTree_int_User Functor_List_Rc_BTree_int_User_ctor ();
__attribute__((weak)) Functor_List_Rc_BTree_int_User Default_Functor_List_Rc_BTree_int_User () {
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
  union { /* ciciliUnion1093 */
    struct { /* ciciliStruct1094 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Branch , _2 ;
    struct { /* ciciliStruct1095 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Internal , _1 ;
    struct { /* ciciliStruct1096 */
      List_BTree_int_User_pair_t __h_0_mem ;
    } Leaf , _ ;
  } __h_data ;
} class_BTree_int_User;
BTree_int_User Branch_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children );
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children );
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items );
__attribute__((weak)) BTree_int_User Default_BTree_int_User (List_BTree_int_User_pair_t items ) {
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
  return (((lkey  <  rkey  )) ? LT () : (((lkey  ==  rkey  )) ? EQ () : GT ()));
}
#ifndef __Maybe_User__H_IMPL__
#define __Maybe_User__H_IMPL__
void free_Maybe_User (Maybe_User * this ) {
}
const Maybe_User__H_Table * const get_Maybe_User__H_Table () {
  static const Maybe_User__H_Table table  = { free_Maybe_User };
  return (&table );
}
Maybe_User Just_User (User value ) {
  { /* cicili#Let1184 */
    Maybe_User instance  = ((Maybe_User){ get_Maybe_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_User Nothing_User () {
  { /* cicili#Let1189 */
    Maybe_User instance  = ((Maybe_User){ get_Maybe_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_User__H_IMPL__ */ 
#ifndef __List_User__H_IMPL__
#define __List_User__H_IMPL__
User * toArray_List_User (List_User list , User term ) {
  User * array (List_User list , size_t count ) {
    return ({ /* cicili#Let1199 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let1201 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1202 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1204 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1209 */
              ({ /* cicili#Let1211 */
                User * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let1215 */
              // ----------
              ;
              ({ /* cicili#Progn1217 */
                ({ /* cicili#Let1219 */
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
  return Cons_User (item , Nil_User ());
}
List_User pure_List_User (const User * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_User () : ({ /* cicili#Let1230 */
        User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_User () : Cons_User (item , pure_List_User ((++buf ), (--len ))));
      }));
}
size_t show_List_User (CFile file , List_User list ) {
  return ({ /* cicili#Let1240 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1242 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1243 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1245 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1250 */
            (({ /* cicili#Let1254 */
                // ----------
                ;
                ({ /* cicili#Let1256 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1260 */
                      (({ /* cicili#Let1266 */
                          typeof((head . __h_0_mem )) name ;
                          typeof((head . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let1268 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn1269 */
                                  (name  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1271 */
                                  (salary  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1276 */
                                (fprintf (file , "(") +  show_String (file , name ) +  fprintf (file , ", %d)", salary ) );
                              }) : ({ /* cicili#Let1280 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1282 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let1286 */
                      // ----------
                      ;
                      ({ /* cicili#Progn1288 */
                        ({ /* cicili#Let1294 */
                          typeof((head . __h_0_mem )) name ;
                          typeof((head . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let1296 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn1297 */
                                  (name  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1299 */
                                  (salary  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1304 */
                                (fprintf (file , "(") +  show_String (file , name ) +  fprintf (file , ", %d)", salary ) );
                              }) : ({ /* cicili#Let1308 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1310 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_User (file , tail ) );
          }) : ({ /* cicili#Let1315 */
            // ----------
            ;
            ({ /* cicili#Progn1317 */
              0;
            });
          }));
      });
    });
}
List_User copy_List_User (List_User list ) {
  return ({ /* cicili#Let1323 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1325 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1326 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1328 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1333 */
            Cons_User (head , copy_List_User (tail ));
          }) : ({ /* cicili#Let1339 */
            // ----------
            ;
            ({ /* cicili#Progn1341 */
              Nil_User ();
            });
          }));
      });
    });
}
List_User replaceAt_List_User (List_User list , User item , size_t index ) {
  return ({ /* cicili#Let1348 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1350 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1351 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1353 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1358 */
            Cons_User (head , replaceAt_List_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let1364 */
            // ----------
            ;
            ({ /* cicili#Progn1366 */
              ({ /* cicili#Let1370 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let1372 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1373 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1378 */
                      Cons_User (item , copy_List_User (taill ));
                    }) : ({ /* cicili#Let1384 */
                      // ----------
                      ;
                      ({ /* cicili#Progn1386 */
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
List_User deleteAt_List_User (List_User list , size_t index ) {
  return ({ /* cicili#Let1393 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1395 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1396 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1398 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1403 */
            Cons_User (head , deleteAt_List_User (tail , (index  -  1 )));
          }) : ({ /* cicili#Let1409 */
            // ----------
            ;
            ({ /* cicili#Progn1411 */
              ({ /* cicili#Let1415 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let1417 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1418 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1423 */
                      copy_List_User (taill );
                    }) : ({ /* cicili#Let1428 */
                      // ----------
                      ;
                      ({ /* cicili#Progn1430 */
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
List_User insertAt_List_User (List_User list , User item , size_t index ) {
  return ({ /* cicili#Let1437 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1439 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1440 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1442 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1447 */
            Cons_User (head , insertAt_List_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let1453 */
            // ----------
            ;
            ({ /* cicili#Progn1455 */
              Cons_User (item , copy_List_User (list ));
            });
          }));
      });
    });
}
List_User replace_List_User (List_User list , User item , List_User aimed ) {
  return ({ /* cicili#Let1463 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1465 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1466 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1468 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1473 */
            Cons_User (head , replace_List_User (tail , item , aimed ));
          }) : ({ /* cicili#Let1479 */
            // ----------
            ;
            ({ /* cicili#Progn1481 */
              ({ /* cicili#Let1485 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let1487 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1488 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1493 */
                      Cons_User (item , copy_List_User (taill ));
                    }) : ({ /* cicili#Let1499 */
                      // ----------
                      ;
                      ({ /* cicili#Progn1501 */
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
  return ({ /* cicili#Let1508 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1510 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1511 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1513 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1518 */
            Cons_User (head , delete_List_User (tail , aimed ));
          }) : ({ /* cicili#Let1524 */
            // ----------
            ;
            ({ /* cicili#Progn1526 */
              ({ /* cicili#Let1530 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let1532 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1533 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1538 */
                      copy_List_User (taill );
                    }) : ({ /* cicili#Let1543 */
                      // ----------
                      ;
                      ({ /* cicili#Progn1545 */
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
  return ({ /* cicili#Let1552 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1554 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1555 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1557 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1562 */
            Cons_User (head , insert_List_User (tail , item , rlist ));
          }) : ({ /* cicili#Let1568 */
            // ----------
            ;
            ({ /* cicili#Progn1570 */
              Cons_User (item , copy_List_User (rlist ));
            });
          }));
      });
    });
}
List_User reverse_List_User (List_User list ) {
  List_User _reverse (List_User list , List_User rlist ) {
    return ({ /* cicili#Let1579 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let1581 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1582 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1584 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1589 */
              _reverse (tail , Cons_User (head , rlist ));
            }) : ({ /* cicili#Let1594 */
              // ----------
              ;
              ({ /* cicili#Progn1596 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let1600 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1602 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1603 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1605 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1610 */
            _reverse (tail , Cons_User (head , Nil_User ()));
          }) : ({ /* cicili#Let1616 */
            // ----------
            ;
            ({ /* cicili#Progn1618 */
              list ;
            });
          }));
      });
    });
}
List_User append_List_User (List_User llist , List_User rlist ) {
  return ({ /* cicili#Let1624 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1626 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1627 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1629 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1634 */
            Cons_User (head , append_List_User (tail , rlist ));
          }) : ({ /* cicili#Let1640 */
            // ----------
            ;
            ({ /* cicili#Progn1642 */
              copy_List_User (rlist );
            });
          }));
      });
    });
}
List_User push_List_User (User item , List_User list ) {
  return Cons_User (item , copy_List_User (list ));
}
List_User take_List_User (size_t len , List_User list ) {
  return (((len  <=  0 )) ? Nil_User () : ({ /* cicili#Let1655 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let1657 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1658 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1660 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1665 */
              Cons_User (head , take_List_User ((--len ), tail ));
            }) : ({ /* cicili#Let1671 */
              // ----------
              ;
              ({ /* cicili#Progn1673 */
                Nil_User ();
              });
            }));
        });
      }));
}
List_User last_List_User (List_User list ) {
  return ({ /* cicili#Let1680 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1682 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1683 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1688 */
            ({ /* cicili#Let1692 */
              // ----------
              ;
              ({ /* cicili#Let1694 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn1698 */
                    copy_List_User (list );
                  }) : ({ /* cicili#Let1703 */
                    // ----------
                    ;
                    ({ /* cicili#Progn1705 */
                      last_List_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1710 */
            // ----------
            ;
            ({ /* cicili#Progn1712 */
              Nil_User ();
            });
          }));
      });
    });
}
List_User init_List_User (List_User list ) {
  return ({ /* cicili#Let1720 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1722 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1723 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1725 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1730 */
            Cons_User (head , init_List_User (tail ));
          }) : ({ /* cicili#Let1736 */
            // ----------
            ;
            ({ /* cicili#Progn1738 */
              Nil_User ();
            });
          }));
      });
    });
}
size_t hasLen_List_User (List_User list , size_t desired ) {
  return ({ /* cicili#Let1745 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1747 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1748 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1753 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_User (tail , (--desired )) ));
          }) : ({ /* cicili#Let1759 */
            // ----------
            ;
            ({ /* cicili#Progn1761 */
              0;
            });
          }));
      });
    });
}
size_t len_List_User (List_User list ) {
  return ({ /* cicili#Let1767 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1769 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1770 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1775 */
            (1 +  len_List_User (tail ) );
          }) : ({ /* cicili#Let1780 */
            // ----------
            ;
            ({ /* cicili#Progn1782 */
              0;
            });
          }));
      });
    });
}
List_User tail_List_User (List_User list ) {
  return drop_List_User (1, list );
}
List_User drop_List_User (size_t len , List_User list ) {
  return (((len  <=  0 )) ? copy_List_User (list ) : ({ /* cicili#Let1793 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let1795 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1796 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1801 */
              drop_List_User ((--len ), tail );
            }) : ({ /* cicili#Let1806 */
              // ----------
              ;
              ({ /* cicili#Progn1808 */
                Nil_User ();
              });
            }));
        });
      }));
}
Maybe_User head_List_User (List_User list ) {
  return ({ /* cicili#Let1816 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let1818 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1819 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1824 */
            Just_User (head );
          }) : ({ /* cicili#Let1829 */
            // ----------
            ;
            ({ /* cicili#Progn1831 */
              Nothing_User ();
            });
          }));
      });
    });
}
List_User nthcdr_List_User (size_t index , List_User list ) {
  return ({ /* cicili#Let1838 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1840 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1841 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1846 */
            nthcdr_List_User ((--index ), tail );
          }) : ({ /* cicili#Let1851 */
            // ----------
            ;
            ({ /* cicili#Progn1853 */
              list ;
            });
          }));
      });
    });
}
Maybe_User nth_List_User (size_t index , List_User list ) {
  return ({ /* cicili#Let1860 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1862 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1863 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1865 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1870 */
            (((index  ==  0 )) ? Just_User (head ) : (((index  <  0 )) ? Nothing_User () : nth_List_User ((--index ), tail )));
          }) : ({ /* cicili#Let1879 */
            // ----------
            ;
            ({ /* cicili#Progn1881 */
              Nothing_User ();
            });
          }));
      });
    });
}
void free_List_User (List_User * this_ptr ) {
  { /* cicili#Let1886 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1890 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1892 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1893 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block1899 */
            { /* cicili#Block1901 */
              free (this );
              free_List_User ((&tail ));
            }
          }
        else
          { /* cicili#Let1909 */
            // ----------
            ;
            ({ /* cicili#Let1911 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block1916 */
                  { /* cicili#Block1918 */
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
  { /* cicili#Let1929 */
    List_User instance  = malloc (sizeof(class_List_User));
    // ----------
    (*instance ) = ((class_List_User){ get_List_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_User Nil_User () {
  { /* cicili#Let1935 */
    List_User instance  = malloc (sizeof(class_List_User));
    // ----------
    (*instance ) = ((class_List_User){ get_List_User__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_User__H_IMPL__ */ 
#ifndef __Maybe_List_User__H_IMPL__
#define __Maybe_List_User__H_IMPL__
void free_Maybe_List_User (Maybe_List_User * this ) {
}
const Maybe_List_User__H_Table * const get_Maybe_List_User__H_Table () {
  static const Maybe_List_User__H_Table table  = { free_Maybe_List_User };
  return (&table );
}
Maybe_List_User Just_List_User (List_User value ) {
  { /* cicili#Let1952 */
    Maybe_List_User instance  = ((Maybe_List_User){ get_Maybe_List_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_User Nothing_List_User () {
  { /* cicili#Let1957 */
    Maybe_List_User instance  = ((Maybe_List_User){ get_Maybe_List_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_User__H_IMPL__ */ 
#ifndef __BTree_int_User_Error__H_IMPL__
#define __BTree_int_User_Error__H_IMPL__
void show_BTree_int_User_Error (BTree_int_User_Error error ) {
  { /* cicili#Let1970 */
    // ----------
    ;
    ({ /* cicili#Let1972 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block1977 */
          printf ("invalid B-Tree object");
        }
      else
        { /* cicili#Let1982 */
          typeof((((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem )) order ;
          // ----------
          ;
          ({ /* cicili#Let1984 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* cicili#Progn1985 */
                  (order  =  (((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block1991 */
                printf ("invalid B-Tree order: %zu", order );
              }
            else
              { /* cicili#Let1996 */
                typeof((((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let1998 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* cicili#Progn1999 */
                        (item  =  (((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block2005 */
                      { /* cicili#Block2007 */
                        printf ("unique key: ");
                        ({ /* cicili#Let2014 */
                          typeof((item . __h_0_mem )) id ;
                          typeof((item . __h_1_mem )) __h_match2012_1_arg ;
                          typeof((__h_match2012_1_arg . __h_0_mem )) name ;
                          typeof((__h_match2012_1_arg . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let2016 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2017 */
                                    (id  =  (item . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2019 */
                                    (__h_match2012_1_arg  =  (item . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn2021 */
                                      (name  =  (__h_match2012_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2023 */
                                      (salary  =  (__h_match2012_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2028 */
                                (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                              }) : ({ /* cicili#Let2032 */
                                // ----------
                                ;
                                ({ /* cicili#Progn2034 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* cicili#Let2039 */
                      typeof((((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem )) key ;
                      // ----------
                      ;
                      ({ /* cicili#Let2041 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* cicili#Progn2042 */
                              (key  =  (((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block2048 */
                            { /* cicili#Block2050 */
                              printf ("key not found: ");
                              fprintf (stdout , "%d", key );
                            }
                          }
                        else
                          { /* cicili#Let2058 */
                            // ----------
                            ;
                            ({ /* cicili#Let2060 */
                              bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CONS_t  ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block2065 */
                                  { /* cicili#Block2067 */
                                    printf ("dead cons");
                                  }
                                }
                              else
                                { /* cicili#Let2072 */
                                  typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem )) item ;
                                  typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem )) index ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2074 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* cicili#Progn2075 */
                                            (item  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn2077 */
                                            (index  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block2083 */
                                        { /* cicili#Block2085 */
                                          printf ("dead child at index: %zu of item: ", index );
                                          ({ /* cicili#Let2092 */
                                            typeof((item . __h_0_mem )) id ;
                                            typeof((item . __h_1_mem )) __h_match2090_1_arg ;
                                            typeof((__h_match2090_1_arg . __h_0_mem )) name ;
                                            typeof((__h_match2090_1_arg . __h_1_mem )) salary ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let2094 */
                                              bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2095 */
                                                      (id  =  (item . __h_0_mem ) );
                                                      true ;
                                                    }) &&  ({ /* cicili#Progn2097 */
                                                      (__h_match2090_1_arg  =  (item . __h_1_mem ) );
                                                      true ;
                                                    }) ) &&  (true  &&  (({ /* cicili#Progn2099 */
                                                        (name  =  (__h_match2090_1_arg . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2101 */
                                                        (salary  =  (__h_match2090_1_arg . __h_1_mem ) );
                                                        true ;
                                                      }) ) ) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn2106 */
                                                  (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                                                }) : ({ /* cicili#Let2110 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn2112 */
                                                    0;
                                                  });
                                                }));
                                            });
                                          });
                                        }
                                      }
                                    else
                                      { /* cicili#Let2117 */
                                        typeof((((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem )) branch ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2119 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* cicili#Progn2120 */
                                                (branch  =  (((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block2126 */
                                              { /* cicili#Block2128 */
                                                printf ("invalid branch: ");
                                                (branch -> __h_table -> show )(stdout , branch );
                                              }
                                            }
                                          else
                                            { /* cicili#Let2135 */
                                              typeof((((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem )) reason ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2137 */
                                                bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* cicili#Progn2138 */
                                                      (reason  =  (((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                if (__h_case_result )
                                                  { /* cicili#Block2144 */
                                                    printf ("borrow error: %s", reason );
                                                  }
                                                else
                                                  { /* cicili#Let2149 */
                                                    // ----------
                                                    ;
                                                    { /* cicili#Block2151 */
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
    });
  }
}
void free_BTree_int_User_Error (BTree_int_User_Error * this ) {
}
const BTree_int_User_Error__H_Table * const get_BTree_int_User_Error__H_Table () {
  static const BTree_int_User_Error__H_Table table  = { free_BTree_int_User_Error , show_BTree_int_User_Error };
  return (&table );
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_OBJECT () {
  { /* cicili#Let2163 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (size_t order ) {
  { /* cicili#Let2168 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item ) {
  { /* cicili#Let2173 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key ) {
  { /* cicili#Let2179 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , size_t index ) {
  { /* cicili#Let2184 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch ) {
  { /* cicili#Let2190 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason ) {
  { /* cicili#Let2195 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_CANT_BORROW_t , .__h_data.ERR_CANT_BORROW = { reason }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CONS () {
  { /* cicili#Let2200 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __BTree_int_User_Error__H_IMPL__ */ 
#ifndef __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__
#define __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__
void free_Either_BTree_int_User_Error_BTree_int_User (Either_BTree_int_User_Error_BTree_int_User * this ) {
}
const Either_BTree_int_User_Error_BTree_int_User__H_Table * const get_Either_BTree_int_User_Error_BTree_int_User__H_Table () {
  static const Either_BTree_int_User_Error_BTree_int_User__H_Table table  = { free_Either_BTree_int_User_Error_BTree_int_User };
  return (&table );
}
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value ) {
  { /* cicili#Let2216 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* cicili#Let2221 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h___t , .__h_data._ = { error }});
    // ----------
    return instance ;
  }
}
#endif /* __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_BTree_int_User__H_IMPL__
#define __Maybe_BTree_int_User__H_IMPL__
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this ) {
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table () {
  static const Maybe_BTree_int_User__H_Table table  = { free_Maybe_BTree_int_User };
  return (&table );
}
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value ) {
  { /* cicili#Let2237 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let2242 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_BTree_int_User_pair_t__H_IMPL__
#define __Maybe_BTree_int_User_pair_t__H_IMPL__
void free_Maybe_BTree_int_User_pair_t (Maybe_BTree_int_User_pair_t * this ) {
}
const Maybe_BTree_int_User_pair_t__H_Table * const get_Maybe_BTree_int_User_pair_t__H_Table () {
  static const Maybe_BTree_int_User_pair_t__H_Table table  = { free_Maybe_BTree_int_User_pair_t };
  return (&table );
}
Maybe_BTree_int_User_pair_t Just_BTree_int_User_pair_t (BTree_int_User_pair_t value ) {
  { /* cicili#Let2260 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
  { /* cicili#Let2265 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __List_BTree_int_User_pair_t__H_IMPL__
#define __List_BTree_int_User_pair_t__H_IMPL__
#ifndef __Maybe_List_BTree_int_User_pair_t_x__H_IMPL__
#define __Maybe_List_BTree_int_User_pair_t_x__H_IMPL__
void free_Maybe_List_BTree_int_User_pair_t_x (Maybe_List_BTree_int_User_pair_t_x * this ) {
}
const Maybe_List_BTree_int_User_pair_t_x__H_Table * const get_Maybe_List_BTree_int_User_pair_t_x__H_Table () {
  static const Maybe_List_BTree_int_User_pair_t_x__H_Table table  = { free_Maybe_List_BTree_int_User_pair_t_x };
  return (&table );
}
Maybe_List_BTree_int_User_pair_t_x Just_List_BTree_int_User_pair_t_x (List_BTree_int_User_pair_t_x value ) {
  { /* cicili#Let2285 */
    Maybe_List_BTree_int_User_pair_t_x instance  = ((Maybe_List_BTree_int_User_pair_t_x){ get_Maybe_List_BTree_int_User_pair_t_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t_x Nothing_List_BTree_int_User_pair_t_x () {
  { /* cicili#Let2290 */
    Maybe_List_BTree_int_User_pair_t_x instance  = ((Maybe_List_BTree_int_User_pair_t_x){ get_Maybe_List_BTree_int_User_pair_t_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_BTree_int_User_pair_t_x__H_IMPL__ */ 
#ifndef __Box_List_BTree_int_User_pair_t__H_IMPL__
#define __Box_List_BTree_int_User_pair_t__H_IMPL__
Box_List_BTree_int_User_pair_t new_Box_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t_x pointer ) {
  return ({ /* cicili#Let2297 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_BTree_int_User_pair_t_x *)malloc (sizeof(List_BTree_int_User_pair_t_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_BTree_int_User_pair_t_x (holder , count , ((size_t)pointer ));
    });
}
Box_List_BTree_int_User_pair_t clone_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t rc ) {
  return ({ /* cicili#Let2306 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let2308 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2309 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2311 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn2313 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2318 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn2321 */
                (++(*count ));
                __h_Hold_List_BTree_int_User_pair_t_x (pointer , count , address );
              }) : Gone_List_BTree_int_User_pair_t_x ());
          }) : ({ /* cicili#Let2327 */
            // ----------
            ;
            ({ /* cicili#Progn2329 */
              Gone_List_BTree_int_User_pair_t_x ();
            });
          }));
      });
    });
}
Maybe_List_BTree_int_User_pair_t_x take_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t * this ) {
  return ({ /* cicili#Let2337 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let2339 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2340 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2342 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn2344 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2349 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let2353 */
                __auto_type result  = Just_List_BTree_int_User_pair_t_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block2359 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_List_BTree_int_User_pair_t_x ());
          }) : ({ /* cicili#Let2364 */
            // ----------
            ;
            ({ /* cicili#Progn2366 */
              Nothing_List_BTree_int_User_pair_t_x ();
            });
          }));
      });
    });
}
Maybe_List_BTree_int_User_pair_t_x get_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t rc ) {
  return ({ /* cicili#Let2374 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let2376 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2377 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2379 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn2381 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2386 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_BTree_int_User_pair_t_x ((*pointer )) : Nothing_List_BTree_int_User_pair_t_x ());
          }) : ({ /* cicili#Let2393 */
            // ----------
            ;
            ({ /* cicili#Progn2395 */
              Nothing_List_BTree_int_User_pair_t_x ();
            });
          }));
      });
    });
}
void free_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t * this ) {
  { /* cicili#Let2404 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let2406 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2407 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2409 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn2411 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block2417 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block2420 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_List_BTree_int_User_pair_t_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block2428 */
                if ((*count ) ==  1 )
                  { /* cicili#Block2431 */
                    free_List_BTree_int_User_pair_t_x (pointer );
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_List_BTree_int_User_pair_t_x ();
                  }
                else
                  (--(*count ));
              }
              }        }
      else
        { /* cicili#Let2441 */
          // ----------
          ;
          ({ /* cicili#Let2443 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block2448 */
              }
          });
        }
    });
  }
}
const Box_List_BTree_int_User_pair_t__H_Table * const get_Box_List_BTree_int_User_pair_t__H_Table () {
  static const Box_List_BTree_int_User_pair_t__H_Table table  = { free_Box_List_BTree_int_User_pair_t , new_Box_List_BTree_int_User_pair_t , clone_Box_List_BTree_int_User_pair_t , take_Box_List_BTree_int_User_pair_t , get_Box_List_BTree_int_User_pair_t };
  return (&table );
}
Box_List_BTree_int_User_pair_t __h_Hold_List_BTree_int_User_pair_t_x (List_BTree_int_User_pair_t_x * pointer , int * count , size_t address ) {
  { /* cicili#Let2459 */
    Box_List_BTree_int_User_pair_t instance  = ((Box_List_BTree_int_User_pair_t){ get_Box_List_BTree_int_User_pair_t__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_List_BTree_int_User_pair_t Gone_List_BTree_int_User_pair_t_x () {
  { /* cicili#Let2464 */
    Box_List_BTree_int_User_pair_t instance  = ((Box_List_BTree_int_User_pair_t){ get_Box_List_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_List_BTree_int_User_pair_t__H_IMPL__ */ 
BTree_int_User_pair_t * toArray_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t term ) {
  BTree_int_User_pair_t * array (List_BTree_int_User_pair_t list , size_t count ) {
    return ({ /* cicili#Let2471 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let2475 */
          __auto_type match2474  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match2474 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let2478 */
            bool __h_case_result  = (true  &&  (((match2474 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2479 */
                  (unboxed  =  (((match2474 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn2484 */
                ({ /* cicili#Let2488 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let2490 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2491 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn2493 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn2498 */
                        ({ /* cicili#Let2500 */
                          BTree_int_User_pair_t * arr  = array (tail , (count  +  1 ));
                          // ----------
                          arr [count ] = head ;
                          arr ;
                        });
                      }) : ({ /* cicili#Let2504 */
                        // ----------
                        ;
                        ({ /* cicili#Progn2506 */
                          ({ /* cicili#Let2508 */
                            BTree_int_User_pair_t * arr  = calloc (count , sizeof(BTree_int_User_pair_t));
                            // ----------
                            arr [(count  -  1 )] = term ;
                            arr ;
                          });
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let2512 */
                // ----------
                ;
                ({ /* cicili#Progn2514 */
                  ({ /* cicili#Let2516 */
                    BTree_int_User_pair_t * arr  = calloc (count , sizeof(BTree_int_User_pair_t));
                    // ----------
                    arr [(count  -  1 )] = term ;
                    arr ;
                  });
                });
              }));
          });
        });
      });
  }
  return array (list , 0);
}
List_BTree_int_User_pair_t wrap_List_BTree_int_User_pair_t (const BTree_int_User_pair_t item ) {
  return BoxedCons_BTree_int_User_pair_t (item , BoxedNil_BTree_int_User_pair_t ());
}
List_BTree_int_User_pair_t pure_List_BTree_int_User_pair_t (const BTree_int_User_pair_t * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? BoxedNil_BTree_int_User_pair_t () : ({ /* cicili#Let2527 */
        BTree_int_User_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? BoxedNil_BTree_int_User_pair_t () : BoxedCons_BTree_int_User_pair_t (item , pure_List_BTree_int_User_pair_t ((++buf ), (--len ))));
      }));
}
size_t show_List_BTree_int_User_pair_t (CFile file , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2536 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let2540 */
        __auto_type match2539  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2539 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2543 */
          bool __h_case_result  = (true  &&  (((match2539 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2544 */
                (unboxed  =  (((match2539 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2549 */
              ({ /* cicili#Let2553 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let2555 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2556 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn2558 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2563 */
                      (({ /* cicili#Let2566 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let2570 */
                            __auto_type match2569  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match2569 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let2573 */
                              bool __h_case_result  = (true  &&  (((match2569 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2574 */
                                    (unboxed  =  (((match2569 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn2579 */
                                  ({ /* cicili#Let2583 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let2585 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn2589 */
                                          (({ /* cicili#Let2596 */
                                              typeof((head . __h_0_mem )) id ;
                                              typeof((head . __h_1_mem )) __h_match2594_1_arg ;
                                              typeof((__h_match2594_1_arg . __h_0_mem )) name ;
                                              typeof((__h_match2594_1_arg . __h_1_mem )) salary ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2598 */
                                                bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2599 */
                                                        (id  =  (head . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2601 */
                                                        (__h_match2594_1_arg  =  (head . __h_1_mem ) );
                                                        true ;
                                                      }) ) &&  (true  &&  (({ /* cicili#Progn2603 */
                                                          (name  =  (__h_match2594_1_arg . __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2605 */
                                                          (salary  =  (__h_match2594_1_arg . __h_1_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2610 */
                                                    (fprintf (file , "(id: %d, name: ", id ) +  show_String (file , name ) +  fprintf (file , ", salary: %d)", salary ) );
                                                  }) : ({ /* cicili#Let2614 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2616 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            }) +  fprintf (file , "%s", " ") );
                                        }) : ({ /* cicili#Let2620 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn2622 */
                                            ({ /* cicili#Let2629 */
                                              typeof((head . __h_0_mem )) id ;
                                              typeof((head . __h_1_mem )) __h_match2627_1_arg ;
                                              typeof((__h_match2627_1_arg . __h_0_mem )) name ;
                                              typeof((__h_match2627_1_arg . __h_1_mem )) salary ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2631 */
                                                bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2632 */
                                                        (id  =  (head . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2634 */
                                                        (__h_match2627_1_arg  =  (head . __h_1_mem ) );
                                                        true ;
                                                      }) ) &&  (true  &&  (({ /* cicili#Progn2636 */
                                                          (name  =  (__h_match2627_1_arg . __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2638 */
                                                          (salary  =  (__h_match2627_1_arg . __h_1_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2643 */
                                                    (fprintf (file , "(id: %d, name: ", id ) +  show_String (file , name ) +  fprintf (file , ", salary: %d)", salary ) );
                                                  }) : ({ /* cicili#Let2647 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2649 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            });
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let2653 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn2655 */
                                    0;
                                  });
                                }));
                            });
                          });
                        }) +  show_List_BTree_int_User_pair_t (file , tail ) );
                    }) : ({ /* cicili#Let2660 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2662 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2666 */
              // ----------
              ;
              ({ /* cicili#Progn2668 */
                0;
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2673 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let2677 */
        __auto_type match2676  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2676 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2680 */
          bool __h_case_result  = (true  &&  (((match2676 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2681 */
                (unboxed  =  (((match2676 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2686 */
              ({ /* cicili#Let2690 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let2692 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2693 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn2695 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2700 */
                      BoxedCons_BTree_int_User_pair_t (head , copy_List_BTree_int_User_pair_t (tail ));
                    }) : ({ /* cicili#Let2706 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2708 */
                        BoxedNil_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2713 */
              // ----------
              ;
              ({ /* cicili#Progn2715 */
                BoxedNil_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index ) {
  return ({ /* cicili#Let2721 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let2725 */
        __auto_type match2724  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2724 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2728 */
          bool __h_case_result  = (true  &&  (((match2724 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2729 */
                (unboxed  =  (((match2724 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2734 */
              ({ /* cicili#Let2738 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let2740 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2741 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn2743 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2748 */
                      BoxedCons_BTree_int_User_pair_t (head , replaceAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let2754 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2756 */
                        ({ /* cicili#Let2759 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let2763 */
                            __auto_type match2762  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match2762 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let2766 */
                              bool __h_case_result  = (true  &&  (((match2762 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2767 */
                                    (unboxed  =  (((match2762 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn2772 */
                                  ({ /* cicili#Let2776 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let2778 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2779 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn2784 */
                                          BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (taill ));
                                        }) : ({ /* cicili#Let2790 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn2792 */
                                            clone_Box_List_BTree_int_User_pair_t (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let2797 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn2799 */
                                    clone_Box_List_BTree_int_User_pair_t (list );
                                  });
                                }));
                            });
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2804 */
              // ----------
              ;
              ({ /* cicili#Progn2806 */
                clone_Box_List_BTree_int_User_pair_t (list );
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t deleteAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t index ) {
  return ({ /* cicili#Let2812 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let2816 */
        __auto_type match2815  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2815 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2819 */
          bool __h_case_result  = (true  &&  (((match2815 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2820 */
                (unboxed  =  (((match2815 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2825 */
              ({ /* cicili#Let2829 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let2831 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2832 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn2834 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2839 */
                      BoxedCons_BTree_int_User_pair_t (head , deleteAt_List_BTree_int_User_pair_t (tail , (index  -  1 )));
                    }) : ({ /* cicili#Let2845 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2847 */
                        ({ /* cicili#Let2850 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let2854 */
                            __auto_type match2853  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match2853 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let2857 */
                              bool __h_case_result  = (true  &&  (((match2853 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2858 */
                                    (unboxed  =  (((match2853 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn2863 */
                                  ({ /* cicili#Let2867 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let2869 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2870 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn2875 */
                                          clone_Box_List_BTree_int_User_pair_t (taill );
                                        }) : ({ /* cicili#Let2880 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn2882 */
                                            clone_Box_List_BTree_int_User_pair_t (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let2887 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn2889 */
                                    clone_Box_List_BTree_int_User_pair_t (list );
                                  });
                                }));
                            });
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2894 */
              // ----------
              ;
              ({ /* cicili#Progn2896 */
                clone_Box_List_BTree_int_User_pair_t (list );
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t insertAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index ) {
  return ({ /* cicili#Let2902 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let2906 */
        __auto_type match2905  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2905 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2909 */
          bool __h_case_result  = (true  &&  (((match2905 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2910 */
                (unboxed  =  (((match2905 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2915 */
              ({ /* cicili#Let2919 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let2921 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2922 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn2924 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2929 */
                      BoxedCons_BTree_int_User_pair_t (head , insertAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let2935 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2937 */
                        BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (list ));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2943 */
              // ----------
              ;
              ({ /* cicili#Progn2945 */
                BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (list ));
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed ) {
  return ({ /* cicili#Let2953 */
      __auto_type match2952  = get_Box_List_BTree_int_User_pair_t (list );
      typeof((((match2952 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let2956 */
        bool __h_case_result  = (true  &&  (((match2952 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2957 */
              (listp  =  (((match2952 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2962 */
            ({ /* cicili#Let2966 */
              __auto_type match2965  = get_Box_List_BTree_int_User_pair_t (aimed );
              typeof((((match2965 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let2969 */
                bool __h_case_result  = (true  &&  (((match2965 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2970 */
                      (aimedp  =  (((match2965 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn2975 */
                    ({ /* cicili#Let2979 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let2981 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2982 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2984 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2989 */
                            BoxedCons_BTree_int_User_pair_t (head , replace_List_BTree_int_User_pair_t (tail , item , aimed ));
                          }) : ({ /* cicili#Let2995 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2997 */
                              ({ /* cicili#Let3001 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let3003 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3004 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn3009 */
                                      BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (taill ));
                                    }) : ({ /* cicili#Let3015 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3017 */
                                        clone_Box_List_BTree_int_User_pair_t (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let3022 */
                    // ----------
                    ;
                    ({ /* cicili#Progn3024 */
                      clone_Box_List_BTree_int_User_pair_t (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3029 */
            // ----------
            ;
            ({ /* cicili#Progn3031 */
              clone_Box_List_BTree_int_User_pair_t (list );
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t delete_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t aimed ) {
  return ({ /* cicili#Let3038 */
      __auto_type match3037  = get_Box_List_BTree_int_User_pair_t (list );
      typeof((((match3037 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let3041 */
        bool __h_case_result  = (true  &&  (((match3037 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3042 */
              (listp  =  (((match3037 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3047 */
            ({ /* cicili#Let3051 */
              __auto_type match3050  = get_Box_List_BTree_int_User_pair_t (aimed );
              typeof((((match3050 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let3054 */
                bool __h_case_result  = (true  &&  (((match3050 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3055 */
                      (aimedp  =  (((match3050 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn3060 */
                    ({ /* cicili#Let3064 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let3066 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3067 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3069 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3074 */
                            BoxedCons_BTree_int_User_pair_t (head , delete_List_BTree_int_User_pair_t (tail , aimed ));
                          }) : ({ /* cicili#Let3080 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3082 */
                              ({ /* cicili#Let3086 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let3088 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3089 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn3094 */
                                      clone_Box_List_BTree_int_User_pair_t (taill );
                                    }) : ({ /* cicili#Let3099 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3101 */
                                        clone_Box_List_BTree_int_User_pair_t (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let3106 */
                    // ----------
                    ;
                    ({ /* cicili#Progn3108 */
                      clone_Box_List_BTree_int_User_pair_t (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3113 */
            // ----------
            ;
            ({ /* cicili#Progn3115 */
              clone_Box_List_BTree_int_User_pair_t (list );
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t insert_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , List_BTree_int_User_pair_t rlist ) {
  return ({ /* cicili#Let3122 */
      __auto_type match3121  = get_Box_List_BTree_int_User_pair_t (llist );
      typeof((((match3121 . __h_data ). Just ). __h_0_mem )) llistp ;
      // ----------
      ;
      ({ /* cicili#Let3125 */
        bool __h_case_result  = (true  &&  (((match3121 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3126 */
              (llistp  =  (((match3121 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3131 */
            ({ /* cicili#Let3135 */
              __auto_type match3134  = get_Box_List_BTree_int_User_pair_t (rlist );
              typeof((((match3134 . __h_data ). Just ). __h_0_mem )) rlistp ;
              // ----------
              ;
              ({ /* cicili#Let3138 */
                bool __h_case_result  = (true  &&  (((match3134 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3139 */
                      (rlistp  =  (((match3134 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn3144 */
                    ({ /* cicili#Let3148 */
                      typeof((((llistp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((llistp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let3150 */
                        bool __h_case_result  = (true  &&  (((llistp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3151 */
                                  (head  =  (((llistp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3153 */
                                  (tail  =  (((llistp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (llistp  !=  rlistp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3158 */
                            BoxedCons_BTree_int_User_pair_t (head , insert_List_BTree_int_User_pair_t (tail , item , rlist ));
                          }) : ({ /* cicili#Let3164 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3166 */
                              BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (rlist ));
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let3172 */
                    // ----------
                    ;
                    ({ /* cicili#Progn3174 */
                      ({ /* cicili#Let3177 */
                        __auto_type nil_item  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3179 */
                          __auto_type nil_item  = BoxedNil_BTree_int_User_pair_t ();
                          // ----------
                          ((void)((nil_item . __h_table )-> freeData ));
                          nil_item ;
                        });
                        // ----------
                        insert_List_BTree_int_User_pair_t (llist , item , nil_item );
                      });
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3186 */
            // ----------
            ;
            ({ /* cicili#Progn3188 */
              BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  List_BTree_int_User_pair_t _reverse (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t rlist ) {
    return ({ /* cicili#Let3196 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let3200 */
          __auto_type match3199  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match3199 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let3203 */
            bool __h_case_result  = (true  &&  (((match3199 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3204 */
                  (unboxed  =  (((match3199 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn3209 */
                ({ /* cicili#Let3213 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let3215 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3216 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn3218 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn3223 */
                        _reverse (tail , BoxedCons_BTree_int_User_pair_t (head , rlist ));
                      }) : ({ /* cicili#Let3228 */
                        // ----------
                        ;
                        ({ /* cicili#Progn3230 */
                          clone_Box_List_BTree_int_User_pair_t (rlist );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let3235 */
                // ----------
                ;
                ({ /* cicili#Progn3237 */
                  clone_Box_List_BTree_int_User_pair_t (rlist );
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let3241 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3245 */
        __auto_type match3244  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3244 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3248 */
          bool __h_case_result  = (true  &&  (((match3244 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3249 */
                (unboxed  =  (((match3244 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3254 */
              ({ /* cicili#Let3258 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3260 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3261 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3263 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3268 */
                      _reverse (tail , BoxedCons_BTree_int_User_pair_t (head , BoxedNil_BTree_int_User_pair_t ()));
                    }) : ({ /* cicili#Let3274 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3276 */
                        clone_Box_List_BTree_int_User_pair_t (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3281 */
              // ----------
              ;
              ({ /* cicili#Progn3283 */
                clone_Box_List_BTree_int_User_pair_t (list );
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist ) {
  return ({ /* cicili#Let3289 */
      __auto_type __h_matchbox  = llist ;
      // ----------
      ({ /* cicili#Let3293 */
        __auto_type match3292  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3292 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3296 */
          bool __h_case_result  = (true  &&  (((match3292 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3297 */
                (unboxed  =  (((match3292 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3302 */
              ({ /* cicili#Let3306 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3308 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3309 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3311 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3316 */
                      BoxedCons_BTree_int_User_pair_t (head , append_List_BTree_int_User_pair_t (tail , rlist ));
                    }) : ({ /* cicili#Let3322 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3324 */
                        clone_Box_List_BTree_int_User_pair_t (rlist );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3329 */
              // ----------
              ;
              ({ /* cicili#Progn3331 */
                clone_Box_List_BTree_int_User_pair_t (rlist );
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t push_List_BTree_int_User_pair_t (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list ) {
  return BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (list ));
}
List_BTree_int_User_pair_t take_List_BTree_int_User_pair_t (size_t len , List_BTree_int_User_pair_t list ) {
  return (((len  <=  0 )) ? BoxedNil_BTree_int_User_pair_t () : ({ /* cicili#Let3343 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let3347 */
          __auto_type match3346  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match3346 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let3350 */
            bool __h_case_result  = (true  &&  (((match3346 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3351 */
                  (unboxed  =  (((match3346 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn3356 */
                ({ /* cicili#Let3360 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let3362 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3363 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn3365 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn3370 */
                        BoxedCons_BTree_int_User_pair_t (head , take_List_BTree_int_User_pair_t ((--len ), tail ));
                      }) : ({ /* cicili#Let3376 */
                        // ----------
                        ;
                        ({ /* cicili#Progn3378 */
                          BoxedNil_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let3383 */
                // ----------
                ;
                ({ /* cicili#Progn3385 */
                  BoxedNil_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      }));
}
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3391 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3395 */
        __auto_type match3394  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3394 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3398 */
          bool __h_case_result  = (true  &&  (((match3394 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3399 */
                (unboxed  =  (((match3394 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3404 */
              ({ /* cicili#Let3408 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3410 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3411 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3416 */
                      ({ /* cicili#Let3419 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let3423 */
                          __auto_type match3422  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match3422 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let3426 */
                            bool __h_case_result  = (true  &&  (((match3422 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3427 */
                                  (unboxed  =  (((match3422 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn3432 */
                                ({ /* cicili#Let3436 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let3438 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn3442 */
                                        clone_Box_List_BTree_int_User_pair_t (list );
                                      }) : ({ /* cicili#Let3447 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn3449 */
                                          last_List_BTree_int_User_pair_t (tail );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let3454 */
                                // ----------
                                ;
                                ({ /* cicili#Progn3456 */
                                  clone_Box_List_BTree_int_User_pair_t (list );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let3461 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3463 */
                        clone_Box_List_BTree_int_User_pair_t (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3468 */
              // ----------
              ;
              ({ /* cicili#Progn3470 */
                clone_Box_List_BTree_int_User_pair_t (list );
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3476 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3480 */
        __auto_type match3479  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3479 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3483 */
          bool __h_case_result  = (true  &&  (((match3479 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3484 */
                (unboxed  =  (((match3479 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3489 */
              ({ /* cicili#Let3493 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3495 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3496 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3498 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3503 */
                      ({ /* cicili#Let3506 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let3510 */
                          __auto_type match3509  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match3509 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let3513 */
                            bool __h_case_result  = (true  &&  (((match3509 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3514 */
                                  (unboxed  =  (((match3509 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn3519 */
                                ({ /* cicili#Let3523 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let3525 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn3529 */
                                        BoxedCons_BTree_int_User_pair_t (head , init_List_BTree_int_User_pair_t (tail ));
                                      }) : ({ /* cicili#Let3535 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn3537 */
                                          BoxedNil_BTree_int_User_pair_t ();
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let3542 */
                                // ----------
                                ;
                                ({ /* cicili#Progn3544 */
                                  BoxedNil_BTree_int_User_pair_t ();
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let3549 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3551 */
                        BoxedNil_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3556 */
              // ----------
              ;
              ({ /* cicili#Progn3558 */
                BoxedNil_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t tail_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return drop_List_BTree_int_User_pair_t (1, list );
}
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (size_t len , List_BTree_int_User_pair_t list ) {
  return (((len  <=  0 )) ? clone_Box_List_BTree_int_User_pair_t (list ) : ({ /* cicili#Let3569 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let3573 */
          __auto_type match3572  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match3572 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let3576 */
            bool __h_case_result  = (true  &&  (((match3572 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3577 */
                  (unboxed  =  (((match3572 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn3582 */
                ({ /* cicili#Let3586 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let3588 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3589 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn3594 */
                        drop_List_BTree_int_User_pair_t ((--len ), tail );
                      }) : ({ /* cicili#Let3599 */
                        // ----------
                        ;
                        ({ /* cicili#Progn3601 */
                          clone_Box_List_BTree_int_User_pair_t (list );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let3606 */
                // ----------
                ;
                ({ /* cicili#Progn3608 */
                  clone_Box_List_BTree_int_User_pair_t (list );
                });
              }));
          });
        });
      }));
}
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return nth_List_BTree_int_User_pair_t (0, list );
}
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3618 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3622 */
        __auto_type match3621  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3621 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3625 */
          bool __h_case_result  = (true  &&  (((match3621 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3626 */
                (unboxed  =  (((match3621 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3631 */
              ({ /* cicili#Let3635 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3637 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3638 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3643 */
                      nthcdr_List_BTree_int_User_pair_t ((--index ), tail );
                    }) : ({ /* cicili#Let3648 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3650 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3654 */
              // ----------
              ;
              ({ /* cicili#Progn3656 */
                list ;
              });
            }));
        });
      });
    });
}
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3662 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3666 */
        __auto_type match3665  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3665 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3669 */
          bool __h_case_result  = (true  &&  (((match3665 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3670 */
                (unboxed  =  (((match3665 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3675 */
              ({ /* cicili#Let3679 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3681 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3682 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3684 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3689 */
                      (((index  ==  0 )) ? Just_BTree_int_User_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_int_User_pair_t () : nth_List_BTree_int_User_pair_t ((--index ), tail )));
                    }) : ({ /* cicili#Let3698 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3700 */
                        Nothing_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3705 */
              // ----------
              ;
              ({ /* cicili#Progn3707 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
size_t hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t desired ) {
  return ({ /* cicili#Let3713 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3717 */
        __auto_type match3716  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3716 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3720 */
          bool __h_case_result  = (true  &&  (((match3716 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3721 */
                (unboxed  =  (((match3716 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3726 */
              ({ /* cicili#Let3730 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3732 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3733 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3738 */
                      (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_int_User_pair_t (tail , (--desired )) ));
                    }) : ({ /* cicili#Let3744 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3746 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3750 */
              // ----------
              ;
              ({ /* cicili#Progn3752 */
                0;
              });
            }));
        });
      });
    });
}
size_t len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3757 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3761 */
        __auto_type match3760  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3760 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3764 */
          bool __h_case_result  = (true  &&  (((match3760 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3765 */
                (unboxed  =  (((match3760 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3770 */
              ({ /* cicili#Let3774 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3776 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3777 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3782 */
                      (1 +  len_List_BTree_int_User_pair_t (tail ) );
                    }) : ({ /* cicili#Let3787 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3789 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3793 */
              // ----------
              ;
              ({ /* cicili#Progn3795 */
                0;
              });
            }));
        });
      });
    });
}
void free_List_BTree_int_User_pair_t_x (List_BTree_int_User_pair_t_x * this_ptr ) {
  { /* cicili#Let3799 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3805 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3807 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3808 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3814 */
            { /* cicili#Block3816 */
              free (this );
              free_Box_List_BTree_int_User_pair_t ((&tail ));
            }
          }
        else
          { /* cicili#Let3824 */
            // ----------
            ;
            ({ /* cicili#Let3826 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3831 */
                  { /* cicili#Block3833 */
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
  static List_BTree_int_User_pair_t__H_Table table  = { free_List_BTree_int_User_pair_t_x , toArray_List_BTree_int_User_pair_t , wrap_List_BTree_int_User_pair_t , pure_List_BTree_int_User_pair_t , show_List_BTree_int_User_pair_t , copy_List_BTree_int_User_pair_t , replaceAt_List_BTree_int_User_pair_t , deleteAt_List_BTree_int_User_pair_t , insertAt_List_BTree_int_User_pair_t , replace_List_BTree_int_User_pair_t , delete_List_BTree_int_User_pair_t , insert_List_BTree_int_User_pair_t , reverse_List_BTree_int_User_pair_t , append_List_BTree_int_User_pair_t , push_List_BTree_int_User_pair_t , take_List_BTree_int_User_pair_t , last_List_BTree_int_User_pair_t , init_List_BTree_int_User_pair_t , tail_List_BTree_int_User_pair_t , drop_List_BTree_int_User_pair_t , head_List_BTree_int_User_pair_t , nthcdr_List_BTree_int_User_pair_t , nth_List_BTree_int_User_pair_t , hasLen_List_BTree_int_User_pair_t , len_List_BTree_int_User_pair_t };
  return (&table );
}
List_BTree_int_User_pair_t BoxedCons_BTree_int_User_pair_t (BTree_int_User_pair_t head , List_BTree_int_User_pair_t tail ) {
  { /* cicili#Let3844 */
    List_BTree_int_User_pair_t_x instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return new_Box_List_BTree_int_User_pair_t (instance );
  }
}
List_BTree_int_User_pair_t BoxedNil_BTree_int_User_pair_t () {
  { /* cicili#Let3851 */
    List_BTree_int_User_pair_t_x instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h___t });
    return new_Box_List_BTree_int_User_pair_t (instance );
  }
}
#endif /* __List_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __Maybe_List_BTree_int_User_pair_t__H_IMPL__
#define __Maybe_List_BTree_int_User_pair_t__H_IMPL__
void free_Maybe_List_BTree_int_User_pair_t (Maybe_List_BTree_int_User_pair_t * this ) {
}
const Maybe_List_BTree_int_User_pair_t__H_Table * const get_Maybe_List_BTree_int_User_pair_t__H_Table () {
  static const Maybe_List_BTree_int_User_pair_t__H_Table table  = { free_Maybe_List_BTree_int_User_pair_t };
  return (&table );
}
Maybe_List_BTree_int_User_pair_t Just_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t value ) {
  { /* cicili#Let3869 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t () {
  { /* cicili#Let3874 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __Maybe_BTree_int_User__H_IMPL__
#define __Maybe_BTree_int_User__H_IMPL__
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this ) {
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table () {
  static const Maybe_BTree_int_User__H_Table table  = { free_Maybe_BTree_int_User };
  return (&table );
}
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value ) {
  { /* cicili#Let3894 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let3899 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Rc_BTree_int_User__H_IMPL__
#define __Rc_BTree_int_User__H_IMPL__
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User pointer ) {
  return ({ /* cicili#Let3906 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_int_User *)malloc (sizeof(BTree_int_User *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BTree_int_User (holder , count , ((size_t)pointer ));
    });
}
Rc_BTree_int_User clone_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let3915 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let3917 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3918 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3920 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3922 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3927 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn3930 */
                (++(*count ));
                __h_Hold_BTree_int_User (pointer , count , address );
              }) : Gone_BTree_int_User ());
          }) : ({ /* cicili#Let3936 */
            // ----------
            ;
            ({ /* cicili#Progn3938 */
              Gone_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User take_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  return ({ /* cicili#Let3946 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let3948 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3949 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3951 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3953 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3958 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let3962 */
                __auto_type result  = Just_BTree_int_User ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block3968 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let3973 */
            // ----------
            ;
            ({ /* cicili#Progn3975 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let3983 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let3985 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3986 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3988 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3990 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3995 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_int_User ((*pointer )) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let4002 */
            // ----------
            ;
            ({ /* cicili#Progn4004 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  { /* cicili#Let4013 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4015 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4016 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4018 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4020 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4026 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4029 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_BTree_int_User ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4037 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4040 */
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
        { /* cicili#Let4050 */
          // ----------
          ;
          ({ /* cicili#Let4052 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4057 */
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
  { /* cicili#Let4068 */
    Rc_BTree_int_User instance  = ((Rc_BTree_int_User){ get_Rc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_BTree_int_User Gone_BTree_int_User () {
  { /* cicili#Let4073 */
    Rc_BTree_int_User instance  = ((Rc_BTree_int_User){ get_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_Rc_BTree_int_User__H_IMPL__
#define __Maybe_Rc_BTree_int_User__H_IMPL__
void free_Maybe_Rc_BTree_int_User (Maybe_Rc_BTree_int_User * this ) {
}
const Maybe_Rc_BTree_int_User__H_Table * const get_Maybe_Rc_BTree_int_User__H_Table () {
  static const Maybe_Rc_BTree_int_User__H_Table table  = { free_Maybe_Rc_BTree_int_User };
  return (&table );
}
Maybe_Rc_BTree_int_User Just_Rc_BTree_int_User (Rc_BTree_int_User value ) {
  { /* cicili#Let4091 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User () {
  { /* cicili#Let4096 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __List_Rc_BTree_int_User__H_IMPL__
#define __List_Rc_BTree_int_User__H_IMPL__
#ifndef __Maybe_List_Rc_BTree_int_User_x__H_IMPL__
#define __Maybe_List_Rc_BTree_int_User_x__H_IMPL__
void free_Maybe_List_Rc_BTree_int_User_x (Maybe_List_Rc_BTree_int_User_x * this ) {
}
const Maybe_List_Rc_BTree_int_User_x__H_Table * const get_Maybe_List_Rc_BTree_int_User_x__H_Table () {
  static const Maybe_List_Rc_BTree_int_User_x__H_Table table  = { free_Maybe_List_Rc_BTree_int_User_x };
  return (&table );
}
Maybe_List_Rc_BTree_int_User_x Just_List_Rc_BTree_int_User_x (List_Rc_BTree_int_User_x value ) {
  { /* cicili#Let4116 */
    Maybe_List_Rc_BTree_int_User_x instance  = ((Maybe_List_Rc_BTree_int_User_x){ get_Maybe_List_Rc_BTree_int_User_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_int_User_x Nothing_List_Rc_BTree_int_User_x () {
  { /* cicili#Let4121 */
    Maybe_List_Rc_BTree_int_User_x instance  = ((Maybe_List_Rc_BTree_int_User_x){ get_Maybe_List_Rc_BTree_int_User_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_int_User_x__H_IMPL__ */ 
#ifndef __Box_List_Rc_BTree_int_User__H_IMPL__
#define __Box_List_Rc_BTree_int_User__H_IMPL__
Box_List_Rc_BTree_int_User new_Box_List_Rc_BTree_int_User (List_Rc_BTree_int_User_x pointer ) {
  return ({ /* cicili#Let4128 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_Rc_BTree_int_User_x *)malloc (sizeof(List_Rc_BTree_int_User_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_Rc_BTree_int_User_x (holder , count , ((size_t)pointer ));
    });
}
Box_List_Rc_BTree_int_User clone_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let4137 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4139 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4140 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4142 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4144 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4149 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4152 */
                (++(*count ));
                __h_Hold_List_Rc_BTree_int_User_x (pointer , count , address );
              }) : Gone_List_Rc_BTree_int_User_x ());
          }) : ({ /* cicili#Let4158 */
            // ----------
            ;
            ({ /* cicili#Progn4160 */
              Gone_List_Rc_BTree_int_User_x ();
            });
          }));
      });
    });
}
Maybe_List_Rc_BTree_int_User_x take_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User * this ) {
  return ({ /* cicili#Let4168 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4170 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4171 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4173 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4175 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4180 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let4184 */
                __auto_type result  = Just_List_Rc_BTree_int_User_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block4190 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_List_Rc_BTree_int_User_x ());
          }) : ({ /* cicili#Let4195 */
            // ----------
            ;
            ({ /* cicili#Progn4197 */
              Nothing_List_Rc_BTree_int_User_x ();
            });
          }));
      });
    });
}
Maybe_List_Rc_BTree_int_User_x get_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let4205 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4207 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4208 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4210 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4212 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4217 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_Rc_BTree_int_User_x ((*pointer )) : Nothing_List_Rc_BTree_int_User_x ());
          }) : ({ /* cicili#Let4224 */
            // ----------
            ;
            ({ /* cicili#Progn4226 */
              Nothing_List_Rc_BTree_int_User_x ();
            });
          }));
      });
    });
}
void free_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User * this ) {
  { /* cicili#Let4235 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4237 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4238 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4240 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4242 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4248 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4251 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_List_Rc_BTree_int_User_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4259 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4262 */
                    free_List_Rc_BTree_int_User_x (pointer );
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_List_Rc_BTree_int_User_x ();
                  }
                else
                  (--(*count ));
              }
              }        }
      else
        { /* cicili#Let4272 */
          // ----------
          ;
          ({ /* cicili#Let4274 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4279 */
              }
          });
        }
    });
  }
}
const Box_List_Rc_BTree_int_User__H_Table * const get_Box_List_Rc_BTree_int_User__H_Table () {
  static const Box_List_Rc_BTree_int_User__H_Table table  = { free_Box_List_Rc_BTree_int_User , new_Box_List_Rc_BTree_int_User , clone_Box_List_Rc_BTree_int_User , take_Box_List_Rc_BTree_int_User , get_Box_List_Rc_BTree_int_User };
  return (&table );
}
Box_List_Rc_BTree_int_User __h_Hold_List_Rc_BTree_int_User_x (List_Rc_BTree_int_User_x * pointer , int * count , size_t address ) {
  { /* cicili#Let4290 */
    Box_List_Rc_BTree_int_User instance  = ((Box_List_Rc_BTree_int_User){ get_Box_List_Rc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_List_Rc_BTree_int_User Gone_List_Rc_BTree_int_User_x () {
  { /* cicili#Let4295 */
    Box_List_Rc_BTree_int_User instance  = ((Box_List_Rc_BTree_int_User){ get_Box_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_List_Rc_BTree_int_User__H_IMPL__ */ 
Rc_BTree_int_User * toArray_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User term ) {
  Rc_BTree_int_User * array (List_Rc_BTree_int_User list , size_t count ) {
    return ({ /* cicili#Let4302 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let4306 */
          __auto_type match4305  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4305 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4309 */
            bool __h_case_result  = (true  &&  (((match4305 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4310 */
                  (unboxed  =  (((match4305 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4315 */
                ({ /* cicili#Let4319 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let4321 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4322 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4324 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4329 */
                        ({ /* cicili#Let4331 */
                          Rc_BTree_int_User * arr  = array (tail , (count  +  1 ));
                          // ----------
                          arr [count ] = head ;
                          arr ;
                        });
                      }) : ({ /* cicili#Let4335 */
                        // ----------
                        ;
                        ({ /* cicili#Progn4337 */
                          ({ /* cicili#Let4339 */
                            Rc_BTree_int_User * arr  = calloc (count , sizeof(Rc_BTree_int_User));
                            // ----------
                            arr [(count  -  1 )] = term ;
                            arr ;
                          });
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let4343 */
                // ----------
                ;
                ({ /* cicili#Progn4345 */
                  ({ /* cicili#Let4347 */
                    Rc_BTree_int_User * arr  = calloc (count , sizeof(Rc_BTree_int_User));
                    // ----------
                    arr [(count  -  1 )] = term ;
                    arr ;
                  });
                });
              }));
          });
        });
      });
  }
  return array (list , 0);
}
List_Rc_BTree_int_User wrap_List_Rc_BTree_int_User (const Rc_BTree_int_User item ) {
  return BoxedCons_Rc_BTree_int_User (item , BoxedNil_Rc_BTree_int_User ());
}
List_Rc_BTree_int_User pure_List_Rc_BTree_int_User (const Rc_BTree_int_User * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? BoxedNil_Rc_BTree_int_User () : ({ /* cicili#Let4358 */
        Rc_BTree_int_User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? BoxedNil_Rc_BTree_int_User () : BoxedCons_Rc_BTree_int_User (item , pure_List_Rc_BTree_int_User ((++buf ), (--len ))));
      }));
}
size_t show_List_Rc_BTree_int_User (CFile file , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let4367 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4371 */
        __auto_type match4370  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4370 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4374 */
          bool __h_case_result  = (true  &&  (((match4370 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4375 */
                (unboxed  =  (((match4370 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4380 */
              ({ /* cicili#Let4384 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4386 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4387 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4389 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4394 */
                      (({ /* cicili#Let4397 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let4401 */
                            __auto_type match4400  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match4400 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let4404 */
                              bool __h_case_result  = (true  &&  (((match4400 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4405 */
                                    (unboxed  =  (((match4400 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn4410 */
                                  ({ /* cicili#Let4414 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4416 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4420 */
                                          (({ /* cicili#Let4428 */
                                              __auto_type match4427  = get_Rc_BTree_int_User (head );
                                              typeof((((match4427 . __h_data ). Just ). __h_0_mem )) child ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4431 */
                                                bool __h_case_result  = (true  &&  (((match4427 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4432 */
                                                      (child  =  (((match4427 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4437 */
                                                    show_BTree_int_User (file , child );
                                                  }) : ({ /* cicili#Let4442 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4444 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            }) +  fprintf (file , "%s", " ") );
                                        }) : ({ /* cicili#Let4448 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4450 */
                                            ({ /* cicili#Let4458 */
                                              __auto_type match4457  = get_Rc_BTree_int_User (head );
                                              typeof((((match4457 . __h_data ). Just ). __h_0_mem )) child ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4461 */
                                                bool __h_case_result  = (true  &&  (((match4457 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4462 */
                                                      (child  =  (((match4457 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4467 */
                                                    show_BTree_int_User (file , child );
                                                  }) : ({ /* cicili#Let4472 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4474 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            });
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let4478 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4480 */
                                    0;
                                  });
                                }));
                            });
                          });
                        }) +  show_List_Rc_BTree_int_User (file , tail ) );
                    }) : ({ /* cicili#Let4485 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4487 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4491 */
              // ----------
              ;
              ({ /* cicili#Progn4493 */
                0;
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let4498 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4502 */
        __auto_type match4501  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4501 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4505 */
          bool __h_case_result  = (true  &&  (((match4501 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4506 */
                (unboxed  =  (((match4501 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4511 */
              ({ /* cicili#Let4515 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4517 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4518 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4520 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4525 */
                      BoxedCons_Rc_BTree_int_User (head , copy_List_Rc_BTree_int_User (tail ));
                    }) : ({ /* cicili#Let4531 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4533 */
                        BoxedNil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4538 */
              // ----------
              ;
              ({ /* cicili#Progn4540 */
                BoxedNil_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index ) {
  return ({ /* cicili#Let4546 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4550 */
        __auto_type match4549  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4549 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4553 */
          bool __h_case_result  = (true  &&  (((match4549 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4554 */
                (unboxed  =  (((match4549 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4559 */
              ({ /* cicili#Let4563 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4565 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4566 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4568 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4573 */
                      BoxedCons_Rc_BTree_int_User (head , replaceAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let4579 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4581 */
                        ({ /* cicili#Let4584 */
                          __auto_type __h_matchbox  = list ;
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
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4603 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4604 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4609 */
                                          BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (taill ));
                                        }) : ({ /* cicili#Let4615 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4617 */
                                            clone_Box_List_Rc_BTree_int_User (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let4622 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4624 */
                                    clone_Box_List_Rc_BTree_int_User (list );
                                  });
                                }));
                            });
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4629 */
              // ----------
              ;
              ({ /* cicili#Progn4631 */
                clone_Box_List_Rc_BTree_int_User (list );
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User deleteAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t index ) {
  return ({ /* cicili#Let4637 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4641 */
        __auto_type match4640  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4640 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4644 */
          bool __h_case_result  = (true  &&  (((match4640 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4645 */
                (unboxed  =  (((match4640 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4650 */
              ({ /* cicili#Let4654 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4656 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4657 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4659 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4664 */
                      BoxedCons_Rc_BTree_int_User (head , deleteAt_List_Rc_BTree_int_User (tail , (index  -  1 )));
                    }) : ({ /* cicili#Let4670 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4672 */
                        ({ /* cicili#Let4675 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let4679 */
                            __auto_type match4678  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match4678 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let4682 */
                              bool __h_case_result  = (true  &&  (((match4678 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4683 */
                                    (unboxed  =  (((match4678 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn4688 */
                                  ({ /* cicili#Let4692 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4694 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4695 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4700 */
                                          clone_Box_List_Rc_BTree_int_User (taill );
                                        }) : ({ /* cicili#Let4705 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4707 */
                                            clone_Box_List_Rc_BTree_int_User (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let4712 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4714 */
                                    clone_Box_List_Rc_BTree_int_User (list );
                                  });
                                }));
                            });
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4719 */
              // ----------
              ;
              ({ /* cicili#Progn4721 */
                clone_Box_List_Rc_BTree_int_User (list );
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User insertAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index ) {
  return ({ /* cicili#Let4727 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4731 */
        __auto_type match4730  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4730 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4734 */
          bool __h_case_result  = (true  &&  (((match4730 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4735 */
                (unboxed  =  (((match4730 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4740 */
              ({ /* cicili#Let4744 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4746 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4747 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4749 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4754 */
                      BoxedCons_Rc_BTree_int_User (head , insertAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let4760 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4762 */
                        BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (list ));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4768 */
              // ----------
              ;
              ({ /* cicili#Progn4770 */
                BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (list ));
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed ) {
  return ({ /* cicili#Let4778 */
      __auto_type match4777  = get_Box_List_Rc_BTree_int_User (list );
      typeof((((match4777 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let4781 */
        bool __h_case_result  = (true  &&  (((match4777 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4782 */
              (listp  =  (((match4777 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4787 */
            ({ /* cicili#Let4791 */
              __auto_type match4790  = get_Box_List_Rc_BTree_int_User (aimed );
              typeof((((match4790 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let4794 */
                bool __h_case_result  = (true  &&  (((match4790 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4795 */
                      (aimedp  =  (((match4790 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn4800 */
                    ({ /* cicili#Let4804 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let4806 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4807 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4809 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4814 */
                            BoxedCons_Rc_BTree_int_User (head , replace_List_Rc_BTree_int_User (tail , item , aimed ));
                          }) : ({ /* cicili#Let4820 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4822 */
                              ({ /* cicili#Let4826 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let4828 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4829 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4834 */
                                      BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (taill ));
                                    }) : ({ /* cicili#Let4840 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4842 */
                                        clone_Box_List_Rc_BTree_int_User (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let4847 */
                    // ----------
                    ;
                    ({ /* cicili#Progn4849 */
                      clone_Box_List_Rc_BTree_int_User (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let4854 */
            // ----------
            ;
            ({ /* cicili#Progn4856 */
              clone_Box_List_Rc_BTree_int_User (list );
            });
          }));
      });
    });
}
List_Rc_BTree_int_User delete_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , List_Rc_BTree_int_User aimed ) {
  return ({ /* cicili#Let4863 */
      __auto_type match4862  = get_Box_List_Rc_BTree_int_User (list );
      typeof((((match4862 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let4866 */
        bool __h_case_result  = (true  &&  (((match4862 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4867 */
              (listp  =  (((match4862 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4872 */
            ({ /* cicili#Let4876 */
              __auto_type match4875  = get_Box_List_Rc_BTree_int_User (aimed );
              typeof((((match4875 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let4879 */
                bool __h_case_result  = (true  &&  (((match4875 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4880 */
                      (aimedp  =  (((match4875 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn4885 */
                    ({ /* cicili#Let4889 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let4891 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4892 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4894 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4899 */
                            BoxedCons_Rc_BTree_int_User (head , delete_List_Rc_BTree_int_User (tail , aimed ));
                          }) : ({ /* cicili#Let4905 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4907 */
                              ({ /* cicili#Let4911 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let4913 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4914 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4919 */
                                      clone_Box_List_Rc_BTree_int_User (taill );
                                    }) : ({ /* cicili#Let4924 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4926 */
                                        clone_Box_List_Rc_BTree_int_User (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let4931 */
                    // ----------
                    ;
                    ({ /* cicili#Progn4933 */
                      clone_Box_List_Rc_BTree_int_User (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let4938 */
            // ----------
            ;
            ({ /* cicili#Progn4940 */
              clone_Box_List_Rc_BTree_int_User (list );
            });
          }));
      });
    });
}
List_Rc_BTree_int_User insert_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , List_Rc_BTree_int_User rlist ) {
  return ({ /* cicili#Let4947 */
      __auto_type match4946  = get_Box_List_Rc_BTree_int_User (llist );
      typeof((((match4946 . __h_data ). Just ). __h_0_mem )) llistp ;
      // ----------
      ;
      ({ /* cicili#Let4950 */
        bool __h_case_result  = (true  &&  (((match4946 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4951 */
              (llistp  =  (((match4946 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4956 */
            ({ /* cicili#Let4960 */
              __auto_type match4959  = get_Box_List_Rc_BTree_int_User (rlist );
              typeof((((match4959 . __h_data ). Just ). __h_0_mem )) rlistp ;
              // ----------
              ;
              ({ /* cicili#Let4963 */
                bool __h_case_result  = (true  &&  (((match4959 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4964 */
                      (rlistp  =  (((match4959 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn4969 */
                    ({ /* cicili#Let4973 */
                      typeof((((llistp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((llistp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let4975 */
                        bool __h_case_result  = (true  &&  (((llistp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4976 */
                                  (head  =  (((llistp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4978 */
                                  (tail  =  (((llistp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (llistp  !=  rlistp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4983 */
                            BoxedCons_Rc_BTree_int_User (head , insert_List_Rc_BTree_int_User (tail , item , rlist ));
                          }) : ({ /* cicili#Let4989 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4991 */
                              BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (rlist ));
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let4997 */
                    // ----------
                    ;
                    ({ /* cicili#Progn4999 */
                      ({ /* cicili#Let5002 */
                        __auto_type nil_item  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5004 */
                          __auto_type nil_item  = BoxedNil_Rc_BTree_int_User ();
                          // ----------
                          ((void)((nil_item . __h_table )-> freeData ));
                          nil_item ;
                        });
                        // ----------
                        insert_List_Rc_BTree_int_User (llist , item , nil_item );
                      });
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let5011 */
            // ----------
            ;
            ({ /* cicili#Progn5013 */
              BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  List_Rc_BTree_int_User _reverse (List_Rc_BTree_int_User list , List_Rc_BTree_int_User rlist ) {
    return ({ /* cicili#Let5021 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5025 */
          __auto_type match5024  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5024 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5028 */
            bool __h_case_result  = (true  &&  (((match5024 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5029 */
                  (unboxed  =  (((match5024 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5034 */
                ({ /* cicili#Let5038 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let5040 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5041 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5043 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5048 */
                        _reverse (tail , BoxedCons_Rc_BTree_int_User (head , rlist ));
                      }) : ({ /* cicili#Let5053 */
                        // ----------
                        ;
                        ({ /* cicili#Progn5055 */
                          clone_Box_List_Rc_BTree_int_User (rlist );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5060 */
                // ----------
                ;
                ({ /* cicili#Progn5062 */
                  clone_Box_List_Rc_BTree_int_User (rlist );
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let5066 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5070 */
        __auto_type match5069  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5069 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5073 */
          bool __h_case_result  = (true  &&  (((match5069 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5074 */
                (unboxed  =  (((match5069 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5079 */
              ({ /* cicili#Let5083 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5085 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5086 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5088 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5093 */
                      _reverse (tail , BoxedCons_Rc_BTree_int_User (head , BoxedNil_Rc_BTree_int_User ()));
                    }) : ({ /* cicili#Let5099 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5101 */
                        clone_Box_List_Rc_BTree_int_User (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5106 */
              // ----------
              ;
              ({ /* cicili#Progn5108 */
                clone_Box_List_Rc_BTree_int_User (list );
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist ) {
  return ({ /* cicili#Let5114 */
      __auto_type __h_matchbox  = llist ;
      // ----------
      ({ /* cicili#Let5118 */
        __auto_type match5117  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5117 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5121 */
          bool __h_case_result  = (true  &&  (((match5117 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5122 */
                (unboxed  =  (((match5117 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5127 */
              ({ /* cicili#Let5131 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5133 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5134 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5136 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5141 */
                      BoxedCons_Rc_BTree_int_User (head , append_List_Rc_BTree_int_User (tail , rlist ));
                    }) : ({ /* cicili#Let5147 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5149 */
                        clone_Box_List_Rc_BTree_int_User (rlist );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5154 */
              // ----------
              ;
              ({ /* cicili#Progn5156 */
                clone_Box_List_Rc_BTree_int_User (rlist );
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User push_List_Rc_BTree_int_User (Rc_BTree_int_User item , List_Rc_BTree_int_User list ) {
  return BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (list ));
}
List_Rc_BTree_int_User take_List_Rc_BTree_int_User (size_t len , List_Rc_BTree_int_User list ) {
  return (((len  <=  0 )) ? BoxedNil_Rc_BTree_int_User () : ({ /* cicili#Let5168 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5172 */
          __auto_type match5171  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5171 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5175 */
            bool __h_case_result  = (true  &&  (((match5171 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5176 */
                  (unboxed  =  (((match5171 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5181 */
                ({ /* cicili#Let5185 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let5187 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5188 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5190 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5195 */
                        BoxedCons_Rc_BTree_int_User (head , take_List_Rc_BTree_int_User ((--len ), tail ));
                      }) : ({ /* cicili#Let5201 */
                        // ----------
                        ;
                        ({ /* cicili#Progn5203 */
                          BoxedNil_Rc_BTree_int_User ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5208 */
                // ----------
                ;
                ({ /* cicili#Progn5210 */
                  BoxedNil_Rc_BTree_int_User ();
                });
              }));
          });
        });
      }));
}
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let5216 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5220 */
        __auto_type match5219  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5219 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5223 */
          bool __h_case_result  = (true  &&  (((match5219 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5224 */
                (unboxed  =  (((match5219 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5229 */
              ({ /* cicili#Let5233 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5235 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5236 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5241 */
                      ({ /* cicili#Let5244 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let5248 */
                          __auto_type match5247  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match5247 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let5251 */
                            bool __h_case_result  = (true  &&  (((match5247 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5252 */
                                  (unboxed  =  (((match5247 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5257 */
                                ({ /* cicili#Let5261 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5263 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5267 */
                                        clone_Box_List_Rc_BTree_int_User (list );
                                      }) : ({ /* cicili#Let5272 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5274 */
                                          last_List_Rc_BTree_int_User (tail );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let5279 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5281 */
                                  clone_Box_List_Rc_BTree_int_User (list );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5286 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5288 */
                        clone_Box_List_Rc_BTree_int_User (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5293 */
              // ----------
              ;
              ({ /* cicili#Progn5295 */
                clone_Box_List_Rc_BTree_int_User (list );
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let5301 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5305 */
        __auto_type match5304  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5304 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5308 */
          bool __h_case_result  = (true  &&  (((match5304 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5309 */
                (unboxed  =  (((match5304 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5314 */
              ({ /* cicili#Let5318 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5320 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5321 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5323 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5328 */
                      ({ /* cicili#Let5331 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let5335 */
                          __auto_type match5334  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match5334 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let5338 */
                            bool __h_case_result  = (true  &&  (((match5334 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5339 */
                                  (unboxed  =  (((match5334 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5344 */
                                ({ /* cicili#Let5348 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5350 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5354 */
                                        BoxedCons_Rc_BTree_int_User (head , init_List_Rc_BTree_int_User (tail ));
                                      }) : ({ /* cicili#Let5360 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5362 */
                                          BoxedNil_Rc_BTree_int_User ();
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let5367 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5369 */
                                  BoxedNil_Rc_BTree_int_User ();
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5374 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5376 */
                        BoxedNil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5381 */
              // ----------
              ;
              ({ /* cicili#Progn5383 */
                BoxedNil_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User tail_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return drop_List_Rc_BTree_int_User (1, list );
}
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (size_t len , List_Rc_BTree_int_User list ) {
  return (((len  <=  0 )) ? clone_Box_List_Rc_BTree_int_User (list ) : ({ /* cicili#Let5394 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5398 */
          __auto_type match5397  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5397 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5401 */
            bool __h_case_result  = (true  &&  (((match5397 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5402 */
                  (unboxed  =  (((match5397 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5407 */
                ({ /* cicili#Let5411 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let5413 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5414 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5419 */
                        drop_List_Rc_BTree_int_User ((--len ), tail );
                      }) : ({ /* cicili#Let5424 */
                        // ----------
                        ;
                        ({ /* cicili#Progn5426 */
                          clone_Box_List_Rc_BTree_int_User (list );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5431 */
                // ----------
                ;
                ({ /* cicili#Progn5433 */
                  clone_Box_List_Rc_BTree_int_User (list );
                });
              }));
          });
        });
      }));
}
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return nth_List_Rc_BTree_int_User (0, list );
}
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let5443 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5447 */
        __auto_type match5446  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5446 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5450 */
          bool __h_case_result  = (true  &&  (((match5446 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5451 */
                (unboxed  =  (((match5446 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5456 */
              ({ /* cicili#Let5460 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5462 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5463 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5468 */
                      nthcdr_List_Rc_BTree_int_User ((--index ), tail );
                    }) : ({ /* cicili#Let5473 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5475 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5479 */
              // ----------
              ;
              ({ /* cicili#Progn5481 */
                list ;
              });
            }));
        });
      });
    });
}
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let5487 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5491 */
        __auto_type match5490  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5490 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5494 */
          bool __h_case_result  = (true  &&  (((match5490 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5495 */
                (unboxed  =  (((match5490 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5500 */
              ({ /* cicili#Let5504 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5506 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5507 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5509 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5514 */
                      (((index  ==  0 )) ? Just_Rc_BTree_int_User (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_int_User () : nth_List_Rc_BTree_int_User ((--index ), tail )));
                    }) : ({ /* cicili#Let5523 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5525 */
                        Nothing_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5530 */
              // ----------
              ;
              ({ /* cicili#Progn5532 */
                Nothing_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
size_t hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t desired ) {
  return ({ /* cicili#Let5538 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5542 */
        __auto_type match5541  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5541 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5545 */
          bool __h_case_result  = (true  &&  (((match5541 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5546 */
                (unboxed  =  (((match5541 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5551 */
              ({ /* cicili#Let5555 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5557 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5558 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5563 */
                      (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_int_User (tail , (--desired )) ));
                    }) : ({ /* cicili#Let5569 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5571 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5575 */
              // ----------
              ;
              ({ /* cicili#Progn5577 */
                0;
              });
            }));
        });
      });
    });
}
size_t len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let5582 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5586 */
        __auto_type match5585  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5585 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5589 */
          bool __h_case_result  = (true  &&  (((match5585 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5590 */
                (unboxed  =  (((match5585 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5595 */
              ({ /* cicili#Let5599 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5601 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5602 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5607 */
                      (1 +  len_List_Rc_BTree_int_User (tail ) );
                    }) : ({ /* cicili#Let5612 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5614 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5618 */
              // ----------
              ;
              ({ /* cicili#Progn5620 */
                0;
              });
            }));
        });
      });
    });
}
void free_List_Rc_BTree_int_User_x (List_Rc_BTree_int_User_x * this_ptr ) {
  { /* cicili#Let5624 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let5630 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let5632 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5633 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block5639 */
            { /* cicili#Block5641 */
              free (this );
              free_Box_List_Rc_BTree_int_User ((&tail ));
            }
          }
        else
          { /* cicili#Let5649 */
            // ----------
            ;
            ({ /* cicili#Let5651 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5656 */
                  { /* cicili#Block5658 */
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
  static List_Rc_BTree_int_User__H_Table table  = { free_List_Rc_BTree_int_User_x , toArray_List_Rc_BTree_int_User , wrap_List_Rc_BTree_int_User , pure_List_Rc_BTree_int_User , show_List_Rc_BTree_int_User , copy_List_Rc_BTree_int_User , replaceAt_List_Rc_BTree_int_User , deleteAt_List_Rc_BTree_int_User , insertAt_List_Rc_BTree_int_User , replace_List_Rc_BTree_int_User , delete_List_Rc_BTree_int_User , insert_List_Rc_BTree_int_User , reverse_List_Rc_BTree_int_User , append_List_Rc_BTree_int_User , push_List_Rc_BTree_int_User , take_List_Rc_BTree_int_User , last_List_Rc_BTree_int_User , init_List_Rc_BTree_int_User , tail_List_Rc_BTree_int_User , drop_List_Rc_BTree_int_User , head_List_Rc_BTree_int_User , nthcdr_List_Rc_BTree_int_User , nth_List_Rc_BTree_int_User , hasLen_List_Rc_BTree_int_User , len_List_Rc_BTree_int_User };
  return (&table );
}
List_Rc_BTree_int_User BoxedCons_Rc_BTree_int_User (Rc_BTree_int_User head , List_Rc_BTree_int_User tail ) {
  { /* cicili#Let5669 */
    List_Rc_BTree_int_User_x instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return new_Box_List_Rc_BTree_int_User (instance );
  }
}
List_Rc_BTree_int_User BoxedNil_Rc_BTree_int_User () {
  { /* cicili#Let5676 */
    List_Rc_BTree_int_User_x instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h___t });
    return new_Box_List_Rc_BTree_int_User (instance );
  }
}
#endif /* __List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_List_Rc_BTree_int_User__H_IMPL__
#define __Maybe_List_Rc_BTree_int_User__H_IMPL__
void free_Maybe_List_Rc_BTree_int_User (Maybe_List_Rc_BTree_int_User * this ) {
}
const Maybe_List_Rc_BTree_int_User__H_Table * const get_Maybe_List_Rc_BTree_int_User__H_Table () {
  static const Maybe_List_Rc_BTree_int_User__H_Table table  = { free_Maybe_List_Rc_BTree_int_User };
  return (&table );
}
Maybe_List_Rc_BTree_int_User Just_List_Rc_BTree_int_User (List_Rc_BTree_int_User value ) {
  { /* cicili#Let5694 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_int_User Nothing_List_Rc_BTree_int_User () {
  { /* cicili#Let5699 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_int_User__H_IMPL__
#define __Functor_List_Rc_BTree_int_User__H_IMPL__
List_Rc_BTree_int_User fmap_Functor_List_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input ) {
  return ({ /* cicili#Let5712 */
      __auto_type __h_matchbox  = input ;
      // ----------
      ({ /* cicili#Let5716 */
        __auto_type match5715  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5715 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5719 */
          bool __h_case_result  = (true  &&  (((match5715 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5720 */
                (unboxed  =  (((match5715 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5725 */
              ({ /* cicili#Let5729 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5731 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5732 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5734 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5739 */
                      BoxedCons_Rc_BTree_int_User (a_b (head ), fmap_Functor_List_Rc_BTree_int_User (a_b , tail ));
                    }) : ({ /* cicili#Let5746 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5748 */
                        BoxedNil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5753 */
              // ----------
              ;
              ({ /* cicili#Progn5755 */
                BoxedNil_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
void free_Functor_List_Rc_BTree_int_User (Functor_List_Rc_BTree_int_User * this ) {
}
const Functor_List_Rc_BTree_int_User__H_Table * const get_Functor_List_Rc_BTree_int_User__H_Table () {
  static const Functor_List_Rc_BTree_int_User__H_Table table  = { free_Functor_List_Rc_BTree_int_User , fmap_Functor_List_Rc_BTree_int_User };
  return (&table );
}
Functor_List_Rc_BTree_int_User Functor_List_Rc_BTree_int_User_ctor () {
  { /* cicili#Let5769 */
    Functor_List_Rc_BTree_int_User instance  = ((Functor_List_Rc_BTree_int_User){ get_Functor_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_Rc_BTree_int_User__H_IMPL__ */ 
Functor_List_Rc_BTree_int_User get_Functor_List_Rc_BTree_int_User () {
  return Functor_List_Rc_BTree_int_User_ctor ();
}
size_t U_BTree_int_User  = 3;
size_t L_BTree_int_User  = 2;
BTree_int_User split_BTree_int_User (BTree_int_User tree ) {
  return ({ /* cicili#Let5787 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let5789 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5790 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5792 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5797 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let5803 */
                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5805 */
                  __auto_type tree  = tree ;
                  // ----------
                  ((void)(tree -> __h_table -> freeClass ));
                  tree ;
                });
                // ----------
                Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let5813 */
                    __auto_type match5812  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                    typeof((((match5812 . __h_data ). Just ). __h_0_mem )) nitem ;
                    // ----------
                    ;
                    ({ /* cicili#Let5817 */
                      bool __h_case_result  = (true  &&  (((match5812 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5818 */
                            (nitem  =  (((match5812 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn5823 */
                          nitem ;
                        }) : ({ /* cicili#Let5827 */
                          // ----------
                          ;
                          ({ /* cicili#Progn5829 */
                            ((BTree_int_User_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let5840 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5842 */
                        __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)((r1 . __h_table )-> freeData ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5852 */
                          Rc_BTree_int_User __ciciliC_5851 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_5851 ;
                        }), r1 );
                    }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let5863 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5865 */
                        __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)((r1 . __h_table )-> freeData ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5875 */
                          Rc_BTree_int_User __ciciliC_5874 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_5874 ;
                        }), r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* cicili#Let5882 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let5884 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn5885 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn5887 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn5892 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let5898 */
                      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5900 */
                        __auto_type tree  = tree ;
                        // ----------
                        ((void)(tree -> __h_table -> freeClass ));
                        tree ;
                      });
                      // ----------
                      Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let5908 */
                          __auto_type match5907  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                          typeof((((match5907 . __h_data ). Just ). __h_0_mem )) nitem ;
                          // ----------
                          ;
                          ({ /* cicili#Let5912 */
                            bool __h_case_result  = (true  &&  (((match5907 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5913 */
                                  (nitem  =  (((match5907 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5918 */
                                nitem ;
                              }) : ({ /* cicili#Let5922 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5924 */
                                  ((BTree_int_User_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let5935 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5937 */
                              __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)((r1 . __h_table )-> freeData ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5947 */
                                Rc_BTree_int_User __ciciliC_5946 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_5946 ;
                              }), r1 );
                          }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let5958 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5960 */
                              __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)((r1 . __h_table )-> freeData ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5970 */
                                Rc_BTree_int_User __ciciliC_5969 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_5969 ;
                              }), r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* cicili#Let5977 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let5979 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn5980 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5985 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let5991 */
                            __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5993 */
                              __auto_type tree  = tree ;
                              // ----------
                              ((void)(tree -> __h_table -> freeClass ));
                              tree ;
                            });
                            // ----------
                            Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let6001 */
                                __auto_type match6000  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                                typeof((((match6000 . __h_data ). Just ). __h_0_mem )) nitem ;
                                // ----------
                                ;
                                ({ /* cicili#Let6005 */
                                  bool __h_case_result  = (true  &&  (((match6000 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6006 */
                                        (nitem  =  (((match6000 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6011 */
                                      nitem ;
                                    }) : ({ /* cicili#Let6015 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6017 */
                                        ((BTree_int_User_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2));
                          }) : tree );
                      }) : ({ /* cicili#Let6034 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6036 */
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
  return ({ /* cicili#Let6042 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let6044 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6045 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6047 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn6052 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let6062 */
                __auto_type match6061  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                typeof((((match6061 . __h_data ). Just ). __h_0_mem )) nitem ;
                // ----------
                ;
                ({ /* cicili#Let6066 */
                  bool __h_case_result  = (true  &&  (((match6061 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6067 */
                        (nitem  =  (((match6061 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6072 */
                      nitem ;
                    }) : ({ /* cicili#Let6076 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6078 */
                        ((BTree_int_User_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let6089 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6091 */
                    __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6101 */
                      Rc_BTree_int_User __ciciliC_6100 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_6100 ;
                    }), r1 );
                }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let6112 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6114 */
                    __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6124 */
                      Rc_BTree_int_User __ciciliC_6123 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_6123 ;
                    }), r1 );
                })))}), 2)) : tree );
          }) : ({ /* cicili#Let6131 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let6133 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6134 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn6136 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn6141 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let6151 */
                      __auto_type match6150  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                      typeof((((match6150 . __h_data ). Just ). __h_0_mem )) nitem ;
                      // ----------
                      ;
                      ({ /* cicili#Let6155 */
                        bool __h_case_result  = (true  &&  (((match6150 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6156 */
                              (nitem  =  (((match6150 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6161 */
                            nitem ;
                          }) : ({ /* cicili#Let6165 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6167 */
                              ((BTree_int_User_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let6178 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6180 */
                          __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6190 */
                            Rc_BTree_int_User __ciciliC_6189 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_6189 ;
                          }), r1 );
                      }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let6201 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6203 */
                          __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6213 */
                            Rc_BTree_int_User __ciciliC_6212 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_6212 ;
                          }), r1 );
                      })))}), 2)) : tree );
                }) : ({ /* cicili#Let6220 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let6222 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6223 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6228 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let6238 */
                            __auto_type match6237  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                            typeof((((match6237 . __h_data ). Just ). __h_0_mem )) nitem ;
                            // ----------
                            ;
                            ({ /* cicili#Let6242 */
                              bool __h_case_result  = (true  &&  (((match6237 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6243 */
                                    (nitem  =  (((match6237 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn6248 */
                                  nitem ;
                                }) : ({ /* cicili#Let6252 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn6254 */
                                    ((BTree_int_User_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2)) : tree );
                      }) : ({ /* cicili#Let6271 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6273 */
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
  return ({ /* cicili#Let6280 */
      __auto_type merged  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_items , right_items ), ({ /* cicili#Let6285 */
        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6287 */
          __auto_type r1  = append_List_Rc_BTree_int_User (left_children , right_children );
          // ----------
          ((void)((r1 . __h_table )-> freeData ));
          r1 ;
        });
        // ----------
        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6296 */
            Rc_BTree_int_User __ciciliC_6295 (Rc_BTree_int_User __h_value ) {
              return clone_Rc_BTree_int_User (__h_value );
            }
            __ciciliC_6295 ;
          }), r1 );
      }));
      // ----------
      ({ /* cicili#Let6304 */
        __auto_type tmp_child  = splitForDelete_BTree_int_User (merged );
        typeof((((tmp_child -> __h_data ). Branch ). __h_0_mem )) tmp_items ;
        typeof((((tmp_child -> __h_data ). Branch ). __h_1_mem )) tmp_children ;
        // ----------
        ;
        ({ /* cicili#Let6307 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6308 */
                  (tmp_items  =  (((tmp_child -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6310 */
                  (tmp_children  =  (((tmp_child -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6315 */
              ({ /* cicili#Let6318 */
                __auto_type __h_matchbox  = tmp_items ;
                // ----------
                ({ /* cicili#Let6322 */
                  __auto_type match6321  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match6321 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  ;
                  ({ /* cicili#Let6325 */
                    bool __h_case_result  = (true  &&  (((match6321 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6326 */
                          (unboxed  =  (((match6321 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6331 */
                        ({ /* cicili#Let6335 */
                          typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                          // ----------
                          ;
                          ({ /* cicili#Let6337 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6338 */
                                  (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6343 */
                                ({ /* cicili#Let6346 */
                                  __auto_type merged  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6348 */
                                    __auto_type merged  = merged ;
                                    // ----------
                                    ((void)(merged -> __h_table -> freeClass ));
                                    merged ;
                                  });
                                  __auto_type tmp_child  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6351 */
                                    __auto_type tmp_child  = tmp_child ;
                                    // ----------
                                    ((void)(tmp_child -> __h_table -> freeClass ));
                                    tmp_child ;
                                  });
                                  // ----------
                                  Internal_BTree_int_User (replaceAt_List_BTree_int_User_pair_t (items , head , pitem_index ), ({ /* cicili#Let6358 */
                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6360 */
                                        __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                                        // ----------
                                        ((void)((r1 . __h_table )-> freeData ));
                                        r1 ;
                                      });
                                      __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6364 */
                                        __auto_type r2  = take_List_Rc_BTree_int_User (pchild_index , r1 );
                                        // ----------
                                        ((void)((r2 . __h_table )-> freeData ));
                                        r2 ;
                                      });
                                      __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6368 */
                                        __auto_type r3  = drop_List_Rc_BTree_int_User ((pchild_index  +  1 ), r1 );
                                        // ----------
                                        ((void)((r3 . __h_table )-> freeData ));
                                        r3 ;
                                      });
                                      __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6372 */
                                        __auto_type r4  = append_List_Rc_BTree_int_User (tmp_children , r3 );
                                        // ----------
                                        ((void)((r4 . __h_table )-> freeData ));
                                        r4 ;
                                      });
                                      __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6376 */
                                        __auto_type r5  = append_List_Rc_BTree_int_User (r2 , r4 );
                                        // ----------
                                        ((void)((r5 . __h_table )-> freeData ));
                                        r5 ;
                                      });
                                      // ----------
                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6385 */
                                          Rc_BTree_int_User __ciciliC_6384 (Rc_BTree_int_User __h_value ) {
                                            return clone_Rc_BTree_int_User (__h_value );
                                          }
                                          __ciciliC_6384 ;
                                        }), r5 );
                                    }));
                                });
                              }) : ({ /* cicili#Let6392 */
                                // ----------
                                ;
                                ({ /* cicili#Progn6394 */
                                  Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ());
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let6400 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6402 */
                          Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ());
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let6408 */
              // ----------
              ;
              ({ /* cicili#Let6410 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor ) ==  __h_Internal_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn6414 */
                    Internal_BTree_int_User (deleteAt_List_BTree_int_User_pair_t (items , pitem_index ), ({ /* cicili#Let6420 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6422 */
                          __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6426 */
                          __auto_type r2  = new_Rc_BTree_int_User (merged );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6430 */
                          __auto_type r3  = replaceAt_List_Rc_BTree_int_User (r1 , r2 , pchild_index );
                          // ----------
                          ((void)((r3 . __h_table )-> freeData ));
                          r3 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6439 */
                            Rc_BTree_int_User __ciciliC_6438 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_6438 ;
                          }), r3 );
                      }));
                  }) : ({ /* cicili#Let6446 */
                    // ----------
                    ;
                    ({ /* cicili#Progn6448 */
                      Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ());
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
  Either_BTree_int_User_Error_BTree_int_User borrowRight (List_BTree_int_User_pair_t child_items ) {
    return ({ /* cicili#Let6475 */
        __auto_type match6474  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match6474 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let6478 */
          bool __h_case_result  = (true  &&  (((match6474 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6479 */
                (right_child_rc  =  (((match6474 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6484 */
              ({ /* cicili#Let6487 */
                __auto_type __h_matchbox  = right_child_rc ;
                // ----------
                ({ /* cicili#Let6491 */
                  __auto_type match6490  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match6490 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  ;
                  ({ /* cicili#Let6494 */
                    bool __h_case_result  = (true  &&  (((match6490 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6495 */
                          (unboxed  =  (((match6490 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6500 */
                        ({ /* cicili#Let6504 */
                          typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                          // ----------
                          ;
                          ({ /* cicili#Let6506 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6507 */
                                  (right_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6512 */
                                (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6519 */
                                    __auto_type __h_matchbox  = right_child_items ;
                                    // ----------
                                    ({ /* cicili#Let6523 */
                                      __auto_type match6522  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                      typeof((((match6522 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let6526 */
                                        bool __h_case_result  = (true  &&  (((match6522 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6527 */
                                              (unboxed  =  (((match6522 . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn6532 */
                                            ({ /* cicili#Let6536 */
                                              __auto_type first  = unboxed ;
                                              typeof((((first -> __h_data ). Cons ). __h_0_mem )) first_item ;
                                              typeof((((first -> __h_data ). Cons ). __h_1_mem )) tail ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6538 */
                                                bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6539 */
                                                        (first_item  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn6541 */
                                                        (tail  =  (((first -> __h_data ). Cons ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6546 */
                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , first_item , current ), ({ /* cicili#Let6554 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6556 */
                                                          __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                          // ----------
                                                          ((void)((r1 . __h_table )-> freeData ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6560 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6566 */
                                                            Rc_BTree_int_User __ciciliC_6565 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_6565 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)((r2 . __h_table )-> freeData ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6573 */
                                                          __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                          // ----------
                                                          ((void)((r3 . __h_table )-> freeData ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6577 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6583 */
                                                            Rc_BTree_int_User __ciciliC_6582 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_6582 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)((r4 . __h_table )-> freeData ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6590 */
                                                          __auto_type r5  = take_List_BTree_int_User_pair_t (1, current );
                                                          // ----------
                                                          ((void)((r5 . __h_table )-> freeData ));
                                                          r5 ;
                                                        });
                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6594 */
                                                          __auto_type r7  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (child_items , r5 ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (tail )))}), 2);
                                                          // ----------
                                                          ((void)((r7 . __h_table )-> freeData ));
                                                          r7 ;
                                                        });
                                                        __auto_type r6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6607 */
                                                          __auto_type r6  = append_List_Rc_BTree_int_User (r7 , r4 );
                                                          // ----------
                                                          ((void)((r6 . __h_table )-> freeData ));
                                                          r6 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_int_User (r2 , r6 );
                                                      })));
                                                  }) : ({ /* cicili#Let6614 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6616 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R1"));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let6623 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn6625 */
                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                            });
                                          }));
                                      });
                                    });
                                  }) : ({ /* cicili#Let6631 */
                                    __auto_type __h_matchbox  = current ;
                                    // ----------
                                    ({ /* cicili#Let6635 */
                                      __auto_type match6634  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                      typeof((((match6634 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let6638 */
                                        bool __h_case_result  = (true  &&  (((match6634 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6639 */
                                              (unboxed  =  (((match6634 . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn6644 */
                                            ({ /* cicili#Let6648 */
                                              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6650 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6651 */
                                                      (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6656 */
                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let6664 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6666 */
                                                          __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                          // ----------
                                                          ((void)((r1 . __h_table )-> freeData ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6670 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6676 */
                                                            Rc_BTree_int_User __ciciliC_6675 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_6675 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)((r2 . __h_table )-> freeData ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6683 */
                                                          __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                          // ----------
                                                          ((void)((r3 . __h_table )-> freeData ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6687 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6693 */
                                                            Rc_BTree_int_User __ciciliC_6692 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_6692 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)((r4 . __h_table )-> freeData ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6700 */
                                                          __auto_type r5  = wrap_List_BTree_int_User_pair_t (head );
                                                          // ----------
                                                          ((void)((r5 . __h_table )-> freeData ));
                                                          r5 ;
                                                        });
                                                        __auto_type r6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6704 */
                                                          __auto_type r6  = append_List_BTree_int_User_pair_t (child_items , r5 );
                                                          // ----------
                                                          ((void)((r6 . __h_table )-> freeData ));
                                                          r6 ;
                                                        });
                                                        __auto_type r8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6708 */
                                                          __auto_type r8  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r6 , right_child_items ))), r4 );
                                                          // ----------
                                                          ((void)((r8 . __h_table )-> freeData ));
                                                          r8 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_int_User (r2 , r8 );
                                                      })));
                                                  }) : ({ /* cicili#Let6719 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6721 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R2"));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let6728 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn6730 */
                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                            });
                                          }));
                                      });
                                    });
                                  }));
                              }) : ({ /* cicili#Let6737 */
                                // ----------
                                ;
                                ({ /* cicili#Progn6739 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let6746 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6748 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let6755 */
              // ----------
              ;
              ({ /* cicili#Progn6757 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowLeft (List_BTree_int_User_pair_t child_items ) {
    return ({ /* cicili#Let6769 */
        typeof((((wleft . __h_data ). Just ). __h_0_mem )) left ;
        // ----------
        ;
        ({ /* cicili#Let6771 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6772 */
                (left  =  (((wleft . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6777 */
              ({ /* cicili#Let6780 */
                __auto_type __h_matchbox  = left ;
                // ----------
                ({ /* cicili#Let6784 */
                  __auto_type match6783  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match6783 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  ;
                  ({ /* cicili#Let6787 */
                    bool __h_case_result  = (true  &&  (((match6783 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6788 */
                          (unboxed  =  (((match6783 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6793 */
                        ({ /* cicili#Let6797 */
                          typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) left_item ;
                          // ----------
                          ;
                          ({ /* cicili#Let6799 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6800 */
                                  (left_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6805 */
                                ({ /* cicili#Let6809 */
                                  __auto_type match6808  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                  typeof((((match6808 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6812 */
                                    bool __h_case_result  = (true  &&  (((match6808 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6813 */
                                          (left_child_rc  =  (((match6808 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6818 */
                                        ({ /* cicili#Let6821 */
                                          __auto_type __h_matchbox  = left_child_rc ;
                                          // ----------
                                          ({ /* cicili#Let6825 */
                                            __auto_type match6824  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                            typeof((((match6824 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let6828 */
                                              bool __h_case_result  = (true  &&  (((match6824 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6829 */
                                                    (unboxed  =  (((match6824 . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn6834 */
                                                  ({ /* cicili#Let6838 */
                                                    typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let6840 */
                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6841 */
                                                            (left_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn6846 */
                                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6853 */
                                                              __auto_type last  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6855 */
                                                                __auto_type last  = last_List_BTree_int_User_pair_t (left_child_items );
                                                                // ----------
                                                                ((void)((last . __h_table )-> freeData ));
                                                                last ;
                                                              });
                                                              // ----------
                                                              ({ /* cicili#Let6860 */
                                                                __auto_type __h_matchbox  = last ;
                                                                // ----------
                                                                ({ /* cicili#Let6864 */
                                                                  __auto_type match6863  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                  typeof((((match6863 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let6867 */
                                                                    bool __h_case_result  = (true  &&  (((match6863 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6868 */
                                                                          (unboxed  =  (((match6863 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6873 */
                                                                        ({ /* cicili#Let6877 */
                                                                          typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) last_item ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Let6879 */
                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6880 */
                                                                                  (last_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn6885 */
                                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , last_item , left ), ({ /* cicili#Let6893 */
                                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6895 */
                                                                                      __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                                      // ----------
                                                                                      ((void)((r1 . __h_table )-> freeData ));
                                                                                      r1 ;
                                                                                    });
                                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6899 */
                                                                                      __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6905 */
                                                                                        Rc_BTree_int_User __ciciliC_6904 (Rc_BTree_int_User __h_value ) {
                                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                                        }
                                                                                        __ciciliC_6904 ;
                                                                                      }), r1 );
                                                                                      // ----------
                                                                                      ((void)((r2 . __h_table )-> freeData ));
                                                                                      r2 ;
                                                                                    });
                                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6912 */
                                                                                      __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                      // ----------
                                                                                      ((void)((r3 . __h_table )-> freeData ));
                                                                                      r3 ;
                                                                                    });
                                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6916 */
                                                                                      __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6922 */
                                                                                        Rc_BTree_int_User __ciciliC_6921 (Rc_BTree_int_User __h_value ) {
                                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                                        }
                                                                                        __ciciliC_6921 ;
                                                                                      }), r3 );
                                                                                      // ----------
                                                                                      ((void)((r4 . __h_table )-> freeData ));
                                                                                      r4 ;
                                                                                    });
                                                                                    __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6929 */
                                                                                      __auto_type r5  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (init_List_BTree_int_User_pair_t (left_child_items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (push_List_BTree_int_User_pair_t (left_item , child_items )))}), 2);
                                                                                      // ----------
                                                                                      ((void)((r5 . __h_table )-> freeData ));
                                                                                      r5 ;
                                                                                    });
                                                                                    __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6942 */
                                                                                      __auto_type r7  = append_List_Rc_BTree_int_User (r5 , r4 );
                                                                                      // ----------
                                                                                      ((void)((r7 . __h_table )-> freeData ));
                                                                                      r7 ;
                                                                                    });
                                                                                    // ----------
                                                                                    append_List_Rc_BTree_int_User (r2 , r7 );
                                                                                  })));
                                                                              }) : ({ /* cicili#Let6949 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Progn6951 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 2"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let6958 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn6960 */
                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              });
                                                            }) : ({ /* cicili#Let6967 */
                                                              __auto_type match6966  = borrowRight (child_items );
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let6969 */
                                                                bool __h_case_result  = (true  &&  ((match6966 . __h_ctor ) ==  __h_Left_t  ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn6973 */
                                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , left ), ({ /* cicili#Let6981 */
                                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6983 */
                                                                          __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                          // ----------
                                                                          ((void)((r1 . __h_table )-> freeData ));
                                                                          r1 ;
                                                                        });
                                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6987 */
                                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6993 */
                                                                            Rc_BTree_int_User __ciciliC_6992 (Rc_BTree_int_User __h_value ) {
                                                                              return clone_Rc_BTree_int_User (__h_value );
                                                                            }
                                                                            __ciciliC_6992 ;
                                                                          }), r1 );
                                                                          // ----------
                                                                          ((void)((r2 . __h_table )-> freeData ));
                                                                          r2 ;
                                                                        });
                                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7000 */
                                                                          __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                          // ----------
                                                                          ((void)((r3 . __h_table )-> freeData ));
                                                                          r3 ;
                                                                        });
                                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7004 */
                                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7010 */
                                                                            Rc_BTree_int_User __ciciliC_7009 (Rc_BTree_int_User __h_value ) {
                                                                              return clone_Rc_BTree_int_User (__h_value );
                                                                            }
                                                                            __ciciliC_7009 ;
                                                                          }), r3 );
                                                                          // ----------
                                                                          ((void)((r4 . __h_table )-> freeData ));
                                                                          r4 ;
                                                                        });
                                                                        __auto_type r8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7017 */
                                                                          __auto_type r8  = wrap_List_BTree_int_User_pair_t (left_item );
                                                                          // ----------
                                                                          ((void)((r8 . __h_table )-> freeData ));
                                                                          r8 ;
                                                                        });
                                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7021 */
                                                                          __auto_type r5  = append_List_BTree_int_User_pair_t (left_child_items , r8 );
                                                                          // ----------
                                                                          ((void)((r5 . __h_table )-> freeData ));
                                                                          r5 ;
                                                                        });
                                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7025 */
                                                                          __auto_type r7  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r5 , child_items ))), r4 );
                                                                          // ----------
                                                                          ((void)((r7 . __h_table )-> freeData ));
                                                                          r7 ;
                                                                        });
                                                                        // ----------
                                                                        append_List_Rc_BTree_int_User (r2 , r7 );
                                                                      })));
                                                                  }) : ({ /* cicili#Let7036 */
                                                                    __auto_type right  = match6966 ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn7038 */
                                                                      right ;
                                                                    });
                                                                  }));
                                                              });
                                                            }));
                                                        }) : ({ /* cicili#Let7042 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn7044 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 3"));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let7051 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn7053 */
                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 4"));
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* cicili#Let7060 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn7062 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 5"));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7069 */
                                // ----------
                                ;
                                ({ /* cicili#Progn7071 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 6"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let7078 */
                        // ----------
                        ;
                        ({ /* cicili#Progn7080 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let7087 */
              // ----------
              ;
              ({ /* cicili#Progn7089 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let7093 */
      __auto_type result  = ({ /* cicili#Let7096 */
        typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
        // ----------
        ;
        ({ /* cicili#Let7098 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn7099 */
                (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7104 */
              (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7116 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7118 */
                    __auto_type r1  = new_Rc_BTree_int_User (nchild );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7122 */
                    __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                    // ----------
                    ((void)((r2 . __h_table )-> freeData ));
                    r2 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7131 */
                      Rc_BTree_int_User __ciciliC_7130 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_7130 ;
                    }), r2 );
                }))) : ({ /* cicili#Let7137 */
                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7139 */
                    __auto_type nchild  = nchild ;
                    // ----------
                    ((void)(nchild -> __h_table -> freeClass ));
                    nchild ;
                  });
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* cicili#Let7144 */
              typeof((((nchild -> __h_data ). Internal ). __h_0_mem )) child_items ;
              // ----------
              ;
              ({ /* cicili#Let7146 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn7147 */
                      (child_items  =  (((nchild -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn7152 */
                    (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7164 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7166 */
                          __auto_type r1  = new_Rc_BTree_int_User (nchild );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7170 */
                          __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7179 */
                            Rc_BTree_int_User __ciciliC_7178 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_7178 ;
                          }), r2 );
                      }))) : ({ /* cicili#Let7185 */
                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7187 */
                          __auto_type nchild  = nchild ;
                          // ----------
                          ((void)(nchild -> __h_table -> freeClass ));
                          nchild ;
                        });
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* cicili#Let7192 */
                    typeof((((nchild -> __h_data ). Leaf ). __h_0_mem )) child_items ;
                    // ----------
                    ;
                    ({ /* cicili#Let7194 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn7195 */
                            (child_items  =  (((nchild -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn7200 */
                          (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7212 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7214 */
                                __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7218 */
                                __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                // ----------
                                ((void)((r2 . __h_table )-> freeData ));
                                r2 ;
                              });
                              // ----------
                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7227 */
                                  Rc_BTree_int_User __ciciliC_7226 (Rc_BTree_int_User __h_value ) {
                                    return clone_Rc_BTree_int_User (__h_value );
                                  }
                                  __ciciliC_7226 ;
                                }), r2 );
                            }))) : ({ /* cicili#Let7233 */
                              __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7235 */
                                __auto_type nchild  = nchild ;
                                // ----------
                                ((void)(nchild -> __h_table -> freeClass ));
                                nchild ;
                              });
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* cicili#Let7240 */
                          // ----------
                          ;
                          ({ /* cicili#Progn7242 */
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
  Either_BTree_int_User_Error_BTree_int_User borrowRightInternal (List_BTree_int_User_pair_t left_child_items , List_Rc_BTree_int_User left_child_children ) {
    return ({ /* cicili#Let7267 */
        __auto_type match7266  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match7266 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let7270 */
          bool __h_case_result  = (true  &&  (((match7266 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7271 */
                (right_child_rc  =  (((match7266 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7276 */
              ({ /* cicili#Let7280 */
                __auto_type match7279  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match7279 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                ;
                ({ /* cicili#Let7283 */
                  bool __h_case_result  = (true  &&  (((match7279 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7284 */
                        (right_child  =  (((match7279 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7289 */
                      ({ /* cicili#Let7293 */
                        typeof((((right_child -> __h_data ). Branch ). __h_0_mem )) right_child_items ;
                        typeof((((right_child -> __h_data ). Branch ). __h_1_mem )) right_child_children ;
                        // ----------
                        ;
                        ({ /* cicili#Let7295 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7296 */
                                  (right_child_items  =  (((right_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7298 */
                                  (right_child_children  =  (((right_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7303 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let7312 */
                                  __auto_type match7310  = min_BTree_int_User (right_child );
                                  typeof((((match7310 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let7315 */
                                    bool __h_case_result  = (true  &&  (((match7310 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn7316 */
                                            (min  =  (((match7310 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn7318 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn7323 */
                                        ({ /* cicili#Let7327 */
                                          __auto_type match7326  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match7326 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let7330 */
                                            bool __h_case_result  = (true  &&  (((match7326 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7331 */
                                                  (nchild  =  (((match7326 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn7336 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let7344 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7346 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7350 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7359 */
                                                        Rc_BTree_int_User __ciciliC_7358 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_7358 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let7366 */
                                                __auto_type left  = match7326 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn7368 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let7372 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn7374 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* cicili#Let7380 */
                                  __auto_type __h_matchbox  = current ;
                                  // ----------
                                  ({ /* cicili#Let7384 */
                                    __auto_type match7383  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                    typeof((((match7383 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let7387 */
                                      bool __h_case_result  = (true  &&  (((match7383 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7388 */
                                            (unboxed  =  (((match7383 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn7393 */
                                          ({ /* cicili#Let7398 */
                                            typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                            typeof((current_item . __h_0_mem )) current_key ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let7400 */
                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7401 */
                                                      (current_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                      true ;
                                                    }) &&  (true  &&  ({ /* cicili#Progn7403 */
                                                        (current_key  =  (current_item . __h_0_mem ) );
                                                        true ;
                                                      }) ) ) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn7408 */
                                                  ({ /* cicili#Let7411 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7413 */
                                                      __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7417 */
                                                      __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7421 */
                                                      __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7430 */
                                                        Rc_BTree_int_User __ciciliC_7429 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_7429 ;
                                                      }), r2 ));
                                                      // ----------
                                                      ((void)(r4 -> __h_table -> freeClass ));
                                                      r4 ;
                                                    });
                                                    __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7437 */
                                                      __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                                      // ----------
                                                      ((void)((r5 . __h_table )-> freeData ));
                                                      r5 ;
                                                    });
                                                    __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7441 */
                                                      __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                      // ----------
                                                      ((void)((r7 . __h_table )-> freeData ));
                                                      r7 ;
                                                    });
                                                    // ----------
                                                    ({ /* cicili#Let7447 */
                                                      __auto_type match7446  = delete_BTree_int_User (r4 , current_key , NULL );
                                                      typeof((((match7446 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let7450 */
                                                        bool __h_case_result  = (true  &&  (((match7446 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7451 */
                                                              (ntree  =  (((match7446 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn7456 */
                                                            ({ /* cicili#Let7460 */
                                                              __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                              typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                              typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let7463 */
                                                                bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7464 */
                                                                        (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                        true ;
                                                                      }) &&  ({ /* cicili#Progn7466 */
                                                                        (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                        true ;
                                                                      }) ) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn7471 */
                                                                    ({ /* cicili#Let7474 */
                                                                      __auto_type __h_matchbox  = branch_items ;
                                                                      // ----------
                                                                      ({ /* cicili#Let7478 */
                                                                        __auto_type match7477  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                        typeof((((match7477 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Let7481 */
                                                                          bool __h_case_result  = (true  &&  (((match7477 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7482 */
                                                                                (unboxed  =  (((match7477 . __h_data ). Just ). __h_0_mem ) );
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn7487 */
                                                                              ({ /* cicili#Let7491 */
                                                                                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let7493 */
                                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7494 */
                                                                                        (branch_head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7499 */
                                                                                      ({ /* cicili#Let7502 */
                                                                                        __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7504 */
                                                                                          __auto_type ntree  = ntree ;
                                                                                          // ----------
                                                                                          ((void)(ntree -> __h_table -> freeClass ));
                                                                                          ntree ;
                                                                                        });
                                                                                        __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7507 */
                                                                                          __auto_type tmp_result  = tmp_result ;
                                                                                          // ----------
                                                                                          ((void)(tmp_result -> __h_table -> freeClass ));
                                                                                          tmp_result ;
                                                                                        });
                                                                                        // ----------
                                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let7516 */
                                                                                            __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7518 */
                                                                                              __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                                              // ----------
                                                                                              ((void)((r10 . __h_table )-> freeData ));
                                                                                              r10 ;
                                                                                            });
                                                                                            __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7522 */
                                                                                              __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                              // ----------
                                                                                              ((void)((r11 . __h_table )-> freeData ));
                                                                                              r11 ;
                                                                                            });
                                                                                            // ----------
                                                                                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7531 */
                                                                                                Rc_BTree_int_User __ciciliC_7530 (Rc_BTree_int_User __h_value ) {
                                                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                                                }
                                                                                                __ciciliC_7530 ;
                                                                                              }), r11 );
                                                                                          })));
                                                                                      });
                                                                                    }) : ({ /* cicili#Let7538 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn7540 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            }) : ({ /* cicili#Let7547 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Progn7549 */
                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    });
                                                                  }) : ({ /* cicili#Let7556 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let7558 */
                                                                      bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7562 */
                                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let7570 */
                                                                              __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7572 */
                                                                                __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                                // ----------
                                                                                ((void)((r9 . __h_table )-> freeData ));
                                                                                r9 ;
                                                                              });
                                                                              __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7576 */
                                                                                __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                                // ----------
                                                                                ((void)((r10 . __h_table )-> freeData ));
                                                                                r10 ;
                                                                              });
                                                                              __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7580 */
                                                                                __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                // ----------
                                                                                ((void)((r11 . __h_table )-> freeData ));
                                                                                r11 ;
                                                                              });
                                                                              // ----------
                                                                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7589 */
                                                                                  Rc_BTree_int_User __ciciliC_7588 (Rc_BTree_int_User __h_value ) {
                                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                                  }
                                                                                  __ciciliC_7588 ;
                                                                                }), r11 );
                                                                            })));
                                                                        }) : ({ /* cicili#Let7596 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn7598 */
                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                              });
                                                            });
                                                          }) : ({ /* cicili#Let7605 */
                                                            __auto_type left  = match7446 ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn7607 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let7611 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn7613 */
                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let7620 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn7622 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                          });
                                        }));
                                    });
                                  });
                                }));
                            }) : ({ /* cicili#Let7629 */
                              typeof((((right_child -> __h_data ). Internal ). __h_0_mem )) right_child_items ;
                              typeof((((right_child -> __h_data ). Internal ). __h_1_mem )) right_child_children ;
                              // ----------
                              ;
                              ({ /* cicili#Let7631 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7632 */
                                        (right_child_items  =  (((right_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn7634 */
                                        (right_child_children  =  (((right_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn7639 */
                                    (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let7648 */
                                        __auto_type match7646  = min_BTree_int_User (right_child );
                                        typeof((((match7646 . __h_data ). Just ). __h_0_mem )) min ;
                                        typeof((min . __h_0_mem )) min_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let7651 */
                                          bool __h_case_result  = (true  &&  (((match7646 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn7652 */
                                                  (min  =  (((match7646 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn7654 */
                                                    (min_key  =  (min . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn7659 */
                                              ({ /* cicili#Let7663 */
                                                __auto_type match7662  = delete_BTree_int_User (right_child , min_key , NULL );
                                                typeof((((match7662 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let7666 */
                                                  bool __h_case_result  = (true  &&  (((match7662 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7667 */
                                                        (nchild  =  (((match7662 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn7672 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let7680 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7682 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7686 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                            // ----------
                                                            ((void)((r2 . __h_table )-> freeData ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7695 */
                                                              Rc_BTree_int_User __ciciliC_7694 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_7694 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let7702 */
                                                      __auto_type left  = match7662 ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn7704 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let7708 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn7710 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* cicili#Let7716 */
                                        __auto_type __h_matchbox  = current ;
                                        // ----------
                                        ({ /* cicili#Let7720 */
                                          __auto_type match7719  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                          typeof((((match7719 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let7723 */
                                            bool __h_case_result  = (true  &&  (((match7719 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7724 */
                                                  (unboxed  =  (((match7719 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn7729 */
                                                ({ /* cicili#Let7734 */
                                                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                                  typeof((current_item . __h_0_mem )) current_key ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let7736 */
                                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7737 */
                                                            (current_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                            true ;
                                                          }) &&  (true  &&  ({ /* cicili#Progn7739 */
                                                              (current_key  =  (current_item . __h_0_mem ) );
                                                              true ;
                                                            }) ) ) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn7744 */
                                                        ({ /* cicili#Let7747 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7749 */
                                                            __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7753 */
                                                            __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                            // ----------
                                                            ((void)((r2 . __h_table )-> freeData ));
                                                            r2 ;
                                                          });
                                                          __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7757 */
                                                            __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7766 */
                                                              Rc_BTree_int_User __ciciliC_7765 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_7765 ;
                                                            }), r2 ));
                                                            // ----------
                                                            ((void)(r4 -> __h_table -> freeClass ));
                                                            r4 ;
                                                          });
                                                          __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7773 */
                                                            __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                                            // ----------
                                                            ((void)((r5 . __h_table )-> freeData ));
                                                            r5 ;
                                                          });
                                                          __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7777 */
                                                            __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                            // ----------
                                                            ((void)((r7 . __h_table )-> freeData ));
                                                            r7 ;
                                                          });
                                                          // ----------
                                                          ({ /* cicili#Let7783 */
                                                            __auto_type match7782  = delete_BTree_int_User (r4 , current_key , NULL );
                                                            typeof((((match7782 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let7786 */
                                                              bool __h_case_result  = (true  &&  (((match7782 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7787 */
                                                                    (ntree  =  (((match7782 . __h_data ). Right ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn7792 */
                                                                  ({ /* cicili#Let7796 */
                                                                    __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let7799 */
                                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7800 */
                                                                              (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                              true ;
                                                                            }) &&  ({ /* cicili#Progn7802 */
                                                                              (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                              true ;
                                                                            }) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7807 */
                                                                          ({ /* cicili#Let7810 */
                                                                            __auto_type __h_matchbox  = branch_items ;
                                                                            // ----------
                                                                            ({ /* cicili#Let7814 */
                                                                              __auto_type match7813  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                              typeof((((match7813 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Let7817 */
                                                                                bool __h_case_result  = (true  &&  (((match7813 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7818 */
                                                                                      (unboxed  =  (((match7813 . __h_data ). Just ). __h_0_mem ) );
                                                                                      true ;
                                                                                    }) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7823 */
                                                                                    ({ /* cicili#Let7827 */
                                                                                      typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let7829 */
                                                                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7830 */
                                                                                              (branch_head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7835 */
                                                                                            ({ /* cicili#Let7838 */
                                                                                              __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7840 */
                                                                                                __auto_type ntree  = ntree ;
                                                                                                // ----------
                                                                                                ((void)(ntree -> __h_table -> freeClass ));
                                                                                                ntree ;
                                                                                              });
                                                                                              __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7843 */
                                                                                                __auto_type tmp_result  = tmp_result ;
                                                                                                // ----------
                                                                                                ((void)(tmp_result -> __h_table -> freeClass ));
                                                                                                tmp_result ;
                                                                                              });
                                                                                              // ----------
                                                                                              Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let7852 */
                                                                                                  __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7854 */
                                                                                                    __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                                                    // ----------
                                                                                                    ((void)((r10 . __h_table )-> freeData ));
                                                                                                    r10 ;
                                                                                                  });
                                                                                                  __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7858 */
                                                                                                    __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                                    // ----------
                                                                                                    ((void)((r11 . __h_table )-> freeData ));
                                                                                                    r11 ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7867 */
                                                                                                      Rc_BTree_int_User __ciciliC_7866 (Rc_BTree_int_User __h_value ) {
                                                                                                        return clone_Rc_BTree_int_User (__h_value );
                                                                                                      }
                                                                                                      __ciciliC_7866 ;
                                                                                                    }), r11 );
                                                                                                })));
                                                                                            });
                                                                                          }) : ({ /* cicili#Let7874 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn7876 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  }) : ({ /* cicili#Let7883 */
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Progn7885 */
                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          });
                                                                        }) : ({ /* cicili#Let7892 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Let7894 */
                                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7898 */
                                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let7906 */
                                                                                    __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7908 */
                                                                                      __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                                      // ----------
                                                                                      ((void)((r9 . __h_table )-> freeData ));
                                                                                      r9 ;
                                                                                    });
                                                                                    __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7912 */
                                                                                      __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                                      // ----------
                                                                                      ((void)((r10 . __h_table )-> freeData ));
                                                                                      r10 ;
                                                                                    });
                                                                                    __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7916 */
                                                                                      __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                      // ----------
                                                                                      ((void)((r11 . __h_table )-> freeData ));
                                                                                      r11 ;
                                                                                    });
                                                                                    // ----------
                                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7925 */
                                                                                        Rc_BTree_int_User __ciciliC_7924 (Rc_BTree_int_User __h_value ) {
                                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                                        }
                                                                                        __ciciliC_7924 ;
                                                                                      }), r11 );
                                                                                  })));
                                                                              }) : ({ /* cicili#Let7932 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Progn7934 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let7941 */
                                                                  __auto_type left  = match7782 ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn7943 */
                                                                    left ;
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let7947 */
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn7949 */
                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let7956 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn7958 */
                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                });
                                              }));
                                          });
                                        });
                                      }));
                                  }) : ({ /* cicili#Let7965 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn7967 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7974 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7976 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7983 */
              // ----------
              ;
              ({ /* cicili#Progn7985 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowRightLeaf (List_BTree_int_User_pair_t left_child_items ) {
    return ({ /* cicili#Let7998 */
        __auto_type match7997  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match7997 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let8001 */
          bool __h_case_result  = (true  &&  (((match7997 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8002 */
                (right_child_rc  =  (((match7997 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8007 */
              ({ /* cicili#Let8011 */
                __auto_type match8010  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match8010 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                ;
                ({ /* cicili#Let8014 */
                  bool __h_case_result  = (true  &&  (((match8010 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8015 */
                        (right_child  =  (((match8010 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8020 */
                      ({ /* cicili#Let8024 */
                        typeof((((right_child -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                        // ----------
                        ;
                        ({ /* cicili#Let8026 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8027 */
                                (right_child_items  =  (((right_child -> __h_data ). Leaf ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8032 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let8041 */
                                  __auto_type match8039  = min_BTree_int_User (right_child );
                                  typeof((((match8039 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let8044 */
                                    bool __h_case_result  = (true  &&  (((match8039 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8045 */
                                            (min  =  (((match8039 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn8047 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn8052 */
                                        ({ /* cicili#Let8056 */
                                          __auto_type match8055  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match8055 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let8059 */
                                            bool __h_case_result  = (true  &&  (((match8055 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8060 */
                                                  (nchild  =  (((match8055 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn8065 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let8073 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8075 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8079 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8088 */
                                                        Rc_BTree_int_User __ciciliC_8087 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_8087 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let8095 */
                                                __auto_type left  = match8055 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn8097 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let8101 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn8103 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let8114 */
                                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8116 */
                                    __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                    // ----------
                                    ((void)((r1 . __h_table )-> freeData ));
                                    r1 ;
                                  });
                                  __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8120 */
                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8126 */
                                      Rc_BTree_int_User __ciciliC_8125 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_8125 ;
                                    }), r1 );
                                    // ----------
                                    ((void)((r2 . __h_table )-> freeData ));
                                    r2 ;
                                  });
                                  __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8133 */
                                    __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                    // ----------
                                    ((void)((r3 . __h_table )-> freeData ));
                                    r3 ;
                                  });
                                  __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8137 */
                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8143 */
                                      Rc_BTree_int_User __ciciliC_8142 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_8142 ;
                                    }), r3 );
                                    // ----------
                                    ((void)((r4 . __h_table )-> freeData ));
                                    r4 ;
                                  });
                                  __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8150 */
                                    __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , right_child_items ))), r4 );
                                    // ----------
                                    ((void)((r5 . __h_table )-> freeData ));
                                    r5 ;
                                  });
                                  // ----------
                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                }))));
                            }) : ({ /* cicili#Let8161 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8163 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8170 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8172 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8179 */
              // ----------
              ;
              ({ /* cicili#Progn8181 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8188 */
      __auto_type result  = ({ /* cicili#Let8191 */
        __auto_type match8190  = nth_List_Rc_BTree_int_User (index , children );
        typeof((((match8190 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let8194 */
          bool __h_case_result  = (true  &&  (((match8190 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8195 */
                (left_child_rc  =  (((match8190 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8200 */
              ({ /* cicili#Let8204 */
                __auto_type match8203  = get_Rc_BTree_int_User (left_child_rc );
                typeof((((match8203 . __h_data ). Just ). __h_0_mem )) left_child ;
                // ----------
                ;
                ({ /* cicili#Let8207 */
                  bool __h_case_result  = (true  &&  (((match8203 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8208 */
                        (left_child  =  (((match8203 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8213 */
                      ({ /* cicili#Let8217 */
                        typeof((((left_child -> __h_data ). Branch ). __h_0_mem )) left_child_items ;
                        typeof((((left_child -> __h_data ). Branch ). __h_1_mem )) left_child_children ;
                        // ----------
                        ;
                        ({ /* cicili#Let8219 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8220 */
                                  (left_child_items  =  (((left_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn8222 */
                                  (left_child_children  =  (((left_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8227 */
                              (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let8236 */
                                  __auto_type match8234  = max_BTree_int_User (left_child );
                                  typeof((((match8234 . __h_data ). Just ). __h_0_mem )) max ;
                                  typeof((max . __h_0_mem )) max_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let8239 */
                                    bool __h_case_result  = (true  &&  (((match8234 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8240 */
                                            (max  =  (((match8234 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn8242 */
                                              (max_key  =  (max . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn8247 */
                                        ({ /* cicili#Let8251 */
                                          __auto_type match8250  = delete_BTree_int_User (left_child , max_key , NULL );
                                          typeof((((match8250 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let8254 */
                                            bool __h_case_result  = (true  &&  (((match8250 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8255 */
                                                  (nchild  =  (((match8250 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn8260 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let8268 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8270 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8274 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8283 */
                                                        Rc_BTree_int_User __ciciliC_8282 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_8282 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let8290 */
                                                __auto_type left  = match8250 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn8292 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let8296 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn8298 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* cicili#Let8305 */
                              typeof((((left_child -> __h_data ). Internal ). __h_0_mem )) left_child_items ;
                              typeof((((left_child -> __h_data ). Internal ). __h_1_mem )) left_child_children ;
                              // ----------
                              ;
                              ({ /* cicili#Let8307 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8308 */
                                        (left_child_items  =  (((left_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn8310 */
                                        (left_child_children  =  (((left_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn8315 */
                                    (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let8324 */
                                        __auto_type match8322  = max_BTree_int_User (left_child );
                                        typeof((((match8322 . __h_data ). Just ). __h_0_mem )) max ;
                                        typeof((max . __h_0_mem )) max_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let8327 */
                                          bool __h_case_result  = (true  &&  (((match8322 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8328 */
                                                  (max  =  (((match8322 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn8330 */
                                                    (max_key  =  (max . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn8335 */
                                              ({ /* cicili#Let8339 */
                                                __auto_type match8338  = delete_BTree_int_User (left_child , max_key , NULL );
                                                typeof((((match8338 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let8342 */
                                                  bool __h_case_result  = (true  &&  (((match8338 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8343 */
                                                        (nchild  =  (((match8338 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8348 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let8356 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8358 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8362 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                            // ----------
                                                            ((void)((r2 . __h_table )-> freeData ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8371 */
                                                              Rc_BTree_int_User __ciciliC_8370 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_8370 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let8378 */
                                                      __auto_type left  = match8338 ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn8380 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8384 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn8386 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* cicili#Let8393 */
                                    typeof((((left_child -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let8395 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8396 */
                                            (left_child_items  =  (((left_child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn8401 */
                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let8410 */
                                              __auto_type match8408  = max_BTree_int_User (left_child );
                                              typeof((((match8408 . __h_data ). Just ). __h_0_mem )) max ;
                                              typeof((max . __h_0_mem )) max_key ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let8413 */
                                                bool __h_case_result  = (true  &&  (((match8408 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8414 */
                                                        (max  =  (((match8408 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  (true  &&  ({ /* cicili#Progn8416 */
                                                          (max_key  =  (max . __h_0_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn8421 */
                                                    ({ /* cicili#Let8425 */
                                                      __auto_type match8424  = delete_BTree_int_User (left_child , max_key , NULL );
                                                      typeof((((match8424 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let8428 */
                                                        bool __h_case_result  = (true  &&  (((match8424 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8429 */
                                                              (nchild  =  (((match8424 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8434 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let8442 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8444 */
                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8448 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                  // ----------
                                                                  ((void)((r2 . __h_table )-> freeData ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8457 */
                                                                    Rc_BTree_int_User __ciciliC_8456 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_8456 ;
                                                                  }), r2 );
                                                              })));
                                                          }) : ({ /* cicili#Let8464 */
                                                            __auto_type left  = match8424 ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn8466 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8470 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn8472 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* cicili#Let8479 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn8481 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8488 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8490 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8497 */
              // ----------
              ;
              ({ /* cicili#Progn8499 */
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
  Either_BTree_int_User_Error_BTree_int_User deleteInternal (Maybe_BTree_int_User tree , List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , Maybe_List_BTree_int_User_pair_t wleft , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let8527 */
        __auto_type result  = ({ /* cicili#Let8529 */
          __auto_type __h_matchbox  = current ;
          // ----------
          ({ /* cicili#Let8533 */
            __auto_type match8532  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8532 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8536 */
              bool __h_case_result  = (true  &&  (((match8532 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8537 */
                    (unboxed  =  (((match8532 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn8542 */
                  ({ /* cicili#Let8547 */
                    typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                    typeof((head . __h_0_mem )) key ;
                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                    // ----------
                    ;
                    ({ /* cicili#Let8549 */
                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8550 */
                                (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                true ;
                              }) &&  (true  &&  ({ /* cicili#Progn8552 */
                                  (key  =  (head . __h_0_mem ) );
                                  true ;
                                }) ) ) &&  ({ /* cicili#Progn8554 */
                              (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn8559 */
                          ({ /* cicili#Let8563 */
                            __auto_type match8562  = compareKey (skey , key );
                            // ----------
                            ;
                            ({ /* cicili#Let8565 */
                              bool __h_case_result  = (true  &&  ((match8562 . __h_ctor ) ==  __h_LT_t  ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn8569 */
                                  ({ /* cicili#Let8573 */
                                    __auto_type match8572  = nth_List_Rc_BTree_int_User (index , children );
                                    typeof((((match8572 . __h_data ). Just ). __h_0_mem )) child ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let8576 */
                                      bool __h_case_result  = (true  &&  (((match8572 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8577 */
                                            (child  =  (((match8572 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn8582 */
                                          ({ /* cicili#Let8586 */
                                            __auto_type match8585  = get_Rc_BTree_int_User (child );
                                            typeof((((match8585 . __h_data ). Just ). __h_0_mem )) tr ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let8589 */
                                              bool __h_case_result  = (true  &&  (((match8585 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8590 */
                                                    (tr  =  (((match8585 . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn8595 */
                                                  ({ /* cicili#Let8599 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let8601 */
                                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8605 */
                                                          ({ /* cicili#Let8609 */
                                                            __auto_type match8608  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                            typeof((((match8608 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let8612 */
                                                              bool __h_case_result  = (true  &&  (((match8608 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8613 */
                                                                    (nchild  =  (((match8608 . __h_data ). Right ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8618 */
                                                                  ({ /* cicili#Let8622 */
                                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let8624 */
                                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8625 */
                                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                              true ;
                                                                            }) &&  ({ /* cicili#Progn8627 */
                                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                              true ;
                                                                            }) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8632 */
                                                                          ({ /* cicili#Let8636 */
                                                                            __auto_type match8635  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                            typeof((((match8635 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let8639 */
                                                                              bool __h_case_result  = (true  &&  (((match8635 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8640 */
                                                                                    (wleft  =  (((match8635 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn8645 */
                                                                                  ({ /* cicili#Let8648 */
                                                                                    __auto_type __h_matchbox  = wleft ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let8652 */
                                                                                      __auto_type match8651  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match8651 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let8655 */
                                                                                        bool __h_case_result  = (true  &&  (((match8651 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8656 */
                                                                                              (unboxed  =  (((match8651 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn8661 */
                                                                                            ({ /* cicili#Let8665 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let8667 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8668 */
                                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn8670 */
                                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn8675 */
                                                                                                    ({ /* cicili#Let8678 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8680 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let8688 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let8690 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8691 */
                                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn8693 */
                                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8698 */
                                                                                                          ({ /* cicili#Let8701 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8703 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let8711 */
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Progn8713 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let8720 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn8722 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let8729 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn8731 */
                                                                                    ({ /* cicili#Let8735 */
                                                                                      __auto_type match8734  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                      typeof((((match8734 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let8738 */
                                                                                        bool __h_case_result  = (true  &&  (((match8734 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8739 */
                                                                                              (wright  =  (((match8734 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn8744 */
                                                                                            ({ /* cicili#Let8747 */
                                                                                              __auto_type __h_matchbox  = wright ;
                                                                                              // ----------
                                                                                              ({ /* cicili#Let8751 */
                                                                                                __auto_type match8750  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                                typeof((((match8750 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Let8754 */
                                                                                                  bool __h_case_result  = (true  &&  (((match8750 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8755 */
                                                                                                        (unboxed  =  (((match8750 . __h_data ). Just ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) ) );
                                                                                                  // ----------
                                                                                                  
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn8760 */
                                                                                                      ({ /* cicili#Let8764 */
                                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* cicili#Let8766 */
                                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8767 */
                                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                                  true ;
                                                                                                                }) &&  ({ /* cicili#Progn8769 */
                                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                                  true ;
                                                                                                                }) ) ) );
                                                                                                          // ----------
                                                                                                          
                                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn8774 */
                                                                                                              ({ /* cicili#Let8777 */
                                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8779 */
                                                                                                                  __auto_type nchild  = nchild ;
                                                                                                                  // ----------
                                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                  nchild ;
                                                                                                                });
                                                                                                                // ----------
                                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                              });
                                                                                                            }) : ({ /* cicili#Let8787 */
                                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* cicili#Let8789 */
                                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8790 */
                                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                        true ;
                                                                                                                      }) &&  ({ /* cicili#Progn8792 */
                                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                        true ;
                                                                                                                      }) ) ) );
                                                                                                                // ----------
                                                                                                                
                                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn8797 */
                                                                                                                    ({ /* cicili#Let8800 */
                                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8802 */
                                                                                                                        __auto_type nchild  = nchild ;
                                                                                                                        // ----------
                                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                        nchild ;
                                                                                                                      });
                                                                                                                      // ----------
                                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                    });
                                                                                                                  }) : ({ /* cicili#Let8810 */
                                                                                                                    // ----------
                                                                                                                    ;
                                                                                                                    ({ /* cicili#Progn8812 */
                                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                    });
                                                                                                                  }));
                                                                                                              });
                                                                                                            }));
                                                                                                        });
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let8819 */
                                                                                                      // ----------
                                                                                                      ;
                                                                                                      ({ /* cicili#Progn8821 */
                                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let8828 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn8830 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* cicili#Let8837 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn8839 */
                                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let8847 */
                                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8849 */
                                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                                  // ----------
                                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                                  r1 ;
                                                                                });
                                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8853 */
                                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                                  // ----------
                                                                                  ((void)((r2 . __h_table )-> freeData ));
                                                                                  r2 ;
                                                                                });
                                                                                // ----------
                                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8862 */
                                                                                    Rc_BTree_int_User __ciciliC_8861 (Rc_BTree_int_User __h_value ) {
                                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                                    }
                                                                                    __ciciliC_8861 ;
                                                                                  }), r2 );
                                                                              })));
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let8869 */
                                                                  __auto_type left  = match8608 ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn8871 */
                                                                    left ;
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let8875 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let8877 */
                                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn8881 */
                                                                ({ /* cicili#Let8885 */
                                                                  __auto_type match8884  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                                  typeof((((match8884 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let8888 */
                                                                    bool __h_case_result  = (true  &&  (((match8884 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8889 */
                                                                          (nchild  =  (((match8884 . __h_data ). Right ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn8894 */
                                                                        ({ /* cicili#Let8898 */
                                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Let8900 */
                                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8901 */
                                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) &&  ({ /* cicili#Progn8903 */
                                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                                    true ;
                                                                                  }) ) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn8908 */
                                                                                ({ /* cicili#Let8912 */
                                                                                  __auto_type match8911  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                                  typeof((((match8911 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Let8915 */
                                                                                    bool __h_case_result  = (true  &&  (((match8911 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8916 */
                                                                                          (wleft  =  (((match8911 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn8921 */
                                                                                        ({ /* cicili#Let8924 */
                                                                                          __auto_type __h_matchbox  = wleft ;
                                                                                          // ----------
                                                                                          ({ /* cicili#Let8928 */
                                                                                            __auto_type match8927  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                            typeof((((match8927 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Let8931 */
                                                                                              bool __h_case_result  = (true  &&  (((match8927 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8932 */
                                                                                                    (unboxed  =  (((match8927 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn8937 */
                                                                                                  ({ /* cicili#Let8941 */
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let8943 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8944 */
                                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn8946 */
                                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8951 */
                                                                                                          ({ /* cicili#Let8954 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8956 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let8964 */
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Let8966 */
                                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8967 */
                                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                    true ;
                                                                                                                  }) &&  ({ /* cicili#Progn8969 */
                                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                    true ;
                                                                                                                  }) ) ) );
                                                                                                            // ----------
                                                                                                            
                                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn8974 */
                                                                                                                ({ /* cicili#Let8977 */
                                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8979 */
                                                                                                                    __auto_type nchild  = nchild ;
                                                                                                                    // ----------
                                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                    nchild ;
                                                                                                                  });
                                                                                                                  // ----------
                                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                                });
                                                                                                              }) : ({ /* cicili#Let8987 */
                                                                                                                // ----------
                                                                                                                ;
                                                                                                                ({ /* cicili#Progn8989 */
                                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                                });
                                                                                                              }));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let8996 */
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* cicili#Progn8998 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let9005 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Progn9007 */
                                                                                          ({ /* cicili#Let9011 */
                                                                                            __auto_type match9010  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                            typeof((((match9010 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Let9014 */
                                                                                              bool __h_case_result  = (true  &&  (((match9010 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9015 */
                                                                                                    (wright  =  (((match9010 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9020 */
                                                                                                  ({ /* cicili#Let9023 */
                                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                                    // ----------
                                                                                                    ({ /* cicili#Let9027 */
                                                                                                      __auto_type match9026  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                                      typeof((((match9026 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                                      // ----------
                                                                                                      ;
                                                                                                      ({ /* cicili#Let9030 */
                                                                                                        bool __h_case_result  = (true  &&  (((match9026 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9031 */
                                                                                                              (unboxed  =  (((match9026 . __h_data ). Just ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) ) );
                                                                                                        // ----------
                                                                                                        
                                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9036 */
                                                                                                            ({ /* cicili#Let9040 */
                                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* cicili#Let9042 */
                                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9043 */
                                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                                        true ;
                                                                                                                      }) &&  ({ /* cicili#Progn9045 */
                                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                                        true ;
                                                                                                                      }) ) ) );
                                                                                                                // ----------
                                                                                                                
                                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9050 */
                                                                                                                    ({ /* cicili#Let9053 */
                                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9055 */
                                                                                                                        __auto_type nchild  = nchild ;
                                                                                                                        // ----------
                                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                        nchild ;
                                                                                                                      });
                                                                                                                      // ----------
                                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                    });
                                                                                                                  }) : ({ /* cicili#Let9063 */
                                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                                    // ----------
                                                                                                                    ;
                                                                                                                    ({ /* cicili#Let9065 */
                                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9066 */
                                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                              true ;
                                                                                                                            }) &&  ({ /* cicili#Progn9068 */
                                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                              true ;
                                                                                                                            }) ) ) );
                                                                                                                      // ----------
                                                                                                                      
                                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9073 */
                                                                                                                          ({ /* cicili#Let9076 */
                                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9078 */
                                                                                                                              __auto_type nchild  = nchild ;
                                                                                                                              // ----------
                                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                              nchild ;
                                                                                                                            });
                                                                                                                            // ----------
                                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                          });
                                                                                                                        }) : ({ /* cicili#Let9086 */
                                                                                                                          // ----------
                                                                                                                          ;
                                                                                                                          ({ /* cicili#Progn9088 */
                                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                          });
                                                                                                                        }));
                                                                                                                    });
                                                                                                                  }));
                                                                                                              });
                                                                                                            });
                                                                                                          }) : ({ /* cicili#Let9095 */
                                                                                                            // ----------
                                                                                                            ;
                                                                                                            ({ /* cicili#Progn9097 */
                                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                            });
                                                                                                          }));
                                                                                                      });
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let9104 */
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* cicili#Progn9106 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              }) : ({ /* cicili#Let9113 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Progn9115 */
                                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let9123 */
                                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9125 */
                                                                                        __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                                        // ----------
                                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                                        r1 ;
                                                                                      });
                                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9129 */
                                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                                        // ----------
                                                                                        ((void)((r2 . __h_table )-> freeData ));
                                                                                        r2 ;
                                                                                      });
                                                                                      // ----------
                                                                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9138 */
                                                                                          Rc_BTree_int_User __ciciliC_9137 (Rc_BTree_int_User __h_value ) {
                                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                                          }
                                                                                          __ciciliC_9137 ;
                                                                                        }), r2 );
                                                                                    })));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let9145 */
                                                                        __auto_type left  = match8884 ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn9147 */
                                                                          left ;
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let9151 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn9153 */
                                                                  ({ /* cicili#Let9157 */
                                                                    __auto_type match9156  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                                    typeof((((match9156 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let9160 */
                                                                      bool __h_case_result  = (true  &&  (((match9156 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9161 */
                                                                            (nchild  =  (((match9156 . __h_data ). Right ). __h_0_mem ) );
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9166 */
                                                                          borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                                        }) : ({ /* cicili#Let9171 */
                                                                          __auto_type left  = match9156 ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn9173 */
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
                                                }) : ({ /* cicili#Let9177 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn9179 */
                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let9186 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn9188 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let9195 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let9197 */
                                    bool __h_case_result  = (true  &&  ((match8562 . __h_ctor ) ==  __h_EQ_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn9201 */
                                        ({ /* cicili#Let9204 */
                                          __auto_type result  = borrowInternal_BTree_int_User (tree , items , children , current , index , callback );
                                          // ----------
                                          { /* cicili#Let9209 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Let9211 */
                                              bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* cicili#Block9216 */
                                                  if (callback )
                                                    { /* cicili#Block9220 */
                                                      callback (head );
                                                    }
                                                }
                                            });
                                          }
                                          result ;
                                        });
                                      }) : ({ /* cicili#Let9224 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn9226 */
                                          deleteInternal (tree , items , children , Just_List_BTree_int_User_pair_t (current ), tail , (index  +  1 ));
                                        });
                                      }));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let9231 */
                          // ----------
                          ;
                          ({ /* cicili#Progn9233 */
                            ({ /* cicili#Let9237 */
                              __auto_type match9236  = nth_List_Rc_BTree_int_User (index , children );
                              typeof((((match9236 . __h_data ). Just ). __h_0_mem )) child ;
                              // ----------
                              ;
                              ({ /* cicili#Let9240 */
                                bool __h_case_result  = (true  &&  (((match9236 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9241 */
                                      (child  =  (((match9236 . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn9246 */
                                    ({ /* cicili#Let9250 */
                                      __auto_type match9249  = get_Rc_BTree_int_User (child );
                                      typeof((((match9249 . __h_data ). Just ). __h_0_mem )) tr ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let9253 */
                                        bool __h_case_result  = (true  &&  (((match9249 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9254 */
                                              (tr  =  (((match9249 . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn9259 */
                                            ({ /* cicili#Let9263 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Let9265 */
                                                bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn9269 */
                                                    ({ /* cicili#Let9273 */
                                                      __auto_type match9272  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                      typeof((((match9272 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let9276 */
                                                        bool __h_case_result  = (true  &&  (((match9272 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9277 */
                                                              (nchild  =  (((match9272 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn9282 */
                                                            ({ /* cicili#Let9286 */
                                                              typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                              typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let9288 */
                                                                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9289 */
                                                                        (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                        true ;
                                                                      }) &&  ({ /* cicili#Progn9291 */
                                                                        (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                        true ;
                                                                      }) ) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn9296 */
                                                                    ({ /* cicili#Let9300 */
                                                                      __auto_type match9299  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                      typeof((((match9299 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let9303 */
                                                                        bool __h_case_result  = (true  &&  (((match9299 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9304 */
                                                                              (wleft  =  (((match9299 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9309 */
                                                                            ({ /* cicili#Let9312 */
                                                                              __auto_type __h_matchbox  = wleft ;
                                                                              // ----------
                                                                              ({ /* cicili#Let9316 */
                                                                                __auto_type match9315  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match9315 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let9319 */
                                                                                  bool __h_case_result  = (true  &&  (((match9315 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9320 */
                                                                                        (unboxed  =  (((match9315 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9325 */
                                                                                      ({ /* cicili#Let9329 */
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Let9331 */
                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9332 */
                                                                                                  (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) &&  ({ /* cicili#Progn9334 */
                                                                                                  (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn9339 */
                                                                                              ({ /* cicili#Let9342 */
                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9344 */
                                                                                                  __auto_type nchild  = nchild ;
                                                                                                  // ----------
                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                  nchild ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let9352 */
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let9354 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9355 */
                                                                                                        (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn9357 */
                                                                                                        (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9362 */
                                                                                                    ({ /* cicili#Let9365 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9367 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let9375 */
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Progn9377 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let9384 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn9386 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let9393 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn9395 */
                                                                              ({ /* cicili#Let9399 */
                                                                                __auto_type match9398  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                typeof((((match9398 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let9402 */
                                                                                  bool __h_case_result  = (true  &&  (((match9398 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9403 */
                                                                                        (wright  =  (((match9398 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9408 */
                                                                                      ({ /* cicili#Let9411 */
                                                                                        __auto_type __h_matchbox  = wright ;
                                                                                        // ----------
                                                                                        ({ /* cicili#Let9415 */
                                                                                          __auto_type match9414  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                          typeof((((match9414 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Let9418 */
                                                                                            bool __h_case_result  = (true  &&  (((match9414 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9419 */
                                                                                                  (unboxed  =  (((match9414 . __h_data ). Just ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9424 */
                                                                                                ({ /* cicili#Let9428 */
                                                                                                  typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                  typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* cicili#Let9430 */
                                                                                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9431 */
                                                                                                            (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                            true ;
                                                                                                          }) &&  ({ /* cicili#Progn9433 */
                                                                                                            (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9438 */
                                                                                                        ({ /* cicili#Let9441 */
                                                                                                          __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9443 */
                                                                                                            __auto_type nchild  = nchild ;
                                                                                                            // ----------
                                                                                                            ((void)(nchild -> __h_table -> freeClass ));
                                                                                                            nchild ;
                                                                                                          });
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* cicili#Let9451 */
                                                                                                        typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                        typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* cicili#Let9453 */
                                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9454 */
                                                                                                                  (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                  true ;
                                                                                                                }) &&  ({ /* cicili#Progn9456 */
                                                                                                                  (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                  true ;
                                                                                                                }) ) ) );
                                                                                                          // ----------
                                                                                                          
                                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn9461 */
                                                                                                              ({ /* cicili#Let9464 */
                                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9466 */
                                                                                                                  __auto_type nchild  = nchild ;
                                                                                                                  // ----------
                                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                  nchild ;
                                                                                                                });
                                                                                                                // ----------
                                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                              });
                                                                                                            }) : ({ /* cicili#Let9474 */
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* cicili#Progn9476 */
                                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                              });
                                                                                                            }));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                });
                                                                                              }) : ({ /* cicili#Let9483 */
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Progn9485 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let9492 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn9494 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  }) : ({ /* cicili#Let9501 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn9503 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let9511 */
                                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9513 */
                                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                            // ----------
                                                                            ((void)((r1 . __h_table )-> freeData ));
                                                                            r1 ;
                                                                          });
                                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9517 */
                                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                            // ----------
                                                                            ((void)((r2 . __h_table )-> freeData ));
                                                                            r2 ;
                                                                          });
                                                                          // ----------
                                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9526 */
                                                                              Rc_BTree_int_User __ciciliC_9525 (Rc_BTree_int_User __h_value ) {
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_9525 ;
                                                                            }), r2 );
                                                                        })));
                                                                    });
                                                                  }));
                                                              });
                                                            });
                                                          }) : ({ /* cicili#Let9533 */
                                                            __auto_type left  = match9272 ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn9535 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let9539 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let9541 */
                                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn9545 */
                                                          ({ /* cicili#Let9549 */
                                                            __auto_type match9548  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                            typeof((((match9548 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let9552 */
                                                              bool __h_case_result  = (true  &&  (((match9548 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9553 */
                                                                    (nchild  =  (((match9548 . __h_data ). Right ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn9558 */
                                                                  ({ /* cicili#Let9562 */
                                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let9564 */
                                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9565 */
                                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                              true ;
                                                                            }) &&  ({ /* cicili#Progn9567 */
                                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                              true ;
                                                                            }) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9572 */
                                                                          ({ /* cicili#Let9576 */
                                                                            __auto_type match9575  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                            typeof((((match9575 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let9579 */
                                                                              bool __h_case_result  = (true  &&  (((match9575 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9580 */
                                                                                    (wleft  =  (((match9575 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9585 */
                                                                                  ({ /* cicili#Let9588 */
                                                                                    __auto_type __h_matchbox  = wleft ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let9592 */
                                                                                      __auto_type match9591  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match9591 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let9595 */
                                                                                        bool __h_case_result  = (true  &&  (((match9591 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9596 */
                                                                                              (unboxed  =  (((match9591 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9601 */
                                                                                            ({ /* cicili#Let9605 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let9607 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9608 */
                                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn9610 */
                                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9615 */
                                                                                                    ({ /* cicili#Let9618 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9620 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let9628 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let9630 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9631 */
                                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn9633 */
                                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9638 */
                                                                                                          ({ /* cicili#Let9641 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9643 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let9651 */
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Progn9653 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let9660 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn9662 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let9669 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn9671 */
                                                                                    ({ /* cicili#Let9675 */
                                                                                      __auto_type match9674  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                      typeof((((match9674 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let9678 */
                                                                                        bool __h_case_result  = (true  &&  (((match9674 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9679 */
                                                                                              (wright  =  (((match9674 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9684 */
                                                                                            ({ /* cicili#Let9687 */
                                                                                              __auto_type __h_matchbox  = wright ;
                                                                                              // ----------
                                                                                              ({ /* cicili#Let9691 */
                                                                                                __auto_type match9690  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                                typeof((((match9690 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Let9694 */
                                                                                                  bool __h_case_result  = (true  &&  (((match9690 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9695 */
                                                                                                        (unboxed  =  (((match9690 . __h_data ). Just ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) ) );
                                                                                                  // ----------
                                                                                                  
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9700 */
                                                                                                      ({ /* cicili#Let9704 */
                                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* cicili#Let9706 */
                                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9707 */
                                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                                  true ;
                                                                                                                }) &&  ({ /* cicili#Progn9709 */
                                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                                  true ;
                                                                                                                }) ) ) );
                                                                                                          // ----------
                                                                                                          
                                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn9714 */
                                                                                                              ({ /* cicili#Let9717 */
                                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9719 */
                                                                                                                  __auto_type nchild  = nchild ;
                                                                                                                  // ----------
                                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                  nchild ;
                                                                                                                });
                                                                                                                // ----------
                                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                              });
                                                                                                            }) : ({ /* cicili#Let9727 */
                                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* cicili#Let9729 */
                                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9730 */
                                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                        true ;
                                                                                                                      }) &&  ({ /* cicili#Progn9732 */
                                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                        true ;
                                                                                                                      }) ) ) );
                                                                                                                // ----------
                                                                                                                
                                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9737 */
                                                                                                                    ({ /* cicili#Let9740 */
                                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9742 */
                                                                                                                        __auto_type nchild  = nchild ;
                                                                                                                        // ----------
                                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                        nchild ;
                                                                                                                      });
                                                                                                                      // ----------
                                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                                    });
                                                                                                                  }) : ({ /* cicili#Let9750 */
                                                                                                                    // ----------
                                                                                                                    ;
                                                                                                                    ({ /* cicili#Progn9752 */
                                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                                    });
                                                                                                                  }));
                                                                                                              });
                                                                                                            }));
                                                                                                        });
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let9759 */
                                                                                                      // ----------
                                                                                                      ;
                                                                                                      ({ /* cicili#Progn9761 */
                                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let9768 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn9770 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* cicili#Let9777 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn9779 */
                                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let9787 */
                                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9789 */
                                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                                  // ----------
                                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                                  r1 ;
                                                                                });
                                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9793 */
                                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                                  // ----------
                                                                                  ((void)((r2 . __h_table )-> freeData ));
                                                                                  r2 ;
                                                                                });
                                                                                // ----------
                                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9802 */
                                                                                    Rc_BTree_int_User __ciciliC_9801 (Rc_BTree_int_User __h_value ) {
                                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                                    }
                                                                                    __ciciliC_9801 ;
                                                                                  }), r2 );
                                                                              })));
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let9809 */
                                                                  __auto_type left  = match9548 ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn9811 */
                                                                    left ;
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let9815 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn9817 */
                                                            ({ /* cicili#Let9821 */
                                                              __auto_type match9820  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                              typeof((((match9820 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let9824 */
                                                                bool __h_case_result  = (true  &&  (((match9820 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9825 */
                                                                      (nchild  =  (((match9820 . __h_data ). Right ). __h_0_mem ) );
                                                                      true ;
                                                                    }) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn9830 */
                                                                    borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                                  }) : ({ /* cicili#Let9835 */
                                                                    __auto_type left  = match9820 ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn9837 */
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
                                          }) : ({ /* cicili#Let9841 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn9843 */
                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                            });
                                          }));
                                      });
                                    });
                                  }) : ({ /* cicili#Let9850 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn9852 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                    });
                                  }));
                              });
                            });
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let9859 */
                  // ----------
                  ;
                  ({ /* cicili#Progn9861 */
                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                  });
                }));
            });
          });
        });
        // ----------
        ({ /* cicili#Let9870 */
          __auto_type rs  = ({ /* cicili#Let9873 */
            typeof((((result . __h_data ). Right ). __h_0_mem )) ntr ;
            // ----------
            ;
            ({ /* cicili#Let9875 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9876 */
                    (ntr  =  (((result . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn9881 */
                  ({ /* cicili#Let9885 */
                    typeof((((ntr -> __h_data ). Branch ). __h_0_mem )) items ;
                    typeof((((ntr -> __h_data ). Branch ). __h_1_mem )) children ;
                    // ----------
                    ;
                    ({ /* cicili#Let9887 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9888 */
                              (items  =  (((ntr -> __h_data ). Branch ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn9890 */
                              (children  =  (((ntr -> __h_data ). Branch ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn9895 */
                          ({ /* cicili#Let9898 */
                            __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let9906 */
                                typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                // ----------
                                ;
                                ({ /* cicili#Let9908 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9909 */
                                        (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn9914 */
                                      ({ /* cicili#Let9918 */
                                        typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let9920 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9921 */
                                                (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn9926 */
                                              ({ /* cicili#Let9930 */
                                                __auto_type match9929  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                typeof((((match9929 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let9933 */
                                                  bool __h_case_result  = (true  &&  (((match9929 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9934 */
                                                        (bitem  =  (((match9929 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn9939 */
                                                      ({ /* cicili#Let9942 */
                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9944 */
                                                          __auto_type ntr  = ntr ;
                                                          // ----------
                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                          ntr ;
                                                        });
                                                        // ----------
                                                        Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9957 */
                                                            Rc_BTree_int_User __ciciliC_9956 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_9956 ;
                                                          }), children )));
                                                      });
                                                    }) : ({ /* cicili#Let9964 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn9966 */
                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let9973 */
                                              typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let9975 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9976 */
                                                      (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn9981 */
                                                    ({ /* cicili#Let9985 */
                                                      __auto_type match9984  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match9984 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let9988 */
                                                        bool __h_case_result  = (true  &&  (((match9984 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9989 */
                                                              (bitem  =  (((match9984 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn9994 */
                                                            ({ /* cicili#Let9997 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9999 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10012 */
                                                                  Rc_BTree_int_User __ciciliC_10011 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_10011 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let10019 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn10021 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10028 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn10030 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let10037 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn10039 */
                                        (((items_len  ==  0 )) ? ({ /* cicili#Let10043 */
                                            __auto_type __h_matchbox  = children ;
                                            // ----------
                                            ({ /* cicili#Let10047 */
                                              __auto_type match10046  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                              typeof((((match10046 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let10050 */
                                                bool __h_case_result  = (true  &&  (((match10046 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10051 */
                                                      (unboxed  =  (((match10046 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn10056 */
                                                    ({ /* cicili#Let10060 */
                                                      typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let10062 */
                                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10063 */
                                                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10068 */
                                                            ({ /* cicili#Let10071 */
                                                              __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                              // ----------
                                                              ({ /* cicili#Let10076 */
                                                                __auto_type match10075  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                typeof((((match10075 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let10079 */
                                                                  bool __h_case_result  = (true  &&  (((match10075 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10080 */
                                                                        (unboxed  =  (((match10075 . __h_data ). Just ). __h_0_mem ) );
                                                                        true ;
                                                                      }) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn10085 */
                                                                      ({ /* cicili#Let10089 */
                                                                        __auto_type chtr  = unboxed ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn10091 */
                                                                          ({ /* cicili#Let10094 */
                                                                            __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10096 */
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
                                                                    }) : ({ /* cicili#Let10103 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn10105 */
                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            });
                                                          }) : ({ /* cicili#Let10112 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn10114 */
                                                              result ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10118 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn10120 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : result );
                                      });
                                    }));
                                });
                              }));
                          });
                        }) : ({ /* cicili#Let10127 */
                          typeof((((ntr -> __h_data ). Internal ). __h_0_mem )) items ;
                          typeof((((ntr -> __h_data ). Internal ). __h_1_mem )) children ;
                          // ----------
                          ;
                          ({ /* cicili#Let10129 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10130 */
                                    (items  =  (((ntr -> __h_data ). Internal ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn10132 */
                                    (children  =  (((ntr -> __h_data ). Internal ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn10137 */
                                ({ /* cicili#Let10140 */
                                  __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let10148 */
                                      typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let10150 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10151 */
                                              (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn10156 */
                                            ({ /* cicili#Let10160 */
                                              typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let10162 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn10163 */
                                                      (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn10168 */
                                                    ({ /* cicili#Let10172 */
                                                      __auto_type match10171  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match10171 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let10175 */
                                                        bool __h_case_result  = (true  &&  (((match10171 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10176 */
                                                              (bitem  =  (((match10171 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10181 */
                                                            ({ /* cicili#Let10184 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10186 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10199 */
                                                                  Rc_BTree_int_User __ciciliC_10198 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_10198 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let10206 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn10208 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10215 */
                                                    typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let10217 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn10218 */
                                                            (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn10223 */
                                                          ({ /* cicili#Let10227 */
                                                            __auto_type match10226  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                            typeof((((match10226 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let10230 */
                                                              bool __h_case_result  = (true  &&  (((match10226 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10231 */
                                                                    (bitem  =  (((match10226 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn10236 */
                                                                  ({ /* cicili#Let10239 */
                                                                    __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10241 */
                                                                      __auto_type ntr  = ntr ;
                                                                      // ----------
                                                                      ((void)(ntr -> __h_table -> freeClass ));
                                                                      ntr ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10254 */
                                                                        Rc_BTree_int_User __ciciliC_10253 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_10253 ;
                                                                      }), children )));
                                                                  });
                                                                }) : ({ /* cicili#Let10261 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn10263 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let10270 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn10272 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let10279 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn10281 */
                                              (((items_len  ==  0 )) ? ({ /* cicili#Let10285 */
                                                  __auto_type __h_matchbox  = children ;
                                                  // ----------
                                                  ({ /* cicili#Let10289 */
                                                    __auto_type match10288  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                    typeof((((match10288 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let10292 */
                                                      bool __h_case_result  = (true  &&  (((match10288 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10293 */
                                                            (unboxed  =  (((match10288 . __h_data ). Just ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn10298 */
                                                          ({ /* cicili#Let10302 */
                                                            typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let10304 */
                                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10305 */
                                                                    (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn10310 */
                                                                  ({ /* cicili#Let10313 */
                                                                    __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                                    // ----------
                                                                    ({ /* cicili#Let10318 */
                                                                      __auto_type match10317  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match10317 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let10321 */
                                                                        bool __h_case_result  = (true  &&  (((match10317 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10322 */
                                                                              (unboxed  =  (((match10317 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn10327 */
                                                                            ({ /* cicili#Let10331 */
                                                                              __auto_type chtr  = unboxed ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Progn10333 */
                                                                                ({ /* cicili#Let10336 */
                                                                                  __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10338 */
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
                                                                          }) : ({ /* cicili#Let10345 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn10347 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let10354 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn10356 */
                                                                    result ;
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let10360 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn10362 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : result );
                                            });
                                          }));
                                      });
                                    }));
                                });
                              }) : ({ /* cicili#Let10369 */
                                // ----------
                                ;
                                ({ /* cicili#Progn10371 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let10375 */
                  // ----------
                  ;
                  ({ /* cicili#Progn10377 */
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
    return ({ /* cicili#Let10392 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let10396 */
          __auto_type match10395  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match10395 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let10399 */
            bool __h_case_result  = (true  &&  (((match10395 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10400 */
                  (unboxed  =  (((match10395 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn10405 */
                ({ /* cicili#Let10410 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let10412 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10413 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn10415 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn10417 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn10422 */
                        ({ /* cicili#Let10426 */
                          __auto_type match10425  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let10428 */
                            bool __h_case_result  = (true  &&  ((match10425 . __h_ctor ) ==  __h_LT_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn10432 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                              }) : ({ /* cicili#Let10439 */
                                // ----------
                                ;
                                ({ /* cicili#Let10441 */
                                  bool __h_case_result  = (true  &&  ((match10425 . __h_ctor ) ==  __h_EQ_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn10445 */
                                      ({ /* cicili#Let10448 */
                                        __auto_type result  = Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current )));
                                        // ----------
                                        { /* cicili#Let10457 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Let10459 */
                                            bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                            // ----------
                                            
                                            if (__h_case_result )
                                              { /* cicili#Block10464 */
                                                if (callback )
                                                  { /* cicili#Block10468 */
                                                    callback (head );
                                                  }
                                              }
                                          });
                                        }
                                        result ;
                                      });
                                    }) : ({ /* cicili#Let10472 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn10474 */
                                        deleteLeaf (items , tail , (index  +  1 ));
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let10478 */
                        // ----------
                        ;
                        ({ /* cicili#Progn10480 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let10487 */
                // ----------
                ;
                ({ /* cicili#Progn10489 */
                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let10497 */
      __auto_type result  = ({ /* cicili#Let10500 */
        typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
        typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
        // ----------
        ;
        ({ /* cicili#Let10502 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10503 */
                  (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10505 */
                  (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10510 */
              deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
            }) : ({ /* cicili#Let10516 */
              typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
              typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
              // ----------
              ;
              ({ /* cicili#Let10518 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10519 */
                        (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn10521 */
                        (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn10526 */
                    deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
                  }) : ({ /* cicili#Let10532 */
                    typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                    // ----------
                    ;
                    ({ /* cicili#Let10534 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10535 */
                            (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn10540 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* cicili#Let10544 */
                          // ----------
                          ;
                          ({ /* cicili#Progn10546 */
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
  return ({ /* cicili#Let10569 */
      typeof((((keys -> __h_data ). Cons ). __h_0_mem )) khead ;
      typeof((((keys -> __h_data ). Cons ). __h_1_mem )) ktail ;
      // ----------
      ;
      ({ /* cicili#Let10571 */
        bool __h_case_result  = (true  &&  (((keys -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10572 */
                (khead  =  (((keys -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10574 */
                (ktail  =  (((keys -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10579 */
            ({ /* cicili#Let10583 */
              typeof((((values -> __h_data ). Cons ). __h_0_mem )) vhead ;
              typeof((((values -> __h_data ). Cons ). __h_1_mem )) vtail ;
              // ----------
              ;
              ({ /* cicili#Let10585 */
                bool __h_case_result  = (true  &&  (((values -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10586 */
                        (vhead  =  (((values -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn10588 */
                        (vtail  =  (((values -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn10593 */
                    ({ /* cicili#Let10596 */
                      __auto_type etree  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10598 */
                        __auto_type etree  = fromLists_BTree_int_User (ktail , vtail );
                        // ----------
                        ((void)((etree . __h_table )-> freeData ));
                        etree ;
                      });
                      // ----------
                      ({ /* cicili#Let10604 */
                        typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
                        // ----------
                        ;
                        ({ /* cicili#Let10606 */
                          bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10607 */
                                (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn10612 */
                              ({ /* cicili#Let10615 */
                                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10617 */
                                  __auto_type tree  = tree ;
                                  // ----------
                                  ((void)(tree -> __h_table -> freeClass ));
                                  tree ;
                                });
                                // ----------
                                insert_BTree_int_User (tree , khead , vhead );
                              });
                            }) : ({ /* cicili#Let10623 */
                              // ----------
                              ;
                              ({ /* cicili#Progn10625 */
                                etree ;
                              });
                            }));
                        });
                      });
                    });
                  }) : ({ /* cicili#Let10629 */
                    // ----------
                    ;
                    ({ /* cicili#Progn10631 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ()));
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let10639 */
            // ----------
            ;
            ({ /* cicili#Progn10641 */
              Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ()));
            });
          }));
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], size_t len ) {
  return ({ /* cicili#Let10652 */
      BTree_int_User tree  = Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ());
      // ----------
      for (size_t i  = 0; (i  <  len  ); (++i )) {
          { /* cicili#Let10660 */
            __auto_type match10659  = insert_BTree_int_User (tree , keys [i ], values [i ]);
            typeof((((match10659 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            ;
            ({ /* cicili#Let10663 */
              bool __h_case_result  = (true  &&  (((match10659 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10664 */
                    (new_tree  =  (((match10659 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10670 */
                  { /* cicili#Block10672 */
                    free_BTree_int_User ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* cicili#Let10678 */
                  __auto_type left  = match10659 ;
                  // ----------
                  ;
                  { /* cicili#Block10680 */
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
  auto size_t showTree (int indent , BTree_int_User tree );
  size_t showChildren (int indent , List_Rc_BTree_int_User children ) {
    return ({ /* cicili#Let10689 */
        __auto_type __h_matchbox  = children ;
        // ----------
        ({ /* cicili#Let10693 */
          __auto_type match10692  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match10692 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let10696 */
            bool __h_case_result  = (true  &&  (((match10692 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10697 */
                  (unboxed  =  (((match10692 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn10702 */
                ({ /* cicili#Let10706 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let10708 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10709 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn10711 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn10716 */
                        (({ /* cicili#Let10719 */
                            __auto_type __h_matchbox  = tail ;
                            // ----------
                            ({ /* cicili#Let10723 */
                              __auto_type match10722  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                              typeof((((match10722 . __h_data ). Just ). __h_0_mem )) unboxed ;
                              // ----------
                              ;
                              ({ /* cicili#Let10726 */
                                bool __h_case_result  = (true  &&  (((match10722 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10727 */
                                      (unboxed  =  (((match10722 . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn10732 */
                                    ({ /* cicili#Let10736 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Let10738 */
                                        bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn10742 */
                                            ({ /* cicili#Let10746 */
                                              __auto_type match10745  = get_Rc_BTree_int_User (head );
                                              typeof((((match10745 . __h_data ). Just ). __h_0_mem )) tr ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let10749 */
                                                bool __h_case_result  = (true  &&  (((match10745 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10750 */
                                                      (tr  =  (((match10745 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn10755 */
                                                    (showTree (indent , tr ) +  fprintf (file , "\n") );
                                                  }) : ({ /* cicili#Let10759 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn10761 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let10765 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn10767 */
                                              ({ /* cicili#Let10771 */
                                                __auto_type match10770  = get_Rc_BTree_int_User (head );
                                                typeof((((match10770 . __h_data ). Just ). __h_0_mem )) tr ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let10774 */
                                                  bool __h_case_result  = (true  &&  (((match10770 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10775 */
                                                        (tr  =  (((match10770 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10780 */
                                                      showTree (indent , tr );
                                                    }) : ({ /* cicili#Let10784 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn10786 */
                                                        0;
                                                      });
                                                    }));
                                                });
                                              });
                                            });
                                          }));
                                      });
                                    });
                                  }) : ({ /* cicili#Let10790 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn10792 */
                                      0;
                                    });
                                  }));
                              });
                            });
                          }) +  showChildren (indent , tail ) );
                      }) : ({ /* cicili#Let10796 */
                        // ----------
                        ;
                        ({ /* cicili#Progn10798 */
                          0;
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let10802 */
                // ----------
                ;
                ({ /* cicili#Progn10804 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t showTree (int indent , BTree_int_User tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* cicili#Let10810 */
          typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
          // ----------
          ;
          ({ /* cicili#Let10812 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10813 */
                    (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn10815 */
                    (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn10820 */
                (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let10824 */
                    __auto_type __h_matchbox  = children ;
                    // ----------
                    ({ /* cicili#Let10828 */
                      __auto_type match10827  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                      typeof((((match10827 . __h_data ). Just ). __h_0_mem )) unboxed ;
                      // ----------
                      ;
                      ({ /* cicili#Let10831 */
                        bool __h_case_result  = (true  &&  (((match10827 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10832 */
                              (unboxed  =  (((match10827 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn10837 */
                            ({ /* cicili#Let10841 */
                              // ----------
                              ;
                              ({ /* cicili#Let10843 */
                                bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn10847 */
                                    (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                                  }) : ({ /* cicili#Let10851 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn10853 */
                                      0;
                                    });
                                  }));
                              });
                            });
                          }) : ({ /* cicili#Let10857 */
                            // ----------
                            ;
                            ({ /* cicili#Progn10859 */
                              0;
                            });
                          }));
                      });
                    });
                  }) );
              }) : ({ /* cicili#Let10863 */
                typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
                typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
                // ----------
                ;
                ({ /* cicili#Let10865 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10866 */
                          (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn10868 */
                          (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10873 */
                      (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let10877 */
                          __auto_type __h_matchbox  = children ;
                          // ----------
                          ({ /* cicili#Let10881 */
                            __auto_type match10880  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match10880 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let10884 */
                              bool __h_case_result  = (true  &&  (((match10880 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10885 */
                                    (unboxed  =  (((match10880 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn10890 */
                                  ({ /* cicili#Let10894 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let10896 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn10900 */
                                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                                        }) : ({ /* cicili#Let10904 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn10906 */
                                            0;
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let10910 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn10912 */
                                    0;
                                  });
                                }));
                            });
                          });
                        }) );
                    }) : ({ /* cicili#Let10916 */
                      typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                      // ----------
                      ;
                      ({ /* cicili#Let10918 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10919 */
                              (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn10924 */
                            show_List_BTree_int_User_pair_t (file , items );
                          }) : ({ /* cicili#Let10929 */
                            // ----------
                            ;
                            ({ /* cicili#Progn10931 */
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
  auto void traverseLeaf (List_BTree_int_User_pair_t current , Bool hasNextLeaf );
  void traverseInternal (List_BTree_int_User_pair_t currentItem , List_Rc_BTree_int_User currentChild ) {
    ({ /* cicili#Let10939 */
      __auto_type __h_matchbox  = currentChild ;
      // ----------
      { /* cicili#Let10943 */
        __auto_type match10942  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match10942 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let10946 */
          bool __h_case_result  = (true  &&  (((match10942 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10947 */
                (unboxed  =  (((match10942 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block10953 */
              { /* cicili#Let10957 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) wheadC ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tailC ;
                // ----------
                ;
                ({ /* cicili#Let10959 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10960 */
                          (wheadC  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn10962 */
                          (tailC  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block10968 */
                      { /* cicili#Let10972 */
                        __auto_type match10971  = get_Rc_BTree_int_User (wheadC );
                        typeof((((match10971 . __h_data ). Just ). __h_0_mem )) headC ;
                        // ----------
                        ;
                        ({ /* cicili#Let10975 */
                          bool __h_case_result  = (true  &&  (((match10971 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10976 */
                                (headC  =  (((match10971 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          if (__h_case_result )
                            { /* cicili#Block10982 */
                              ({ /* cicili#Let10985 */
                                __auto_type __h_matchbox  = tailC ;
                                // ----------
                                { /* cicili#Let10989 */
                                  __auto_type match10988  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                  typeof((((match10988 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let10992 */
                                    bool __h_case_result  = (true  &&  (((match10988 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10993 */
                                          (unboxed  =  (((match10988 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block10999 */
                                        { /* cicili#Let11003 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Let11005 */
                                            bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                            // ----------
                                            
                                            if (__h_case_result )
                                              { /* cicili#Block11010 */
                                                { /* cicili#Block11012 */
                                                  { /* cicili#Let11016 */
                                                    typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                                    typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let11018 */
                                                      bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11019 */
                                                              (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn11021 */
                                                              (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      if (__h_case_result )
                                                        { /* cicili#Block11027 */
                                                          traverseInternal (items , children );
                                                        }
                                                      else
                                                        { /* cicili#Let11032 */
                                                          typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                                          typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let11034 */
                                                            bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11035 */
                                                                    (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn11037 */
                                                                    (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            if (__h_case_result )
                                                              { /* cicili#Block11043 */
                                                                traverseInternal (items , children );
                                                              }
                                                            else
                                                              { /* cicili#Let11048 */
                                                                typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let11050 */
                                                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11051 */
                                                                        (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                                        true ;
                                                                      }) ) );
                                                                  // ----------
                                                                  
                                                                  if (__h_case_result )
                                                                    { /* cicili#Block11057 */
                                                                      traverseLeaf (items , True ());
                                                                    }
                                                                });
                                                              }
                                                          });
                                                        }
                                                    });
                                                  }
                                                  ({ /* cicili#Let11060 */
                                                    __auto_type __h_matchbox  = currentItem ;
                                                    // ----------
                                                    { /* cicili#Let11064 */
                                                      __auto_type match11063  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match11063 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let11067 */
                                                        bool __h_case_result  = (true  &&  (((match11063 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11068 */
                                                              (unboxed  =  (((match11063 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        if (__h_case_result )
                                                          { /* cicili#Block11074 */
                                                            { /* cicili#Let11078 */
                                                              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) headI ;
                                                              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let11080 */
                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11081 */
                                                                        (headI  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                        true ;
                                                                      }) &&  ({ /* cicili#Progn11083 */
                                                                        (tailI  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                                        true ;
                                                                      }) ) ) );
                                                                // ----------
                                                                
                                                                if (__h_case_result )
                                                                  { /* cicili#Block11089 */
                                                                    { /* cicili#Block11091 */
                                                                      callback (headI , True ());
                                                                      traverseInternal (tailI , tailC );
                                                                    }
                                                                  }
                                                              });
                                                            }
                                                          }
                                                        else
                                                          { /* cicili#Let11096 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let11098 */
                                                              bool __h_case_result  = (true  &&  ((match11063 . __h_ctor ) ==  __h_Nothing_t  ) );
                                                              // ----------
                                                              
                                                              if (__h_case_result )
                                                                { /* cicili#Block11103 */
                                                                  False ();
                                                                }
                                                            });
                                                          }
                                                      });
                                                    }
                                                  });
                                                }
                                              }
                                            else
                                              { /* cicili#Let11108 */
                                                // ----------
                                                ;
                                                { /* cicili#Block11110 */
                                                  { /* cicili#Block11112 */
                                                    { /* cicili#Let11116 */
                                                      typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                                      typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let11118 */
                                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11119 */
                                                                (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn11121 */
                                                                (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        if (__h_case_result )
                                                          { /* cicili#Block11127 */
                                                            traverseInternal (items , children );
                                                          }
                                                        else
                                                          { /* cicili#Let11132 */
                                                            typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                                            typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let11134 */
                                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11135 */
                                                                      (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                                      true ;
                                                                    }) &&  ({ /* cicili#Progn11137 */
                                                                      (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                                      true ;
                                                                    }) ) ) );
                                                              // ----------
                                                              
                                                              if (__h_case_result )
                                                                { /* cicili#Block11143 */
                                                                  traverseInternal (items , children );
                                                                }
                                                              else
                                                                { /* cicili#Let11148 */
                                                                  typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let11150 */
                                                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11151 */
                                                                          (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    if (__h_case_result )
                                                                      { /* cicili#Block11157 */
                                                                        traverseLeaf (items , False ());
                                                                      }
                                                                  });
                                                                }
                                                            });
                                                          }
                                                      });
                                                    }
                                                    ({ /* cicili#Let11160 */
                                                      __auto_type __h_matchbox  = currentItem ;
                                                      // ----------
                                                      { /* cicili#Let11164 */
                                                        __auto_type match11163  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                        typeof((((match11163 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Let11167 */
                                                          bool __h_case_result  = (true  &&  (((match11163 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11168 */
                                                                (unboxed  =  (((match11163 . __h_data ). Just ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          
                                                          if (__h_case_result )
                                                            { /* cicili#Block11174 */
                                                              { /* cicili#Let11178 */
                                                                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) headI ;
                                                                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let11180 */
                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11181 */
                                                                          (headI  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                          true ;
                                                                        }) &&  ({ /* cicili#Progn11183 */
                                                                          (tailI  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  
                                                                  if (__h_case_result )
                                                                    { /* cicili#Block11189 */
                                                                      { /* cicili#Block11191 */
                                                                        callback (headI , False ());
                                                                        traverseInternal (tailI , tailC );
                                                                      }
                                                                    }
                                                                });
                                                              }
                                                            }
                                                          else
                                                            { /* cicili#Let11196 */
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let11198 */
                                                                bool __h_case_result  = (true  &&  ((match11163 . __h_ctor ) ==  __h_Nothing_t  ) );
                                                                // ----------
                                                                
                                                                if (__h_case_result )
                                                                  { /* cicili#Block11203 */
                                                                    False ();
                                                                  }
                                                              });
                                                            }
                                                        });
                                                      }
                                                    });
                                                  }
                                                }
                                              }
                                          });
                                        }
                                      }
                                    else
                                      { /* cicili#Let11208 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Let11210 */
                                          bool __h_case_result  = (true  &&  ((match10988 . __h_ctor ) ==  __h_Nothing_t  ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block11215 */
                                              False ();
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
                });
              }
            }
          else
            { /* cicili#Let11220 */
              // ----------
              ;
              ({ /* cicili#Let11222 */
                bool __h_case_result  = (true  &&  ((match10942 . __h_ctor ) ==  __h_Nothing_t  ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block11227 */
                    False ();
                  }
              });
            }
        });
      }
    });
  }
  void traverseLeaf (List_BTree_int_User_pair_t current , Bool hasNextLeaf ) {
    ({ /* cicili#Let11233 */
      __auto_type __h_matchbox  = current ;
      // ----------
      { /* cicili#Let11237 */
        __auto_type match11236  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match11236 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let11240 */
          bool __h_case_result  = (true  &&  (((match11236 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11241 */
                (unboxed  =  (((match11236 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block11247 */
              { /* cicili#Let11251 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let11253 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11254 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn11256 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block11262 */
                      { /* cicili#Block11264 */
                        callback (head , ({ /* cicili#Let11268 */
                            // ----------
                            ;
                            ({ /* cicili#Let11270 */
                              bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor ) ==  __h_True_t  ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn11274 */
                                  hasNextLeaf ;
                                }) : ({ /* cicili#Let11278 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn11280 */
                                    ({ /* cicili#Let11283 */
                                      __auto_type __h_matchbox  = tail ;
                                      // ----------
                                      ({ /* cicili#Let11287 */
                                        __auto_type match11286  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                        typeof((((match11286 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let11290 */
                                          bool __h_case_result  = (true  &&  (((match11286 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11291 */
                                                (unboxed  =  (((match11286 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn11296 */
                                              ({ /* cicili#Let11300 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let11302 */
                                                  bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn11306 */
                                                      True ();
                                                    }) : ({ /* cicili#Let11310 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn11312 */
                                                        False ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let11316 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn11318 */
                                                False ();
                                              });
                                            }));
                                        });
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
          else
            { /* cicili#Let11323 */
              // ----------
              ;
              ({ /* cicili#Let11325 */
                bool __h_case_result  = (true  &&  ((match11236 . __h_ctor ) ==  __h_Nothing_t  ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block11330 */
                    False ();
                  }
              });
            }
        });
      }
    });
  }
  { /* cicili#Let11335 */
    typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
    typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
    // ----------
    ;
    ({ /* cicili#Let11337 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11338 */
              (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn11340 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block11346 */
          traverseInternal (items , children );
        }
      else
        { /* cicili#Let11351 */
          typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
          // ----------
          ;
          ({ /* cicili#Let11353 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11354 */
                    (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11356 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block11362 */
                traverseInternal (items , children );
              }
            else
              { /* cicili#Let11367 */
                typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                // ----------
                ;
                ({ /* cicili#Let11369 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11370 */
                        (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block11376 */
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
  auto Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current );
  Maybe_BTree_int_User_pair_t maxInternal (List_Rc_BTree_int_User current ) {
    return ({ /* cicili#Let11391 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let11395 */
          __auto_type match11394  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match11394 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let11398 */
            bool __h_case_result  = (true  &&  (((match11394 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11399 */
                  (unboxed  =  (((match11394 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11404 */
                ({ /* cicili#Let11408 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let11410 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11411 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn11413 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11418 */
                        ({ /* cicili#Let11421 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let11425 */
                            __auto_type match11424  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match11424 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let11428 */
                              bool __h_case_result  = (true  &&  (((match11424 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11429 */
                                    (unboxed  =  (((match11424 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn11434 */
                                  ({ /* cicili#Let11438 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let11440 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn11444 */
                                          ({ /* cicili#Let11448 */
                                            __auto_type match11447  = get_Rc_BTree_int_User (head );
                                            typeof((((match11447 . __h_data ). Just ). __h_0_mem )) child ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let11451 */
                                              bool __h_case_result  = (true  &&  (((match11447 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11452 */
                                                    (child  =  (((match11447 . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn11457 */
                                                  ({ /* cicili#Let11461 */
                                                    typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let11463 */
                                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn11464 */
                                                            (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn11469 */
                                                          maxInternal (nchildren );
                                                        }) : ({ /* cicili#Let11473 */
                                                          typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let11475 */
                                                            bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn11476 */
                                                                  (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn11481 */
                                                                maxInternal (nchildren );
                                                              }) : ({ /* cicili#Let11485 */
                                                                typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let11487 */
                                                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11488 */
                                                                        (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                                        true ;
                                                                      }) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn11493 */
                                                                      maxLeaf (items );
                                                                    }) : ({ /* cicili#Let11497 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn11499 */
                                                                        Nothing_BTree_int_User_pair_t ();
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let11504 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn11506 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let11511 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn11513 */
                                            maxInternal (tail );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let11517 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn11519 */
                                    Nothing_BTree_int_User_pair_t ();
                                  });
                                }));
                            });
                          });
                        });
                      }) : ({ /* cicili#Let11524 */
                        // ----------
                        ;
                        ({ /* cicili#Progn11526 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let11531 */
                // ----------
                ;
                ({ /* cicili#Progn11533 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current ) {
    return ({ /* cicili#Let11540 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let11544 */
          __auto_type match11543  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match11543 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let11547 */
            bool __h_case_result  = (true  &&  (((match11543 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11548 */
                  (unboxed  =  (((match11543 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11553 */
                ({ /* cicili#Let11557 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let11559 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11560 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn11562 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11567 */
                        ({ /* cicili#Let11570 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let11574 */
                            __auto_type match11573  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match11573 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let11577 */
                              bool __h_case_result  = (true  &&  (((match11573 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11578 */
                                    (unboxed  =  (((match11573 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn11583 */
                                  ({ /* cicili#Let11587 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let11589 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn11593 */
                                          Just_BTree_int_User_pair_t (head );
                                        }) : ({ /* cicili#Let11598 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn11600 */
                                            maxLeaf (tail );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let11604 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn11606 */
                                    Nothing_BTree_int_User_pair_t ();
                                  });
                                }));
                            });
                          });
                        });
                      }) : ({ /* cicili#Let11611 */
                        // ----------
                        ;
                        ({ /* cicili#Progn11613 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let11618 */
                // ----------
                ;
                ({ /* cicili#Progn11620 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let11626 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let11628 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn11629 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11634 */
            maxInternal (children );
          }) : ({ /* cicili#Let11638 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let11640 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn11641 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn11646 */
                  maxInternal (children );
                }) : ({ /* cicili#Let11650 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let11652 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11653 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11658 */
                        maxLeaf (items );
                      }) : ({ /* cicili#Let11662 */
                        // ----------
                        ;
                        ({ /* cicili#Progn11664 */
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
  auto Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first );
  Maybe_BTree_int_User_pair_t minInternal (List_Rc_BTree_int_User first ) {
    return ({ /* cicili#Let11678 */
        __auto_type __h_matchbox  = first ;
        // ----------
        ({ /* cicili#Let11682 */
          __auto_type match11681  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match11681 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let11685 */
            bool __h_case_result  = (true  &&  (((match11681 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11686 */
                  (unboxed  =  (((match11681 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11691 */
                ({ /* cicili#Let11695 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  // ----------
                  ;
                  ({ /* cicili#Let11697 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11698 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11703 */
                        ({ /* cicili#Let11707 */
                          __auto_type match11706  = get_Rc_BTree_int_User (head );
                          typeof((((match11706 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          ;
                          ({ /* cicili#Let11710 */
                            bool __h_case_result  = (true  &&  (((match11706 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11711 */
                                  (child  =  (((match11706 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn11716 */
                                ({ /* cicili#Let11720 */
                                  typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let11722 */
                                    bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn11723 */
                                          (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn11728 */
                                        minInternal (nchildren );
                                      }) : ({ /* cicili#Let11732 */
                                        typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let11734 */
                                          bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn11735 */
                                                (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn11740 */
                                              minInternal (nchildren );
                                            }) : ({ /* cicili#Let11744 */
                                              typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let11746 */
                                                bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11747 */
                                                      (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn11752 */
                                                    minLeaf (items );
                                                  }) : ({ /* cicili#Let11756 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn11758 */
                                                      Nothing_BTree_int_User_pair_t ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let11763 */
                                // ----------
                                ;
                                ({ /* cicili#Progn11765 */
                                  Nothing_BTree_int_User_pair_t ();
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let11770 */
                        // ----------
                        ;
                        ({ /* cicili#Progn11772 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let11777 */
                // ----------
                ;
                ({ /* cicili#Progn11779 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first ) {
    return ({ /* cicili#Let11786 */
        __auto_type __h_matchbox  = first ;
        // ----------
        ({ /* cicili#Let11790 */
          __auto_type match11789  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match11789 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let11793 */
            bool __h_case_result  = (true  &&  (((match11789 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11794 */
                  (unboxed  =  (((match11789 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11799 */
                ({ /* cicili#Let11803 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  // ----------
                  ;
                  ({ /* cicili#Let11805 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11806 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11811 */
                        Just_BTree_int_User_pair_t (head );
                      }) : ({ /* cicili#Let11816 */
                        // ----------
                        ;
                        ({ /* cicili#Progn11818 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let11823 */
                // ----------
                ;
                ({ /* cicili#Progn11825 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let11831 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let11833 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn11834 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11839 */
            minInternal (children );
          }) : ({ /* cicili#Let11843 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let11845 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn11846 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn11851 */
                  minInternal (children );
                }) : ({ /* cicili#Let11855 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let11857 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11858 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11863 */
                        minLeaf (items );
                      }) : ({ /* cicili#Let11867 */
                        // ----------
                        ;
                        ({ /* cicili#Progn11869 */
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
  return deleteWithParent_BTree_int_User (Nothing_BTree_int_User (), 0, 0, tree , skey , callback );
}
Maybe_BTree_int_User_pair_t search_BTree_int_User (BTree_int_User tree , int skey ) {
  Maybe_BTree_int_User_pair_t searchInternal (List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let11885 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let11889 */
          __auto_type match11888  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match11888 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let11892 */
            bool __h_case_result  = (true  &&  (((match11888 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11893 */
                  (unboxed  =  (((match11888 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11898 */
                ({ /* cicili#Let11903 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let11905 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11906 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn11908 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn11910 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11915 */
                        ({ /* cicili#Let11919 */
                          __auto_type match11918  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let11921 */
                            bool __h_case_result  = (true  &&  ((match11918 . __h_ctor ) ==  __h_LT_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn11925 */
                                ({ /* cicili#Let11929 */
                                  __auto_type match11928  = nth_List_Rc_BTree_int_User (index , children );
                                  typeof((((match11928 . __h_data ). Just ). __h_0_mem )) node ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let11932 */
                                    bool __h_case_result  = (true  &&  (((match11928 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11933 */
                                          (node  =  (((match11928 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn11938 */
                                        ({ /* cicili#Let11942 */
                                          __auto_type match11941  = get_Rc_BTree_int_User (node );
                                          typeof((((match11941 . __h_data ). Just ). __h_0_mem )) tr ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let11945 */
                                            bool __h_case_result  = (true  &&  (((match11941 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11946 */
                                                  (tr  =  (((match11941 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn11951 */
                                                search_BTree_int_User (tr , skey );
                                              }) : ({ /* cicili#Let11956 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn11958 */
                                                  Nothing_BTree_int_User_pair_t ();
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let11963 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn11965 */
                                          Nothing_BTree_int_User_pair_t ();
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let11970 */
                                // ----------
                                ;
                                ({ /* cicili#Let11972 */
                                  bool __h_case_result  = (true  &&  ((match11918 . __h_ctor ) ==  __h_EQ_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn11976 */
                                      Just_BTree_int_User_pair_t (head );
                                    }) : ({ /* cicili#Let11981 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn11983 */
                                        ({ /* cicili#Let11986 */
                                          __auto_type __h_matchbox  = tail ;
                                          // ----------
                                          ({ /* cicili#Let11990 */
                                            __auto_type match11989  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                            typeof((((match11989 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let11993 */
                                              bool __h_case_result  = (true  &&  (((match11989 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11994 */
                                                    (unboxed  =  (((match11989 . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn11999 */
                                                  ({ /* cicili#Let12003 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let12005 */
                                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn12009 */
                                                          ({ /* cicili#Let12013 */
                                                            __auto_type match12012  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                            typeof((((match12012 . __h_data ). Just ). __h_0_mem )) node ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let12016 */
                                                              bool __h_case_result  = (true  &&  (((match12012 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12017 */
                                                                    (node  =  (((match12012 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn12022 */
                                                                  ({ /* cicili#Let12026 */
                                                                    __auto_type match12025  = get_Rc_BTree_int_User (node );
                                                                    typeof((((match12025 . __h_data ). Just ). __h_0_mem )) tr ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let12029 */
                                                                      bool __h_case_result  = (true  &&  (((match12025 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12030 */
                                                                            (tr  =  (((match12025 . __h_data ). Just ). __h_0_mem ) );
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn12035 */
                                                                          search_BTree_int_User (tr , skey );
                                                                        }) : ({ /* cicili#Let12040 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn12042 */
                                                                            Nothing_BTree_int_User_pair_t ();
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let12047 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn12049 */
                                                                    Nothing_BTree_int_User_pair_t ();
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let12054 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn12056 */
                                                            searchInternal (children , tail , (index  +  1 ));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let12060 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn12062 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let12067 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12069 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let12074 */
                // ----------
                ;
                ({ /* cicili#Progn12076 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  Maybe_BTree_int_User_pair_t searchLeaf (List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let12084 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let12088 */
          __auto_type match12087  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match12087 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let12091 */
            bool __h_case_result  = (true  &&  (((match12087 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12092 */
                  (unboxed  =  (((match12087 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn12097 */
                ({ /* cicili#Let12102 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let12104 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12105 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn12107 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn12109 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12114 */
                        ({ /* cicili#Let12118 */
                          __auto_type match12117  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let12120 */
                            bool __h_case_result  = (true  &&  ((match12117 . __h_ctor ) ==  __h_EQ_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn12124 */
                                Just_BTree_int_User_pair_t (head );
                              }) : ({ /* cicili#Let12129 */
                                // ----------
                                ;
                                ({ /* cicili#Progn12131 */
                                  ({ /* cicili#Let12134 */
                                    __auto_type __h_matchbox  = tail ;
                                    // ----------
                                    ({ /* cicili#Let12138 */
                                      __auto_type match12137  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                      typeof((((match12137 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let12141 */
                                        bool __h_case_result  = (true  &&  (((match12137 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12142 */
                                              (unboxed  =  (((match12137 . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn12147 */
                                            ({ /* cicili#Let12151 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Let12153 */
                                                bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn12157 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  }) : ({ /* cicili#Let12162 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn12164 */
                                                      searchLeaf (tail , (index  +  1 ));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let12168 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn12170 */
                                              Nothing_BTree_int_User_pair_t ();
                                            });
                                          }));
                                      });
                                    });
                                  });
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let12175 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12177 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let12182 */
                // ----------
                ;
                ({ /* cicili#Progn12184 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let12190 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let12192 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12193 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12195 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12200 */
            searchInternal (children , items , 0);
          }) : ({ /* cicili#Let12204 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let12206 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn12207 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn12209 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn12214 */
                  searchInternal (children , items , 0);
                }) : ({ /* cicili#Let12218 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let12220 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12221 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12226 */
                        searchLeaf (items , 0);
                      }) : ({ /* cicili#Let12230 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12232 */
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
  if (3 <  3 )
    { /* cicili#Block12244 */
      return Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_ORDER (3));
    }
  Either_BTree_int_User_Error_BTree_int_User insertInternal (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let12254 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let12258 */
          __auto_type match12257  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match12257 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let12261 */
            bool __h_case_result  = (true  &&  (((match12257 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12262 */
                  (unboxed  =  (((match12257 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn12267 */
                ({ /* cicili#Let12272 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let12274 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12275 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn12277 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn12279 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12284 */
                        ({ /* cicili#Let12288 */
                          __auto_type match12287  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let12290 */
                            bool __h_case_result  = (true  &&  ((match12287 . __h_ctor ) ==  __h_LT_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn12294 */
                                ({ /* cicili#Let12298 */
                                  __auto_type match12297  = nth_List_Rc_BTree_int_User (index , children );
                                  typeof((((match12297 . __h_data ). Just ). __h_0_mem )) child ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let12301 */
                                    bool __h_case_result  = (true  &&  (((match12297 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12302 */
                                          (child  =  (((match12297 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn12307 */
                                        ({ /* cicili#Let12311 */
                                          __auto_type match12310  = get_Rc_BTree_int_User (child );
                                          typeof((((match12310 . __h_data ). Just ). __h_0_mem )) tr ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let12314 */
                                            bool __h_case_result  = (true  &&  (((match12310 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12315 */
                                                  (tr  =  (((match12310 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn12320 */
                                                ({ /* cicili#Let12324 */
                                                  __auto_type match12323  = insert_BTree_int_User (tr , skey , svalue );
                                                  typeof((((match12323 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let12327 */
                                                    bool __h_case_result  = (true  &&  (((match12323 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn12328 */
                                                          (child_tree  =  (((match12323 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn12333 */
                                                        ({ /* cicili#Let12337 */
                                                          typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let12339 */
                                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12340 */
                                                                    (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn12342 */
                                                                    (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn12347 */
                                                                ({ /* cicili#Let12350 */
                                                                  __auto_type __h_matchbox  = child_items ;
                                                                  // ----------
                                                                  ({ /* cicili#Let12354 */
                                                                    __auto_type match12353  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                    typeof((((match12353 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let12357 */
                                                                      bool __h_case_result  = (true  &&  (((match12353 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12358 */
                                                                            (unboxed  =  (((match12353 . __h_data ). Just ). __h_0_mem ) );
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn12363 */
                                                                          ({ /* cicili#Let12367 */
                                                                            typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                                            typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) nil_tail ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let12369 */
                                                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12370 */
                                                                                      (single_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                      true ;
                                                                                    }) &&  ({ /* cicili#Progn12372 */
                                                                                      (nil_tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                                                      true ;
                                                                                    }) ) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn12377 */
                                                                                  ({ /* cicili#Let12380 */
                                                                                    __auto_type __h_matchbox  = nil_tail ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let12384 */
                                                                                      __auto_type match12383  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match12383 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let12387 */
                                                                                        bool __h_case_result  = (true  &&  (((match12383 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12388 */
                                                                                              (unboxed  =  (((match12383 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn12393 */
                                                                                            ({ /* cicili#Let12397 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let12399 */
                                                                                                bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn12403 */
                                                                                                    ({ /* cicili#Let12406 */
                                                                                                      __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12408 */
                                                                                                        __auto_type child_tree  = child_tree ;
                                                                                                        // ----------
                                                                                                        ((void)(child_tree -> __h_table -> freeClass ));
                                                                                                        child_tree ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let12417 */
                                                                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12419 */
                                                                                                            __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                                                            // ----------
                                                                                                            ((void)((r1 . __h_table )-> freeData ));
                                                                                                            r1 ;
                                                                                                          });
                                                                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12423 */
                                                                                                            __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                                            // ----------
                                                                                                            ((void)((r2 . __h_table )-> freeData ));
                                                                                                            r2 ;
                                                                                                          });
                                                                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12427 */
                                                                                                            __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                                                            // ----------
                                                                                                            ((void)((r3 . __h_table )-> freeData ));
                                                                                                            r3 ;
                                                                                                          });
                                                                                                          __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12431 */
                                                                                                            __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                                                            // ----------
                                                                                                            ((void)((r4 . __h_table )-> freeData ));
                                                                                                            r4 ;
                                                                                                          });
                                                                                                          // ----------
                                                                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12440 */
                                                                                                              Rc_BTree_int_User __ciciliC_12439 (Rc_BTree_int_User __h_value ) {
                                                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                                                              }
                                                                                                              __ciciliC_12439 ;
                                                                                                            }), r4 );
                                                                                                        })));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let12447 */
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Progn12449 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let12456 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn12458 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let12465 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn12467 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* cicili#Let12474 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn12476 */
                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let12483 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let12485 */
                                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn12489 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let12497 */
                                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12499 */
                                                                            __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                            // ----------
                                                                            ((void)((r1 . __h_table )-> freeData ));
                                                                            r1 ;
                                                                          });
                                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12503 */
                                                                            __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12509 */
                                                                              Rc_BTree_int_User __ciciliC_12508 (Rc_BTree_int_User __h_value ) {
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_12508 ;
                                                                            }), r1 );
                                                                            // ----------
                                                                            ((void)((r2 . __h_table )-> freeData ));
                                                                            r2 ;
                                                                          });
                                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12516 */
                                                                            __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            // ----------
                                                                            ((void)((r3 . __h_table )-> freeData ));
                                                                            r3 ;
                                                                          });
                                                                          __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12520 */
                                                                            __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12526 */
                                                                              Rc_BTree_int_User __ciciliC_12525 (Rc_BTree_int_User __h_value ) {
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_12525 ;
                                                                            }), r3 );
                                                                            // ----------
                                                                            ((void)((r4 . __h_table )-> freeData ));
                                                                            r4 ;
                                                                          });
                                                                          __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12533 */
                                                                            __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                            // ----------
                                                                            ((void)((r5 . __h_table )-> freeData ));
                                                                            r5 ;
                                                                          });
                                                                          // ----------
                                                                          append_List_Rc_BTree_int_User (r2 , r5 );
                                                                        })));
                                                                    }) : ({ /* cicili#Let12541 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn12543 */
                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let12551 */
                                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12553 */
                                                                              __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                              // ----------
                                                                              ((void)((r1 . __h_table )-> freeData ));
                                                                              r1 ;
                                                                            });
                                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12557 */
                                                                              __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12563 */
                                                                                Rc_BTree_int_User __ciciliC_12562 (Rc_BTree_int_User __h_value ) {
                                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                                }
                                                                                __ciciliC_12562 ;
                                                                              }), r1 );
                                                                              // ----------
                                                                              ((void)((r2 . __h_table )-> freeData ));
                                                                              r2 ;
                                                                            });
                                                                            __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12570 */
                                                                              __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                              // ----------
                                                                              ((void)((r3 . __h_table )-> freeData ));
                                                                              r3 ;
                                                                            });
                                                                            __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12574 */
                                                                              __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12580 */
                                                                                Rc_BTree_int_User __ciciliC_12579 (Rc_BTree_int_User __h_value ) {
                                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                                }
                                                                                __ciciliC_12579 ;
                                                                              }), r3 );
                                                                              // ----------
                                                                              ((void)((r4 . __h_table )-> freeData ));
                                                                              r4 ;
                                                                            });
                                                                            __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12587 */
                                                                              __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                              // ----------
                                                                              ((void)((r5 . __h_table )-> freeData ));
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
                                                      }) : ({ /* cicili#Let12595 */
                                                        __auto_type left  = match12323 ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn12597 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let12601 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn12603 */
                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let12610 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn12612 */
                                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let12622 */
                                // ----------
                                ;
                                ({ /* cicili#Let12624 */
                                  bool __h_case_result  = (true  &&  ((match12287 . __h_ctor ) ==  __h_EQ_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn12628 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                                    }) : ({ /* cicili#Let12635 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn12637 */
                                        insertInternal (items , children , tail , (index  +  1 ));
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let12641 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12643 */
                          ({ /* cicili#Let12647 */
                            __auto_type match12646  = nth_List_Rc_BTree_int_User (index , children );
                            typeof((((match12646 . __h_data ). Just ). __h_0_mem )) child ;
                            // ----------
                            ;
                            ({ /* cicili#Let12650 */
                              bool __h_case_result  = (true  &&  (((match12646 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12651 */
                                    (child  =  (((match12646 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn12656 */
                                  ({ /* cicili#Let12660 */
                                    __auto_type match12659  = get_Rc_BTree_int_User (child );
                                    typeof((((match12659 . __h_data ). Just ). __h_0_mem )) tr ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let12663 */
                                      bool __h_case_result  = (true  &&  (((match12659 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12664 */
                                            (tr  =  (((match12659 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn12669 */
                                          ({ /* cicili#Let12673 */
                                            __auto_type match12672  = insert_BTree_int_User (tr , skey , svalue );
                                            typeof((((match12672 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let12676 */
                                              bool __h_case_result  = (true  &&  (((match12672 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn12677 */
                                                    (child_tree  =  (((match12672 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn12682 */
                                                  ({ /* cicili#Let12686 */
                                                    typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                    typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let12688 */
                                                      bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12689 */
                                                              (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn12691 */
                                                              (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn12696 */
                                                          ({ /* cicili#Let12699 */
                                                            __auto_type __h_matchbox  = child_items ;
                                                            // ----------
                                                            ({ /* cicili#Let12703 */
                                                              __auto_type match12702  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                              typeof((((match12702 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let12706 */
                                                                bool __h_case_result  = (true  &&  (((match12702 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12707 */
                                                                      (unboxed  =  (((match12702 . __h_data ). Just ). __h_0_mem ) );
                                                                      true ;
                                                                    }) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn12712 */
                                                                    ({ /* cicili#Let12716 */
                                                                      typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                                      typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) nil_tail ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let12718 */
                                                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12719 */
                                                                                (single_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                true ;
                                                                              }) &&  ({ /* cicili#Progn12721 */
                                                                                (nil_tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                                                true ;
                                                                              }) ) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn12726 */
                                                                            ({ /* cicili#Let12729 */
                                                                              __auto_type __h_matchbox  = nil_tail ;
                                                                              // ----------
                                                                              ({ /* cicili#Let12733 */
                                                                                __auto_type match12732  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match12732 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let12736 */
                                                                                  bool __h_case_result  = (true  &&  (((match12732 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12737 */
                                                                                        (unboxed  =  (((match12732 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn12742 */
                                                                                      ({ /* cicili#Let12746 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Let12748 */
                                                                                          bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn12752 */
                                                                                              ({ /* cicili#Let12755 */
                                                                                                __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12757 */
                                                                                                  __auto_type child_tree  = child_tree ;
                                                                                                  // ----------
                                                                                                  ((void)(child_tree -> __h_table -> freeClass ));
                                                                                                  child_tree ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let12766 */
                                                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12768 */
                                                                                                      __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                                                      // ----------
                                                                                                      ((void)((r1 . __h_table )-> freeData ));
                                                                                                      r1 ;
                                                                                                    });
                                                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12772 */
                                                                                                      __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                                      // ----------
                                                                                                      ((void)((r2 . __h_table )-> freeData ));
                                                                                                      r2 ;
                                                                                                    });
                                                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12776 */
                                                                                                      __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                                                      // ----------
                                                                                                      ((void)((r3 . __h_table )-> freeData ));
                                                                                                      r3 ;
                                                                                                    });
                                                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12780 */
                                                                                                      __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                                                      // ----------
                                                                                                      ((void)((r4 . __h_table )-> freeData ));
                                                                                                      r4 ;
                                                                                                    });
                                                                                                    // ----------
                                                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12789 */
                                                                                                        Rc_BTree_int_User __ciciliC_12788 (Rc_BTree_int_User __h_value ) {
                                                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                                                        }
                                                                                                        __ciciliC_12788 ;
                                                                                                      }), r4 );
                                                                                                  })));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let12796 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Progn12798 */
                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let12805 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn12807 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let12814 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn12816 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  }) : ({ /* cicili#Let12823 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn12825 */
                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                    });
                                                                  }));
                                                              });
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let12832 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let12834 */
                                                            bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn12838 */
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let12846 */
                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12848 */
                                                                      __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                      // ----------
                                                                      ((void)((r1 . __h_table )-> freeData ));
                                                                      r1 ;
                                                                    });
                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12852 */
                                                                      __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12858 */
                                                                        Rc_BTree_int_User __ciciliC_12857 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_12857 ;
                                                                      }), r1 );
                                                                      // ----------
                                                                      ((void)((r2 . __h_table )-> freeData ));
                                                                      r2 ;
                                                                    });
                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12865 */
                                                                      __auto_type r3  = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                                      // ----------
                                                                      ((void)((r3 . __h_table )-> freeData ));
                                                                      r3 ;
                                                                    });
                                                                    // ----------
                                                                    append_List_Rc_BTree_int_User (r2 , r3 );
                                                                  })));
                                                              }) : ({ /* cicili#Let12873 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn12875 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let12883 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12885 */
                                                                        __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12889 */
                                                                        __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12895 */
                                                                          Rc_BTree_int_User __ciciliC_12894 (Rc_BTree_int_User __h_value ) {
                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                          }
                                                                          __ciciliC_12894 ;
                                                                        }), r1 );
                                                                        // ----------
                                                                        ((void)((r2 . __h_table )-> freeData ));
                                                                        r2 ;
                                                                      });
                                                                      __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12902 */
                                                                        __auto_type r3  = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                                        // ----------
                                                                        ((void)((r3 . __h_table )-> freeData ));
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
                                                }) : ({ /* cicili#Let12910 */
                                                  __auto_type left  = match12672 ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn12912 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let12916 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn12918 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let12925 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn12927 */
                                    Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let12934 */
                                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12936 */
                                          __auto_type r1  = wrap_List_BTree_int_User_pair_t (((BTree_int_User_pair_t){ skey , svalue }));
                                          // ----------
                                          ((void)((r1 . __h_table )-> freeData ));
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
              }) : ({ /* cicili#Let12944 */
                // ----------
                ;
                ({ /* cicili#Progn12946 */
                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                });
              }));
          });
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User insertLeaf (List_BTree_int_User_pair_t items , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let12959 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let12963 */
          __auto_type match12962  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match12962 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let12966 */
            bool __h_case_result  = (true  &&  (((match12962 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12967 */
                  (unboxed  =  (((match12962 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn12972 */
                ({ /* cicili#Let12977 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let12979 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12980 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn12982 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn12984 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12989 */
                        ({ /* cicili#Let12993 */
                          __auto_type match12992  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let12995 */
                            bool __h_case_result  = (true  &&  ((match12992 . __h_ctor ) ==  __h_LT_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn12999 */
                                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                              }) : ({ /* cicili#Let13009 */
                                // ----------
                                ;
                                ({ /* cicili#Let13011 */
                                  bool __h_case_result  = (true  &&  ((match12992 . __h_ctor ) ==  __h_EQ_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn13015 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                                    }) : ({ /* cicili#Let13022 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn13024 */
                                        insertLeaf (items , tail , (index  +  1 ));
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let13028 */
                        // ----------
                        ;
                        ({ /* cicili#Progn13030 */
                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let13037 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13039 */
                                __auto_type r1  = wrap_List_BTree_int_User_pair_t (((BTree_int_User_pair_t){ skey , svalue }));
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              // ----------
                              append_List_BTree_int_User_pair_t (items , r1 );
                            })));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let13047 */
                // ----------
                ;
                ({ /* cicili#Progn13049 */
                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let13058 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let13060 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn13061 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13063 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13068 */
            ({ /* cicili#Let13072 */
              __auto_type match13071  = insertInternal (items , children , items , 0);
              typeof((((match13071 . __h_data ). Right ). __h_0_mem )) tr ;
              // ----------
              ;
              ({ /* cicili#Let13074 */
                bool __h_case_result  = (true  &&  (((match13071 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13075 */
                      (tr  =  (((match13071 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn13080 */
                    Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                  }) : ({ /* cicili#Let13087 */
                    __auto_type left  = match13071 ;
                    // ----------
                    ;
                    ({ /* cicili#Progn13089 */
                      left ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let13093 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let13095 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn13096 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn13098 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn13103 */
                  ({ /* cicili#Let13107 */
                    __auto_type match13106  = insertInternal (items , children , items , 0);
                    typeof((((match13106 . __h_data ). Right ). __h_0_mem )) tr ;
                    // ----------
                    ;
                    ({ /* cicili#Let13109 */
                      bool __h_case_result  = (true  &&  (((match13106 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13110 */
                            (tr  =  (((match13106 . __h_data ). Right ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn13115 */
                          Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                        }) : ({ /* cicili#Let13122 */
                          __auto_type left  = match13106 ;
                          // ----------
                          ;
                          ({ /* cicili#Progn13124 */
                            left ;
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let13128 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let13130 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn13131 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn13136 */
                        ({ /* cicili#Let13140 */
                          __auto_type match13139  = insertLeaf (items , items , 0);
                          typeof((((match13139 . __h_data ). Right ). __h_0_mem )) tr ;
                          // ----------
                          ;
                          ({ /* cicili#Let13142 */
                            bool __h_case_result  = (true  &&  (((match13139 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13143 */
                                  (tr  =  (((match13139 . __h_data ). Right ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn13148 */
                                Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                              }) : ({ /* cicili#Let13155 */
                                __auto_type left  = match13139 ;
                                // ----------
                                ;
                                ({ /* cicili#Progn13157 */
                                  left ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let13161 */
                        // ----------
                        ;
                        ({ /* cicili#Progn13163 */
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
  return 3;
}
void free_BTree_int_User (BTree_int_User * this_ptr ) {
  { /* cicili#Let13172 */
    __auto_type this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_int_User children ) {
      ({ /* cicili#Let13176 */
        __auto_type __h_matchbox  = children ;
        // ----------
        { /* cicili#Let13180 */
          __auto_type match13179  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match13179 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let13183 */
            bool __h_case_result  = (true  &&  (((match13179 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13184 */
                  (unboxed  =  (((match13179 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block13190 */
                { /* cicili#Let13194 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let13196 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13197 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn13199 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block13205 */
                        { /* cicili#Block13207 */
                          free_Rc_BTree_int_User (&head );
                          freeChildren (tail );
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let13213 */
                // ----------
                ;
                ({ /* cicili#Let13215 */
                  bool __h_case_result  = (true  &&  ((match13179 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block13220 */
                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                    }
                });
              }
          });
        }
      });
    }
    { /* cicili#Let13228 */
      typeof((((this -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((this -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let13230 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn13231 */
                (items  =  (((this -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13233 */
                (children  =  (((this -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block13239 */
            { /* cicili#Block13241 */
              free_Box_List_BTree_int_User_pair_t ((&items ));
              freeChildren (children );
              free_Box_List_Rc_BTree_int_User ((&children ));
              free (this );
            }
          }
        else
          { /* cicili#Let13252 */
            typeof((((this -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((this -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let13254 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn13255 */
                      (items  =  (((this -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn13257 */
                      (children  =  (((this -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block13263 */
                  { /* cicili#Block13265 */
                    free_Box_List_BTree_int_User_pair_t ((&items ));
                    freeChildren (children );
                    free_Box_List_Rc_BTree_int_User ((&children ));
                    free (this );
                  }
                }
              else
                { /* cicili#Let13276 */
                  typeof((((this -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let13278 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn13279 */
                          (items  =  (((this -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block13285 */
                        { /* cicili#Block13287 */
                          free_Box_List_BTree_int_User_pair_t ((&items ));
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
  { /* cicili#Let13299 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* cicili#Let13307 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items ) {
  { /* cicili#Let13315 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h___t , .__h_data._ = { items }});
    return instance ;
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
  union { /* ciciliUnion13333 */
    struct { /* ciciliStruct13334 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct13335 */
      BTree_int_User_Error __h_0_mem ;
    } Left , _ ;
  } __h_data ;
} Either_BTree_int_User_Error_BTree_int_User;
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value );
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error );
__attribute__((weak)) Either_BTree_int_User_Error_BTree_int_User Default_Either_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
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
  union { /* ciciliUnion13361 */
    struct { /* ciciliStruct13362 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct13363 */
      BTree_int_User_Error __h_0_mem ;
    } Left , _ ;
  } __h_data ;
} Either_BTree_int_User_Error_BTree_int_User;
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value );
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error );
__attribute__((weak)) Either_BTree_int_User_Error_BTree_int_User Default_Either_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
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
  union { /* ciciliUnion13401 */
    struct { /* ciciliStruct13402 */
    } Monad , _ ;
  } __h_data ;
} Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User;
Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User_ctor ();
__attribute__((weak)) Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User Default_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User () {
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
}
const Either_BTree_int_User_Error_BTree_int_User__H_Table * const get_Either_BTree_int_User_Error_BTree_int_User__H_Table () {
  static const Either_BTree_int_User_Error_BTree_int_User__H_Table table  = { free_Either_BTree_int_User_Error_BTree_int_User };
  return (&table );
}
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value ) {
  { /* cicili#Let13449 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* cicili#Let13454 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h___t , .__h_data._ = { error }});
    // ----------
    return instance ;
  }
}
#endif /* __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__ */ 
#ifndef __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__
#define __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__
void free_Either_BTree_int_User_Error_BTree_int_User (Either_BTree_int_User_Error_BTree_int_User * this ) {
}
const Either_BTree_int_User_Error_BTree_int_User__H_Table * const get_Either_BTree_int_User_Error_BTree_int_User__H_Table () {
  static const Either_BTree_int_User_Error_BTree_int_User__H_Table table  = { free_Either_BTree_int_User_Error_BTree_int_User };
  return (&table );
}
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value ) {
  { /* cicili#Let13470 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* cicili#Let13475 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h___t , .__h_data._ = { error }});
    // ----------
    return instance ;
  }
}
#endif /* __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__ */ 
#ifndef __Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_IMPL__
#define __Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_IMPL__
Either_BTree_int_User_Error_BTree_int_User returnB_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User (BTree_int_User value ) {
  return Right_BTree_int_User_Error_BTree_int_User (value );
}
Either_BTree_int_User_Error_BTree_int_User returnA_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User (BTree_int_User value ) {
  return Right_BTree_int_User_Error_BTree_int_User (value );
}
Either_BTree_int_User_Error_BTree_int_User bind_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User (Either_BTree_int_User_Error_BTree_int_User input , BTree_int_User_to_Either_BTree_int_User_Error_BTree_int_User_t a_mb ) {
  return ({ /* cicili#Let13493 */
      typeof((((input . __h_data ). Right ). __h_0_mem )) value ;
      // ----------
      ;
      ({ /* cicili#Let13495 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13496 */
              (value  =  (((input . __h_data ). Right ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13501 */
            a_mb (value );
          }) : ({ /* cicili#Let13505 */
            typeof((((input . __h_data ). Left ). __h_0_mem )) error ;
            // ----------
            ;
            ({ /* cicili#Let13507 */
              bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn13508 */
                    (error  =  (((input . __h_data ). Left ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn13513 */
                  Left_BTree_int_User_Error_BTree_int_User (error );
                }) : ({ /* cicili#Let13518 */
                  // ----------
                  ;
                  ({ /* cicili#Progn13520 */
                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_OBJECT ());
                  });
                }));
            });
          }));
      });
    });
}
void free_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User (Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User * this ) {
}
const Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_Table * const get_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_Table () {
  static const Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_Table table  = { free_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User , returnB_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User , returnA_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User , bind_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User };
  return (&table );
}
Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User_ctor () {
  { /* cicili#Let13535 */
    Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User instance  = ((Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User){ get_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User__H_IMPL__ */ 
Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User get_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User () {
  return Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User_ctor ();
}
Either_BTree_int_User_Error_BTree_int_User insertAndFree (BTree_int_User tree , int key , User value ) {
  printf ("Inserting: %d\n", key );
  return ({ /* cicili#Let13545 */
      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13547 */
        __auto_type tree  = tree ;
        // ----------
        ((void)(tree -> __h_table -> freeClass ));
        tree ;
      });
      // ----------
      ({ /* cicili#Let13551 */
        __auto_type wtr  = insert_BTree_int_User (tree , key , value );
        // ----------
        { /* cicili#Let13556 */
          typeof((((wtr . __h_data ). Right ). __h_0_mem )) ntr ;
          // ----------
          ;
          ({ /* cicili#Let13558 */
            bool __h_case_result  = (true  &&  (((wtr . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13559 */
                  (ntr  =  (((wtr . __h_data ). Right ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block13565 */
                { /* cicili#Block13567 */
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
void __ciciliL_13581 (BTree_int_User_pair_t item ) {
  { /* cicili#Let13586 */
    typeof((item . __h_0_mem )) key ;
    typeof((item . __h_1_mem )) __h_match13584_1_arg ;
    typeof((__h_match13584_1_arg . __h_0_mem )) name ;
    // ----------
    ;
    ({ /* cicili#Let13588 */
      bool __h_case_result  = (true  &&  ((({ /* cicili#Progn13589 */
              (key  =  (item . __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn13591 */
              (__h_match13584_1_arg  =  (item . __h_1_mem ) );
              true ;
            }) ) &&  (true  &&  ({ /* cicili#Progn13593 */
              (name  =  (__h_match13584_1_arg . __h_0_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block13599 */
          { /* cicili#Block13601 */
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
  printf ("Deleting: %d\n", key );
  return ({ /* cicili#Let13573 */
      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13575 */
        __auto_type tree  = tree ;
        // ----------
        ((void)(tree -> __h_table -> freeClass ));
        tree ;
      });
      // ----------
      ({ /* cicili#Let13579 */
        __auto_type wtr  = delete_BTree_int_User (tree , key , __ciciliL_13581 );
        // ----------
        { /* cicili#Let13609 */
          typeof((((wtr . __h_data ). Right ). __h_0_mem )) ntr ;
          // ----------
          ;
          ({ /* cicili#Let13611 */
            bool __h_case_result  = (true  &&  (((wtr . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13612 */
                  (ntr  =  (((wtr . __h_data ). Right ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block13618 */
                { /* cicili#Block13620 */
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
  return ({ /* cicili#Let13626 */
      __auto_type bind  = bind_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User ;
      // ----------
      bind (insertAndFree (tree , 30, ((User){ new_String_Const ("Dennis Ritchie 01"), 2000})), ({ /* cicili#Progn13633 */
          Either_BTree_int_User_Error_BTree_int_User __ciciliC_13632 (BTree_int_User tree ) {
            return bind (insertAndFree (tree , 20, ((User){ new_String_Const ("Dennis Ritchie 02"), 3000})), ({ /* cicili#Progn13640 */
                Either_BTree_int_User_Error_BTree_int_User __ciciliC_13639 (BTree_int_User tree ) {
                  return bind (insertAndFree (tree , 40, ((User){ new_String_Const ("Dennis Ritchie 03"), 4000})), ({ /* cicili#Progn13647 */
                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_13646 (BTree_int_User tree ) {
                        return bind (insertAndFree (tree , 18, ((User){ new_String_Const ("Dennis Ritchie 04"), 5000})), ({ /* cicili#Progn13654 */
                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_13653 (BTree_int_User tree ) {
                              return bind (insertAndFree (tree , 28, ((User){ new_String_Const ("Dennis Ritchie 05"), 6000})), ({ /* cicili#Progn13661 */
                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_13660 (BTree_int_User tree ) {
                                    return bind (insertAndFree (tree , 50, ((User){ new_String_Const ("John McCarthy 06"), 2000})), ({ /* cicili#Progn13668 */
                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_13667 (BTree_int_User tree ) {
                                          return bind (insertAndFree (tree , 10, ((User){ new_String_Const ("John McCarthy 07"), 3000})), ({ /* cicili#Progn13675 */
                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_13674 (BTree_int_User tree ) {
                                                return bind (insertAndFree (tree , 42, ((User){ new_String_Const ("John McCarthy 08"), 4000})), ({ /* cicili#Progn13682 */
                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_13681 (BTree_int_User tree ) {
                                                      return bind (insertAndFree (tree , 52, ((User){ new_String_Const ("John McCarthy 09"), 5000})), ({ /* cicili#Progn13689 */
                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_13688 (BTree_int_User tree ) {
                                                            return bind (insertAndFree (tree , 8, ((User){ new_String_Const ("Haskell Curry 10"), 6000})), ({ /* cicili#Progn13696 */
                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_13695 (BTree_int_User tree ) {
                                                                  return bind (insertAndFree (tree , 26, ((User){ new_String_Const ("Haskell Curry 11"), 2000})), ({ /* cicili#Progn13703 */
                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_13702 (BTree_int_User tree ) {
                                                                        return bind (insertAndFree (tree , 60, ((User){ new_String_Const ("Haskell Curry 12"), 3000})), ({ /* cicili#Progn13710 */
                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_13709 (BTree_int_User tree ) {
                                                                              return bind (insertAndFree (tree , 70, ((User){ new_String_Const ("Saman Pasha 13"), 4000})), ({ /* cicili#Progn13717 */
                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_13716 (BTree_int_User tree ) {
                                                                                    return bind (insertAndFree (tree , 56, ((User){ new_String_Const ("Dennis Ritchie 14"), 5000})), ({ /* cicili#Progn13724 */
                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_13723 (BTree_int_User tree ) {
                                                                                          return bind (insertAndFree (tree , 58, ((User){ new_String_Const ("Dennis Ritchie 15"), 6000})), ({ /* cicili#Progn13731 */
                                                                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_13730 (BTree_int_User tree ) {
                                                                                                return bind (insertAndFree (tree , 74, ((User){ new_String_Const ("Dennis Ritchie 16"), 2000})), ({ /* cicili#Progn13738 */
                                                                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_13737 (BTree_int_User tree ) {
                                                                                                      return bind (insertAndFree (tree , 76, ((User){ new_String_Const ("Dennis Ritchie 17"), 3000})), ({ /* cicili#Progn13745 */
                                                                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_13744 (BTree_int_User tree ) {
                                                                                                            return bind (insertAndFree (tree , 2, ((User){ new_String_Const ("John McCarthy 18"), 4000})), ({ /* cicili#Progn13752 */
                                                                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_13751 (BTree_int_User tree ) {
                                                                                                                  return bind (insertAndFree (tree , 4, ((User){ new_String_Const ("John McCarthy 19"), 5000})), ({ /* cicili#Progn13759 */
                                                                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_13758 (BTree_int_User tree ) {
                                                                                                                        return bind (insertAndFree (tree , 6, ((User){ new_String_Const ("John McCarthy 20"), 6000})), ({ /* cicili#Progn13766 */
                                                                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_13765 (BTree_int_User tree ) {
                                                                                                                              return bind (insertAndFree (tree , 38, ((User){ new_String_Const ("Haskell Curry 21"), 2000})), ({ /* cicili#Progn13773 */
                                                                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_13772 (BTree_int_User tree ) {
                                                                                                                                    return bind (insertAndFree (tree , 36, ((User){ new_String_Const ("Haskell Curry 22"), 3000})), ({ /* cicili#Progn13780 */
                                                                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_13779 (BTree_int_User tree ) {
                                                                                                                                          return bind (insertAndFree (tree , 34, ((User){ new_String_Const ("Saman Pasha 23"), 4000})), ({ /* cicili#Progn13787 */
                                                                                                                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_13786 (BTree_int_User tree ) {
                                                                                                                                                return bind (insertAndFree (tree , 62, ((User){ new_String_Const ("Cicili 24"), 5000})), ({ /* cicili#Progn13794 */
                                                                                                                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_13793 (BTree_int_User tree ) {
                                                                                                                                                      return bind (insertAndFree (tree , 46, ((User){ new_String_Const ("Cicili 25"), 6000})), ({ /* cicili#Progn13801 */
                                                                                                                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_13800 (BTree_int_User tree ) {
                                                                                                                                                            return bind (insertAndFree (tree , 48, ((User){ new_String_Const ("Cicili 26"), 2000})), ({ /* cicili#Progn13808 */
                                                                                                                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_13807 (BTree_int_User tree ) {
                                                                                                                                                                  return bind (insertAndFree (tree , 54, ((User){ new_String_Const ("Cicili 27"), 3000})), ({ /* cicili#Progn13815 */
                                                                                                                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_13814 (BTree_int_User tree ) {
                                                                                                                                                                        return bind (insertAndFree (tree , 31, ((User){ new_String_Const ("Cicili 28"), 6000})), ({ /* cicili#Progn13822 */
                                                                                                                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_13821 (BTree_int_User tree ) {
                                                                                                                                                                              return bind (insertAndFree (tree , 32, ((User){ new_String_Const ("Cicili 29"), 2000})), ({ /* cicili#Progn13829 */
                                                                                                                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_13828 (BTree_int_User tree ) {
                                                                                                                                                                                    return bind (insertAndFree (tree , 33, ((User){ new_String_Const ("Cicili 30"), 3000})), ({ /* cicili#Progn13836 */
                                                                                                                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_13835 (BTree_int_User tree ) {
                                                                                                                                                                                          return Right_BTree_int_User_Error_BTree_int_User (tree );
                                                                                                                                                                                        }
                                                                                                                                                                                        __ciciliC_13835 ;
                                                                                                                                                                                      }));
                                                                                                                                                                                  }
                                                                                                                                                                                  __ciciliC_13828 ;
                                                                                                                                                                                }));
                                                                                                                                                                            }
                                                                                                                                                                            __ciciliC_13821 ;
                                                                                                                                                                          }));
                                                                                                                                                                      }
                                                                                                                                                                      __ciciliC_13814 ;
                                                                                                                                                                    }));
                                                                                                                                                                }
                                                                                                                                                                __ciciliC_13807 ;
                                                                                                                                                              }));
                                                                                                                                                          }
                                                                                                                                                          __ciciliC_13800 ;
                                                                                                                                                        }));
                                                                                                                                                    }
                                                                                                                                                    __ciciliC_13793 ;
                                                                                                                                                  }));
                                                                                                                                              }
                                                                                                                                              __ciciliC_13786 ;
                                                                                                                                            }));
                                                                                                                                        }
                                                                                                                                        __ciciliC_13779 ;
                                                                                                                                      }));
                                                                                                                                  }
                                                                                                                                  __ciciliC_13772 ;
                                                                                                                                }));
                                                                                                                            }
                                                                                                                            __ciciliC_13765 ;
                                                                                                                          }));
                                                                                                                      }
                                                                                                                      __ciciliC_13758 ;
                                                                                                                    }));
                                                                                                                }
                                                                                                                __ciciliC_13751 ;
                                                                                                              }));
                                                                                                          }
                                                                                                          __ciciliC_13744 ;
                                                                                                        }));
                                                                                                    }
                                                                                                    __ciciliC_13737 ;
                                                                                                  }));
                                                                                              }
                                                                                              __ciciliC_13730 ;
                                                                                            }));
                                                                                        }
                                                                                        __ciciliC_13723 ;
                                                                                      }));
                                                                                  }
                                                                                  __ciciliC_13716 ;
                                                                                }));
                                                                            }
                                                                            __ciciliC_13709 ;
                                                                          }));
                                                                      }
                                                                      __ciciliC_13702 ;
                                                                    }));
                                                                }
                                                                __ciciliC_13695 ;
                                                              }));
                                                          }
                                                          __ciciliC_13688 ;
                                                        }));
                                                    }
                                                    __ciciliC_13681 ;
                                                  }));
                                              }
                                              __ciciliC_13674 ;
                                            }));
                                        }
                                        __ciciliC_13667 ;
                                      }));
                                  }
                                  __ciciliC_13660 ;
                                }));
                            }
                            __ciciliC_13653 ;
                          }));
                      }
                      __ciciliC_13646 ;
                    }));
                }
                __ciciliC_13639 ;
              }));
          }
          __ciciliC_13632 ;
        }));
    });
}
Either_BTree_int_User_Error_BTree_int_User deleteMany (BTree_int_User tree ) {
  return ({ /* cicili#Let13844 */
      __auto_type bind  = bind_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User ;
      // ----------
      bind (deleteAndFree (tree , 76), ({ /* cicili#Progn13849 */
          Either_BTree_int_User_Error_BTree_int_User __ciciliC_13848 (BTree_int_User tree ) {
            return bind (deleteAndFree (tree , 74), ({ /* cicili#Progn13854 */
                Either_BTree_int_User_Error_BTree_int_User __ciciliC_13853 (BTree_int_User tree ) {
                  return bind (deleteAndFree (tree , 70), ({ /* cicili#Progn13859 */
                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_13858 (BTree_int_User tree ) {
                        return bind (deleteAndFree (tree , 10), ({ /* cicili#Progn13864 */
                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_13863 (BTree_int_User tree ) {
                              return bind (deleteAndFree (tree , 42), ({ /* cicili#Progn13869 */
                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_13868 (BTree_int_User tree ) {
                                    return bind (deleteAndFree (tree , 30), ({ /* cicili#Progn13874 */
                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_13873 (BTree_int_User tree ) {
                                          return bind (deleteAndFree (tree , 28), ({ /* cicili#Progn13879 */
                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_13878 (BTree_int_User tree ) {
                                                return bind (deleteAndFree (tree , 40), ({ /* cicili#Progn13884 */
                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_13883 (BTree_int_User tree ) {
                                                      return bind (deleteAndFree (tree , 52), ({ /* cicili#Progn13889 */
                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_13888 (BTree_int_User tree ) {
                                                            return bind (deleteAndFree (tree , 50), ({ /* cicili#Progn13894 */
                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_13893 (BTree_int_User tree ) {
                                                                  return bind (deleteAndFree (tree , 18), ({ /* cicili#Progn13899 */
                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_13898 (BTree_int_User tree ) {
                                                                        return bind (deleteAndFree (tree , 2), ({ /* cicili#Progn13904 */
                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_13903 (BTree_int_User tree ) {
                                                                              return bind (deleteAndFree (tree , 8), ({ /* cicili#Progn13909 */
                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_13908 (BTree_int_User tree ) {
                                                                                    return bind (deleteAndFree (tree , 58), ({ /* cicili#Progn13914 */
                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_13913 (BTree_int_User tree ) {
                                                                                          return bind (deleteAndFree (tree , 20), ({ /* cicili#Progn13919 */
                                                                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_13918 (BTree_int_User tree ) {
                                                                                                return bind (deleteAndFree (tree , 56), ({ /* cicili#Progn13924 */
                                                                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_13923 (BTree_int_User tree ) {
                                                                                                      return bind (deleteAndFree (tree , 26), ({ /* cicili#Progn13929 */
                                                                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_13928 (BTree_int_User tree ) {
                                                                                                            return bind (deleteAndFree (tree , 4), ({ /* cicili#Progn13934 */
                                                                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_13933 (BTree_int_User tree ) {
                                                                                                                  return bind (deleteAndFree (tree , 60), ({ /* cicili#Progn13939 */
                                                                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_13938 (BTree_int_User tree ) {
                                                                                                                        return bind (deleteAndFree (tree , 31), ({ /* cicili#Progn13944 */
                                                                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_13943 (BTree_int_User tree ) {
                                                                                                                              return bind (deleteAndFree (tree , 54), ({ /* cicili#Progn13949 */
                                                                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_13948 (BTree_int_User tree ) {
                                                                                                                                    return bind (deleteAndFree (tree , 38), ({ /* cicili#Progn13954 */
                                                                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_13953 (BTree_int_User tree ) {
                                                                                                                                          return bind (deleteAndFree (tree , 62), ({ /* cicili#Progn13959 */
                                                                                                                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_13958 (BTree_int_User tree ) {
                                                                                                                                                return bind (deleteAndFree (tree , 36), ({ /* cicili#Progn13964 */
                                                                                                                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_13963 (BTree_int_User tree ) {
                                                                                                                                                      return bind (deleteAndFree (tree , 6), ({ /* cicili#Progn13969 */
                                                                                                                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_13968 (BTree_int_User tree ) {
                                                                                                                                                            return bind (deleteAndFree (tree , 48), ({ /* cicili#Progn13974 */
                                                                                                                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_13973 (BTree_int_User tree ) {
                                                                                                                                                                  return bind (deleteAndFree (tree , 34), ({ /* cicili#Progn13979 */
                                                                                                                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_13978 (BTree_int_User tree ) {
                                                                                                                                                                        return bind (deleteAndFree (tree , 32), ({ /* cicili#Progn13984 */
                                                                                                                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_13983 (BTree_int_User tree ) {
                                                                                                                                                                              return bind (deleteAndFree (tree , 46), ({ /* cicili#Progn13989 */
                                                                                                                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_13988 (BTree_int_User tree ) {
                                                                                                                                                                                    return bind (deleteAndFree (tree , 33), ({ /* cicili#Progn13994 */
                                                                                                                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_13993 (BTree_int_User tree ) {
                                                                                                                                                                                          return Right_BTree_int_User_Error_BTree_int_User (tree );
                                                                                                                                                                                        }
                                                                                                                                                                                        __ciciliC_13993 ;
                                                                                                                                                                                      }));
                                                                                                                                                                                  }
                                                                                                                                                                                  __ciciliC_13988 ;
                                                                                                                                                                                }));
                                                                                                                                                                            }
                                                                                                                                                                            __ciciliC_13983 ;
                                                                                                                                                                          }));
                                                                                                                                                                      }
                                                                                                                                                                      __ciciliC_13978 ;
                                                                                                                                                                    }));
                                                                                                                                                                }
                                                                                                                                                                __ciciliC_13973 ;
                                                                                                                                                              }));
                                                                                                                                                          }
                                                                                                                                                          __ciciliC_13968 ;
                                                                                                                                                        }));
                                                                                                                                                    }
                                                                                                                                                    __ciciliC_13963 ;
                                                                                                                                                  }));
                                                                                                                                              }
                                                                                                                                              __ciciliC_13958 ;
                                                                                                                                            }));
                                                                                                                                        }
                                                                                                                                        __ciciliC_13953 ;
                                                                                                                                      }));
                                                                                                                                  }
                                                                                                                                  __ciciliC_13948 ;
                                                                                                                                }));
                                                                                                                            }
                                                                                                                            __ciciliC_13943 ;
                                                                                                                          }));
                                                                                                                      }
                                                                                                                      __ciciliC_13938 ;
                                                                                                                    }));
                                                                                                                }
                                                                                                                __ciciliC_13933 ;
                                                                                                              }));
                                                                                                          }
                                                                                                          __ciciliC_13928 ;
                                                                                                        }));
                                                                                                    }
                                                                                                    __ciciliC_13923 ;
                                                                                                  }));
                                                                                              }
                                                                                              __ciciliC_13918 ;
                                                                                            }));
                                                                                        }
                                                                                        __ciciliC_13913 ;
                                                                                      }));
                                                                                  }
                                                                                  __ciciliC_13908 ;
                                                                                }));
                                                                            }
                                                                            __ciciliC_13903 ;
                                                                          }));
                                                                      }
                                                                      __ciciliC_13898 ;
                                                                    }));
                                                                }
                                                                __ciciliC_13893 ;
                                                              }));
                                                          }
                                                          __ciciliC_13888 ;
                                                        }));
                                                    }
                                                    __ciciliC_13883 ;
                                                  }));
                                              }
                                              __ciciliC_13878 ;
                                            }));
                                        }
                                        __ciciliC_13873 ;
                                      }));
                                  }
                                  __ciciliC_13868 ;
                                }));
                            }
                            __ciciliC_13863 ;
                          }));
                      }
                      __ciciliC_13858 ;
                    }));
                }
                __ciciliC_13853 ;
              }));
          }
          __ciciliC_13848 ;
        }));
    });
}
void __ciciliL_14310 (BTree_int_User_pair_t item , Bool hasNext ) {
  { /* cicili#Let14315 */
    typeof((item . __h_0_mem )) key ;
    typeof((item . __h_1_mem )) __h_match14313_1_arg ;
    typeof((__h_match14313_1_arg . __h_0_mem )) name ;
    // ----------
    ;
    ({ /* cicili#Let14317 */
      bool __h_case_result  = (true  &&  ((({ /* cicili#Progn14318 */
              (key  =  (item . __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn14320 */
              (__h_match14313_1_arg  =  (item . __h_1_mem ) );
              true ;
            }) ) &&  (true  &&  ({ /* cicili#Progn14322 */
              (name  =  (__h_match14313_1_arg . __h_0_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block14328 */
          { /* cicili#Block14330 */
            fprintf (stdout , "%d", key );
            putchar (' ');
            (name -> __h_table -> show )(stdout , name );
            putchar ('\n');
          }
        }
    });
  }
}
void __ciciliL_14464 (BTree_int_User_pair_t item , Bool hasNext ) {
  { /* cicili#Let14469 */
    typeof((item . __h_1_mem )) __h_match14467_1_arg ;
    typeof((__h_match14467_1_arg . __h_0_mem )) name ;
    // ----------
    ;
    ({ /* cicili#Let14471 */
      bool __h_case_result  = (true  &&  (({ /* cicili#Progn14472 */
            (__h_match14467_1_arg  =  (item . __h_1_mem ) );
            true ;
          }) &&  (true  &&  ({ /* cicili#Progn14474 */
              (name  =  (__h_match14467_1_arg . __h_0_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block14480 */
          { /* cicili#Block14482 */
            (name -> __h_table -> show )(stdout , name );
            free_String ((&name ));
            putchar ('\n');
          }
        }
    });
  }
}
void showTreeResult (Either_BTree_int_User_Error_BTree_int_User etree ) {
  { /* cicili#Let14002 */
    typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
    // ----------
    ;
    ({ /* cicili#Let14004 */
      bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn14005 */
            (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block14011 */
          { /* cicili#Block14017 */
            putchar ('\n');
            { /* cicili#Block14022 */
              printf ("searching for %d: ", 30);
              { /* cicili#Let14026 */
                __auto_type match14025  = search_BTree_int_User (tree , 30);
                typeof((((match14025 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let14029 */
                  bool __h_case_result  = (true  &&  (((match14025 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14030 */
                        (item  =  (((match14025 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block14036 */
                      ({ /* cicili#Let14043 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match14041_1_arg ;
                        typeof((__h_match14041_1_arg . __h_0_mem )) name ;
                        typeof((__h_match14041_1_arg . __h_1_mem )) salary ;
                        // ----------
                        ;
                        ({ /* cicili#Let14045 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn14046 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn14048 */
                                  (__h_match14041_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn14050 */
                                    (name  =  (__h_match14041_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn14052 */
                                    (salary  =  (__h_match14041_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn14057 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let14061 */
                              // ----------
                              ;
                              ({ /* cicili#Progn14063 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let14068 */
                      // ----------
                      ;
                      ({ /* cicili#Let14070 */
                        bool __h_case_result  = (true  &&  ((match14025 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block14075 */
                            printf ("not found!");
                          }
                      });
                    }
                });
              }
              putchar ('\n');
            }
            { /* cicili#Block14080 */
              printf ("searching for %d: ", 50);
              { /* cicili#Let14084 */
                __auto_type match14083  = search_BTree_int_User (tree , 50);
                typeof((((match14083 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let14087 */
                  bool __h_case_result  = (true  &&  (((match14083 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14088 */
                        (item  =  (((match14083 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block14094 */
                      ({ /* cicili#Let14101 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match14099_1_arg ;
                        typeof((__h_match14099_1_arg . __h_0_mem )) name ;
                        typeof((__h_match14099_1_arg . __h_1_mem )) salary ;
                        // ----------
                        ;
                        ({ /* cicili#Let14103 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn14104 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn14106 */
                                  (__h_match14099_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn14108 */
                                    (name  =  (__h_match14099_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn14110 */
                                    (salary  =  (__h_match14099_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn14115 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let14119 */
                              // ----------
                              ;
                              ({ /* cicili#Progn14121 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let14126 */
                      // ----------
                      ;
                      ({ /* cicili#Let14128 */
                        bool __h_case_result  = (true  &&  ((match14083 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block14133 */
                            printf ("not found!");
                          }
                      });
                    }
                });
              }
              putchar ('\n');
            }
            { /* cicili#Block14138 */
              printf ("searching for %d: ", 60);
              { /* cicili#Let14142 */
                __auto_type match14141  = search_BTree_int_User (tree , 60);
                typeof((((match14141 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let14145 */
                  bool __h_case_result  = (true  &&  (((match14141 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14146 */
                        (item  =  (((match14141 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block14152 */
                      ({ /* cicili#Let14159 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match14157_1_arg ;
                        typeof((__h_match14157_1_arg . __h_0_mem )) name ;
                        typeof((__h_match14157_1_arg . __h_1_mem )) salary ;
                        // ----------
                        ;
                        ({ /* cicili#Let14161 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn14162 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn14164 */
                                  (__h_match14157_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn14166 */
                                    (name  =  (__h_match14157_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn14168 */
                                    (salary  =  (__h_match14157_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn14173 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let14177 */
                              // ----------
                              ;
                              ({ /* cicili#Progn14179 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let14184 */
                      // ----------
                      ;
                      ({ /* cicili#Let14186 */
                        bool __h_case_result  = (true  &&  ((match14141 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block14191 */
                            printf ("not found!");
                          }
                      });
                    }
                });
              }
              putchar ('\n');
            }
            { /* cicili#Block14196 */
              printf ("searching for %d: ", 70);
              { /* cicili#Let14200 */
                __auto_type match14199  = search_BTree_int_User (tree , 70);
                typeof((((match14199 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let14203 */
                  bool __h_case_result  = (true  &&  (((match14199 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14204 */
                        (item  =  (((match14199 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block14210 */
                      ({ /* cicili#Let14217 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match14215_1_arg ;
                        typeof((__h_match14215_1_arg . __h_0_mem )) name ;
                        typeof((__h_match14215_1_arg . __h_1_mem )) salary ;
                        // ----------
                        ;
                        ({ /* cicili#Let14219 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn14220 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn14222 */
                                  (__h_match14215_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn14224 */
                                    (name  =  (__h_match14215_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn14226 */
                                    (salary  =  (__h_match14215_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn14231 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let14235 */
                              // ----------
                              ;
                              ({ /* cicili#Progn14237 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let14242 */
                      // ----------
                      ;
                      ({ /* cicili#Let14244 */
                        bool __h_case_result  = (true  &&  ((match14199 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block14249 */
                            printf ("not found!");
                          }
                      });
                    }
                });
              }
              putchar ('\n');
            }
            { /* cicili#Block14254 */
              printf ("searching for %d: ", 56);
              { /* cicili#Let14258 */
                __auto_type match14257  = search_BTree_int_User (tree , 56);
                typeof((((match14257 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let14261 */
                  bool __h_case_result  = (true  &&  (((match14257 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14262 */
                        (item  =  (((match14257 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block14268 */
                      ({ /* cicili#Let14275 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match14273_1_arg ;
                        typeof((__h_match14273_1_arg . __h_0_mem )) name ;
                        typeof((__h_match14273_1_arg . __h_1_mem )) salary ;
                        // ----------
                        ;
                        ({ /* cicili#Let14277 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn14278 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn14280 */
                                  (__h_match14273_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn14282 */
                                    (name  =  (__h_match14273_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn14284 */
                                    (salary  =  (__h_match14273_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn14289 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let14293 */
                              // ----------
                              ;
                              ({ /* cicili#Progn14295 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let14300 */
                      // ----------
                      ;
                      ({ /* cicili#Let14302 */
                        bool __h_case_result  = (true  &&  ((match14257 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block14307 */
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
            traverse_BTree_int_User (tree , __ciciliL_14310 );
            putchar ('\n');
            { /* cicili#Let14340 */
              __auto_type match14339  = min_BTree_int_User (tree );
              typeof((((match14339 . __h_data ). Just ). __h_0_mem )) item ;
              // ----------
              ;
              ({ /* cicili#Let14343 */
                bool __h_case_result  = (true  &&  (((match14339 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14344 */
                      (item  =  (((match14339 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block14350 */
                    { /* cicili#Block14352 */
                      printf ("minimum: ");
                      ({ /* cicili#Let14359 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match14357_1_arg ;
                        typeof((__h_match14357_1_arg . __h_0_mem )) name ;
                        typeof((__h_match14357_1_arg . __h_1_mem )) salary ;
                        // ----------
                        ;
                        ({ /* cicili#Let14361 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn14362 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn14364 */
                                  (__h_match14357_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn14366 */
                                    (name  =  (__h_match14357_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn14368 */
                                    (salary  =  (__h_match14357_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn14373 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let14377 */
                              // ----------
                              ;
                              ({ /* cicili#Progn14379 */
                                0;
                              });
                            }));
                        });
                      });
                      putchar ('\n');
                    }
                  }
                else
                  { /* cicili#Let14384 */
                    // ----------
                    ;
                    ({ /* cicili#Let14386 */
                      bool __h_case_result  = (true  &&  ((match14339 . __h_ctor ) ==  __h_Nothing_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block14391 */
                          printf ("minimum not found!");
                        }
                    });
                  }
              });
            }
            putchar ('\n');
            { /* cicili#Let14395 */
              __auto_type match14394  = max_BTree_int_User (tree );
              typeof((((match14394 . __h_data ). Just ). __h_0_mem )) item ;
              // ----------
              ;
              ({ /* cicili#Let14398 */
                bool __h_case_result  = (true  &&  (((match14394 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14399 */
                      (item  =  (((match14394 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block14405 */
                    { /* cicili#Block14407 */
                      printf ("maximum: ");
                      ({ /* cicili#Let14414 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match14412_1_arg ;
                        typeof((__h_match14412_1_arg . __h_0_mem )) name ;
                        typeof((__h_match14412_1_arg . __h_1_mem )) salary ;
                        // ----------
                        ;
                        ({ /* cicili#Let14416 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn14417 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn14419 */
                                  (__h_match14412_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn14421 */
                                    (name  =  (__h_match14412_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn14423 */
                                    (salary  =  (__h_match14412_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn14428 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let14432 */
                              // ----------
                              ;
                              ({ /* cicili#Progn14434 */
                                0;
                              });
                            }));
                        });
                      });
                      putchar ('\n');
                    }
                  }
                else
                  { /* cicili#Let14439 */
                    // ----------
                    ;
                    ({ /* cicili#Let14441 */
                      bool __h_case_result  = (true  &&  ((match14394 . __h_ctor ) ==  __h_Nothing_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block14446 */
                          printf ("maximum not found!");
                        }
                    });
                  }
              });
            }
            putchar ('\n');
            { /* cicili#Let14450 */
              __auto_type match14449  = deleteMany (tree );
              typeof((((match14449 . __h_data ). Right ). __h_0_mem )) tree ;
              // ----------
              ;
              ({ /* cicili#Let14452 */
                bool __h_case_result  = (true  &&  (((match14449 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn14453 */
                      (tree  =  (((match14449 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block14459 */
                    { /* cicili#Block14461 */
                      printf ("Traversing B-Tree to free strings allocated names if were not deleted.\n");
                      traverse_BTree_int_User (tree , __ciciliL_14464 );
                      free_BTree_int_User ((&tree ));
                    }
                  }
                else
                  { /* cicili#Let14491 */
                    typeof((((match14449 . __h_data ). Left ). __h_0_mem )) error ;
                    // ----------
                    ;
                    ({ /* cicili#Let14493 */
                      bool __h_case_result  = (true  &&  (((match14449 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn14494 */
                            (error  =  (((match14449 . __h_data ). Left ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block14500 */
                          ({ /* cicili#Let14503 */
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
        { /* cicili#Let14509 */
          typeof((((etree . __h_data ). Left ). __h_0_mem )) error ;
          // ----------
          ;
          ({ /* cicili#Let14511 */
            bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn14512 */
                  (error  =  (((etree . __h_data ). Left ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block14518 */
                ({ /* cicili#Let14521 */
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
  ({ /* cicili#Let14528 */
    __auto_type tree  = Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ());
    // ----------
    showTreeResult (insertMany (tree ));
  });
}
