#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
typedef struct __ciciliS_103 {
  String __h_0_mem ;
  int __h_1_mem ;
} __ciciliS_103;
typedef __ciciliS_103 User ;
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
    List_User (*drop) (int index , List_User list );
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
List_User drop_List_User (int index , List_User list );
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
  return Nothing_List_User ();
}
const Maybe_List_User__H_Table * const get_Maybe_List_User__H_Table ();
void free_Maybe_List_User (Maybe_List_User * this );
#endif /* __Maybe_List_User__H_DECL__ */ 
typedef struct class_BTree_int_User * BTree_int_User ;
typedef struct __ciciliS_295 {
  int __h_0_mem ;
  User __h_1_mem ;
} __ciciliS_295;
typedef __ciciliS_295 BTree_int_User_pair_t ;
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
      int __h_0_mem ;
    } ERR_INVALID_ORDER , _5 ;
    struct { /* ciciliStruct313 */
      BTree_int_User_pair_t __h_0_mem ;
    } ERR_UNIQUE_KEY , _4 ;
    struct { /* ciciliStruct314 */
      int __h_0_mem ;
    } ERR_NOT_FOUND , _3 ;
    struct { /* ciciliStruct315 */
      BTree_int_User_pair_t __h_0_mem ;
      int __h_1_mem ;
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
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (int order );
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item );
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key );
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , int index );
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch );
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason );
__attribute__((weak)) BTree_int_User_Error Default_BTree_int_User_Error (char * reason ) {
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
    List_BTree_int_User_pair_t (*drop) (int index , List_BTree_int_User_pair_t list );
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
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (int index , List_BTree_int_User_pair_t list );
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
    List_Rc_BTree_int_User (*drop) (int index , List_Rc_BTree_int_User list );
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
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (int index , List_Rc_BTree_int_User list );
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
    Either_BTree_int_User_Error_BTree_int_User (*pure) (int keys [], User values [], int len );
    int (*show) (CFile file , BTree_int_User tree );
    void (*traverse) (BTree_int_User tree ,   void (*callback) (BTree_int_User_pair_t item , Bool hasNext ));
    Maybe_BTree_int_User_pair_t (*max) (BTree_int_User tree );
    Maybe_BTree_int_User_pair_t (*min) (BTree_int_User tree );
    Either_BTree_int_User_Error_BTree_int_User (*delete) (BTree_int_User tree , int skey ,   void (*callback) (BTree_int_User_pair_t item ));
    Maybe_BTree_int_User_pair_t (*search) (BTree_int_User tree , int skey );
    Either_BTree_int_User_Error_BTree_int_User (*insert) (BTree_int_User tree , int skey , User svalue );
    int (*order) ();
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
  return Leaf_BTree_int_User (items );
}
Either_BTree_int_User_Error_BTree_int_User fromLists_BTree_int_User (List_int keys , List_User values );
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], int len );
int show_BTree_int_User (CFile file , BTree_int_User tree );
void traverse_BTree_int_User (BTree_int_User tree , void (*callback) (BTree_int_User_pair_t item , Bool hasNext ));
Maybe_BTree_int_User_pair_t max_BTree_int_User (BTree_int_User tree );
Maybe_BTree_int_User_pair_t min_BTree_int_User (BTree_int_User tree );
Either_BTree_int_User_Error_BTree_int_User delete_BTree_int_User (BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item ));
Maybe_BTree_int_User_pair_t search_BTree_int_User (BTree_int_User tree , int skey );
Either_BTree_int_User_Error_BTree_int_User insert_BTree_int_User (BTree_int_User tree , int skey , User svalue );
int order_BTree_int_User ();
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
  { /* cicili#Let1026 */
    Maybe_User instance  = ((Maybe_User){ get_Maybe_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_User Nothing_User () {
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
  User * array (List_User list , int count ) {
    return ({ /* cicili#Let1041 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let1045 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1046 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1048 */
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
              
              ({ /* cicili#Progn1061 */
                ({ /* cicili#Let1063 */
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
List_User pure_List_User (const User * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_User () : ({ /* cicili#Let1074 */
        User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_User () : Cons_User (item , pure_List_User ((++buf ), (--len ))));
      }));
}
int show_List_User (CFile file , List_User list ) {
  return ({ /* cicili#Let1084 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1088 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1089 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1091 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1094 */
            (({ /* cicili#Let1098 */
                // ----------
                
                ({ /* cicili#Let1102 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1104 */
                      (({ /* cicili#Let1110 */
                          typeof((head . __h_0_mem )) name ;
                          typeof((head . __h_1_mem )) salary ;
                          // ----------
                          
                          ({ /* cicili#Let1114 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn1115 */
                                  (name  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1117 */
                                  (salary  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn1120 */
                                (fprintf (file , "(") +  show_String (file , name ) +  fprintf (file , ", %d)", salary ) );
                              }) : ({ /* cicili#Let1124 */
                                // ----------
                                
                                ({ /* cicili#Progn1128 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let1132 */
                      // ----------
                      
                      ({ /* cicili#Progn1136 */
                        ({ /* cicili#Let1142 */
                          typeof((head . __h_0_mem )) name ;
                          typeof((head . __h_1_mem )) salary ;
                          // ----------
                          
                          ({ /* cicili#Let1146 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn1147 */
                                  (name  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1149 */
                                  (salary  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn1152 */
                                (fprintf (file , "(") +  show_String (file , name ) +  fprintf (file , ", %d)", salary ) );
                              }) : ({ /* cicili#Let1156 */
                                // ----------
                                
                                ({ /* cicili#Progn1160 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_User (file , tail ) );
          }) : ({ /* cicili#Let1165 */
            // ----------
            
            ({ /* cicili#Progn1169 */
              0;
            });
          }));
      });
    });
}
List_User copy_List_User (List_User list ) {
  return ({ /* cicili#Let1175 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1179 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1180 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1182 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1185 */
            Cons_User (head , copy_List_User (tail ));
          }) : ({ /* cicili#Let1191 */
            // ----------
            
            ({ /* cicili#Progn1195 */
              Nil_User ();
            });
          }));
      });
    });
}
List_User replaceAt_List_User (List_User list , User item , int index ) {
  return ({ /* cicili#Let1202 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1206 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1207 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1209 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1212 */
            Cons_User (head , replaceAt_List_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let1218 */
            // ----------
            
            ({ /* cicili#Progn1222 */
              ({ /* cicili#Let1226 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let1230 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1231 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1234 */
                      Cons_User (item , copy_List_User (taill ));
                    }) : ({ /* cicili#Let1240 */
                      // ----------
                      
                      ({ /* cicili#Progn1244 */
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
  return ({ /* cicili#Let1251 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1255 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1256 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1258 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1261 */
            Cons_User (head , deleteAt_List_User (tail , (index  -  1 )));
          }) : ({ /* cicili#Let1267 */
            // ----------
            
            ({ /* cicili#Progn1271 */
              ({ /* cicili#Let1275 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let1279 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1280 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1283 */
                      copy_List_User (taill );
                    }) : ({ /* cicili#Let1288 */
                      // ----------
                      
                      ({ /* cicili#Progn1292 */
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
List_User insertAt_List_User (List_User llist , User item , int index ) {
  return ({ /* cicili#Let1299 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1303 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1304 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1306 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1309 */
            Cons_User (head , insertAt_List_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let1315 */
            // ----------
            
            ({ /* cicili#Progn1319 */
              Cons_User (item , copy_List_User (llist ));
            });
          }));
      });
    });
}
List_User replace_List_User (List_User list , User item , List_User aimed ) {
  return ({ /* cicili#Let1327 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1331 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1332 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1334 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1337 */
            Cons_User (head , replace_List_User (tail , item , aimed ));
          }) : ({ /* cicili#Let1343 */
            // ----------
            
            ({ /* cicili#Progn1347 */
              ({ /* cicili#Let1351 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let1355 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1356 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1359 */
                      Cons_User (item , copy_List_User (taill ));
                    }) : ({ /* cicili#Let1365 */
                      // ----------
                      
                      ({ /* cicili#Progn1369 */
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
  return ({ /* cicili#Let1376 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1380 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1381 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1383 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1386 */
            Cons_User (head , delete_List_User (tail , aimed ));
          }) : ({ /* cicili#Let1392 */
            // ----------
            
            ({ /* cicili#Progn1396 */
              ({ /* cicili#Let1400 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let1404 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1405 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1408 */
                      copy_List_User (taill );
                    }) : ({ /* cicili#Let1413 */
                      // ----------
                      
                      ({ /* cicili#Progn1417 */
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
  return ({ /* cicili#Let1424 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1428 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1429 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1431 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1434 */
            Cons_User (head , insert_List_User (tail , item , rlist ));
          }) : ({ /* cicili#Let1440 */
            // ----------
            
            ({ /* cicili#Progn1444 */
              Cons_User (item , copy_List_User (rlist ));
            });
          }));
      });
    });
}
List_User reverse_List_User (List_User list ) {
  List_User _reverse (List_User list , List_User rlist ) {
    return ({ /* cicili#Let1453 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let1457 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1458 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1460 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1463 */
              _reverse (tail , Cons_User (head , rlist ));
            }) : ({ /* cicili#Let1468 */
              // ----------
              
              ({ /* cicili#Progn1472 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let1476 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1480 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1481 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1483 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1486 */
            _reverse (tail , Cons_User (head , Nil_User ()));
          }) : ({ /* cicili#Let1492 */
            // ----------
            
            ({ /* cicili#Progn1496 */
              list ;
            });
          }));
      });
    });
}
List_User append_List_User (List_User llist , List_User rlist ) {
  return ({ /* cicili#Let1502 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1506 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1507 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1509 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1512 */
            Cons_User (head , append_List_User (tail , rlist ));
          }) : ({ /* cicili#Let1518 */
            // ----------
            
            ({ /* cicili#Progn1522 */
              copy_List_User (rlist );
            });
          }));
      });
    });
}
List_User push_List_User (User item , List_User list ) {
  return Cons_User (item , copy_List_User (list ));
}
List_User take_List_User (int len , List_User list ) {
  return (((len  <=  0 )) ? Nil_User () : ({ /* cicili#Let1535 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let1539 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1540 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1542 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1545 */
              Cons_User (head , take_List_User ((--len ), tail ));
            }) : ({ /* cicili#Let1551 */
              // ----------
              
              ({ /* cicili#Progn1555 */
                Nil_User ();
              });
            }));
        });
      }));
}
List_User last_List_User (List_User list ) {
  return ({ /* cicili#Let1562 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1566 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1567 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1570 */
            ({ /* cicili#Let1574 */
              // ----------
              
              ({ /* cicili#Let1578 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn1580 */
                    copy_List_User (list );
                  }) : ({ /* cicili#Let1585 */
                    // ----------
                    
                    ({ /* cicili#Progn1589 */
                      last_List_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1594 */
            // ----------
            
            ({ /* cicili#Progn1598 */
              Nil_User ();
            });
          }));
      });
    });
}
List_User init_List_User (List_User list ) {
  return ({ /* cicili#Let1606 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1610 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1611 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1613 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1616 */
            Cons_User (head , init_List_User (tail ));
          }) : ({ /* cicili#Let1622 */
            // ----------
            
            ({ /* cicili#Progn1626 */
              Nil_User ();
            });
          }));
      });
    });
}
int hasLen_List_User (List_User list , int desired ) {
  return ({ /* cicili#Let1633 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1637 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1638 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1641 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_User (tail , (--desired )) ));
          }) : ({ /* cicili#Let1647 */
            // ----------
            
            ({ /* cicili#Progn1651 */
              0;
            });
          }));
      });
    });
}
int len_List_User (List_User list ) {
  return ({ /* cicili#Let1657 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1661 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1662 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1665 */
            (1 +  len_List_User (tail ) );
          }) : ({ /* cicili#Let1670 */
            // ----------
            
            ({ /* cicili#Progn1674 */
              0;
            });
          }));
      });
    });
}
List_User tail_List_User (List_User list ) {
  return drop_List_User (1, list );
}
List_User drop_List_User (int len , List_User list ) {
  return (((len  <=  0 )) ? copy_List_User (list ) : ({ /* cicili#Let1685 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let1689 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1690 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1693 */
              drop_List_User ((--len ), tail );
            }) : ({ /* cicili#Let1698 */
              // ----------
              
              ({ /* cicili#Progn1702 */
                Nil_User ();
              });
            }));
        });
      }));
}
Maybe_User head_List_User (List_User list ) {
  return ({ /* cicili#Let1710 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let1714 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1715 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1718 */
            Just_User (head );
          }) : ({ /* cicili#Let1723 */
            // ----------
            
            ({ /* cicili#Progn1727 */
              Nothing_User ();
            });
          }));
      });
    });
}
List_User nthcdr_List_User (int index , List_User list ) {
  return ({ /* cicili#Let1734 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1738 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1739 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1742 */
            nthcdr_List_User ((--index ), tail );
          }) : ({ /* cicili#Let1747 */
            // ----------
            
            ({ /* cicili#Progn1751 */
              list ;
            });
          }));
      });
    });
}
Maybe_User nth_List_User (int index , List_User list ) {
  return ({ /* cicili#Let1758 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1762 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1763 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1765 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1768 */
            (((index  ==  0 )) ? Just_User (head ) : (((index  <  0 )) ? Nothing_User () : nth_List_User ((--index ), tail )));
          }) : ({ /* cicili#Let1777 */
            // ----------
            
            ({ /* cicili#Progn1781 */
              Nothing_User ();
            });
          }));
      });
    });
}
void free_List_User (List_User * this_ptr ) {
  { /* cicili#Let1786 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1790 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1794 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1795 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1799 */
            { /* cicili#Block1801 */
              free (this );
              free_List_User ((&tail ));
            }
          }
        else
          { /* cicili#Let1809 */
            // ----------
            
            ({ /* cicili#Let1813 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1816 */
                  { /* cicili#Block1818 */
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
  { /* cicili#Let1829 */
    List_User instance  = malloc (sizeof(class_List_User));
    // ----------
    (*instance ) = ((class_List_User){ get_List_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_User Nil_User () {
  { /* cicili#Let1835 */
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
  { /* cicili#Let1852 */
    Maybe_List_User instance  = ((Maybe_List_User){ get_Maybe_List_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_User Nothing_List_User () {
  { /* cicili#Let1857 */
    Maybe_List_User instance  = ((Maybe_List_User){ get_Maybe_List_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_User__H_IMPL__ */ 
#ifndef __BTree_int_User_Error__H_IMPL__
#define __BTree_int_User_Error__H_IMPL__
void show_BTree_int_User_Error (BTree_int_User_Error error ) {
  { /* cicili#Let1870 */
    // ----------
    
    ({ /* cicili#Let1874 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1877 */
          printf ("invalid B-Tree object");
        }
      else
        { /* cicili#Let1882 */
          typeof((((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem )) order ;
          // ----------
          
          ({ /* cicili#Let1886 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* cicili#Progn1887 */
                  (order  =  (((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1891 */
                printf ("invalid B-Tree order: %d", order );
              }
            else
              { /* cicili#Let1896 */
                typeof((((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem )) item ;
                // ----------
                
                ({ /* cicili#Let1900 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* cicili#Progn1901 */
                        (item  =  (((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block1905 */
                      { /* cicili#Block1907 */
                        printf ("unique key: ");
                        ({ /* cicili#Let1914 */
                          typeof((item . __h_0_mem )) id ;
                          typeof((item . __h_1_mem )) __h_match1912_1_arg ;
                          typeof((__h_match1912_1_arg . __h_0_mem )) name ;
                          typeof((__h_match1912_1_arg . __h_1_mem )) salary ;
                          // ----------
                          
                          ({ /* cicili#Let1918 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn1919 */
                                    (id  =  (item . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1921 */
                                    (__h_match1912_1_arg  =  (item . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn1923 */
                                      (name  =  (__h_match1912_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn1925 */
                                      (salary  =  (__h_match1912_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn1928 */
                                (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                              }) : ({ /* cicili#Let1932 */
                                // ----------
                                
                                ({ /* cicili#Progn1936 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* cicili#Let1941 */
                      typeof((((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem )) key ;
                      // ----------
                      
                      ({ /* cicili#Let1945 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* cicili#Progn1946 */
                              (key  =  (((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block1950 */
                            { /* cicili#Block1952 */
                              printf ("key not found: ");
                              fprintf (stdout , "%d", key );
                            }
                          }
                        else
                          { /* cicili#Let1960 */
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem )) item ;
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem )) index ;
                            // ----------
                            
                            ({ /* cicili#Let1964 */
                              bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* cicili#Progn1965 */
                                      (item  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn1967 */
                                      (index  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem ) );
                                      true ;
                                    }) ) ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block1971 */
                                  { /* cicili#Block1973 */
                                    printf ("dead child at index: %d of item: ", index );
                                    ({ /* cicili#Let1980 */
                                      typeof((item . __h_0_mem )) id ;
                                      typeof((item . __h_1_mem )) __h_match1978_1_arg ;
                                      typeof((__h_match1978_1_arg . __h_0_mem )) name ;
                                      typeof((__h_match1978_1_arg . __h_1_mem )) salary ;
                                      // ----------
                                      
                                      ({ /* cicili#Let1984 */
                                        bool __h_case_result  = (true  &&  ((({ /* cicili#Progn1985 */
                                                (id  =  (item . __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn1987 */
                                                (__h_match1978_1_arg  =  (item . __h_1_mem ) );
                                                true ;
                                              }) ) &&  (true  &&  (({ /* cicili#Progn1989 */
                                                  (name  =  (__h_match1978_1_arg . __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn1991 */
                                                  (salary  =  (__h_match1978_1_arg . __h_1_mem ) );
                                                  true ;
                                                }) ) ) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn1994 */
                                            (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                                          }) : ({ /* cicili#Let1998 */
                                            // ----------
                                            
                                            ({ /* cicili#Progn2002 */
                                              0;
                                            });
                                          }));
                                      });
                                    });
                                  }
                                }
                              else
                                { /* cicili#Let2007 */
                                  typeof((((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem )) branch ;
                                  // ----------
                                  
                                  ({ /* cicili#Let2011 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* cicili#Progn2012 */
                                          (branch  =  (((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block2016 */
                                        { /* cicili#Block2018 */
                                          printf ("invalid branch: ");
                                          (branch -> __h_table -> show )(stdout , branch );
                                        }
                                      }
                                    else
                                      { /* cicili#Let2025 */
                                        typeof((((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem )) reason ;
                                        // ----------
                                        
                                        ({ /* cicili#Let2029 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* cicili#Progn2030 */
                                                (reason  =  (((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          if (__h_case_result )
                                            { /* cicili#Block2034 */
                                              printf ("borrow error: %s", reason );
                                            }
                                          else
                                            { /* cicili#Let2039 */
                                              // ----------
                                              
                                              { /* cicili#Block2043 */
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
}
const BTree_int_User_Error__H_Table * const get_BTree_int_User_Error__H_Table () {
  static const BTree_int_User_Error__H_Table table  = { free_BTree_int_User_Error , show_BTree_int_User_Error };
  return (&table );
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_OBJECT () {
  { /* cicili#Let2055 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (int order ) {
  { /* cicili#Let2060 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item ) {
  { /* cicili#Let2065 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key ) {
  { /* cicili#Let2071 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , int index ) {
  { /* cicili#Let2076 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch ) {
  { /* cicili#Let2082 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason ) {
  { /* cicili#Let2087 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h___t , .__h_data._ = { reason }});
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
  { /* cicili#Let2103 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* cicili#Let2108 */
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
  { /* cicili#Let2124 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let2129 */
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
  { /* cicili#Let2147 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
  { /* cicili#Let2152 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __List_BTree_int_User_pair_t__H_IMPL__
#define __List_BTree_int_User_pair_t__H_IMPL__
BTree_int_User_pair_t * toArray_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t term ) {
  BTree_int_User_pair_t * array (List_BTree_int_User_pair_t list , int count ) {
    return ({ /* cicili#Let2162 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2166 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2167 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2169 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2172 */
              ({ /* cicili#Let2174 */
                BTree_int_User_pair_t * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let2178 */
              // ----------
              
              ({ /* cicili#Progn2182 */
                ({ /* cicili#Let2184 */
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
  return Cons_BTree_int_User_pair_t (item , Nil_BTree_int_User_pair_t ());
}
List_BTree_int_User_pair_t pure_List_BTree_int_User_pair_t (const BTree_int_User_pair_t * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_BTree_int_User_pair_t () : ({ /* cicili#Let2195 */
        BTree_int_User_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_BTree_int_User_pair_t () : Cons_BTree_int_User_pair_t (item , pure_List_BTree_int_User_pair_t ((++buf ), (--len ))));
      }));
}
int show_List_BTree_int_User_pair_t (CFile file , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2205 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2209 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2210 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2212 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2215 */
            (({ /* cicili#Let2219 */
                // ----------
                
                ({ /* cicili#Let2223 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2225 */
                      (({ /* cicili#Let2232 */
                          typeof((head . __h_0_mem )) id ;
                          typeof((head . __h_1_mem )) __h_match2230_1_arg ;
                          typeof((__h_match2230_1_arg . __h_0_mem )) name ;
                          typeof((__h_match2230_1_arg . __h_1_mem )) salary ;
                          // ----------
                          
                          ({ /* cicili#Let2236 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2237 */
                                    (id  =  (head . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2239 */
                                    (__h_match2230_1_arg  =  (head . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn2241 */
                                      (name  =  (__h_match2230_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2243 */
                                      (salary  =  (__h_match2230_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn2246 */
                                (fprintf (file , "(id: %d, name: ", id ) +  show_String (file , name ) +  fprintf (file , ", salary: %d)", salary ) );
                              }) : ({ /* cicili#Let2250 */
                                // ----------
                                
                                ({ /* cicili#Progn2254 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let2258 */
                      // ----------
                      
                      ({ /* cicili#Progn2262 */
                        ({ /* cicili#Let2269 */
                          typeof((head . __h_0_mem )) id ;
                          typeof((head . __h_1_mem )) __h_match2267_1_arg ;
                          typeof((__h_match2267_1_arg . __h_0_mem )) name ;
                          typeof((__h_match2267_1_arg . __h_1_mem )) salary ;
                          // ----------
                          
                          ({ /* cicili#Let2273 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2274 */
                                    (id  =  (head . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2276 */
                                    (__h_match2267_1_arg  =  (head . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn2278 */
                                      (name  =  (__h_match2267_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2280 */
                                      (salary  =  (__h_match2267_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn2283 */
                                (fprintf (file , "(id: %d, name: ", id ) +  show_String (file , name ) +  fprintf (file , ", salary: %d)", salary ) );
                              }) : ({ /* cicili#Let2287 */
                                // ----------
                                
                                ({ /* cicili#Progn2291 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_BTree_int_User_pair_t (file , tail ) );
          }) : ({ /* cicili#Let2296 */
            // ----------
            
            ({ /* cicili#Progn2300 */
              0;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2306 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2310 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2311 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2313 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2316 */
            Cons_BTree_int_User_pair_t (head , copy_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* cicili#Let2322 */
            // ----------
            
            ({ /* cicili#Progn2326 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , int index ) {
  return ({ /* cicili#Let2333 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2337 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2338 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2340 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2343 */
            Cons_BTree_int_User_pair_t (head , replaceAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let2349 */
            // ----------
            
            ({ /* cicili#Progn2353 */
              ({ /* cicili#Let2357 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let2361 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2362 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2365 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* cicili#Let2371 */
                      // ----------
                      
                      ({ /* cicili#Progn2375 */
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
  return ({ /* cicili#Let2382 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2386 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2387 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2389 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2392 */
            Cons_BTree_int_User_pair_t (head , deleteAt_List_BTree_int_User_pair_t (tail , (index  -  1 )));
          }) : ({ /* cicili#Let2398 */
            // ----------
            
            ({ /* cicili#Progn2402 */
              ({ /* cicili#Let2406 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let2410 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2411 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2414 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* cicili#Let2419 */
                      // ----------
                      
                      ({ /* cicili#Progn2423 */
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
List_BTree_int_User_pair_t insertAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , int index ) {
  return ({ /* cicili#Let2430 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2434 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2435 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2437 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2440 */
            Cons_BTree_int_User_pair_t (head , insertAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let2446 */
            // ----------
            
            ({ /* cicili#Progn2450 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (llist ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed ) {
  return ({ /* cicili#Let2458 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2462 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2463 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2465 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2468 */
            Cons_BTree_int_User_pair_t (head , replace_List_BTree_int_User_pair_t (tail , item , aimed ));
          }) : ({ /* cicili#Let2474 */
            // ----------
            
            ({ /* cicili#Progn2478 */
              ({ /* cicili#Let2482 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let2486 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2487 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2490 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* cicili#Let2496 */
                      // ----------
                      
                      ({ /* cicili#Progn2500 */
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
  return ({ /* cicili#Let2507 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2511 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2512 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2514 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2517 */
            Cons_BTree_int_User_pair_t (head , delete_List_BTree_int_User_pair_t (tail , aimed ));
          }) : ({ /* cicili#Let2523 */
            // ----------
            
            ({ /* cicili#Progn2527 */
              ({ /* cicili#Let2531 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let2535 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2536 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2539 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* cicili#Let2544 */
                      // ----------
                      
                      ({ /* cicili#Progn2548 */
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
  return ({ /* cicili#Let2555 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2559 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2560 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2562 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2565 */
            Cons_BTree_int_User_pair_t (head , insert_List_BTree_int_User_pair_t (tail , item , rlist ));
          }) : ({ /* cicili#Let2571 */
            // ----------
            
            ({ /* cicili#Progn2575 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  List_BTree_int_User_pair_t _reverse (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t rlist ) {
    return ({ /* cicili#Let2584 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2588 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2589 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2591 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2594 */
              _reverse (tail , Cons_BTree_int_User_pair_t (head , rlist ));
            }) : ({ /* cicili#Let2599 */
              // ----------
              
              ({ /* cicili#Progn2603 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let2607 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2611 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2612 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2614 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2617 */
            _reverse (tail , Cons_BTree_int_User_pair_t (head , Nil_BTree_int_User_pair_t ()));
          }) : ({ /* cicili#Let2623 */
            // ----------
            
            ({ /* cicili#Progn2627 */
              list ;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist ) {
  return ({ /* cicili#Let2633 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2637 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2638 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2640 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2643 */
            Cons_BTree_int_User_pair_t (head , append_List_BTree_int_User_pair_t (tail , rlist ));
          }) : ({ /* cicili#Let2649 */
            // ----------
            
            ({ /* cicili#Progn2653 */
              copy_List_BTree_int_User_pair_t (rlist );
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t push_List_BTree_int_User_pair_t (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list ) {
  return Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (list ));
}
List_BTree_int_User_pair_t take_List_BTree_int_User_pair_t (int len , List_BTree_int_User_pair_t list ) {
  return (((len  <=  0 )) ? Nil_BTree_int_User_pair_t () : ({ /* cicili#Let2666 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2670 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2671 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2673 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2676 */
              Cons_BTree_int_User_pair_t (head , take_List_BTree_int_User_pair_t ((--len ), tail ));
            }) : ({ /* cicili#Let2682 */
              // ----------
              
              ({ /* cicili#Progn2686 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2693 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2697 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2698 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2701 */
            ({ /* cicili#Let2705 */
              // ----------
              
              ({ /* cicili#Let2709 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn2711 */
                    copy_List_BTree_int_User_pair_t (list );
                  }) : ({ /* cicili#Let2716 */
                    // ----------
                    
                    ({ /* cicili#Progn2720 */
                      last_List_BTree_int_User_pair_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let2725 */
            // ----------
            
            ({ /* cicili#Progn2729 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2737 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2741 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2742 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2744 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2747 */
            Cons_BTree_int_User_pair_t (head , init_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* cicili#Let2753 */
            // ----------
            
            ({ /* cicili#Progn2757 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
int hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , int desired ) {
  return ({ /* cicili#Let2764 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2768 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2769 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2772 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_int_User_pair_t (tail , (--desired )) ));
          }) : ({ /* cicili#Let2778 */
            // ----------
            
            ({ /* cicili#Progn2782 */
              0;
            });
          }));
      });
    });
}
int len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2788 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2792 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2793 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2796 */
            (1 +  len_List_BTree_int_User_pair_t (tail ) );
          }) : ({ /* cicili#Let2801 */
            // ----------
            
            ({ /* cicili#Progn2805 */
              0;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t tail_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return drop_List_BTree_int_User_pair_t (1, list );
}
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (int len , List_BTree_int_User_pair_t list ) {
  return (((len  <=  0 )) ? copy_List_BTree_int_User_pair_t (list ) : ({ /* cicili#Let2816 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2820 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2821 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2824 */
              drop_List_BTree_int_User_pair_t ((--len ), tail );
            }) : ({ /* cicili#Let2829 */
              // ----------
              
              ({ /* cicili#Progn2833 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2841 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let2845 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2846 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2849 */
            Just_BTree_int_User_pair_t (head );
          }) : ({ /* cicili#Let2854 */
            // ----------
            
            ({ /* cicili#Progn2858 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (int index , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2865 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2869 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2870 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2873 */
            nthcdr_List_BTree_int_User_pair_t ((--index ), tail );
          }) : ({ /* cicili#Let2878 */
            // ----------
            
            ({ /* cicili#Progn2882 */
              list ;
            });
          }));
      });
    });
}
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (int index , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2889 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2893 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2894 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2896 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2899 */
            (((index  ==  0 )) ? Just_BTree_int_User_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_int_User_pair_t () : nth_List_BTree_int_User_pair_t ((--index ), tail )));
          }) : ({ /* cicili#Let2908 */
            // ----------
            
            ({ /* cicili#Progn2912 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
void free_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t * this_ptr ) {
  { /* cicili#Let2917 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2921 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2925 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2926 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2930 */
            { /* cicili#Block2932 */
              free (this );
              free_List_BTree_int_User_pair_t ((&tail ));
            }
          }
        else
          { /* cicili#Let2940 */
            // ----------
            
            ({ /* cicili#Let2944 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2947 */
                  { /* cicili#Block2949 */
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
  { /* cicili#Let2960 */
    List_BTree_int_User_pair_t instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_BTree_int_User_pair_t Nil_BTree_int_User_pair_t () {
  { /* cicili#Let2966 */
    List_BTree_int_User_pair_t instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h___t });
    return instance ;
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
  { /* cicili#Let2983 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t () {
  { /* cicili#Let2988 */
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
  { /* cicili#Let3008 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let3013 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Rc_BTree_int_User__H_IMPL__
#define __Rc_BTree_int_User__H_IMPL__
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User pointer ) {
  return ({ /* cicili#Let3020 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_int_User *)malloc (sizeof(BTree_int_User *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BTree_int_User (holder , count , ((size_t)pointer ));
    });
}
Rc_BTree_int_User clone_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let3029 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let3033 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3034 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3036 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3038 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3041 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn3044 */
                (++(*count ));
                __h_Hold_BTree_int_User (pointer , count , address );
              }) : Gone_BTree_int_User ());
          }) : ({ /* cicili#Let3050 */
            // ----------
            
            ({ /* cicili#Progn3054 */
              Gone_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User take_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  return ({ /* cicili#Let3062 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let3066 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3067 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3069 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3071 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3074 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let3078 */
                __auto_type result  = Just_BTree_int_User ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block3084 */
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_BTree_int_User ();
                  }
                else
                  (--(*count ));
                result ;
              }) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let3091 */
            // ----------
            
            ({ /* cicili#Progn3095 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let3103 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let3107 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3108 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3110 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3112 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3115 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_int_User ((*pointer )) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let3122 */
            // ----------
            
            ({ /* cicili#Progn3126 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  { /* cicili#Let3135 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let3139 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3140 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3142 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn3144 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3148 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block3152 */
              if ((*count ) ==  1 )
                { /* cicili#Block3155 */
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
        }
      else
        { /* cicili#Let3165 */
          // ----------
          
          ({ /* cicili#Let3169 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block3172 */
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
  { /* cicili#Let3183 */
    Rc_BTree_int_User instance  = ((Rc_BTree_int_User){ get_Rc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_BTree_int_User Gone_BTree_int_User () {
  { /* cicili#Let3188 */
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
  { /* cicili#Let3206 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User () {
  { /* cicili#Let3211 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __List_Rc_BTree_int_User__H_IMPL__
#define __List_Rc_BTree_int_User__H_IMPL__
Rc_BTree_int_User * toArray_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User term ) {
  Rc_BTree_int_User * array (List_Rc_BTree_int_User list , int count ) {
    return ({ /* cicili#Let3221 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3225 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3226 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3228 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3231 */
              ({ /* cicili#Let3233 */
                Rc_BTree_int_User * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let3237 */
              // ----------
              
              ({ /* cicili#Progn3241 */
                ({ /* cicili#Let3243 */
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
  return Cons_Rc_BTree_int_User (item , Nil_Rc_BTree_int_User ());
}
List_Rc_BTree_int_User pure_List_Rc_BTree_int_User (const Rc_BTree_int_User * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_Rc_BTree_int_User () : ({ /* cicili#Let3254 */
        Rc_BTree_int_User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Rc_BTree_int_User () : Cons_Rc_BTree_int_User (item , pure_List_Rc_BTree_int_User ((++buf ), (--len ))));
      }));
}
int show_List_Rc_BTree_int_User (CFile file , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3264 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3268 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3269 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3271 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3274 */
            (({ /* cicili#Let3278 */
                // ----------
                
                ({ /* cicili#Let3282 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3284 */
                      (({ /* cicili#Let3292 */
                          __auto_type match3291  = get_Rc_BTree_int_User (head );
                          typeof((((match3291 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let3297 */
                            bool __h_case_result  = (true  &&  (((match3291 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3298 */
                                  (child  =  (((match3291 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn3301 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* cicili#Let3306 */
                                // ----------
                                
                                ({ /* cicili#Progn3310 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let3314 */
                      // ----------
                      
                      ({ /* cicili#Progn3318 */
                        ({ /* cicili#Let3326 */
                          __auto_type match3325  = get_Rc_BTree_int_User (head );
                          typeof((((match3325 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let3331 */
                            bool __h_case_result  = (true  &&  (((match3325 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3332 */
                                  (child  =  (((match3325 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn3335 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* cicili#Let3340 */
                                // ----------
                                
                                ({ /* cicili#Progn3344 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_Rc_BTree_int_User (file , tail ) );
          }) : ({ /* cicili#Let3349 */
            // ----------
            
            ({ /* cicili#Progn3353 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3359 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3363 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3364 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3366 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3369 */
            Cons_Rc_BTree_int_User (head , copy_List_Rc_BTree_int_User (tail ));
          }) : ({ /* cicili#Let3375 */
            // ----------
            
            ({ /* cicili#Progn3379 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , int index ) {
  return ({ /* cicili#Let3386 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3390 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3391 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3393 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3396 */
            Cons_Rc_BTree_int_User (head , replaceAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3402 */
            // ----------
            
            ({ /* cicili#Progn3406 */
              ({ /* cicili#Let3410 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3414 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3415 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3418 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* cicili#Let3424 */
                      // ----------
                      
                      ({ /* cicili#Progn3428 */
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
  return ({ /* cicili#Let3435 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3439 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3440 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3442 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3445 */
            Cons_Rc_BTree_int_User (head , deleteAt_List_Rc_BTree_int_User (tail , (index  -  1 )));
          }) : ({ /* cicili#Let3451 */
            // ----------
            
            ({ /* cicili#Progn3455 */
              ({ /* cicili#Let3459 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3463 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3464 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3467 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* cicili#Let3472 */
                      // ----------
                      
                      ({ /* cicili#Progn3476 */
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
List_Rc_BTree_int_User insertAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , int index ) {
  return ({ /* cicili#Let3483 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3487 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3488 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3490 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3493 */
            Cons_Rc_BTree_int_User (head , insertAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3499 */
            // ----------
            
            ({ /* cicili#Progn3503 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (llist ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed ) {
  return ({ /* cicili#Let3511 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3515 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3516 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3518 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3521 */
            Cons_Rc_BTree_int_User (head , replace_List_Rc_BTree_int_User (tail , item , aimed ));
          }) : ({ /* cicili#Let3527 */
            // ----------
            
            ({ /* cicili#Progn3531 */
              ({ /* cicili#Let3535 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3539 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3540 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3543 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* cicili#Let3549 */
                      // ----------
                      
                      ({ /* cicili#Progn3553 */
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
  return ({ /* cicili#Let3560 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3564 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3565 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3567 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3570 */
            Cons_Rc_BTree_int_User (head , delete_List_Rc_BTree_int_User (tail , aimed ));
          }) : ({ /* cicili#Let3576 */
            // ----------
            
            ({ /* cicili#Progn3580 */
              ({ /* cicili#Let3584 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3588 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3589 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3592 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* cicili#Let3597 */
                      // ----------
                      
                      ({ /* cicili#Progn3601 */
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
  return ({ /* cicili#Let3608 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3612 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3613 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3615 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3618 */
            Cons_Rc_BTree_int_User (head , insert_List_Rc_BTree_int_User (tail , item , rlist ));
          }) : ({ /* cicili#Let3624 */
            // ----------
            
            ({ /* cicili#Progn3628 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  List_Rc_BTree_int_User _reverse (List_Rc_BTree_int_User list , List_Rc_BTree_int_User rlist ) {
    return ({ /* cicili#Let3637 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3641 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3642 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3644 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3647 */
              _reverse (tail , Cons_Rc_BTree_int_User (head , rlist ));
            }) : ({ /* cicili#Let3652 */
              // ----------
              
              ({ /* cicili#Progn3656 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let3660 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3664 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3665 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3667 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3670 */
            _reverse (tail , Cons_Rc_BTree_int_User (head , Nil_Rc_BTree_int_User ()));
          }) : ({ /* cicili#Let3676 */
            // ----------
            
            ({ /* cicili#Progn3680 */
              list ;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist ) {
  return ({ /* cicili#Let3686 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3690 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3691 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3693 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3696 */
            Cons_Rc_BTree_int_User (head , append_List_Rc_BTree_int_User (tail , rlist ));
          }) : ({ /* cicili#Let3702 */
            // ----------
            
            ({ /* cicili#Progn3706 */
              copy_List_Rc_BTree_int_User (rlist );
            });
          }));
      });
    });
}
List_Rc_BTree_int_User push_List_Rc_BTree_int_User (Rc_BTree_int_User item , List_Rc_BTree_int_User list ) {
  return Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (list ));
}
List_Rc_BTree_int_User take_List_Rc_BTree_int_User (int len , List_Rc_BTree_int_User list ) {
  return (((len  <=  0 )) ? Nil_Rc_BTree_int_User () : ({ /* cicili#Let3719 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3723 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3724 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3726 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3729 */
              Cons_Rc_BTree_int_User (head , take_List_Rc_BTree_int_User ((--len ), tail ));
            }) : ({ /* cicili#Let3735 */
              // ----------
              
              ({ /* cicili#Progn3739 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3746 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3750 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3751 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3754 */
            ({ /* cicili#Let3758 */
              // ----------
              
              ({ /* cicili#Let3762 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn3764 */
                    copy_List_Rc_BTree_int_User (list );
                  }) : ({ /* cicili#Let3769 */
                    // ----------
                    
                    ({ /* cicili#Progn3773 */
                      last_List_Rc_BTree_int_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3778 */
            // ----------
            
            ({ /* cicili#Progn3782 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3790 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3794 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3795 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3797 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3800 */
            Cons_Rc_BTree_int_User (head , init_List_Rc_BTree_int_User (tail ));
          }) : ({ /* cicili#Let3806 */
            // ----------
            
            ({ /* cicili#Progn3810 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
int hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , int desired ) {
  return ({ /* cicili#Let3817 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3821 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3822 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3825 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_int_User (tail , (--desired )) ));
          }) : ({ /* cicili#Let3831 */
            // ----------
            
            ({ /* cicili#Progn3835 */
              0;
            });
          }));
      });
    });
}
int len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3841 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3845 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3846 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3849 */
            (1 +  len_List_Rc_BTree_int_User (tail ) );
          }) : ({ /* cicili#Let3854 */
            // ----------
            
            ({ /* cicili#Progn3858 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User tail_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return drop_List_Rc_BTree_int_User (1, list );
}
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (int len , List_Rc_BTree_int_User list ) {
  return (((len  <=  0 )) ? copy_List_Rc_BTree_int_User (list ) : ({ /* cicili#Let3869 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3873 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3874 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3877 */
              drop_List_Rc_BTree_int_User ((--len ), tail );
            }) : ({ /* cicili#Let3882 */
              // ----------
              
              ({ /* cicili#Progn3886 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3894 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let3898 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3899 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3902 */
            Just_Rc_BTree_int_User (head );
          }) : ({ /* cicili#Let3907 */
            // ----------
            
            ({ /* cicili#Progn3911 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (int index , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3918 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3922 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3923 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3926 */
            nthcdr_List_Rc_BTree_int_User ((--index ), tail );
          }) : ({ /* cicili#Let3931 */
            // ----------
            
            ({ /* cicili#Progn3935 */
              list ;
            });
          }));
      });
    });
}
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (int index , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3942 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3946 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3947 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3949 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3952 */
            (((index  ==  0 )) ? Just_Rc_BTree_int_User (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_int_User () : nth_List_Rc_BTree_int_User ((--index ), tail )));
          }) : ({ /* cicili#Let3961 */
            // ----------
            
            ({ /* cicili#Progn3965 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
void free_List_Rc_BTree_int_User (List_Rc_BTree_int_User * this_ptr ) {
  { /* cicili#Let3970 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3974 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3978 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3979 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3983 */
            { /* cicili#Block3985 */
              free (this );
              free_List_Rc_BTree_int_User ((&tail ));
            }
          }
        else
          { /* cicili#Let3993 */
            // ----------
            
            ({ /* cicili#Let3997 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block4000 */
                  { /* cicili#Block4002 */
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
  { /* cicili#Let4013 */
    List_Rc_BTree_int_User instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_Rc_BTree_int_User Nil_Rc_BTree_int_User () {
  { /* cicili#Let4019 */
    List_Rc_BTree_int_User instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h___t });
    return instance ;
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
  { /* cicili#Let4036 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_int_User Nothing_List_Rc_BTree_int_User () {
  { /* cicili#Let4041 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_int_User__H_IMPL__
#define __Functor_List_Rc_BTree_int_User__H_IMPL__
List_Rc_BTree_int_User fmap_Functor_List_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input ) {
  return ({ /* cicili#Let4055 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4059 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4060 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4062 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4065 */
            Cons_Rc_BTree_int_User (a_b (head ), fmap_Functor_List_Rc_BTree_int_User (a_b , tail ));
          }) : ({ /* cicili#Let4072 */
            // ----------
            
            ({ /* cicili#Progn4076 */
              Nil_Rc_BTree_int_User ();
            });
          }));
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
  { /* cicili#Let4090 */
    Functor_List_Rc_BTree_int_User instance  = ((Functor_List_Rc_BTree_int_User){ get_Functor_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_Rc_BTree_int_User__H_IMPL__ */ 
Functor_List_Rc_BTree_int_User get_Functor_List_Rc_BTree_int_User () {
  return Functor_List_Rc_BTree_int_User_ctor ();
}
int U_BTree_int_User  = 3;
int L_BTree_int_User  = 2;
BTree_int_User split_BTree_int_User (BTree_int_User tree ) {
  return ({ /* cicili#Let4108 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let4112 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn4113 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4115 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4118 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let4124 */
                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4126 */
                  __auto_type tree  = tree ;
                  // ----------
                  ((void)(tree -> __h_table -> freeClass ));
                  tree ;
                });
                // ----------
                Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4134 */
                    __auto_type match4133  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                    typeof((((match4133 . __h_data ). Just ). __h_0_mem )) nitem ;
                    // ----------
                    
                    ({ /* cicili#Let4140 */
                      bool __h_case_result  = (true  &&  (((match4133 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4141 */
                            (nitem  =  (((match4133 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn4144 */
                          nitem ;
                        }) : ({ /* cicili#Let4148 */
                          // ----------
                          
                          ({ /* cicili#Progn4152 */
                            ((BTree_int_User_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4163 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4165 */
                        __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4175 */
                          Rc_BTree_int_User __ciciliC_4174 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_4174 ;
                        }), r1 );
                    }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4186 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4188 */
                        __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4198 */
                          Rc_BTree_int_User __ciciliC_4197 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_4197 ;
                        }), r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* cicili#Let4205 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let4209 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn4210 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn4212 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn4215 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let4221 */
                      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4223 */
                        __auto_type tree  = tree ;
                        // ----------
                        ((void)(tree -> __h_table -> freeClass ));
                        tree ;
                      });
                      // ----------
                      Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4231 */
                          __auto_type match4230  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                          typeof((((match4230 . __h_data ). Just ). __h_0_mem )) nitem ;
                          // ----------
                          
                          ({ /* cicili#Let4237 */
                            bool __h_case_result  = (true  &&  (((match4230 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4238 */
                                  (nitem  =  (((match4230 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn4241 */
                                nitem ;
                              }) : ({ /* cicili#Let4245 */
                                // ----------
                                
                                ({ /* cicili#Progn4249 */
                                  ((BTree_int_User_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4260 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4262 */
                              __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4272 */
                                Rc_BTree_int_User __ciciliC_4271 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_4271 ;
                              }), r1 );
                          }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4283 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4285 */
                              __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4295 */
                                Rc_BTree_int_User __ciciliC_4294 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_4294 ;
                              }), r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* cicili#Let4302 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let4306 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4307 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn4310 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let4316 */
                            __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4318 */
                              __auto_type tree  = tree ;
                              // ----------
                              ((void)(tree -> __h_table -> freeClass ));
                              tree ;
                            });
                            // ----------
                            Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4326 */
                                __auto_type match4325  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                                typeof((((match4325 . __h_data ). Just ). __h_0_mem )) nitem ;
                                // ----------
                                
                                ({ /* cicili#Let4332 */
                                  bool __h_case_result  = (true  &&  (((match4325 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4333 */
                                        (nitem  =  (((match4325 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn4336 */
                                      nitem ;
                                    }) : ({ /* cicili#Let4340 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn4344 */
                                        ((BTree_int_User_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2));
                          }) : tree );
                      }) : ({ /* cicili#Let4361 */
                        // ----------
                        
                        ({ /* cicili#Progn4365 */
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
  return ({ /* cicili#Let4371 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let4375 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn4376 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4378 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4381 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4391 */
                __auto_type match4390  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                typeof((((match4390 . __h_data ). Just ). __h_0_mem )) nitem ;
                // ----------
                
                ({ /* cicili#Let4397 */
                  bool __h_case_result  = (true  &&  (((match4390 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4398 */
                        (nitem  =  (((match4390 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4401 */
                      nitem ;
                    }) : ({ /* cicili#Let4405 */
                      // ----------
                      
                      ({ /* cicili#Progn4409 */
                        ((BTree_int_User_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4420 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4422 */
                    __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4432 */
                      Rc_BTree_int_User __ciciliC_4431 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_4431 ;
                    }), r1 );
                }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4443 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4445 */
                    __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4455 */
                      Rc_BTree_int_User __ciciliC_4454 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_4454 ;
                    }), r1 );
                })))}), 2)) : tree );
          }) : ({ /* cicili#Let4462 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let4466 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn4467 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn4469 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn4472 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4482 */
                      __auto_type match4481  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                      typeof((((match4481 . __h_data ). Just ). __h_0_mem )) nitem ;
                      // ----------
                      
                      ({ /* cicili#Let4488 */
                        bool __h_case_result  = (true  &&  (((match4481 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4489 */
                              (nitem  =  (((match4481 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn4492 */
                            nitem ;
                          }) : ({ /* cicili#Let4496 */
                            // ----------
                            
                            ({ /* cicili#Progn4500 */
                              ((BTree_int_User_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4511 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4513 */
                          __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4523 */
                            Rc_BTree_int_User __ciciliC_4522 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4522 ;
                          }), r1 );
                      }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4534 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4536 */
                          __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4546 */
                            Rc_BTree_int_User __ciciliC_4545 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4545 ;
                          }), r1 );
                      })))}), 2)) : tree );
                }) : ({ /* cicili#Let4553 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let4557 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4558 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn4561 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4571 */
                            __auto_type match4570  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                            typeof((((match4570 . __h_data ). Just ). __h_0_mem )) nitem ;
                            // ----------
                            
                            ({ /* cicili#Let4577 */
                              bool __h_case_result  = (true  &&  (((match4570 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4578 */
                                    (nitem  =  (((match4570 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn4581 */
                                  nitem ;
                                }) : ({ /* cicili#Let4585 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn4589 */
                                    ((BTree_int_User_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2)) : tree );
                      }) : ({ /* cicili#Let4606 */
                        // ----------
                        
                        ({ /* cicili#Progn4610 */
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
BTree_int_User mergeUp_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , int pitem_index , int pchild_index , List_BTree_int_User_pair_t left_items , List_Rc_BTree_int_User left_children , List_BTree_int_User_pair_t right_items , List_Rc_BTree_int_User right_children ) {
  return ({ /* cicili#Let4617 */
      __auto_type merged  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_items , right_items ), ({ /* cicili#Let4622 */
        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4624 */
          __auto_type r1  = append_List_Rc_BTree_int_User (left_children , right_children );
          // ----------
          ((void)(r1 -> __h_table -> freeClass ));
          r1 ;
        });
        // ----------
        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4633 */
            Rc_BTree_int_User __ciciliC_4632 (Rc_BTree_int_User __h_value ) {
              return clone_Rc_BTree_int_User (__h_value );
            }
            __ciciliC_4632 ;
          }), r1 );
      }));
      // ----------
      ({ /* cicili#Let4642 */
        __auto_type tmp_child  = splitForDelete_BTree_int_User (merged );
        typeof((((tmp_child -> __h_data ). Branch ). __h_0_mem )) __h_match4640_0_arg ;
        typeof((((__h_match4640_0_arg -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((tmp_child -> __h_data ). Branch ). __h_1_mem )) tmp_children ;
        // ----------
        
        ({ /* cicili#Let4647 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor ) ==  __h_Branch_t  ) &&  ((({ /* cicili#Progn4648 */
                    (__h_match4640_0_arg  =  (((tmp_child -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  (((__h_match4640_0_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4650 */
                        (head  =  (((__h_match4640_0_arg -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) ) ) ) &&  ({ /* cicili#Progn4652 */
                  (tmp_children  =  (((tmp_child -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4655 */
              ({ /* cicili#Let4658 */
                __auto_type merged  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4660 */
                  __auto_type merged  = merged ;
                  // ----------
                  ((void)(merged -> __h_table -> freeClass ));
                  merged ;
                });
                __auto_type tmp_child  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4663 */
                  __auto_type tmp_child  = tmp_child ;
                  // ----------
                  ((void)(tmp_child -> __h_table -> freeClass ));
                  tmp_child ;
                });
                // ----------
                Internal_BTree_int_User (replaceAt_List_BTree_int_User_pair_t (items , head , pitem_index ), ({ /* cicili#Let4670 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4672 */
                      __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                      // ----------
                      ((void)(r1 -> __h_table -> freeClass ));
                      r1 ;
                    });
                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4676 */
                      __auto_type r2  = take_List_Rc_BTree_int_User (pchild_index , r1 );
                      // ----------
                      ((void)(r2 -> __h_table -> freeClass ));
                      r2 ;
                    });
                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4680 */
                      __auto_type r3  = drop_List_Rc_BTree_int_User ((pchild_index  +  1 ), r1 );
                      // ----------
                      ((void)(r3 -> __h_table -> freeClass ));
                      r3 ;
                    });
                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4684 */
                      __auto_type r4  = append_List_Rc_BTree_int_User (tmp_children , r3 );
                      // ----------
                      ((void)(r4 -> __h_table -> freeClass ));
                      r4 ;
                    });
                    __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4688 */
                      __auto_type r5  = append_List_Rc_BTree_int_User (r2 , r4 );
                      // ----------
                      ((void)(r5 -> __h_table -> freeClass ));
                      r5 ;
                    });
                    // ----------
                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4697 */
                        Rc_BTree_int_User __ciciliC_4696 (Rc_BTree_int_User __h_value ) {
                          return clone_Rc_BTree_int_User (__h_value );
                        }
                        __ciciliC_4696 ;
                      }), r5 );
                  }));
              });
            }) : ({ /* cicili#Let4704 */
              // ----------
              
              ({ /* cicili#Let4708 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor ) ==  __h_Internal_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn4710 */
                    Internal_BTree_int_User (deleteAt_List_BTree_int_User_pair_t (items , pitem_index ), ({ /* cicili#Let4716 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4718 */
                          __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4722 */
                          __auto_type r2  = new_Rc_BTree_int_User (merged );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4726 */
                          __auto_type r3  = replaceAt_List_Rc_BTree_int_User (r1 , r2 , pchild_index );
                          // ----------
                          ((void)(r3 -> __h_table -> freeClass ));
                          r3 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4735 */
                            Rc_BTree_int_User __ciciliC_4734 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4734 ;
                          }), r3 );
                      }));
                  }) : ({ /* cicili#Let4742 */
                    // ----------
                    
                    ({ /* cicili#Progn4746 */
                      Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
                    });
                  }));
              });
            }));
        });
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User deleteWithParent_BTree_int_User (Maybe_BTree_int_User wparent , int pitem_index , int pchild_index , BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item ));
Either_BTree_int_User_Error_BTree_int_User borrowLeaf_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , Maybe_List_BTree_int_User_pair_t wleft , List_BTree_int_User_pair_t current , int index , BTree_int_User nchild , void (*callback) (BTree_int_User_pair_t item )) {
  Either_BTree_int_User_Error_BTree_int_User borrowRight (List_BTree_int_User_pair_t child_items ) {
    return ({ /* cicili#Let4773 */
        __auto_type match4772  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4772 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let4778 */
          bool __h_case_result  = (true  &&  (((match4772 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4779 */
                (right_child_rc  =  (((match4772 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4782 */
              ({ /* cicili#Let4785 */
                __auto_type __h_matchbox  = right_child_rc ;
                // ----------
                ({ /* cicili#Let4789 */
                  __auto_type match4788  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match4788 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  
                  ({ /* cicili#Let4794 */
                    bool __h_case_result  = (true  &&  (((match4788 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4795 */
                          (unboxed  =  (((match4788 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn4798 */
                        ({ /* cicili#Let4802 */
                          typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                          // ----------
                          
                          ({ /* cicili#Let4806 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4807 */
                                  (right_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn4810 */
                                (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let4818 */
                                    __auto_type first  = right_child_items ;
                                    typeof((((first -> __h_data ). Cons ). __h_0_mem )) first_item ;
                                    typeof((((first -> __h_data ). Cons ). __h_1_mem )) tail ;
                                    // ----------
                                    
                                    ({ /* cicili#Let4822 */
                                      bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4823 */
                                              (first_item  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn4825 */
                                              (tail  =  (((first -> __h_data ). Cons ). __h_1_mem ) );
                                              true ;
                                            }) ) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn4828 */
                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , first_item , current ), ({ /* cicili#Let4836 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4838 */
                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4842 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4848 */
                                                  Rc_BTree_int_User __ciciliC_4847 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4847 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4855 */
                                                __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4859 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4865 */
                                                  Rc_BTree_int_User __ciciliC_4864 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4864 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4872 */
                                                __auto_type r5  = take_List_BTree_int_User_pair_t (1, current );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4876 */
                                                __auto_type r7  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (child_items , r5 ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (copy_List_BTree_int_User_pair_t (tail )))}), 2);
                                                // ----------
                                                ((void)(r7 -> __h_table -> freeClass ));
                                                r7 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4889 */
                                                __auto_type r6  = append_List_Rc_BTree_int_User (r7 , r4 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_int_User (r2 , r6 );
                                            })));
                                        }) : ({ /* cicili#Let4896 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn4900 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R1"));
                                          });
                                        }));
                                    });
                                  }) : ({ /* cicili#Let4907 */
                                    typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
                                    // ----------
                                    
                                    ({ /* cicili#Let4911 */
                                      bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4912 */
                                            (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn4915 */
                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let4923 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4925 */
                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4929 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4935 */
                                                  Rc_BTree_int_User __ciciliC_4934 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4934 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4942 */
                                                __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4946 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4952 */
                                                  Rc_BTree_int_User __ciciliC_4951 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4951 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4959 */
                                                __auto_type r5  = wrap_List_BTree_int_User_pair_t (head );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4963 */
                                                __auto_type r6  = append_List_BTree_int_User_pair_t (child_items , r5 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4967 */
                                                __auto_type r8  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r6 , right_child_items ))), r4 );
                                                // ----------
                                                ((void)(r8 -> __h_table -> freeClass ));
                                                r8 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_int_User (r2 , r8 );
                                            })));
                                        }) : ({ /* cicili#Let4978 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn4982 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R2"));
                                          });
                                        }));
                                    });
                                  }));
                              }) : ({ /* cicili#Let4989 */
                                // ----------
                                
                                ({ /* cicili#Progn4993 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let5000 */
                        // ----------
                        
                        ({ /* cicili#Progn5004 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let5011 */
              // ----------
              
              ({ /* cicili#Progn5015 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowLeft (List_BTree_int_User_pair_t child_items ) {
    return ({ /* cicili#Let5028 */
        typeof((((wleft . __h_data ). Just ). __h_0_mem )) left ;
        typeof((((left -> __h_data ). Cons ). __h_0_mem )) left_item ;
        // ----------
        
        ({ /* cicili#Let5032 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5033 */
                  (left  =  (((wleft . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) &&  (true  &&  (((left -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5035 */
                      (left_item  =  (((left -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) ) ) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5038 */
              ({ /* cicili#Let5042 */
                __auto_type match5041  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                typeof((((match5041 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
                // ----------
                
                ({ /* cicili#Let5047 */
                  bool __h_case_result  = (true  &&  (((match5041 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5048 */
                        (left_child_rc  =  (((match5041 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5051 */
                      ({ /* cicili#Let5054 */
                        __auto_type __h_matchbox  = left_child_rc ;
                        // ----------
                        ({ /* cicili#Let5058 */
                          __auto_type match5057  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match5057 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          
                          ({ /* cicili#Let5063 */
                            bool __h_case_result  = (true  &&  (((match5057 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5064 */
                                  (unboxed  =  (((match5057 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn5067 */
                                ({ /* cicili#Let5071 */
                                  typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                  // ----------
                                  
                                  ({ /* cicili#Let5075 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn5076 */
                                          (left_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn5079 */
                                        (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let5087 */
                                            __auto_type last  = last_List_BTree_int_User_pair_t (left_child_items );
                                            typeof((((last -> __h_data ). Cons ). __h_0_mem )) last_item ;
                                            // ----------
                                            
                                            ({ /* cicili#Let5092 */
                                              bool __h_case_result  = (true  &&  (((last -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5093 */
                                                    (last_item  =  (((last -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn5096 */
                                                  ({ /* cicili#Let5099 */
                                                    __auto_type last  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5101 */
                                                      __auto_type last  = last ;
                                                      // ----------
                                                      ((void)(last -> __h_table -> freeClass ));
                                                      last ;
                                                    });
                                                    // ----------
                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , last_item , left ), ({ /* cicili#Let5110 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5112 */
                                                          __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                          // ----------
                                                          ((void)(r1 -> __h_table -> freeClass ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5116 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5122 */
                                                            Rc_BTree_int_User __ciciliC_5121 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_5121 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)(r2 -> __h_table -> freeClass ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5129 */
                                                          __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                          // ----------
                                                          ((void)(r3 -> __h_table -> freeClass ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5133 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5139 */
                                                            Rc_BTree_int_User __ciciliC_5138 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_5138 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)(r4 -> __h_table -> freeClass ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5146 */
                                                          __auto_type r5  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (init_List_BTree_int_User_pair_t (left_child_items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (push_List_BTree_int_User_pair_t (left_item , child_items )))}), 2);
                                                          // ----------
                                                          ((void)(r5 -> __h_table -> freeClass ));
                                                          r5 ;
                                                        });
                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5159 */
                                                          __auto_type r7  = append_List_Rc_BTree_int_User (r5 , r4 );
                                                          // ----------
                                                          ((void)(r7 -> __h_table -> freeClass ));
                                                          r7 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_int_User (r2 , r7 );
                                                      })));
                                                  });
                                                }) : ({ /* cicili#Let5166 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn5170 */
                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 2"));
                                                  });
                                                }));
                                            });
                                          }) : ({ /* cicili#Let5177 */
                                            __auto_type match5176  = borrowRight (child_items );
                                            // ----------
                                            
                                            ({ /* cicili#Let5181 */
                                              bool __h_case_result  = (true  &&  ((match5176 . __h_ctor ) ==  __h_Left_t  ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn5183 */
                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , left ), ({ /* cicili#Let5191 */
                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5193 */
                                                        __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                        // ----------
                                                        ((void)(r1 -> __h_table -> freeClass ));
                                                        r1 ;
                                                      });
                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5197 */
                                                        __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5203 */
                                                          Rc_BTree_int_User __ciciliC_5202 (Rc_BTree_int_User __h_value ) {
                                                            return clone_Rc_BTree_int_User (__h_value );
                                                          }
                                                          __ciciliC_5202 ;
                                                        }), r1 );
                                                        // ----------
                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                        r2 ;
                                                      });
                                                      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5210 */
                                                        __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                        // ----------
                                                        ((void)(r3 -> __h_table -> freeClass ));
                                                        r3 ;
                                                      });
                                                      __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5214 */
                                                        __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5220 */
                                                          Rc_BTree_int_User __ciciliC_5219 (Rc_BTree_int_User __h_value ) {
                                                            return clone_Rc_BTree_int_User (__h_value );
                                                          }
                                                          __ciciliC_5219 ;
                                                        }), r3 );
                                                        // ----------
                                                        ((void)(r4 -> __h_table -> freeClass ));
                                                        r4 ;
                                                      });
                                                      __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5227 */
                                                        __auto_type r8  = wrap_List_BTree_int_User_pair_t (left_item );
                                                        // ----------
                                                        ((void)(r8 -> __h_table -> freeClass ));
                                                        r8 ;
                                                      });
                                                      __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5231 */
                                                        __auto_type r5  = append_List_BTree_int_User_pair_t (left_child_items , r8 );
                                                        // ----------
                                                        ((void)(r5 -> __h_table -> freeClass ));
                                                        r5 ;
                                                      });
                                                      __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5235 */
                                                        __auto_type r7  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r5 , child_items ))), r4 );
                                                        // ----------
                                                        ((void)(r7 -> __h_table -> freeClass ));
                                                        r7 ;
                                                      });
                                                      // ----------
                                                      append_List_Rc_BTree_int_User (r2 , r7 );
                                                    })));
                                                }) : ({ /* cicili#Let5246 */
                                                  __auto_type right  = match5176 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn5250 */
                                                    right ;
                                                  });
                                                }));
                                            });
                                          }));
                                      }) : ({ /* cicili#Let5254 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn5258 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 3"));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let5265 */
                                // ----------
                                
                                ({ /* cicili#Progn5269 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 4"));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5276 */
                      // ----------
                      
                      ({ /* cicili#Progn5280 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 5"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5287 */
              // ----------
              
              ({ /* cicili#Progn5291 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let5295 */
      __auto_type result  = ({ /* cicili#Let5298 */
        typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
        // ----------
        
        ({ /* cicili#Let5302 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn5303 */
                (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5306 */
              (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5318 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5320 */
                    __auto_type r1  = new_Rc_BTree_int_User (nchild );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5324 */
                    __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                    // ----------
                    ((void)(r2 -> __h_table -> freeClass ));
                    r2 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5333 */
                      Rc_BTree_int_User __ciciliC_5332 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_5332 ;
                    }), r2 );
                }))) : ({ /* cicili#Let5339 */
                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5341 */
                    __auto_type nchild  = nchild ;
                    // ----------
                    ((void)(nchild -> __h_table -> freeClass ));
                    nchild ;
                  });
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* cicili#Let5346 */
              typeof((((nchild -> __h_data ). Internal ). __h_0_mem )) child_items ;
              // ----------
              
              ({ /* cicili#Let5350 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn5351 */
                      (child_items  =  (((nchild -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn5354 */
                    (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5366 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5368 */
                          __auto_type r1  = new_Rc_BTree_int_User (nchild );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5372 */
                          __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                          // ----------
                          ((void)(r2 -> __h_table -> freeClass ));
                          r2 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5381 */
                            Rc_BTree_int_User __ciciliC_5380 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_5380 ;
                          }), r2 );
                      }))) : ({ /* cicili#Let5387 */
                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5389 */
                          __auto_type nchild  = nchild ;
                          // ----------
                          ((void)(nchild -> __h_table -> freeClass ));
                          nchild ;
                        });
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* cicili#Let5394 */
                    typeof((((nchild -> __h_data ). Leaf ). __h_0_mem )) child_items ;
                    // ----------
                    
                    ({ /* cicili#Let5398 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn5399 */
                            (child_items  =  (((nchild -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn5402 */
                          (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5414 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5416 */
                                __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5420 */
                                __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                // ----------
                                ((void)(r2 -> __h_table -> freeClass ));
                                r2 ;
                              });
                              // ----------
                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5429 */
                                  Rc_BTree_int_User __ciciliC_5428 (Rc_BTree_int_User __h_value ) {
                                    return clone_Rc_BTree_int_User (__h_value );
                                  }
                                  __ciciliC_5428 ;
                                }), r2 );
                            }))) : ({ /* cicili#Let5435 */
                              __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5437 */
                                __auto_type nchild  = nchild ;
                                // ----------
                                ((void)(nchild -> __h_table -> freeClass ));
                                nchild ;
                              });
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* cicili#Let5442 */
                          // ----------
                          
                          ({ /* cicili#Progn5446 */
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
Either_BTree_int_User_Error_BTree_int_User borrowInternal_BTree_int_User (Maybe_BTree_int_User wtree , List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , int index , void (*callback) (BTree_int_User_pair_t item )) {
  Either_BTree_int_User_Error_BTree_int_User borrowRightInternal (List_BTree_int_User_pair_t left_child_items , List_Rc_BTree_int_User left_child_children ) {
    return ({ /* cicili#Let5471 */
        __auto_type match5470  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match5470 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let5476 */
          bool __h_case_result  = (true  &&  (((match5470 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5477 */
                (right_child_rc  =  (((match5470 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5480 */
              ({ /* cicili#Let5484 */
                __auto_type match5483  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match5483 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                
                ({ /* cicili#Let5489 */
                  bool __h_case_result  = (true  &&  (((match5483 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5490 */
                        (right_child  =  (((match5483 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5493 */
                      ({ /* cicili#Let5497 */
                        typeof((((right_child -> __h_data ). Branch ). __h_0_mem )) right_child_items ;
                        typeof((((right_child -> __h_data ). Branch ). __h_1_mem )) right_child_children ;
                        // ----------
                        
                        ({ /* cicili#Let5501 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5502 */
                                  (right_child_items  =  (((right_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5504 */
                                  (right_child_children  =  (((right_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn5507 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let5516 */
                                  __auto_type match5514  = min_BTree_int_User (right_child );
                                  typeof((((match5514 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let5521 */
                                    bool __h_case_result  = (true  &&  (((match5514 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5522 */
                                            (min  =  (((match5514 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn5524 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn5527 */
                                        ({ /* cicili#Let5531 */
                                          __auto_type match5530  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match5530 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let5536 */
                                            bool __h_case_result  = (true  &&  (((match5530 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5537 */
                                                  (nchild  =  (((match5530 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn5540 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let5548 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5550 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5554 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5563 */
                                                        Rc_BTree_int_User __ciciliC_5562 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_5562 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let5570 */
                                                __auto_type left  = match5530 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn5574 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let5578 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn5582 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* cicili#Let5590 */
                                  typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                  typeof((current_item . __h_0_mem )) current_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let5594 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5595 */
                                            (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn5597 */
                                              (current_key  =  (current_item . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn5600 */
                                        ({ /* cicili#Let5603 */
                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5605 */
                                            __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                            // ----------
                                            ((void)(r1 -> __h_table -> freeClass ));
                                            r1 ;
                                          });
                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5609 */
                                            __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                            // ----------
                                            ((void)(r2 -> __h_table -> freeClass ));
                                            r2 ;
                                          });
                                          __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5613 */
                                            __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5622 */
                                              Rc_BTree_int_User __ciciliC_5621 (Rc_BTree_int_User __h_value ) {
                                                return clone_Rc_BTree_int_User (__h_value );
                                              }
                                              __ciciliC_5621 ;
                                            }), r2 ));
                                            // ----------
                                            ((void)(r4 -> __h_table -> freeClass ));
                                            r4 ;
                                          });
                                          __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5629 */
                                            __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                            // ----------
                                            ((void)(r5 -> __h_table -> freeClass ));
                                            r5 ;
                                          });
                                          __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5633 */
                                            __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                            // ----------
                                            ((void)(r7 -> __h_table -> freeClass ));
                                            r7 ;
                                          });
                                          // ----------
                                          ({ /* cicili#Let5639 */
                                            __auto_type match5638  = delete_BTree_int_User (r4 , current_key , NULL );
                                            typeof((((match5638 . __h_data ). Right ). __h_0_mem )) ntree ;
                                            // ----------
                                            
                                            ({ /* cicili#Let5644 */
                                              bool __h_case_result  = (true  &&  (((match5638 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5645 */
                                                    (ntree  =  (((match5638 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn5648 */
                                                  ({ /* cicili#Let5652 */
                                                    __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let5657 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5658 */
                                                              (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn5660 */
                                                              (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn5663 */
                                                          ({ /* cicili#Let5667 */
                                                            typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let5671 */
                                                              bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5672 */
                                                                    (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn5675 */
                                                                  ({ /* cicili#Let5678 */
                                                                    __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5680 */
                                                                      __auto_type ntree  = ntree ;
                                                                      // ----------
                                                                      ((void)(ntree -> __h_table -> freeClass ));
                                                                      ntree ;
                                                                    });
                                                                    __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5683 */
                                                                      __auto_type tmp_result  = tmp_result ;
                                                                      // ----------
                                                                      ((void)(tmp_result -> __h_table -> freeClass ));
                                                                      tmp_result ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let5692 */
                                                                        __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5694 */
                                                                          __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                          // ----------
                                                                          ((void)(r10 -> __h_table -> freeClass ));
                                                                          r10 ;
                                                                        });
                                                                        __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5698 */
                                                                          __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                          // ----------
                                                                          ((void)(r11 -> __h_table -> freeClass ));
                                                                          r11 ;
                                                                        });
                                                                        // ----------
                                                                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5707 */
                                                                            Rc_BTree_int_User __ciciliC_5706 (Rc_BTree_int_User __h_value ) {
                                                                              return clone_Rc_BTree_int_User (__h_value );
                                                                            }
                                                                            __ciciliC_5706 ;
                                                                          }), r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* cicili#Let5714 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn5718 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let5725 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let5729 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn5731 */
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let5739 */
                                                                    __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5741 */
                                                                      __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                      // ----------
                                                                      ((void)((r9 . __h_table )-> freeData ));
                                                                      r9 ;
                                                                    });
                                                                    __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5745 */
                                                                      __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                      // ----------
                                                                      ((void)(r10 -> __h_table -> freeClass ));
                                                                      r10 ;
                                                                    });
                                                                    __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5749 */
                                                                      __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                      // ----------
                                                                      ((void)(r11 -> __h_table -> freeClass ));
                                                                      r11 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5758 */
                                                                        Rc_BTree_int_User __ciciliC_5757 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_5757 ;
                                                                      }), r11 );
                                                                  })));
                                                              }) : ({ /* cicili#Let5765 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn5769 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let5776 */
                                                  __auto_type left  = match5638 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn5780 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* cicili#Let5784 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn5788 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* cicili#Let5795 */
                              typeof((((right_child -> __h_data ). Internal ). __h_0_mem )) right_child_items ;
                              typeof((((right_child -> __h_data ). Internal ). __h_1_mem )) right_child_children ;
                              // ----------
                              
                              ({ /* cicili#Let5799 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn5800 */
                                        (right_child_items  =  (((right_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn5802 */
                                        (right_child_children  =  (((right_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn5805 */
                                    (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let5814 */
                                        __auto_type match5812  = min_BTree_int_User (right_child );
                                        typeof((((match5812 . __h_data ). Just ). __h_0_mem )) min ;
                                        typeof((min . __h_0_mem )) min_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let5819 */
                                          bool __h_case_result  = (true  &&  (((match5812 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5820 */
                                                  (min  =  (((match5812 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn5822 */
                                                    (min_key  =  (min . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn5825 */
                                              ({ /* cicili#Let5829 */
                                                __auto_type match5828  = delete_BTree_int_User (right_child , min_key , NULL );
                                                typeof((((match5828 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                
                                                ({ /* cicili#Let5834 */
                                                  bool __h_case_result  = (true  &&  (((match5828 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5835 */
                                                        (nchild  =  (((match5828 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5838 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let5846 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5848 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5852 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5861 */
                                                              Rc_BTree_int_User __ciciliC_5860 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_5860 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let5868 */
                                                      __auto_type left  = match5828 ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn5872 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5876 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn5880 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* cicili#Let5888 */
                                        typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                        typeof((current_item . __h_0_mem )) current_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let5892 */
                                          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5893 */
                                                  (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn5895 */
                                                    (current_key  =  (current_item . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn5898 */
                                              ({ /* cicili#Let5901 */
                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5903 */
                                                  __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                  // ----------
                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                  r1 ;
                                                });
                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5907 */
                                                  __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                  // ----------
                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                  r2 ;
                                                });
                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5911 */
                                                  __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5920 */
                                                    Rc_BTree_int_User __ciciliC_5919 (Rc_BTree_int_User __h_value ) {
                                                      return clone_Rc_BTree_int_User (__h_value );
                                                    }
                                                    __ciciliC_5919 ;
                                                  }), r2 ));
                                                  // ----------
                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                  r4 ;
                                                });
                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5927 */
                                                  __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                                  // ----------
                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                  r5 ;
                                                });
                                                __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5931 */
                                                  __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                  // ----------
                                                  ((void)(r7 -> __h_table -> freeClass ));
                                                  r7 ;
                                                });
                                                // ----------
                                                ({ /* cicili#Let5937 */
                                                  __auto_type match5936  = delete_BTree_int_User (r4 , current_key , NULL );
                                                  typeof((((match5936 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let5942 */
                                                    bool __h_case_result  = (true  &&  (((match5936 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5943 */
                                                          (ntree  =  (((match5936 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn5946 */
                                                        ({ /* cicili#Let5950 */
                                                          __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let5955 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5956 */
                                                                    (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn5958 */
                                                                    (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn5961 */
                                                                ({ /* cicili#Let5965 */
                                                                  typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let5969 */
                                                                    bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5970 */
                                                                          (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn5973 */
                                                                        ({ /* cicili#Let5976 */
                                                                          __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5978 */
                                                                            __auto_type ntree  = ntree ;
                                                                            // ----------
                                                                            ((void)(ntree -> __h_table -> freeClass ));
                                                                            ntree ;
                                                                          });
                                                                          __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5981 */
                                                                            __auto_type tmp_result  = tmp_result ;
                                                                            // ----------
                                                                            ((void)(tmp_result -> __h_table -> freeClass ));
                                                                            tmp_result ;
                                                                          });
                                                                          // ----------
                                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let5990 */
                                                                              __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5992 */
                                                                                __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                                // ----------
                                                                                ((void)(r10 -> __h_table -> freeClass ));
                                                                                r10 ;
                                                                              });
                                                                              __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5996 */
                                                                                __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                // ----------
                                                                                ((void)(r11 -> __h_table -> freeClass ));
                                                                                r11 ;
                                                                              });
                                                                              // ----------
                                                                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6005 */
                                                                                  Rc_BTree_int_User __ciciliC_6004 (Rc_BTree_int_User __h_value ) {
                                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                                  }
                                                                                  __ciciliC_6004 ;
                                                                                }), r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* cicili#Let6012 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn6016 */
                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let6023 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let6027 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn6029 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let6037 */
                                                                          __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6039 */
                                                                            __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                            // ----------
                                                                            ((void)((r9 . __h_table )-> freeData ));
                                                                            r9 ;
                                                                          });
                                                                          __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6043 */
                                                                            __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                            // ----------
                                                                            ((void)(r10 -> __h_table -> freeClass ));
                                                                            r10 ;
                                                                          });
                                                                          __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6047 */
                                                                            __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                            // ----------
                                                                            ((void)(r11 -> __h_table -> freeClass ));
                                                                            r11 ;
                                                                          });
                                                                          // ----------
                                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6056 */
                                                                              Rc_BTree_int_User __ciciliC_6055 (Rc_BTree_int_User __h_value ) {
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_6055 ;
                                                                            }), r11 );
                                                                        })));
                                                                    }) : ({ /* cicili#Let6063 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn6067 */
                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let6074 */
                                                        __auto_type left  = match5936 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn6078 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* cicili#Let6082 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn6086 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* cicili#Let6093 */
                                    // ----------
                                    
                                    ({ /* cicili#Progn6097 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6104 */
                      // ----------
                      
                      ({ /* cicili#Progn6108 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6115 */
              // ----------
              
              ({ /* cicili#Progn6119 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowRightLeaf (List_BTree_int_User_pair_t left_child_items ) {
    return ({ /* cicili#Let6132 */
        __auto_type match6131  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match6131 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let6137 */
          bool __h_case_result  = (true  &&  (((match6131 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6138 */
                (right_child_rc  =  (((match6131 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6141 */
              ({ /* cicili#Let6145 */
                __auto_type match6144  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match6144 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                
                ({ /* cicili#Let6150 */
                  bool __h_case_result  = (true  &&  (((match6144 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6151 */
                        (right_child  =  (((match6144 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6154 */
                      ({ /* cicili#Let6158 */
                        typeof((((right_child -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                        // ----------
                        
                        ({ /* cicili#Let6162 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6163 */
                                (right_child_items  =  (((right_child -> __h_data ). Leaf ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn6166 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6175 */
                                  __auto_type match6173  = min_BTree_int_User (right_child );
                                  typeof((((match6173 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let6180 */
                                    bool __h_case_result  = (true  &&  (((match6173 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6181 */
                                            (min  =  (((match6173 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn6183 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn6186 */
                                        ({ /* cicili#Let6190 */
                                          __auto_type match6189  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match6189 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let6195 */
                                            bool __h_case_result  = (true  &&  (((match6189 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6196 */
                                                  (nchild  =  (((match6189 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn6199 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let6207 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6209 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6213 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6222 */
                                                        Rc_BTree_int_User __ciciliC_6221 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_6221 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let6229 */
                                                __auto_type left  = match6189 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn6233 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let6237 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn6241 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let6252 */
                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6254 */
                                    __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                    // ----------
                                    ((void)(r1 -> __h_table -> freeClass ));
                                    r1 ;
                                  });
                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6258 */
                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6264 */
                                      Rc_BTree_int_User __ciciliC_6263 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_6263 ;
                                    }), r1 );
                                    // ----------
                                    ((void)(r2 -> __h_table -> freeClass ));
                                    r2 ;
                                  });
                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6271 */
                                    __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                    // ----------
                                    ((void)(r3 -> __h_table -> freeClass ));
                                    r3 ;
                                  });
                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6275 */
                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6281 */
                                      Rc_BTree_int_User __ciciliC_6280 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_6280 ;
                                    }), r3 );
                                    // ----------
                                    ((void)(r4 -> __h_table -> freeClass ));
                                    r4 ;
                                  });
                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6288 */
                                    __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , right_child_items ))), r4 );
                                    // ----------
                                    ((void)(r5 -> __h_table -> freeClass ));
                                    r5 ;
                                  });
                                  // ----------
                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                }))));
                            }) : ({ /* cicili#Let6299 */
                              // ----------
                              
                              ({ /* cicili#Progn6303 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6310 */
                      // ----------
                      
                      ({ /* cicili#Progn6314 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6321 */
              // ----------
              
              ({ /* cicili#Progn6325 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let6332 */
      __auto_type result  = ({ /* cicili#Let6335 */
        __auto_type match6334  = nth_List_Rc_BTree_int_User (index , children );
        typeof((((match6334 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
        // ----------
        
        ({ /* cicili#Let6340 */
          bool __h_case_result  = (true  &&  (((match6334 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6341 */
                (left_child_rc  =  (((match6334 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6344 */
              ({ /* cicili#Let6348 */
                __auto_type match6347  = get_Rc_BTree_int_User (left_child_rc );
                typeof((((match6347 . __h_data ). Just ). __h_0_mem )) left_child ;
                // ----------
                
                ({ /* cicili#Let6353 */
                  bool __h_case_result  = (true  &&  (((match6347 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6354 */
                        (left_child  =  (((match6347 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6357 */
                      ({ /* cicili#Let6361 */
                        typeof((((left_child -> __h_data ). Branch ). __h_0_mem )) left_child_items ;
                        typeof((((left_child -> __h_data ). Branch ). __h_1_mem )) left_child_children ;
                        // ----------
                        
                        ({ /* cicili#Let6365 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6366 */
                                  (left_child_items  =  (((left_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6368 */
                                  (left_child_children  =  (((left_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn6371 */
                              (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6380 */
                                  __auto_type match6378  = max_BTree_int_User (left_child );
                                  typeof((((match6378 . __h_data ). Just ). __h_0_mem )) max ;
                                  typeof((max . __h_0_mem )) max_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let6385 */
                                    bool __h_case_result  = (true  &&  (((match6378 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6386 */
                                            (max  =  (((match6378 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn6388 */
                                              (max_key  =  (max . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn6391 */
                                        ({ /* cicili#Let6395 */
                                          __auto_type match6394  = delete_BTree_int_User (left_child , max_key , NULL );
                                          typeof((((match6394 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let6400 */
                                            bool __h_case_result  = (true  &&  (((match6394 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6401 */
                                                  (nchild  =  (((match6394 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn6404 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6412 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6414 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6418 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6427 */
                                                        Rc_BTree_int_User __ciciliC_6426 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_6426 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let6434 */
                                                __auto_type left  = match6394 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn6438 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let6442 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn6446 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* cicili#Let6453 */
                              typeof((((left_child -> __h_data ). Internal ). __h_0_mem )) left_child_items ;
                              typeof((((left_child -> __h_data ). Internal ). __h_1_mem )) left_child_children ;
                              // ----------
                              
                              ({ /* cicili#Let6457 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6458 */
                                        (left_child_items  =  (((left_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn6460 */
                                        (left_child_children  =  (((left_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn6463 */
                                    (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6472 */
                                        __auto_type match6470  = max_BTree_int_User (left_child );
                                        typeof((((match6470 . __h_data ). Just ). __h_0_mem )) max ;
                                        typeof((max . __h_0_mem )) max_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let6477 */
                                          bool __h_case_result  = (true  &&  (((match6470 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6478 */
                                                  (max  =  (((match6470 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn6480 */
                                                    (max_key  =  (max . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn6483 */
                                              ({ /* cicili#Let6487 */
                                                __auto_type match6486  = delete_BTree_int_User (left_child , max_key , NULL );
                                                typeof((((match6486 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                
                                                ({ /* cicili#Let6492 */
                                                  bool __h_case_result  = (true  &&  (((match6486 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6493 */
                                                        (nchild  =  (((match6486 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6496 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6504 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6506 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6510 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6519 */
                                                              Rc_BTree_int_User __ciciliC_6518 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_6518 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let6526 */
                                                      __auto_type left  = match6486 ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn6530 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6534 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn6538 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* cicili#Let6545 */
                                    typeof((((left_child -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                    // ----------
                                    
                                    ({ /* cicili#Let6549 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6550 */
                                            (left_child_items  =  (((left_child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn6553 */
                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6562 */
                                              __auto_type match6560  = max_BTree_int_User (left_child );
                                              typeof((((match6560 . __h_data ). Just ). __h_0_mem )) max ;
                                              typeof((max . __h_0_mem )) max_key ;
                                              // ----------
                                              
                                              ({ /* cicili#Let6567 */
                                                bool __h_case_result  = (true  &&  (((match6560 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6568 */
                                                        (max  =  (((match6560 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  (true  &&  ({ /* cicili#Progn6570 */
                                                          (max_key  =  (max . __h_0_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn6573 */
                                                    ({ /* cicili#Let6577 */
                                                      __auto_type match6576  = delete_BTree_int_User (left_child , max_key , NULL );
                                                      typeof((((match6576 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let6582 */
                                                        bool __h_case_result  = (true  &&  (((match6576 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6583 */
                                                              (nchild  =  (((match6576 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn6586 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6594 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6596 */
                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6600 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6609 */
                                                                    Rc_BTree_int_User __ciciliC_6608 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_6608 ;
                                                                  }), r2 );
                                                              })));
                                                          }) : ({ /* cicili#Let6616 */
                                                            __auto_type left  = match6576 ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn6620 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let6624 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn6628 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* cicili#Let6635 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn6639 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6646 */
                      // ----------
                      
                      ({ /* cicili#Progn6650 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6657 */
              // ----------
              
              ({ /* cicili#Progn6661 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 16"));
              });
            }));
        });
      });
      // ----------
      result ;
    });
}
Either_BTree_int_User_Error_BTree_int_User deleteWithParent_BTree_int_User (Maybe_BTree_int_User wparent , int pitem_index , int pchild_index , BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item )) {
  Either_BTree_int_User_Error_BTree_int_User deleteInternal (Maybe_BTree_int_User tree , List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , Maybe_List_BTree_int_User_pair_t wleft , List_BTree_int_User_pair_t current , int index ) {
    return ({ /* cicili#Let6689 */
        __auto_type result  = ({ /* cicili#Let6693 */
          typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
          typeof((head . __h_0_mem )) key ;
          typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
          // ----------
          
          ({ /* cicili#Let6697 */
            bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6698 */
                      (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) &&  (true  &&  ({ /* cicili#Progn6700 */
                        (key  =  (head . __h_0_mem ) );
                        true ;
                      }) ) ) &&  ({ /* cicili#Progn6702 */
                    (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn6705 */
                ({ /* cicili#Let6709 */
                  __auto_type match6708  = compareKey (skey , key );
                  // ----------
                  
                  ({ /* cicili#Let6713 */
                    bool __h_case_result  = (true  &&  ((match6708 . __h_ctor ) ==  __h_LT_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn6715 */
                        ({ /* cicili#Let6719 */
                          __auto_type match6718  = nth_List_Rc_BTree_int_User (index , children );
                          typeof((((match6718 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let6724 */
                            bool __h_case_result  = (true  &&  (((match6718 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6725 */
                                  (child  =  (((match6718 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn6728 */
                                ({ /* cicili#Let6732 */
                                  __auto_type match6731  = get_Rc_BTree_int_User (child );
                                  typeof((((match6731 . __h_data ). Just ). __h_0_mem )) tr ;
                                  // ----------
                                  
                                  ({ /* cicili#Let6737 */
                                    bool __h_case_result  = (true  &&  (((match6731 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6738 */
                                          (tr  =  (((match6731 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn6741 */
                                        ({ /* cicili#Let6745 */
                                          // ----------
                                          
                                          ({ /* cicili#Let6749 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn6751 */
                                                ({ /* cicili#Let6755 */
                                                  __auto_type match6754  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                  typeof((((match6754 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let6760 */
                                                    bool __h_case_result  = (true  &&  (((match6754 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6761 */
                                                          (nchild  =  (((match6754 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn6764 */
                                                        ({ /* cicili#Let6768 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let6772 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6773 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn6775 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn6778 */
                                                                ({ /* cicili#Let6782 */
                                                                  __auto_type match6781  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match6781 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let6787 */
                                                                    bool __h_case_result  = (true  &&  (((match6781 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6788 */
                                                                          (wleft  =  (((match6781 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6791 */
                                                                        ({ /* cicili#Let6794 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let6798 */
                                                                            __auto_type match6797  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match6797 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let6803 */
                                                                              bool __h_case_result  = (true  &&  (((match6797 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6804 */
                                                                                    (unboxed  =  (((match6797 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn6807 */
                                                                                  ({ /* cicili#Let6811 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let6815 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6816 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn6818 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn6821 */
                                                                                          ({ /* cicili#Let6824 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6826 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let6834 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let6838 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6839 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn6841 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn6844 */
                                                                                                ({ /* cicili#Let6847 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6849 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let6857 */
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Progn6861 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let6868 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn6872 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let6879 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn6883 */
                                                                          ({ /* cicili#Let6887 */
                                                                            __auto_type match6886  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match6886 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let6892 */
                                                                              bool __h_case_result  = (true  &&  (((match6886 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6893 */
                                                                                    (wright  =  (((match6886 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn6896 */
                                                                                  ({ /* cicili#Let6899 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let6903 */
                                                                                      __auto_type match6902  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match6902 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Let6908 */
                                                                                        bool __h_case_result  = (true  &&  (((match6902 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6909 */
                                                                                              (unboxed  =  (((match6902 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn6912 */
                                                                                            ({ /* cicili#Let6916 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let6920 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6921 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn6923 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn6926 */
                                                                                                    ({ /* cicili#Let6929 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6931 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let6939 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let6943 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6944 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn6946 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn6949 */
                                                                                                          ({ /* cicili#Let6952 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6954 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let6962 */
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Progn6966 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let6973 */
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Progn6977 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let6984 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn6988 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let6995 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn6999 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7007 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7009 */
                                                                        __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7013 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7022 */
                                                                          Rc_BTree_int_User __ciciliC_7021 (Rc_BTree_int_User __h_value ) {
                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                          }
                                                                          __ciciliC_7021 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let7029 */
                                                        __auto_type left  = match6754 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn7033 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let7037 */
                                                // ----------
                                                
                                                ({ /* cicili#Let7041 */
                                                  bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn7043 */
                                                      ({ /* cicili#Let7047 */
                                                        __auto_type match7046  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                        typeof((((match7046 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let7052 */
                                                          bool __h_case_result  = (true  &&  (((match7046 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7053 */
                                                                (nchild  =  (((match7046 . __h_data ). Right ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn7056 */
                                                              ({ /* cicili#Let7060 */
                                                                typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let7064 */
                                                                  bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7065 */
                                                                          (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                          true ;
                                                                        }) &&  ({ /* cicili#Progn7067 */
                                                                          (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7070 */
                                                                      ({ /* cicili#Let7074 */
                                                                        __auto_type match7073  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                        typeof((((match7073 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Let7079 */
                                                                          bool __h_case_result  = (true  &&  (((match7073 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7080 */
                                                                                (wleft  =  (((match7073 . __h_data ). Just ). __h_0_mem ) );
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn7083 */
                                                                              ({ /* cicili#Let7086 */
                                                                                __auto_type __h_matchbox  = wleft ;
                                                                                // ----------
                                                                                ({ /* cicili#Let7090 */
                                                                                  __auto_type match7089  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                  typeof((((match7089 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Let7095 */
                                                                                    bool __h_case_result  = (true  &&  (((match7089 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7096 */
                                                                                          (unboxed  =  (((match7089 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn7099 */
                                                                                        ({ /* cicili#Let7103 */
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let7107 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7108 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn7110 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7113 */
                                                                                                ({ /* cicili#Let7116 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7118 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let7126 */
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Let7130 */
                                                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7131 */
                                                                                                          (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                          true ;
                                                                                                        }) &&  ({ /* cicili#Progn7133 */
                                                                                                          (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                          true ;
                                                                                                        }) ) ) );
                                                                                                  // ----------
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7136 */
                                                                                                      ({ /* cicili#Let7139 */
                                                                                                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7141 */
                                                                                                          __auto_type nchild  = nchild ;
                                                                                                          // ----------
                                                                                                          ((void)(nchild -> __h_table -> freeClass ));
                                                                                                          nchild ;
                                                                                                        });
                                                                                                        // ----------
                                                                                                        Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let7149 */
                                                                                                      // ----------
                                                                                                      
                                                                                                      ({ /* cicili#Progn7153 */
                                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let7160 */
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Progn7164 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }) : ({ /* cicili#Let7171 */
                                                                              // ----------
                                                                              
                                                                              ({ /* cicili#Progn7175 */
                                                                                ({ /* cicili#Let7179 */
                                                                                  __auto_type match7178  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                  typeof((((match7178 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Let7184 */
                                                                                    bool __h_case_result  = (true  &&  (((match7178 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7185 */
                                                                                          (wright  =  (((match7178 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn7188 */
                                                                                        ({ /* cicili#Let7191 */
                                                                                          __auto_type __h_matchbox  = wright ;
                                                                                          // ----------
                                                                                          ({ /* cicili#Let7195 */
                                                                                            __auto_type match7194  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                            typeof((((match7194 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Let7200 */
                                                                                              bool __h_case_result  = (true  &&  (((match7194 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7201 */
                                                                                                    (unboxed  =  (((match7194 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7204 */
                                                                                                  ({ /* cicili#Let7208 */
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let7212 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7213 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn7215 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7218 */
                                                                                                          ({ /* cicili#Let7221 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7223 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let7231 */
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Let7235 */
                                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7236 */
                                                                                                                    (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                    true ;
                                                                                                                  }) &&  ({ /* cicili#Progn7238 */
                                                                                                                    (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                    true ;
                                                                                                                  }) ) ) );
                                                                                                            // ----------
                                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7241 */
                                                                                                                ({ /* cicili#Let7244 */
                                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7246 */
                                                                                                                    __auto_type nchild  = nchild ;
                                                                                                                    // ----------
                                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                    nchild ;
                                                                                                                  });
                                                                                                                  // ----------
                                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                });
                                                                                                              }) : ({ /* cicili#Let7254 */
                                                                                                                // ----------
                                                                                                                
                                                                                                                ({ /* cicili#Progn7258 */
                                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                });
                                                                                                              }));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let7265 */
                                                                                                  // ----------
                                                                                                  
                                                                                                  ({ /* cicili#Progn7269 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let7276 */
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Progn7280 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* cicili#Let7287 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn7291 */
                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7299 */
                                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7301 */
                                                                              __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                              // ----------
                                                                              ((void)((r1 . __h_table )-> freeData ));
                                                                              r1 ;
                                                                            });
                                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7305 */
                                                                              __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                              // ----------
                                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                                              r2 ;
                                                                            });
                                                                            // ----------
                                                                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7314 */
                                                                                Rc_BTree_int_User __ciciliC_7313 (Rc_BTree_int_User __h_value ) {
                                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                                }
                                                                                __ciciliC_7313 ;
                                                                              }), r2 );
                                                                          })));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }) : ({ /* cicili#Let7321 */
                                                              __auto_type left  = match7046 ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn7325 */
                                                                left ;
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let7329 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn7333 */
                                                        ({ /* cicili#Let7337 */
                                                          __auto_type match7336  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                          typeof((((match7336 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let7342 */
                                                            bool __h_case_result  = (true  &&  (((match7336 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7343 */
                                                                  (nchild  =  (((match7336 . __h_data ). Right ). __h_0_mem ) );
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn7346 */
                                                                borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                              }) : ({ /* cicili#Let7351 */
                                                                __auto_type left  = match7336 ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn7355 */
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
                                      }) : ({ /* cicili#Let7359 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn7363 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7370 */
                                // ----------
                                
                                ({ /* cicili#Progn7374 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let7381 */
                        // ----------
                        
                        ({ /* cicili#Let7385 */
                          bool __h_case_result  = (true  &&  ((match6708 . __h_ctor ) ==  __h_EQ_t  ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn7387 */
                              ({ /* cicili#Let7390 */
                                __auto_type result  = borrowInternal_BTree_int_User (tree , items , children , current , index , callback );
                                // ----------
                                { /* cicili#Let7395 */
                                  // ----------
                                  
                                  ({ /* cicili#Let7399 */
                                    bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block7402 */
                                        if (callback )
                                          { /* cicili#Block7406 */
                                            callback (head );
                                          }
                                      }
                                  });
                                }
                                result ;
                              });
                            }) : ({ /* cicili#Let7410 */
                              // ----------
                              
                              ({ /* cicili#Progn7414 */
                                deleteInternal (tree , items , children , Just_List_BTree_int_User_pair_t (current ), tail , (index  +  1 ));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let7419 */
                // ----------
                
                ({ /* cicili#Progn7423 */
                  ({ /* cicili#Let7427 */
                    __auto_type match7426  = nth_List_Rc_BTree_int_User (index , children );
                    typeof((((match7426 . __h_data ). Just ). __h_0_mem )) child ;
                    // ----------
                    
                    ({ /* cicili#Let7432 */
                      bool __h_case_result  = (true  &&  (((match7426 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7433 */
                            (child  =  (((match7426 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn7436 */
                          ({ /* cicili#Let7440 */
                            __auto_type match7439  = get_Rc_BTree_int_User (child );
                            typeof((((match7439 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            
                            ({ /* cicili#Let7445 */
                              bool __h_case_result  = (true  &&  (((match7439 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7446 */
                                    (tr  =  (((match7439 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn7449 */
                                  ({ /* cicili#Let7453 */
                                    // ----------
                                    
                                    ({ /* cicili#Let7457 */
                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn7459 */
                                          ({ /* cicili#Let7463 */
                                            __auto_type match7462  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                            typeof((((match7462 . __h_data ). Right ). __h_0_mem )) nchild ;
                                            // ----------
                                            
                                            ({ /* cicili#Let7468 */
                                              bool __h_case_result  = (true  &&  (((match7462 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7469 */
                                                    (nchild  =  (((match7462 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn7472 */
                                                  ({ /* cicili#Let7476 */
                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let7480 */
                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7481 */
                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn7483 */
                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn7486 */
                                                          ({ /* cicili#Let7490 */
                                                            __auto_type match7489  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                            typeof((((match7489 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let7495 */
                                                              bool __h_case_result  = (true  &&  (((match7489 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7496 */
                                                                    (wleft  =  (((match7489 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn7499 */
                                                                  ({ /* cicili#Let7502 */
                                                                    __auto_type __h_matchbox  = wleft ;
                                                                    // ----------
                                                                    ({ /* cicili#Let7506 */
                                                                      __auto_type match7505  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match7505 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Let7511 */
                                                                        bool __h_case_result  = (true  &&  (((match7505 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7512 */
                                                                              (unboxed  =  (((match7505 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7515 */
                                                                            ({ /* cicili#Let7519 */
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                              // ----------
                                                                              
                                                                              ({ /* cicili#Let7523 */
                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7524 */
                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) &&  ({ /* cicili#Progn7526 */
                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                        true ;
                                                                                      }) ) ) );
                                                                                // ----------
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7529 */
                                                                                    ({ /* cicili#Let7532 */
                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7534 */
                                                                                        __auto_type nchild  = nchild ;
                                                                                        // ----------
                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                        nchild ;
                                                                                      });
                                                                                      // ----------
                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                    });
                                                                                  }) : ({ /* cicili#Let7542 */
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let7546 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7547 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn7549 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7552 */
                                                                                          ({ /* cicili#Let7555 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7557 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let7565 */
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Progn7569 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let7576 */
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Progn7580 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let7587 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn7591 */
                                                                    ({ /* cicili#Let7595 */
                                                                      __auto_type match7594  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      typeof((((match7594 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Let7600 */
                                                                        bool __h_case_result  = (true  &&  (((match7594 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7601 */
                                                                              (wright  =  (((match7594 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7604 */
                                                                            ({ /* cicili#Let7607 */
                                                                              __auto_type __h_matchbox  = wright ;
                                                                              // ----------
                                                                              ({ /* cicili#Let7611 */
                                                                                __auto_type match7610  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match7610 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                
                                                                                ({ /* cicili#Let7616 */
                                                                                  bool __h_case_result  = (true  &&  (((match7610 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7617 */
                                                                                        (unboxed  =  (((match7610 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7620 */
                                                                                      ({ /* cicili#Let7624 */
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Let7628 */
                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7629 */
                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) &&  ({ /* cicili#Progn7631 */
                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn7634 */
                                                                                              ({ /* cicili#Let7637 */
                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7639 */
                                                                                                  __auto_type nchild  = nchild ;
                                                                                                  // ----------
                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                  nchild ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let7647 */
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let7651 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7652 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn7654 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7657 */
                                                                                                    ({ /* cicili#Let7660 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7662 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let7670 */
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Progn7674 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let7681 */
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Progn7685 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let7692 */
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Progn7696 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let7703 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn7707 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7715 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7717 */
                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7721 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7730 */
                                                                    Rc_BTree_int_User __ciciliC_7729 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_7729 ;
                                                                  }), r2 );
                                                              })));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let7737 */
                                                  __auto_type left  = match7462 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn7741 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let7745 */
                                          // ----------
                                          
                                          ({ /* cicili#Let7749 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn7751 */
                                                ({ /* cicili#Let7755 */
                                                  __auto_type match7754  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                  typeof((((match7754 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let7760 */
                                                    bool __h_case_result  = (true  &&  (((match7754 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7761 */
                                                          (nchild  =  (((match7754 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn7764 */
                                                        ({ /* cicili#Let7768 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let7772 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7773 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn7775 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn7778 */
                                                                ({ /* cicili#Let7782 */
                                                                  __auto_type match7781  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match7781 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let7787 */
                                                                    bool __h_case_result  = (true  &&  (((match7781 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7788 */
                                                                          (wleft  =  (((match7781 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn7791 */
                                                                        ({ /* cicili#Let7794 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let7798 */
                                                                            __auto_type match7797  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match7797 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let7803 */
                                                                              bool __h_case_result  = (true  &&  (((match7797 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7804 */
                                                                                    (unboxed  =  (((match7797 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7807 */
                                                                                  ({ /* cicili#Let7811 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let7815 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7816 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn7818 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7821 */
                                                                                          ({ /* cicili#Let7824 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7826 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let7834 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let7838 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7839 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn7841 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7844 */
                                                                                                ({ /* cicili#Let7847 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7849 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let7857 */
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Progn7861 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let7868 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn7872 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let7879 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn7883 */
                                                                          ({ /* cicili#Let7887 */
                                                                            __auto_type match7886  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match7886 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let7892 */
                                                                              bool __h_case_result  = (true  &&  (((match7886 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7893 */
                                                                                    (wright  =  (((match7886 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7896 */
                                                                                  ({ /* cicili#Let7899 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let7903 */
                                                                                      __auto_type match7902  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match7902 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Let7908 */
                                                                                        bool __h_case_result  = (true  &&  (((match7902 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7909 */
                                                                                              (unboxed  =  (((match7902 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7912 */
                                                                                            ({ /* cicili#Let7916 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let7920 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7921 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn7923 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7926 */
                                                                                                    ({ /* cicili#Let7929 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7931 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let7939 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let7943 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7944 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn7946 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7949 */
                                                                                                          ({ /* cicili#Let7952 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7954 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let7962 */
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Progn7966 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let7973 */
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Progn7977 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let7984 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn7988 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let7995 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn7999 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let8007 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8009 */
                                                                        __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8013 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8022 */
                                                                          Rc_BTree_int_User __ciciliC_8021 (Rc_BTree_int_User __h_value ) {
                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                          }
                                                                          __ciciliC_8021 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let8029 */
                                                        __auto_type left  = match7754 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn8033 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let8037 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn8041 */
                                                  ({ /* cicili#Let8045 */
                                                    __auto_type match8044  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                    typeof((((match8044 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let8050 */
                                                      bool __h_case_result  = (true  &&  (((match8044 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8051 */
                                                            (nchild  =  (((match8044 . __h_data ). Right ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8054 */
                                                          borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                        }) : ({ /* cicili#Let8059 */
                                                          __auto_type left  = match8044 ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn8063 */
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
                                }) : ({ /* cicili#Let8067 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn8071 */
                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let8078 */
                          // ----------
                          
                          ({ /* cicili#Progn8082 */
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
        ({ /* cicili#Let8091 */
          __auto_type rs  = ({ /* cicili#Let8094 */
            typeof((((result . __h_data ). Right ). __h_0_mem )) ntr ;
            // ----------
            
            ({ /* cicili#Let8098 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8099 */
                    (ntr  =  (((result . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn8102 */
                  ({ /* cicili#Let8106 */
                    typeof((((ntr -> __h_data ). Branch ). __h_0_mem )) items ;
                    typeof((((ntr -> __h_data ). Branch ). __h_1_mem )) children ;
                    // ----------
                    
                    ({ /* cicili#Let8110 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8111 */
                              (items  =  (((ntr -> __h_data ). Branch ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn8113 */
                              (children  =  (((ntr -> __h_data ). Branch ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn8116 */
                          ({ /* cicili#Let8119 */
                            __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let8127 */
                                typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                // ----------
                                
                                ({ /* cicili#Let8131 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8132 */
                                        (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn8135 */
                                      ({ /* cicili#Let8139 */
                                        typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                        // ----------
                                        
                                        ({ /* cicili#Let8143 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn8144 */
                                                (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn8147 */
                                              ({ /* cicili#Let8151 */
                                                __auto_type match8150  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                typeof((((match8150 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                // ----------
                                                
                                                ({ /* cicili#Let8156 */
                                                  bool __h_case_result  = (true  &&  (((match8150 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8157 */
                                                        (bitem  =  (((match8150 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8160 */
                                                      ({ /* cicili#Let8163 */
                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8165 */
                                                          __auto_type ntr  = ntr ;
                                                          // ----------
                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                          ntr ;
                                                        });
                                                        // ----------
                                                        Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8178 */
                                                            Rc_BTree_int_User __ciciliC_8177 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_8177 ;
                                                          }), children )));
                                                      });
                                                    }) : ({ /* cicili#Let8185 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn8189 */
                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8196 */
                                              typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                              // ----------
                                              
                                              ({ /* cicili#Let8200 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn8201 */
                                                      (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn8204 */
                                                    ({ /* cicili#Let8208 */
                                                      __auto_type match8207  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match8207 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let8213 */
                                                        bool __h_case_result  = (true  &&  (((match8207 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8214 */
                                                              (bitem  =  (((match8207 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8217 */
                                                            ({ /* cicili#Let8220 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8222 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8235 */
                                                                  Rc_BTree_int_User __ciciliC_8234 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_8234 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let8242 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn8246 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8253 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn8257 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let8264 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn8268 */
                                        (((items_len  ==  0 )) ? ({ /* cicili#Let8273 */
                                            typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                            // ----------
                                            
                                            ({ /* cicili#Let8277 */
                                              bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8278 */
                                                    (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn8281 */
                                                  ({ /* cicili#Let8284 */
                                                    __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                    // ----------
                                                    ({ /* cicili#Let8289 */
                                                      __auto_type match8288  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match8288 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let8294 */
                                                        bool __h_case_result  = (true  &&  (((match8288 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8295 */
                                                              (unboxed  =  (((match8288 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8298 */
                                                            ({ /* cicili#Let8302 */
                                                              __auto_type chtr  = unboxed ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn8306 */
                                                                ({ /* cicili#Let8309 */
                                                                  __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8311 */
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
                                                          }) : ({ /* cicili#Let8318 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn8322 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let8329 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn8333 */
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
                        }) : ({ /* cicili#Let8337 */
                          typeof((((ntr -> __h_data ). Internal ). __h_0_mem )) items ;
                          typeof((((ntr -> __h_data ). Internal ). __h_1_mem )) children ;
                          // ----------
                          
                          ({ /* cicili#Let8341 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8342 */
                                    (items  =  (((ntr -> __h_data ). Internal ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn8344 */
                                    (children  =  (((ntr -> __h_data ). Internal ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn8347 */
                                ({ /* cicili#Let8350 */
                                  __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let8358 */
                                      typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                      // ----------
                                      
                                      ({ /* cicili#Let8362 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8363 */
                                              (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn8366 */
                                            ({ /* cicili#Let8370 */
                                              typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                              // ----------
                                              
                                              ({ /* cicili#Let8374 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn8375 */
                                                      (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn8378 */
                                                    ({ /* cicili#Let8382 */
                                                      __auto_type match8381  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match8381 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let8387 */
                                                        bool __h_case_result  = (true  &&  (((match8381 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8388 */
                                                              (bitem  =  (((match8381 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8391 */
                                                            ({ /* cicili#Let8394 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8396 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8409 */
                                                                  Rc_BTree_int_User __ciciliC_8408 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_8408 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let8416 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn8420 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8427 */
                                                    typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let8431 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn8432 */
                                                            (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8435 */
                                                          ({ /* cicili#Let8439 */
                                                            __auto_type match8438  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                            typeof((((match8438 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let8444 */
                                                              bool __h_case_result  = (true  &&  (((match8438 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8445 */
                                                                    (bitem  =  (((match8438 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8448 */
                                                                  ({ /* cicili#Let8451 */
                                                                    __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8453 */
                                                                      __auto_type ntr  = ntr ;
                                                                      // ----------
                                                                      ((void)(ntr -> __h_table -> freeClass ));
                                                                      ntr ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8466 */
                                                                        Rc_BTree_int_User __ciciliC_8465 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_8465 ;
                                                                      }), children )));
                                                                  });
                                                                }) : ({ /* cicili#Let8473 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn8477 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let8484 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn8488 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let8495 */
                                            // ----------
                                            
                                            ({ /* cicili#Progn8499 */
                                              (((items_len  ==  0 )) ? ({ /* cicili#Let8504 */
                                                  typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let8508 */
                                                    bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8509 */
                                                          (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn8512 */
                                                        ({ /* cicili#Let8515 */
                                                          __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                          // ----------
                                                          ({ /* cicili#Let8520 */
                                                            __auto_type match8519  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                            typeof((((match8519 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let8525 */
                                                              bool __h_case_result  = (true  &&  (((match8519 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8526 */
                                                                    (unboxed  =  (((match8519 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8529 */
                                                                  ({ /* cicili#Let8533 */
                                                                    __auto_type chtr  = unboxed ;
                                                                    // ----------
                                                                    
                                                                    ({ /* cicili#Progn8537 */
                                                                      ({ /* cicili#Let8540 */
                                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8542 */
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
                                                                }) : ({ /* cicili#Let8549 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn8553 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let8560 */
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn8564 */
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
                              }) : ({ /* cicili#Let8568 */
                                // ----------
                                
                                ({ /* cicili#Progn8572 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let8576 */
                  // ----------
                  
                  ({ /* cicili#Progn8580 */
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
  Either_BTree_int_User_Error_BTree_int_User deleteLeaf (List_BTree_int_User_pair_t items , List_BTree_int_User_pair_t current , int index ) {
    return ({ /* cicili#Let8597 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let8601 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8602 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn8604 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn8606 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8609 */
              ({ /* cicili#Let8613 */
                __auto_type match8612  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let8617 */
                  bool __h_case_result  = (true  &&  ((match8612 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8619 */
                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                    }) : ({ /* cicili#Let8626 */
                      // ----------
                      
                      ({ /* cicili#Let8630 */
                        bool __h_case_result  = (true  &&  ((match8612 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn8632 */
                            ({ /* cicili#Let8635 */
                              __auto_type result  = Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current )));
                              // ----------
                              { /* cicili#Let8644 */
                                // ----------
                                
                                ({ /* cicili#Let8648 */
                                  bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block8651 */
                                      if (callback )
                                        { /* cicili#Block8655 */
                                          callback (head );
                                        }
                                    }
                                });
                              }
                              result ;
                            });
                          }) : ({ /* cicili#Let8659 */
                            // ----------
                            
                            ({ /* cicili#Progn8663 */
                              deleteLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8667 */
              // ----------
              
              ({ /* cicili#Progn8671 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8679 */
      __auto_type result  = ({ /* cicili#Let8682 */
        typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
        typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
        // ----------
        
        ({ /* cicili#Let8686 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8687 */
                  (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8689 */
                  (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8692 */
              deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
            }) : ({ /* cicili#Let8698 */
              typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
              typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
              // ----------
              
              ({ /* cicili#Let8702 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8703 */
                        (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn8705 */
                        (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn8708 */
                    deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
                  }) : ({ /* cicili#Let8714 */
                    typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                    // ----------
                    
                    ({ /* cicili#Let8718 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8719 */
                            (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn8722 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* cicili#Let8726 */
                          // ----------
                          
                          ({ /* cicili#Progn8730 */
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
  return ({ /* cicili#Let8753 */
      typeof((((keys -> __h_data ). Cons ). __h_0_mem )) khead ;
      typeof((((keys -> __h_data ). Cons ). __h_1_mem )) ktail ;
      // ----------
      
      ({ /* cicili#Let8757 */
        bool __h_case_result  = (true  &&  (((keys -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8758 */
                (khead  =  (((keys -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8760 */
                (ktail  =  (((keys -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8763 */
            ({ /* cicili#Let8767 */
              typeof((((values -> __h_data ). Cons ). __h_0_mem )) vhead ;
              typeof((((values -> __h_data ). Cons ). __h_1_mem )) vtail ;
              // ----------
              
              ({ /* cicili#Let8771 */
                bool __h_case_result  = (true  &&  (((values -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8772 */
                        (vhead  =  (((values -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn8774 */
                        (vtail  =  (((values -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn8777 */
                    ({ /* cicili#Let8780 */
                      __auto_type etree  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8782 */
                        __auto_type etree  = fromLists_BTree_int_User (ktail , vtail );
                        // ----------
                        ((void)((etree . __h_table )-> freeData ));
                        etree ;
                      });
                      // ----------
                      ({ /* cicili#Let8788 */
                        typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
                        // ----------
                        
                        ({ /* cicili#Let8792 */
                          bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8793 */
                                (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn8796 */
                              ({ /* cicili#Let8799 */
                                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8801 */
                                  __auto_type tree  = tree ;
                                  // ----------
                                  ((void)(tree -> __h_table -> freeClass ));
                                  tree ;
                                });
                                // ----------
                                insert_BTree_int_User (tree , khead , vhead );
                              });
                            }) : ({ /* cicili#Let8807 */
                              // ----------
                              
                              ({ /* cicili#Progn8811 */
                                etree ;
                              });
                            }));
                        });
                      });
                    });
                  }) : ({ /* cicili#Let8815 */
                    // ----------
                    
                    ({ /* cicili#Progn8819 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ()));
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let8827 */
            // ----------
            
            ({ /* cicili#Progn8831 */
              Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ()));
            });
          }));
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], int len ) {
  return ({ /* cicili#Let8842 */
      BTree_int_User tree  = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
      // ----------
      for (int i  = 0; (i  <  len  ); (++i )) {
          { /* cicili#Let8850 */
            __auto_type match8849  = insert_BTree_int_User (tree , keys [i ], values [i ]);
            typeof((((match8849 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            
            ({ /* cicili#Let8855 */
              bool __h_case_result  = (true  &&  (((match8849 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8856 */
                    (new_tree  =  (((match8849 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block8860 */
                  { /* cicili#Block8862 */
                    free_BTree_int_User ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* cicili#Let8868 */
                  __auto_type left  = match8849 ;
                  // ----------
                  
                  { /* cicili#Block8872 */
                    return left ;
                  }
                }
            });
          }
      }
      Right_BTree_int_User_Error_BTree_int_User (tree );
    });
}
int show_BTree_int_User (CFile file , BTree_int_User tree ) {
  auto int showTree (int indent , BTree_int_User tree );
  int showChildren (int indent , List_Rc_BTree_int_User children ) {
    return ({ /* cicili#Let8882 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let8886 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8887 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8889 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8892 */
              (({ /* cicili#Let8896 */
                  // ----------
                  
                  ({ /* cicili#Let8900 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn8902 */
                        ({ /* cicili#Let8906 */
                          __auto_type match8905  = get_Rc_BTree_int_User (head );
                          typeof((((match8905 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let8911 */
                            bool __h_case_result  = (true  &&  (((match8905 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8912 */
                                  (tr  =  (((match8905 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn8915 */
                                (showTree (indent , tr ) +  fprintf (file , "\n") );
                              }) : ({ /* cicili#Let8919 */
                                // ----------
                                
                                ({ /* cicili#Progn8923 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let8927 */
                        // ----------
                        
                        ({ /* cicili#Progn8931 */
                          ({ /* cicili#Let8935 */
                            __auto_type match8934  = get_Rc_BTree_int_User (head );
                            typeof((((match8934 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            
                            ({ /* cicili#Let8940 */
                              bool __h_case_result  = (true  &&  (((match8934 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8941 */
                                    (tr  =  (((match8934 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn8944 */
                                  showTree (indent , tr );
                                }) : ({ /* cicili#Let8948 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn8952 */
                                    0;
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }) +  showChildren (indent , tail ) );
            }) : ({ /* cicili#Let8956 */
              // ----------
              
              ({ /* cicili#Progn8960 */
                0;
              });
            }));
        });
      });
  }
  int showTree (int indent , BTree_int_User tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* cicili#Let8966 */
          typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
          // ----------
          
          ({ /* cicili#Let8970 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8971 */
                    (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn8973 */
                    (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn8976 */
                (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let8981 */
                    // ----------
                    
                    ({ /* cicili#Let8985 */
                      bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn8987 */
                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                        }) : ({ /* cicili#Let8991 */
                          // ----------
                          
                          ({ /* cicili#Progn8995 */
                            0;
                          });
                        }));
                    });
                  }) );
              }) : ({ /* cicili#Let8999 */
                typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
                typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
                // ----------
                
                ({ /* cicili#Let9003 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9004 */
                          (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn9006 */
                          (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9009 */
                      (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let9014 */
                          // ----------
                          
                          ({ /* cicili#Let9018 */
                            bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn9020 */
                                (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                              }) : ({ /* cicili#Let9024 */
                                // ----------
                                
                                ({ /* cicili#Progn9028 */
                                  0;
                                });
                              }));
                          });
                        }) );
                    }) : ({ /* cicili#Let9032 */
                      typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                      // ----------
                      
                      ({ /* cicili#Let9036 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9037 */
                              (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn9040 */
                            show_List_BTree_int_User_pair_t (file , items );
                          }) : ({ /* cicili#Let9045 */
                            // ----------
                            
                            ({ /* cicili#Progn9049 */
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
    { /* cicili#Let9058 */
      typeof((((currentChild -> __h_data ). Cons ). __h_0_mem )) wheadC ;
      typeof((((currentChild -> __h_data ). Cons ). __h_1_mem )) tailC ;
      // ----------
      
      ({ /* cicili#Let9062 */
        bool __h_case_result  = (true  &&  (((currentChild -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9063 */
                (wheadC  =  (((currentChild -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9065 */
                (tailC  =  (((currentChild -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block9069 */
            { /* cicili#Let9073 */
              __auto_type match9072  = get_Rc_BTree_int_User (wheadC );
              typeof((((match9072 . __h_data ). Just ). __h_0_mem )) headC ;
              // ----------
              
              ({ /* cicili#Let9078 */
                bool __h_case_result  = (true  &&  (((match9072 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9079 */
                      (headC  =  (((match9072 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block9083 */
                    { /* cicili#Let9087 */
                      // ----------
                      
                      ({ /* cicili#Let9091 */
                        bool __h_case_result  = (true  &&  ((tailC -> __h_ctor ) ==  __h_Cons_t  ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block9094 */
                            { /* cicili#Block9096 */
                              { /* cicili#Let9100 */
                                typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                // ----------
                                
                                ({ /* cicili#Let9104 */
                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9105 */
                                          (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn9107 */
                                          (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block9111 */
                                      traverseInternal (items , children );
                                    }
                                  else
                                    { /* cicili#Let9116 */
                                      typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                      typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                      // ----------
                                      
                                      ({ /* cicili#Let9120 */
                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9121 */
                                                (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn9123 */
                                                (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        if (__h_case_result )
                                          { /* cicili#Block9127 */
                                            traverseInternal (items , children );
                                          }
                                        else
                                          { /* cicili#Let9132 */
                                            typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            
                                            ({ /* cicili#Let9136 */
                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9137 */
                                                    (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              if (__h_case_result )
                                                { /* cicili#Block9141 */
                                                  traverseLeaf (items , True ());
                                                }
                                            });
                                          }
                                      });
                                    }
                                });
                              }
                              { /* cicili#Let9145 */
                                typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                // ----------
                                
                                ({ /* cicili#Let9149 */
                                  bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9150 */
                                          (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn9152 */
                                          (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block9156 */
                                      { /* cicili#Block9158 */
                                        callback (headI , True ());
                                        traverseInternal (tailI , tailC );
                                      }
                                    }
                                });
                              }
                            }
                          }
                        else
                          { /* cicili#Let9163 */
                            // ----------
                            
                            { /* cicili#Block9167 */
                              { /* cicili#Block9169 */
                                { /* cicili#Let9173 */
                                  typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                  typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                  // ----------
                                  
                                  ({ /* cicili#Let9177 */
                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9178 */
                                            (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn9180 */
                                            (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block9184 */
                                        traverseInternal (items , children );
                                      }
                                    else
                                      { /* cicili#Let9189 */
                                        typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                        typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                        // ----------
                                        
                                        ({ /* cicili#Let9193 */
                                          bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9194 */
                                                  (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn9196 */
                                                  (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                  true ;
                                                }) ) ) );
                                          // ----------
                                          if (__h_case_result )
                                            { /* cicili#Block9200 */
                                              traverseInternal (items , children );
                                            }
                                          else
                                            { /* cicili#Let9205 */
                                              typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                              // ----------
                                              
                                              ({ /* cicili#Let9209 */
                                                bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9210 */
                                                      (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                if (__h_case_result )
                                                  { /* cicili#Block9214 */
                                                    traverseLeaf (items , False ());
                                                  }
                                              });
                                            }
                                        });
                                      }
                                  });
                                }
                                { /* cicili#Let9218 */
                                  typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                  typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                  // ----------
                                  
                                  ({ /* cicili#Let9222 */
                                    bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9223 */
                                            (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn9225 */
                                            (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block9229 */
                                        { /* cicili#Block9231 */
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
    { /* cicili#Let9238 */
      typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9242 */
        bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9243 */
                (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9245 */
                (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block9249 */
            { /* cicili#Block9251 */
              callback (head , ({ /* cicili#Let9255 */
                  // ----------
                  
                  ({ /* cicili#Let9259 */
                    bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor ) ==  __h_True_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn9261 */
                        hasNextLeaf ;
                      }) : ({ /* cicili#Let9265 */
                        // ----------
                        
                        ({ /* cicili#Progn9269 */
                          ({ /* cicili#Let9273 */
                            // ----------
                            
                            ({ /* cicili#Let9277 */
                              bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn9279 */
                                  True ();
                                }) : ({ /* cicili#Let9283 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn9287 */
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
  { /* cicili#Let9292 */
    typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
    typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
    // ----------
    
    ({ /* cicili#Let9296 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9297 */
              (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn9299 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block9303 */
          traverseInternal (items , children );
        }
      else
        { /* cicili#Let9308 */
          typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
          // ----------
          
          ({ /* cicili#Let9312 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9313 */
                    (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn9315 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block9319 */
                traverseInternal (items , children );
              }
            else
              { /* cicili#Let9324 */
                typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                // ----------
                
                ({ /* cicili#Let9328 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9329 */
                        (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block9333 */
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
    return ({ /* cicili#Let9349 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9353 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9354 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9356 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9359 */
              ({ /* cicili#Let9363 */
                // ----------
                
                ({ /* cicili#Let9367 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9369 */
                      ({ /* cicili#Let9373 */
                        __auto_type match9372  = get_Rc_BTree_int_User (head );
                        typeof((((match9372 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        
                        ({ /* cicili#Let9378 */
                          bool __h_case_result  = (true  &&  (((match9372 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9379 */
                                (child  =  (((match9372 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn9382 */
                              ({ /* cicili#Let9386 */
                                typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                // ----------
                                
                                ({ /* cicili#Let9390 */
                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9391 */
                                        (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn9394 */
                                      maxInternal (nchildren );
                                    }) : ({ /* cicili#Let9398 */
                                      typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                      // ----------
                                      
                                      ({ /* cicili#Let9402 */
                                        bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9403 */
                                              (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn9406 */
                                            maxInternal (nchildren );
                                          }) : ({ /* cicili#Let9410 */
                                            typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            
                                            ({ /* cicili#Let9414 */
                                              bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9415 */
                                                    (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn9418 */
                                                  maxLeaf (items );
                                                }) : ({ /* cicili#Let9422 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn9426 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          }));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let9431 */
                              // ----------
                              
                              ({ /* cicili#Progn9435 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9440 */
                      // ----------
                      
                      ({ /* cicili#Progn9444 */
                        maxInternal (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9448 */
              // ----------
              
              ({ /* cicili#Progn9452 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current ) {
    return ({ /* cicili#Let9460 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9464 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9465 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9467 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9470 */
              ({ /* cicili#Let9474 */
                // ----------
                
                ({ /* cicili#Let9478 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9480 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* cicili#Let9485 */
                      // ----------
                      
                      ({ /* cicili#Progn9489 */
                        maxLeaf (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9493 */
              // ----------
              
              ({ /* cicili#Progn9497 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9503 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let9507 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9508 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9511 */
            maxInternal (children );
          }) : ({ /* cicili#Let9515 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let9519 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9520 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn9523 */
                  maxInternal (children );
                }) : ({ /* cicili#Let9527 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let9531 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9532 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn9535 */
                        maxLeaf (items );
                      }) : ({ /* cicili#Let9539 */
                        // ----------
                        
                        ({ /* cicili#Progn9543 */
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
    return ({ /* cicili#Let9558 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        
        ({ /* cicili#Let9562 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9563 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9566 */
              ({ /* cicili#Let9570 */
                __auto_type match9569  = get_Rc_BTree_int_User (head );
                typeof((((match9569 . __h_data ). Just ). __h_0_mem )) child ;
                // ----------
                
                ({ /* cicili#Let9575 */
                  bool __h_case_result  = (true  &&  (((match9569 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9576 */
                        (child  =  (((match9569 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9579 */
                      ({ /* cicili#Let9583 */
                        typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                        // ----------
                        
                        ({ /* cicili#Let9587 */
                          bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9588 */
                                (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn9591 */
                              minInternal (nchildren );
                            }) : ({ /* cicili#Let9595 */
                              typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                              // ----------
                              
                              ({ /* cicili#Let9599 */
                                bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9600 */
                                      (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn9603 */
                                    minInternal (nchildren );
                                  }) : ({ /* cicili#Let9607 */
                                    typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                    // ----------
                                    
                                    ({ /* cicili#Let9611 */
                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9612 */
                                            (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn9615 */
                                          minLeaf (items );
                                        }) : ({ /* cicili#Let9619 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn9623 */
                                            Nothing_BTree_int_User_pair_t ();
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9628 */
                      // ----------
                      
                      ({ /* cicili#Progn9632 */
                        Nothing_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9637 */
              // ----------
              
              ({ /* cicili#Progn9641 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first ) {
    return ({ /* cicili#Let9649 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        
        ({ /* cicili#Let9653 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9654 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9657 */
              Just_BTree_int_User_pair_t (head );
            }) : ({ /* cicili#Let9662 */
              // ----------
              
              ({ /* cicili#Progn9666 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9672 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let9676 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9677 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9680 */
            minInternal (children );
          }) : ({ /* cicili#Let9684 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let9688 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9689 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn9692 */
                  minInternal (children );
                }) : ({ /* cicili#Let9696 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let9700 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9701 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn9704 */
                        minLeaf (items );
                      }) : ({ /* cicili#Let9708 */
                        // ----------
                        
                        ({ /* cicili#Progn9712 */
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
  Maybe_BTree_int_User_pair_t searchInternal (List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , int index ) {
    return ({ /* cicili#Let9730 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9734 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9735 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn9737 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn9739 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9742 */
              ({ /* cicili#Let9746 */
                __auto_type match9745  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let9750 */
                  bool __h_case_result  = (true  &&  ((match9745 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9752 */
                      ({ /* cicili#Let9756 */
                        __auto_type match9755  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match9755 . __h_data ). Just ). __h_0_mem )) node ;
                        // ----------
                        
                        ({ /* cicili#Let9761 */
                          bool __h_case_result  = (true  &&  (((match9755 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9762 */
                                (node  =  (((match9755 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn9765 */
                              ({ /* cicili#Let9769 */
                                __auto_type match9768  = get_Rc_BTree_int_User (node );
                                typeof((((match9768 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                
                                ({ /* cicili#Let9774 */
                                  bool __h_case_result  = (true  &&  (((match9768 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9775 */
                                        (tr  =  (((match9768 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn9778 */
                                      search_BTree_int_User (tr , skey );
                                    }) : ({ /* cicili#Let9783 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn9787 */
                                        Nothing_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let9792 */
                              // ----------
                              
                              ({ /* cicili#Progn9796 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9801 */
                      // ----------
                      
                      ({ /* cicili#Let9805 */
                        bool __h_case_result  = (true  &&  ((match9745 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn9807 */
                            Just_BTree_int_User_pair_t (head );
                          }) : ({ /* cicili#Let9812 */
                            // ----------
                            
                            ({ /* cicili#Progn9816 */
                              ({ /* cicili#Let9820 */
                                // ----------
                                
                                ({ /* cicili#Let9824 */
                                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn9826 */
                                      ({ /* cicili#Let9830 */
                                        __auto_type match9829  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                        typeof((((match9829 . __h_data ). Just ). __h_0_mem )) node ;
                                        // ----------
                                        
                                        ({ /* cicili#Let9835 */
                                          bool __h_case_result  = (true  &&  (((match9829 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9836 */
                                                (node  =  (((match9829 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn9839 */
                                              ({ /* cicili#Let9843 */
                                                __auto_type match9842  = get_Rc_BTree_int_User (node );
                                                typeof((((match9842 . __h_data ). Just ). __h_0_mem )) tr ;
                                                // ----------
                                                
                                                ({ /* cicili#Let9848 */
                                                  bool __h_case_result  = (true  &&  (((match9842 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9849 */
                                                        (tr  =  (((match9842 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn9852 */
                                                      search_BTree_int_User (tr , skey );
                                                    }) : ({ /* cicili#Let9857 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn9861 */
                                                        Nothing_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let9866 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn9870 */
                                                Nothing_BTree_int_User_pair_t ();
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let9875 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn9879 */
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
            }) : ({ /* cicili#Let9883 */
              // ----------
              
              ({ /* cicili#Progn9887 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t searchLeaf (List_BTree_int_User_pair_t current , int index ) {
    return ({ /* cicili#Let9897 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9901 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9902 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn9904 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn9906 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9909 */
              ({ /* cicili#Let9913 */
                __auto_type match9912  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let9917 */
                  bool __h_case_result  = (true  &&  ((match9912 . __h_ctor ) ==  __h_EQ_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9919 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* cicili#Let9924 */
                      // ----------
                      
                      ({ /* cicili#Progn9928 */
                        ({ /* cicili#Let9932 */
                          // ----------
                          
                          ({ /* cicili#Let9936 */
                            bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn9938 */
                                Nothing_BTree_int_User_pair_t ();
                              }) : ({ /* cicili#Let9943 */
                                // ----------
                                
                                ({ /* cicili#Progn9947 */
                                  searchLeaf (tail , (index  +  1 ));
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9951 */
              // ----------
              
              ({ /* cicili#Progn9955 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9961 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let9965 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9966 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9968 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9971 */
            searchInternal (children , items , 0);
          }) : ({ /* cicili#Let9975 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let9979 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9980 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn9982 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn9985 */
                  searchInternal (children , items , 0);
                }) : ({ /* cicili#Let9989 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let9993 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9994 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn9997 */
                        searchLeaf (items , 0);
                      }) : ({ /* cicili#Let10001 */
                        // ----------
                        
                        ({ /* cicili#Progn10005 */
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
    { /* cicili#Block10017 */
      return Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_ORDER (3));
    }
  Either_BTree_int_User_Error_BTree_int_User insertInternal (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , int index ) {
    return ({ /* cicili#Let10029 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10033 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10034 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn10036 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn10038 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10041 */
              ({ /* cicili#Let10045 */
                __auto_type match10044  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let10049 */
                  bool __h_case_result  = (true  &&  ((match10044 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10051 */
                      ({ /* cicili#Let10055 */
                        __auto_type match10054  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match10054 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        
                        ({ /* cicili#Let10060 */
                          bool __h_case_result  = (true  &&  (((match10054 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10061 */
                                (child  =  (((match10054 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn10064 */
                              ({ /* cicili#Let10068 */
                                __auto_type match10067  = get_Rc_BTree_int_User (child );
                                typeof((((match10067 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                
                                ({ /* cicili#Let10073 */
                                  bool __h_case_result  = (true  &&  (((match10067 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10074 */
                                        (tr  =  (((match10067 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn10077 */
                                      ({ /* cicili#Let10081 */
                                        __auto_type match10080  = insert_BTree_int_User (tr , skey , svalue );
                                        typeof((((match10080 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                        // ----------
                                        
                                        ({ /* cicili#Let10086 */
                                          bool __h_case_result  = (true  &&  (((match10080 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10087 */
                                                (child_tree  =  (((match10080 . __h_data ). Right ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn10090 */
                                              ({ /* cicili#Let10094 */
                                                typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                // ----------
                                                
                                                ({ /* cicili#Let10098 */
                                                  bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10099 */
                                                          (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn10101 */
                                                          (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10104 */
                                                      ({ /* cicili#Let10109 */
                                                        typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                        typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match10107_1_arg ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let10113 */
                                                          bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10114 */
                                                                    (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn10116 */
                                                                    (__h_match10107_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) &&  (true  &&  ((__h_match10107_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn10119 */
                                                              ({ /* cicili#Let10122 */
                                                                __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10124 */
                                                                  __auto_type child_tree  = child_tree ;
                                                                  // ----------
                                                                  ((void)(child_tree -> __h_table -> freeClass ));
                                                                  child_tree ;
                                                                });
                                                                // ----------
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let10133 */
                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10135 */
                                                                      __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                      // ----------
                                                                      ((void)(r1 -> __h_table -> freeClass ));
                                                                      r1 ;
                                                                    });
                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10139 */
                                                                      __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      // ----------
                                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                                      r2 ;
                                                                    });
                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10143 */
                                                                      __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                      // ----------
                                                                      ((void)(r3 -> __h_table -> freeClass ));
                                                                      r3 ;
                                                                    });
                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10147 */
                                                                      __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                      // ----------
                                                                      ((void)(r4 -> __h_table -> freeClass ));
                                                                      r4 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10156 */
                                                                        Rc_BTree_int_User __ciciliC_10155 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_10155 ;
                                                                      }), r4 );
                                                                  })));
                                                              });
                                                            }) : ({ /* cicili#Let10163 */
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn10167 */
                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let10174 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let10178 */
                                                        bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10180 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10188 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10190 */
                                                                  __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                  // ----------
                                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10194 */
                                                                  __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10200 */
                                                                    Rc_BTree_int_User __ciciliC_10199 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_10199 ;
                                                                  }), r1 );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10207 */
                                                                  __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                  // ----------
                                                                  ((void)(r3 -> __h_table -> freeClass ));
                                                                  r3 ;
                                                                });
                                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10211 */
                                                                  __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10217 */
                                                                    Rc_BTree_int_User __ciciliC_10216 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_10216 ;
                                                                  }), r3 );
                                                                  // ----------
                                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                                  r4 ;
                                                                });
                                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10224 */
                                                                  __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                  // ----------
                                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                                  r5 ;
                                                                });
                                                                // ----------
                                                                append_List_Rc_BTree_int_User (r2 , r5 );
                                                              })));
                                                          }) : ({ /* cicili#Let10232 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn10236 */
                                                              Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10244 */
                                                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10246 */
                                                                    __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                    // ----------
                                                                    ((void)(r1 -> __h_table -> freeClass ));
                                                                    r1 ;
                                                                  });
                                                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10250 */
                                                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10256 */
                                                                      Rc_BTree_int_User __ciciliC_10255 (Rc_BTree_int_User __h_value ) {
                                                                        return clone_Rc_BTree_int_User (__h_value );
                                                                      }
                                                                      __ciciliC_10255 ;
                                                                    }), r1 );
                                                                    // ----------
                                                                    ((void)(r2 -> __h_table -> freeClass ));
                                                                    r2 ;
                                                                  });
                                                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10263 */
                                                                    __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                    // ----------
                                                                    ((void)(r3 -> __h_table -> freeClass ));
                                                                    r3 ;
                                                                  });
                                                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10267 */
                                                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10273 */
                                                                      Rc_BTree_int_User __ciciliC_10272 (Rc_BTree_int_User __h_value ) {
                                                                        return clone_Rc_BTree_int_User (__h_value );
                                                                      }
                                                                      __ciciliC_10272 ;
                                                                    }), r3 );
                                                                    // ----------
                                                                    ((void)(r4 -> __h_table -> freeClass ));
                                                                    r4 ;
                                                                  });
                                                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10280 */
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
                                            }) : ({ /* cicili#Let10288 */
                                              __auto_type left  = match10080 ;
                                              // ----------
                                              
                                              ({ /* cicili#Progn10292 */
                                                left ;
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let10296 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn10300 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let10307 */
                              // ----------
                              
                              ({ /* cicili#Progn10311 */
                                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let10321 */
                      // ----------
                      
                      ({ /* cicili#Let10325 */
                        bool __h_case_result  = (true  &&  ((match10044 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn10327 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let10334 */
                            // ----------
                            
                            ({ /* cicili#Progn10338 */
                              insertInternal (items , children , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10342 */
              // ----------
              
              ({ /* cicili#Progn10346 */
                ({ /* cicili#Let10350 */
                  __auto_type match10349  = nth_List_Rc_BTree_int_User (index , children );
                  typeof((((match10349 . __h_data ). Just ). __h_0_mem )) child ;
                  // ----------
                  
                  ({ /* cicili#Let10355 */
                    bool __h_case_result  = (true  &&  (((match10349 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10356 */
                          (child  =  (((match10349 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn10359 */
                        ({ /* cicili#Let10363 */
                          __auto_type match10362  = get_Rc_BTree_int_User (child );
                          typeof((((match10362 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let10368 */
                            bool __h_case_result  = (true  &&  (((match10362 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10369 */
                                  (tr  =  (((match10362 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn10372 */
                                ({ /* cicili#Let10376 */
                                  __auto_type match10375  = insert_BTree_int_User (tr , skey , svalue );
                                  typeof((((match10375 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                  // ----------
                                  
                                  ({ /* cicili#Let10381 */
                                    bool __h_case_result  = (true  &&  (((match10375 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10382 */
                                          (child_tree  =  (((match10375 . __h_data ). Right ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn10385 */
                                        ({ /* cicili#Let10389 */
                                          typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                          typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                          // ----------
                                          
                                          ({ /* cicili#Let10393 */
                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10394 */
                                                    (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn10396 */
                                                    (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn10399 */
                                                ({ /* cicili#Let10404 */
                                                  typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                  typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match10402_1_arg ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let10408 */
                                                    bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10409 */
                                                              (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn10411 */
                                                              (__h_match10402_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                              true ;
                                                            }) ) &&  (true  &&  ((__h_match10402_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn10414 */
                                                        ({ /* cicili#Let10417 */
                                                          __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10419 */
                                                            __auto_type child_tree  = child_tree ;
                                                            // ----------
                                                            ((void)(child_tree -> __h_table -> freeClass ));
                                                            child_tree ;
                                                          });
                                                          // ----------
                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let10428 */
                                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10430 */
                                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                // ----------
                                                                ((void)(r1 -> __h_table -> freeClass ));
                                                                r1 ;
                                                              });
                                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10434 */
                                                                __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                // ----------
                                                                ((void)(r2 -> __h_table -> freeClass ));
                                                                r2 ;
                                                              });
                                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10438 */
                                                                __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                // ----------
                                                                ((void)(r3 -> __h_table -> freeClass ));
                                                                r3 ;
                                                              });
                                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10442 */
                                                                __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                // ----------
                                                                ((void)(r4 -> __h_table -> freeClass ));
                                                                r4 ;
                                                              });
                                                              // ----------
                                                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10451 */
                                                                  Rc_BTree_int_User __ciciliC_10450 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_10450 ;
                                                                }), r4 );
                                                            })));
                                                        });
                                                      }) : ({ /* cicili#Let10458 */
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn10462 */
                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let10469 */
                                                // ----------
                                                
                                                ({ /* cicili#Let10473 */
                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10475 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10483 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10485 */
                                                            __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                            // ----------
                                                            ((void)(r1 -> __h_table -> freeClass ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10489 */
                                                            __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10495 */
                                                              Rc_BTree_int_User __ciciliC_10494 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_10494 ;
                                                            }), r1 );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10502 */
                                                            __auto_type r3  = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                            // ----------
                                                            ((void)(r3 -> __h_table -> freeClass ));
                                                            r3 ;
                                                          });
                                                          // ----------
                                                          append_List_Rc_BTree_int_User (r2 , r3 );
                                                        })));
                                                    }) : ({ /* cicili#Let10510 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn10514 */
                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10522 */
                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10524 */
                                                              __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                              // ----------
                                                              ((void)(r1 -> __h_table -> freeClass ));
                                                              r1 ;
                                                            });
                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10528 */
                                                              __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10534 */
                                                                Rc_BTree_int_User __ciciliC_10533 (Rc_BTree_int_User __h_value ) {
                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                }
                                                                __ciciliC_10533 ;
                                                              }), r1 );
                                                              // ----------
                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                              r2 ;
                                                            });
                                                            __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10541 */
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
                                      }) : ({ /* cicili#Let10549 */
                                        __auto_type left  = match10375 ;
                                        // ----------
                                        
                                        ({ /* cicili#Progn10553 */
                                          left ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let10557 */
                                // ----------
                                
                                ({ /* cicili#Progn10561 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let10568 */
                        // ----------
                        
                        ({ /* cicili#Progn10572 */
                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let10579 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10581 */
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
  Either_BTree_int_User_Error_BTree_int_User insertLeaf (List_BTree_int_User_pair_t items , List_BTree_int_User_pair_t current , int index ) {
    return ({ /* cicili#Let10597 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10601 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10602 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn10604 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn10606 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10609 */
              ({ /* cicili#Let10613 */
                __auto_type match10612  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let10617 */
                  bool __h_case_result  = (true  &&  ((match10612 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10619 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                    }) : ({ /* cicili#Let10629 */
                      // ----------
                      
                      ({ /* cicili#Let10633 */
                        bool __h_case_result  = (true  &&  ((match10612 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn10635 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let10642 */
                            // ----------
                            
                            ({ /* cicili#Progn10646 */
                              insertLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10650 */
              // ----------
              
              ({ /* cicili#Progn10654 */
                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let10661 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10663 */
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
  return ({ /* cicili#Let10673 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let10677 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10678 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10680 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10683 */
            ({ /* cicili#Let10687 */
              __auto_type match10686  = insertInternal (items , children , items , 0);
              typeof((((match10686 . __h_data ). Right ). __h_0_mem )) tr ;
              // ----------
              
              ({ /* cicili#Let10691 */
                bool __h_case_result  = (true  &&  (((match10686 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10692 */
                      (tr  =  (((match10686 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn10695 */
                    Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                  }) : ({ /* cicili#Let10702 */
                    __auto_type left  = match10686 ;
                    // ----------
                    
                    ({ /* cicili#Progn10706 */
                      left ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let10710 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let10714 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10715 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn10717 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn10720 */
                  ({ /* cicili#Let10724 */
                    __auto_type match10723  = insertInternal (items , children , items , 0);
                    typeof((((match10723 . __h_data ). Right ). __h_0_mem )) tr ;
                    // ----------
                    
                    ({ /* cicili#Let10728 */
                      bool __h_case_result  = (true  &&  (((match10723 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10729 */
                            (tr  =  (((match10723 . __h_data ). Right ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn10732 */
                          Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                        }) : ({ /* cicili#Let10739 */
                          __auto_type left  = match10723 ;
                          // ----------
                          
                          ({ /* cicili#Progn10743 */
                            left ;
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let10747 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let10751 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10752 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn10755 */
                        ({ /* cicili#Let10759 */
                          __auto_type match10758  = insertLeaf (items , items , 0);
                          typeof((((match10758 . __h_data ). Right ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let10763 */
                            bool __h_case_result  = (true  &&  (((match10758 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10764 */
                                  (tr  =  (((match10758 . __h_data ). Right ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn10767 */
                                Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                              }) : ({ /* cicili#Let10774 */
                                __auto_type left  = match10758 ;
                                // ----------
                                
                                ({ /* cicili#Progn10778 */
                                  left ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let10782 */
                        // ----------
                        
                        ({ /* cicili#Progn10786 */
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
int order_BTree_int_User () {
  return 3;
}
void free_BTree_int_User (BTree_int_User * this_ptr ) {
  { /* cicili#Let10795 */
    __auto_type this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_int_User children ) {
      { /* cicili#Let10800 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10804 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10805 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10807 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block10811 */
              { /* cicili#Block10813 */
                free_Rc_BTree_int_User (&head );
                freeChildren (tail );
              }
            }
        });
      }
    }
    { /* cicili#Let10819 */
      typeof((((this -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((this -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let10823 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10824 */
                (items  =  (((this -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10826 */
                (children  =  (((this -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block10830 */
            { /* cicili#Block10832 */
              free_List_BTree_int_User_pair_t ((&items ));
              freeChildren (children );
              free_List_Rc_BTree_int_User ((&children ));
              free (this );
            }
          }
        else
          { /* cicili#Let10843 */
            typeof((((this -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((this -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let10847 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10848 */
                      (items  =  (((this -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn10850 */
                      (children  =  (((this -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block10854 */
                  { /* cicili#Block10856 */
                    free_List_BTree_int_User_pair_t ((&items ));
                    freeChildren (children );
                    free_List_Rc_BTree_int_User ((&children ));
                    free (this );
                  }
                }
              else
                { /* cicili#Let10867 */
                  typeof((((this -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let10871 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10872 */
                          (items  =  (((this -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block10876 */
                        { /* cicili#Block10878 */
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
  { /* cicili#Let10890 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* cicili#Let10898 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items ) {
  { /* cicili#Let10906 */
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
  union { /* ciciliUnion10924 */
    struct { /* ciciliStruct10925 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct10926 */
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
  union { /* ciciliUnion10952 */
    struct { /* ciciliStruct10953 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct10954 */
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
  union { /* ciciliUnion10992 */
    struct { /* ciciliStruct10993 */
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
  { /* cicili#Let11040 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* cicili#Let11045 */
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
  { /* cicili#Let11061 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* cicili#Let11066 */
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
  return ({ /* cicili#Let11084 */
      typeof((((input . __h_data ). Right ). __h_0_mem )) value ;
      // ----------
      
      ({ /* cicili#Let11088 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11089 */
              (value  =  (((input . __h_data ). Right ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11092 */
            a_mb (value );
          }) : ({ /* cicili#Let11096 */
            typeof((((input . __h_data ). Left ). __h_0_mem )) error ;
            // ----------
            
            ({ /* cicili#Let11100 */
              bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn11101 */
                    (error  =  (((input . __h_data ). Left ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn11104 */
                  Left_BTree_int_User_Error_BTree_int_User (error );
                }) : ({ /* cicili#Let11109 */
                  // ----------
                  
                  ({ /* cicili#Progn11113 */
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
  { /* cicili#Let11128 */
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
  return ({ /* cicili#Let11138 */
      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let11140 */
        __auto_type tree  = tree ;
        // ----------
        ((void)(tree -> __h_table -> freeClass ));
        tree ;
      });
      // ----------
      ({ /* cicili#Let11144 */
        __auto_type wtr  = insert_BTree_int_User (tree , key , value );
        // ----------
        { /* cicili#Let11149 */
          typeof((((wtr . __h_data ). Right ). __h_0_mem )) ntr ;
          // ----------
          
          ({ /* cicili#Let11153 */
            bool __h_case_result  = (true  &&  (((wtr . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11154 */
                  (ntr  =  (((wtr . __h_data ). Right ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block11158 */
                { /* cicili#Block11160 */
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
void __ciciliL_11174 (BTree_int_User_pair_t item ) {
  { /* cicili#Let11179 */
    typeof((item . __h_0_mem )) key ;
    typeof((item . __h_1_mem )) __h_match11177_1_arg ;
    typeof((__h_match11177_1_arg . __h_0_mem )) name ;
    // ----------
    
    ({ /* cicili#Let11183 */
      bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11184 */
              (key  =  (item . __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn11186 */
              (__h_match11177_1_arg  =  (item . __h_1_mem ) );
              true ;
            }) ) &&  (true  &&  ({ /* cicili#Progn11188 */
              (name  =  (__h_match11177_1_arg . __h_0_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block11192 */
          { /* cicili#Block11194 */
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
  return ({ /* cicili#Let11166 */
      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let11168 */
        __auto_type tree  = tree ;
        // ----------
        ((void)(tree -> __h_table -> freeClass ));
        tree ;
      });
      // ----------
      ({ /* cicili#Let11172 */
        __auto_type wtr  = delete_BTree_int_User (tree , key , __ciciliL_11174 );
        // ----------
        { /* cicili#Let11202 */
          typeof((((wtr . __h_data ). Right ). __h_0_mem )) ntr ;
          // ----------
          
          ({ /* cicili#Let11206 */
            bool __h_case_result  = (true  &&  (((wtr . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11207 */
                  (ntr  =  (((wtr . __h_data ). Right ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block11211 */
                { /* cicili#Block11213 */
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
  return ({ /* cicili#Let11219 */
      __auto_type bind  = bind_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User ;
      // ----------
      bind (insertAndFree (tree , 30, ((User){ new_String_Const ("Dennis Ritchie 01"), 2000})), ({ /* cicili#Progn11226 */
          Either_BTree_int_User_Error_BTree_int_User __ciciliC_11225 (BTree_int_User tree ) {
            return bind (insertAndFree (tree , 20, ((User){ new_String_Const ("Dennis Ritchie 02"), 3000})), ({ /* cicili#Progn11233 */
                Either_BTree_int_User_Error_BTree_int_User __ciciliC_11232 (BTree_int_User tree ) {
                  return bind (insertAndFree (tree , 40, ((User){ new_String_Const ("Dennis Ritchie 03"), 4000})), ({ /* cicili#Progn11240 */
                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_11239 (BTree_int_User tree ) {
                        return bind (insertAndFree (tree , 18, ((User){ new_String_Const ("Dennis Ritchie 04"), 5000})), ({ /* cicili#Progn11247 */
                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_11246 (BTree_int_User tree ) {
                              return bind (insertAndFree (tree , 28, ((User){ new_String_Const ("Dennis Ritchie 05"), 6000})), ({ /* cicili#Progn11254 */
                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_11253 (BTree_int_User tree ) {
                                    return bind (insertAndFree (tree , 50, ((User){ new_String_Const ("John McCarthy 06"), 2000})), ({ /* cicili#Progn11261 */
                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_11260 (BTree_int_User tree ) {
                                          return bind (insertAndFree (tree , 10, ((User){ new_String_Const ("John McCarthy 07"), 3000})), ({ /* cicili#Progn11268 */
                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_11267 (BTree_int_User tree ) {
                                                return bind (insertAndFree (tree , 42, ((User){ new_String_Const ("John McCarthy 08"), 4000})), ({ /* cicili#Progn11275 */
                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_11274 (BTree_int_User tree ) {
                                                      return bind (insertAndFree (tree , 52, ((User){ new_String_Const ("John McCarthy 09"), 5000})), ({ /* cicili#Progn11282 */
                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_11281 (BTree_int_User tree ) {
                                                            return bind (insertAndFree (tree , 8, ((User){ new_String_Const ("Haskell Curry 10"), 6000})), ({ /* cicili#Progn11289 */
                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_11288 (BTree_int_User tree ) {
                                                                  return bind (insertAndFree (tree , 26, ((User){ new_String_Const ("Haskell Curry 11"), 2000})), ({ /* cicili#Progn11296 */
                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_11295 (BTree_int_User tree ) {
                                                                        return bind (insertAndFree (tree , 60, ((User){ new_String_Const ("Haskell Curry 12"), 3000})), ({ /* cicili#Progn11303 */
                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_11302 (BTree_int_User tree ) {
                                                                              return bind (insertAndFree (tree , 70, ((User){ new_String_Const ("Saman Pasha 13"), 4000})), ({ /* cicili#Progn11310 */
                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_11309 (BTree_int_User tree ) {
                                                                                    return bind (insertAndFree (tree , 56, ((User){ new_String_Const ("Dennis Ritchie 14"), 5000})), ({ /* cicili#Progn11317 */
                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_11316 (BTree_int_User tree ) {
                                                                                          return bind (insertAndFree (tree , 58, ((User){ new_String_Const ("Dennis Ritchie 15"), 6000})), ({ /* cicili#Progn11324 */
                                                                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_11323 (BTree_int_User tree ) {
                                                                                                return bind (insertAndFree (tree , 74, ((User){ new_String_Const ("Dennis Ritchie 16"), 2000})), ({ /* cicili#Progn11331 */
                                                                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_11330 (BTree_int_User tree ) {
                                                                                                      return bind (insertAndFree (tree , 76, ((User){ new_String_Const ("Dennis Ritchie 17"), 3000})), ({ /* cicili#Progn11338 */
                                                                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_11337 (BTree_int_User tree ) {
                                                                                                            return bind (insertAndFree (tree , 2, ((User){ new_String_Const ("John McCarthy 18"), 4000})), ({ /* cicili#Progn11345 */
                                                                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_11344 (BTree_int_User tree ) {
                                                                                                                  return bind (insertAndFree (tree , 4, ((User){ new_String_Const ("John McCarthy 19"), 5000})), ({ /* cicili#Progn11352 */
                                                                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_11351 (BTree_int_User tree ) {
                                                                                                                        return bind (insertAndFree (tree , 6, ((User){ new_String_Const ("John McCarthy 20"), 6000})), ({ /* cicili#Progn11359 */
                                                                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_11358 (BTree_int_User tree ) {
                                                                                                                              return bind (insertAndFree (tree , 38, ((User){ new_String_Const ("Haskell Curry 21"), 2000})), ({ /* cicili#Progn11366 */
                                                                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_11365 (BTree_int_User tree ) {
                                                                                                                                    return bind (insertAndFree (tree , 36, ((User){ new_String_Const ("Haskell Curry 22"), 3000})), ({ /* cicili#Progn11373 */
                                                                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_11372 (BTree_int_User tree ) {
                                                                                                                                          return bind (insertAndFree (tree , 34, ((User){ new_String_Const ("Saman Pasha 23"), 4000})), ({ /* cicili#Progn11380 */
                                                                                                                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_11379 (BTree_int_User tree ) {
                                                                                                                                                return bind (insertAndFree (tree , 62, ((User){ new_String_Const ("Cicili 24"), 5000})), ({ /* cicili#Progn11387 */
                                                                                                                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_11386 (BTree_int_User tree ) {
                                                                                                                                                      return bind (insertAndFree (tree , 46, ((User){ new_String_Const ("Cicili 25"), 6000})), ({ /* cicili#Progn11394 */
                                                                                                                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_11393 (BTree_int_User tree ) {
                                                                                                                                                            return bind (insertAndFree (tree , 48, ((User){ new_String_Const ("Cicili 26"), 2000})), ({ /* cicili#Progn11401 */
                                                                                                                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_11400 (BTree_int_User tree ) {
                                                                                                                                                                  return bind (insertAndFree (tree , 54, ((User){ new_String_Const ("Cicili 27"), 3000})), ({ /* cicili#Progn11408 */
                                                                                                                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_11407 (BTree_int_User tree ) {
                                                                                                                                                                        return bind (insertAndFree (tree , 31, ((User){ new_String_Const ("Cicili 28"), 6000})), ({ /* cicili#Progn11415 */
                                                                                                                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_11414 (BTree_int_User tree ) {
                                                                                                                                                                              return bind (insertAndFree (tree , 32, ((User){ new_String_Const ("Cicili 29"), 2000})), ({ /* cicili#Progn11422 */
                                                                                                                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_11421 (BTree_int_User tree ) {
                                                                                                                                                                                    return bind (insertAndFree (tree , 33, ((User){ new_String_Const ("Cicili 30"), 3000})), ({ /* cicili#Progn11429 */
                                                                                                                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_11428 (BTree_int_User tree ) {
                                                                                                                                                                                          return Right_BTree_int_User_Error_BTree_int_User (tree );
                                                                                                                                                                                        }
                                                                                                                                                                                        __ciciliC_11428 ;
                                                                                                                                                                                      }));
                                                                                                                                                                                  }
                                                                                                                                                                                  __ciciliC_11421 ;
                                                                                                                                                                                }));
                                                                                                                                                                            }
                                                                                                                                                                            __ciciliC_11414 ;
                                                                                                                                                                          }));
                                                                                                                                                                      }
                                                                                                                                                                      __ciciliC_11407 ;
                                                                                                                                                                    }));
                                                                                                                                                                }
                                                                                                                                                                __ciciliC_11400 ;
                                                                                                                                                              }));
                                                                                                                                                          }
                                                                                                                                                          __ciciliC_11393 ;
                                                                                                                                                        }));
                                                                                                                                                    }
                                                                                                                                                    __ciciliC_11386 ;
                                                                                                                                                  }));
                                                                                                                                              }
                                                                                                                                              __ciciliC_11379 ;
                                                                                                                                            }));
                                                                                                                                        }
                                                                                                                                        __ciciliC_11372 ;
                                                                                                                                      }));
                                                                                                                                  }
                                                                                                                                  __ciciliC_11365 ;
                                                                                                                                }));
                                                                                                                            }
                                                                                                                            __ciciliC_11358 ;
                                                                                                                          }));
                                                                                                                      }
                                                                                                                      __ciciliC_11351 ;
                                                                                                                    }));
                                                                                                                }
                                                                                                                __ciciliC_11344 ;
                                                                                                              }));
                                                                                                          }
                                                                                                          __ciciliC_11337 ;
                                                                                                        }));
                                                                                                    }
                                                                                                    __ciciliC_11330 ;
                                                                                                  }));
                                                                                              }
                                                                                              __ciciliC_11323 ;
                                                                                            }));
                                                                                        }
                                                                                        __ciciliC_11316 ;
                                                                                      }));
                                                                                  }
                                                                                  __ciciliC_11309 ;
                                                                                }));
                                                                            }
                                                                            __ciciliC_11302 ;
                                                                          }));
                                                                      }
                                                                      __ciciliC_11295 ;
                                                                    }));
                                                                }
                                                                __ciciliC_11288 ;
                                                              }));
                                                          }
                                                          __ciciliC_11281 ;
                                                        }));
                                                    }
                                                    __ciciliC_11274 ;
                                                  }));
                                              }
                                              __ciciliC_11267 ;
                                            }));
                                        }
                                        __ciciliC_11260 ;
                                      }));
                                  }
                                  __ciciliC_11253 ;
                                }));
                            }
                            __ciciliC_11246 ;
                          }));
                      }
                      __ciciliC_11239 ;
                    }));
                }
                __ciciliC_11232 ;
              }));
          }
          __ciciliC_11225 ;
        }));
    });
}
Either_BTree_int_User_Error_BTree_int_User deleteMany (BTree_int_User tree ) {
  return ({ /* cicili#Let11437 */
      __auto_type bind  = bind_Monad_Either_BTree_int_User_Error_BTree_int_User_BTree_int_User ;
      // ----------
      bind (deleteAndFree (tree , 76), ({ /* cicili#Progn11442 */
          Either_BTree_int_User_Error_BTree_int_User __ciciliC_11441 (BTree_int_User tree ) {
            return bind (deleteAndFree (tree , 74), ({ /* cicili#Progn11447 */
                Either_BTree_int_User_Error_BTree_int_User __ciciliC_11446 (BTree_int_User tree ) {
                  return bind (deleteAndFree (tree , 70), ({ /* cicili#Progn11452 */
                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_11451 (BTree_int_User tree ) {
                        return bind (deleteAndFree (tree , 10), ({ /* cicili#Progn11457 */
                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_11456 (BTree_int_User tree ) {
                              return bind (deleteAndFree (tree , 42), ({ /* cicili#Progn11462 */
                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_11461 (BTree_int_User tree ) {
                                    return bind (deleteAndFree (tree , 30), ({ /* cicili#Progn11467 */
                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_11466 (BTree_int_User tree ) {
                                          return bind (deleteAndFree (tree , 28), ({ /* cicili#Progn11472 */
                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_11471 (BTree_int_User tree ) {
                                                return bind (deleteAndFree (tree , 40), ({ /* cicili#Progn11477 */
                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_11476 (BTree_int_User tree ) {
                                                      return bind (deleteAndFree (tree , 52), ({ /* cicili#Progn11482 */
                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_11481 (BTree_int_User tree ) {
                                                            return bind (deleteAndFree (tree , 50), ({ /* cicili#Progn11487 */
                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_11486 (BTree_int_User tree ) {
                                                                  return bind (deleteAndFree (tree , 18), ({ /* cicili#Progn11492 */
                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_11491 (BTree_int_User tree ) {
                                                                        return bind (deleteAndFree (tree , 2), ({ /* cicili#Progn11497 */
                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_11496 (BTree_int_User tree ) {
                                                                              return bind (deleteAndFree (tree , 8), ({ /* cicili#Progn11502 */
                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_11501 (BTree_int_User tree ) {
                                                                                    return bind (deleteAndFree (tree , 58), ({ /* cicili#Progn11507 */
                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_11506 (BTree_int_User tree ) {
                                                                                          return bind (deleteAndFree (tree , 20), ({ /* cicili#Progn11512 */
                                                                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_11511 (BTree_int_User tree ) {
                                                                                                return bind (deleteAndFree (tree , 56), ({ /* cicili#Progn11517 */
                                                                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_11516 (BTree_int_User tree ) {
                                                                                                      return bind (deleteAndFree (tree , 26), ({ /* cicili#Progn11522 */
                                                                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_11521 (BTree_int_User tree ) {
                                                                                                            return bind (deleteAndFree (tree , 4), ({ /* cicili#Progn11527 */
                                                                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_11526 (BTree_int_User tree ) {
                                                                                                                  return bind (deleteAndFree (tree , 60), ({ /* cicili#Progn11532 */
                                                                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_11531 (BTree_int_User tree ) {
                                                                                                                        return bind (deleteAndFree (tree , 31), ({ /* cicili#Progn11537 */
                                                                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_11536 (BTree_int_User tree ) {
                                                                                                                              return bind (deleteAndFree (tree , 54), ({ /* cicili#Progn11542 */
                                                                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_11541 (BTree_int_User tree ) {
                                                                                                                                    return bind (deleteAndFree (tree , 38), ({ /* cicili#Progn11547 */
                                                                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_11546 (BTree_int_User tree ) {
                                                                                                                                          return bind (deleteAndFree (tree , 62), ({ /* cicili#Progn11552 */
                                                                                                                                              Either_BTree_int_User_Error_BTree_int_User __ciciliC_11551 (BTree_int_User tree ) {
                                                                                                                                                return bind (deleteAndFree (tree , 36), ({ /* cicili#Progn11557 */
                                                                                                                                                    Either_BTree_int_User_Error_BTree_int_User __ciciliC_11556 (BTree_int_User tree ) {
                                                                                                                                                      return bind (deleteAndFree (tree , 6), ({ /* cicili#Progn11562 */
                                                                                                                                                          Either_BTree_int_User_Error_BTree_int_User __ciciliC_11561 (BTree_int_User tree ) {
                                                                                                                                                            return bind (deleteAndFree (tree , 48), ({ /* cicili#Progn11567 */
                                                                                                                                                                Either_BTree_int_User_Error_BTree_int_User __ciciliC_11566 (BTree_int_User tree ) {
                                                                                                                                                                  return bind (deleteAndFree (tree , 34), ({ /* cicili#Progn11572 */
                                                                                                                                                                      Either_BTree_int_User_Error_BTree_int_User __ciciliC_11571 (BTree_int_User tree ) {
                                                                                                                                                                        return bind (deleteAndFree (tree , 32), ({ /* cicili#Progn11577 */
                                                                                                                                                                            Either_BTree_int_User_Error_BTree_int_User __ciciliC_11576 (BTree_int_User tree ) {
                                                                                                                                                                              return bind (deleteAndFree (tree , 46), ({ /* cicili#Progn11582 */
                                                                                                                                                                                  Either_BTree_int_User_Error_BTree_int_User __ciciliC_11581 (BTree_int_User tree ) {
                                                                                                                                                                                    return bind (deleteAndFree (tree , 33), ({ /* cicili#Progn11587 */
                                                                                                                                                                                        Either_BTree_int_User_Error_BTree_int_User __ciciliC_11586 (BTree_int_User tree ) {
                                                                                                                                                                                          return Right_BTree_int_User_Error_BTree_int_User (tree );
                                                                                                                                                                                        }
                                                                                                                                                                                        __ciciliC_11586 ;
                                                                                                                                                                                      }));
                                                                                                                                                                                  }
                                                                                                                                                                                  __ciciliC_11581 ;
                                                                                                                                                                                }));
                                                                                                                                                                            }
                                                                                                                                                                            __ciciliC_11576 ;
                                                                                                                                                                          }));
                                                                                                                                                                      }
                                                                                                                                                                      __ciciliC_11571 ;
                                                                                                                                                                    }));
                                                                                                                                                                }
                                                                                                                                                                __ciciliC_11566 ;
                                                                                                                                                              }));
                                                                                                                                                          }
                                                                                                                                                          __ciciliC_11561 ;
                                                                                                                                                        }));
                                                                                                                                                    }
                                                                                                                                                    __ciciliC_11556 ;
                                                                                                                                                  }));
                                                                                                                                              }
                                                                                                                                              __ciciliC_11551 ;
                                                                                                                                            }));
                                                                                                                                        }
                                                                                                                                        __ciciliC_11546 ;
                                                                                                                                      }));
                                                                                                                                  }
                                                                                                                                  __ciciliC_11541 ;
                                                                                                                                }));
                                                                                                                            }
                                                                                                                            __ciciliC_11536 ;
                                                                                                                          }));
                                                                                                                      }
                                                                                                                      __ciciliC_11531 ;
                                                                                                                    }));
                                                                                                                }
                                                                                                                __ciciliC_11526 ;
                                                                                                              }));
                                                                                                          }
                                                                                                          __ciciliC_11521 ;
                                                                                                        }));
                                                                                                    }
                                                                                                    __ciciliC_11516 ;
                                                                                                  }));
                                                                                              }
                                                                                              __ciciliC_11511 ;
                                                                                            }));
                                                                                        }
                                                                                        __ciciliC_11506 ;
                                                                                      }));
                                                                                  }
                                                                                  __ciciliC_11501 ;
                                                                                }));
                                                                            }
                                                                            __ciciliC_11496 ;
                                                                          }));
                                                                      }
                                                                      __ciciliC_11491 ;
                                                                    }));
                                                                }
                                                                __ciciliC_11486 ;
                                                              }));
                                                          }
                                                          __ciciliC_11481 ;
                                                        }));
                                                    }
                                                    __ciciliC_11476 ;
                                                  }));
                                              }
                                              __ciciliC_11471 ;
                                            }));
                                        }
                                        __ciciliC_11466 ;
                                      }));
                                  }
                                  __ciciliC_11461 ;
                                }));
                            }
                            __ciciliC_11456 ;
                          }));
                      }
                      __ciciliC_11451 ;
                    }));
                }
                __ciciliC_11446 ;
              }));
          }
          __ciciliC_11441 ;
        }));
    });
}
void __ciciliL_11913 (BTree_int_User_pair_t item , Bool hasNext ) {
  { /* cicili#Let11918 */
    typeof((item . __h_0_mem )) key ;
    typeof((item . __h_1_mem )) __h_match11916_1_arg ;
    typeof((__h_match11916_1_arg . __h_0_mem )) name ;
    // ----------
    
    ({ /* cicili#Let11922 */
      bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11923 */
              (key  =  (item . __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn11925 */
              (__h_match11916_1_arg  =  (item . __h_1_mem ) );
              true ;
            }) ) &&  (true  &&  ({ /* cicili#Progn11927 */
              (name  =  (__h_match11916_1_arg . __h_0_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block11931 */
          { /* cicili#Block11933 */
            fprintf (stdout , "%d", key );
            putchar (' ');
            (name -> __h_table -> show )(stdout , name );
            putchar ('\n');
          }
        }
    });
  }
}
void __ciciliL_12071 (BTree_int_User_pair_t item , Bool hasNext ) {
  { /* cicili#Let12076 */
    typeof((item . __h_1_mem )) __h_match12074_1_arg ;
    typeof((__h_match12074_1_arg . __h_0_mem )) name ;
    // ----------
    
    ({ /* cicili#Let12080 */
      bool __h_case_result  = (true  &&  (({ /* cicili#Progn12081 */
            (__h_match12074_1_arg  =  (item . __h_1_mem ) );
            true ;
          }) &&  (true  &&  ({ /* cicili#Progn12083 */
              (name  =  (__h_match12074_1_arg . __h_0_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block12087 */
          { /* cicili#Block12089 */
            (name -> __h_table -> show )(stdout , name );
            free_String ((&name ));
            putchar ('\n');
          }
        }
    });
  }
}
void showTreeResult (Either_BTree_int_User_Error_BTree_int_User etree ) {
  { /* cicili#Let11595 */
    typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
    // ----------
    
    ({ /* cicili#Let11599 */
      bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11600 */
            (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block11604 */
          { /* cicili#Block11610 */
            putchar ('\n');
            { /* cicili#Block11615 */
              printf ("searching for %d: ", 30);
              { /* cicili#Let11619 */
                __auto_type match11618  = search_BTree_int_User (tree , 30);
                typeof((((match11618 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                
                ({ /* cicili#Let11624 */
                  bool __h_case_result  = (true  &&  (((match11618 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11625 */
                        (item  =  (((match11618 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block11629 */
                      ({ /* cicili#Let11636 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match11634_1_arg ;
                        typeof((__h_match11634_1_arg . __h_0_mem )) name ;
                        typeof((__h_match11634_1_arg . __h_1_mem )) salary ;
                        // ----------
                        
                        ({ /* cicili#Let11640 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11641 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11643 */
                                  (__h_match11634_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn11645 */
                                    (name  =  (__h_match11634_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11647 */
                                    (salary  =  (__h_match11634_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn11650 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let11654 */
                              // ----------
                              
                              ({ /* cicili#Progn11658 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let11663 */
                      // ----------
                      
                      ({ /* cicili#Let11667 */
                        bool __h_case_result  = (true  &&  ((match11618 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block11670 */
                            printf ("not found!");
                          }
                      });
                    }
                });
              }
              putchar ('\n');
            }
            { /* cicili#Block11675 */
              printf ("searching for %d: ", 50);
              { /* cicili#Let11679 */
                __auto_type match11678  = search_BTree_int_User (tree , 50);
                typeof((((match11678 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                
                ({ /* cicili#Let11684 */
                  bool __h_case_result  = (true  &&  (((match11678 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11685 */
                        (item  =  (((match11678 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block11689 */
                      ({ /* cicili#Let11696 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match11694_1_arg ;
                        typeof((__h_match11694_1_arg . __h_0_mem )) name ;
                        typeof((__h_match11694_1_arg . __h_1_mem )) salary ;
                        // ----------
                        
                        ({ /* cicili#Let11700 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11701 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11703 */
                                  (__h_match11694_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn11705 */
                                    (name  =  (__h_match11694_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11707 */
                                    (salary  =  (__h_match11694_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn11710 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let11714 */
                              // ----------
                              
                              ({ /* cicili#Progn11718 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let11723 */
                      // ----------
                      
                      ({ /* cicili#Let11727 */
                        bool __h_case_result  = (true  &&  ((match11678 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block11730 */
                            printf ("not found!");
                          }
                      });
                    }
                });
              }
              putchar ('\n');
            }
            { /* cicili#Block11735 */
              printf ("searching for %d: ", 60);
              { /* cicili#Let11739 */
                __auto_type match11738  = search_BTree_int_User (tree , 60);
                typeof((((match11738 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                
                ({ /* cicili#Let11744 */
                  bool __h_case_result  = (true  &&  (((match11738 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11745 */
                        (item  =  (((match11738 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block11749 */
                      ({ /* cicili#Let11756 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match11754_1_arg ;
                        typeof((__h_match11754_1_arg . __h_0_mem )) name ;
                        typeof((__h_match11754_1_arg . __h_1_mem )) salary ;
                        // ----------
                        
                        ({ /* cicili#Let11760 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11761 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11763 */
                                  (__h_match11754_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn11765 */
                                    (name  =  (__h_match11754_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11767 */
                                    (salary  =  (__h_match11754_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn11770 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let11774 */
                              // ----------
                              
                              ({ /* cicili#Progn11778 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let11783 */
                      // ----------
                      
                      ({ /* cicili#Let11787 */
                        bool __h_case_result  = (true  &&  ((match11738 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block11790 */
                            printf ("not found!");
                          }
                      });
                    }
                });
              }
              putchar ('\n');
            }
            { /* cicili#Block11795 */
              printf ("searching for %d: ", 70);
              { /* cicili#Let11799 */
                __auto_type match11798  = search_BTree_int_User (tree , 70);
                typeof((((match11798 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                
                ({ /* cicili#Let11804 */
                  bool __h_case_result  = (true  &&  (((match11798 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11805 */
                        (item  =  (((match11798 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block11809 */
                      ({ /* cicili#Let11816 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match11814_1_arg ;
                        typeof((__h_match11814_1_arg . __h_0_mem )) name ;
                        typeof((__h_match11814_1_arg . __h_1_mem )) salary ;
                        // ----------
                        
                        ({ /* cicili#Let11820 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11821 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11823 */
                                  (__h_match11814_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn11825 */
                                    (name  =  (__h_match11814_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11827 */
                                    (salary  =  (__h_match11814_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn11830 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let11834 */
                              // ----------
                              
                              ({ /* cicili#Progn11838 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let11843 */
                      // ----------
                      
                      ({ /* cicili#Let11847 */
                        bool __h_case_result  = (true  &&  ((match11798 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block11850 */
                            printf ("not found!");
                          }
                      });
                    }
                });
              }
              putchar ('\n');
            }
            { /* cicili#Block11855 */
              printf ("searching for %d: ", 56);
              { /* cicili#Let11859 */
                __auto_type match11858  = search_BTree_int_User (tree , 56);
                typeof((((match11858 . __h_data ). Just ). __h_0_mem )) item ;
                // ----------
                
                ({ /* cicili#Let11864 */
                  bool __h_case_result  = (true  &&  (((match11858 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11865 */
                        (item  =  (((match11858 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block11869 */
                      ({ /* cicili#Let11876 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match11874_1_arg ;
                        typeof((__h_match11874_1_arg . __h_0_mem )) name ;
                        typeof((__h_match11874_1_arg . __h_1_mem )) salary ;
                        // ----------
                        
                        ({ /* cicili#Let11880 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11881 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11883 */
                                  (__h_match11874_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn11885 */
                                    (name  =  (__h_match11874_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11887 */
                                    (salary  =  (__h_match11874_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn11890 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let11894 */
                              // ----------
                              
                              ({ /* cicili#Progn11898 */
                                0;
                              });
                            }));
                        });
                      });
                    }
                  else
                    { /* cicili#Let11903 */
                      // ----------
                      
                      ({ /* cicili#Let11907 */
                        bool __h_case_result  = (true  &&  ((match11858 . __h_ctor ) ==  __h_Nothing_t  ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block11910 */
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
            traverse_BTree_int_User (tree , __ciciliL_11913 );
            putchar ('\n');
            { /* cicili#Let11943 */
              __auto_type match11942  = min_BTree_int_User (tree );
              typeof((((match11942 . __h_data ). Just ). __h_0_mem )) item ;
              // ----------
              
              ({ /* cicili#Let11948 */
                bool __h_case_result  = (true  &&  (((match11942 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11949 */
                      (item  =  (((match11942 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block11953 */
                    { /* cicili#Block11955 */
                      printf ("minimum: ");
                      ({ /* cicili#Let11962 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match11960_1_arg ;
                        typeof((__h_match11960_1_arg . __h_0_mem )) name ;
                        typeof((__h_match11960_1_arg . __h_1_mem )) salary ;
                        // ----------
                        
                        ({ /* cicili#Let11966 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11967 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11969 */
                                  (__h_match11960_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn11971 */
                                    (name  =  (__h_match11960_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11973 */
                                    (salary  =  (__h_match11960_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn11976 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let11980 */
                              // ----------
                              
                              ({ /* cicili#Progn11984 */
                                0;
                              });
                            }));
                        });
                      });
                      putchar ('\n');
                    }
                  }
                else
                  { /* cicili#Let11989 */
                    // ----------
                    
                    ({ /* cicili#Let11993 */
                      bool __h_case_result  = (true  &&  ((match11942 . __h_ctor ) ==  __h_Nothing_t  ) );
                      // ----------
                      if (__h_case_result )
                        { /* cicili#Block11996 */
                          printf ("minimum not found!");
                        }
                    });
                  }
              });
            }
            putchar ('\n');
            { /* cicili#Let12000 */
              __auto_type match11999  = max_BTree_int_User (tree );
              typeof((((match11999 . __h_data ). Just ). __h_0_mem )) item ;
              // ----------
              
              ({ /* cicili#Let12005 */
                bool __h_case_result  = (true  &&  (((match11999 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12006 */
                      (item  =  (((match11999 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block12010 */
                    { /* cicili#Block12012 */
                      printf ("maximum: ");
                      ({ /* cicili#Let12019 */
                        typeof((item . __h_0_mem )) id ;
                        typeof((item . __h_1_mem )) __h_match12017_1_arg ;
                        typeof((__h_match12017_1_arg . __h_0_mem )) name ;
                        typeof((__h_match12017_1_arg . __h_1_mem )) salary ;
                        // ----------
                        
                        ({ /* cicili#Let12023 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn12024 */
                                  (id  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn12026 */
                                  (__h_match12017_1_arg  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) &&  (true  &&  (({ /* cicili#Progn12028 */
                                    (name  =  (__h_match12017_1_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn12030 */
                                    (salary  =  (__h_match12017_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn12033 */
                              (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                            }) : ({ /* cicili#Let12037 */
                              // ----------
                              
                              ({ /* cicili#Progn12041 */
                                0;
                              });
                            }));
                        });
                      });
                      putchar ('\n');
                    }
                  }
                else
                  { /* cicili#Let12046 */
                    // ----------
                    
                    ({ /* cicili#Let12050 */
                      bool __h_case_result  = (true  &&  ((match11999 . __h_ctor ) ==  __h_Nothing_t  ) );
                      // ----------
                      if (__h_case_result )
                        { /* cicili#Block12053 */
                          printf ("maximum not found!");
                        }
                    });
                  }
              });
            }
            putchar ('\n');
            { /* cicili#Let12057 */
              __auto_type match12056  = deleteMany (tree );
              typeof((((match12056 . __h_data ). Right ). __h_0_mem )) tree ;
              // ----------
              
              ({ /* cicili#Let12061 */
                bool __h_case_result  = (true  &&  (((match12056 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn12062 */
                      (tree  =  (((match12056 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block12066 */
                    { /* cicili#Block12068 */
                      printf ("Traversing B-Tree to free strings allocated names if were not deleted.\n");
                      traverse_BTree_int_User (tree , __ciciliL_12071 );
                      free_BTree_int_User ((&tree ));
                    }
                  }
                else
                  { /* cicili#Let12098 */
                    typeof((((match12056 . __h_data ). Left ). __h_0_mem )) error ;
                    // ----------
                    
                    ({ /* cicili#Let12102 */
                      bool __h_case_result  = (true  &&  (((match12056 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn12103 */
                            (error  =  (((match12056 . __h_data ). Left ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      if (__h_case_result )
                        { /* cicili#Block12107 */
                          ({ /* cicili#Let12110 */
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
        { /* cicili#Let12116 */
          typeof((((etree . __h_data ). Left ). __h_0_mem )) error ;
          // ----------
          
          ({ /* cicili#Let12120 */
            bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn12121 */
                  (error  =  (((etree . __h_data ). Left ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block12125 */
                ({ /* cicili#Let12128 */
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
  ({ /* cicili#Let12135 */
    __auto_type tree  = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
    // ----------
    showTreeResult (insertMany (tree ));
  });
}
