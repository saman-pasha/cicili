#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
typedef struct ciciliXJ2sLR8cilAt_RaWY4eDhwnqPTs_ {
  String __h_0_mem ;
  int __h_1_mem ;
} ciciliXJ2sLR8cilAt_RaWY4eDhwnqPTs_;
typedef ciciliXJ2sLR8cilAt_RaWY4eDhwnqPTs_ User ;
typedef struct class_BTree_int_User * BTree_int_User ;
typedef struct cicili1lqmENkVVHRj1zgURvnOovpQh50_ {
  int __h_0_mem ;
  User __h_1_mem ;
} cicili1lqmENkVVHRj1zgURvnOovpQh50_;
typedef cicili1lqmENkVVHRj1zgURvnOovpQh50_ BTree_int_User_pair_t ;
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
  union { /* ciciliUnion126 */
    struct { /* ciciliStruct127 */
    } ERR_INVALID_OBJECT , _6 ;
    struct { /* ciciliStruct128 */
      size_t __h_0_mem ;
    } ERR_INVALID_ORDER , _5 ;
    struct { /* ciciliStruct129 */
      BTree_int_User_pair_t __h_0_mem ;
    } ERR_UNIQUE_KEY , _4 ;
    struct { /* ciciliStruct130 */
      int __h_0_mem ;
    } ERR_NOT_FOUND , _3 ;
    struct { /* ciciliStruct131 */
      BTree_int_User_pair_t __h_0_mem ;
      size_t __h_1_mem ;
    } ERR_ACCESS_DEAD_CHILD , _2 ;
    struct { /* ciciliStruct132 */
      BTree_int_User __h_0_mem ;
    } ERR_INVALID_BRANCH , _1 ;
    struct { /* ciciliStruct133 */
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
  union { /* ciciliUnion180 */
    struct { /* ciciliStruct181 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct182 */
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
  union { /* ciciliUnion208 */
    struct { /* ciciliStruct209 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct210 */
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
  union { /* ciciliUnion238 */
    struct { /* ciciliStruct239 */
      BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct240 */
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
#ifndef __StringBuffer_BTree_int_User_pair_t__H_DECL__
#define __StringBuffer_BTree_int_User_pair_t__H_DECL__
#ifndef __H___h_StringBuffer_ctor_t__
#define __H___h_StringBuffer_ctor_t__
typedef enum __h_StringBuffer_ctor_t {
  __h_Freed_t = 0,
  __h_Buffered_t = 1
} __h_StringBuffer_ctor_t;
#endif /* __H___h_StringBuffer_ctor_t__ */ 
typedef struct StringBuffer_BTree_int_User_pair_t StringBuffer_BTree_int_User_pair_t ;
typedef void (*free_StringBuffer_BTree_int_User_pair_t_t) (StringBuffer_BTree_int_User_pair_t * this );
typedef struct StringBuffer_BTree_int_User_pair_t__H_Table {
  free_StringBuffer_BTree_int_User_pair_t_t freeData ;
    StringBuffer_BTree_int_User_pair_t (*resize) (StringBuffer_BTree_int_User_pair_t sb , size_t size );
    StringBuffer_BTree_int_User_pair_t (*new) (size_t step );
    StringBuffer_BTree_int_User_pair_t (*newCapacity) (size_t capacity , size_t step );
    StringBuffer_BTree_int_User_pair_t (*copySlice) (StringBuffer_BTree_int_User_pair_t sb , size_t cursor , size_t size );
    StringBuffer_BTree_int_User_pair_t (*copy) (StringBuffer_BTree_int_User_pair_t sb );
    StringBuffer_BTree_int_User_pair_t (*put) (StringBuffer_BTree_int_User_pair_t sb , const BTree_int_User_pair_t data );
    StringBuffer_BTree_int_User_pair_t (*print) (StringBuffer_BTree_int_User_pair_t sb , const BTree_int_User_pair_t * data , size_t len );
} StringBuffer_BTree_int_User_pair_t__H_Table;
typedef struct StringBuffer_BTree_int_User_pair_t {
  const StringBuffer_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion285 */
    struct { /* ciciliStruct286 */
      BTree_int_User_pair_t * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } Buffered , _1 ;
    struct { /* ciciliStruct287 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_BTree_int_User_pair_t;
StringBuffer_BTree_int_User_pair_t MakeStringBuffer_BTree_int_User_pair_t (BTree_int_User_pair_t * buffer , size_t cursor , size_t size , size_t step );
StringBuffer_BTree_int_User_pair_t FreedStringBuffer_BTree_int_User_pair_t ();
__attribute__((weak)) StringBuffer_BTree_int_User_pair_t Default_StringBuffer_BTree_int_User_pair_t () {
  return FreedStringBuffer_BTree_int_User_pair_t ();
}
StringBuffer_BTree_int_User_pair_t resize_StringBuffer_BTree_int_User_pair_t (StringBuffer_BTree_int_User_pair_t sb , size_t size );
StringBuffer_BTree_int_User_pair_t new_StringBuffer_BTree_int_User_pair_t (size_t step );
StringBuffer_BTree_int_User_pair_t newCapacity_StringBuffer_BTree_int_User_pair_t (size_t capacity , size_t step );
StringBuffer_BTree_int_User_pair_t copySlice_StringBuffer_BTree_int_User_pair_t (StringBuffer_BTree_int_User_pair_t sb , size_t cursor , size_t size );
StringBuffer_BTree_int_User_pair_t copy_StringBuffer_BTree_int_User_pair_t (StringBuffer_BTree_int_User_pair_t sb );
StringBuffer_BTree_int_User_pair_t put_StringBuffer_BTree_int_User_pair_t (StringBuffer_BTree_int_User_pair_t sb , const BTree_int_User_pair_t data );
StringBuffer_BTree_int_User_pair_t print_StringBuffer_BTree_int_User_pair_t (StringBuffer_BTree_int_User_pair_t sb , const BTree_int_User_pair_t * data , size_t len );
const StringBuffer_BTree_int_User_pair_t__H_Table * const get_StringBuffer_BTree_int_User_pair_t__H_Table ();
void free_StringBuffer_BTree_int_User_pair_t (StringBuffer_BTree_int_User_pair_t * this );
#endif /* __StringBuffer_BTree_int_User_pair_t__H_DECL__ */ 
typedef BTree_int_User_pair_t * Vector_BTree_int_User_pair_t_pointer_t ;
typedef struct ciciliSZXQtWZY8huxZtlUsDoLhPYXkJw_ {
  Vector_BTree_int_User_pair_t_pointer_t __h_0_mem ;
  Vector_BTree_int_User_pair_t_pointer_t __h_1_mem ;
} ciciliSZXQtWZY8huxZtlUsDoLhPYXkJw_;
typedef ciciliSZXQtWZY8huxZtlUsDoLhPYXkJw_ Vector_BTree_int_User_pair_t_iterator_t ;
#ifndef __Vector_BTree_int_User_pair_t__H_DECL__
#define __Vector_BTree_int_User_pair_t__H_DECL__
#ifndef __H___h_Vector_ctor_t__
#define __H___h_Vector_ctor_t__
typedef enum __h_Vector_ctor_t {
  __h_None_t = 0,
  __h_Slice_t = 1,
  __h_Buffer_t = 2
} __h_Vector_ctor_t;
#endif /* __H___h_Vector_ctor_t__ */ 
typedef struct class_Vector_BTree_int_User_pair_t class_Vector_BTree_int_User_pair_t ;
typedef class_Vector_BTree_int_User_pair_t * Vector_BTree_int_User_pair_t_x ;
#ifndef __Maybe_Vector_BTree_int_User_pair_t_x__H_DECL__
#define __Maybe_Vector_BTree_int_User_pair_t_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Vector_BTree_int_User_pair_t_x Maybe_Vector_BTree_int_User_pair_t_x ;
typedef void (*free_Maybe_Vector_BTree_int_User_pair_t_x_t) (Maybe_Vector_BTree_int_User_pair_t_x * this );
typedef struct Maybe_Vector_BTree_int_User_pair_t_x__H_Table {
  free_Maybe_Vector_BTree_int_User_pair_t_x_t freeData ;
} Maybe_Vector_BTree_int_User_pair_t_x__H_Table;
typedef struct Maybe_Vector_BTree_int_User_pair_t_x {
  const Maybe_Vector_BTree_int_User_pair_t_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion358 */
    struct { /* ciciliStruct359 */
      Vector_BTree_int_User_pair_t_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct360 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Vector_BTree_int_User_pair_t_x;
Maybe_Vector_BTree_int_User_pair_t_x Just_Vector_BTree_int_User_pair_t_x (Vector_BTree_int_User_pair_t_x value );
Maybe_Vector_BTree_int_User_pair_t_x Nothing_Vector_BTree_int_User_pair_t_x ();
__attribute__((weak)) Maybe_Vector_BTree_int_User_pair_t_x Default_Maybe_Vector_BTree_int_User_pair_t_x () {
  return Nothing_Vector_BTree_int_User_pair_t_x ();
}
const Maybe_Vector_BTree_int_User_pair_t_x__H_Table * const get_Maybe_Vector_BTree_int_User_pair_t_x__H_Table ();
void free_Maybe_Vector_BTree_int_User_pair_t_x (Maybe_Vector_BTree_int_User_pair_t_x * this );
#endif /* __Maybe_Vector_BTree_int_User_pair_t_x__H_DECL__ */ 
#ifndef __Box_Vector_BTree_int_User_pair_t__H_DECL__
#define __Box_Vector_BTree_int_User_pair_t__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_Vector_BTree_int_User_pair_t Box_Vector_BTree_int_User_pair_t ;
typedef void (*free_Box_Vector_BTree_int_User_pair_t_t) (Box_Vector_BTree_int_User_pair_t * this );
typedef struct Box_Vector_BTree_int_User_pair_t__H_Table {
  free_Box_Vector_BTree_int_User_pair_t_t freeData ;
    Box_Vector_BTree_int_User_pair_t (*new) (Vector_BTree_int_User_pair_t_x pointer );
    Box_Vector_BTree_int_User_pair_t (*clone) (Box_Vector_BTree_int_User_pair_t rc );
    Maybe_Vector_BTree_int_User_pair_t_x (*take) (Box_Vector_BTree_int_User_pair_t * this );
    Maybe_Vector_BTree_int_User_pair_t_x (*get) (Box_Vector_BTree_int_User_pair_t rc );
} Box_Vector_BTree_int_User_pair_t__H_Table;
typedef struct Box_Vector_BTree_int_User_pair_t {
  const Box_Vector_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion390 */
    struct { /* ciciliStruct391 */
      Vector_BTree_int_User_pair_t_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct392 */
    } Gone , _ ;
  } __h_data ;
} Box_Vector_BTree_int_User_pair_t;
Box_Vector_BTree_int_User_pair_t __h_Hold_Vector_BTree_int_User_pair_t_x (Vector_BTree_int_User_pair_t_x * pointer , int * count , size_t address );
Box_Vector_BTree_int_User_pair_t Gone_Vector_BTree_int_User_pair_t_x ();
__attribute__((weak)) Box_Vector_BTree_int_User_pair_t Default_Box_Vector_BTree_int_User_pair_t () {
  return Gone_Vector_BTree_int_User_pair_t_x ();
}
Box_Vector_BTree_int_User_pair_t new_Box_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t_x pointer );
Box_Vector_BTree_int_User_pair_t clone_Box_Vector_BTree_int_User_pair_t (Box_Vector_BTree_int_User_pair_t rc );
Maybe_Vector_BTree_int_User_pair_t_x take_Box_Vector_BTree_int_User_pair_t (Box_Vector_BTree_int_User_pair_t * this );
Maybe_Vector_BTree_int_User_pair_t_x get_Box_Vector_BTree_int_User_pair_t (Box_Vector_BTree_int_User_pair_t rc );
const Box_Vector_BTree_int_User_pair_t__H_Table * const get_Box_Vector_BTree_int_User_pair_t__H_Table ();
void free_Box_Vector_BTree_int_User_pair_t (Box_Vector_BTree_int_User_pair_t * this );
#endif /* __Box_Vector_BTree_int_User_pair_t__H_DECL__ */ 
typedef Box_Vector_BTree_int_User_pair_t Vector_BTree_int_User_pair_t ;
typedef void (*free_Vector_BTree_int_User_pair_t_t) (Vector_BTree_int_User_pair_t_x * this );
typedef struct Vector_BTree_int_User_pair_t__H_Table {
  free_Vector_BTree_int_User_pair_t_t freeData ;
    Vector_BTree_int_User_pair_t_iterator_t (*iterator) (Vector_BTree_int_User_pair_t vector );
    Vector_BTree_int_User_pair_t (*resize) (Vector_BTree_int_User_pair_t vector , size_t len );
    Vector_BTree_int_User_pair_t (*pure) (size_t step );
    Vector_BTree_int_User_pair_t (*pureCapacity) (size_t capacity , size_t step );
    Vector_BTree_int_User_pair_t_pointer_t (*toArray) (Vector_BTree_int_User_pair_t vector );
    Vector_BTree_int_User_pair_t (*wrap) (const BTree_int_User_pair_t item );
    size_t (*show) (CFile file , Vector_BTree_int_User_pair_t vector );
    Vector_BTree_int_User_pair_t (*copy) (Vector_BTree_int_User_pair_t vector );
    Vector_BTree_int_User_pair_t (*copySlice) (Vector_BTree_int_User_pair_t vector , size_t pos , size_t len );
    Vector_BTree_int_User_pair_t (*replaceAt) (Vector_BTree_int_User_pair_t vector , BTree_int_User_pair_t item , size_t index );
    Vector_BTree_int_User_pair_t (*deleteAt) (Vector_BTree_int_User_pair_t vector , size_t index );
    Vector_BTree_int_User_pair_t (*insertAt) (Vector_BTree_int_User_pair_t vector , BTree_int_User_pair_t item , size_t index );
    Vector_BTree_int_User_pair_t (*reverse) (Vector_BTree_int_User_pair_t vector );
    Vector_BTree_int_User_pair_t (*append) (Vector_BTree_int_User_pair_t lvector , Vector_BTree_int_User_pair_t rvector );
    Vector_BTree_int_User_pair_t (*push) (BTree_int_User_pair_t item , Vector_BTree_int_User_pair_t vector );
    Vector_BTree_int_User_pair_t (*take) (size_t len , Vector_BTree_int_User_pair_t vector );
    Maybe_BTree_int_User_pair_t (*last) (Vector_BTree_int_User_pair_t vector );
    Vector_BTree_int_User_pair_t (*init) (Vector_BTree_int_User_pair_t vector );
    size_t (*hasLen) (Vector_BTree_int_User_pair_t vector , size_t desired );
    size_t (*len) (Vector_BTree_int_User_pair_t vector );
    Vector_BTree_int_User_pair_t (*tail) (Vector_BTree_int_User_pair_t vector );
    Vector_BTree_int_User_pair_t (*drop) (size_t index , Vector_BTree_int_User_pair_t vector );
    Maybe_BTree_int_User_pair_t (*head) (Vector_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*nth) (size_t index , Vector_BTree_int_User_pair_t vector );
} Vector_BTree_int_User_pair_t__H_Table;
typedef struct class_Vector_BTree_int_User_pair_t {
  const Vector_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion457 */
    struct { /* ciciliStruct458 */
      StringBuffer_BTree_int_User_pair_t __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct459 */
      Vector_BTree_int_User_pair_t __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct460 */
    } None , _ ;
  } __h_data ;
} class_Vector_BTree_int_User_pair_t;
Vector_BTree_int_User_pair_t Buffer_BTree_int_User_pair_t (StringBuffer_BTree_int_User_pair_t buffer );
Vector_BTree_int_User_pair_t Slice_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector , size_t cursor , size_t size );
Vector_BTree_int_User_pair_t None_BTree_int_User_pair_t ();
__attribute__((weak)) Vector_BTree_int_User_pair_t Default_Vector_BTree_int_User_pair_t () {
  return None_BTree_int_User_pair_t ();
}
Vector_BTree_int_User_pair_t_iterator_t iterator_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector );
Vector_BTree_int_User_pair_t resize_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector , size_t len );
Vector_BTree_int_User_pair_t pure_Vector_BTree_int_User_pair_t (size_t step );
Vector_BTree_int_User_pair_t pureCapacity_Vector_BTree_int_User_pair_t (size_t capacity , size_t step );
Vector_BTree_int_User_pair_t_pointer_t toArray_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector );
Vector_BTree_int_User_pair_t wrap_Vector_BTree_int_User_pair_t (const BTree_int_User_pair_t item );
size_t show_Vector_BTree_int_User_pair_t (CFile file , Vector_BTree_int_User_pair_t vector );
Vector_BTree_int_User_pair_t copy_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector );
Vector_BTree_int_User_pair_t copySlice_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector , size_t pos , size_t len );
Vector_BTree_int_User_pair_t replaceAt_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector , BTree_int_User_pair_t item , size_t index );
Vector_BTree_int_User_pair_t deleteAt_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector , size_t index );
Vector_BTree_int_User_pair_t insertAt_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector , BTree_int_User_pair_t item , size_t index );
Vector_BTree_int_User_pair_t reverse_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector );
Vector_BTree_int_User_pair_t append_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t lvector , Vector_BTree_int_User_pair_t rvector );
Vector_BTree_int_User_pair_t push_Vector_BTree_int_User_pair_t (BTree_int_User_pair_t item , Vector_BTree_int_User_pair_t vector );
Vector_BTree_int_User_pair_t take_Vector_BTree_int_User_pair_t (size_t len , Vector_BTree_int_User_pair_t vector );
Maybe_BTree_int_User_pair_t last_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector );
Vector_BTree_int_User_pair_t init_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector );
size_t hasLen_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector , size_t desired );
size_t len_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector );
Vector_BTree_int_User_pair_t tail_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector );
Vector_BTree_int_User_pair_t drop_Vector_BTree_int_User_pair_t (size_t index , Vector_BTree_int_User_pair_t vector );
Maybe_BTree_int_User_pair_t head_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t list );
Maybe_BTree_int_User_pair_t nth_Vector_BTree_int_User_pair_t (size_t index , Vector_BTree_int_User_pair_t vector );
Vector_BTree_int_User_pair_t__H_Table * const get_Vector_BTree_int_User_pair_t__H_Table ();
void free_Vector_BTree_int_User_pair_t_x (Vector_BTree_int_User_pair_t_x * this );
#endif /* __Vector_BTree_int_User_pair_t__H_DECL__ */ 
#ifndef __Maybe_Vector_BTree_int_User_pair_t__H_DECL__
#define __Maybe_Vector_BTree_int_User_pair_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Vector_BTree_int_User_pair_t Maybe_Vector_BTree_int_User_pair_t ;
typedef void (*free_Maybe_Vector_BTree_int_User_pair_t_t) (Maybe_Vector_BTree_int_User_pair_t * this );
typedef struct Maybe_Vector_BTree_int_User_pair_t__H_Table {
  free_Maybe_Vector_BTree_int_User_pair_t_t freeData ;
} Maybe_Vector_BTree_int_User_pair_t__H_Table;
typedef struct Maybe_Vector_BTree_int_User_pair_t {
  const Maybe_Vector_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion567 */
    struct { /* ciciliStruct568 */
      Vector_BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct569 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Vector_BTree_int_User_pair_t;
Maybe_Vector_BTree_int_User_pair_t Just_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t value );
Maybe_Vector_BTree_int_User_pair_t Nothing_Vector_BTree_int_User_pair_t ();
__attribute__((weak)) Maybe_Vector_BTree_int_User_pair_t Default_Maybe_Vector_BTree_int_User_pair_t () {
  return Nothing_Vector_BTree_int_User_pair_t ();
}
const Maybe_Vector_BTree_int_User_pair_t__H_Table * const get_Maybe_Vector_BTree_int_User_pair_t__H_Table ();
void free_Maybe_Vector_BTree_int_User_pair_t (Maybe_Vector_BTree_int_User_pair_t * this );
#endif /* __Maybe_Vector_BTree_int_User_pair_t__H_DECL__ */ 
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
  union { /* ciciliUnion599 */
    struct { /* ciciliStruct600 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct601 */
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
  union { /* ciciliUnion631 */
    struct { /* ciciliStruct632 */
      BTree_int_User * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct633 */
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
  union { /* ciciliUnion675 */
    struct { /* ciciliStruct676 */
      Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct677 */
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
#ifndef __StringBuffer_Rc_BTree_int_User__H_DECL__
#define __StringBuffer_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_StringBuffer_ctor_t__
#define __H___h_StringBuffer_ctor_t__
typedef enum __h_StringBuffer_ctor_t {
  __h_Freed_t = 0,
  __h_Buffered_t = 1
} __h_StringBuffer_ctor_t;
#endif /* __H___h_StringBuffer_ctor_t__ */ 
typedef struct StringBuffer_Rc_BTree_int_User StringBuffer_Rc_BTree_int_User ;
typedef void (*free_StringBuffer_Rc_BTree_int_User_t) (StringBuffer_Rc_BTree_int_User * this );
typedef struct StringBuffer_Rc_BTree_int_User__H_Table {
  free_StringBuffer_Rc_BTree_int_User_t freeData ;
    StringBuffer_Rc_BTree_int_User (*resize) (StringBuffer_Rc_BTree_int_User sb , size_t size );
    StringBuffer_Rc_BTree_int_User (*new) (size_t step );
    StringBuffer_Rc_BTree_int_User (*newCapacity) (size_t capacity , size_t step );
    StringBuffer_Rc_BTree_int_User (*copySlice) (StringBuffer_Rc_BTree_int_User sb , size_t cursor , size_t size );
    StringBuffer_Rc_BTree_int_User (*copy) (StringBuffer_Rc_BTree_int_User sb );
    StringBuffer_Rc_BTree_int_User (*put) (StringBuffer_Rc_BTree_int_User sb , const Rc_BTree_int_User data );
    StringBuffer_Rc_BTree_int_User (*print) (StringBuffer_Rc_BTree_int_User sb , const Rc_BTree_int_User * data , size_t len );
} StringBuffer_Rc_BTree_int_User__H_Table;
typedef struct StringBuffer_Rc_BTree_int_User {
  const StringBuffer_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion722 */
    struct { /* ciciliStruct723 */
      Rc_BTree_int_User * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } Buffered , _1 ;
    struct { /* ciciliStruct724 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_Rc_BTree_int_User;
StringBuffer_Rc_BTree_int_User MakeStringBuffer_Rc_BTree_int_User (Rc_BTree_int_User * buffer , size_t cursor , size_t size , size_t step );
StringBuffer_Rc_BTree_int_User FreedStringBuffer_Rc_BTree_int_User ();
__attribute__((weak)) StringBuffer_Rc_BTree_int_User Default_StringBuffer_Rc_BTree_int_User () {
  return FreedStringBuffer_Rc_BTree_int_User ();
}
StringBuffer_Rc_BTree_int_User resize_StringBuffer_Rc_BTree_int_User (StringBuffer_Rc_BTree_int_User sb , size_t size );
StringBuffer_Rc_BTree_int_User new_StringBuffer_Rc_BTree_int_User (size_t step );
StringBuffer_Rc_BTree_int_User newCapacity_StringBuffer_Rc_BTree_int_User (size_t capacity , size_t step );
StringBuffer_Rc_BTree_int_User copySlice_StringBuffer_Rc_BTree_int_User (StringBuffer_Rc_BTree_int_User sb , size_t cursor , size_t size );
StringBuffer_Rc_BTree_int_User copy_StringBuffer_Rc_BTree_int_User (StringBuffer_Rc_BTree_int_User sb );
StringBuffer_Rc_BTree_int_User put_StringBuffer_Rc_BTree_int_User (StringBuffer_Rc_BTree_int_User sb , const Rc_BTree_int_User data );
StringBuffer_Rc_BTree_int_User print_StringBuffer_Rc_BTree_int_User (StringBuffer_Rc_BTree_int_User sb , const Rc_BTree_int_User * data , size_t len );
const StringBuffer_Rc_BTree_int_User__H_Table * const get_StringBuffer_Rc_BTree_int_User__H_Table ();
void free_StringBuffer_Rc_BTree_int_User (StringBuffer_Rc_BTree_int_User * this );
#endif /* __StringBuffer_Rc_BTree_int_User__H_DECL__ */ 
typedef Rc_BTree_int_User * Vector_Rc_BTree_int_User_pointer_t ;
typedef struct ciciliKklsptonLqDyj4Hel1Tqn6d4ZHs_ {
  Vector_Rc_BTree_int_User_pointer_t __h_0_mem ;
  Vector_Rc_BTree_int_User_pointer_t __h_1_mem ;
} ciciliKklsptonLqDyj4Hel1Tqn6d4ZHs_;
typedef ciciliKklsptonLqDyj4Hel1Tqn6d4ZHs_ Vector_Rc_BTree_int_User_iterator_t ;
#ifndef __Vector_Rc_BTree_int_User__H_DECL__
#define __Vector_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Vector_ctor_t__
#define __H___h_Vector_ctor_t__
typedef enum __h_Vector_ctor_t {
  __h_None_t = 0,
  __h_Slice_t = 1,
  __h_Buffer_t = 2
} __h_Vector_ctor_t;
#endif /* __H___h_Vector_ctor_t__ */ 
typedef struct class_Vector_Rc_BTree_int_User class_Vector_Rc_BTree_int_User ;
typedef class_Vector_Rc_BTree_int_User * Vector_Rc_BTree_int_User_x ;
#ifndef __Maybe_Vector_Rc_BTree_int_User_x__H_DECL__
#define __Maybe_Vector_Rc_BTree_int_User_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Vector_Rc_BTree_int_User_x Maybe_Vector_Rc_BTree_int_User_x ;
typedef void (*free_Maybe_Vector_Rc_BTree_int_User_x_t) (Maybe_Vector_Rc_BTree_int_User_x * this );
typedef struct Maybe_Vector_Rc_BTree_int_User_x__H_Table {
  free_Maybe_Vector_Rc_BTree_int_User_x_t freeData ;
} Maybe_Vector_Rc_BTree_int_User_x__H_Table;
typedef struct Maybe_Vector_Rc_BTree_int_User_x {
  const Maybe_Vector_Rc_BTree_int_User_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion795 */
    struct { /* ciciliStruct796 */
      Vector_Rc_BTree_int_User_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct797 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Vector_Rc_BTree_int_User_x;
Maybe_Vector_Rc_BTree_int_User_x Just_Vector_Rc_BTree_int_User_x (Vector_Rc_BTree_int_User_x value );
Maybe_Vector_Rc_BTree_int_User_x Nothing_Vector_Rc_BTree_int_User_x ();
__attribute__((weak)) Maybe_Vector_Rc_BTree_int_User_x Default_Maybe_Vector_Rc_BTree_int_User_x () {
  return Nothing_Vector_Rc_BTree_int_User_x ();
}
const Maybe_Vector_Rc_BTree_int_User_x__H_Table * const get_Maybe_Vector_Rc_BTree_int_User_x__H_Table ();
void free_Maybe_Vector_Rc_BTree_int_User_x (Maybe_Vector_Rc_BTree_int_User_x * this );
#endif /* __Maybe_Vector_Rc_BTree_int_User_x__H_DECL__ */ 
#ifndef __Box_Vector_Rc_BTree_int_User__H_DECL__
#define __Box_Vector_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_Vector_Rc_BTree_int_User Box_Vector_Rc_BTree_int_User ;
typedef void (*free_Box_Vector_Rc_BTree_int_User_t) (Box_Vector_Rc_BTree_int_User * this );
typedef struct Box_Vector_Rc_BTree_int_User__H_Table {
  free_Box_Vector_Rc_BTree_int_User_t freeData ;
    Box_Vector_Rc_BTree_int_User (*new) (Vector_Rc_BTree_int_User_x pointer );
    Box_Vector_Rc_BTree_int_User (*clone) (Box_Vector_Rc_BTree_int_User rc );
    Maybe_Vector_Rc_BTree_int_User_x (*take) (Box_Vector_Rc_BTree_int_User * this );
    Maybe_Vector_Rc_BTree_int_User_x (*get) (Box_Vector_Rc_BTree_int_User rc );
} Box_Vector_Rc_BTree_int_User__H_Table;
typedef struct Box_Vector_Rc_BTree_int_User {
  const Box_Vector_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion827 */
    struct { /* ciciliStruct828 */
      Vector_Rc_BTree_int_User_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct829 */
    } Gone , _ ;
  } __h_data ;
} Box_Vector_Rc_BTree_int_User;
Box_Vector_Rc_BTree_int_User __h_Hold_Vector_Rc_BTree_int_User_x (Vector_Rc_BTree_int_User_x * pointer , int * count , size_t address );
Box_Vector_Rc_BTree_int_User Gone_Vector_Rc_BTree_int_User_x ();
__attribute__((weak)) Box_Vector_Rc_BTree_int_User Default_Box_Vector_Rc_BTree_int_User () {
  return Gone_Vector_Rc_BTree_int_User_x ();
}
Box_Vector_Rc_BTree_int_User new_Box_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User_x pointer );
Box_Vector_Rc_BTree_int_User clone_Box_Vector_Rc_BTree_int_User (Box_Vector_Rc_BTree_int_User rc );
Maybe_Vector_Rc_BTree_int_User_x take_Box_Vector_Rc_BTree_int_User (Box_Vector_Rc_BTree_int_User * this );
Maybe_Vector_Rc_BTree_int_User_x get_Box_Vector_Rc_BTree_int_User (Box_Vector_Rc_BTree_int_User rc );
const Box_Vector_Rc_BTree_int_User__H_Table * const get_Box_Vector_Rc_BTree_int_User__H_Table ();
void free_Box_Vector_Rc_BTree_int_User (Box_Vector_Rc_BTree_int_User * this );
#endif /* __Box_Vector_Rc_BTree_int_User__H_DECL__ */ 
typedef Box_Vector_Rc_BTree_int_User Vector_Rc_BTree_int_User ;
typedef void (*free_Vector_Rc_BTree_int_User_t) (Vector_Rc_BTree_int_User_x * this );
typedef struct Vector_Rc_BTree_int_User__H_Table {
  free_Vector_Rc_BTree_int_User_t freeData ;
    Vector_Rc_BTree_int_User_iterator_t (*iterator) (Vector_Rc_BTree_int_User vector );
    Vector_Rc_BTree_int_User (*resize) (Vector_Rc_BTree_int_User vector , size_t len );
    Vector_Rc_BTree_int_User (*pure) (size_t step );
    Vector_Rc_BTree_int_User (*pureCapacity) (size_t capacity , size_t step );
    Vector_Rc_BTree_int_User_pointer_t (*toArray) (Vector_Rc_BTree_int_User vector );
    Vector_Rc_BTree_int_User (*wrap) (const Rc_BTree_int_User item );
    size_t (*show) (CFile file , Vector_Rc_BTree_int_User vector );
    Vector_Rc_BTree_int_User (*copy) (Vector_Rc_BTree_int_User vector );
    Vector_Rc_BTree_int_User (*copySlice) (Vector_Rc_BTree_int_User vector , size_t pos , size_t len );
    Vector_Rc_BTree_int_User (*replaceAt) (Vector_Rc_BTree_int_User vector , Rc_BTree_int_User item , size_t index );
    Vector_Rc_BTree_int_User (*deleteAt) (Vector_Rc_BTree_int_User vector , size_t index );
    Vector_Rc_BTree_int_User (*insertAt) (Vector_Rc_BTree_int_User vector , Rc_BTree_int_User item , size_t index );
    Vector_Rc_BTree_int_User (*reverse) (Vector_Rc_BTree_int_User vector );
    Vector_Rc_BTree_int_User (*append) (Vector_Rc_BTree_int_User lvector , Vector_Rc_BTree_int_User rvector );
    Vector_Rc_BTree_int_User (*push) (Rc_BTree_int_User item , Vector_Rc_BTree_int_User vector );
    Vector_Rc_BTree_int_User (*take) (size_t len , Vector_Rc_BTree_int_User vector );
    Maybe_Rc_BTree_int_User (*last) (Vector_Rc_BTree_int_User vector );
    Vector_Rc_BTree_int_User (*init) (Vector_Rc_BTree_int_User vector );
    size_t (*hasLen) (Vector_Rc_BTree_int_User vector , size_t desired );
    size_t (*len) (Vector_Rc_BTree_int_User vector );
    Vector_Rc_BTree_int_User (*tail) (Vector_Rc_BTree_int_User vector );
    Vector_Rc_BTree_int_User (*drop) (size_t index , Vector_Rc_BTree_int_User vector );
    Maybe_Rc_BTree_int_User (*head) (Vector_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*nth) (size_t index , Vector_Rc_BTree_int_User vector );
} Vector_Rc_BTree_int_User__H_Table;
typedef struct class_Vector_Rc_BTree_int_User {
  const Vector_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion894 */
    struct { /* ciciliStruct895 */
      StringBuffer_Rc_BTree_int_User __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct896 */
      Vector_Rc_BTree_int_User __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct897 */
    } None , _ ;
  } __h_data ;
} class_Vector_Rc_BTree_int_User;
Vector_Rc_BTree_int_User Buffer_Rc_BTree_int_User (StringBuffer_Rc_BTree_int_User buffer );
Vector_Rc_BTree_int_User Slice_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector , size_t cursor , size_t size );
Vector_Rc_BTree_int_User None_Rc_BTree_int_User ();
__attribute__((weak)) Vector_Rc_BTree_int_User Default_Vector_Rc_BTree_int_User () {
  return None_Rc_BTree_int_User ();
}
Vector_Rc_BTree_int_User_iterator_t iterator_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector );
Vector_Rc_BTree_int_User resize_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector , size_t len );
Vector_Rc_BTree_int_User pure_Vector_Rc_BTree_int_User (size_t step );
Vector_Rc_BTree_int_User pureCapacity_Vector_Rc_BTree_int_User (size_t capacity , size_t step );
Vector_Rc_BTree_int_User_pointer_t toArray_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector );
Vector_Rc_BTree_int_User wrap_Vector_Rc_BTree_int_User (const Rc_BTree_int_User item );
size_t show_Vector_Rc_BTree_int_User (CFile file , Vector_Rc_BTree_int_User vector );
Vector_Rc_BTree_int_User copy_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector );
Vector_Rc_BTree_int_User copySlice_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector , size_t pos , size_t len );
Vector_Rc_BTree_int_User replaceAt_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector , Rc_BTree_int_User item , size_t index );
Vector_Rc_BTree_int_User deleteAt_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector , size_t index );
Vector_Rc_BTree_int_User insertAt_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector , Rc_BTree_int_User item , size_t index );
Vector_Rc_BTree_int_User reverse_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector );
Vector_Rc_BTree_int_User append_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User lvector , Vector_Rc_BTree_int_User rvector );
Vector_Rc_BTree_int_User push_Vector_Rc_BTree_int_User (Rc_BTree_int_User item , Vector_Rc_BTree_int_User vector );
Vector_Rc_BTree_int_User take_Vector_Rc_BTree_int_User (size_t len , Vector_Rc_BTree_int_User vector );
Maybe_Rc_BTree_int_User last_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector );
Vector_Rc_BTree_int_User init_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector );
size_t hasLen_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector , size_t desired );
size_t len_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector );
Vector_Rc_BTree_int_User tail_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector );
Vector_Rc_BTree_int_User drop_Vector_Rc_BTree_int_User (size_t index , Vector_Rc_BTree_int_User vector );
Maybe_Rc_BTree_int_User head_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User list );
Maybe_Rc_BTree_int_User nth_Vector_Rc_BTree_int_User (size_t index , Vector_Rc_BTree_int_User vector );
Vector_Rc_BTree_int_User__H_Table * const get_Vector_Rc_BTree_int_User__H_Table ();
void free_Vector_Rc_BTree_int_User_x (Vector_Rc_BTree_int_User_x * this );
#endif /* __Vector_Rc_BTree_int_User__H_DECL__ */ 
#ifndef __Maybe_Vector_Rc_BTree_int_User__H_DECL__
#define __Maybe_Vector_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Vector_Rc_BTree_int_User Maybe_Vector_Rc_BTree_int_User ;
typedef void (*free_Maybe_Vector_Rc_BTree_int_User_t) (Maybe_Vector_Rc_BTree_int_User * this );
typedef struct Maybe_Vector_Rc_BTree_int_User__H_Table {
  free_Maybe_Vector_Rc_BTree_int_User_t freeData ;
} Maybe_Vector_Rc_BTree_int_User__H_Table;
typedef struct Maybe_Vector_Rc_BTree_int_User {
  const Maybe_Vector_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1004 */
    struct { /* ciciliStruct1005 */
      Vector_Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1006 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Vector_Rc_BTree_int_User;
Maybe_Vector_Rc_BTree_int_User Just_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User value );
Maybe_Vector_Rc_BTree_int_User Nothing_Vector_Rc_BTree_int_User ();
__attribute__((weak)) Maybe_Vector_Rc_BTree_int_User Default_Maybe_Vector_Rc_BTree_int_User () {
  return Nothing_Vector_Rc_BTree_int_User ();
}
const Maybe_Vector_Rc_BTree_int_User__H_Table * const get_Maybe_Vector_Rc_BTree_int_User__H_Table ();
void free_Maybe_Vector_Rc_BTree_int_User (Maybe_Vector_Rc_BTree_int_User * this );
#endif /* __Maybe_Vector_Rc_BTree_int_User__H_DECL__ */ 
typedef Rc_BTree_int_User (*Rc_BTree_int_User_to_Rc_BTree_int_User_t) (Rc_BTree_int_User value );
#ifndef __Functor_Vector_Rc_BTree_int_User__H_DECL__
#define __Functor_Vector_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_Vector_Rc_BTree_int_User Functor_Vector_Rc_BTree_int_User ;
typedef void (*free_Functor_Vector_Rc_BTree_int_User_t) (Functor_Vector_Rc_BTree_int_User * this );
typedef struct Functor_Vector_Rc_BTree_int_User__H_Table {
  free_Functor_Vector_Rc_BTree_int_User_t freeData ;
    Vector_Rc_BTree_int_User (*fmap) (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , Vector_Rc_BTree_int_User input );
} Functor_Vector_Rc_BTree_int_User__H_Table;
typedef struct Functor_Vector_Rc_BTree_int_User {
  const Functor_Vector_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1041 */
    struct { /* ciciliStruct1042 */
    } Functor , _ ;
  } __h_data ;
} Functor_Vector_Rc_BTree_int_User;
Functor_Vector_Rc_BTree_int_User Functor_Vector_Rc_BTree_int_User_ctor ();
__attribute__((weak)) Functor_Vector_Rc_BTree_int_User Default_Functor_Vector_Rc_BTree_int_User () {
  return Functor_Vector_Rc_BTree_int_User_ctor ();
}
Vector_Rc_BTree_int_User fmap_Functor_Vector_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , Vector_Rc_BTree_int_User input );
const Functor_Vector_Rc_BTree_int_User__H_Table * const get_Functor_Vector_Rc_BTree_int_User__H_Table ();
void free_Functor_Vector_Rc_BTree_int_User (Functor_Vector_Rc_BTree_int_User * this );
#endif /* __Functor_Vector_Rc_BTree_int_User__H_DECL__ */ 
Functor_Vector_Rc_BTree_int_User get_Functor_Vector_Rc_BTree_int_User ();
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
    Either_BTree_int_User_Error_BTree_int_User (*pure) (int keys [], User values [], size_t len );
    size_t (*show) (CFile file , BTree_int_User tree );
    void (*traverse) (BTree_int_User tree ,   void (*callback) (BTree_int_User_pair_t * item , Bool hasNext ));
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
  union { /* ciciliUnion1097 */
    struct { /* ciciliStruct1098 */
      Vector_BTree_int_User_pair_t __h_0_mem ;
      Vector_Rc_BTree_int_User __h_1_mem ;
    } Branch , _2 ;
    struct { /* ciciliStruct1099 */
      Vector_BTree_int_User_pair_t __h_0_mem ;
      Vector_Rc_BTree_int_User __h_1_mem ;
    } Internal , _1 ;
    struct { /* ciciliStruct1100 */
      Vector_BTree_int_User_pair_t __h_0_mem ;
    } Leaf , _ ;
  } __h_data ;
} class_BTree_int_User;
BTree_int_User Branch_BTree_int_User (Vector_BTree_int_User_pair_t items , Vector_Rc_BTree_int_User children );
BTree_int_User Internal_BTree_int_User (Vector_BTree_int_User_pair_t items , Vector_Rc_BTree_int_User children );
BTree_int_User Leaf_BTree_int_User (Vector_BTree_int_User_pair_t items );
__attribute__((weak)) BTree_int_User Default_BTree_int_User (Vector_BTree_int_User_pair_t items ) {
  return Leaf_BTree_int_User (items );
}
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], size_t len );
size_t show_BTree_int_User (CFile file , BTree_int_User tree );
void traverse_BTree_int_User (BTree_int_User tree , void (*callback) (BTree_int_User_pair_t * item , Bool hasNext ));
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
#ifndef __BTree_int_User_Error__H_IMPL__
#define __BTree_int_User_Error__H_IMPL__
void show_BTree_int_User_Error (BTree_int_User_Error error ) {
  { /* cicili#Let1177 */
    // ----------
    ;
    ({ /* cicili#Let1179 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block1184 */
          printf ("invalid B-Tree object");
        }
      else
        { /* cicili#Let1189 */
          typeof((((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem )) order ;
          // ----------
          ;
          ({ /* cicili#Let1191 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* cicili#Progn1192 */
                  (order  =  (((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block1198 */
                printf ("invalid B-Tree order: %zu", order );
              }
            else
              { /* cicili#Let1203 */
                typeof((((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let1205 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* cicili#Progn1206 */
                        (item  =  (((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block1212 */
                      { /* cicili#Block1214 */
                        printf ("unique key: ");
                        ({ /* cicili#Let1221 */
                          typeof((item . __h_0_mem )) id ;
                          typeof((item . __h_1_mem )) __h_match1219_1_arg ;
                          typeof((__h_match1219_1_arg . __h_0_mem )) name ;
                          typeof((__h_match1219_1_arg . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let1223 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn1224 */
                                    (id  =  (item . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1226 */
                                    (__h_match1219_1_arg  =  (item . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn1228 */
                                      (name  =  (__h_match1219_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn1230 */
                                      (salary  =  (__h_match1219_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1235 */
                                (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                              }) : ({ /* cicili#Let1239 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1241 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* cicili#Let1246 */
                      typeof((((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem )) key ;
                      // ----------
                      ;
                      ({ /* cicili#Let1248 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* cicili#Progn1249 */
                              (key  =  (((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block1255 */
                            { /* cicili#Block1257 */
                              printf ("key not found: ");
                              fprintf (stdout , "%d", key );
                            }
                          }
                        else
                          { /* cicili#Let1265 */
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem )) item ;
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem )) index ;
                            // ----------
                            ;
                            ({ /* cicili#Let1267 */
                              bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* cicili#Progn1268 */
                                      (item  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn1270 */
                                      (index  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem ) );
                                      true ;
                                    }) ) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block1276 */
                                  { /* cicili#Block1278 */
                                    printf ("dead child at index: %zu of item: ", index );
                                    ({ /* cicili#Let1285 */
                                      typeof((item . __h_0_mem )) id ;
                                      typeof((item . __h_1_mem )) __h_match1283_1_arg ;
                                      typeof((__h_match1283_1_arg . __h_0_mem )) name ;
                                      typeof((__h_match1283_1_arg . __h_1_mem )) salary ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let1287 */
                                        bool __h_case_result  = (true  &&  ((({ /* cicili#Progn1288 */
                                                (id  =  (item . __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn1290 */
                                                (__h_match1283_1_arg  =  (item . __h_1_mem ) );
                                                true ;
                                              }) ) &&  (true  &&  (({ /* cicili#Progn1292 */
                                                  (name  =  (__h_match1283_1_arg . __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn1294 */
                                                  (salary  =  (__h_match1283_1_arg . __h_1_mem ) );
                                                  true ;
                                                }) ) ) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn1299 */
                                            (fprintf (stdout , "(id: %d, name: ", id ) +  show_String (stdout , name ) +  fprintf (stdout , ", salary: %d)", salary ) );
                                          }) : ({ /* cicili#Let1303 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn1305 */
                                              0;
                                            });
                                          }));
                                      });
                                    });
                                  }
                                }
                              else
                                { /* cicili#Let1310 */
                                  typeof((((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem )) branch ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let1312 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* cicili#Progn1313 */
                                          (branch  =  (((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block1319 */
                                        { /* cicili#Block1321 */
                                          printf ("invalid branch: ");
                                          (branch -> __h_table -> show )(stdout , branch );
                                        }
                                      }
                                    else
                                      { /* cicili#Let1328 */
                                        typeof((((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem )) reason ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1330 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* cicili#Progn1331 */
                                                (reason  =  (((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block1337 */
                                              printf ("borrow error: %s", reason );
                                            }
                                          else
                                            { /* cicili#Let1342 */
                                              // ----------
                                              ;
                                              { /* cicili#Block1344 */
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
  { /* cicili#Let1356 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (size_t order ) {
  { /* cicili#Let1361 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item ) {
  { /* cicili#Let1366 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key ) {
  { /* cicili#Let1372 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , size_t index ) {
  { /* cicili#Let1377 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch ) {
  { /* cicili#Let1383 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason ) {
  { /* cicili#Let1388 */
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
  { /* cicili#Let1404 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* cicili#Let1409 */
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
  { /* cicili#Let1425 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let1430 */
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
  { /* cicili#Let1448 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
  { /* cicili#Let1453 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User_pair_t__H_IMPL__ */ 
bool null_terminated_StringBuffer_BTree_int_User_pair_t  = false ;
bool is_constant_StringBuffer_BTree_int_User_pair_t  = false ;
#ifndef __StringBuffer_BTree_int_User_pair_t__H_IMPL__
#define __StringBuffer_BTree_int_User_pair_t__H_IMPL__
StringBuffer_BTree_int_User_pair_t resize_StringBuffer_BTree_int_User_pair_t (StringBuffer_BTree_int_User_pair_t sb , size_t len ) {
  return ({ /* cicili#Let1467 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let1469 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn1470 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1472 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1474 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1479 */
            ({ /* cicili#Let1481 */
              BTree_int_User_pair_t * new_buffer  = realloc (buffer , (len  *  sizeof(BTree_int_User_pair_t) ));
              size_t new_cursor  = (((cursor  <  len  )) ? cursor  : len );
              // ----------
              MakeStringBuffer_BTree_int_User_pair_t (new_buffer , new_cursor , len , step );
            });
          }) : ({ /* cicili#Let1486 */
            // ----------
            ;
            ({ /* cicili#Progn1488 */
              FreedStringBuffer_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
StringBuffer_BTree_int_User_pair_t new_StringBuffer_BTree_int_User_pair_t (size_t step ) {
  return newCapacity_StringBuffer_BTree_int_User_pair_t (step , step );
}
StringBuffer_BTree_int_User_pair_t newCapacity_StringBuffer_BTree_int_User_pair_t (size_t capacity , size_t step ) {
  return ({ /* cicili#Let1499 */
      BTree_int_User_pair_t * buffer  = malloc ((capacity  *  sizeof(BTree_int_User_pair_t) ));
      StringBuffer_BTree_int_User_pair_t sb  = MakeStringBuffer_BTree_int_User_pair_t (buffer , 0, capacity , step );
      // ----------
      sb ;
    });
}
StringBuffer_BTree_int_User_pair_t copySlice_StringBuffer_BTree_int_User_pair_t (StringBuffer_BTree_int_User_pair_t sb , size_t pos , size_t len ) {
  return ({ /* cicili#Let1508 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let1510 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn1511 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1513 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1515 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1520 */
            ({ /* cicili#Let1522 */
              StringBuffer_BTree_int_User_pair_t new_sb  = newCapacity_StringBuffer_BTree_int_User_pair_t (len , step );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_BTree_int_User_pair_t (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_BTree_int_User_pair_t (new_sb , (buffer  +  pos  ), (((pos  <=  cursor  )) ? (cursor  -  pos  ) : 0)));
            });
          }) : ({ /* cicili#Let1532 */
            // ----------
            ;
            ({ /* cicili#Progn1534 */
              FreedStringBuffer_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
StringBuffer_BTree_int_User_pair_t copy_StringBuffer_BTree_int_User_pair_t (StringBuffer_BTree_int_User_pair_t sb ) {
  return ({ /* cicili#Let1543 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let1545 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn1546 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn1548 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn1550 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1552 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1557 */
            ({ /* cicili#Let1559 */
              StringBuffer_BTree_int_User_pair_t new_sb  = newCapacity_StringBuffer_BTree_int_User_pair_t (size , step );
              // ----------
              print_StringBuffer_BTree_int_User_pair_t (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let1566 */
            // ----------
            ;
            ({ /* cicili#Progn1568 */
              FreedStringBuffer_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
StringBuffer_BTree_int_User_pair_t put_StringBuffer_BTree_int_User_pair_t (StringBuffer_BTree_int_User_pair_t sb , const BTree_int_User_pair_t data ) {
  return print_StringBuffer_BTree_int_User_pair_t (sb , (&data ), 1);
}
StringBuffer_BTree_int_User_pair_t print_StringBuffer_BTree_int_User_pair_t (StringBuffer_BTree_int_User_pair_t sb , const BTree_int_User_pair_t * data , size_t len ) {
  return ({ /* cicili#Let1582 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let1584 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn1585 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn1587 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn1589 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1591 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1596 */
            ({ /* cicili#Let1598 */
              size_t blen  = (len  *  sizeof(BTree_int_User_pair_t) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block1602 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let1604 */
                    BTree_int_User_pair_t * new_buffer  = realloc (buffer , (size  *  sizeof(BTree_int_User_pair_t) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_BTree_int_User_pair_t (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let1609 */
            // ----------
            ;
            ({ /* cicili#Progn1611 */
              FreedStringBuffer_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
void free_StringBuffer_BTree_int_User_pair_t (StringBuffer_BTree_int_User_pair_t * this ) {
  { /* cicili#Let1619 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let1621 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1622 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block1628 */
          { /* cicili#Block1630 */
            free (buffer );
            (*this ) = FreedStringBuffer_BTree_int_User_pair_t ();
          }
        }
    });
  }
}
const StringBuffer_BTree_int_User_pair_t__H_Table * const get_StringBuffer_BTree_int_User_pair_t__H_Table () {
  static const StringBuffer_BTree_int_User_pair_t__H_Table table  = { free_StringBuffer_BTree_int_User_pair_t , resize_StringBuffer_BTree_int_User_pair_t , new_StringBuffer_BTree_int_User_pair_t , newCapacity_StringBuffer_BTree_int_User_pair_t , copySlice_StringBuffer_BTree_int_User_pair_t , copy_StringBuffer_BTree_int_User_pair_t , put_StringBuffer_BTree_int_User_pair_t , print_StringBuffer_BTree_int_User_pair_t };
  return (&table );
}
StringBuffer_BTree_int_User_pair_t MakeStringBuffer_BTree_int_User_pair_t (BTree_int_User_pair_t * buffer , size_t cursor , size_t size , size_t step ) {
  { /* cicili#Let1640 */
    StringBuffer_BTree_int_User_pair_t instance  = ((StringBuffer_BTree_int_User_pair_t){ get_StringBuffer_BTree_int_User_pair_t__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_BTree_int_User_pair_t FreedStringBuffer_BTree_int_User_pair_t () {
  { /* cicili#Let1645 */
    StringBuffer_BTree_int_User_pair_t instance  = ((StringBuffer_BTree_int_User_pair_t){ get_StringBuffer_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __StringBuffer_BTree_int_User_pair_t__H_IMPL__ */ 
bool null_terminated_Vector_BTree_int_User_pair_t  = false ;
bool is_constant_Vector_BTree_int_User_pair_t  = false ;
#ifndef __Vector_BTree_int_User_pair_t__H_IMPL__
#define __Vector_BTree_int_User_pair_t__H_IMPL__
#ifndef __Maybe_Vector_BTree_int_User_pair_t_x__H_IMPL__
#define __Maybe_Vector_BTree_int_User_pair_t_x__H_IMPL__
void free_Maybe_Vector_BTree_int_User_pair_t_x (Maybe_Vector_BTree_int_User_pair_t_x * this ) {
}
const Maybe_Vector_BTree_int_User_pair_t_x__H_Table * const get_Maybe_Vector_BTree_int_User_pair_t_x__H_Table () {
  static const Maybe_Vector_BTree_int_User_pair_t_x__H_Table table  = { free_Maybe_Vector_BTree_int_User_pair_t_x };
  return (&table );
}
Maybe_Vector_BTree_int_User_pair_t_x Just_Vector_BTree_int_User_pair_t_x (Vector_BTree_int_User_pair_t_x value ) {
  { /* cicili#Let1668 */
    Maybe_Vector_BTree_int_User_pair_t_x instance  = ((Maybe_Vector_BTree_int_User_pair_t_x){ get_Maybe_Vector_BTree_int_User_pair_t_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_BTree_int_User_pair_t_x Nothing_Vector_BTree_int_User_pair_t_x () {
  { /* cicili#Let1673 */
    Maybe_Vector_BTree_int_User_pair_t_x instance  = ((Maybe_Vector_BTree_int_User_pair_t_x){ get_Maybe_Vector_BTree_int_User_pair_t_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_BTree_int_User_pair_t_x__H_IMPL__ */ 
#ifndef __Box_Vector_BTree_int_User_pair_t__H_IMPL__
#define __Box_Vector_BTree_int_User_pair_t__H_IMPL__
Box_Vector_BTree_int_User_pair_t new_Box_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t_x pointer ) {
  return ({ /* cicili#Let1680 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((Vector_BTree_int_User_pair_t_x *)malloc (sizeof(Vector_BTree_int_User_pair_t_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_Vector_BTree_int_User_pair_t_x (holder , count , ((size_t)pointer ));
    });
}
Box_Vector_BTree_int_User_pair_t clone_Box_Vector_BTree_int_User_pair_t (Box_Vector_BTree_int_User_pair_t rc ) {
  return ({ /* cicili#Let1689 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let1691 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1692 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1694 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1696 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1701 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn1704 */
                (++(*count ));
                __h_Hold_Vector_BTree_int_User_pair_t_x (pointer , count , address );
              }) : Gone_Vector_BTree_int_User_pair_t_x ());
          }) : ({ /* cicili#Let1710 */
            // ----------
            ;
            ({ /* cicili#Progn1712 */
              Gone_Vector_BTree_int_User_pair_t_x ();
            });
          }));
      });
    });
}
Maybe_Vector_BTree_int_User_pair_t_x take_Box_Vector_BTree_int_User_pair_t (Box_Vector_BTree_int_User_pair_t * this ) {
  return ({ /* cicili#Let1720 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let1722 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1723 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1725 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1727 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1732 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let1736 */
                __auto_type result  = Just_Vector_BTree_int_User_pair_t_x ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_Vector_BTree_int_User_pair_t_x ());
          }) : ({ /* cicili#Let1744 */
            // ----------
            ;
            ({ /* cicili#Progn1746 */
              Nothing_Vector_BTree_int_User_pair_t_x ();
            });
          }));
      });
    });
}
Maybe_Vector_BTree_int_User_pair_t_x get_Box_Vector_BTree_int_User_pair_t (Box_Vector_BTree_int_User_pair_t rc ) {
  return ({ /* cicili#Let1754 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let1756 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1757 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1759 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1761 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1766 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_BTree_int_User_pair_t_x ((*pointer )) : Nothing_Vector_BTree_int_User_pair_t_x ());
          }) : ({ /* cicili#Let1773 */
            // ----------
            ;
            ({ /* cicili#Progn1775 */
              Nothing_Vector_BTree_int_User_pair_t_x ();
            });
          }));
      });
    });
}
void free_Box_Vector_BTree_int_User_pair_t (Box_Vector_BTree_int_User_pair_t * this ) {
  { /* cicili#Let1784 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let1786 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1787 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1789 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn1791 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block1797 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block1800 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_BTree_int_User_pair_t_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block1808 */
                if ((*count ) ==  1 )
                  { /* cicili#Block1811 */
                    free_Vector_BTree_int_User_pair_t_x (pointer );
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_Vector_BTree_int_User_pair_t_x ();
                  }
                else
                  (--(*count ));
              }
              }        }
      else
        { /* cicili#Let1821 */
          // ----------
          ;
          ({ /* cicili#Let1823 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block1828 */
              }
          });
        }
    });
  }
}
const Box_Vector_BTree_int_User_pair_t__H_Table * const get_Box_Vector_BTree_int_User_pair_t__H_Table () {
  static const Box_Vector_BTree_int_User_pair_t__H_Table table  = { free_Box_Vector_BTree_int_User_pair_t , new_Box_Vector_BTree_int_User_pair_t , clone_Box_Vector_BTree_int_User_pair_t , take_Box_Vector_BTree_int_User_pair_t , get_Box_Vector_BTree_int_User_pair_t };
  return (&table );
}
Box_Vector_BTree_int_User_pair_t __h_Hold_Vector_BTree_int_User_pair_t_x (Vector_BTree_int_User_pair_t_x * pointer , int * count , size_t address ) {
  { /* cicili#Let1839 */
    Box_Vector_BTree_int_User_pair_t instance  = ((Box_Vector_BTree_int_User_pair_t){ get_Box_Vector_BTree_int_User_pair_t__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_Vector_BTree_int_User_pair_t Gone_Vector_BTree_int_User_pair_t_x () {
  { /* cicili#Let1844 */
    Box_Vector_BTree_int_User_pair_t instance  = ((Box_Vector_BTree_int_User_pair_t){ get_Box_Vector_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Vector_BTree_int_User_pair_t__H_IMPL__ */ 
Vector_BTree_int_User_pair_t_iterator_t iterator_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector ) {
  return ({ /* cicili#Let1851 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1855 */
        __auto_type match1854  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1854 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1858 */
          bool __h_case_result  = (true  &&  (((match1854 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1859 */
                (unboxed  =  (((match1854 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1864 */
              ({ /* cicili#Let1868 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1870 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1871 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1876 */
                      ({ /* cicili#Let1880 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let1882 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1883 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1885 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1890 */
                              ((Vector_BTree_int_User_pair_t_iterator_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let1895 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1897 */
                                ((Vector_BTree_int_User_pair_t_iterator_t){ NULL , NULL });
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1902 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1904 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1905 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1907 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1909 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1914 */
                            ({ /* cicili#Let1916 */
                              Vector_BTree_int_User_pair_t_iterator_t iter  = iterator_Vector_BTree_int_User_pair_t (vec );
                              // ----------
                              ({ /* cicili#Let1922 */
                                typeof((iter . __h_0_mem )) begin ;
                                // ----------
                                ;
                                ({ /* cicili#Let1924 */
                                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn1925 */
                                      (begin  =  (iter . __h_0_mem ) );
                                      true ;
                                    }) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1930 */
                                      ((Vector_BTree_int_User_pair_t_iterator_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let1935 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1937 */
                                        ((Vector_BTree_int_User_pair_t_iterator_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1942 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1944 */
                              ((Vector_BTree_int_User_pair_t_iterator_t){ NULL , NULL });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1949 */
              // ----------
              ;
              ({ /* cicili#Progn1951 */
                ((Vector_BTree_int_User_pair_t_iterator_t){ NULL , NULL });
              });
            }));
        });
      });
    });
}
Vector_BTree_int_User_pair_t resize_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector , size_t len ) {
  return ({ /* cicili#Let1957 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1961 */
        __auto_type match1960  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1960 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1964 */
          bool __h_case_result  = (true  &&  (((match1960 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1965 */
                (unboxed  =  (((match1960 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1970 */
              ({ /* cicili#Let1974 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1976 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1977 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1982 */
                      ({ /* cicili#Let1986 */
                        __auto_type match1985  = take_Box_Vector_BTree_int_User_pair_t ((&vector ));
                        typeof((((match1985 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let1989 */
                          bool __h_case_result  = (true  &&  (((match1985 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1990 */
                                (ptr  =  (((match1985 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1995 */
                              ({ /* cicili#Progn1997 */
                                free (((void *)ptr ));
                                Buffer_BTree_int_User_pair_t (resize_StringBuffer_BTree_int_User_pair_t (sb , len ));
                              });
                            }) : ({ /* cicili#Let2003 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2005 */
                                None_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2010 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let2012 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn2013 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn2015 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2020 */
                            ({ /* cicili#Let2023 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2027 */
                                __auto_type match2026  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2026 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2030 */
                                  bool __h_case_result  = (true  &&  (((match2026 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2031 */
                                        (unboxed  =  (((match2026 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2036 */
                                      ({ /* cicili#Let2040 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2042 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2043 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2048 */
                                              ({ /* cicili#Let2052 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2054 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2055 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2057 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2062 */
                                                      ({ /* cicili#Let2064 */
                                                        StringBuffer_BTree_int_User_pair_t new_sb  = newCapacity_StringBuffer_BTree_int_User_pair_t (len , step );
                                                        // ----------
                                                        Buffer_BTree_int_User_pair_t (print_StringBuffer_BTree_int_User_pair_t (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let2072 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn2074 */
                                                        None_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2079 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2081 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2082 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2087 */
                                                    resize_Vector_BTree_int_User_pair_t (veci , len );
                                                  }) : ({ /* cicili#Let2092 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2094 */
                                                      clone_Box_Vector_BTree_int_User_pair_t (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2099 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2101 */
                                        None_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2106 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2108 */
                              clone_Box_Vector_BTree_int_User_pair_t (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2113 */
              // ----------
              ;
              ({ /* cicili#Progn2115 */
                None_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
Vector_BTree_int_User_pair_t pure_Vector_BTree_int_User_pair_t (size_t step ) {
  return pureCapacity_Vector_BTree_int_User_pair_t (step , step );
}
Vector_BTree_int_User_pair_t pureCapacity_Vector_BTree_int_User_pair_t (size_t capacity , size_t step ) {
  return Buffer_BTree_int_User_pair_t (newCapacity_StringBuffer_BTree_int_User_pair_t (capacity , step ));
}
Vector_BTree_int_User_pair_t_pointer_t toArray_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector ) {
  return ({ /* cicili#Let2129 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2133 */
        __auto_type match2132  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2132 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2136 */
          bool __h_case_result  = (true  &&  (((match2132 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2137 */
                (unboxed  =  (((match2132 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2142 */
              ({ /* cicili#Let2146 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2148 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2149 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2154 */
                      ({ /* cicili#Let2158 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let2160 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn2161 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2166 */
                              buffer ;
                            }) : ({ /* cicili#Let2170 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2172 */
                                NULL ;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2176 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let2178 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn2179 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn2181 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2186 */
                            ({ /* cicili#Let2189 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let2193 */
                                __auto_type match2192  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2192 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2196 */
                                  bool __h_case_result  = (true  &&  (((match2192 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2197 */
                                        (unboxed  =  (((match2192 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2202 */
                                      ({ /* cicili#Let2206 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2208 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2209 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2214 */
                                              ({ /* cicili#Let2218 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2220 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn2221 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2226 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let2230 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn2232 */
                                                        NULL ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2236 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2238 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn2239 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2241 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2246 */
                                                    (toArray_Vector_BTree_int_User_pair_t (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let2251 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2253 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2257 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2259 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2263 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2265 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2269 */
              // ----------
              ;
              ({ /* cicili#Progn2271 */
                NULL ;
              });
            }));
        });
      });
    });
}
Vector_BTree_int_User_pair_t wrap_Vector_BTree_int_User_pair_t (const BTree_int_User_pair_t item ) {
  return ({ /* cicili#Let2276 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2278 */
        __auto_type new_vec  = pureCapacity_Vector_BTree_int_User_pair_t (16, 16);
        // ----------
        ((void)((new_vec . __h_table )-> freeData ));
        new_vec ;
      });
      // ----------
      push_Vector_BTree_int_User_pair_t (item , new_vec );
    });
}
size_t show_Vector_BTree_int_User_pair_t (CFile file , Vector_BTree_int_User_pair_t vector ) {
  auto size_t show_ (size_t index , Vector_BTree_int_User_pair_t vector );
  size_t showWithSize (size_t index , size_t size , Vector_BTree_int_User_pair_t vector ) {
    return ({ /* cicili#Let2288 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let2292 */
          __auto_type match2291  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match2291 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let2295 */
            bool __h_case_result  = (true  &&  (((match2291 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2296 */
                  (unboxed  =  (((match2291 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn2301 */
                ({ /* cicili#Let2305 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let2307 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2308 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn2313 */
                        ({ /* cicili#Let2317 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let2319 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn2320 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2325 */
                                ({ /* cicili#Let2327 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  ({ /* cicili#Let2336 */
                                              __auto_type match2334  = (*(buffer  +  counter  ));
                                              typeof((match2334 . __h_0_mem )) id ;
                                              typeof((match2334 . __h_1_mem )) __h_match2334_1_arg ;
                                              typeof((__h_match2334_1_arg . __h_0_mem )) name ;
                                              typeof((__h_match2334_1_arg . __h_1_mem )) salary ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2338 */
                                                bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2339 */
                                                        (id  =  (match2334 . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2341 */
                                                        (__h_match2334_1_arg  =  (match2334 . __h_1_mem ) );
                                                        true ;
                                                      }) ) &&  (true  &&  (({ /* cicili#Progn2343 */
                                                          (name  =  (__h_match2334_1_arg . __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2345 */
                                                          (salary  =  (__h_match2334_1_arg . __h_1_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2350 */
                                                    (fprintf (file , "(id: %d, name: ", id ) +  show_String (file , name ) +  fprintf (file , ", salary: %d)", salary ) );
                                                  }) : ({ /* cicili#Let2354 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2356 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            }) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let2360 */
                                // ----------
                                ;
                                ({ /* cicili#Progn2362 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let2366 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let2368 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2369 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2371 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn2373 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2378 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let2382 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2384 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let2388 */
                // ----------
                ;
                ({ /* cicili#Progn2390 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , Vector_BTree_int_User_pair_t vector ) {
    return ({ /* cicili#Let2394 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let2398 */
          __auto_type match2397  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match2397 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let2401 */
            bool __h_case_result  = (true  &&  (((match2397 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2402 */
                  (unboxed  =  (((match2397 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn2407 */
                ({ /* cicili#Let2411 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let2413 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2414 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn2419 */
                        ({ /* cicili#Let2423 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let2425 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2426 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2428 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2433 */
                                ({ /* cicili#Let2435 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  ({ /* cicili#Let2444 */
                                              __auto_type match2442  = (*(buffer  +  counter  ));
                                              typeof((match2442 . __h_0_mem )) id ;
                                              typeof((match2442 . __h_1_mem )) __h_match2442_1_arg ;
                                              typeof((__h_match2442_1_arg . __h_0_mem )) name ;
                                              typeof((__h_match2442_1_arg . __h_1_mem )) salary ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2446 */
                                                bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2447 */
                                                        (id  =  (match2442 . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2449 */
                                                        (__h_match2442_1_arg  =  (match2442 . __h_1_mem ) );
                                                        true ;
                                                      }) ) &&  (true  &&  (({ /* cicili#Progn2451 */
                                                          (name  =  (__h_match2442_1_arg . __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2453 */
                                                          (salary  =  (__h_match2442_1_arg . __h_1_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2458 */
                                                    (fprintf (file , "(id: %d, name: ", id ) +  show_String (file , name ) +  fprintf (file , ", salary: %d)", salary ) );
                                                  }) : ({ /* cicili#Let2462 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2464 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            }) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let2468 */
                                // ----------
                                ;
                                ({ /* cicili#Progn2470 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let2474 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let2476 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2477 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2479 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn2481 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2486 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let2490 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2492 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let2496 */
                // ----------
                ;
                ({ /* cicili#Progn2498 */
                  0;
                });
              }));
          });
        });
      });
  }
  return show_ (0, vector );
}
Vector_BTree_int_User_pair_t copy_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector ) {
  return ({ /* cicili#Let2503 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2507 */
        __auto_type match2506  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2506 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2510 */
          bool __h_case_result  = (true  &&  (((match2506 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2511 */
                (unboxed  =  (((match2506 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2516 */
              ({ /* cicili#Let2520 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2522 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2523 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2528 */
                      ({ /* cicili#Let2532 */
                        // ----------
                        ;
                        ({ /* cicili#Let2534 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2538 */
                              Buffer_BTree_int_User_pair_t (copy_StringBuffer_BTree_int_User_pair_t (sb ));
                            }) : ({ /* cicili#Let2544 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2546 */
                                None_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2551 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2553 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2554 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2556 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2558 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2563 */
                            ({ /* cicili#Let2566 */
                              __auto_type __h_matchbox  = vec ;
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
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2585 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2586 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2591 */
                                              ({ /* cicili#Let2595 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2597 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2601 */
                                                      Buffer_BTree_int_User_pair_t (copySlice_StringBuffer_BTree_int_User_pair_t (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let2607 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn2609 */
                                                        None_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2614 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2616 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2617 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2622 */
                                                    copySlice_Vector_BTree_int_User_pair_t (veci , cur , size );
                                                  }) : ({ /* cicili#Let2627 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2629 */
                                                      None_BTree_int_User_pair_t ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2634 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2636 */
                                        None_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2641 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2643 */
                              None_BTree_int_User_pair_t ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2648 */
              // ----------
              ;
              ({ /* cicili#Progn2650 */
                None_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
Vector_BTree_int_User_pair_t copySlice_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector , size_t pos , size_t len ) {
  return ({ /* cicili#Let2656 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2660 */
        __auto_type match2659  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2659 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2663 */
          bool __h_case_result  = (true  &&  (((match2659 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2664 */
                (unboxed  =  (((match2659 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2669 */
              ({ /* cicili#Let2673 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2675 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2676 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2681 */
                      ({ /* cicili#Let2685 */
                        // ----------
                        ;
                        ({ /* cicili#Let2687 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2691 */
                              Buffer_BTree_int_User_pair_t (copySlice_StringBuffer_BTree_int_User_pair_t (sb , pos , len ));
                            }) : ({ /* cicili#Let2697 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2699 */
                                None_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2704 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let2706 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn2707 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn2709 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2714 */
                            ({ /* cicili#Let2717 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2721 */
                                __auto_type match2720  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2720 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2724 */
                                  bool __h_case_result  = (true  &&  (((match2720 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2725 */
                                        (unboxed  =  (((match2720 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2730 */
                                      ({ /* cicili#Let2734 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2736 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2737 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2742 */
                                              ({ /* cicili#Let2746 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2748 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2752 */
                                                      Buffer_BTree_int_User_pair_t (copySlice_StringBuffer_BTree_int_User_pair_t (sbs , (cur  +  pos  ), len ));
                                                    }) : ({ /* cicili#Let2758 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn2760 */
                                                        None_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2765 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2767 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2768 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2773 */
                                                    copySlice_Vector_BTree_int_User_pair_t (veci , (cur  +  pos  ), len );
                                                  }) : ({ /* cicili#Let2778 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2780 */
                                                      None_BTree_int_User_pair_t ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2785 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2787 */
                                        None_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2792 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2794 */
                              None_BTree_int_User_pair_t ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2799 */
              // ----------
              ;
              ({ /* cicili#Progn2801 */
                None_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
Vector_BTree_int_User_pair_t replaceAt_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector , BTree_int_User_pair_t item , size_t index ) {
  return ({ /* cicili#Let2807 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2811 */
        __auto_type match2810  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2810 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2814 */
          bool __h_case_result  = (true  &&  (((match2810 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2815 */
                (unboxed  =  (((match2810 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2820 */
              ({ /* cicili#Let2824 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2826 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2827 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2832 */
                      ({ /* cicili#Let2836 */
                        __auto_type match2835  = take_Box_Vector_BTree_int_User_pair_t ((&vector ));
                        typeof((((match2835 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let2839 */
                          bool __h_case_result  = (true  &&  (((match2835 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2840 */
                                (ptr  =  (((match2835 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2845 */
                              ({ /* cicili#Progn2847 */
                                free (((void *)ptr ));
                                ({ /* cicili#Let2851 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2853 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2854 */
                                            (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn2856 */
                                            (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn2861 */
                                        (((index  <  cursor  )) ? ({ /* cicili#Progn2864 */
                                            (*(buffer  +  index  )) = item ;
                                            Buffer_BTree_int_User_pair_t (sb );
                                          }) : Buffer_BTree_int_User_pair_t (sb ));
                                      }) : ({ /* cicili#Let2870 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn2872 */
                                          clone_Box_Vector_BTree_int_User_pair_t (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let2877 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2879 */
                                None_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2884 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2886 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2887 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2889 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2891 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2896 */
                            ({ /* cicili#Let2899 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2903 */
                                __auto_type match2902  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2902 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2906 */
                                  bool __h_case_result  = (true  &&  (((match2902 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2907 */
                                        (unboxed  =  (((match2902 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2912 */
                                      ({ /* cicili#Let2916 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2918 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2919 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2924 */
                                              ({ /* cicili#Let2928 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2930 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2931 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2933 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2938 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2941 */
                                                          StringBuffer_BTree_int_User_pair_t new_sb  = newCapacity_StringBuffer_BTree_int_User_pair_t (size , step );
                                                          // ----------
                                                          Buffer_BTree_int_User_pair_t (print_StringBuffer_BTree_int_User_pair_t (put_StringBuffer_BTree_int_User_pair_t (print_StringBuffer_BTree_int_User_pair_t (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2951 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn2953 */
                                                        None_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2958 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2960 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2961 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2966 */
                                                    replaceAt_Vector_BTree_int_User_pair_t (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let2971 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2973 */
                                                      clone_Box_Vector_BTree_int_User_pair_t (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2978 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2980 */
                                        None_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2985 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2987 */
                              clone_Box_Vector_BTree_int_User_pair_t (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2992 */
              // ----------
              ;
              ({ /* cicili#Progn2994 */
                None_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
Vector_BTree_int_User_pair_t deleteAt_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector , size_t index ) {
  return ({ /* cicili#Let3000 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3004 */
        __auto_type match3003  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3003 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3007 */
          bool __h_case_result  = (true  &&  (((match3003 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3008 */
                (unboxed  =  (((match3003 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3013 */
              ({ /* cicili#Let3017 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3019 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3020 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3025 */
                      ({ /* cicili#Let3029 */
                        __auto_type match3028  = take_Box_Vector_BTree_int_User_pair_t ((&vector ));
                        typeof((((match3028 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let3032 */
                          bool __h_case_result  = (true  &&  (((match3028 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3033 */
                                (ptr  =  (((match3028 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3038 */
                              ({ /* cicili#Progn3040 */
                                free (((void *)ptr ));
                                ({ /* cicili#Let3044 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                                  typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let3046 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn3047 */
                                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn3049 */
                                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                                true ;
                                              }) ) &&  ({ /* cicili#Progn3051 */
                                              (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn3053 */
                                            (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn3058 */
                                        ({ /* cicili#Progn3060 */
                                          for (size_t i  = index ; (i  <  cursor  ); (++i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                          }
                                          Buffer_BTree_int_User_pair_t (MakeStringBuffer_BTree_int_User_pair_t (buffer , (cursor  -  1 ), size , step ));
                                        });
                                      }) : ({ /* cicili#Let3068 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn3070 */
                                          clone_Box_Vector_BTree_int_User_pair_t (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let3075 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3077 */
                                None_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3082 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3084 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3085 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3087 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3089 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3094 */
                            ({ /* cicili#Let3097 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let3101 */
                                __auto_type match3100  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match3100 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let3104 */
                                  bool __h_case_result  = (true  &&  (((match3100 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3105 */
                                        (unboxed  =  (((match3100 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn3110 */
                                      ({ /* cicili#Let3114 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let3116 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3117 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn3122 */
                                              ({ /* cicili#Let3126 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let3128 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3129 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn3131 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn3136 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let3139 */
                                                          StringBuffer_BTree_int_User_pair_t new_sb  = newCapacity_StringBuffer_BTree_int_User_pair_t ((size  -  1 ), step );
                                                          // ----------
                                                          Buffer_BTree_int_User_pair_t (print_StringBuffer_BTree_int_User_pair_t (print_StringBuffer_BTree_int_User_pair_t (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let3148 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn3150 */
                                                        None_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let3155 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let3157 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3158 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn3163 */
                                                    deleteAt_Vector_BTree_int_User_pair_t (veci , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let3168 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn3170 */
                                                      clone_Box_Vector_BTree_int_User_pair_t (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let3175 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3177 */
                                        None_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let3182 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3184 */
                              clone_Box_Vector_BTree_int_User_pair_t (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3189 */
              // ----------
              ;
              ({ /* cicili#Progn3191 */
                None_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
Vector_BTree_int_User_pair_t insertAt_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector , BTree_int_User_pair_t item , size_t index ) {
  return ({ /* cicili#Let3197 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3201 */
        __auto_type match3200  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3200 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3204 */
          bool __h_case_result  = (true  &&  (((match3200 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3205 */
                (unboxed  =  (((match3200 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3210 */
              ({ /* cicili#Let3214 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3216 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3217 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3222 */
                      ({ /* cicili#Let3226 */
                        __auto_type match3225  = take_Box_Vector_BTree_int_User_pair_t ((&vector ));
                        typeof((((match3225 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let3229 */
                          bool __h_case_result  = (true  &&  (((match3225 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3230 */
                                (ptr  =  (((match3225 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3235 */
                              ({ /* cicili#Let3237 */
                                StringBuffer_BTree_int_User_pair_t new_sb  = put_StringBuffer_BTree_int_User_pair_t (sb , item );
                                // ----------
                                free (((void *)ptr ));
                                ({ /* cicili#Let3243 */
                                  typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let3245 */
                                    bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3246 */
                                            (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn3248 */
                                            (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn3253 */
                                        ({ /* cicili#Progn3255 */
                                          for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                          }
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_BTree_int_User_pair_t (new_sb );
                                        });
                                      }) : ({ /* cicili#Let3262 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn3264 */
                                          clone_Box_Vector_BTree_int_User_pair_t (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let3269 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3271 */
                                None_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3276 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3278 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3279 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3281 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3283 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3288 */
                            ({ /* cicili#Let3291 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let3295 */
                                __auto_type match3294  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match3294 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let3298 */
                                  bool __h_case_result  = (true  &&  (((match3294 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3299 */
                                        (unboxed  =  (((match3294 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn3304 */
                                      ({ /* cicili#Let3308 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let3310 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3311 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn3316 */
                                              ({ /* cicili#Let3320 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let3322 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3323 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn3325 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn3330 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let3333 */
                                                          StringBuffer_BTree_int_User_pair_t new_sb  = newCapacity_StringBuffer_BTree_int_User_pair_t ((size  +  1 ), step );
                                                          // ----------
                                                          Buffer_BTree_int_User_pair_t (print_StringBuffer_BTree_int_User_pair_t (put_StringBuffer_BTree_int_User_pair_t (print_StringBuffer_BTree_int_User_pair_t (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let3343 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn3345 */
                                                        None_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let3350 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let3352 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3353 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn3358 */
                                                    insertAt_Vector_BTree_int_User_pair_t (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let3363 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn3365 */
                                                      clone_Box_Vector_BTree_int_User_pair_t (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let3370 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3372 */
                                        None_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let3377 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3379 */
                              clone_Box_Vector_BTree_int_User_pair_t (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3384 */
              // ----------
              ;
              ({ /* cicili#Progn3386 */
                None_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
Vector_BTree_int_User_pair_t reverse_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector ) {
  return ({ /* cicili#Let3392 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3396 */
        __auto_type match3395  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3395 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3399 */
          bool __h_case_result  = (true  &&  (((match3395 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3400 */
                (unboxed  =  (((match3395 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3405 */
              ({ /* cicili#Let3409 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3411 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3412 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3417 */
                      ({ /* cicili#Let3421 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let3423 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn3424 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn3426 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn3428 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn3430 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3435 */
                              ({ /* cicili#Let3439 */
                                __auto_type match3438  = take_Box_Vector_BTree_int_User_pair_t ((&vector ));
                                typeof((((match3438 . __h_data ). Just ). __h_0_mem )) ptr ;
                                // ----------
                                ;
                                ({ /* cicili#Let3442 */
                                  bool __h_case_result  = (true  &&  (((match3438 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3443 */
                                        (ptr  =  (((match3438 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn3448 */
                                      ({ /* cicili#Let3450 */
                                        BTree_int_User_pair_t tmp ;
                                        // ----------
                                        free (((void *)ptr ));
                                        for (size_t i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                            tmp  = (*(buffer  +  i  ));
                                            (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                            (*(buffer  +  (j  -  1 ) )) = tmp ;
                                        }
                                        Buffer_BTree_int_User_pair_t (MakeStringBuffer_BTree_int_User_pair_t (buffer , cursor , size , step ));
                                      });
                                    }) : ({ /* cicili#Let3458 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3460 */
                                        None_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let3465 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3467 */
                                None_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3472 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3474 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3475 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3477 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3479 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3484 */
                            ({ /* cicili#Let3487 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let3491 */
                                __auto_type match3490  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match3490 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let3494 */
                                  bool __h_case_result  = (true  &&  (((match3490 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3495 */
                                        (unboxed  =  (((match3490 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn3500 */
                                      ({ /* cicili#Let3504 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let3506 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3507 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn3512 */
                                              reverse_Vector_BTree_int_User_pair_t (Buffer_BTree_int_User_pair_t (copySlice_StringBuffer_BTree_int_User_pair_t (sbs , cur , size )));
                                            }) : ({ /* cicili#Let3519 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let3521 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3522 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn3527 */
                                                    reverse_Vector_BTree_int_User_pair_t (copySlice_Vector_BTree_int_User_pair_t (veci , cur , size ));
                                                  }) : ({ /* cicili#Let3533 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn3535 */
                                                      clone_Box_Vector_BTree_int_User_pair_t (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let3540 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3542 */
                                        None_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let3547 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3549 */
                              clone_Box_Vector_BTree_int_User_pair_t (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3554 */
              // ----------
              ;
              ({ /* cicili#Progn3556 */
                None_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
Vector_BTree_int_User_pair_t append_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t lvector , Vector_BTree_int_User_pair_t rvector ) {
  return ({ /* cicili#Let3562 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let3566 */
        __auto_type match3565  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3565 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3569 */
          bool __h_case_result  = (true  &&  (((match3565 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3570 */
                (unboxed  =  (((match3565 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3575 */
              ({ /* cicili#Let3579 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3581 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3582 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3587 */
                      ({ /* cicili#Let3591 */
                        __auto_type match3590  = take_Box_Vector_BTree_int_User_pair_t ((&lvector ));
                        typeof((((match3590 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let3594 */
                          bool __h_case_result  = (true  &&  (((match3590 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3595 */
                                (ptr  =  (((match3590 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3600 */
                              ({ /* cicili#Progn3602 */
                                free (((void *)ptr ));
                                Buffer_BTree_int_User_pair_t (print_StringBuffer_BTree_int_User_pair_t (sb , toArray_Vector_BTree_int_User_pair_t (rvector ), len_Vector_BTree_int_User_pair_t (rvector )));
                              });
                            }) : ({ /* cicili#Let3610 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3612 */
                                None_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3617 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3619 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3620 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3622 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3624 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3629 */
                            ({ /* cicili#Let3632 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let3636 */
                                __auto_type match3635  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match3635 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let3639 */
                                  bool __h_case_result  = (true  &&  (((match3635 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3640 */
                                        (unboxed  =  (((match3635 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn3645 */
                                      ({ /* cicili#Let3649 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let3651 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3652 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn3657 */
                                              Buffer_BTree_int_User_pair_t (print_StringBuffer_BTree_int_User_pair_t (copySlice_StringBuffer_BTree_int_User_pair_t (sbs , cur , size ), toArray_Vector_BTree_int_User_pair_t (rvector ), len_Vector_BTree_int_User_pair_t (rvector )));
                                            }) : ({ /* cicili#Let3666 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let3668 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3669 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn3674 */
                                                    append_Vector_BTree_int_User_pair_t (copySlice_Vector_BTree_int_User_pair_t (veci , cur , size ), rvector );
                                                  }) : ({ /* cicili#Let3680 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn3682 */
                                                      clone_Box_Vector_BTree_int_User_pair_t (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let3687 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3689 */
                                        None_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let3694 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3696 */
                              clone_Box_Vector_BTree_int_User_pair_t (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3701 */
              // ----------
              ;
              ({ /* cicili#Progn3703 */
                None_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
Vector_BTree_int_User_pair_t push_Vector_BTree_int_User_pair_t (BTree_int_User_pair_t item , Vector_BTree_int_User_pair_t vector ) {
  return ({ /* cicili#Let3709 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3713 */
        __auto_type match3712  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3712 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3716 */
          bool __h_case_result  = (true  &&  (((match3712 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3717 */
                (unboxed  =  (((match3712 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3722 */
              ({ /* cicili#Let3726 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3728 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3729 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3734 */
                      ({ /* cicili#Let3738 */
                        __auto_type match3737  = take_Box_Vector_BTree_int_User_pair_t ((&vector ));
                        typeof((((match3737 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let3741 */
                          bool __h_case_result  = (true  &&  (((match3737 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3742 */
                                (ptr  =  (((match3737 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3747 */
                              ({ /* cicili#Progn3749 */
                                free (((void *)ptr ));
                                Buffer_BTree_int_User_pair_t (put_StringBuffer_BTree_int_User_pair_t (sb , item ));
                              });
                            }) : ({ /* cicili#Let3755 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3757 */
                                None_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3762 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3764 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3765 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3767 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3769 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3774 */
                            ({ /* cicili#Let3777 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let3781 */
                                __auto_type match3780  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match3780 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let3784 */
                                  bool __h_case_result  = (true  &&  (((match3780 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3785 */
                                        (unboxed  =  (((match3780 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn3790 */
                                      ({ /* cicili#Let3794 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let3796 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3797 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn3802 */
                                              Buffer_BTree_int_User_pair_t (put_StringBuffer_BTree_int_User_pair_t (copySlice_StringBuffer_BTree_int_User_pair_t (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let3809 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let3811 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3812 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn3817 */
                                                    push_Vector_BTree_int_User_pair_t (item , copySlice_Vector_BTree_int_User_pair_t (veci , cur , size ));
                                                  }) : ({ /* cicili#Let3823 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn3825 */
                                                      clone_Box_Vector_BTree_int_User_pair_t (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let3830 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3832 */
                                        None_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let3837 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3839 */
                              clone_Box_Vector_BTree_int_User_pair_t (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3844 */
              // ----------
              ;
              ({ /* cicili#Progn3846 */
                None_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
Vector_BTree_int_User_pair_t take_Vector_BTree_int_User_pair_t (size_t len , Vector_BTree_int_User_pair_t vector ) {
  return ({ /* cicili#Let3852 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3856 */
        __auto_type match3855  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3855 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3859 */
          bool __h_case_result  = (true  &&  (((match3855 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3860 */
                (unboxed  =  (((match3855 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3865 */
              ({ /* cicili#Let3869 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3871 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3872 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3877 */
                      ({ /* cicili#Let3881 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3883 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3884 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3889 */
                              (((len  <=  0 )) ? Slice_BTree_int_User_pair_t (clone_Box_Vector_BTree_int_User_pair_t (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_BTree_int_User_pair_t (clone_Box_Vector_BTree_int_User_pair_t (vector ), 0, len ) : Slice_BTree_int_User_pair_t (clone_Box_Vector_BTree_int_User_pair_t (vector ), 0, 0)));
                            }) : ({ /* cicili#Let3901 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3903 */
                                Slice_BTree_int_User_pair_t (clone_Box_Vector_BTree_int_User_pair_t (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3909 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3911 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3912 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3914 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3916 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3921 */
                            (((len  <=  0 )) ? Slice_BTree_int_User_pair_t (clone_Box_Vector_BTree_int_User_pair_t (vec ), cursor , 0) : (((len  <  size  )) ? Slice_BTree_int_User_pair_t (clone_Box_Vector_BTree_int_User_pair_t (vec ), cursor , len ) : Slice_BTree_int_User_pair_t (clone_Box_Vector_BTree_int_User_pair_t (vec ), cursor , 0)));
                          }) : ({ /* cicili#Let3933 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3935 */
                              clone_Box_Vector_BTree_int_User_pair_t (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3940 */
              // ----------
              ;
              ({ /* cicili#Progn3942 */
                None_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
Maybe_BTree_int_User_pair_t last_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector ) {
  return ({ /* cicili#Let3949 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3953 */
        __auto_type match3952  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3952 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3956 */
          bool __h_case_result  = (true  &&  (((match3952 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3957 */
                (unboxed  =  (((match3952 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3962 */
              ({ /* cicili#Let3966 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3968 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3969 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3974 */
                      ({ /* cicili#Let3978 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3980 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3981 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3983 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3988 */
                              Just_BTree_int_User_pair_t ((*(buffer  +  (cursor  -  1 ) )));
                            }) : ({ /* cicili#Let3993 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3995 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4000 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let4002 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4003 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4005 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4007 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4012 */
                            nth_Vector_BTree_int_User_pair_t ((cursor  +  (size  -  1 ) ), vec );
                          }) : ({ /* cicili#Let4017 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4019 */
                              Nothing_BTree_int_User_pair_t ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4024 */
              // ----------
              ;
              ({ /* cicili#Progn4026 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
Vector_BTree_int_User_pair_t init_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector ) {
  return ({ /* cicili#Let4032 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4036 */
        __auto_type match4035  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4035 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4039 */
          bool __h_case_result  = (true  &&  (((match4035 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4040 */
                (unboxed  =  (((match4035 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4045 */
              ({ /* cicili#Let4049 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4051 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4052 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4057 */
                      ({ /* cicili#Let4061 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let4063 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4064 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4069 */
                              Slice_BTree_int_User_pair_t (clone_Box_Vector_BTree_int_User_pair_t (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let4075 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4077 */
                                None_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4082 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let4084 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4085 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4087 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4089 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4094 */
                            Slice_BTree_int_User_pair_t (clone_Box_Vector_BTree_int_User_pair_t (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let4100 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4102 */
                              clone_Box_Vector_BTree_int_User_pair_t (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4107 */
              // ----------
              ;
              ({ /* cicili#Progn4109 */
                None_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
size_t hasLen_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector , size_t desired ) {
  return ({ /* cicili#Let4114 */
      size_t len  = len_Vector_BTree_int_User_pair_t (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector ) {
  return ({ /* cicili#Let4121 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4125 */
        __auto_type match4124  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4124 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4128 */
          bool __h_case_result  = (true  &&  (((match4124 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4129 */
                (unboxed  =  (((match4124 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4134 */
              ({ /* cicili#Let4138 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4140 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4141 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4146 */
                      ({ /* cicili#Let4150 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let4152 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4153 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4158 */
                              cursor ;
                            }) : ({ /* cicili#Let4162 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4164 */
                                0;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4168 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let4170 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn4171 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4176 */
                            size ;
                          }) : ({ /* cicili#Let4180 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4182 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4186 */
              // ----------
              ;
              ({ /* cicili#Progn4188 */
                0;
              });
            }));
        });
      });
    });
}
Vector_BTree_int_User_pair_t tail_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector ) {
  return drop_Vector_BTree_int_User_pair_t (1, vector );
}
Vector_BTree_int_User_pair_t drop_Vector_BTree_int_User_pair_t (size_t len , Vector_BTree_int_User_pair_t vector ) {
  return ({ /* cicili#Let4196 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4200 */
        __auto_type match4199  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4199 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4203 */
          bool __h_case_result  = (true  &&  (((match4199 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4204 */
                (unboxed  =  (((match4199 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4209 */
              ({ /* cicili#Let4213 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4215 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4216 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4221 */
                      ({ /* cicili#Let4225 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let4227 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4228 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4233 */
                              (((len  <=  0 )) ? Slice_BTree_int_User_pair_t (clone_Box_Vector_BTree_int_User_pair_t (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_BTree_int_User_pair_t (clone_Box_Vector_BTree_int_User_pair_t (vector ), len , (cursor  -  len  )) : Slice_BTree_int_User_pair_t (clone_Box_Vector_BTree_int_User_pair_t (vector ), 0, 0)));
                            }) : ({ /* cicili#Let4245 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4247 */
                                None_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4252 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let4254 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4255 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4257 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4262 */
                            drop_Vector_BTree_int_User_pair_t ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let4267 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4269 */
                              clone_Box_Vector_BTree_int_User_pair_t (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4274 */
              // ----------
              ;
              ({ /* cicili#Progn4276 */
                None_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
Maybe_BTree_int_User_pair_t head_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector ) {
  return ({ /* cicili#Let4283 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4287 */
        __auto_type match4286  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4286 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4290 */
          bool __h_case_result  = (true  &&  (((match4286 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4291 */
                (unboxed  =  (((match4286 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4296 */
              ({ /* cicili#Let4300 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4302 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4303 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4308 */
                      ({ /* cicili#Let4312 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let4314 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4315 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4317 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4322 */
                              (((cursor  >  0 )) ? Just_BTree_int_User_pair_t ((*buffer )) : Nothing_BTree_int_User_pair_t ());
                            }) : ({ /* cicili#Let4329 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4331 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4336 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let4338 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4339 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4341 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4346 */
                            nth_Vector_BTree_int_User_pair_t (cursor , vector );
                          }) : ({ /* cicili#Let4351 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4353 */
                              Nothing_BTree_int_User_pair_t ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4358 */
              // ----------
              ;
              ({ /* cicili#Progn4360 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
Maybe_BTree_int_User_pair_t nth_Vector_BTree_int_User_pair_t (size_t index , Vector_BTree_int_User_pair_t vector ) {
  return ({ /* cicili#Let4367 */
      __auto_type __h_matchbox  = vector ;
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
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4386 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4387 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4392 */
                      ({ /* cicili#Let4396 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let4398 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4399 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4401 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4406 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_BTree_int_User_pair_t ((*(buffer  +  index  ))) : Nothing_BTree_int_User_pair_t ());
                            }) : ({ /* cicili#Let4413 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4415 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4420 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let4422 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4423 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4425 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4427 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4432 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_BTree_int_User_pair_t ((cursor  +  index  ), vector ) : Nothing_BTree_int_User_pair_t ());
                          }) : ({ /* cicili#Let4439 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4441 */
                              Nothing_BTree_int_User_pair_t ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4446 */
              // ----------
              ;
              ({ /* cicili#Progn4448 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
void free_Vector_BTree_int_User_pair_t_x (Vector_BTree_int_User_pair_t_x * this_ptr ) {
  { /* cicili#Let4453 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4457 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let4459 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4460 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block4466 */
            free_StringBuffer_BTree_int_User_pair_t ((&sb ));
          }
        else
          { /* cicili#Let4472 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let4474 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn4475 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block4481 */
                  free_Box_Vector_BTree_int_User_pair_t ((&vector ));
                }
            });
          }
      });
    }
    free (this );
  }
}
Vector_BTree_int_User_pair_t__H_Table * const get_Vector_BTree_int_User_pair_t__H_Table () {
  static Vector_BTree_int_User_pair_t__H_Table table  = { free_Vector_BTree_int_User_pair_t_x , iterator_Vector_BTree_int_User_pair_t , resize_Vector_BTree_int_User_pair_t , pure_Vector_BTree_int_User_pair_t , pureCapacity_Vector_BTree_int_User_pair_t , toArray_Vector_BTree_int_User_pair_t , wrap_Vector_BTree_int_User_pair_t , show_Vector_BTree_int_User_pair_t , copy_Vector_BTree_int_User_pair_t , copySlice_Vector_BTree_int_User_pair_t , replaceAt_Vector_BTree_int_User_pair_t , deleteAt_Vector_BTree_int_User_pair_t , insertAt_Vector_BTree_int_User_pair_t , reverse_Vector_BTree_int_User_pair_t , append_Vector_BTree_int_User_pair_t , push_Vector_BTree_int_User_pair_t , take_Vector_BTree_int_User_pair_t , last_Vector_BTree_int_User_pair_t , init_Vector_BTree_int_User_pair_t , hasLen_Vector_BTree_int_User_pair_t , len_Vector_BTree_int_User_pair_t , tail_Vector_BTree_int_User_pair_t , drop_Vector_BTree_int_User_pair_t , head_Vector_BTree_int_User_pair_t , nth_Vector_BTree_int_User_pair_t };
  return (&table );
}
Vector_BTree_int_User_pair_t Buffer_BTree_int_User_pair_t (StringBuffer_BTree_int_User_pair_t buffer ) {
  { /* cicili#Let4491 */
    Vector_BTree_int_User_pair_t_x instance  = malloc (sizeof(class_Vector_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_Vector_BTree_int_User_pair_t){ get_Vector_BTree_int_User_pair_t__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Vector_BTree_int_User_pair_t (instance );
  }
}
Vector_BTree_int_User_pair_t Slice_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t vector , size_t cursor , size_t size ) {
  { /* cicili#Let4499 */
    Vector_BTree_int_User_pair_t_x instance  = malloc (sizeof(class_Vector_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_Vector_BTree_int_User_pair_t){ get_Vector_BTree_int_User_pair_t__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_Vector_BTree_int_User_pair_t (instance );
  }
}
Vector_BTree_int_User_pair_t None_BTree_int_User_pair_t () {
  { /* cicili#Let4506 */
    Vector_BTree_int_User_pair_t_x instance  = malloc (sizeof(class_Vector_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_Vector_BTree_int_User_pair_t){ get_Vector_BTree_int_User_pair_t__H_Table (), __h___t });
    return new_Box_Vector_BTree_int_User_pair_t (instance );
  }
}
#endif /* __Vector_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __Maybe_Vector_BTree_int_User_pair_t__H_IMPL__
#define __Maybe_Vector_BTree_int_User_pair_t__H_IMPL__
void free_Maybe_Vector_BTree_int_User_pair_t (Maybe_Vector_BTree_int_User_pair_t * this ) {
}
const Maybe_Vector_BTree_int_User_pair_t__H_Table * const get_Maybe_Vector_BTree_int_User_pair_t__H_Table () {
  static const Maybe_Vector_BTree_int_User_pair_t__H_Table table  = { free_Maybe_Vector_BTree_int_User_pair_t };
  return (&table );
}
Maybe_Vector_BTree_int_User_pair_t Just_Vector_BTree_int_User_pair_t (Vector_BTree_int_User_pair_t value ) {
  { /* cicili#Let4524 */
    Maybe_Vector_BTree_int_User_pair_t instance  = ((Maybe_Vector_BTree_int_User_pair_t){ get_Maybe_Vector_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_BTree_int_User_pair_t Nothing_Vector_BTree_int_User_pair_t () {
  { /* cicili#Let4529 */
    Maybe_Vector_BTree_int_User_pair_t instance  = ((Maybe_Vector_BTree_int_User_pair_t){ get_Maybe_Vector_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __Maybe_BTree_int_User__H_IMPL__
#define __Maybe_BTree_int_User__H_IMPL__
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this ) {
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table () {
  static const Maybe_BTree_int_User__H_Table table  = { free_Maybe_BTree_int_User };
  return (&table );
}
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value ) {
  { /* cicili#Let4559 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let4564 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Rc_BTree_int_User__H_IMPL__
#define __Rc_BTree_int_User__H_IMPL__
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User pointer ) {
  return ({ /* cicili#Let4571 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_int_User *)malloc (sizeof(BTree_int_User *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BTree_int_User (holder , count , ((size_t)pointer ));
    });
}
Rc_BTree_int_User clone_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let4580 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4582 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4583 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4585 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4587 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4592 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4595 */
                (++(*count ));
                __h_Hold_BTree_int_User (pointer , count , address );
              }) : Gone_BTree_int_User ());
          }) : ({ /* cicili#Let4601 */
            // ----------
            ;
            ({ /* cicili#Progn4603 */
              Gone_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User take_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  return ({ /* cicili#Let4611 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4613 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4614 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4616 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4618 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4623 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let4627 */
                __auto_type result  = Just_BTree_int_User ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let4635 */
            // ----------
            ;
            ({ /* cicili#Progn4637 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let4645 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4647 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4648 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4650 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4652 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4657 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_int_User ((*pointer )) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let4664 */
            // ----------
            ;
            ({ /* cicili#Progn4666 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  { /* cicili#Let4675 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4677 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4678 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4680 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4682 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4688 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4691 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_BTree_int_User ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4699 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4702 */
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
        { /* cicili#Let4712 */
          // ----------
          ;
          ({ /* cicili#Let4714 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4719 */
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
  { /* cicili#Let4730 */
    Rc_BTree_int_User instance  = ((Rc_BTree_int_User){ get_Rc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_BTree_int_User Gone_BTree_int_User () {
  { /* cicili#Let4735 */
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
  { /* cicili#Let4753 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User () {
  { /* cicili#Let4758 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Rc_BTree_int_User__H_IMPL__ */ 
bool null_terminated_StringBuffer_Rc_BTree_int_User  = false ;
bool is_constant_StringBuffer_Rc_BTree_int_User  = false ;
#ifndef __StringBuffer_Rc_BTree_int_User__H_IMPL__
#define __StringBuffer_Rc_BTree_int_User__H_IMPL__
StringBuffer_Rc_BTree_int_User resize_StringBuffer_Rc_BTree_int_User (StringBuffer_Rc_BTree_int_User sb , size_t len ) {
  return ({ /* cicili#Let4772 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let4774 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn4775 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4777 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4779 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4784 */
            ({ /* cicili#Let4786 */
              Rc_BTree_int_User * new_buffer  = realloc (buffer , (len  *  sizeof(Rc_BTree_int_User) ));
              size_t new_cursor  = (((cursor  <  len  )) ? cursor  : len );
              // ----------
              MakeStringBuffer_Rc_BTree_int_User (new_buffer , new_cursor , len , step );
            });
          }) : ({ /* cicili#Let4791 */
            // ----------
            ;
            ({ /* cicili#Progn4793 */
              FreedStringBuffer_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
StringBuffer_Rc_BTree_int_User new_StringBuffer_Rc_BTree_int_User (size_t step ) {
  return newCapacity_StringBuffer_Rc_BTree_int_User (step , step );
}
StringBuffer_Rc_BTree_int_User newCapacity_StringBuffer_Rc_BTree_int_User (size_t capacity , size_t step ) {
  return ({ /* cicili#Let4804 */
      Rc_BTree_int_User * buffer  = malloc ((capacity  *  sizeof(Rc_BTree_int_User) ));
      StringBuffer_Rc_BTree_int_User sb  = MakeStringBuffer_Rc_BTree_int_User (buffer , 0, capacity , step );
      // ----------
      sb ;
    });
}
StringBuffer_Rc_BTree_int_User copySlice_StringBuffer_Rc_BTree_int_User (StringBuffer_Rc_BTree_int_User sb , size_t pos , size_t len ) {
  return ({ /* cicili#Let4813 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let4815 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn4816 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4818 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4820 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4825 */
            ({ /* cicili#Let4827 */
              StringBuffer_Rc_BTree_int_User new_sb  = newCapacity_StringBuffer_Rc_BTree_int_User (len , step );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_Rc_BTree_int_User (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_Rc_BTree_int_User (new_sb , (buffer  +  pos  ), (((pos  <=  cursor  )) ? (cursor  -  pos  ) : 0)));
            });
          }) : ({ /* cicili#Let4837 */
            // ----------
            ;
            ({ /* cicili#Progn4839 */
              FreedStringBuffer_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
StringBuffer_Rc_BTree_int_User copy_StringBuffer_Rc_BTree_int_User (StringBuffer_Rc_BTree_int_User sb ) {
  return ({ /* cicili#Let4848 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let4850 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn4851 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn4853 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn4855 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4857 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4862 */
            ({ /* cicili#Let4864 */
              StringBuffer_Rc_BTree_int_User new_sb  = newCapacity_StringBuffer_Rc_BTree_int_User (size , step );
              // ----------
              print_StringBuffer_Rc_BTree_int_User (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let4871 */
            // ----------
            ;
            ({ /* cicili#Progn4873 */
              FreedStringBuffer_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
StringBuffer_Rc_BTree_int_User put_StringBuffer_Rc_BTree_int_User (StringBuffer_Rc_BTree_int_User sb , const Rc_BTree_int_User data ) {
  return print_StringBuffer_Rc_BTree_int_User (sb , (&data ), 1);
}
StringBuffer_Rc_BTree_int_User print_StringBuffer_Rc_BTree_int_User (StringBuffer_Rc_BTree_int_User sb , const Rc_BTree_int_User * data , size_t len ) {
  return ({ /* cicili#Let4887 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let4889 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn4890 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn4892 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn4894 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4896 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4901 */
            ({ /* cicili#Let4903 */
              size_t blen  = (len  *  sizeof(Rc_BTree_int_User) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block4907 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let4909 */
                    Rc_BTree_int_User * new_buffer  = realloc (buffer , (size  *  sizeof(Rc_BTree_int_User) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_Rc_BTree_int_User (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let4914 */
            // ----------
            ;
            ({ /* cicili#Progn4916 */
              FreedStringBuffer_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
void free_StringBuffer_Rc_BTree_int_User (StringBuffer_Rc_BTree_int_User * this ) {
  { /* cicili#Let4924 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let4926 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4927 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4933 */
          { /* cicili#Block4935 */
            free (buffer );
            (*this ) = FreedStringBuffer_Rc_BTree_int_User ();
          }
        }
    });
  }
}
const StringBuffer_Rc_BTree_int_User__H_Table * const get_StringBuffer_Rc_BTree_int_User__H_Table () {
  static const StringBuffer_Rc_BTree_int_User__H_Table table  = { free_StringBuffer_Rc_BTree_int_User , resize_StringBuffer_Rc_BTree_int_User , new_StringBuffer_Rc_BTree_int_User , newCapacity_StringBuffer_Rc_BTree_int_User , copySlice_StringBuffer_Rc_BTree_int_User , copy_StringBuffer_Rc_BTree_int_User , put_StringBuffer_Rc_BTree_int_User , print_StringBuffer_Rc_BTree_int_User };
  return (&table );
}
StringBuffer_Rc_BTree_int_User MakeStringBuffer_Rc_BTree_int_User (Rc_BTree_int_User * buffer , size_t cursor , size_t size , size_t step ) {
  { /* cicili#Let4945 */
    StringBuffer_Rc_BTree_int_User instance  = ((StringBuffer_Rc_BTree_int_User){ get_StringBuffer_Rc_BTree_int_User__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_Rc_BTree_int_User FreedStringBuffer_Rc_BTree_int_User () {
  { /* cicili#Let4950 */
    StringBuffer_Rc_BTree_int_User instance  = ((StringBuffer_Rc_BTree_int_User){ get_StringBuffer_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __StringBuffer_Rc_BTree_int_User__H_IMPL__ */ 
bool null_terminated_Vector_Rc_BTree_int_User  = false ;
bool is_constant_Vector_Rc_BTree_int_User  = false ;
#ifndef __Vector_Rc_BTree_int_User__H_IMPL__
#define __Vector_Rc_BTree_int_User__H_IMPL__
#ifndef __Maybe_Vector_Rc_BTree_int_User_x__H_IMPL__
#define __Maybe_Vector_Rc_BTree_int_User_x__H_IMPL__
void free_Maybe_Vector_Rc_BTree_int_User_x (Maybe_Vector_Rc_BTree_int_User_x * this ) {
}
const Maybe_Vector_Rc_BTree_int_User_x__H_Table * const get_Maybe_Vector_Rc_BTree_int_User_x__H_Table () {
  static const Maybe_Vector_Rc_BTree_int_User_x__H_Table table  = { free_Maybe_Vector_Rc_BTree_int_User_x };
  return (&table );
}
Maybe_Vector_Rc_BTree_int_User_x Just_Vector_Rc_BTree_int_User_x (Vector_Rc_BTree_int_User_x value ) {
  { /* cicili#Let4973 */
    Maybe_Vector_Rc_BTree_int_User_x instance  = ((Maybe_Vector_Rc_BTree_int_User_x){ get_Maybe_Vector_Rc_BTree_int_User_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_Rc_BTree_int_User_x Nothing_Vector_Rc_BTree_int_User_x () {
  { /* cicili#Let4978 */
    Maybe_Vector_Rc_BTree_int_User_x instance  = ((Maybe_Vector_Rc_BTree_int_User_x){ get_Maybe_Vector_Rc_BTree_int_User_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_Rc_BTree_int_User_x__H_IMPL__ */ 
#ifndef __Box_Vector_Rc_BTree_int_User__H_IMPL__
#define __Box_Vector_Rc_BTree_int_User__H_IMPL__
Box_Vector_Rc_BTree_int_User new_Box_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User_x pointer ) {
  return ({ /* cicili#Let4985 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((Vector_Rc_BTree_int_User_x *)malloc (sizeof(Vector_Rc_BTree_int_User_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_Vector_Rc_BTree_int_User_x (holder , count , ((size_t)pointer ));
    });
}
Box_Vector_Rc_BTree_int_User clone_Box_Vector_Rc_BTree_int_User (Box_Vector_Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let4994 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4996 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4997 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4999 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5001 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5006 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn5009 */
                (++(*count ));
                __h_Hold_Vector_Rc_BTree_int_User_x (pointer , count , address );
              }) : Gone_Vector_Rc_BTree_int_User_x ());
          }) : ({ /* cicili#Let5015 */
            // ----------
            ;
            ({ /* cicili#Progn5017 */
              Gone_Vector_Rc_BTree_int_User_x ();
            });
          }));
      });
    });
}
Maybe_Vector_Rc_BTree_int_User_x take_Box_Vector_Rc_BTree_int_User (Box_Vector_Rc_BTree_int_User * this ) {
  return ({ /* cicili#Let5025 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let5027 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5028 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5030 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5032 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5037 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let5041 */
                __auto_type result  = Just_Vector_Rc_BTree_int_User_x ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_Vector_Rc_BTree_int_User_x ());
          }) : ({ /* cicili#Let5049 */
            // ----------
            ;
            ({ /* cicili#Progn5051 */
              Nothing_Vector_Rc_BTree_int_User_x ();
            });
          }));
      });
    });
}
Maybe_Vector_Rc_BTree_int_User_x get_Box_Vector_Rc_BTree_int_User (Box_Vector_Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let5059 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let5061 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5062 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5064 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5066 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5071 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_Rc_BTree_int_User_x ((*pointer )) : Nothing_Vector_Rc_BTree_int_User_x ());
          }) : ({ /* cicili#Let5078 */
            // ----------
            ;
            ({ /* cicili#Progn5080 */
              Nothing_Vector_Rc_BTree_int_User_x ();
            });
          }));
      });
    });
}
void free_Box_Vector_Rc_BTree_int_User (Box_Vector_Rc_BTree_int_User * this ) {
  { /* cicili#Let5089 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let5091 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5092 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5094 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn5096 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block5102 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block5105 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_Rc_BTree_int_User_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block5113 */
                if ((*count ) ==  1 )
                  { /* cicili#Block5116 */
                    free_Vector_Rc_BTree_int_User_x (pointer );
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_Vector_Rc_BTree_int_User_x ();
                  }
                else
                  (--(*count ));
              }
              }        }
      else
        { /* cicili#Let5126 */
          // ----------
          ;
          ({ /* cicili#Let5128 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block5133 */
              }
          });
        }
    });
  }
}
const Box_Vector_Rc_BTree_int_User__H_Table * const get_Box_Vector_Rc_BTree_int_User__H_Table () {
  static const Box_Vector_Rc_BTree_int_User__H_Table table  = { free_Box_Vector_Rc_BTree_int_User , new_Box_Vector_Rc_BTree_int_User , clone_Box_Vector_Rc_BTree_int_User , take_Box_Vector_Rc_BTree_int_User , get_Box_Vector_Rc_BTree_int_User };
  return (&table );
}
Box_Vector_Rc_BTree_int_User __h_Hold_Vector_Rc_BTree_int_User_x (Vector_Rc_BTree_int_User_x * pointer , int * count , size_t address ) {
  { /* cicili#Let5144 */
    Box_Vector_Rc_BTree_int_User instance  = ((Box_Vector_Rc_BTree_int_User){ get_Box_Vector_Rc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_Vector_Rc_BTree_int_User Gone_Vector_Rc_BTree_int_User_x () {
  { /* cicili#Let5149 */
    Box_Vector_Rc_BTree_int_User instance  = ((Box_Vector_Rc_BTree_int_User){ get_Box_Vector_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Vector_Rc_BTree_int_User__H_IMPL__ */ 
Vector_Rc_BTree_int_User_iterator_t iterator_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector ) {
  return ({ /* cicili#Let5156 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5160 */
        __auto_type match5159  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5159 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5163 */
          bool __h_case_result  = (true  &&  (((match5159 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5164 */
                (unboxed  =  (((match5159 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5169 */
              ({ /* cicili#Let5173 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5175 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5176 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5181 */
                      ({ /* cicili#Let5185 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let5187 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5188 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5190 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5195 */
                              ((Vector_Rc_BTree_int_User_iterator_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let5200 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5202 */
                                ((Vector_Rc_BTree_int_User_iterator_t){ NULL , NULL });
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5207 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5209 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5210 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5212 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5214 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5219 */
                            ({ /* cicili#Let5221 */
                              Vector_Rc_BTree_int_User_iterator_t iter  = iterator_Vector_Rc_BTree_int_User (vec );
                              // ----------
                              ({ /* cicili#Let5227 */
                                typeof((iter . __h_0_mem )) begin ;
                                // ----------
                                ;
                                ({ /* cicili#Let5229 */
                                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn5230 */
                                      (begin  =  (iter . __h_0_mem ) );
                                      true ;
                                    }) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5235 */
                                      ((Vector_Rc_BTree_int_User_iterator_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let5240 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5242 */
                                        ((Vector_Rc_BTree_int_User_iterator_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5247 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5249 */
                              ((Vector_Rc_BTree_int_User_iterator_t){ NULL , NULL });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5254 */
              // ----------
              ;
              ({ /* cicili#Progn5256 */
                ((Vector_Rc_BTree_int_User_iterator_t){ NULL , NULL });
              });
            }));
        });
      });
    });
}
Vector_Rc_BTree_int_User resize_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector , size_t len ) {
  return ({ /* cicili#Let5262 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5266 */
        __auto_type match5265  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5265 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5269 */
          bool __h_case_result  = (true  &&  (((match5265 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5270 */
                (unboxed  =  (((match5265 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5275 */
              ({ /* cicili#Let5279 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5281 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5282 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5287 */
                      ({ /* cicili#Let5291 */
                        __auto_type match5290  = take_Box_Vector_Rc_BTree_int_User ((&vector ));
                        typeof((((match5290 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let5294 */
                          bool __h_case_result  = (true  &&  (((match5290 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5295 */
                                (ptr  =  (((match5290 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5300 */
                              ({ /* cicili#Progn5302 */
                                free (((void *)ptr ));
                                Buffer_Rc_BTree_int_User (resize_StringBuffer_Rc_BTree_int_User (sb , len ));
                              });
                            }) : ({ /* cicili#Let5308 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5310 */
                                None_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5315 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let5317 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5318 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn5320 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5325 */
                            ({ /* cicili#Let5328 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5332 */
                                __auto_type match5331  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5331 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5335 */
                                  bool __h_case_result  = (true  &&  (((match5331 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5336 */
                                        (unboxed  =  (((match5331 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5341 */
                                      ({ /* cicili#Let5345 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5347 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5348 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5353 */
                                              ({ /* cicili#Let5357 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5359 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5360 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5362 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5367 */
                                                      ({ /* cicili#Let5369 */
                                                        StringBuffer_Rc_BTree_int_User new_sb  = newCapacity_StringBuffer_Rc_BTree_int_User (len , step );
                                                        // ----------
                                                        Buffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let5377 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5379 */
                                                        None_Rc_BTree_int_User ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5384 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5386 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5387 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5392 */
                                                    resize_Vector_Rc_BTree_int_User (veci , len );
                                                  }) : ({ /* cicili#Let5397 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5399 */
                                                      clone_Box_Vector_Rc_BTree_int_User (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5404 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5406 */
                                        None_Rc_BTree_int_User ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5411 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5413 */
                              clone_Box_Vector_Rc_BTree_int_User (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5418 */
              // ----------
              ;
              ({ /* cicili#Progn5420 */
                None_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
Vector_Rc_BTree_int_User pure_Vector_Rc_BTree_int_User (size_t step ) {
  return pureCapacity_Vector_Rc_BTree_int_User (step , step );
}
Vector_Rc_BTree_int_User pureCapacity_Vector_Rc_BTree_int_User (size_t capacity , size_t step ) {
  return Buffer_Rc_BTree_int_User (newCapacity_StringBuffer_Rc_BTree_int_User (capacity , step ));
}
Vector_Rc_BTree_int_User_pointer_t toArray_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector ) {
  return ({ /* cicili#Let5434 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5438 */
        __auto_type match5437  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5437 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5441 */
          bool __h_case_result  = (true  &&  (((match5437 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5442 */
                (unboxed  =  (((match5437 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5447 */
              ({ /* cicili#Let5451 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5453 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5454 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5459 */
                      ({ /* cicili#Let5463 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let5465 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn5466 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5471 */
                              buffer ;
                            }) : ({ /* cicili#Let5475 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5477 */
                                NULL ;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5481 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let5483 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5484 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn5486 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5491 */
                            ({ /* cicili#Let5494 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let5498 */
                                __auto_type match5497  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5497 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5501 */
                                  bool __h_case_result  = (true  &&  (((match5497 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5502 */
                                        (unboxed  =  (((match5497 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5507 */
                                      ({ /* cicili#Let5511 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5513 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5514 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5519 */
                                              ({ /* cicili#Let5523 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5525 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn5526 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5531 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let5535 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5537 */
                                                        NULL ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5541 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5543 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5544 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn5546 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5551 */
                                                    (toArray_Vector_Rc_BTree_int_User (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let5556 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5558 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5562 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5564 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5568 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5570 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5574 */
              // ----------
              ;
              ({ /* cicili#Progn5576 */
                NULL ;
              });
            }));
        });
      });
    });
}
Vector_Rc_BTree_int_User wrap_Vector_Rc_BTree_int_User (const Rc_BTree_int_User item ) {
  return ({ /* cicili#Let5581 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5583 */
        __auto_type new_vec  = pureCapacity_Vector_Rc_BTree_int_User (16, 16);
        // ----------
        ((void)((new_vec . __h_table )-> freeData ));
        new_vec ;
      });
      // ----------
      push_Vector_Rc_BTree_int_User (item , new_vec );
    });
}
size_t show_Vector_Rc_BTree_int_User (CFile file , Vector_Rc_BTree_int_User vector ) {
  auto size_t show_ (size_t index , Vector_Rc_BTree_int_User vector );
  size_t showWithSize (size_t index , size_t size , Vector_Rc_BTree_int_User vector ) {
    return ({ /* cicili#Let5593 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let5597 */
          __auto_type match5596  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5596 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5600 */
            bool __h_case_result  = (true  &&  (((match5596 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5601 */
                  (unboxed  =  (((match5596 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5606 */
                ({ /* cicili#Let5610 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let5612 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5613 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5618 */
                        ({ /* cicili#Let5622 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let5624 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn5625 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5630 */
                                ({ /* cicili#Let5632 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  ({ /* cicili#Let5642 */
                                              __auto_type match5641  = get_Rc_BTree_int_User ((*(buffer  +  counter  )));
                                              typeof((((match5641 . __h_data ). Just ). __h_0_mem )) child ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5645 */
                                                bool __h_case_result  = (true  &&  (((match5641 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5646 */
                                                      (child  =  (((match5641 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5651 */
                                                    show_BTree_int_User (file , child );
                                                  }) : ({ /* cicili#Let5656 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5658 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            }) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let5662 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5664 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let5668 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let5670 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5671 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5673 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn5675 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5680 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let5684 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5686 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5690 */
                // ----------
                ;
                ({ /* cicili#Progn5692 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , Vector_Rc_BTree_int_User vector ) {
    return ({ /* cicili#Let5696 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let5700 */
          __auto_type match5699  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5699 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5703 */
            bool __h_case_result  = (true  &&  (((match5699 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5704 */
                  (unboxed  =  (((match5699 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5709 */
                ({ /* cicili#Let5713 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let5715 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5716 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5721 */
                        ({ /* cicili#Let5725 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let5727 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5728 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5730 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5735 */
                                ({ /* cicili#Let5737 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  ({ /* cicili#Let5747 */
                                              __auto_type match5746  = get_Rc_BTree_int_User ((*(buffer  +  counter  )));
                                              typeof((((match5746 . __h_data ). Just ). __h_0_mem )) child ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5750 */
                                                bool __h_case_result  = (true  &&  (((match5746 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5751 */
                                                      (child  =  (((match5746 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5756 */
                                                    show_BTree_int_User (file , child );
                                                  }) : ({ /* cicili#Let5761 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5763 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            }) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let5767 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5769 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let5773 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let5775 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5776 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5778 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn5780 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5785 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let5789 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5791 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5795 */
                // ----------
                ;
                ({ /* cicili#Progn5797 */
                  0;
                });
              }));
          });
        });
      });
  }
  return show_ (0, vector );
}
Vector_Rc_BTree_int_User copy_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector ) {
  return ({ /* cicili#Let5802 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5806 */
        __auto_type match5805  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5805 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5809 */
          bool __h_case_result  = (true  &&  (((match5805 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5810 */
                (unboxed  =  (((match5805 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5815 */
              ({ /* cicili#Let5819 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5821 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5822 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5827 */
                      ({ /* cicili#Let5831 */
                        // ----------
                        ;
                        ({ /* cicili#Let5833 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5837 */
                              Buffer_Rc_BTree_int_User (copy_StringBuffer_Rc_BTree_int_User (sb ));
                            }) : ({ /* cicili#Let5843 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5845 */
                                None_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5850 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5852 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5853 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5855 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5857 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5862 */
                            ({ /* cicili#Let5865 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5869 */
                                __auto_type match5868  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5868 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5872 */
                                  bool __h_case_result  = (true  &&  (((match5868 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5873 */
                                        (unboxed  =  (((match5868 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5878 */
                                      ({ /* cicili#Let5882 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5884 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5885 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5890 */
                                              ({ /* cicili#Let5894 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5896 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5900 */
                                                      Buffer_Rc_BTree_int_User (copySlice_StringBuffer_Rc_BTree_int_User (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let5906 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5908 */
                                                        None_Rc_BTree_int_User ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5913 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5915 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5916 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5921 */
                                                    copySlice_Vector_Rc_BTree_int_User (veci , cur , size );
                                                  }) : ({ /* cicili#Let5926 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5928 */
                                                      None_Rc_BTree_int_User ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5933 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5935 */
                                        None_Rc_BTree_int_User ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5940 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5942 */
                              None_Rc_BTree_int_User ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5947 */
              // ----------
              ;
              ({ /* cicili#Progn5949 */
                None_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
Vector_Rc_BTree_int_User copySlice_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector , size_t pos , size_t len ) {
  return ({ /* cicili#Let5955 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5959 */
        __auto_type match5958  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5958 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5962 */
          bool __h_case_result  = (true  &&  (((match5958 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5963 */
                (unboxed  =  (((match5958 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5968 */
              ({ /* cicili#Let5972 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5974 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5975 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5980 */
                      ({ /* cicili#Let5984 */
                        // ----------
                        ;
                        ({ /* cicili#Let5986 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5990 */
                              Buffer_Rc_BTree_int_User (copySlice_StringBuffer_Rc_BTree_int_User (sb , pos , len ));
                            }) : ({ /* cicili#Let5996 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5998 */
                                None_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6003 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let6005 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6006 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6008 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6013 */
                            ({ /* cicili#Let6016 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6020 */
                                __auto_type match6019  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6019 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6023 */
                                  bool __h_case_result  = (true  &&  (((match6019 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6024 */
                                        (unboxed  =  (((match6019 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6029 */
                                      ({ /* cicili#Let6033 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6035 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6036 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6041 */
                                              ({ /* cicili#Let6045 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let6047 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6051 */
                                                      Buffer_Rc_BTree_int_User (copySlice_StringBuffer_Rc_BTree_int_User (sbs , (cur  +  pos  ), len ));
                                                    }) : ({ /* cicili#Let6057 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn6059 */
                                                        None_Rc_BTree_int_User ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6064 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6066 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6067 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6072 */
                                                    copySlice_Vector_Rc_BTree_int_User (veci , (cur  +  pos  ), len );
                                                  }) : ({ /* cicili#Let6077 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6079 */
                                                      None_Rc_BTree_int_User ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6084 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6086 */
                                        None_Rc_BTree_int_User ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6091 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6093 */
                              None_Rc_BTree_int_User ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6098 */
              // ----------
              ;
              ({ /* cicili#Progn6100 */
                None_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
Vector_Rc_BTree_int_User replaceAt_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector , Rc_BTree_int_User item , size_t index ) {
  return ({ /* cicili#Let6106 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6110 */
        __auto_type match6109  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6109 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6113 */
          bool __h_case_result  = (true  &&  (((match6109 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6114 */
                (unboxed  =  (((match6109 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6119 */
              ({ /* cicili#Let6123 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6125 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6126 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6131 */
                      ({ /* cicili#Let6135 */
                        __auto_type match6134  = take_Box_Vector_Rc_BTree_int_User ((&vector ));
                        typeof((((match6134 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let6138 */
                          bool __h_case_result  = (true  &&  (((match6134 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6139 */
                                (ptr  =  (((match6134 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6144 */
                              ({ /* cicili#Progn6146 */
                                free (((void *)ptr ));
                                ({ /* cicili#Let6150 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6152 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6153 */
                                            (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn6155 */
                                            (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6160 */
                                        (((index  <  cursor  )) ? ({ /* cicili#Progn6163 */
                                            (*(buffer  +  index  )) = item ;
                                            Buffer_Rc_BTree_int_User (sb );
                                          }) : Buffer_Rc_BTree_int_User (sb ));
                                      }) : ({ /* cicili#Let6169 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn6171 */
                                          clone_Box_Vector_Rc_BTree_int_User (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let6176 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6178 */
                                None_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6183 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6185 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6186 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6188 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6190 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6195 */
                            ({ /* cicili#Let6198 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6202 */
                                __auto_type match6201  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6201 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6205 */
                                  bool __h_case_result  = (true  &&  (((match6201 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6206 */
                                        (unboxed  =  (((match6201 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6211 */
                                      ({ /* cicili#Let6215 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6217 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6218 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6223 */
                                              ({ /* cicili#Let6227 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let6229 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6230 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn6232 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6237 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let6240 */
                                                          StringBuffer_Rc_BTree_int_User new_sb  = newCapacity_StringBuffer_Rc_BTree_int_User (size , step );
                                                          // ----------
                                                          Buffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (put_StringBuffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let6250 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn6252 */
                                                        None_Rc_BTree_int_User ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6257 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6259 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6260 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6265 */
                                                    replaceAt_Vector_Rc_BTree_int_User (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let6270 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6272 */
                                                      clone_Box_Vector_Rc_BTree_int_User (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6277 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6279 */
                                        None_Rc_BTree_int_User ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6284 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6286 */
                              clone_Box_Vector_Rc_BTree_int_User (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6291 */
              // ----------
              ;
              ({ /* cicili#Progn6293 */
                None_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
Vector_Rc_BTree_int_User deleteAt_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector , size_t index ) {
  return ({ /* cicili#Let6299 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6303 */
        __auto_type match6302  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6302 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6306 */
          bool __h_case_result  = (true  &&  (((match6302 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6307 */
                (unboxed  =  (((match6302 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6312 */
              ({ /* cicili#Let6316 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6318 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6319 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6324 */
                      ({ /* cicili#Let6328 */
                        __auto_type match6327  = take_Box_Vector_Rc_BTree_int_User ((&vector ));
                        typeof((((match6327 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let6331 */
                          bool __h_case_result  = (true  &&  (((match6327 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6332 */
                                (ptr  =  (((match6327 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6337 */
                              ({ /* cicili#Progn6339 */
                                free (((void *)ptr ));
                                ({ /* cicili#Let6343 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                                  typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6345 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn6346 */
                                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn6348 */
                                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                                true ;
                                              }) ) &&  ({ /* cicili#Progn6350 */
                                              (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn6352 */
                                            (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6357 */
                                        ({ /* cicili#Progn6359 */
                                          for (size_t i  = index ; (i  <  cursor  ); (++i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                          }
                                          Buffer_Rc_BTree_int_User (MakeStringBuffer_Rc_BTree_int_User (buffer , (cursor  -  1 ), size , step ));
                                        });
                                      }) : ({ /* cicili#Let6367 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn6369 */
                                          clone_Box_Vector_Rc_BTree_int_User (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let6374 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6376 */
                                None_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6381 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6383 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6384 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6386 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6388 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6393 */
                            ({ /* cicili#Let6396 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6400 */
                                __auto_type match6399  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6399 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6403 */
                                  bool __h_case_result  = (true  &&  (((match6399 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6404 */
                                        (unboxed  =  (((match6399 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6409 */
                                      ({ /* cicili#Let6413 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6415 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6416 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6421 */
                                              ({ /* cicili#Let6425 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let6427 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6428 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn6430 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6435 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let6438 */
                                                          StringBuffer_Rc_BTree_int_User new_sb  = newCapacity_StringBuffer_Rc_BTree_int_User ((size  -  1 ), step );
                                                          // ----------
                                                          Buffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let6447 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn6449 */
                                                        None_Rc_BTree_int_User ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6454 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6456 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6457 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6462 */
                                                    deleteAt_Vector_Rc_BTree_int_User (veci , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let6467 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6469 */
                                                      clone_Box_Vector_Rc_BTree_int_User (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6474 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6476 */
                                        None_Rc_BTree_int_User ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6481 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6483 */
                              clone_Box_Vector_Rc_BTree_int_User (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6488 */
              // ----------
              ;
              ({ /* cicili#Progn6490 */
                None_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
Vector_Rc_BTree_int_User insertAt_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector , Rc_BTree_int_User item , size_t index ) {
  return ({ /* cicili#Let6496 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6500 */
        __auto_type match6499  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6499 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6503 */
          bool __h_case_result  = (true  &&  (((match6499 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6504 */
                (unboxed  =  (((match6499 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6509 */
              ({ /* cicili#Let6513 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6515 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6516 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6521 */
                      ({ /* cicili#Let6525 */
                        __auto_type match6524  = take_Box_Vector_Rc_BTree_int_User ((&vector ));
                        typeof((((match6524 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let6528 */
                          bool __h_case_result  = (true  &&  (((match6524 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6529 */
                                (ptr  =  (((match6524 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6534 */
                              ({ /* cicili#Let6536 */
                                StringBuffer_Rc_BTree_int_User new_sb  = put_StringBuffer_Rc_BTree_int_User (sb , item );
                                // ----------
                                free (((void *)ptr ));
                                ({ /* cicili#Let6542 */
                                  typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6544 */
                                    bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6545 */
                                            (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn6547 */
                                            (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6552 */
                                        ({ /* cicili#Progn6554 */
                                          for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                          }
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_Rc_BTree_int_User (new_sb );
                                        });
                                      }) : ({ /* cicili#Let6561 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn6563 */
                                          clone_Box_Vector_Rc_BTree_int_User (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let6568 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6570 */
                                None_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6575 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6577 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6578 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6580 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6582 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6587 */
                            ({ /* cicili#Let6590 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6594 */
                                __auto_type match6593  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6593 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6597 */
                                  bool __h_case_result  = (true  &&  (((match6593 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6598 */
                                        (unboxed  =  (((match6593 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6603 */
                                      ({ /* cicili#Let6607 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6609 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6610 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6615 */
                                              ({ /* cicili#Let6619 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let6621 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6622 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn6624 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6629 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let6632 */
                                                          StringBuffer_Rc_BTree_int_User new_sb  = newCapacity_StringBuffer_Rc_BTree_int_User ((size  +  1 ), step );
                                                          // ----------
                                                          Buffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (put_StringBuffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let6642 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn6644 */
                                                        None_Rc_BTree_int_User ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6649 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6651 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6652 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6657 */
                                                    insertAt_Vector_Rc_BTree_int_User (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let6662 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6664 */
                                                      clone_Box_Vector_Rc_BTree_int_User (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6669 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6671 */
                                        None_Rc_BTree_int_User ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6676 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6678 */
                              clone_Box_Vector_Rc_BTree_int_User (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6683 */
              // ----------
              ;
              ({ /* cicili#Progn6685 */
                None_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
Vector_Rc_BTree_int_User reverse_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector ) {
  return ({ /* cicili#Let6691 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6695 */
        __auto_type match6694  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6694 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6698 */
          bool __h_case_result  = (true  &&  (((match6694 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6699 */
                (unboxed  =  (((match6694 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6704 */
              ({ /* cicili#Let6708 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6710 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6711 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6716 */
                      ({ /* cicili#Let6720 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let6722 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn6723 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn6725 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn6727 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn6729 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6734 */
                              ({ /* cicili#Let6738 */
                                __auto_type match6737  = take_Box_Vector_Rc_BTree_int_User ((&vector ));
                                typeof((((match6737 . __h_data ). Just ). __h_0_mem )) ptr ;
                                // ----------
                                ;
                                ({ /* cicili#Let6741 */
                                  bool __h_case_result  = (true  &&  (((match6737 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6742 */
                                        (ptr  =  (((match6737 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6747 */
                                      ({ /* cicili#Let6749 */
                                        Rc_BTree_int_User tmp ;
                                        // ----------
                                        free (((void *)ptr ));
                                        for (size_t i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                            tmp  = (*(buffer  +  i  ));
                                            (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                            (*(buffer  +  (j  -  1 ) )) = tmp ;
                                        }
                                        Buffer_Rc_BTree_int_User (MakeStringBuffer_Rc_BTree_int_User (buffer , cursor , size , step ));
                                      });
                                    }) : ({ /* cicili#Let6757 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6759 */
                                        None_Rc_BTree_int_User ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let6764 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6766 */
                                None_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6771 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6773 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6774 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6776 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6778 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6783 */
                            ({ /* cicili#Let6786 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6790 */
                                __auto_type match6789  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6789 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6793 */
                                  bool __h_case_result  = (true  &&  (((match6789 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6794 */
                                        (unboxed  =  (((match6789 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6799 */
                                      ({ /* cicili#Let6803 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6805 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6806 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6811 */
                                              reverse_Vector_Rc_BTree_int_User (Buffer_Rc_BTree_int_User (copySlice_StringBuffer_Rc_BTree_int_User (sbs , cur , size )));
                                            }) : ({ /* cicili#Let6818 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6820 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6821 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6826 */
                                                    reverse_Vector_Rc_BTree_int_User (copySlice_Vector_Rc_BTree_int_User (veci , cur , size ));
                                                  }) : ({ /* cicili#Let6832 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6834 */
                                                      clone_Box_Vector_Rc_BTree_int_User (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6839 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6841 */
                                        None_Rc_BTree_int_User ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6846 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6848 */
                              clone_Box_Vector_Rc_BTree_int_User (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6853 */
              // ----------
              ;
              ({ /* cicili#Progn6855 */
                None_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
Vector_Rc_BTree_int_User append_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User lvector , Vector_Rc_BTree_int_User rvector ) {
  return ({ /* cicili#Let6861 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let6865 */
        __auto_type match6864  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6864 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6868 */
          bool __h_case_result  = (true  &&  (((match6864 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6869 */
                (unboxed  =  (((match6864 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6874 */
              ({ /* cicili#Let6878 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6880 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6881 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6886 */
                      ({ /* cicili#Let6890 */
                        __auto_type match6889  = take_Box_Vector_Rc_BTree_int_User ((&lvector ));
                        typeof((((match6889 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let6893 */
                          bool __h_case_result  = (true  &&  (((match6889 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6894 */
                                (ptr  =  (((match6889 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6899 */
                              ({ /* cicili#Progn6901 */
                                free (((void *)ptr ));
                                Buffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (sb , toArray_Vector_Rc_BTree_int_User (rvector ), len_Vector_Rc_BTree_int_User (rvector )));
                              });
                            }) : ({ /* cicili#Let6909 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6911 */
                                None_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6916 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6918 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6919 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6921 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6923 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6928 */
                            ({ /* cicili#Let6931 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6935 */
                                __auto_type match6934  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6934 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6938 */
                                  bool __h_case_result  = (true  &&  (((match6934 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6939 */
                                        (unboxed  =  (((match6934 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6944 */
                                      ({ /* cicili#Let6948 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6950 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6951 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6956 */
                                              Buffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (copySlice_StringBuffer_Rc_BTree_int_User (sbs , cur , size ), toArray_Vector_Rc_BTree_int_User (rvector ), len_Vector_Rc_BTree_int_User (rvector )));
                                            }) : ({ /* cicili#Let6965 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6967 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6968 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6973 */
                                                    append_Vector_Rc_BTree_int_User (copySlice_Vector_Rc_BTree_int_User (veci , cur , size ), rvector );
                                                  }) : ({ /* cicili#Let6979 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6981 */
                                                      clone_Box_Vector_Rc_BTree_int_User (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6986 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6988 */
                                        None_Rc_BTree_int_User ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6993 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6995 */
                              clone_Box_Vector_Rc_BTree_int_User (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7000 */
              // ----------
              ;
              ({ /* cicili#Progn7002 */
                None_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
Vector_Rc_BTree_int_User push_Vector_Rc_BTree_int_User (Rc_BTree_int_User item , Vector_Rc_BTree_int_User vector ) {
  return ({ /* cicili#Let7008 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7012 */
        __auto_type match7011  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7011 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7015 */
          bool __h_case_result  = (true  &&  (((match7011 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7016 */
                (unboxed  =  (((match7011 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7021 */
              ({ /* cicili#Let7025 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7027 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7028 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7033 */
                      ({ /* cicili#Let7037 */
                        __auto_type match7036  = take_Box_Vector_Rc_BTree_int_User ((&vector ));
                        typeof((((match7036 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let7040 */
                          bool __h_case_result  = (true  &&  (((match7036 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7041 */
                                (ptr  =  (((match7036 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7046 */
                              ({ /* cicili#Progn7048 */
                                free (((void *)ptr ));
                                Buffer_Rc_BTree_int_User (put_StringBuffer_Rc_BTree_int_User (sb , item ));
                              });
                            }) : ({ /* cicili#Let7054 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7056 */
                                None_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7061 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let7063 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn7064 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7066 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn7068 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7073 */
                            ({ /* cicili#Let7076 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let7080 */
                                __auto_type match7079  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match7079 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let7083 */
                                  bool __h_case_result  = (true  &&  (((match7079 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7084 */
                                        (unboxed  =  (((match7079 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn7089 */
                                      ({ /* cicili#Let7093 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let7095 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7096 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn7101 */
                                              Buffer_Rc_BTree_int_User (put_StringBuffer_Rc_BTree_int_User (copySlice_StringBuffer_Rc_BTree_int_User (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let7108 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let7110 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn7111 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn7116 */
                                                    push_Vector_Rc_BTree_int_User (item , copySlice_Vector_Rc_BTree_int_User (veci , cur , size ));
                                                  }) : ({ /* cicili#Let7122 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn7124 */
                                                      clone_Box_Vector_Rc_BTree_int_User (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let7129 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn7131 */
                                        None_Rc_BTree_int_User ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let7136 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7138 */
                              clone_Box_Vector_Rc_BTree_int_User (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7143 */
              // ----------
              ;
              ({ /* cicili#Progn7145 */
                None_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
Vector_Rc_BTree_int_User take_Vector_Rc_BTree_int_User (size_t len , Vector_Rc_BTree_int_User vector ) {
  return ({ /* cicili#Let7151 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7155 */
        __auto_type match7154  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7154 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7158 */
          bool __h_case_result  = (true  &&  (((match7154 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7159 */
                (unboxed  =  (((match7154 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7164 */
              ({ /* cicili#Let7168 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7170 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7171 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7176 */
                      ({ /* cicili#Let7180 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7182 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn7183 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7188 */
                              (((len  <=  0 )) ? Slice_Rc_BTree_int_User (clone_Box_Vector_Rc_BTree_int_User (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_Rc_BTree_int_User (clone_Box_Vector_Rc_BTree_int_User (vector ), 0, len ) : Slice_Rc_BTree_int_User (clone_Box_Vector_Rc_BTree_int_User (vector ), 0, 0)));
                            }) : ({ /* cicili#Let7200 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7202 */
                                Slice_Rc_BTree_int_User (clone_Box_Vector_Rc_BTree_int_User (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7208 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let7210 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn7211 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7213 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn7215 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7220 */
                            (((len  <=  0 )) ? Slice_Rc_BTree_int_User (clone_Box_Vector_Rc_BTree_int_User (vec ), cursor , 0) : (((len  <  size  )) ? Slice_Rc_BTree_int_User (clone_Box_Vector_Rc_BTree_int_User (vec ), cursor , len ) : Slice_Rc_BTree_int_User (clone_Box_Vector_Rc_BTree_int_User (vec ), cursor , 0)));
                          }) : ({ /* cicili#Let7232 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7234 */
                              clone_Box_Vector_Rc_BTree_int_User (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7239 */
              // ----------
              ;
              ({ /* cicili#Progn7241 */
                None_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
Maybe_Rc_BTree_int_User last_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector ) {
  return ({ /* cicili#Let7248 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7252 */
        __auto_type match7251  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7251 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7255 */
          bool __h_case_result  = (true  &&  (((match7251 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7256 */
                (unboxed  =  (((match7251 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7261 */
              ({ /* cicili#Let7265 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7267 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7268 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7273 */
                      ({ /* cicili#Let7277 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7279 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn7280 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7282 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7287 */
                              Just_Rc_BTree_int_User ((*(buffer  +  (cursor  -  1 ) )));
                            }) : ({ /* cicili#Let7292 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7294 */
                                Nothing_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7299 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let7301 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn7302 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7304 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn7306 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7311 */
                            nth_Vector_Rc_BTree_int_User ((cursor  +  (size  -  1 ) ), vec );
                          }) : ({ /* cicili#Let7316 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7318 */
                              Nothing_Rc_BTree_int_User ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7323 */
              // ----------
              ;
              ({ /* cicili#Progn7325 */
                Nothing_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
Vector_Rc_BTree_int_User init_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector ) {
  return ({ /* cicili#Let7331 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7335 */
        __auto_type match7334  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7334 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7338 */
          bool __h_case_result  = (true  &&  (((match7334 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7339 */
                (unboxed  =  (((match7334 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7344 */
              ({ /* cicili#Let7348 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7350 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7351 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7356 */
                      ({ /* cicili#Let7360 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7362 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn7363 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7368 */
                              Slice_Rc_BTree_int_User (clone_Box_Vector_Rc_BTree_int_User (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let7374 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7376 */
                                None_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7381 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let7383 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn7384 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7386 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn7388 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7393 */
                            Slice_Rc_BTree_int_User (clone_Box_Vector_Rc_BTree_int_User (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let7399 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7401 */
                              clone_Box_Vector_Rc_BTree_int_User (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7406 */
              // ----------
              ;
              ({ /* cicili#Progn7408 */
                None_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
size_t hasLen_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector , size_t desired ) {
  return ({ /* cicili#Let7413 */
      size_t len  = len_Vector_Rc_BTree_int_User (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector ) {
  return ({ /* cicili#Let7420 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7424 */
        __auto_type match7423  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7423 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7427 */
          bool __h_case_result  = (true  &&  (((match7423 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7428 */
                (unboxed  =  (((match7423 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7433 */
              ({ /* cicili#Let7437 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7439 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7440 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7445 */
                      ({ /* cicili#Let7449 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7451 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn7452 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7457 */
                              cursor ;
                            }) : ({ /* cicili#Let7461 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7463 */
                                0;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7467 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let7469 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn7470 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7475 */
                            size ;
                          }) : ({ /* cicili#Let7479 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7481 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7485 */
              // ----------
              ;
              ({ /* cicili#Progn7487 */
                0;
              });
            }));
        });
      });
    });
}
Vector_Rc_BTree_int_User tail_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector ) {
  return drop_Vector_Rc_BTree_int_User (1, vector );
}
Vector_Rc_BTree_int_User drop_Vector_Rc_BTree_int_User (size_t len , Vector_Rc_BTree_int_User vector ) {
  return ({ /* cicili#Let7495 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7499 */
        __auto_type match7498  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7498 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7502 */
          bool __h_case_result  = (true  &&  (((match7498 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7503 */
                (unboxed  =  (((match7498 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7508 */
              ({ /* cicili#Let7512 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7514 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7515 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7520 */
                      ({ /* cicili#Let7524 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7526 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn7527 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7532 */
                              (((len  <=  0 )) ? Slice_Rc_BTree_int_User (clone_Box_Vector_Rc_BTree_int_User (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_Rc_BTree_int_User (clone_Box_Vector_Rc_BTree_int_User (vector ), len , (cursor  -  len  )) : Slice_Rc_BTree_int_User (clone_Box_Vector_Rc_BTree_int_User (vector ), 0, 0)));
                            }) : ({ /* cicili#Let7544 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7546 */
                                None_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7551 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let7553 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn7554 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn7556 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7561 */
                            drop_Vector_Rc_BTree_int_User ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let7566 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7568 */
                              clone_Box_Vector_Rc_BTree_int_User (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7573 */
              // ----------
              ;
              ({ /* cicili#Progn7575 */
                None_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
Maybe_Rc_BTree_int_User head_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector ) {
  return ({ /* cicili#Let7582 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7586 */
        __auto_type match7585  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7585 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7589 */
          bool __h_case_result  = (true  &&  (((match7585 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7590 */
                (unboxed  =  (((match7585 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7595 */
              ({ /* cicili#Let7599 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7601 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7602 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7607 */
                      ({ /* cicili#Let7611 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7613 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn7614 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7616 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7621 */
                              (((cursor  >  0 )) ? Just_Rc_BTree_int_User ((*buffer )) : Nothing_Rc_BTree_int_User ());
                            }) : ({ /* cicili#Let7628 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7630 */
                                Nothing_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7635 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let7637 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn7638 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn7640 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7645 */
                            nth_Vector_Rc_BTree_int_User (cursor , vector );
                          }) : ({ /* cicili#Let7650 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7652 */
                              Nothing_Rc_BTree_int_User ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7657 */
              // ----------
              ;
              ({ /* cicili#Progn7659 */
                Nothing_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
Maybe_Rc_BTree_int_User nth_Vector_Rc_BTree_int_User (size_t index , Vector_Rc_BTree_int_User vector ) {
  return ({ /* cicili#Let7666 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7670 */
        __auto_type match7669  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7669 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7673 */
          bool __h_case_result  = (true  &&  (((match7669 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7674 */
                (unboxed  =  (((match7669 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7679 */
              ({ /* cicili#Let7683 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7685 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7686 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7691 */
                      ({ /* cicili#Let7695 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7697 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn7698 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7700 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7705 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_Rc_BTree_int_User ((*(buffer  +  index  ))) : Nothing_Rc_BTree_int_User ());
                            }) : ({ /* cicili#Let7712 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7714 */
                                Nothing_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7719 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let7721 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn7722 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7724 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn7726 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7731 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_Rc_BTree_int_User ((cursor  +  index  ), vector ) : Nothing_Rc_BTree_int_User ());
                          }) : ({ /* cicili#Let7738 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7740 */
                              Nothing_Rc_BTree_int_User ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7745 */
              // ----------
              ;
              ({ /* cicili#Progn7747 */
                Nothing_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
void free_Vector_Rc_BTree_int_User_x (Vector_Rc_BTree_int_User_x * this_ptr ) {
  { /* cicili#Let7752 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let7756 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let7758 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7759 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block7765 */
            free_StringBuffer_Rc_BTree_int_User ((&sb ));
          }
        else
          { /* cicili#Let7771 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let7773 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn7774 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block7780 */
                  free_Box_Vector_Rc_BTree_int_User ((&vector ));
                }
            });
          }
      });
    }
    free (this );
  }
}
Vector_Rc_BTree_int_User__H_Table * const get_Vector_Rc_BTree_int_User__H_Table () {
  static Vector_Rc_BTree_int_User__H_Table table  = { free_Vector_Rc_BTree_int_User_x , iterator_Vector_Rc_BTree_int_User , resize_Vector_Rc_BTree_int_User , pure_Vector_Rc_BTree_int_User , pureCapacity_Vector_Rc_BTree_int_User , toArray_Vector_Rc_BTree_int_User , wrap_Vector_Rc_BTree_int_User , show_Vector_Rc_BTree_int_User , copy_Vector_Rc_BTree_int_User , copySlice_Vector_Rc_BTree_int_User , replaceAt_Vector_Rc_BTree_int_User , deleteAt_Vector_Rc_BTree_int_User , insertAt_Vector_Rc_BTree_int_User , reverse_Vector_Rc_BTree_int_User , append_Vector_Rc_BTree_int_User , push_Vector_Rc_BTree_int_User , take_Vector_Rc_BTree_int_User , last_Vector_Rc_BTree_int_User , init_Vector_Rc_BTree_int_User , hasLen_Vector_Rc_BTree_int_User , len_Vector_Rc_BTree_int_User , tail_Vector_Rc_BTree_int_User , drop_Vector_Rc_BTree_int_User , head_Vector_Rc_BTree_int_User , nth_Vector_Rc_BTree_int_User };
  return (&table );
}
Vector_Rc_BTree_int_User Buffer_Rc_BTree_int_User (StringBuffer_Rc_BTree_int_User buffer ) {
  { /* cicili#Let7790 */
    Vector_Rc_BTree_int_User_x instance  = malloc (sizeof(class_Vector_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_Vector_Rc_BTree_int_User){ get_Vector_Rc_BTree_int_User__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Vector_Rc_BTree_int_User (instance );
  }
}
Vector_Rc_BTree_int_User Slice_Rc_BTree_int_User (Vector_Rc_BTree_int_User vector , size_t cursor , size_t size ) {
  { /* cicili#Let7798 */
    Vector_Rc_BTree_int_User_x instance  = malloc (sizeof(class_Vector_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_Vector_Rc_BTree_int_User){ get_Vector_Rc_BTree_int_User__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_Vector_Rc_BTree_int_User (instance );
  }
}
Vector_Rc_BTree_int_User None_Rc_BTree_int_User () {
  { /* cicili#Let7805 */
    Vector_Rc_BTree_int_User_x instance  = malloc (sizeof(class_Vector_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_Vector_Rc_BTree_int_User){ get_Vector_Rc_BTree_int_User__H_Table (), __h___t });
    return new_Box_Vector_Rc_BTree_int_User (instance );
  }
}
#endif /* __Vector_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_Vector_Rc_BTree_int_User__H_IMPL__
#define __Maybe_Vector_Rc_BTree_int_User__H_IMPL__
void free_Maybe_Vector_Rc_BTree_int_User (Maybe_Vector_Rc_BTree_int_User * this ) {
}
const Maybe_Vector_Rc_BTree_int_User__H_Table * const get_Maybe_Vector_Rc_BTree_int_User__H_Table () {
  static const Maybe_Vector_Rc_BTree_int_User__H_Table table  = { free_Maybe_Vector_Rc_BTree_int_User };
  return (&table );
}
Maybe_Vector_Rc_BTree_int_User Just_Vector_Rc_BTree_int_User (Vector_Rc_BTree_int_User value ) {
  { /* cicili#Let7823 */
    Maybe_Vector_Rc_BTree_int_User instance  = ((Maybe_Vector_Rc_BTree_int_User){ get_Maybe_Vector_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_Rc_BTree_int_User Nothing_Vector_Rc_BTree_int_User () {
  { /* cicili#Let7828 */
    Maybe_Vector_Rc_BTree_int_User instance  = ((Maybe_Vector_Rc_BTree_int_User){ get_Maybe_Vector_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Functor_Vector_Rc_BTree_int_User__H_IMPL__
#define __Functor_Vector_Rc_BTree_int_User__H_IMPL__
Vector_Rc_BTree_int_User fmap_Functor_Vector_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , Vector_Rc_BTree_int_User input ) {
  return ({ /* cicili#Let7851 */
      __auto_type __h_matchbox  = input ;
      // ----------
      ({ /* cicili#Let7855 */
        __auto_type match7854  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7854 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7858 */
          bool __h_case_result  = (true  &&  (((match7854 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7859 */
                (unboxed  =  (((match7854 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7864 */
              ({ /* cicili#Let7868 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbi ;
                // ----------
                ;
                ({ /* cicili#Let7870 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7871 */
                        (sbi  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7876 */
                      ({ /* cicili#Let7880 */
                        typeof((((sbi . __h_data ). Buffered ). __h_0_mem )) bufferA ;
                        typeof((((sbi . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sbi . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let7882 */
                          bool __h_case_result  = (true  &&  (((sbi . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn7883 */
                                    (bufferA  =  (((sbi . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn7885 */
                                    (cursor  =  (((sbi . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn7887 */
                                  (step  =  (((sbi . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7892 */
                              ({ /* cicili#Let7894 */
                                Vector_Rc_BTree_int_User output  = pureCapacity_Vector_Rc_BTree_int_User (cursor , step );
                                // ----------
                                ({ /* cicili#Let7899 */
                                  __auto_type __h_matchbox  = output ;
                                  // ----------
                                  ({ /* cicili#Let7903 */
                                    __auto_type match7902  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                    typeof((((match7902 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let7906 */
                                      bool __h_case_result  = (true  &&  (((match7902 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7907 */
                                            (unboxed  =  (((match7902 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn7912 */
                                          ({ /* cicili#Let7916 */
                                            typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbo ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let7918 */
                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7919 */
                                                    (sbo  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn7924 */
                                                  ({ /* cicili#Let7928 */
                                                    typeof((((sbo . __h_data ). Buffered ). __h_0_mem )) bufferB ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let7930 */
                                                      bool __h_case_result  = (true  &&  (((sbo . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn7931 */
                                                            (bufferB  =  (((sbo . __h_data ). Buffered ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn7936 */
                                                          ({ /* cicili#Progn7938 */
                                                            for (size_t counter  = 0; (counter  <  cursor  ); (++counter )) {
                                                                (*(bufferB  +  counter  )) = a_b ((*(bufferA  +  counter  )));
                                                            }
                                                            output ;
                                                          });
                                                        }) : ({ /* cicili#Let7945 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn7947 */
                                                            None_Rc_BTree_int_User ();
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let7952 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn7954 */
                                                    None_Rc_BTree_int_User ();
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let7959 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn7961 */
                                            None_Rc_BTree_int_User ();
                                          });
                                        }));
                                    });
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let7966 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7968 */
                                None_Rc_BTree_int_User ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7973 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let7975 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn7976 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn7978 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7983 */
                            ({ /* cicili#Let7986 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let7990 */
                                __auto_type match7989  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match7989 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let7993 */
                                  bool __h_case_result  = (true  &&  (((match7989 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7994 */
                                        (unboxed  =  (((match7989 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn7999 */
                                      ({ /* cicili#Let8003 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbsi ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let8005 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn8006 */
                                                (sbsi  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn8011 */
                                              ({ /* cicili#Let8015 */
                                                typeof((((sbsi . __h_data ). Buffered ). __h_0_mem )) bufferA ;
                                                typeof((((sbsi . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                                typeof((((sbsi . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let8017 */
                                                  bool __h_case_result  = (true  &&  (((sbsi . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn8018 */
                                                            (bufferA  =  (((sbsi . __h_data ). Buffered ). __h_0_mem ) );
                                                            true ;
                                                          }) &&  ({ /* cicili#Progn8020 */
                                                            (cursor  =  (((sbsi . __h_data ). Buffered ). __h_1_mem ) );
                                                            true ;
                                                          }) ) &&  ({ /* cicili#Progn8022 */
                                                          (step  =  (((sbsi . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8027 */
                                                      ({ /* cicili#Let8029 */
                                                        Vector_Rc_BTree_int_User output  = pureCapacity_Vector_Rc_BTree_int_User ((cursor  -  cur  ), step );
                                                        // ----------
                                                        ({ /* cicili#Let8034 */
                                                          __auto_type __h_matchbox  = output ;
                                                          // ----------
                                                          ({ /* cicili#Let8038 */
                                                            __auto_type match8037  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                            typeof((((match8037 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let8041 */
                                                              bool __h_case_result  = (true  &&  (((match8037 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8042 */
                                                                    (unboxed  =  (((match8037 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8047 */
                                                                  ({ /* cicili#Let8051 */
                                                                    typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbo ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let8053 */
                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn8054 */
                                                                            (sbo  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8059 */
                                                                          ({ /* cicili#Let8063 */
                                                                            typeof((((sbo . __h_data ). Buffered ). __h_0_mem )) bufferB ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let8065 */
                                                                              bool __h_case_result  = (true  &&  (((sbo . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn8066 */
                                                                                    (bufferB  =  (((sbo . __h_data ). Buffered ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn8071 */
                                                                                  ({ /* cicili#Progn8073 */
                                                                                    for (size_t counter  = cur ; (counter  <  cursor  ); (++counter )) {
                                                                                        (*(bufferB  +  (counter  -  cur  ) )) = a_b ((*(bufferA  +  counter  )));
                                                                                    }
                                                                                    output ;
                                                                                  });
                                                                                }) : ({ /* cicili#Let8080 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn8082 */
                                                                                    None_Rc_BTree_int_User ();
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* cicili#Let8087 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn8089 */
                                                                            None_Rc_BTree_int_User ();
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let8094 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn8096 */
                                                                    None_Rc_BTree_int_User ();
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let8101 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn8103 */
                                                        None_Rc_BTree_int_User ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8108 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let8110 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn8111 */
                                                      (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn8116 */
                                                    fmap_Functor_Vector_Rc_BTree_int_User (a_b , vec );
                                                  }) : ({ /* cicili#Let8121 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn8123 */
                                                      None_Rc_BTree_int_User ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let8128 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn8130 */
                                        None_Rc_BTree_int_User ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let8135 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8137 */
                              None_Rc_BTree_int_User ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8142 */
              // ----------
              ;
              ({ /* cicili#Progn8144 */
                None_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
void free_Functor_Vector_Rc_BTree_int_User (Functor_Vector_Rc_BTree_int_User * this ) {
}
const Functor_Vector_Rc_BTree_int_User__H_Table * const get_Functor_Vector_Rc_BTree_int_User__H_Table () {
  static const Functor_Vector_Rc_BTree_int_User__H_Table table  = { free_Functor_Vector_Rc_BTree_int_User , fmap_Functor_Vector_Rc_BTree_int_User };
  return (&table );
}
Functor_Vector_Rc_BTree_int_User Functor_Vector_Rc_BTree_int_User_ctor () {
  { /* cicili#Let8158 */
    Functor_Vector_Rc_BTree_int_User instance  = ((Functor_Vector_Rc_BTree_int_User){ get_Functor_Vector_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_Vector_Rc_BTree_int_User__H_IMPL__ */ 
Functor_Vector_Rc_BTree_int_User get_Functor_Vector_Rc_BTree_int_User () {
  return Functor_Vector_Rc_BTree_int_User_ctor ();
}
size_t U_BTree_int_User  = 3;
size_t L_BTree_int_User  = 2;
BTree_int_User split_BTree_int_User (BTree_int_User tree ) {
  return ({ /* cicili#Let8176 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let8178 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8179 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8181 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8186 */
            (((len_Vector_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let8192 */
                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8194 */
                  __auto_type tree  = tree ;
                  // ----------
                  ((void)(tree -> __h_table -> freeClass ));
                  tree ;
                });
                // ----------
                Branch_BTree_int_User (wrap_Vector_BTree_int_User_pair_t (({ /* cicili#Let8202 */
                    __auto_type match8201  = nth_Vector_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                    typeof((((match8201 . __h_data ). Just ). __h_0_mem )) nitem ;
                    // ----------
                    ;
                    ({ /* cicili#Let8206 */
                      bool __h_case_result  = (true  &&  (((match8201 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8207 */
                            (nitem  =  (((match8201 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn8212 */
                          nitem ;
                        }) : ({ /* cicili#Let8216 */
                          // ----------
                          ;
                          ({ /* cicili#Progn8218 */
                            ((BTree_int_User_pair_t){ });
                          });
                        }));
                    });
                  })), ({ /* cicili#Let8224 */
                    StringBuffer_Rc_BTree_int_User tmp_buf8223  = newCapacity_StringBuffer_Rc_BTree_int_User (2, 16);
                    // ----------
                    Buffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (tmp_buf8223 , ((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_Vector_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let8237 */
                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8239 */
                            __auto_type r1  = take_Vector_Rc_BTree_int_User (L_BTree_int_User , children );
                            // ----------
                            ((void)((r1 . __h_table )-> freeData ));
                            r1 ;
                          });
                          // ----------
                          fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn8249 */
                              Rc_BTree_int_User __ciciliC_8248 (Rc_BTree_int_User __h_value ) {
                                return clone_Rc_BTree_int_User (__h_value );
                              }
                              __ciciliC_8248 ;
                            }), r1 );
                        }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_Vector_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let8260 */
                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8262 */
                            __auto_type r1  = drop_Vector_Rc_BTree_int_User (L_BTree_int_User , children );
                            // ----------
                            ((void)((r1 . __h_table )-> freeData ));
                            r1 ;
                          });
                          // ----------
                          fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn8272 */
                              Rc_BTree_int_User __ciciliC_8271 (Rc_BTree_int_User __h_value ) {
                                return clone_Rc_BTree_int_User (__h_value );
                              }
                              __ciciliC_8271 ;
                            }), r1 );
                        })))}), 2));
                  }));
              }) : tree );
          }) : ({ /* cicili#Let8279 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let8281 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8282 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn8284 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn8289 */
                  (((len_Vector_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let8295 */
                      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8297 */
                        __auto_type tree  = tree ;
                        // ----------
                        ((void)(tree -> __h_table -> freeClass ));
                        tree ;
                      });
                      // ----------
                      Branch_BTree_int_User (wrap_Vector_BTree_int_User_pair_t (({ /* cicili#Let8305 */
                          __auto_type match8304  = nth_Vector_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                          typeof((((match8304 . __h_data ). Just ). __h_0_mem )) nitem ;
                          // ----------
                          ;
                          ({ /* cicili#Let8309 */
                            bool __h_case_result  = (true  &&  (((match8304 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8310 */
                                  (nitem  =  (((match8304 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn8315 */
                                nitem ;
                              }) : ({ /* cicili#Let8319 */
                                // ----------
                                ;
                                ({ /* cicili#Progn8321 */
                                  ((BTree_int_User_pair_t){ });
                                });
                              }));
                          });
                        })), ({ /* cicili#Let8327 */
                          StringBuffer_Rc_BTree_int_User tmp_buf8326  = newCapacity_StringBuffer_Rc_BTree_int_User (2, 16);
                          // ----------
                          Buffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (tmp_buf8326 , ((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_Vector_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let8340 */
                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8342 */
                                  __auto_type r1  = take_Vector_Rc_BTree_int_User (L_BTree_int_User , children );
                                  // ----------
                                  ((void)((r1 . __h_table )-> freeData ));
                                  r1 ;
                                });
                                // ----------
                                fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn8352 */
                                    Rc_BTree_int_User __ciciliC_8351 (Rc_BTree_int_User __h_value ) {
                                      return clone_Rc_BTree_int_User (__h_value );
                                    }
                                    __ciciliC_8351 ;
                                  }), r1 );
                              }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_Vector_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let8363 */
                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8365 */
                                  __auto_type r1  = drop_Vector_Rc_BTree_int_User (L_BTree_int_User , children );
                                  // ----------
                                  ((void)((r1 . __h_table )-> freeData ));
                                  r1 ;
                                });
                                // ----------
                                fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn8375 */
                                    Rc_BTree_int_User __ciciliC_8374 (Rc_BTree_int_User __h_value ) {
                                      return clone_Rc_BTree_int_User (__h_value );
                                    }
                                    __ciciliC_8374 ;
                                  }), r1 );
                              })))}), 2));
                        }));
                    }) : tree );
                }) : ({ /* cicili#Let8382 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let8384 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8385 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn8390 */
                        (((len_Vector_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let8396 */
                            __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8398 */
                              __auto_type tree  = tree ;
                              // ----------
                              ((void)(tree -> __h_table -> freeClass ));
                              tree ;
                            });
                            // ----------
                            Branch_BTree_int_User (wrap_Vector_BTree_int_User_pair_t (({ /* cicili#Let8406 */
                                __auto_type match8405  = nth_Vector_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                                typeof((((match8405 . __h_data ). Just ). __h_0_mem )) nitem ;
                                // ----------
                                ;
                                ({ /* cicili#Let8410 */
                                  bool __h_case_result  = (true  &&  (((match8405 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8411 */
                                        (nitem  =  (((match8405 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn8416 */
                                      nitem ;
                                    }) : ({ /* cicili#Let8420 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn8422 */
                                        ((BTree_int_User_pair_t){ });
                                      });
                                    }));
                                });
                              })), ({ /* cicili#Let8428 */
                                StringBuffer_Rc_BTree_int_User tmp_buf8427  = newCapacity_StringBuffer_Rc_BTree_int_User (2, 16);
                                // ----------
                                Buffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (tmp_buf8427 , ((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_Vector_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_Vector_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2));
                              }));
                          }) : tree );
                      }) : ({ /* cicili#Let8447 */
                        // ----------
                        ;
                        ({ /* cicili#Progn8449 */
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
  return ({ /* cicili#Let8455 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let8457 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8458 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8460 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8465 */
            (((len_Vector_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_Vector_BTree_int_User_pair_t (({ /* cicili#Let8475 */
                __auto_type match8474  = nth_Vector_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                typeof((((match8474 . __h_data ). Just ). __h_0_mem )) nitem ;
                // ----------
                ;
                ({ /* cicili#Let8479 */
                  bool __h_case_result  = (true  &&  (((match8474 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8480 */
                        (nitem  =  (((match8474 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8485 */
                      nitem ;
                    }) : ({ /* cicili#Let8489 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8491 */
                        ((BTree_int_User_pair_t){ });
                      });
                    }));
                });
              })), ({ /* cicili#Let8497 */
                StringBuffer_Rc_BTree_int_User tmp_buf8496  = newCapacity_StringBuffer_Rc_BTree_int_User (2, 16);
                // ----------
                Buffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (tmp_buf8496 , ((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_Vector_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let8510 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8512 */
                        __auto_type r1  = take_Vector_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)((r1 . __h_table )-> freeData ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn8522 */
                          Rc_BTree_int_User __ciciliC_8521 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_8521 ;
                        }), r1 );
                    }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_Vector_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let8533 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8535 */
                        __auto_type r1  = drop_Vector_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)((r1 . __h_table )-> freeData ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn8545 */
                          Rc_BTree_int_User __ciciliC_8544 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_8544 ;
                        }), r1 );
                    })))}), 2));
              })) : tree );
          }) : ({ /* cicili#Let8552 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let8554 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8555 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn8557 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn8562 */
                  (((len_Vector_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_Vector_BTree_int_User_pair_t (({ /* cicili#Let8572 */
                      __auto_type match8571  = nth_Vector_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                      typeof((((match8571 . __h_data ). Just ). __h_0_mem )) nitem ;
                      // ----------
                      ;
                      ({ /* cicili#Let8576 */
                        bool __h_case_result  = (true  &&  (((match8571 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8577 */
                              (nitem  =  (((match8571 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn8582 */
                            nitem ;
                          }) : ({ /* cicili#Let8586 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8588 */
                              ((BTree_int_User_pair_t){ });
                            });
                          }));
                      });
                    })), ({ /* cicili#Let8594 */
                      StringBuffer_Rc_BTree_int_User tmp_buf8593  = newCapacity_StringBuffer_Rc_BTree_int_User (2, 16);
                      // ----------
                      Buffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (tmp_buf8593 , ((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_Vector_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let8607 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8609 */
                              __auto_type r1  = take_Vector_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)((r1 . __h_table )-> freeData ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn8619 */
                                Rc_BTree_int_User __ciciliC_8618 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_8618 ;
                              }), r1 );
                          }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_Vector_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let8630 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8632 */
                              __auto_type r1  = drop_Vector_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)((r1 . __h_table )-> freeData ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn8642 */
                                Rc_BTree_int_User __ciciliC_8641 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_8641 ;
                              }), r1 );
                          })))}), 2));
                    })) : tree );
                }) : ({ /* cicili#Let8649 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let8651 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8652 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn8657 */
                        (((len_Vector_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_Vector_BTree_int_User_pair_t (({ /* cicili#Let8667 */
                            __auto_type match8666  = nth_Vector_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                            typeof((((match8666 . __h_data ). Just ). __h_0_mem )) nitem ;
                            // ----------
                            ;
                            ({ /* cicili#Let8671 */
                              bool __h_case_result  = (true  &&  (((match8666 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8672 */
                                    (nitem  =  (((match8666 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn8677 */
                                  nitem ;
                                }) : ({ /* cicili#Let8681 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn8683 */
                                    ((BTree_int_User_pair_t){ });
                                  });
                                }));
                            });
                          })), ({ /* cicili#Let8689 */
                            StringBuffer_Rc_BTree_int_User tmp_buf8688  = newCapacity_StringBuffer_Rc_BTree_int_User (2, 16);
                            // ----------
                            Buffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (tmp_buf8688 , ((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_Vector_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_Vector_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2));
                          })) : tree );
                      }) : ({ /* cicili#Let8708 */
                        // ----------
                        ;
                        ({ /* cicili#Progn8710 */
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
BTree_int_User mergeUp_BTree_int_User (Vector_BTree_int_User_pair_t items , Vector_Rc_BTree_int_User children , size_t pitem_index , size_t pchild_index , Vector_BTree_int_User_pair_t left_items , Vector_Rc_BTree_int_User left_children , Vector_BTree_int_User_pair_t right_items , Vector_Rc_BTree_int_User right_children ) {
  return ({ /* cicili#Let8717 */
      __auto_type merged  = Internal_BTree_int_User (append_Vector_BTree_int_User_pair_t (left_items , right_items ), ({ /* cicili#Let8722 */
        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8724 */
          __auto_type r1  = append_Vector_Rc_BTree_int_User (left_children , right_children );
          // ----------
          ((void)((r1 . __h_table )-> freeData ));
          r1 ;
        });
        // ----------
        fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn8733 */
            Rc_BTree_int_User __ciciliC_8732 (Rc_BTree_int_User __h_value ) {
              return clone_Rc_BTree_int_User (__h_value );
            }
            __ciciliC_8732 ;
          }), r1 );
      }));
      // ----------
      ({ /* cicili#Let8741 */
        __auto_type tmp_child  = splitForDelete_BTree_int_User (merged );
        typeof((((tmp_child -> __h_data ). Branch ). __h_0_mem )) tmp_items ;
        typeof((((tmp_child -> __h_data ). Branch ). __h_1_mem )) tmp_children ;
        // ----------
        ;
        ({ /* cicili#Let8744 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8745 */
                  (tmp_items  =  (((tmp_child -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8747 */
                  (tmp_children  =  (((tmp_child -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8752 */
              ({ /* cicili#Let8756 */
                __auto_type match8755  = head_Vector_BTree_int_User_pair_t (tmp_items );
                typeof((((match8755 . __h_data ). Just ). __h_0_mem )) head ;
                // ----------
                ;
                ({ /* cicili#Let8759 */
                  bool __h_case_result  = (true  &&  (((match8755 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8760 */
                        (head  =  (((match8755 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8765 */
                      ({ /* cicili#Let8768 */
                        __auto_type merged  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8770 */
                          __auto_type merged  = merged ;
                          // ----------
                          ((void)(merged -> __h_table -> freeClass ));
                          merged ;
                        });
                        __auto_type tmp_child  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8773 */
                          __auto_type tmp_child  = tmp_child ;
                          // ----------
                          ((void)(tmp_child -> __h_table -> freeClass ));
                          tmp_child ;
                        });
                        // ----------
                        Internal_BTree_int_User (replaceAt_Vector_BTree_int_User_pair_t (items , head , pitem_index ), ({ /* cicili#Let8780 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8782 */
                              __auto_type r1  = deleteAt_Vector_Rc_BTree_int_User (children , pchild_index );
                              // ----------
                              ((void)((r1 . __h_table )-> freeData ));
                              r1 ;
                            });
                            __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8786 */
                              __auto_type r2  = take_Vector_Rc_BTree_int_User (pchild_index , r1 );
                              // ----------
                              ((void)((r2 . __h_table )-> freeData ));
                              r2 ;
                            });
                            __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8790 */
                              __auto_type r3  = drop_Vector_Rc_BTree_int_User ((pchild_index  +  1 ), r1 );
                              // ----------
                              ((void)((r3 . __h_table )-> freeData ));
                              r3 ;
                            });
                            __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8794 */
                              __auto_type r4  = append_Vector_Rc_BTree_int_User (tmp_children , r3 );
                              // ----------
                              ((void)((r4 . __h_table )-> freeData ));
                              r4 ;
                            });
                            __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8798 */
                              __auto_type r5  = append_Vector_Rc_BTree_int_User (r2 , r4 );
                              // ----------
                              ((void)((r5 . __h_table )-> freeData ));
                              r5 ;
                            });
                            // ----------
                            fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn8807 */
                                Rc_BTree_int_User __ciciliC_8806 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_8806 ;
                              }), r5 );
                          }));
                      });
                    }) : ({ /* cicili#Let8814 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8816 */
                        Leaf_BTree_int_User (pure_Vector_BTree_int_User_pair_t ((3 -  1 )));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8822 */
              // ----------
              ;
              ({ /* cicili#Let8824 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor ) ==  __h_Internal_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn8828 */
                    Internal_BTree_int_User (deleteAt_Vector_BTree_int_User_pair_t (items , pitem_index ), ({ /* cicili#Let8834 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8836 */
                          __auto_type r1  = deleteAt_Vector_Rc_BTree_int_User (children , pchild_index );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8840 */
                          __auto_type r2  = new_Rc_BTree_int_User (merged );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8844 */
                          __auto_type r3  = replaceAt_Vector_Rc_BTree_int_User (r1 , r2 , pchild_index );
                          // ----------
                          ((void)((r3 . __h_table )-> freeData ));
                          r3 ;
                        });
                        // ----------
                        fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn8853 */
                            Rc_BTree_int_User __ciciliC_8852 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_8852 ;
                          }), r3 );
                      }));
                  }) : ({ /* cicili#Let8860 */
                    // ----------
                    ;
                    ({ /* cicili#Progn8862 */
                      Leaf_BTree_int_User (pure_Vector_BTree_int_User_pair_t ((3 -  1 )));
                    });
                  }));
              });
            }));
        });
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User deleteWithParent_BTree_int_User (Maybe_BTree_int_User wparent , size_t pitem_index , size_t pchild_index , BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item ));
Either_BTree_int_User_Error_BTree_int_User borrowLeaf_BTree_int_User (Vector_BTree_int_User_pair_t items , Vector_Rc_BTree_int_User children , Maybe_Vector_BTree_int_User_pair_t wleft , Vector_BTree_int_User_pair_t current , size_t index , BTree_int_User nchild , void (*callback) (BTree_int_User_pair_t item )) {
  Either_BTree_int_User_Error_BTree_int_User borrowRight (Vector_BTree_int_User_pair_t child_items ) {
    return ({ /* cicili#Let8889 */
        __auto_type match8888  = nth_Vector_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match8888 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let8892 */
          bool __h_case_result  = (true  &&  (((match8888 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8893 */
                (right_child_rc  =  (((match8888 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8898 */
              ({ /* cicili#Let8901 */
                __auto_type __h_matchbox  = right_child_rc ;
                // ----------
                ({ /* cicili#Let8905 */
                  __auto_type match8904  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match8904 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  ;
                  ({ /* cicili#Let8908 */
                    bool __h_case_result  = (true  &&  (((match8904 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8909 */
                          (unboxed  =  (((match8904 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn8914 */
                        ({ /* cicili#Let8918 */
                          typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                          // ----------
                          ;
                          ({ /* cicili#Let8920 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8921 */
                                  (right_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn8926 */
                                (((hasLen_Vector_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let8934 */
                                    __auto_type match8933  = head_Vector_BTree_int_User_pair_t (right_child_items );
                                    typeof((((match8933 . __h_data ). Just ). __h_0_mem )) first_item ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let8937 */
                                      bool __h_case_result  = (true  &&  (((match8933 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8938 */
                                            (first_item  =  (((match8933 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn8943 */
                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replaceAt_Vector_BTree_int_User_pair_t (items , first_item , index ), ({ /* cicili#Let8951 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8953 */
                                                __auto_type r1  = take_Vector_Rc_BTree_int_User (index , children );
                                                // ----------
                                                ((void)((r1 . __h_table )-> freeData ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8957 */
                                                __auto_type r2  = fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn8963 */
                                                  Rc_BTree_int_User __ciciliC_8962 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_8962 ;
                                                }), r1 );
                                                // ----------
                                                ((void)((r2 . __h_table )-> freeData ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8970 */
                                                __auto_type r3  = drop_Vector_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ((void)((r3 . __h_table )-> freeData ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8974 */
                                                __auto_type r4  = fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn8980 */
                                                  Rc_BTree_int_User __ciciliC_8979 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_8979 ;
                                                }), r3 );
                                                // ----------
                                                ((void)((r4 . __h_table )-> freeData ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8987 */
                                                __auto_type r5  = take_Vector_BTree_int_User_pair_t (1, current );
                                                // ----------
                                                ((void)((r5 . __h_table )-> freeData ));
                                                r5 ;
                                              });
                                              __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8991 */
                                                __auto_type r7  = ({ /* cicili#Let8995 */
                                                  StringBuffer_Rc_BTree_int_User tmp_buf8994  = newCapacity_StringBuffer_Rc_BTree_int_User (2, 16);
                                                  // ----------
                                                  Buffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (tmp_buf8994 , ((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (append_Vector_BTree_int_User_pair_t (child_items , r5 ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (tail_Vector_BTree_int_User_pair_t (right_child_items )))}), 2));
                                                });
                                                // ----------
                                                ((void)((r7 . __h_table )-> freeData ));
                                                r7 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9012 */
                                                __auto_type r6  = append_Vector_Rc_BTree_int_User (r7 , r4 );
                                                // ----------
                                                ((void)((r6 . __h_table )-> freeData ));
                                                r6 ;
                                              });
                                              // ----------
                                              append_Vector_Rc_BTree_int_User (r2 , r6 );
                                            })));
                                        }) : ({ /* cicili#Let9019 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn9021 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R1"));
                                          });
                                        }));
                                    });
                                  }) : ({ /* cicili#Let9028 */
                                    __auto_type match9027  = head_Vector_BTree_int_User_pair_t (current );
                                    typeof((((match9027 . __h_data ). Just ). __h_0_mem )) head ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let9031 */
                                      bool __h_case_result  = (true  &&  (((match9027 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9032 */
                                            (head  =  (((match9027 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn9037 */
                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (deleteAt_Vector_BTree_int_User_pair_t (items , index ), ({ /* cicili#Let9045 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9047 */
                                                __auto_type r1  = take_Vector_Rc_BTree_int_User (index , children );
                                                // ----------
                                                ((void)((r1 . __h_table )-> freeData ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9051 */
                                                __auto_type r2  = fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn9057 */
                                                  Rc_BTree_int_User __ciciliC_9056 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_9056 ;
                                                }), r1 );
                                                // ----------
                                                ((void)((r2 . __h_table )-> freeData ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9064 */
                                                __auto_type r3  = drop_Vector_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ((void)((r3 . __h_table )-> freeData ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9068 */
                                                __auto_type r4  = fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn9074 */
                                                  Rc_BTree_int_User __ciciliC_9073 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_9073 ;
                                                }), r3 );
                                                // ----------
                                                ((void)((r4 . __h_table )-> freeData ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9081 */
                                                __auto_type r5  = wrap_Vector_BTree_int_User_pair_t (head );
                                                // ----------
                                                ((void)((r5 . __h_table )-> freeData ));
                                                r5 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9085 */
                                                __auto_type r6  = append_Vector_BTree_int_User_pair_t (child_items , r5 );
                                                // ----------
                                                ((void)((r6 . __h_table )-> freeData ));
                                                r6 ;
                                              });
                                              __auto_type r8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9089 */
                                                __auto_type r8  = push_Vector_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_Vector_BTree_int_User_pair_t (r6 , right_child_items ))), r4 );
                                                // ----------
                                                ((void)((r8 . __h_table )-> freeData ));
                                                r8 ;
                                              });
                                              // ----------
                                              append_Vector_Rc_BTree_int_User (r2 , r8 );
                                            })));
                                        }) : ({ /* cicili#Let9100 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn9102 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R2"));
                                          });
                                        }));
                                    });
                                  }));
                              }) : ({ /* cicili#Let9109 */
                                // ----------
                                ;
                                ({ /* cicili#Progn9111 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let9118 */
                        // ----------
                        ;
                        ({ /* cicili#Progn9120 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let9127 */
              // ----------
              ;
              ({ /* cicili#Progn9129 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowLeft (Vector_BTree_int_User_pair_t child_items ) {
    return ({ /* cicili#Let9141 */
        typeof((((wleft . __h_data ). Just ). __h_0_mem )) left ;
        // ----------
        ;
        ({ /* cicili#Let9143 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9144 */
                (left  =  (((wleft . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9149 */
              ({ /* cicili#Let9153 */
                __auto_type match9152  = head_Vector_BTree_int_User_pair_t (left );
                typeof((((match9152 . __h_data ). Just ). __h_0_mem )) left_item ;
                // ----------
                ;
                ({ /* cicili#Let9156 */
                  bool __h_case_result  = (true  &&  (((match9152 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9157 */
                        (left_item  =  (((match9152 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9162 */
                      ({ /* cicili#Let9166 */
                        __auto_type match9165  = nth_Vector_Rc_BTree_int_User ((index  -  1 ), children );
                        typeof((((match9165 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
                        // ----------
                        ;
                        ({ /* cicili#Let9169 */
                          bool __h_case_result  = (true  &&  (((match9165 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9170 */
                                (left_child_rc  =  (((match9165 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9175 */
                              ({ /* cicili#Let9178 */
                                __auto_type __h_matchbox  = left_child_rc ;
                                // ----------
                                ({ /* cicili#Let9182 */
                                  __auto_type match9181  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                  typeof((((match9181 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let9185 */
                                    bool __h_case_result  = (true  &&  (((match9181 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9186 */
                                          (unboxed  =  (((match9181 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn9191 */
                                        ({ /* cicili#Let9195 */
                                          typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let9197 */
                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9198 */
                                                  (left_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn9203 */
                                                (((hasLen_Vector_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let9211 */
                                                    __auto_type match9210  = last_Vector_BTree_int_User_pair_t (left_child_items );
                                                    typeof((((match9210 . __h_data ). Just ). __h_0_mem )) last_item ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let9214 */
                                                      bool __h_case_result  = (true  &&  (((match9210 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9215 */
                                                            (last_item  =  (((match9210 . __h_data ). Just ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn9220 */
                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replaceAt_Vector_BTree_int_User_pair_t (items , last_item , (index  -  1 )), ({ /* cicili#Let9228 */
                                                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9230 */
                                                                __auto_type r1  = take_Vector_Rc_BTree_int_User ((index  -  1 ), children );
                                                                // ----------
                                                                ((void)((r1 . __h_table )-> freeData ));
                                                                r1 ;
                                                              });
                                                              __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9234 */
                                                                __auto_type r2  = fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn9240 */
                                                                  Rc_BTree_int_User __ciciliC_9239 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_9239 ;
                                                                }), r1 );
                                                                // ----------
                                                                ((void)((r2 . __h_table )-> freeData ));
                                                                r2 ;
                                                              });
                                                              __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9247 */
                                                                __auto_type r3  = drop_Vector_Rc_BTree_int_User ((index  +  1 ), children );
                                                                // ----------
                                                                ((void)((r3 . __h_table )-> freeData ));
                                                                r3 ;
                                                              });
                                                              __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9251 */
                                                                __auto_type r4  = fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn9257 */
                                                                  Rc_BTree_int_User __ciciliC_9256 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_9256 ;
                                                                }), r3 );
                                                                // ----------
                                                                ((void)((r4 . __h_table )-> freeData ));
                                                                r4 ;
                                                              });
                                                              __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9264 */
                                                                __auto_type r5  = ({ /* cicili#Let9268 */
                                                                  StringBuffer_Rc_BTree_int_User tmp_buf9267  = newCapacity_StringBuffer_Rc_BTree_int_User (2, 16);
                                                                  // ----------
                                                                  Buffer_Rc_BTree_int_User (print_StringBuffer_Rc_BTree_int_User (tmp_buf9267 , ((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (init_Vector_BTree_int_User_pair_t (left_child_items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (push_Vector_BTree_int_User_pair_t (left_item , child_items )))}), 2));
                                                                });
                                                                // ----------
                                                                ((void)((r5 . __h_table )-> freeData ));
                                                                r5 ;
                                                              });
                                                              __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9285 */
                                                                __auto_type r7  = append_Vector_Rc_BTree_int_User (r5 , r4 );
                                                                // ----------
                                                                ((void)((r7 . __h_table )-> freeData ));
                                                                r7 ;
                                                              });
                                                              // ----------
                                                              append_Vector_Rc_BTree_int_User (r2 , r7 );
                                                            })));
                                                        }) : ({ /* cicili#Let9292 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn9294 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 2"));
                                                          });
                                                        }));
                                                    });
                                                  }) : ({ /* cicili#Let9301 */
                                                    __auto_type match9300  = borrowRight (child_items );
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let9303 */
                                                      bool __h_case_result  = (true  &&  ((match9300 . __h_ctor ) ==  __h_Left_t  ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn9307 */
                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (deleteAt_Vector_BTree_int_User_pair_t (items , (index  -  1 )), ({ /* cicili#Let9315 */
                                                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9317 */
                                                                __auto_type r1  = take_Vector_Rc_BTree_int_User ((index  -  1 ), children );
                                                                // ----------
                                                                ((void)((r1 . __h_table )-> freeData ));
                                                                r1 ;
                                                              });
                                                              __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9321 */
                                                                __auto_type r2  = fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn9327 */
                                                                  Rc_BTree_int_User __ciciliC_9326 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_9326 ;
                                                                }), r1 );
                                                                // ----------
                                                                ((void)((r2 . __h_table )-> freeData ));
                                                                r2 ;
                                                              });
                                                              __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9334 */
                                                                __auto_type r3  = drop_Vector_Rc_BTree_int_User ((index  +  1 ), children );
                                                                // ----------
                                                                ((void)((r3 . __h_table )-> freeData ));
                                                                r3 ;
                                                              });
                                                              __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9338 */
                                                                __auto_type r4  = fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn9344 */
                                                                  Rc_BTree_int_User __ciciliC_9343 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_9343 ;
                                                                }), r3 );
                                                                // ----------
                                                                ((void)((r4 . __h_table )-> freeData ));
                                                                r4 ;
                                                              });
                                                              __auto_type r8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9351 */
                                                                __auto_type r8  = wrap_Vector_BTree_int_User_pair_t (left_item );
                                                                // ----------
                                                                ((void)((r8 . __h_table )-> freeData ));
                                                                r8 ;
                                                              });
                                                              __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9355 */
                                                                __auto_type r5  = append_Vector_BTree_int_User_pair_t (left_child_items , r8 );
                                                                // ----------
                                                                ((void)((r5 . __h_table )-> freeData ));
                                                                r5 ;
                                                              });
                                                              __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9359 */
                                                                __auto_type r7  = push_Vector_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_Vector_BTree_int_User_pair_t (r5 , child_items ))), r4 );
                                                                // ----------
                                                                ((void)((r7 . __h_table )-> freeData ));
                                                                r7 ;
                                                              });
                                                              // ----------
                                                              append_Vector_Rc_BTree_int_User (r2 , r7 );
                                                            })));
                                                        }) : ({ /* cicili#Let9370 */
                                                          __auto_type right  = match9300 ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn9372 */
                                                            right ;
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              }) : ({ /* cicili#Let9376 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn9378 */
                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 3"));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let9385 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn9387 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 4"));
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let9394 */
                              // ----------
                              ;
                              ({ /* cicili#Progn9396 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 5"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9403 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9405 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 6"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9412 */
              // ----------
              ;
              ({ /* cicili#Progn9414 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9418 */
      __auto_type result  = ({ /* cicili#Let9421 */
        typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
        // ----------
        ;
        ({ /* cicili#Let9423 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9424 */
                (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9429 */
              (((hasLen_Vector_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_Vector_BTree_int_User_pair_t (items ), ({ /* cicili#Let9441 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9443 */
                    __auto_type r1  = new_Rc_BTree_int_User (nchild );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9447 */
                    __auto_type r2  = replaceAt_Vector_Rc_BTree_int_User (children , r1 , index );
                    // ----------
                    ((void)((r2 . __h_table )-> freeData ));
                    r2 ;
                  });
                  // ----------
                  fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn9456 */
                      Rc_BTree_int_User __ciciliC_9455 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_9455 ;
                    }), r2 );
                }))) : ({ /* cicili#Let9462 */
                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9464 */
                    __auto_type nchild  = nchild ;
                    // ----------
                    ((void)(nchild -> __h_table -> freeClass ));
                    nchild ;
                  });
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* cicili#Let9469 */
              typeof((((nchild -> __h_data ). Internal ). __h_0_mem )) child_items ;
              // ----------
              ;
              ({ /* cicili#Let9471 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9472 */
                      (child_items  =  (((nchild -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn9477 */
                    (((hasLen_Vector_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_Vector_BTree_int_User_pair_t (items ), ({ /* cicili#Let9489 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9491 */
                          __auto_type r1  = new_Rc_BTree_int_User (nchild );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9495 */
                          __auto_type r2  = replaceAt_Vector_Rc_BTree_int_User (children , r1 , index );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        // ----------
                        fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn9504 */
                            Rc_BTree_int_User __ciciliC_9503 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_9503 ;
                          }), r2 );
                      }))) : ({ /* cicili#Let9510 */
                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9512 */
                          __auto_type nchild  = nchild ;
                          // ----------
                          ((void)(nchild -> __h_table -> freeClass ));
                          nchild ;
                        });
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* cicili#Let9517 */
                    typeof((((nchild -> __h_data ). Leaf ). __h_0_mem )) child_items ;
                    // ----------
                    ;
                    ({ /* cicili#Let9519 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9520 */
                            (child_items  =  (((nchild -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn9525 */
                          (((hasLen_Vector_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_Vector_BTree_int_User_pair_t (items ), ({ /* cicili#Let9537 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9539 */
                                __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9543 */
                                __auto_type r2  = replaceAt_Vector_Rc_BTree_int_User (children , r1 , index );
                                // ----------
                                ((void)((r2 . __h_table )-> freeData ));
                                r2 ;
                              });
                              // ----------
                              fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn9552 */
                                  Rc_BTree_int_User __ciciliC_9551 (Rc_BTree_int_User __h_value ) {
                                    return clone_Rc_BTree_int_User (__h_value );
                                  }
                                  __ciciliC_9551 ;
                                }), r2 );
                            }))) : ({ /* cicili#Let9558 */
                              __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9560 */
                                __auto_type nchild  = nchild ;
                                // ----------
                                ((void)(nchild -> __h_table -> freeClass ));
                                nchild ;
                              });
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* cicili#Let9565 */
                          // ----------
                          ;
                          ({ /* cicili#Progn9567 */
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
Either_BTree_int_User_Error_BTree_int_User borrowInternal_BTree_int_User (Maybe_BTree_int_User wtree , Vector_BTree_int_User_pair_t items , Vector_Rc_BTree_int_User children , Vector_BTree_int_User_pair_t current , size_t index , void (*callback) (BTree_int_User_pair_t item )) {
  Either_BTree_int_User_Error_BTree_int_User borrowRightInternal (Vector_BTree_int_User_pair_t left_child_items , Vector_Rc_BTree_int_User left_child_children ) {
    return ({ /* cicili#Let9592 */
        __auto_type match9591  = nth_Vector_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match9591 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let9595 */
          bool __h_case_result  = (true  &&  (((match9591 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9596 */
                (right_child_rc  =  (((match9591 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9601 */
              ({ /* cicili#Let9605 */
                __auto_type match9604  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match9604 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                ;
                ({ /* cicili#Let9608 */
                  bool __h_case_result  = (true  &&  (((match9604 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9609 */
                        (right_child  =  (((match9604 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9614 */
                      ({ /* cicili#Let9618 */
                        typeof((((right_child -> __h_data ). Branch ). __h_0_mem )) right_child_items ;
                        typeof((((right_child -> __h_data ). Branch ). __h_1_mem )) right_child_children ;
                        // ----------
                        ;
                        ({ /* cicili#Let9620 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9621 */
                                  (right_child_items  =  (((right_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn9623 */
                                  (right_child_children  =  (((right_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9628 */
                              (((hasLen_Vector_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let9637 */
                                  __auto_type match9635  = min_BTree_int_User (right_child );
                                  typeof((((match9635 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let9640 */
                                    bool __h_case_result  = (true  &&  (((match9635 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn9641 */
                                            (min  =  (((match9635 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn9643 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn9648 */
                                        ({ /* cicili#Let9652 */
                                          __auto_type match9651  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match9651 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let9655 */
                                            bool __h_case_result  = (true  &&  (((match9651 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9656 */
                                                  (nchild  =  (((match9651 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn9661 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replaceAt_Vector_BTree_int_User_pair_t (items , min , index ), ({ /* cicili#Let9669 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9671 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9675 */
                                                      __auto_type r2  = replaceAt_Vector_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn9684 */
                                                        Rc_BTree_int_User __ciciliC_9683 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_9683 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let9691 */
                                                __auto_type left  = match9651 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn9693 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let9697 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn9699 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* cicili#Let9707 */
                                  __auto_type match9705  = head_Vector_BTree_int_User_pair_t (current );
                                  typeof((((match9705 . __h_data ). Just ). __h_0_mem )) current_item ;
                                  typeof((current_item . __h_0_mem )) current_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let9710 */
                                    bool __h_case_result  = (true  &&  (((match9705 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn9711 */
                                            (current_item  =  (((match9705 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn9713 */
                                              (current_key  =  (current_item . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn9718 */
                                        ({ /* cicili#Let9721 */
                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9723 */
                                            __auto_type r1  = push_Vector_BTree_int_User_pair_t (current_item , right_child_items );
                                            // ----------
                                            ((void)((r1 . __h_table )-> freeData ));
                                            r1 ;
                                          });
                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9727 */
                                            __auto_type r2  = append_Vector_Rc_BTree_int_User (left_child_children , right_child_children );
                                            // ----------
                                            ((void)((r2 . __h_table )-> freeData ));
                                            r2 ;
                                          });
                                          __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9731 */
                                            __auto_type r4  = Internal_BTree_int_User (append_Vector_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn9740 */
                                              Rc_BTree_int_User __ciciliC_9739 (Rc_BTree_int_User __h_value ) {
                                                return clone_Rc_BTree_int_User (__h_value );
                                              }
                                              __ciciliC_9739 ;
                                            }), r2 ));
                                            // ----------
                                            ((void)(r4 -> __h_table -> freeClass ));
                                            r4 ;
                                          });
                                          __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9747 */
                                            __auto_type r5  = take_Vector_Rc_BTree_int_User (index , children );
                                            // ----------
                                            ((void)((r5 . __h_table )-> freeData ));
                                            r5 ;
                                          });
                                          __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9751 */
                                            __auto_type r7  = drop_Vector_Rc_BTree_int_User ((index  +  2 ), children );
                                            // ----------
                                            ((void)((r7 . __h_table )-> freeData ));
                                            r7 ;
                                          });
                                          // ----------
                                          ({ /* cicili#Let9757 */
                                            __auto_type match9756  = delete_BTree_int_User (r4 , current_key , NULL );
                                            typeof((((match9756 . __h_data ). Right ). __h_0_mem )) ntree ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let9760 */
                                              bool __h_case_result  = (true  &&  (((match9756 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9761 */
                                                    (ntree  =  (((match9756 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn9766 */
                                                  ({ /* cicili#Let9770 */
                                                    __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let9773 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9774 */
                                                              (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn9776 */
                                                              (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn9781 */
                                                          ({ /* cicili#Let9785 */
                                                            __auto_type match9784  = head_Vector_BTree_int_User_pair_t (branch_items );
                                                            typeof((((match9784 . __h_data ). Just ). __h_0_mem )) branch_head ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let9788 */
                                                              bool __h_case_result  = (true  &&  (((match9784 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9789 */
                                                                    (branch_head  =  (((match9784 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn9794 */
                                                                  ({ /* cicili#Let9797 */
                                                                    __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9799 */
                                                                      __auto_type ntree  = ntree ;
                                                                      // ----------
                                                                      ((void)(ntree -> __h_table -> freeClass ));
                                                                      ntree ;
                                                                    });
                                                                    __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9802 */
                                                                      __auto_type tmp_result  = tmp_result ;
                                                                      // ----------
                                                                      ((void)(tmp_result -> __h_table -> freeClass ));
                                                                      tmp_result ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replaceAt_Vector_BTree_int_User_pair_t (items , branch_head , index ), ({ /* cicili#Let9811 */
                                                                        __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9813 */
                                                                          __auto_type r10  = append_Vector_Rc_BTree_int_User (branch_children , r7 );
                                                                          // ----------
                                                                          ((void)((r10 . __h_table )-> freeData ));
                                                                          r10 ;
                                                                        });
                                                                        __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9817 */
                                                                          __auto_type r11  = append_Vector_Rc_BTree_int_User (r5 , r10 );
                                                                          // ----------
                                                                          ((void)((r11 . __h_table )-> freeData ));
                                                                          r11 ;
                                                                        });
                                                                        // ----------
                                                                        fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn9826 */
                                                                            Rc_BTree_int_User __ciciliC_9825 (Rc_BTree_int_User __h_value ) {
                                                                              return clone_Rc_BTree_int_User (__h_value );
                                                                            }
                                                                            __ciciliC_9825 ;
                                                                          }), r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* cicili#Let9833 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn9835 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let9842 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let9844 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn9848 */
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (deleteAt_Vector_BTree_int_User_pair_t (items , index ), ({ /* cicili#Let9856 */
                                                                    __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9858 */
                                                                      __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                      // ----------
                                                                      ((void)((r9 . __h_table )-> freeData ));
                                                                      r9 ;
                                                                    });
                                                                    __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9862 */
                                                                      __auto_type r10  = push_Vector_Rc_BTree_int_User (r9 , r7 );
                                                                      // ----------
                                                                      ((void)((r10 . __h_table )-> freeData ));
                                                                      r10 ;
                                                                    });
                                                                    __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9866 */
                                                                      __auto_type r11  = append_Vector_Rc_BTree_int_User (r5 , r10 );
                                                                      // ----------
                                                                      ((void)((r11 . __h_table )-> freeData ));
                                                                      r11 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn9875 */
                                                                        Rc_BTree_int_User __ciciliC_9874 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_9874 ;
                                                                      }), r11 );
                                                                  })));
                                                              }) : ({ /* cicili#Let9882 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn9884 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let9891 */
                                                  __auto_type left  = match9756 ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn9893 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* cicili#Let9897 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn9899 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* cicili#Let9906 */
                              typeof((((right_child -> __h_data ). Internal ). __h_0_mem )) right_child_items ;
                              typeof((((right_child -> __h_data ). Internal ). __h_1_mem )) right_child_children ;
                              // ----------
                              ;
                              ({ /* cicili#Let9908 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9909 */
                                        (right_child_items  =  (((right_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn9911 */
                                        (right_child_children  =  (((right_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn9916 */
                                    (((hasLen_Vector_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let9925 */
                                        __auto_type match9923  = min_BTree_int_User (right_child );
                                        typeof((((match9923 . __h_data ). Just ). __h_0_mem )) min ;
                                        typeof((min . __h_0_mem )) min_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let9928 */
                                          bool __h_case_result  = (true  &&  (((match9923 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn9929 */
                                                  (min  =  (((match9923 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn9931 */
                                                    (min_key  =  (min . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn9936 */
                                              ({ /* cicili#Let9940 */
                                                __auto_type match9939  = delete_BTree_int_User (right_child , min_key , NULL );
                                                typeof((((match9939 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let9943 */
                                                  bool __h_case_result  = (true  &&  (((match9939 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9944 */
                                                        (nchild  =  (((match9939 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn9949 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replaceAt_Vector_BTree_int_User_pair_t (items , min , index ), ({ /* cicili#Let9957 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9959 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9963 */
                                                            __auto_type r2  = replaceAt_Vector_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                            // ----------
                                                            ((void)((r2 . __h_table )-> freeData ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn9972 */
                                                              Rc_BTree_int_User __ciciliC_9971 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_9971 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let9979 */
                                                      __auto_type left  = match9939 ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn9981 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let9985 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn9987 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* cicili#Let9995 */
                                        __auto_type match9993  = head_Vector_BTree_int_User_pair_t (current );
                                        typeof((((match9993 . __h_data ). Just ). __h_0_mem )) current_item ;
                                        typeof((current_item . __h_0_mem )) current_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let9998 */
                                          bool __h_case_result  = (true  &&  (((match9993 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn9999 */
                                                  (current_item  =  (((match9993 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn10001 */
                                                    (current_key  =  (current_item . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn10006 */
                                              ({ /* cicili#Let10009 */
                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10011 */
                                                  __auto_type r1  = push_Vector_BTree_int_User_pair_t (current_item , right_child_items );
                                                  // ----------
                                                  ((void)((r1 . __h_table )-> freeData ));
                                                  r1 ;
                                                });
                                                __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10015 */
                                                  __auto_type r2  = append_Vector_Rc_BTree_int_User (left_child_children , right_child_children );
                                                  // ----------
                                                  ((void)((r2 . __h_table )-> freeData ));
                                                  r2 ;
                                                });
                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10019 */
                                                  __auto_type r4  = Internal_BTree_int_User (append_Vector_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn10028 */
                                                    Rc_BTree_int_User __ciciliC_10027 (Rc_BTree_int_User __h_value ) {
                                                      return clone_Rc_BTree_int_User (__h_value );
                                                    }
                                                    __ciciliC_10027 ;
                                                  }), r2 ));
                                                  // ----------
                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                  r4 ;
                                                });
                                                __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10035 */
                                                  __auto_type r5  = take_Vector_Rc_BTree_int_User (index , children );
                                                  // ----------
                                                  ((void)((r5 . __h_table )-> freeData ));
                                                  r5 ;
                                                });
                                                __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10039 */
                                                  __auto_type r7  = drop_Vector_Rc_BTree_int_User ((index  +  2 ), children );
                                                  // ----------
                                                  ((void)((r7 . __h_table )-> freeData ));
                                                  r7 ;
                                                });
                                                // ----------
                                                ({ /* cicili#Let10045 */
                                                  __auto_type match10044  = delete_BTree_int_User (r4 , current_key , NULL );
                                                  typeof((((match10044 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let10048 */
                                                    bool __h_case_result  = (true  &&  (((match10044 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10049 */
                                                          (ntree  =  (((match10044 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn10054 */
                                                        ({ /* cicili#Let10058 */
                                                          __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let10061 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10062 */
                                                                    (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn10064 */
                                                                    (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn10069 */
                                                                ({ /* cicili#Let10073 */
                                                                  __auto_type match10072  = head_Vector_BTree_int_User_pair_t (branch_items );
                                                                  typeof((((match10072 . __h_data ). Just ). __h_0_mem )) branch_head ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let10076 */
                                                                    bool __h_case_result  = (true  &&  (((match10072 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10077 */
                                                                          (branch_head  =  (((match10072 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn10082 */
                                                                        ({ /* cicili#Let10085 */
                                                                          __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10087 */
                                                                            __auto_type ntree  = ntree ;
                                                                            // ----------
                                                                            ((void)(ntree -> __h_table -> freeClass ));
                                                                            ntree ;
                                                                          });
                                                                          __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10090 */
                                                                            __auto_type tmp_result  = tmp_result ;
                                                                            // ----------
                                                                            ((void)(tmp_result -> __h_table -> freeClass ));
                                                                            tmp_result ;
                                                                          });
                                                                          // ----------
                                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replaceAt_Vector_BTree_int_User_pair_t (items , branch_head , index ), ({ /* cicili#Let10099 */
                                                                              __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10101 */
                                                                                __auto_type r10  = append_Vector_Rc_BTree_int_User (branch_children , r7 );
                                                                                // ----------
                                                                                ((void)((r10 . __h_table )-> freeData ));
                                                                                r10 ;
                                                                              });
                                                                              __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10105 */
                                                                                __auto_type r11  = append_Vector_Rc_BTree_int_User (r5 , r10 );
                                                                                // ----------
                                                                                ((void)((r11 . __h_table )-> freeData ));
                                                                                r11 ;
                                                                              });
                                                                              // ----------
                                                                              fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn10114 */
                                                                                  Rc_BTree_int_User __ciciliC_10113 (Rc_BTree_int_User __h_value ) {
                                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                                  }
                                                                                  __ciciliC_10113 ;
                                                                                }), r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* cicili#Let10121 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn10123 */
                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let10130 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let10132 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn10136 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (deleteAt_Vector_BTree_int_User_pair_t (items , index ), ({ /* cicili#Let10144 */
                                                                          __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10146 */
                                                                            __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                            // ----------
                                                                            ((void)((r9 . __h_table )-> freeData ));
                                                                            r9 ;
                                                                          });
                                                                          __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10150 */
                                                                            __auto_type r10  = push_Vector_Rc_BTree_int_User (r9 , r7 );
                                                                            // ----------
                                                                            ((void)((r10 . __h_table )-> freeData ));
                                                                            r10 ;
                                                                          });
                                                                          __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10154 */
                                                                            __auto_type r11  = append_Vector_Rc_BTree_int_User (r5 , r10 );
                                                                            // ----------
                                                                            ((void)((r11 . __h_table )-> freeData ));
                                                                            r11 ;
                                                                          });
                                                                          // ----------
                                                                          fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn10163 */
                                                                              Rc_BTree_int_User __ciciliC_10162 (Rc_BTree_int_User __h_value ) {
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_10162 ;
                                                                            }), r11 );
                                                                        })));
                                                                    }) : ({ /* cicili#Let10170 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn10172 */
                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let10179 */
                                                        __auto_type left  = match10044 ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn10181 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* cicili#Let10185 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn10187 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* cicili#Let10194 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn10196 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let10203 */
                      // ----------
                      ;
                      ({ /* cicili#Progn10205 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10212 */
              // ----------
              ;
              ({ /* cicili#Progn10214 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowRightLeaf (Vector_BTree_int_User_pair_t left_child_items ) {
    return ({ /* cicili#Let10227 */
        __auto_type match10226  = nth_Vector_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match10226 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let10230 */
          bool __h_case_result  = (true  &&  (((match10226 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10231 */
                (right_child_rc  =  (((match10226 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10236 */
              ({ /* cicili#Let10240 */
                __auto_type match10239  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match10239 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                ;
                ({ /* cicili#Let10243 */
                  bool __h_case_result  = (true  &&  (((match10239 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10244 */
                        (right_child  =  (((match10239 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10249 */
                      ({ /* cicili#Let10253 */
                        typeof((((right_child -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                        // ----------
                        ;
                        ({ /* cicili#Let10255 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10256 */
                                (right_child_items  =  (((right_child -> __h_data ). Leaf ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn10261 */
                              (((hasLen_Vector_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let10270 */
                                  __auto_type match10268  = min_BTree_int_User (right_child );
                                  typeof((((match10268 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let10273 */
                                    bool __h_case_result  = (true  &&  (((match10268 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn10274 */
                                            (min  =  (((match10268 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn10276 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn10281 */
                                        ({ /* cicili#Let10285 */
                                          __auto_type match10284  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match10284 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let10288 */
                                            bool __h_case_result  = (true  &&  (((match10284 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10289 */
                                                  (nchild  =  (((match10284 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn10294 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replaceAt_Vector_BTree_int_User_pair_t (items , min , index ), ({ /* cicili#Let10302 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10304 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10308 */
                                                      __auto_type r2  = replaceAt_Vector_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn10317 */
                                                        Rc_BTree_int_User __ciciliC_10316 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_10316 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let10324 */
                                                __auto_type left  = match10284 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn10326 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let10330 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn10332 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (deleteAt_Vector_BTree_int_User_pair_t (items , index ), ({ /* cicili#Let10343 */
                                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10345 */
                                    __auto_type r1  = take_Vector_Rc_BTree_int_User (index , children );
                                    // ----------
                                    ((void)((r1 . __h_table )-> freeData ));
                                    r1 ;
                                  });
                                  __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10349 */
                                    __auto_type r2  = fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn10355 */
                                      Rc_BTree_int_User __ciciliC_10354 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_10354 ;
                                    }), r1 );
                                    // ----------
                                    ((void)((r2 . __h_table )-> freeData ));
                                    r2 ;
                                  });
                                  __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10362 */
                                    __auto_type r3  = drop_Vector_Rc_BTree_int_User ((index  +  2 ), children );
                                    // ----------
                                    ((void)((r3 . __h_table )-> freeData ));
                                    r3 ;
                                  });
                                  __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10366 */
                                    __auto_type r4  = fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn10372 */
                                      Rc_BTree_int_User __ciciliC_10371 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_10371 ;
                                    }), r3 );
                                    // ----------
                                    ((void)((r4 . __h_table )-> freeData ));
                                    r4 ;
                                  });
                                  __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10379 */
                                    __auto_type r5  = push_Vector_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_Vector_BTree_int_User_pair_t (left_child_items , right_child_items ))), r4 );
                                    // ----------
                                    ((void)((r5 . __h_table )-> freeData ));
                                    r5 ;
                                  });
                                  // ----------
                                  append_Vector_Rc_BTree_int_User (r2 , r5 );
                                }))));
                            }) : ({ /* cicili#Let10390 */
                              // ----------
                              ;
                              ({ /* cicili#Progn10392 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let10399 */
                      // ----------
                      ;
                      ({ /* cicili#Progn10401 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10408 */
              // ----------
              ;
              ({ /* cicili#Progn10410 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let10417 */
      __auto_type result  = ({ /* cicili#Let10420 */
        __auto_type match10419  = nth_Vector_Rc_BTree_int_User (index , children );
        typeof((((match10419 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let10423 */
          bool __h_case_result  = (true  &&  (((match10419 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10424 */
                (left_child_rc  =  (((match10419 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10429 */
              ({ /* cicili#Let10433 */
                __auto_type match10432  = get_Rc_BTree_int_User (left_child_rc );
                typeof((((match10432 . __h_data ). Just ). __h_0_mem )) left_child ;
                // ----------
                ;
                ({ /* cicili#Let10436 */
                  bool __h_case_result  = (true  &&  (((match10432 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10437 */
                        (left_child  =  (((match10432 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10442 */
                      ({ /* cicili#Let10446 */
                        typeof((((left_child -> __h_data ). Branch ). __h_0_mem )) left_child_items ;
                        typeof((((left_child -> __h_data ). Branch ). __h_1_mem )) left_child_children ;
                        // ----------
                        ;
                        ({ /* cicili#Let10448 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10449 */
                                  (left_child_items  =  (((left_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn10451 */
                                  (left_child_children  =  (((left_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn10456 */
                              (((hasLen_Vector_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let10465 */
                                  __auto_type match10463  = max_BTree_int_User (left_child );
                                  typeof((((match10463 . __h_data ). Just ). __h_0_mem )) max ;
                                  typeof((max . __h_0_mem )) max_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let10468 */
                                    bool __h_case_result  = (true  &&  (((match10463 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn10469 */
                                            (max  =  (((match10463 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn10471 */
                                              (max_key  =  (max . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn10476 */
                                        ({ /* cicili#Let10480 */
                                          __auto_type match10479  = delete_BTree_int_User (left_child , max_key , NULL );
                                          typeof((((match10479 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let10483 */
                                            bool __h_case_result  = (true  &&  (((match10479 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10484 */
                                                  (nchild  =  (((match10479 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn10489 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replaceAt_Vector_BTree_int_User_pair_t (items , max , index ), ({ /* cicili#Let10497 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10499 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10503 */
                                                      __auto_type r2  = replaceAt_Vector_Rc_BTree_int_User (children , r1 , index );
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn10512 */
                                                        Rc_BTree_int_User __ciciliC_10511 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_10511 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let10519 */
                                                __auto_type left  = match10479 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn10521 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let10525 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn10527 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* cicili#Let10534 */
                              typeof((((left_child -> __h_data ). Internal ). __h_0_mem )) left_child_items ;
                              typeof((((left_child -> __h_data ). Internal ). __h_1_mem )) left_child_children ;
                              // ----------
                              ;
                              ({ /* cicili#Let10536 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10537 */
                                        (left_child_items  =  (((left_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn10539 */
                                        (left_child_children  =  (((left_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn10544 */
                                    (((hasLen_Vector_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let10553 */
                                        __auto_type match10551  = max_BTree_int_User (left_child );
                                        typeof((((match10551 . __h_data ). Just ). __h_0_mem )) max ;
                                        typeof((max . __h_0_mem )) max_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let10556 */
                                          bool __h_case_result  = (true  &&  (((match10551 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn10557 */
                                                  (max  =  (((match10551 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn10559 */
                                                    (max_key  =  (max . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn10564 */
                                              ({ /* cicili#Let10568 */
                                                __auto_type match10567  = delete_BTree_int_User (left_child , max_key , NULL );
                                                typeof((((match10567 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let10571 */
                                                  bool __h_case_result  = (true  &&  (((match10567 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10572 */
                                                        (nchild  =  (((match10567 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10577 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replaceAt_Vector_BTree_int_User_pair_t (items , max , index ), ({ /* cicili#Let10585 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10587 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10591 */
                                                            __auto_type r2  = replaceAt_Vector_Rc_BTree_int_User (children , r1 , index );
                                                            // ----------
                                                            ((void)((r2 . __h_table )-> freeData ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn10600 */
                                                              Rc_BTree_int_User __ciciliC_10599 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_10599 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let10607 */
                                                      __auto_type left  = match10567 ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn10609 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let10613 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn10615 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* cicili#Let10622 */
                                    typeof((((left_child -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let10624 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10625 */
                                            (left_child_items  =  (((left_child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn10630 */
                                          (((hasLen_Vector_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let10639 */
                                              __auto_type match10637  = max_BTree_int_User (left_child );
                                              typeof((((match10637 . __h_data ). Just ). __h_0_mem )) max ;
                                              typeof((max . __h_0_mem )) max_key ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let10642 */
                                                bool __h_case_result  = (true  &&  (((match10637 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn10643 */
                                                        (max  =  (((match10637 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  (true  &&  ({ /* cicili#Progn10645 */
                                                          (max_key  =  (max . __h_0_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn10650 */
                                                    ({ /* cicili#Let10654 */
                                                      __auto_type match10653  = delete_BTree_int_User (left_child , max_key , NULL );
                                                      typeof((((match10653 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let10657 */
                                                        bool __h_case_result  = (true  &&  (((match10653 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10658 */
                                                              (nchild  =  (((match10653 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10663 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replaceAt_Vector_BTree_int_User_pair_t (items , max , index ), ({ /* cicili#Let10671 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10673 */
                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10677 */
                                                                  __auto_type r2  = replaceAt_Vector_Rc_BTree_int_User (children , r1 , index );
                                                                  // ----------
                                                                  ((void)((r2 . __h_table )-> freeData ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_Vector_Rc_BTree_int_User (({ /* cicili#Progn10686 */
                                                                    Rc_BTree_int_User __ciciliC_10685 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_10685 ;
                                                                  }), r2 );
                                                              })));
                                                          }) : ({ /* cicili#Let10693 */
                                                            __auto_type left  = match10653 ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn10695 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10699 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn10701 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* cicili#Let10708 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn10710 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let10717 */
                      // ----------
                      ;
                      ({ /* cicili#Progn10719 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10726 */
              // ----------
              ;
              ({ /* cicili#Progn10728 */
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
  Either_BTree_int_User_Error_BTree_int_User deleteInternal (Maybe_BTree_int_User tree , Vector_BTree_int_User_pair_t items , Vector_Rc_BTree_int_User children , Maybe_Vector_BTree_int_User_pair_t wleft , Vector_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let10756 */
        __auto_type result  = ({ /* cicili#Let10760 */
          __auto_type match10758  = head_Vector_BTree_int_User_pair_t (current );
          typeof((((match10758 . __h_data ). Just ). __h_0_mem )) head ;
          typeof((head . __h_0_mem )) key ;
          typeof(