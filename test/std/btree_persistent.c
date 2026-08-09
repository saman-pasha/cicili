#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct cicili8Y7_P4PFWU3AC8TjHwCpTmcr9dA_ {
  int __h_0_mem ;
  int __h_1_mem ;
} cicili8Y7_P4PFWU3AC8TjHwCpTmcr9dA_;
typedef cicili8Y7_P4PFWU3AC8TjHwCpTmcr9dA_ User ;
static int bad  = 0;
static long seen  = 0;
static long total  = 0;
int check (const char * what , long got , long want ) {
  if (got  ==  want  )
    { /* block106 */
      printf ("ok   %-40s %ld\n", what , got );
      return 0;
    }
  else
    { /* block109 */
      printf ("FAIL %-40s got %ld want %ld\n", what , got , want );
      return 1;
    }
}
typedef struct class_BTree_int_User * BTree_int_User ;
typedef struct ciciliz7tGCFRIO0ms1EuCyv_uKwa0WWg_ {
  int __h_0_mem ;
  User __h_1_mem ;
} ciciliz7tGCFRIO0ms1EuCyv_uKwa0WWg_;
typedef ciciliz7tGCFRIO0ms1EuCyv_uKwa0WWg_ BTree_int_User_pair_t ;
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
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct BTree_int_User_Error BTree_int_User_Error ;
typedef std_data BTree_int_User_Error_type_t ;
typedef void (*free_BTree_int_User_Error_t) (BTree_int_User_Error * this );
typedef struct BTree_int_User_Error__H_Table {
  free_BTree_int_User_Error_t freeData ;
    void (*show) (BTree_int_User_Error error );
} BTree_int_User_Error__H_Table;
typedef struct BTree_int_User_Error {
  const BTree_int_User_Error__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion136 */
    struct { /* ciciliStruct137 */
    } ERR_INVALID_OBJECT , _6 ;
    struct { /* ciciliStruct138 */
      size_t __h_0_mem ;
    } ERR_INVALID_ORDER , _5 ;
    struct { /* ciciliStruct139 */
      BTree_int_User_pair_t __h_0_mem ;
    } ERR_UNIQUE_KEY , _4 ;
    struct { /* ciciliStruct140 */
      int __h_0_mem ;
    } ERR_NOT_FOUND , _3 ;
    struct { /* ciciliStruct141 */
      BTree_int_User_pair_t __h_0_mem ;
      size_t __h_1_mem ;
    } ERR_ACCESS_DEAD_CHILD , _2 ;
    struct { /* ciciliStruct142 */
      BTree_int_User __h_0_mem ;
    } ERR_INVALID_BRANCH , _1 ;
    struct { /* ciciliStruct143 */
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
void free_BTree_int_User_Error_pointer (BTree_int_User_Error ** this );
#endif /* __BTree_int_User_Error__H_DECL__ */ 
#ifndef __Bool__H_DECL__
#define __Bool__H_DECL__
#ifndef __H___h_Bool_ctor_t__
#define __H___h_Bool_ctor_t__
typedef enum __h_Bool_ctor_t {
  __h_False_t = 0,
  __h_True_t = 1
} __h_Bool_ctor_t;
#endif /* __H___h_Bool_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Bool Bool ;
typedef std_data Bool_type_t ;
typedef void (*free_Bool_t) (Bool * this );
typedef struct Bool__H_Table {
  free_Bool_t freeData ;
    int (*show) (FILE * file , Bool value );
    Bool (*or) (Bool lhs , Bool rhs );
    Bool (*and) (Bool lhs , Bool rhs );
} Bool__H_Table;
typedef struct Bool {
  const Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion191 */
    struct { /* ciciliStruct192 */
    } True , _1 ;
    struct { /* ciciliStruct193 */
    } False , _ ;
  } __h_data ;
} Bool;
Bool True ();
Bool False ();
__attribute__((weak)) Bool Default_Bool () {
  return False ();
}
int show_Bool (FILE * file , Bool value );
Bool or_Bool (Bool lhs , Bool rhs );
Bool and_Bool (Bool lhs , Bool rhs );
const Bool__H_Table * const get_Bool__H_Table ();
void free_Bool (Bool * this );
void free_Bool_pointer (Bool ** this );
#endif /* __Bool__H_DECL__ */ 
#ifndef __Ordering__H_DECL__
#define __Ordering__H_DECL__
#ifndef __H___h_Ordering_ctor_t__
#define __H___h_Ordering_ctor_t__
typedef enum __h_Ordering_ctor_t {
  __h_GT_t = 0,
  __h_EQ_t = 1,
  __h_LT_t = 2
} __h_Ordering_ctor_t;
#endif /* __H___h_Ordering_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Ordering Ordering ;
typedef std_data Ordering_type_t ;
typedef void (*free_Ordering_t) (Ordering * this );
typedef struct Ordering__H_Table {
  free_Ordering_t freeData ;
    int (*show) (FILE * file , Ordering value );
} Ordering__H_Table;
typedef struct Ordering {
  const Ordering__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion227 */
    struct { /* ciciliStruct228 */
    } LT , _2 ;
    struct { /* ciciliStruct229 */
    } EQ , _1 ;
    struct { /* ciciliStruct230 */
    } GT , _ ;
  } __h_data ;
} Ordering;
Ordering LT ();
Ordering EQ ();
Ordering GT ();
__attribute__((weak)) Ordering Default_Ordering () {
  return GT ();
}
int show_Ordering (FILE * file , Ordering value );
const Ordering__H_Table * const get_Ordering__H_Table ();
void free_Ordering (Ordering * this );
void free_Ordering_pointer (Ordering ** this );
#endif /* __Ordering__H_DECL__ */ 
#ifndef __Either_BTree_int_User_Error_BTree_int_User__H_DECL__
#define __Either_BTree_int_User_Error_BTree_int_User__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Left_t = 0,
  __h_Right_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Either_BTree_int_User_Error_BTree_int_User Either_BTree_int_User_Error_BTree_int_User ;
typedef std_data Either_BTree_int_User_Error_BTree_int_User_type_t ;
typedef void (*free_Either_BTree_int_User_Error_BTree_int_User_t) (Either_BTree_int_User_Error_BTree_int_User * this );
typedef struct Either_BTree_int_User_Error_BTree_int_User__H_Table {
  free_Either_BTree_int_User_Error_BTree_int_User_t freeData ;
} Either_BTree_int_User_Error_BTree_int_User__H_Table;
typedef struct Either_BTree_int_User_Error_BTree_int_User {
  const Either_BTree_int_User_Error_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion261 */
    struct { /* ciciliStruct262 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct263 */
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
void free_Either_BTree_int_User_Error_BTree_int_User_pointer (Either_BTree_int_User_Error_BTree_int_User ** this );
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
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_BTree_int_User Maybe_BTree_int_User ;
typedef std_data Maybe_BTree_int_User_type_t ;
typedef void (*free_Maybe_BTree_int_User_t) (Maybe_BTree_int_User * this );
typedef struct Maybe_BTree_int_User__H_Table {
  free_Maybe_BTree_int_User_t freeData ;
} Maybe_BTree_int_User__H_Table;
typedef struct Maybe_BTree_int_User {
  const Maybe_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion292 */
    struct { /* ciciliStruct293 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct294 */
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
void free_Maybe_BTree_int_User_pointer (Maybe_BTree_int_User ** this );
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
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_BTree_int_User_pair_t Maybe_BTree_int_User_pair_t ;
typedef std_data Maybe_BTree_int_User_pair_t_type_t ;
typedef void (*free_Maybe_BTree_int_User_pair_t_t) (Maybe_BTree_int_User_pair_t * this );
typedef struct Maybe_BTree_int_User_pair_t__H_Table {
  free_Maybe_BTree_int_User_pair_t_t freeData ;
} Maybe_BTree_int_User_pair_t__H_Table;
typedef struct Maybe_BTree_int_User_pair_t {
  const Maybe_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion323 */
    struct { /* ciciliStruct324 */
      BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct325 */
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
void free_Maybe_BTree_int_User_pair_t_pointer (Maybe_BTree_int_User_pair_t ** this );
#endif /* __Maybe_BTree_int_User_pair_t__H_DECL__ */ 
#ifndef __Maybe_BTree_int_User_pair_t__H_DECL__
#define __Maybe_BTree_int_User_pair_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_BTree_int_User_pair_t Maybe_BTree_int_User_pair_t ;
typedef std_data Maybe_BTree_int_User_pair_t_type_t ;
typedef void (*free_Maybe_BTree_int_User_pair_t_t) (Maybe_BTree_int_User_pair_t * this );
typedef struct Maybe_BTree_int_User_pair_t__H_Table {
  free_Maybe_BTree_int_User_pair_t_t freeData ;
} Maybe_BTree_int_User_pair_t__H_Table;
typedef struct Maybe_BTree_int_User_pair_t {
  const Maybe_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion356 */
    struct { /* ciciliStruct357 */
      BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct358 */
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
void free_Maybe_BTree_int_User_pair_t_pointer (Maybe_BTree_int_User_pair_t ** this );
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
#ifndef __H_STD_CLASS_
#define __H_STD_CLASS_
typedef struct std_class std_class ;
#endif /* __H_STD_CLASS_ */ 
typedef struct class_List_BTree_int_User_pair_t class_List_BTree_int_User_pair_t ;
typedef class_List_BTree_int_User_pair_t * List_BTree_int_User_pair_t ;
typedef std_class List_BTree_int_User_pair_t_type_t ;
typedef void (*free_List_BTree_int_User_pair_t_t) (List_BTree_int_User_pair_t * this_ptr );
typedef struct List_BTree_int_User_pair_t__H_Table {
  free_List_BTree_int_User_pair_t_t freeClass ;
    BTree_int_User_pair_t * (*toArray) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*wrap) (const BTree_int_User_pair_t item );
    List_BTree_int_User_pair_t (*pure) (const BTree_int_User_pair_t * buf , size_t len );
    size_t (*show) (FILE * file , List_BTree_int_User_pair_t list );
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
    size_t (*hasLen) (List_BTree_int_User_pair_t list , size_t desired );
    size_t (*len) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*tail) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*drop) (size_t len , List_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*head) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*nthcdr) (size_t index , List_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*nth) (size_t index , List_BTree_int_User_pair_t list );
} List_BTree_int_User_pair_t__H_Table;
typedef struct class_List_BTree_int_User_pair_t {
  const List_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion413 */
    struct { /* ciciliStruct414 */
      BTree_int_User_pair_t __h_0_mem ;
      List_BTree_int_User_pair_t __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct415 */
    } Nil , _ ;
  } __h_data ;
} class_List_BTree_int_User_pair_t;
List_BTree_int_User_pair_t Cons_BTree_int_User_pair_t (BTree_int_User_pair_t head , List_BTree_int_User_pair_t tail );
List_BTree_int_User_pair_t Nil_BTree_int_User_pair_t ();
__attribute__((weak)) List_BTree_int_User_pair_t Default_List_BTree_int_User_pair_t () {
  return Nil_BTree_int_User_pair_t ();
}
BTree_int_User_pair_t * toArray_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t wrap_List_BTree_int_User_pair_t (const BTree_int_User_pair_t item );
List_BTree_int_User_pair_t pure_List_BTree_int_User_pair_t (const BTree_int_User_pair_t * buf , size_t len );
size_t show_List_BTree_int_User_pair_t (FILE * file , List_BTree_int_User_pair_t list );
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
size_t hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t desired );
size_t len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t tail_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (size_t len , List_BTree_int_User_pair_t list );
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list );
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t__H_Table * const get_List_BTree_int_User_pair_t__H_Table ();
void free_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t * this_ptr );
void free_List_BTree_int_User_pair_t_pointer (List_BTree_int_User_pair_t ** this_ptr );
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
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_List_BTree_int_User_pair_t Maybe_List_BTree_int_User_pair_t ;
typedef std_data Maybe_List_BTree_int_User_pair_t_type_t ;
typedef void (*free_Maybe_List_BTree_int_User_pair_t_t) (Maybe_List_BTree_int_User_pair_t * this );
typedef struct Maybe_List_BTree_int_User_pair_t__H_Table {
  free_Maybe_List_BTree_int_User_pair_t_t freeData ;
} Maybe_List_BTree_int_User_pair_t__H_Table;
typedef struct Maybe_List_BTree_int_User_pair_t {
  const Maybe_List_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion516 */
    struct { /* ciciliStruct517 */
      List_BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct518 */
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
void free_Maybe_List_BTree_int_User_pair_t_pointer (Maybe_List_BTree_int_User_pair_t ** this );
#endif /* __Maybe_List_BTree_int_User_pair_t__H_DECL__ */ 
#ifndef __Maybe_List_BTree_int_User_pair_t__H_DECL__
#define __Maybe_List_BTree_int_User_pair_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_List_BTree_int_User_pair_t Maybe_List_BTree_int_User_pair_t ;
typedef std_data Maybe_List_BTree_int_User_pair_t_type_t ;
typedef void (*free_Maybe_List_BTree_int_User_pair_t_t) (Maybe_List_BTree_int_User_pair_t * this );
typedef struct Maybe_List_BTree_int_User_pair_t__H_Table {
  free_Maybe_List_BTree_int_User_pair_t_t freeData ;
} Maybe_List_BTree_int_User_pair_t__H_Table;
typedef struct Maybe_List_BTree_int_User_pair_t {
  const Maybe_List_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion547 */
    struct { /* ciciliStruct548 */
      List_BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct549 */
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
void free_Maybe_List_BTree_int_User_pair_t_pointer (Maybe_List_BTree_int_User_pair_t ** this );
#endif /* __Maybe_List_BTree_int_User_pair_t__H_DECL__ */ 
#ifndef __MAYBE_H_
#define __MAYBE_H_
typedef enum MAYBE_CTOR {
  NOTHING_CTOR = 0,
  JUST_CTOR
} MAYBE_CTOR;
typedef struct NothingT {
  char _unused ;
} NothingT;
typedef struct std_maybe std_maybe ;
#endif /* __MAYBE_H_ */ 
#ifndef __MAYBE__ref_BTree_int_User__H_
#define __MAYBE__ref_BTree_int_User__H_
typedef struct JustT_ref_BTree_int_User {
  BTree_int_User * restrict value ;
} JustT_ref_BTree_int_User;
typedef struct Maybe_ref_BTree_int_User {
  MAYBE_CTOR ctor ;
  union { /* ciciliUnion576 */
    JustT_ref_BTree_int_User just ;
    NothingT nothing ;
  } data ;
} Maybe_ref_BTree_int_User;
typedef std_maybe Maybe_ref_BTree_int_User_type_t ;
Maybe_ref_BTree_int_User just_ref_BTree_int_User (BTree_int_User * restrict value );
Maybe_ref_BTree_int_User nothing_ref_BTree_int_User ();
#endif /* __MAYBE__ref_BTree_int_User__H_ */ 
typedef struct rc_BTree_int_User {
  BTree_int_User * restrict ptr ;
  size_t * count ;
} rc_BTree_int_User;
typedef BTree_int_User rc_BTree_int_User_interior_t ;
#ifndef __RC_TYPE_H_
#define __RC_TYPE_H_
typedef struct std_rc std_rc ;
#endif /* __RC_TYPE_H_ */ 
typedef std_rc rc_BTree_int_User_type_t ;
void free_rc_BTree_int_User (rc_BTree_int_User * rc );
void free_rc_BTree_int_User_pointer (rc_BTree_int_User ** rc );
rc_BTree_int_User clone_rc_BTree_int_User (rc_BTree_int_User * restrict rc );
Maybe_ref_BTree_int_User get_rc_BTree_int_User (rc_BTree_int_User * restrict rc );
typedef rc_BTree_int_User * Rc_BTree_int_User ;
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User obj );
Rc_BTree_int_User clone_Rc_BTree_int_User (Rc_BTree_int_User box );
Maybe_ref_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User box );
void free_Rc_BTree_int_User (Rc_BTree_int_User * box );
void free_Rc_BTree_int_User_value (Rc_BTree_int_User box );
void free_Rc_BTree_int_User_pointer (Rc_BTree_int_User ** box );
Maybe_BTree_int_User deref_Rc_BTree_int_User (Rc_BTree_int_User box );
#ifndef __Maybe_Rc_BTree_int_User__H_DECL__
#define __Maybe_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_Rc_BTree_int_User Maybe_Rc_BTree_int_User ;
typedef std_data Maybe_Rc_BTree_int_User_type_t ;
typedef void (*free_Maybe_Rc_BTree_int_User_t) (Maybe_Rc_BTree_int_User * this );
typedef struct Maybe_Rc_BTree_int_User__H_Table {
  free_Maybe_Rc_BTree_int_User_t freeData ;
} Maybe_Rc_BTree_int_User__H_Table;
typedef struct Maybe_Rc_BTree_int_User {
  const Maybe_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion639 */
    struct { /* ciciliStruct640 */
      Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct641 */
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
void free_Maybe_Rc_BTree_int_User_pointer (Maybe_Rc_BTree_int_User ** this );
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
#ifndef __H_STD_CLASS_
#define __H_STD_CLASS_
typedef struct std_class std_class ;
#endif /* __H_STD_CLASS_ */ 
typedef struct class_List_Rc_BTree_int_User class_List_Rc_BTree_int_User ;
typedef class_List_Rc_BTree_int_User * List_Rc_BTree_int_User ;
typedef std_class List_Rc_BTree_int_User_type_t ;
typedef void (*free_List_Rc_BTree_int_User_t) (List_Rc_BTree_int_User * this_ptr );
typedef struct List_Rc_BTree_int_User__H_Table {
  free_List_Rc_BTree_int_User_t freeClass ;
    Rc_BTree_int_User * (*toArray) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*wrap) (const Rc_BTree_int_User item );
    List_Rc_BTree_int_User (*pure) (const Rc_BTree_int_User * buf , size_t len );
    size_t (*show) (FILE * file , List_Rc_BTree_int_User list );
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
    size_t (*hasLen) (List_Rc_BTree_int_User list , size_t desired );
    size_t (*len) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*tail) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*drop) (size_t len , List_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*head) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*nthcdr) (size_t index , List_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*nth) (size_t index , List_Rc_BTree_int_User list );
} List_Rc_BTree_int_User__H_Table;
typedef struct class_List_Rc_BTree_int_User {
  const List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion695 */
    struct { /* ciciliStruct696 */
      Rc_BTree_int_User __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct697 */
    } Nil , _ ;
  } __h_data ;
} class_List_Rc_BTree_int_User;
List_Rc_BTree_int_User Cons_Rc_BTree_int_User (Rc_BTree_int_User head , List_Rc_BTree_int_User tail );
List_Rc_BTree_int_User Nil_Rc_BTree_int_User ();
__attribute__((weak)) List_Rc_BTree_int_User Default_List_Rc_BTree_int_User () {
  return Nil_Rc_BTree_int_User ();
}
Rc_BTree_int_User * toArray_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User wrap_List_Rc_BTree_int_User (const Rc_BTree_int_User item );
List_Rc_BTree_int_User pure_List_Rc_BTree_int_User (const Rc_BTree_int_User * buf , size_t len );
size_t show_List_Rc_BTree_int_User (FILE * file , List_Rc_BTree_int_User list );
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
size_t hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t desired );
size_t len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User tail_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (size_t len , List_Rc_BTree_int_User list );
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list );
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User__H_Table * const get_List_Rc_BTree_int_User__H_Table ();
void free_List_Rc_BTree_int_User (List_Rc_BTree_int_User * this_ptr );
void free_List_Rc_BTree_int_User_pointer (List_Rc_BTree_int_User ** this_ptr );
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
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_List_Rc_BTree_int_User Maybe_List_Rc_BTree_int_User ;
typedef std_data Maybe_List_Rc_BTree_int_User_type_t ;
typedef void (*free_Maybe_List_Rc_BTree_int_User_t) (Maybe_List_Rc_BTree_int_User * this );
typedef struct Maybe_List_Rc_BTree_int_User__H_Table {
  free_Maybe_List_Rc_BTree_int_User_t freeData ;
} Maybe_List_Rc_BTree_int_User__H_Table;
typedef struct Maybe_List_Rc_BTree_int_User {
  const Maybe_List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion799 */
    struct { /* ciciliStruct800 */
      List_Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct801 */
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
void free_Maybe_List_Rc_BTree_int_User_pointer (Maybe_List_Rc_BTree_int_User ** this );
#endif /* __Maybe_List_Rc_BTree_int_User__H_DECL__ */ 
#ifndef __Rc_BTree_int_User_to_Rc_BTree_int_User_t__H_DECL__
#define __Rc_BTree_int_User_to_Rc_BTree_int_User_t__H_DECL__
typedef Rc_BTree_int_User (*Rc_BTree_int_User_to_Rc_BTree_int_User_t) (Rc_BTree_int_User value );
#endif /* __Rc_BTree_int_User_to_Rc_BTree_int_User_t__H_DECL__ */ 
#ifndef __Functor_List_Rc_BTree_int_User__H_DECL__
#define __Functor_List_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Functor_List_Rc_BTree_int_User Functor_List_Rc_BTree_int_User ;
typedef std_data Functor_List_Rc_BTree_int_User_type_t ;
typedef void (*free_Functor_List_Rc_BTree_int_User_t) (Functor_List_Rc_BTree_int_User * this );
typedef struct Functor_List_Rc_BTree_int_User__H_Table {
  free_Functor_List_Rc_BTree_int_User_t freeData ;
    List_Rc_BTree_int_User (*fmap) (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input );
} Functor_List_Rc_BTree_int_User__H_Table;
typedef struct Functor_List_Rc_BTree_int_User {
  const Functor_List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion840 */
    struct { /* ciciliStruct841 */
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
void free_Functor_List_Rc_BTree_int_User_pointer (Functor_List_Rc_BTree_int_User ** this );
#endif /* __Functor_List_Rc_BTree_int_User__H_DECL__ */ 
Functor_List_Rc_BTree_int_User get_Functor_List_Rc_BTree_int_User ();
List_Rc_BTree_int_User cloneAll_Rc_BTree_int_User (List_Rc_BTree_int_User children );
List_Rc_BTree_int_User replaceChild_Rc_BTree_int_User (List_Rc_BTree_int_User children , BTree_int_User nchild , size_t index );
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
#ifndef __H_STD_CLASS_
#define __H_STD_CLASS_
typedef struct std_class std_class ;
#endif /* __H_STD_CLASS_ */ 
typedef struct class_BTree_int_User class_BTree_int_User ;
typedef class_BTree_int_User * BTree_int_User ;
typedef std_class BTree_int_User_type_t ;
typedef void (*free_BTree_int_User_t) (BTree_int_User * this_ptr );
typedef struct BTree_int_User__H_Table {
  free_BTree_int_User_t freeClass ;
    Either_BTree_int_User_Error_BTree_int_User (*pure) (int keys [], User values [], size_t len );
    size_t (*show) (FILE * file , BTree_int_User tree );
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
  union { /* ciciliUnion904 */
    struct { /* ciciliStruct905 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Branch , _2 ;
    struct { /* ciciliStruct906 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Internal , _1 ;
    struct { /* ciciliStruct907 */
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
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], size_t len );
size_t show_BTree_int_User (FILE * file , BTree_int_User tree );
void traverse_BTree_int_User (BTree_int_User tree , void (*callback) (BTree_int_User_pair_t item , Bool hasNext ));
Maybe_BTree_int_User_pair_t max_BTree_int_User (BTree_int_User tree );
Maybe_BTree_int_User_pair_t min_BTree_int_User (BTree_int_User tree );
Either_BTree_int_User_Error_BTree_int_User delete_BTree_int_User (BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item ));
Maybe_BTree_int_User_pair_t search_BTree_int_User (BTree_int_User tree , int skey );
Either_BTree_int_User_Error_BTree_int_User insert_BTree_int_User (BTree_int_User tree , int skey , User svalue );
size_t order_BTree_int_User ();
BTree_int_User__H_Table * const get_BTree_int_User__H_Table ();
void free_BTree_int_User (BTree_int_User * this_ptr );
void free_BTree_int_User_pointer (BTree_int_User ** this_ptr );
#endif /* __BTree_int_User__H_DECL__ */ 
Ordering compareKey (int lkey , int rkey ) {
  return (((lkey  <  rkey  )) ? LT () : (((lkey  ==  rkey  )) ? EQ () : GT ()));
}
#ifndef __BTree_int_User_Error__H_IMPL__
#define __BTree_int_User_Error__H_IMPL__
void show_BTree_int_User_Error (BTree_int_User_Error error ) {
  { /* let972 */
    // ----------
    ;
    ({ /* letn974 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      
      if (__h_case_result )
        { /* block980 */
          printf ("invalid B-Tree object");
        }
      else
        { /* let985 */
          typeof((((error . __h_data). ERR_INVALID_ORDER). __h_0_mem)) order ;
          // ----------
          ;
          ({ /* letn987 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* progn988 */
                  order  = (((error . __h_data). ERR_INVALID_ORDER). __h_0_mem) ;
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* block995 */
                printf ("invalid B-Tree order: %zu", order );
              }
            else
              { /* let1000 */
                typeof((((error . __h_data). ERR_UNIQUE_KEY). __h_0_mem)) item ;
                // ----------
                ;
                ({ /* letn1002 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* progn1003 */
                        item  = (((error . __h_data). ERR_UNIQUE_KEY). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* block1010 */
                      { /* block1012 */
                        printf ("unique key: ");
                        ({ /* letn1022 */
                          typeof((item . __h_0_mem)) id ;
                          typeof((item . __h_1_mem)) __h_match1020_1_arg ;
                          typeof((__h_match1020_1_arg . __h_0_mem)) salary ;
                          typeof((__h_match1020_1_arg . __h_1_mem)) grade ;
                          // ----------
                          ;
                          ({ /* letn1024 */
                            bool __h_case_result  = (true  &&  ((({ /* progn1025 */
                                    id  = (item . __h_0_mem) ;
                                    true ;
                                  }) &&  ({ /* progn1027 */
                                    __h_match1020_1_arg  = (item . __h_1_mem) ;
                                    true ;
                                  }) ) &&  (true  &&  (({ /* progn1029 */
                                      salary  = (__h_match1020_1_arg . __h_0_mem) ;
                                      true ;
                                    }) &&  ({ /* progn1031 */
                                      grade  = (__h_match1020_1_arg . __h_1_mem) ;
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn1036 */
                                fprintf (stdout , "(id: %d, salary: %d, grade: %d)", id , salary , grade );
                              }) : ({ /* letn1040 */
                                // ----------
                                ;
                                ({ /* progn1042 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* let1047 */
                      typeof((((error . __h_data). ERR_NOT_FOUND). __h_0_mem)) key ;
                      // ----------
                      ;
                      ({ /* letn1049 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* progn1050 */
                              key  = (((error . __h_data). ERR_NOT_FOUND). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* block1057 */
                            { /* block1059 */
                              printf ("key not found: ");
                              fprintf (stdout , "%d", key );
                            }
                          }
                        else
                          { /* let1067 */
                            typeof((((error . __h_data). ERR_ACCESS_DEAD_CHILD). __h_0_mem)) item ;
                            typeof((((error . __h_data). ERR_ACCESS_DEAD_CHILD). __h_1_mem)) index ;
                            // ----------
                            ;
                            ({ /* letn1069 */
                              bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* progn1070 */
                                      item  = (((error . __h_data). ERR_ACCESS_DEAD_CHILD). __h_0_mem) ;
                                      true ;
                                    }) &&  ({ /* progn1072 */
                                      index  = (((error . __h_data). ERR_ACCESS_DEAD_CHILD). __h_1_mem) ;
                                      true ;
                                    }) ) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* block1079 */
                                  { /* block1081 */
                                    printf ("dead child at index: %zu of item: ", index );
                                    ({ /* letn1091 */
                                      typeof((item . __h_0_mem)) id ;
                                      typeof((item . __h_1_mem)) __h_match1089_1_arg ;
                                      typeof((__h_match1089_1_arg . __h_0_mem)) salary ;
                                      typeof((__h_match1089_1_arg . __h_1_mem)) grade ;
                                      // ----------
                                      ;
                                      ({ /* letn1093 */
                                        bool __h_case_result  = (true  &&  ((({ /* progn1094 */
                                                id  = (item . __h_0_mem) ;
                                                true ;
                                              }) &&  ({ /* progn1096 */
                                                __h_match1089_1_arg  = (item . __h_1_mem) ;
                                                true ;
                                              }) ) &&  (true  &&  (({ /* progn1098 */
                                                  salary  = (__h_match1089_1_arg . __h_0_mem) ;
                                                  true ;
                                                }) &&  ({ /* progn1100 */
                                                  grade  = (__h_match1089_1_arg . __h_1_mem) ;
                                                  true ;
                                                }) ) ) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* progn1105 */
                                            fprintf (stdout , "(id: %d, salary: %d, grade: %d)", id , salary , grade );
                                          }) : ({ /* letn1109 */
                                            // ----------
                                            ;
                                            ({ /* progn1111 */
                                              0;
                                            });
                                          }));
                                      });
                                    });
                                  }
                                }
                              else
                                { /* let1116 */
                                  typeof((((error . __h_data). ERR_INVALID_BRANCH). __h_0_mem)) branch ;
                                  // ----------
                                  ;
                                  ({ /* letn1118 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* progn1119 */
                                          branch  = (((error . __h_data). ERR_INVALID_BRANCH). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block1126 */
                                        { /* block1128 */
                                          printf ("invalid branch: ");
                                          show_BTree_int_User (stdout , branch );
                                        }
                                      }
                                    else
                                      { /* let1134 */
                                        typeof((((error . __h_data). ERR_CANT_BORROW). __h_0_mem)) reason ;
                                        // ----------
                                        ;
                                        ({ /* letn1136 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* progn1137 */
                                                reason  = (((error . __h_data). ERR_CANT_BORROW). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* block1144 */
                                              printf ("borrow error: %s", reason );
                                            }
                                          else
                                            { /* let1149 */
                                              // ----------
                                              ;
                                              { /* block1151 */
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
__attribute__((weak)) void free_BTree_int_User_Error_pointer (BTree_int_User_Error ** this ) {
  if (this )
    { /* block1160 */
      free_BTree_int_User_Error ((*this ));
    }
}
const BTree_int_User_Error__H_Table * const get_BTree_int_User_Error__H_Table () {
  static const BTree_int_User_Error__H_Table table  = { free_BTree_int_User_Error , show_BTree_int_User_Error };
  return (&table );
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_OBJECT () {
  { /* let1170 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (size_t order ) {
  { /* let1175 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item ) {
  { /* let1180 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key ) {
  { /* let1185 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , size_t index ) {
  { /* let1190 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch ) {
  { /* let1195 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason ) {
  { /* let1200 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_CANT_BORROW_t , .__h_data._ = { reason }});
    // ----------
    return instance ;
  }
}
#endif /* __BTree_int_User_Error__H_IMPL__ */ 
#ifndef __Bool__H_IMPL__
#define __Bool__H_IMPL__
int show_Bool (FILE * file , Bool value ) {
  return ({ /* letn1211 */
      // ----------
      ;
      ({ /* letn1213 */
        bool __h_case_result  = (true  &&  ((value . __h_ctor) ==  __h_False_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1217 */
            fprintf (file , "%s", "False");
          }) : ({ /* letn1221 */
            // ----------
            ;
            ({ /* progn1223 */
              fprintf (file , "%s", "True");
            });
          }));
      });
    });
}
Bool or_Bool (Bool lhs , Bool rhs ) {
  return ({ /* letn1231 */
      // ----------
      ;
      ({ /* letn1233 */
        bool __h_case_result  = (true  &&  ((lhs . __h_ctor) ==  __h_True_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1237 */
            True ();
          }) : ({ /* letn1241 */
            // ----------
            ;
            ({ /* progn1243 */
              ({ /* letn1249 */
                // ----------
                ;
                ({ /* letn1251 */
                  bool __h_case_result  = (true  &&  ((rhs . __h_ctor) ==  __h_True_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1255 */
                      True ();
                    }) : ({ /* letn1259 */
                      // ----------
                      ;
                      ({ /* progn1261 */
                        False ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
Bool and_Bool (Bool lhs , Bool rhs ) {
  return ({ /* letn1269 */
      // ----------
      ;
      ({ /* letn1271 */
        bool __h_case_result  = (true  &&  ((lhs . __h_ctor) ==  __h_False_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1275 */
            False ();
          }) : ({ /* letn1279 */
            // ----------
            ;
            ({ /* progn1281 */
              ({ /* letn1287 */
                // ----------
                ;
                ({ /* letn1289 */
                  bool __h_case_result  = (true  &&  ((rhs . __h_ctor) ==  __h_False_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1293 */
                      False ();
                    }) : ({ /* letn1297 */
                      // ----------
                      ;
                      ({ /* progn1299 */
                        True ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
void free_Bool (Bool * this ) {
}
__attribute__((weak)) void free_Bool_pointer (Bool ** this ) {
  if (this )
    { /* block1308 */
      free_Bool ((*this ));
    }
}
const Bool__H_Table * const get_Bool__H_Table () {
  static const Bool__H_Table table  = { free_Bool , show_Bool , or_Bool , and_Bool };
  return (&table );
}
Bool True () {
  { /* let1317 */
    Bool instance  = ((Bool){ get_Bool__H_Table (), __h_True_t });
    // ----------
    return instance ;
  }
}
Bool False () {
  { /* let1321 */
    Bool instance  = ((Bool){ get_Bool__H_Table (), __h_False_t });
    // ----------
    return instance ;
  }
}
#endif /* __Bool__H_IMPL__ */ 
#ifndef __Ordering__H_IMPL__
#define __Ordering__H_IMPL__
int show_Ordering (FILE * file , Ordering value ) {
  return ({ /* letn1332 */
      // ----------
      ;
      ({ /* letn1334 */
        bool __h_case_result  = (true  &&  ((value . __h_ctor) ==  __h_LT_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1338 */
            fprintf (file , "%s", "LT");
          }) : ({ /* letn1342 */
            // ----------
            ;
            ({ /* letn1344 */
              bool __h_case_result  = (true  &&  ((value . __h_ctor) ==  __h_EQ_t  ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn1348 */
                  fprintf (file , "%s", "EQ");
                }) : ({ /* letn1352 */
                  // ----------
                  ;
                  ({ /* progn1354 */
                    fprintf (file , "%s", "GT");
                  });
                }));
            });
          }));
      });
    });
}
void free_Ordering (Ordering * this ) {
}
__attribute__((weak)) void free_Ordering_pointer (Ordering ** this ) {
  if (this )
    { /* block1363 */
      free_Ordering ((*this ));
    }
}
const Ordering__H_Table * const get_Ordering__H_Table () {
  static const Ordering__H_Table table  = { free_Ordering , show_Ordering };
  return (&table );
}
Ordering LT () {
  { /* let1372 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_LT_t });
    // ----------
    return instance ;
  }
}
Ordering EQ () {
  { /* let1376 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_EQ_t });
    // ----------
    return instance ;
  }
}
Ordering GT () {
  { /* let1380 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_GT_t });
    // ----------
    return instance ;
  }
}
#endif /* __Ordering__H_IMPL__ */ 
#ifndef __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__
#define __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__
void free_Either_BTree_int_User_Error_BTree_int_User (Either_BTree_int_User_Error_BTree_int_User * this ) {
}
__attribute__((weak)) void free_Either_BTree_int_User_Error_BTree_int_User_pointer (Either_BTree_int_User_Error_BTree_int_User ** this ) {
  if (this )
    { /* block1394 */
      free_Either_BTree_int_User_Error_BTree_int_User ((*this ));
    }
}
const Either_BTree_int_User_Error_BTree_int_User__H_Table * const get_Either_BTree_int_User_Error_BTree_int_User__H_Table () {
  static const Either_BTree_int_User_Error_BTree_int_User__H_Table table  = { free_Either_BTree_int_User_Error_BTree_int_User };
  return (&table );
}
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value ) {
  { /* let1404 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* let1409 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Left_t , .__h_data._ = { error }});
    // ----------
    return instance ;
  }
}
#endif /* __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_BTree_int_User__H_IMPL__
#define __Maybe_BTree_int_User__H_IMPL__
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this ) {
}
__attribute__((weak)) void free_Maybe_BTree_int_User_pointer (Maybe_BTree_int_User ** this ) {
  if (this )
    { /* block1423 */
      free_Maybe_BTree_int_User ((*this ));
    }
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table () {
  static const Maybe_BTree_int_User__H_Table table  = { free_Maybe_BTree_int_User };
  return (&table );
}
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value ) {
  { /* let1433 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* let1438 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_BTree_int_User_pair_t__H_IMPL__
#define __Maybe_BTree_int_User_pair_t__H_IMPL__
void free_Maybe_BTree_int_User_pair_t (Maybe_BTree_int_User_pair_t * this ) {
}
__attribute__((weak)) void free_Maybe_BTree_int_User_pair_t_pointer (Maybe_BTree_int_User_pair_t ** this ) {
  if (this )
    { /* block1452 */
      free_Maybe_BTree_int_User_pair_t ((*this ));
    }
}
const Maybe_BTree_int_User_pair_t__H_Table * const get_Maybe_BTree_int_User_pair_t__H_Table () {
  static const Maybe_BTree_int_User_pair_t__H_Table table  = { free_Maybe_BTree_int_User_pair_t };
  return (&table );
}
Maybe_BTree_int_User_pair_t Just_BTree_int_User_pair_t (BTree_int_User_pair_t value ) {
  { /* let1462 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
  { /* let1467 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __Maybe_BTree_int_User_pair_t__H_IMPL__
#define __Maybe_BTree_int_User_pair_t__H_IMPL__
void free_Maybe_BTree_int_User_pair_t (Maybe_BTree_int_User_pair_t * this ) {
}
__attribute__((weak)) void free_Maybe_BTree_int_User_pair_t_pointer (Maybe_BTree_int_User_pair_t ** this ) {
  if (this )
    { /* block1483 */
      free_Maybe_BTree_int_User_pair_t ((*this ));
    }
}
const Maybe_BTree_int_User_pair_t__H_Table * const get_Maybe_BTree_int_User_pair_t__H_Table () {
  static const Maybe_BTree_int_User_pair_t__H_Table table  = { free_Maybe_BTree_int_User_pair_t };
  return (&table );
}
Maybe_BTree_int_User_pair_t Just_BTree_int_User_pair_t (BTree_int_User_pair_t value ) {
  { /* let1493 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
  { /* let1498 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __List_BTree_int_User_pair_t__H_IMPL__
#define __List_BTree_int_User_pair_t__H_IMPL__
BTree_int_User_pair_t * toArray_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  BTree_int_User_pair_t * array (List_BTree_int_User_pair_t list , size_t count ) {
    return ({ /* letn1510 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn1512 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1513 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1515 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn1520 */
              ({ /* letn1522 */
                BTree_int_User_pair_t * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* letn1526 */
              // ----------
              ;
              ({ /* progn1528 */
                ((BTree_int_User_pair_t *)calloc (count , sizeof(BTree_int_User_pair_t)));
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
List_BTree_int_User_pair_t pure_List_BTree_int_User_pair_t (const BTree_int_User_pair_t * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_BTree_int_User_pair_t () : ({ /* letn1539 */
        BTree_int_User_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_BTree_int_User_pair_t () : Cons_BTree_int_User_pair_t (item , pure_List_BTree_int_User_pair_t ((++buf ), (--len ))));
      }));
}
size_t show_List_BTree_int_User_pair_t (FILE * file , List_BTree_int_User_pair_t list ) {
  return ({ /* letn1551 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1553 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1554 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1556 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1561 */
            (({ /* letn1567 */
                // ----------
                ;
                ({ /* letn1569 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1573 */
                      (({ /* letn1583 */
                          typeof((head . __h_0_mem)) id ;
                          typeof((head . __h_1_mem)) __h_match1581_1_arg ;
                          typeof((__h_match1581_1_arg . __h_0_mem)) salary ;
                          typeof((__h_match1581_1_arg . __h_1_mem)) grade ;
                          // ----------
                          ;
                          ({ /* letn1585 */
                            bool __h_case_result  = (true  &&  ((({ /* progn1586 */
                                    id  = (head . __h_0_mem) ;
                                    true ;
                                  }) &&  ({ /* progn1588 */
                                    __h_match1581_1_arg  = (head . __h_1_mem) ;
                                    true ;
                                  }) ) &&  (true  &&  (({ /* progn1590 */
                                      salary  = (__h_match1581_1_arg . __h_0_mem) ;
                                      true ;
                                    }) &&  ({ /* progn1592 */
                                      grade  = (__h_match1581_1_arg . __h_1_mem) ;
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn1597 */
                                fprintf (file , "(id: %d, salary: %d, grade: %d)", id , salary , grade );
                              }) : ({ /* letn1601 */
                                // ----------
                                ;
                                ({ /* progn1603 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* letn1607 */
                      // ----------
                      ;
                      ({ /* progn1609 */
                        ({ /* letn1619 */
                          typeof((head . __h_0_mem)) id ;
                          typeof((head . __h_1_mem)) __h_match1617_1_arg ;
                          typeof((__h_match1617_1_arg . __h_0_mem)) salary ;
                          typeof((__h_match1617_1_arg . __h_1_mem)) grade ;
                          // ----------
                          ;
                          ({ /* letn1621 */
                            bool __h_case_result  = (true  &&  ((({ /* progn1622 */
                                    id  = (head . __h_0_mem) ;
                                    true ;
                                  }) &&  ({ /* progn1624 */
                                    __h_match1617_1_arg  = (head . __h_1_mem) ;
                                    true ;
                                  }) ) &&  (true  &&  (({ /* progn1626 */
                                      salary  = (__h_match1617_1_arg . __h_0_mem) ;
                                      true ;
                                    }) &&  ({ /* progn1628 */
                                      grade  = (__h_match1617_1_arg . __h_1_mem) ;
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn1633 */
                                fprintf (file , "(id: %d, salary: %d, grade: %d)", id , salary , grade );
                              }) : ({ /* letn1637 */
                                // ----------
                                ;
                                ({ /* progn1639 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_BTree_int_User_pair_t (file , tail ) );
          }) : ({ /* letn1644 */
            // ----------
            ;
            ({ /* progn1646 */
              0;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn1654 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1656 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1657 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1659 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1664 */
            Cons_BTree_int_User_pair_t (head , copy_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* letn1670 */
            // ----------
            ;
            ({ /* progn1672 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index ) {
  return ({ /* letn1681 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1683 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1684 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1686 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1691 */
            Cons_BTree_int_User_pair_t (head , replaceAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* letn1697 */
            // ----------
            ;
            ({ /* progn1699 */
              ({ /* letn1705 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn1707 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1708 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1713 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* letn1719 */
                      // ----------
                      ;
                      ({ /* progn1721 */
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
List_BTree_int_User_pair_t deleteAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t index ) {
  return ({ /* letn1730 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1732 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1733 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1735 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1740 */
            Cons_BTree_int_User_pair_t (head , deleteAt_List_BTree_int_User_pair_t (tail , (index  -  1 )));
          }) : ({ /* letn1746 */
            // ----------
            ;
            ({ /* progn1748 */
              ({ /* letn1754 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn1756 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1757 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1762 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* letn1767 */
                      // ----------
                      ;
                      ({ /* progn1769 */
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
List_BTree_int_User_pair_t insertAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index ) {
  return ({ /* letn1778 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1780 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1781 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1783 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1788 */
            Cons_BTree_int_User_pair_t (head , insertAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* letn1794 */
            // ----------
            ;
            ({ /* progn1796 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (list ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed ) {
  return ({ /* letn1806 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1808 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1809 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1811 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1816 */
            Cons_BTree_int_User_pair_t (head , replace_List_BTree_int_User_pair_t (tail , item , aimed ));
          }) : ({ /* letn1822 */
            // ----------
            ;
            ({ /* progn1824 */
              ({ /* letn1830 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn1832 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1833 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1838 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* letn1844 */
                      // ----------
                      ;
                      ({ /* progn1846 */
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
  return ({ /* letn1855 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1857 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1858 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1860 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1865 */
            Cons_BTree_int_User_pair_t (head , delete_List_BTree_int_User_pair_t (tail , aimed ));
          }) : ({ /* letn1871 */
            // ----------
            ;
            ({ /* progn1873 */
              ({ /* letn1879 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn1881 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1882 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1887 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* letn1892 */
                      // ----------
                      ;
                      ({ /* progn1894 */
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
  return ({ /* letn1903 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1905 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1906 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1908 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1913 */
            Cons_BTree_int_User_pair_t (head , insert_List_BTree_int_User_pair_t (tail , item , rlist ));
          }) : ({ /* letn1919 */
            // ----------
            ;
            ({ /* progn1921 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  List_BTree_int_User_pair_t _reverse (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t rlist ) {
    return ({ /* letn1932 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn1934 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1935 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1937 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn1942 */
              _reverse (tail , Cons_BTree_int_User_pair_t (head , rlist ));
            }) : ({ /* letn1947 */
              // ----------
              ;
              ({ /* progn1949 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* letn1955 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1957 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1958 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1960 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1965 */
            _reverse (tail , Cons_BTree_int_User_pair_t (head , Nil_BTree_int_User_pair_t ()));
          }) : ({ /* letn1971 */
            // ----------
            ;
            ({ /* progn1973 */
              list ;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist ) {
  return ({ /* letn1981 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1983 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1984 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1986 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1991 */
            Cons_BTree_int_User_pair_t (head , append_List_BTree_int_User_pair_t (tail , rlist ));
          }) : ({ /* letn1997 */
            // ----------
            ;
            ({ /* progn1999 */
              copy_List_BTree_int_User_pair_t (rlist );
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t push_List_BTree_int_User_pair_t (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list ) {
  return Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (list ));
}
List_BTree_int_User_pair_t take_List_BTree_int_User_pair_t (size_t len , List_BTree_int_User_pair_t list ) {
  return (((len  <=  0 )) ? Nil_BTree_int_User_pair_t () : ({ /* letn2014 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn2016 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2017 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2019 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn2024 */
              Cons_BTree_int_User_pair_t (head , take_List_BTree_int_User_pair_t ((--len ), tail ));
            }) : ({ /* letn2030 */
              // ----------
              ;
              ({ /* progn2032 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn2041 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2043 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2044 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2049 */
            ({ /* letn2055 */
              // ----------
              ;
              ({ /* letn2057 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn2061 */
                    copy_List_BTree_int_User_pair_t (list );
                  }) : ({ /* letn2066 */
                    // ----------
                    ;
                    ({ /* progn2068 */
                      last_List_BTree_int_User_pair_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn2073 */
            // ----------
            ;
            ({ /* progn2075 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn2085 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2087 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2088 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2090 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2095 */
            Cons_BTree_int_User_pair_t (head , init_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* letn2101 */
            // ----------
            ;
            ({ /* progn2103 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
size_t hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t desired ) {
  return ({ /* letn2112 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2114 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2115 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2120 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_int_User_pair_t (tail , (--desired )) ));
          }) : ({ /* letn2126 */
            // ----------
            ;
            ({ /* progn2128 */
              0;
            });
          }));
      });
    });
}
size_t len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn2136 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2138 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2139 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2144 */
            (1 +  len_List_BTree_int_User_pair_t (tail ) );
          }) : ({ /* letn2149 */
            // ----------
            ;
            ({ /* progn2151 */
              0;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t tail_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return drop_List_BTree_int_User_pair_t (1, list );
}
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (size_t len , List_BTree_int_User_pair_t list ) {
  return (((len  <=  0 )) ? copy_List_BTree_int_User_pair_t (list ) : ({ /* letn2164 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn2166 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2167 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn2172 */
              drop_List_BTree_int_User_pair_t ((--len ), tail );
            }) : ({ /* letn2177 */
              // ----------
              ;
              ({ /* progn2179 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn2189 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn2191 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2192 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2197 */
            Just_BTree_int_User_pair_t (head );
          }) : ({ /* letn2202 */
            // ----------
            ;
            ({ /* progn2204 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list ) {
  return ({ /* letn2213 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2215 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2216 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2221 */
            nthcdr_List_BTree_int_User_pair_t ((--index ), tail );
          }) : ({ /* letn2226 */
            // ----------
            ;
            ({ /* progn2228 */
              list ;
            });
          }));
      });
    });
}
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list ) {
  return ({ /* letn2237 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2239 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2240 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2242 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2247 */
            (((index  ==  0 )) ? Just_BTree_int_User_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_int_User_pair_t () : nth_List_BTree_int_User_pair_t ((--index ), tail )));
          }) : ({ /* letn2256 */
            // ----------
            ;
            ({ /* progn2258 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
void free_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t * this_ptr ) {
  { /* let2263 */
    List_BTree_int_User_pair_t this  = (*this_ptr );
    // ----------
    { /* let2267 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2269 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2270 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block2277 */
            { /* block2279 */
              free (this );
              free_List_BTree_int_User_pair_t ((&tail ));
            }
          }
        else
          { /* let2287 */
            // ----------
            ;
            ({ /* letn2289 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block2295 */
                  { /* block2297 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
__attribute__((weak)) void free_List_BTree_int_User_pair_t_pointer (List_BTree_int_User_pair_t ** this_ptr ) {
  if (this_ptr )
    { /* block2306 */
      free_List_BTree_int_User_pair_t ((*this_ptr ));
    }
}
List_BTree_int_User_pair_t__H_Table * const get_List_BTree_int_User_pair_t__H_Table () {
  static List_BTree_int_User_pair_t__H_Table table  = { free_List_BTree_int_User_pair_t , toArray_List_BTree_int_User_pair_t , wrap_List_BTree_int_User_pair_t , pure_List_BTree_int_User_pair_t , show_List_BTree_int_User_pair_t , copy_List_BTree_int_User_pair_t , replaceAt_List_BTree_int_User_pair_t , deleteAt_List_BTree_int_User_pair_t , insertAt_List_BTree_int_User_pair_t , replace_List_BTree_int_User_pair_t , delete_List_BTree_int_User_pair_t , insert_List_BTree_int_User_pair_t , reverse_List_BTree_int_User_pair_t , append_List_BTree_int_User_pair_t , push_List_BTree_int_User_pair_t , take_List_BTree_int_User_pair_t , last_List_BTree_int_User_pair_t , init_List_BTree_int_User_pair_t , hasLen_List_BTree_int_User_pair_t , len_List_BTree_int_User_pair_t , tail_List_BTree_int_User_pair_t , drop_List_BTree_int_User_pair_t , head_List_BTree_int_User_pair_t , nthcdr_List_BTree_int_User_pair_t , nth_List_BTree_int_User_pair_t };
  return (&table );
}
List_BTree_int_User_pair_t Cons_BTree_int_User_pair_t (BTree_int_User_pair_t head , List_BTree_int_User_pair_t tail ) {
  { /* let2316 */
    List_BTree_int_User_pair_t instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_BTree_int_User_pair_t Nil_BTree_int_User_pair_t () {
  { /* let2322 */
    List_BTree_int_User_pair_t instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h_Nil_t });
    return instance ;
  }
}
#endif /* __List_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __Maybe_List_BTree_int_User_pair_t__H_IMPL__
#define __Maybe_List_BTree_int_User_pair_t__H_IMPL__
void free_Maybe_List_BTree_int_User_pair_t (Maybe_List_BTree_int_User_pair_t * this ) {
}
__attribute__((weak)) void free_Maybe_List_BTree_int_User_pair_t_pointer (Maybe_List_BTree_int_User_pair_t ** this ) {
  if (this )
    { /* block2337 */
      free_Maybe_List_BTree_int_User_pair_t ((*this ));
    }
}
const Maybe_List_BTree_int_User_pair_t__H_Table * const get_Maybe_List_BTree_int_User_pair_t__H_Table () {
  static const Maybe_List_BTree_int_User_pair_t__H_Table table  = { free_Maybe_List_BTree_int_User_pair_t };
  return (&table );
}
Maybe_List_BTree_int_User_pair_t Just_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t value ) {
  { /* let2347 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t () {
  { /* let2352 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __Maybe_List_BTree_int_User_pair_t__H_IMPL__
#define __Maybe_List_BTree_int_User_pair_t__H_IMPL__
void free_Maybe_List_BTree_int_User_pair_t (Maybe_List_BTree_int_User_pair_t * this ) {
}
__attribute__((weak)) void free_Maybe_List_BTree_int_User_pair_t_pointer (Maybe_List_BTree_int_User_pair_t ** this ) {
  if (this )
    { /* block2366 */
      free_Maybe_List_BTree_int_User_pair_t ((*this ));
    }
}
const Maybe_List_BTree_int_User_pair_t__H_Table * const get_Maybe_List_BTree_int_User_pair_t__H_Table () {
  static const Maybe_List_BTree_int_User_pair_t__H_Table table  = { free_Maybe_List_BTree_int_User_pair_t };
  return (&table );
}
Maybe_List_BTree_int_User_pair_t Just_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t value ) {
  { /* let2376 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t () {
  { /* let2381 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __MAYBE_IMPL__ref_BTree_int_User__H_
#define __MAYBE_IMPL__ref_BTree_int_User__H_
Maybe_ref_BTree_int_User just_ref_BTree_int_User (BTree_int_User * restrict value ) {
  return ((Maybe_ref_BTree_int_User){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_ref_BTree_int_User nothing_ref_BTree_int_User () {
  return ((Maybe_ref_BTree_int_User){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__ref_BTree_int_User__H_ */ 
Maybe_ref_BTree_int_User get_rc_BTree_int_User (rc_BTree_int_User * restrict rc ) {
  if ((rc -> ptr) &&  (rc -> count) &&  ((*(rc -> count)) >=  1 ) )
    return ((Maybe_ref_BTree_int_User){ .ctor = JUST_CTOR , .data.just.value = (rc -> ptr)});
  else
    return ((Maybe_ref_BTree_int_User){ .ctor = NOTHING_CTOR });
}
__attribute__((weak)) void free_rc_BTree_int_User (rc_BTree_int_User * rc ) {
  if ((rc -> ptr) &&  (rc -> count) )
    { /* block2416 */
      if ((*(rc -> count)) ==  1 )
        { /* block2422 */
          free_BTree_int_User ((rc -> ptr));
          free ((rc -> count));
          free ((rc -> ptr));
        }
      else
        (--(*(rc -> count)));
    }
}
__attribute__((weak)) void free_rc_BTree_int_User_pointer (rc_BTree_int_User ** rc ) {
  free_rc_BTree_int_User ((*rc ));
}
rc_BTree_int_User clone_rc_BTree_int_User (rc_BTree_int_User * restrict rc ) {
  if ((rc -> ptr) &&  (rc -> count) &&  ((*(rc -> count)) >=  1 ) )
    { /* block2437 */
      (++(*(rc -> count)));
      return ((rc_BTree_int_User){ (rc -> ptr), (rc -> count)});
    }
  return ((rc_BTree_int_User){ NULL , NULL });
}
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User obj ) {
  return ({ /* letn2445 */
      BTree_int_User * restrict ptr  = malloc (sizeof(BTree_int_User));
      size_t * count  = malloc (sizeof(size_t));
      Rc_BTree_int_User box  = malloc (sizeof(rc_BTree_int_User ));
      // ----------
      memcpy (ptr , (&obj ), sizeof(BTree_int_User));
      (*count ) = 1;
      (box -> ptr) = ptr ;
      (box -> count) = count ;
      box ;
    });
}
Rc_BTree_int_User clone_Rc_BTree_int_User (Rc_BTree_int_User box ) {
  if ((box  ==  NULL  ) ||  ((box -> ptr) ==  NULL  ) ||  ((box -> count) ==  NULL  ) )
    { /* block2453 */
      return NULL ;
    }
  (++(*(box -> count)));
  return ({ /* letn2455 */
      Rc_BTree_int_User fresh  = malloc (sizeof(rc_BTree_int_User ));
      // ----------
      (fresh -> ptr) = (box -> ptr);
      (fresh -> count) = (box -> count);
      fresh ;
    });
}
__attribute__((weak)) Maybe_ref_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User box ) {
  if (box  ==  NULL  )
    { /* block2464 */
      return ((Maybe_ref_BTree_int_User){ .ctor = NOTHING_CTOR });
    }
  return get_rc_BTree_int_User (box );
}
void free_Rc_BTree_int_User_value (Rc_BTree_int_User box ) {
  if (box )
    { /* block2473 */
      free_rc_BTree_int_User (box );
      free (box );
    }
}
__attribute__((weak)) void free_Rc_BTree_int_User (Rc_BTree_int_User * box ) {
  if (box )
    { /* block2481 */
      free_Rc_BTree_int_User_value ((*box ));
      (*box ) = NULL ;
    }
}
__attribute__((weak)) void free_Rc_BTree_int_User_pointer (Rc_BTree_int_User ** box ) {
  if (box )
    { /* block2489 */
      free_Rc_BTree_int_User ((*box ));
    }
}
Maybe_BTree_int_User deref_Rc_BTree_int_User (Rc_BTree_int_User box ) {
  return ({ /* letn2499 */
      Maybe_ref_BTree_int_User matchn2498  = get_Rc_BTree_int_User (box );
      // ----------
      ((((matchn2498 . ctor) ==  JUST_CTOR  )) ? ({ /* letn2501 */
          BTree_int_User * restrict child  = (((matchn2498 . data). just). value);
          // ----------
          Just_BTree_int_User ((*child ));
        }) : ({ /* progn2504 */
          Nothing_BTree_int_User ();
        }));
    });
}
List_Rc_BTree_int_User cloneAll_Rc_BTree_int_User (List_Rc_BTree_int_User children ) {
  return fmap_Functor_List_Rc_BTree_int_User (({ /* progn2516 */
      Rc_BTree_int_User __ciciliC_2515 (Rc_BTree_int_User __h_value ) {
        return clone_Rc_BTree_int_User (__h_value );
      }
      __ciciliC_2515 ;
    }), children );
}
List_Rc_BTree_int_User replaceChild_Rc_BTree_int_User (List_Rc_BTree_int_User children , BTree_int_User nchild , size_t index ) {
  return ({ /* letn2529 */
      typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((children -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2531 */
        bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2532 */
                head  = (((children -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2534 */
                tail  = (((children -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2539 */
            (((index  ==  0 )) ? Cons_Rc_BTree_int_User (new_Rc_BTree_int_User (nchild ), cloneAll_Rc_BTree_int_User (tail )) : Cons_Rc_BTree_int_User (clone_Rc_BTree_int_User (head ), replaceChild_Rc_BTree_int_User (tail , nchild , (index  -  1 ))));
          }) : ({ /* letn2550 */
            // ----------
            ;
            ({ /* progn2552 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
#ifndef __Maybe_Rc_BTree_int_User__H_IMPL__
#define __Maybe_Rc_BTree_int_User__H_IMPL__
void free_Maybe_Rc_BTree_int_User (Maybe_Rc_BTree_int_User * this ) {
}
__attribute__((weak)) void free_Maybe_Rc_BTree_int_User_pointer (Maybe_Rc_BTree_int_User ** this ) {
  if (this )
    { /* block2568 */
      free_Maybe_Rc_BTree_int_User ((*this ));
    }
}
const Maybe_Rc_BTree_int_User__H_Table * const get_Maybe_Rc_BTree_int_User__H_Table () {
  static const Maybe_Rc_BTree_int_User__H_Table table  = { free_Maybe_Rc_BTree_int_User };
  return (&table );
}
Maybe_Rc_BTree_int_User Just_Rc_BTree_int_User (Rc_BTree_int_User value ) {
  Rc_BTree_int_User * __moved_value __attribute__((__cleanup__( free_Rc_BTree_int_User_pointer))) = (& value) ;
  { /* let2579 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { ((Rc_BTree_int_User   )({ /* letnmove2582 */
          Rc_BTree_int_User moved_var2581  = value ;
          // ----------
          memset ((&value ), 0, sizeof(value ));
          moved_var2581 ;
        }))}});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User () {
  { /* let2587 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __List_Rc_BTree_int_User__H_IMPL__
#define __List_Rc_BTree_int_User__H_IMPL__
Rc_BTree_int_User * toArray_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  Rc_BTree_int_User * array (List_Rc_BTree_int_User list , size_t count ) {
    return ({ /* letn2599 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn2601 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2602 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2604 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn2609 */
              ({ /* letn2611 */
                Rc_BTree_int_User * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* letn2615 */
              // ----------
              ;
              ({ /* progn2617 */
                ((Rc_BTree_int_User *)calloc (count , sizeof(Rc_BTree_int_User)));
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
List_Rc_BTree_int_User pure_List_Rc_BTree_int_User (const Rc_BTree_int_User * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_Rc_BTree_int_User () : ({ /* letn2627 */
        Rc_BTree_int_User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Rc_BTree_int_User () : Cons_Rc_BTree_int_User (item , pure_List_Rc_BTree_int_User ((++buf ), (--len ))));
      }));
}
size_t show_List_Rc_BTree_int_User (FILE * file , List_Rc_BTree_int_User list ) {
  return ({ /* letn2639 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2641 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2642 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2644 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2649 */
            (({ /* letn2655 */
                // ----------
                ;
                ({ /* letn2657 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2661 */
                      (({ /* letn2675 */
                          Maybe_BTree_int_User match2674  = deref_Rc_BTree_int_User (head );
                          typeof((((match2674 . __h_data). Just). __h_0_mem)) child ;
                          // ----------
                          ;
                          ({ /* letn2677 */
                            bool __h_case_result  = (true  &&  (((match2674 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn2678 */
                                  child  = (((match2674 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn2683 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* letn2688 */
                                // ----------
                                ;
                                ({ /* progn2690 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* letn2694 */
                      // ----------
                      ;
                      ({ /* progn2696 */
                        ({ /* letn2707 */
                          Maybe_BTree_int_User match2706  = deref_Rc_BTree_int_User (head );
                          typeof((((match2706 . __h_data). Just). __h_0_mem)) child ;
                          // ----------
                          ;
                          ({ /* letn2709 */
                            bool __h_case_result  = (true  &&  (((match2706 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn2710 */
                                  child  = (((match2706 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn2715 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* letn2719 */
                                // ----------
                                ;
                                ({ /* progn2721 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_Rc_BTree_int_User (file , tail ) );
          }) : ({ /* letn2726 */
            // ----------
            ;
            ({ /* progn2728 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn2736 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2738 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2739 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2741 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2746 */
            Cons_Rc_BTree_int_User (head , copy_List_Rc_BTree_int_User (tail ));
          }) : ({ /* letn2752 */
            // ----------
            ;
            ({ /* progn2754 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index ) {
  return ({ /* letn2763 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2765 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2766 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2768 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2773 */
            Cons_Rc_BTree_int_User (head , replaceAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* letn2779 */
            // ----------
            ;
            ({ /* progn2781 */
              ({ /* letn2787 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2789 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2790 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2795 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* letn2801 */
                      // ----------
                      ;
                      ({ /* progn2803 */
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
List_Rc_BTree_int_User deleteAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t index ) {
  return ({ /* letn2812 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2814 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2815 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2817 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2822 */
            Cons_Rc_BTree_int_User (head , deleteAt_List_Rc_BTree_int_User (tail , (index  -  1 )));
          }) : ({ /* letn2828 */
            // ----------
            ;
            ({ /* progn2830 */
              ({ /* letn2836 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2838 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2839 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2844 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* letn2849 */
                      // ----------
                      ;
                      ({ /* progn2851 */
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
List_Rc_BTree_int_User insertAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index ) {
  return ({ /* letn2860 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2862 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2863 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2865 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2870 */
            Cons_Rc_BTree_int_User (head , insertAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* letn2876 */
            // ----------
            ;
            ({ /* progn2878 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (list ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed ) {
  return ({ /* letn2888 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2890 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2891 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2893 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2898 */
            Cons_Rc_BTree_int_User (head , replace_List_Rc_BTree_int_User (tail , item , aimed ));
          }) : ({ /* letn2904 */
            // ----------
            ;
            ({ /* progn2906 */
              ({ /* letn2912 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2914 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2915 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2920 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* letn2926 */
                      // ----------
                      ;
                      ({ /* progn2928 */
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
  return ({ /* letn2937 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2939 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2940 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2942 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2947 */
            Cons_Rc_BTree_int_User (head , delete_List_Rc_BTree_int_User (tail , aimed ));
          }) : ({ /* letn2953 */
            // ----------
            ;
            ({ /* progn2955 */
              ({ /* letn2961 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2963 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2964 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2969 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* letn2974 */
                      // ----------
                      ;
                      ({ /* progn2976 */
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
  return ({ /* letn2985 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2987 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2988 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2990 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2995 */
            Cons_Rc_BTree_int_User (head , insert_List_Rc_BTree_int_User (tail , item , rlist ));
          }) : ({ /* letn3001 */
            // ----------
            ;
            ({ /* progn3003 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  List_Rc_BTree_int_User _reverse (List_Rc_BTree_int_User list , List_Rc_BTree_int_User rlist ) {
    return ({ /* letn3014 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3016 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3017 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3019 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3024 */
              _reverse (tail , Cons_Rc_BTree_int_User (head , rlist ));
            }) : ({ /* letn3029 */
              // ----------
              ;
              ({ /* progn3031 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* letn3037 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3039 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3040 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3042 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3047 */
            _reverse (tail , Cons_Rc_BTree_int_User (head , Nil_Rc_BTree_int_User ()));
          }) : ({ /* letn3053 */
            // ----------
            ;
            ({ /* progn3055 */
              list ;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist ) {
  return ({ /* letn3063 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3065 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3066 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3068 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3073 */
            Cons_Rc_BTree_int_User (head , append_List_Rc_BTree_int_User (tail , rlist ));
          }) : ({ /* letn3079 */
            // ----------
            ;
            ({ /* progn3081 */
              copy_List_Rc_BTree_int_User (rlist );
            });
          }));
      });
    });
}
List_Rc_BTree_int_User push_List_Rc_BTree_int_User (Rc_BTree_int_User item , List_Rc_BTree_int_User list ) {
  return Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (list ));
}
List_Rc_BTree_int_User take_List_Rc_BTree_int_User (size_t len , List_Rc_BTree_int_User list ) {
  return (((len  <=  0 )) ? Nil_Rc_BTree_int_User () : ({ /* letn3096 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3098 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3099 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3101 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3106 */
              Cons_Rc_BTree_int_User (head , take_List_Rc_BTree_int_User ((--len ), tail ));
            }) : ({ /* letn3112 */
              // ----------
              ;
              ({ /* progn3114 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn3123 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3125 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3126 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3131 */
            ({ /* letn3137 */
              // ----------
              ;
              ({ /* letn3139 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn3143 */
                    copy_List_Rc_BTree_int_User (list );
                  }) : ({ /* letn3148 */
                    // ----------
                    ;
                    ({ /* progn3150 */
                      last_List_Rc_BTree_int_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn3155 */
            // ----------
            ;
            ({ /* progn3157 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn3167 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3169 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3170 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3172 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3177 */
            Cons_Rc_BTree_int_User (head , init_List_Rc_BTree_int_User (tail ));
          }) : ({ /* letn3183 */
            // ----------
            ;
            ({ /* progn3185 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
size_t hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t desired ) {
  return ({ /* letn3194 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3196 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3197 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3202 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_int_User (tail , (--desired )) ));
          }) : ({ /* letn3208 */
            // ----------
            ;
            ({ /* progn3210 */
              0;
            });
          }));
      });
    });
}
size_t len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn3218 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3220 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3221 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3226 */
            (1 +  len_List_Rc_BTree_int_User (tail ) );
          }) : ({ /* letn3231 */
            // ----------
            ;
            ({ /* progn3233 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User tail_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return drop_List_Rc_BTree_int_User (1, list );
}
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (size_t len , List_Rc_BTree_int_User list ) {
  return (((len  <=  0 )) ? copy_List_Rc_BTree_int_User (list ) : ({ /* letn3246 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3248 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3249 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3254 */
              drop_List_Rc_BTree_int_User ((--len ), tail );
            }) : ({ /* letn3259 */
              // ----------
              ;
              ({ /* progn3261 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn3271 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn3273 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3274 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3279 */
            Just_Rc_BTree_int_User (head );
          }) : ({ /* letn3284 */
            // ----------
            ;
            ({ /* progn3286 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list ) {
  return ({ /* letn3295 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3297 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3298 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3303 */
            nthcdr_List_Rc_BTree_int_User ((--index ), tail );
          }) : ({ /* letn3308 */
            // ----------
            ;
            ({ /* progn3310 */
              list ;
            });
          }));
      });
    });
}
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list ) {
  return ({ /* letn3319 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3321 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3322 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3324 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3329 */
            (((index  ==  0 )) ? Just_Rc_BTree_int_User (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_int_User () : nth_List_Rc_BTree_int_User ((--index ), tail )));
          }) : ({ /* letn3338 */
            // ----------
            ;
            ({ /* progn3340 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
void free_List_Rc_BTree_int_User (List_Rc_BTree_int_User * this_ptr ) {
  { /* let3345 */
    List_Rc_BTree_int_User this  = (*this_ptr );
    // ----------
    { /* let3349 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3351 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3352 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block3359 */
            { /* block3361 */
              free (this );
              free_List_Rc_BTree_int_User ((&tail ));
            }
          }
        else
          { /* let3369 */
            // ----------
            ;
            ({ /* letn3371 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block3377 */
                  { /* block3379 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
__attribute__((weak)) void free_List_Rc_BTree_int_User_pointer (List_Rc_BTree_int_User ** this_ptr ) {
  if (this_ptr )
    { /* block3387 */
      free_List_Rc_BTree_int_User ((*this_ptr ));
    }
}
List_Rc_BTree_int_User__H_Table * const get_List_Rc_BTree_int_User__H_Table () {
  static List_Rc_BTree_int_User__H_Table table  = { free_List_Rc_BTree_int_User , toArray_List_Rc_BTree_int_User , wrap_List_Rc_BTree_int_User , pure_List_Rc_BTree_int_User , show_List_Rc_BTree_int_User , copy_List_Rc_BTree_int_User , replaceAt_List_Rc_BTree_int_User , deleteAt_List_Rc_BTree_int_User , insertAt_List_Rc_BTree_int_User , replace_List_Rc_BTree_int_User , delete_List_Rc_BTree_int_User , insert_List_Rc_BTree_int_User , reverse_List_Rc_BTree_int_User , append_List_Rc_BTree_int_User , push_List_Rc_BTree_int_User , take_List_Rc_BTree_int_User , last_List_Rc_BTree_int_User , init_List_Rc_BTree_int_User , hasLen_List_Rc_BTree_int_User , len_List_Rc_BTree_int_User , tail_List_Rc_BTree_int_User , drop_List_Rc_BTree_int_User , head_List_Rc_BTree_int_User , nthcdr_List_Rc_BTree_int_User , nth_List_Rc_BTree_int_User };
  return (&table );
}
List_Rc_BTree_int_User Cons_Rc_BTree_int_User (Rc_BTree_int_User head , List_Rc_BTree_int_User tail ) {
  Rc_BTree_int_User * __moved_head __attribute__((__cleanup__( free_Rc_BTree_int_User_pointer))) = (& head) ;
  { /* let3398 */
    List_Rc_BTree_int_User instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h_Cons_t , .__h_data.Cons = { ((Rc_BTree_int_User   )({ /* letnmove3402 */
              Rc_BTree_int_User moved_var3401  = head ;
              // ----------
              memset ((&head ), 0, sizeof(head ));
              moved_var3401 ;
            })), tail }});
    return instance ;
  }
}
List_Rc_BTree_int_User Nil_Rc_BTree_int_User () {
  { /* let3407 */
    List_Rc_BTree_int_User instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h_Nil_t });
    return instance ;
  }
}
#endif /* __List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_List_Rc_BTree_int_User__H_IMPL__
#define __Maybe_List_Rc_BTree_int_User__H_IMPL__
void free_Maybe_List_Rc_BTree_int_User (Maybe_List_Rc_BTree_int_User * this ) {
}
__attribute__((weak)) void free_Maybe_List_Rc_BTree_int_User_pointer (Maybe_List_Rc_BTree_int_User ** this ) {
  if (this )
    { /* block3422 */
      free_Maybe_List_Rc_BTree_int_User ((*this ));
    }
}
const Maybe_List_Rc_BTree_int_User__H_Table * const get_Maybe_List_Rc_BTree_int_User__H_Table () {
  static const Maybe_List_Rc_BTree_int_User__H_Table table  = { free_Maybe_List_Rc_BTree_int_User };
  return (&table );
}
Maybe_List_Rc_BTree_int_User Just_List_Rc_BTree_int_User (List_Rc_BTree_int_User value ) {
  { /* let3432 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_int_User Nothing_List_Rc_BTree_int_User () {
  { /* let3437 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_int_User__H_IMPL__
#define __Functor_List_Rc_BTree_int_User__H_IMPL__
List_Rc_BTree_int_User fmap_Functor_List_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input ) {
  return ({ /* letn3455 */
      typeof((((input -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((input -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3457 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3458 */
                head  = (((input -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3460 */
                tail  = (((input -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3465 */
            Cons_Rc_BTree_int_User (a_b (head ), fmap_Functor_List_Rc_BTree_int_User (a_b , tail ));
          }) : ({ /* letn3472 */
            // ----------
            ;
            ({ /* progn3474 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Functor_List_Rc_BTree_int_User (Functor_List_Rc_BTree_int_User * this ) {
}
__attribute__((weak)) void free_Functor_List_Rc_BTree_int_User_pointer (Functor_List_Rc_BTree_int_User ** this ) {
  if (this )
    { /* block3484 */
      free_Functor_List_Rc_BTree_int_User ((*this ));
    }
}
const Functor_List_Rc_BTree_int_User__H_Table * const get_Functor_List_Rc_BTree_int_User__H_Table () {
  static const Functor_List_Rc_BTree_int_User__H_Table table  = { free_Functor_List_Rc_BTree_int_User , fmap_Functor_List_Rc_BTree_int_User };
  return (&table );
}
Functor_List_Rc_BTree_int_User Functor_List_Rc_BTree_int_User_ctor () {
  { /* let3494 */
    Functor_List_Rc_BTree_int_User instance  = ((Functor_List_Rc_BTree_int_User){ get_Functor_List_Rc_BTree_int_User__H_Table (), __h_Functor_t });
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
  return ({ /* letn3514 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn3516 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn3517 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3519 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3524 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* letn3530 */
                BTree_int_User tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tree ;
                // ----------
                Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3541 */
                    Maybe_BTree_int_User_pair_t match3540  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                    typeof((((match3540 . __h_data). Just). __h_0_mem)) nitem ;
                    // ----------
                    ;
                    ({ /* letn3544 */
                      bool __h_case_result  = (true  &&  (((match3540 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3545 */
                            nitem  = (((match3540 . __h_data). Just). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn3550 */
                          nitem ;
                        }) : ({ /* letn3554 */
                          // ----------
                          ;
                          ({ /* progn3556 */
                            ((BTree_int_User_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* letn3568 */
                      List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                      // ----------
                      cloneAll_Rc_BTree_int_User (r1 );
                    }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* letn3579 */
                      List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                      // ----------
                      cloneAll_Rc_BTree_int_User (r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* letn3586 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn3588 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn3589 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn3591 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn3596 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* letn3598 */
                      BTree_int_User tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tree ;
                      // ----------
                      Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3600 */
                          Maybe_BTree_int_User_pair_t match3540  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                          typeof((((match3540 . __h_data). Just). __h_0_mem)) nitem ;
                          // ----------
                          ;
                          ({ /* letn3602 */
                            bool __h_case_result  = (true  &&  (((match3540 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3603 */
                                  nitem  = (((match3540 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn3608 */
                                nitem ;
                              }) : ({ /* letn3610 */
                                // ----------
                                ;
                                ({ /* progn3612 */
                                  ((BTree_int_User_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* letn3614 */
                            List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                            // ----------
                            cloneAll_Rc_BTree_int_User (r1 );
                          }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* letn3616 */
                            List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                            // ----------
                            cloneAll_Rc_BTree_int_User (r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* letn3620 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn3622 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn3623 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn3628 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* letn3634 */
                            BTree_int_User tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tree ;
                            // ----------
                            Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3644 */
                                Maybe_BTree_int_User_pair_t match3643  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                                typeof((((match3643 . __h_data). Just). __h_0_mem)) nitem ;
                                // ----------
                                ;
                                ({ /* letn3647 */
                                  bool __h_case_result  = (true  &&  (((match3643 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3648 */
                                        nitem  = (((match3643 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn3653 */
                                      nitem ;
                                    }) : ({ /* letn3657 */
                                      // ----------
                                      ;
                                      ({ /* progn3659 */
                                        ((BTree_int_User_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2));
                          }) : tree );
                      }) : ({ /* letn3675 */
                        // ----------
                        ;
                        ({ /* progn3677 */
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
  return ({ /* letn3685 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn3687 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn3688 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3690 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3695 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3707 */
                Maybe_BTree_int_User_pair_t match3706  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                typeof((((match3706 . __h_data). Just). __h_0_mem)) nitem ;
                // ----------
                ;
                ({ /* letn3710 */
                  bool __h_case_result  = (true  &&  (((match3706 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3711 */
                        nitem  = (((match3706 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3716 */
                      nitem ;
                    }) : ({ /* letn3720 */
                      // ----------
                      ;
                      ({ /* progn3722 */
                        ((BTree_int_User_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* letn3733 */
                  List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                  // ----------
                  cloneAll_Rc_BTree_int_User (r1 );
                }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* letn3744 */
                  List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                  // ----------
                  cloneAll_Rc_BTree_int_User (r1 );
                })))}), 2)) : tree );
          }) : ({ /* letn3751 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn3753 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn3754 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn3756 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn3761 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3763 */
                      Maybe_BTree_int_User_pair_t match3706  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                      typeof((((match3706 . __h_data). Just). __h_0_mem)) nitem ;
                      // ----------
                      ;
                      ({ /* letn3765 */
                        bool __h_case_result  = (true  &&  (((match3706 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3766 */
                              nitem  = (((match3706 . __h_data). Just). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn3771 */
                            nitem ;
                          }) : ({ /* letn3773 */
                            // ----------
                            ;
                            ({ /* progn3775 */
                              ((BTree_int_User_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* letn3777 */
                        List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        cloneAll_Rc_BTree_int_User (r1 );
                      }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* letn3779 */
                        List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        cloneAll_Rc_BTree_int_User (r1 );
                      })))}), 2)) : tree );
                }) : ({ /* letn3783 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn3785 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn3786 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn3791 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3803 */
                            Maybe_BTree_int_User_pair_t match3802  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                            typeof((((match3802 . __h_data). Just). __h_0_mem)) nitem ;
                            // ----------
                            ;
                            ({ /* letn3806 */
                              bool __h_case_result  = (true  &&  (((match3802 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3807 */
                                    nitem  = (((match3802 . __h_data). Just). __h_0_mem) ;
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn3812 */
                                  nitem ;
                                }) : ({ /* letn3816 */
                                  // ----------
                                  ;
                                  ({ /* progn3818 */
                                    ((BTree_int_User_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2)) : tree );
                      }) : ({ /* letn3833 */
                        // ----------
                        ;
                        ({ /* progn3835 */
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
  return ({ /* letn3848 */
      BTree_int_User merged  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_items , right_items ), ({ /* letn3853 */
        List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (left_children , right_children );
        // ----------
        cloneAll_Rc_BTree_int_User (r1 );
      }));
      // ----------
      ({ /* letn3864 */
        BTree_int_User tmp_child  = splitForDelete_BTree_int_User (merged );
        typeof((((tmp_child -> __h_data). Branch). __h_0_mem)) __h_match3862_0_arg ;
        typeof((((__h_match3862_0_arg -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((tmp_child -> __h_data). Branch). __h_1_mem)) tmp_children ;
        // ----------
        ;
        ({ /* letn3866 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor) ==  __h_Branch_t  ) &&  ((({ /* progn3867 */
                    __h_match3862_0_arg  = (((tmp_child -> __h_data). Branch). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  (((__h_match3862_0_arg -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3869 */
                        head  = (((__h_match3862_0_arg -> __h_data). Cons). __h_0_mem) ;
                        true ;
                      }) ) ) ) &&  ({ /* progn3871 */
                  tmp_children  = (((tmp_child -> __h_data). Branch). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3876 */
              ({ /* letn3879 */
                BTree_int_User merged_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = merged ;
                BTree_int_User tmp_child_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tmp_child ;
                // ----------
                Internal_BTree_int_User (replaceAt_List_BTree_int_User_pair_t (items , head , pitem_index ), ({ /* letn3891 */
                    List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                    List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (pchild_index , r1 );
                    List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((pchild_index  +  1 ), r1 );
                    List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (tmp_children , r3 );
                    List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r2 , r4 );
                    // ----------
                    cloneAll_Rc_BTree_int_User (r5 );
                  }));
              });
            }) : ({ /* letn3901 */
              // ----------
              ;
              ({ /* letn3903 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor) ==  __h_Internal_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn3907 */
                    Internal_BTree_int_User (deleteAt_List_BTree_int_User_pair_t (items , pitem_index ), ({ /* letn3913 */
                        List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                        // ----------
                        replaceChild_Rc_BTree_int_User (r1 , merged , pchild_index );
                      }));
                  }) : ({ /* letn3919 */
                    // ----------
                    ;
                    ({ /* progn3921 */
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
  Either_BTree_int_User_Error_BTree_int_User borrowRight (List_BTree_int_User_pair_t child_items ) {
    return ({ /* letn3952 */
        Maybe_Rc_BTree_int_User match3951  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match3951 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn3954 */
          bool __h_case_result  = (true  &&  (((match3951 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3955 */
                right_child_rc  = (((match3951 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3960 */
              ({ /* letn3967 */
                Maybe_BTree_int_User match3966  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match3966 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn3969 */
                  bool __h_case_result  = (true  &&  (((match3966 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3970 */
                        right_child  = (((match3966 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3975 */
                      ({ /* letn3981 */
                        typeof((((right_child -> __h_data). Leaf). __h_0_mem)) right_child_items ;
                        // ----------
                        ;
                        ({ /* letn3983 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn3984 */
                                right_child_items  = (((right_child -> __h_data). Leaf). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn3989 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn3999 */
                                  typeof((((right_child_items -> __h_data). Cons). __h_0_mem)) first_item ;
                                  typeof((((right_child_items -> __h_data). Cons). __h_1_mem)) tail ;
                                  // ----------
                                  ;
                                  ({ /* letn4001 */
                                    bool __h_case_result  = (true  &&  (((right_child_items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4002 */
                                            first_item  = (((right_child_items -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn4004 */
                                            tail  = (((right_child_items -> __h_data). Cons). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4009 */
                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , first_item , current ), ({ /* letn4023 */
                                            List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                            List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                            List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                            List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                            List_BTree_int_User_pair_t r5  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = take_List_BTree_int_User_pair_t (1, current );
                                            List_Rc_BTree_int_User r7  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (child_items , r5 ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (copy_List_BTree_int_User_pair_t (tail )))}), 2);
                                            List_Rc_BTree_int_User r6  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r7 , r4 );
                                            // ----------
                                            append_List_Rc_BTree_int_User (r2 , r6 );
                                          })));
                                      }) : ({ /* letn4042 */
                                        // ----------
                                        ;
                                        ({ /* progn4044 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* letn4053 */
                                  typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
                                  // ----------
                                  ;
                                  ({ /* letn4055 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4056 */
                                          head  = (((current -> __h_data). Cons). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4061 */
                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4074 */
                                            List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                            List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                            List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                            List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                            List_BTree_int_User_pair_t r5  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = wrap_List_BTree_int_User_pair_t (head );
                                            List_BTree_int_User_pair_t r6  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = append_List_BTree_int_User_pair_t (child_items , r5 );
                                            List_Rc_BTree_int_User r8  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r6 , right_child_items ))), r4 );
                                            // ----------
                                            append_List_Rc_BTree_int_User (r2 , r8 );
                                          })));
                                      }) : ({ /* letn4089 */
                                        // ----------
                                        ;
                                        ({ /* progn4091 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R2"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* letn4097 */
                              // ----------
                              ;
                              ({ /* progn4099 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4105 */
                      // ----------
                      ;
                      ({ /* progn4107 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4113 */
              // ----------
              ;
              ({ /* progn4115 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowLeft (List_BTree_int_User_pair_t child_items ) {
    return ({ /* letn4129 */
        typeof((((wleft . __h_data). Just). __h_0_mem)) left ;
        typeof((((left -> __h_data). Cons). __h_0_mem)) left_item ;
        // ----------
        ;
        ({ /* letn4131 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4132 */
                  left  = (((wleft . __h_data). Just). __h_0_mem) ;
                  true ;
                }) &&  (true  &&  (((left -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4134 */
                      left_item  = (((left -> __h_data). Cons). __h_0_mem) ;
                      true ;
                    }) ) ) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4139 */
              ({ /* letn4146 */
                Maybe_Rc_BTree_int_User match4145  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                typeof((((match4145 . __h_data). Just). __h_0_mem)) left_child_rc ;
                // ----------
                ;
                ({ /* letn4148 */
                  bool __h_case_result  = (true  &&  (((match4145 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4149 */
                        left_child_rc  = (((match4145 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4154 */
                      ({ /* letn4161 */
                        Maybe_BTree_int_User match4160  = deref_Rc_BTree_int_User (left_child_rc );
                        typeof((((match4160 . __h_data). Just). __h_0_mem)) left_child ;
                        // ----------
                        ;
                        ({ /* letn4163 */
                          bool __h_case_result  = (true  &&  (((match4160 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4164 */
                                left_child  = (((match4160 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4169 */
                              ({ /* letn4175 */
                                typeof((((left_child -> __h_data). Leaf). __h_0_mem)) left_child_items ;
                                // ----------
                                ;
                                ({ /* letn4177 */
                                  bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4178 */
                                        left_child_items  = (((left_child -> __h_data). Leaf). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn4183 */
                                      (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4194 */
                                          List_BTree_int_User_pair_t last  = last_List_BTree_int_User_pair_t (left_child_items );
                                          typeof((((last -> __h_data). Cons). __h_0_mem)) last_item ;
                                          // ----------
                                          ;
                                          ({ /* letn4196 */
                                            bool __h_case_result  = (true  &&  (((last -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4197 */
                                                  last_item  = (((last -> __h_data). Cons). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4202 */
                                                ({ /* letn4205 */
                                                  List_BTree_int_User_pair_t last_spent  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = last ;
                                                  // ----------
                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , last_item , left ), ({ /* letn4218 */
                                                      List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                      List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                                      List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                      List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                                      List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (init_List_BTree_int_User_pair_t (left_child_items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (push_List_BTree_int_User_pair_t (left_item , child_items )))}), 2);
                                                      List_Rc_BTree_int_User r7  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r4 );
                                                      // ----------
                                                      append_List_Rc_BTree_int_User (r2 , r7 );
                                                    })));
                                                });
                                              }) : ({ /* letn4236 */
                                                // ----------
                                                ;
                                                ({ /* progn4238 */
                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 2"));
                                                });
                                              }));
                                          });
                                        }) : ({ /* letn4246 */
                                          Either_BTree_int_User_Error_BTree_int_User match4245  = borrowRight (child_items );
                                          // ----------
                                          ;
                                          ({ /* letn4248 */
                                            bool __h_case_result  = (true  &&  ((match4245 . __h_ctor) ==  __h_Left_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4252 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , left ), ({ /* letn4265 */
                                                    List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                    List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                                    List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                    List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                                    List_BTree_int_User_pair_t r8  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = wrap_List_BTree_int_User_pair_t (left_item );
                                                    List_BTree_int_User_pair_t r5  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = append_List_BTree_int_User_pair_t (left_child_items , r8 );
                                                    List_Rc_BTree_int_User r7  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r5 , child_items ))), r4 );
                                                    // ----------
                                                    append_List_Rc_BTree_int_User (r2 , r7 );
                                                  })));
                                              }) : ({ /* letn4280 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4245 ;
                                                // ----------
                                                ;
                                                ({ /* progn4282 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        }));
                                    }) : ({ /* letn4286 */
                                      // ----------
                                      ;
                                      ({ /* progn4288 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 3"));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn4294 */
                              // ----------
                              ;
                              ({ /* progn4296 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 4"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4302 */
                      // ----------
                      ;
                      ({ /* progn4304 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 5"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4310 */
              // ----------
              ;
              ({ /* progn4312 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* letn4315 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn4320 */
        typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
        // ----------
        ;
        ({ /* letn4322 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn4323 */
                child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4328 */
              (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4339 */
                  BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* letn4344 */
              typeof((((nchild -> __h_data). Internal). __h_0_mem)) child_items ;
              // ----------
              ;
              ({ /* letn4346 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn4347 */
                      child_items  = (((nchild -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn4352 */
                    (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4354 */
                        BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* letn4358 */
                    typeof((((nchild -> __h_data). Leaf). __h_0_mem)) child_items ;
                    // ----------
                    ;
                    ({ /* letn4360 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4361 */
                            child_items  = (((nchild -> __h_data). Leaf). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn4366 */
                          (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4368 */
                              BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* letn4372 */
                          // ----------
                          ;
                          ({ /* progn4374 */
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
    return ({ /* letn4403 */
        Maybe_Rc_BTree_int_User match4402  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4402 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn4405 */
          bool __h_case_result  = (true  &&  (((match4402 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4406 */
                right_child_rc  = (((match4402 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4411 */
              ({ /* letn4418 */
                Maybe_BTree_int_User match4417  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match4417 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn4420 */
                  bool __h_case_result  = (true  &&  (((match4417 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4421 */
                        right_child  = (((match4417 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4426 */
                      ({ /* letn4432 */
                        typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_child_items ;
                        typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_child_children ;
                        // ----------
                        ;
                        ({ /* letn4434 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4435 */
                                  right_child_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                  true ;
                                }) &&  ({ /* progn4437 */
                                  right_child_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4442 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4454 */
                                  Maybe_BTree_int_User_pair_t match4452  = min_BTree_int_User (right_child );
                                  typeof((((match4452 . __h_data). Just). __h_0_mem)) min ;
                                  typeof((min . __h_0_mem)) min_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4456 */
                                    bool __h_case_result  = (true  &&  (((match4452 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4457 */
                                            min  = (((match4452 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4459 */
                                              min_key  = (min . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4464 */
                                        ({ /* letn4471 */
                                          Either_BTree_int_User_Error_BTree_int_User match4470  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match4470 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn4473 */
                                            bool __h_case_result  = (true  &&  (((match4470 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4474 */
                                                  nchild  = (((match4470 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4479 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                              }) : ({ /* letn4487 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4470 ;
                                                // ----------
                                                ;
                                                ({ /* progn4489 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn4493 */
                                        // ----------
                                        ;
                                        ({ /* progn4495 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* letn4504 */
                                  typeof((((current -> __h_data). Cons). __h_0_mem)) current_item ;
                                  typeof((current_item . __h_0_mem)) current_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4506 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4507 */
                                            current_item  = (((current -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4509 */
                                              current_key  = (current_item . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4514 */
                                        ({ /* letn4522 */
                                          List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                          List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                          BTree_int_User r4  __attribute__((__cleanup__(free_BTree_int_User ))) = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), cloneAll_Rc_BTree_int_User (r2 ));
                                          List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                          List_Rc_BTree_int_User r7  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                          // ----------
                                          ({ /* letn4536 */
                                            Either_BTree_int_User_Error_BTree_int_User match4535  = delete_BTree_int_User (r4 , current_key , NULL );
                                            typeof((((match4535 . __h_data). Right). __h_0_mem)) ntree ;
                                            // ----------
                                            ;
                                            ({ /* letn4538 */
                                              bool __h_case_result  = (true  &&  (((match4535 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4539 */
                                                    ntree  = (((match4535 . __h_data). Right). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn4544 */
                                                  ({ /* letn4551 */
                                                    BTree_int_User tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                    typeof((((tmp_result -> __h_data). Branch). __h_0_mem)) branch_items ;
                                                    typeof((((tmp_result -> __h_data). Branch). __h_1_mem)) branch_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn4553 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4554 */
                                                              branch_items  = (((tmp_result -> __h_data). Branch). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn4556 */
                                                              branch_children  = (((tmp_result -> __h_data). Branch). __h_1_mem) ;
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn4561 */
                                                          ({ /* letn4567 */
                                                            typeof((((branch_items -> __h_data). Cons). __h_0_mem)) branch_head ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn4569 */
                                                              bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4570 */
                                                                    branch_head  = (((branch_items -> __h_data). Cons). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn4575 */
                                                                  ({ /* letn4578 */
                                                                    BTree_int_User ntree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntree ;
                                                                    BTree_int_User tmp_result_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tmp_result ;
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* letn4588 */
                                                                        List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                        List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                        // ----------
                                                                        cloneAll_Rc_BTree_int_User (r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* letn4595 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn4597 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn4603 */
                                                          // ----------
                                                          ;
                                                          ({ /* letn4605 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn4609 */
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4618 */
                                                                    Rc_BTree_int_User r9  __attribute__((__cleanup__(free_Rc_BTree_int_User ))) = new_Rc_BTree_int_User (ntree );
                                                                    List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (((Rc_BTree_int_User   )({ /* letnmove4622 */
                                                                      Rc_BTree_int_User moved_var4621  = r9 ;
                                                                      // ----------
                                                                      memset ((&r9 ), 0, sizeof(r9 ));
                                                                      moved_var4621 ;
                                                                    })), r7 );
                                                                    List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                    // ----------
                                                                    cloneAll_Rc_BTree_int_User (r11 );
                                                                  })));
                                                              }) : ({ /* letn4629 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn4631 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn4637 */
                                                  Either_BTree_int_User_Error_BTree_int_User passthru  = match4535 ;
                                                  // ----------
                                                  ;
                                                  ({ /* progn4639 */
                                                    passthru ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* letn4643 */
                                        // ----------
                                        ;
                                        ({ /* progn4645 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* letn4651 */
                              typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_child_items ;
                              typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_child_children ;
                              // ----------
                              ;
                              ({ /* letn4653 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn4654 */
                                        right_child_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                        true ;
                                      }) &&  ({ /* progn4656 */
                                        right_child_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn4661 */
                                    (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4663 */
                                        Maybe_BTree_int_User_pair_t match4452  = min_BTree_int_User (right_child );
                                        typeof((((match4452 . __h_data). Just). __h_0_mem)) min ;
                                        typeof((min . __h_0_mem)) min_key ;
                                        // ----------
                                        ;
                                        ({ /* letn4665 */
                                          bool __h_case_result  = (true  &&  (((match4452 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4666 */
                                                  min  = (((match4452 . __h_data). Just). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn4668 */
                                                    min_key  = (min . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn4673 */
                                              ({ /* letn4675 */
                                                Either_BTree_int_User_Error_BTree_int_User match4470  = delete_BTree_int_User (right_child , min_key , NULL );
                                                typeof((((match4470 . __h_data). Right). __h_0_mem)) nchild ;
                                                // ----------
                                                ;
                                                ({ /* letn4677 */
                                                  bool __h_case_result  = (true  &&  (((match4470 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4678 */
                                                        nchild  = (((match4470 . __h_data). Right). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn4683 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                                    }) : ({ /* letn4685 */
                                                      Either_BTree_int_User_Error_BTree_int_User passthru  = match4470 ;
                                                      // ----------
                                                      ;
                                                      ({ /* progn4687 */
                                                        passthru ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn4689 */
                                              // ----------
                                              ;
                                              ({ /* progn4691 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* letn4693 */
                                        typeof((((current -> __h_data). Cons). __h_0_mem)) current_item ;
                                        typeof((current_item . __h_0_mem)) current_key ;
                                        // ----------
                                        ;
                                        ({ /* letn4695 */
                                          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4696 */
                                                  current_item  = (((current -> __h_data). Cons). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn4698 */
                                                    current_key  = (current_item . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn4703 */
                                              ({ /* letn4705 */
                                                List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                BTree_int_User r4  __attribute__((__cleanup__(free_BTree_int_User ))) = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), cloneAll_Rc_BTree_int_User (r2 ));
                                                List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                List_Rc_BTree_int_User r7  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ({ /* letn4707 */
                                                  Either_BTree_int_User_Error_BTree_int_User match4535  = delete_BTree_int_User (r4 , current_key , NULL );
                                                  typeof((((match4535 . __h_data). Right). __h_0_mem)) ntree ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn4709 */
                                                    bool __h_case_result  = (true  &&  (((match4535 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4710 */
                                                          ntree  = (((match4535 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn4715 */
                                                        ({ /* letn4717 */
                                                          BTree_int_User tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                          typeof((((tmp_result -> __h_data). Branch). __h_0_mem)) branch_items ;
                                                          typeof((((tmp_result -> __h_data). Branch). __h_1_mem)) branch_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn4719 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4720 */
                                                                    branch_items  = (((tmp_result -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn4722 */
                                                                    branch_children  = (((tmp_result -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn4727 */
                                                                ({ /* letn4729 */
                                                                  typeof((((branch_items -> __h_data). Cons). __h_0_mem)) branch_head ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn4731 */
                                                                    bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4732 */
                                                                          branch_head  = (((branch_items -> __h_data). Cons). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn4737 */
                                                                        ({ /* letn4739 */
                                                                          BTree_int_User ntree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntree ;
                                                                          BTree_int_User tmp_result_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tmp_result ;
                                                                          // ----------
                                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* letn4741 */
                                                                              List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                              List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                              // ----------
                                                                              cloneAll_Rc_BTree_int_User (r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* letn4743 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn4745 */
                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn4747 */
                                                                // ----------
                                                                ;
                                                                ({ /* letn4749 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* progn4753 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4755 */
                                                                          Rc_BTree_int_User r9  __attribute__((__cleanup__(free_Rc_BTree_int_User ))) = new_Rc_BTree_int_User (ntree );
                                                                          List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (((Rc_BTree_int_User   )({ /* letnmove4757 */
                                                                            Rc_BTree_int_User moved_var4756  = r9 ;
                                                                            // ----------
                                                                            memset ((&r9 ), 0, sizeof(r9 ));
                                                                            moved_var4756 ;
                                                                          })), r7 );
                                                                          List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                          // ----------
                                                                          cloneAll_Rc_BTree_int_User (r11 );
                                                                        })));
                                                                    }) : ({ /* letn4760 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* progn4762 */
                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn4764 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match4535 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn4766 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* letn4768 */
                                              // ----------
                                              ;
                                              ({ /* progn4770 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* letn4774 */
                                    // ----------
                                    ;
                                    ({ /* progn4776 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4782 */
                      // ----------
                      ;
                      ({ /* progn4784 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4790 */
              // ----------
              ;
              ({ /* progn4792 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowRightLeaf (List_BTree_int_User_pair_t left_child_items ) {
    return ({ /* letn4806 */
        Maybe_Rc_BTree_int_User match4805  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4805 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn4808 */
          bool __h_case_result  = (true  &&  (((match4805 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4809 */
                right_child_rc  = (((match4805 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4814 */
              ({ /* letn4821 */
                Maybe_BTree_int_User match4820  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match4820 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn4823 */
                  bool __h_case_result  = (true  &&  (((match4820 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4824 */
                        right_child  = (((match4820 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4829 */
                      ({ /* letn4835 */
                        typeof((((right_child -> __h_data). Leaf). __h_0_mem)) right_child_items ;
                        // ----------
                        ;
                        ({ /* letn4837 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4838 */
                                right_child_items  = (((right_child -> __h_data). Leaf). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4843 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4855 */
                                  Maybe_BTree_int_User_pair_t match4853  = min_BTree_int_User (right_child );
                                  typeof((((match4853 . __h_data). Just). __h_0_mem)) min ;
                                  typeof((min . __h_0_mem)) min_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4857 */
                                    bool __h_case_result  = (true  &&  (((match4853 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4858 */
                                            min  = (((match4853 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4860 */
                                              min_key  = (min . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4865 */
                                        ({ /* letn4872 */
                                          Either_BTree_int_User_Error_BTree_int_User match4871  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match4871 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn4874 */
                                            bool __h_case_result  = (true  &&  (((match4871 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4875 */
                                                  nchild  = (((match4871 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4880 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                              }) : ({ /* letn4888 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4871 ;
                                                // ----------
                                                ;
                                                ({ /* progn4890 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn4894 */
                                        // ----------
                                        ;
                                        ({ /* progn4896 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4909 */
                                  List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                  List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                  List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                  List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                  List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , right_child_items ))), r4 );
                                  // ----------
                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                }))));
                            }) : ({ /* letn4922 */
                              // ----------
                              ;
                              ({ /* progn4924 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4930 */
                      // ----------
                      ;
                      ({ /* progn4932 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4938 */
              // ----------
              ;
              ({ /* progn4940 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* letn4945 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn4951 */
        Maybe_Rc_BTree_int_User match4950  = nth_List_Rc_BTree_int_User (index , children );
        typeof((((match4950 . __h_data). Just). __h_0_mem)) left_child_rc ;
        // ----------
        ;
        ({ /* letn4953 */
          bool __h_case_result  = (true  &&  (((match4950 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4954 */
                left_child_rc  = (((match4950 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4959 */
              ({ /* letn4966 */
                Maybe_BTree_int_User match4965  = deref_Rc_BTree_int_User (left_child_rc );
                typeof((((match4965 . __h_data). Just). __h_0_mem)) left_child ;
                // ----------
                ;
                ({ /* letn4968 */
                  bool __h_case_result  = (true  &&  (((match4965 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4969 */
                        left_child  = (((match4965 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4974 */
                      ({ /* letn4980 */
                        typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_child_items ;
                        typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_child_children ;
                        // ----------
                        ;
                        ({ /* letn4982 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4983 */
                                  left_child_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                  true ;
                                }) &&  ({ /* progn4985 */
                                  left_child_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4990 */
                              (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn5002 */
                                  Maybe_BTree_int_User_pair_t match5000  = max_BTree_int_User (left_child );
                                  typeof((((match5000 . __h_data). Just). __h_0_mem)) max ;
                                  typeof((max . __h_0_mem)) max_key ;
                                  // ----------
                                  ;
                                  ({ /* letn5004 */
                                    bool __h_case_result  = (true  &&  (((match5000 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5005 */
                                            max  = (((match5000 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn5007 */
                                              max_key  = (max . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn5012 */
                                        ({ /* letn5019 */
                                          Either_BTree_int_User_Error_BTree_int_User match5018  = delete_BTree_int_User (left_child , max_key , NULL );
                                          typeof((((match5018 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn5021 */
                                            bool __h_case_result  = (true  &&  (((match5018 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5022 */
                                                  nchild  = (((match5018 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn5027 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                              }) : ({ /* letn5035 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match5018 ;
                                                // ----------
                                                ;
                                                ({ /* progn5037 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn5041 */
                                        // ----------
                                        ;
                                        ({ /* progn5043 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* letn5049 */
                              typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_child_items ;
                              typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_child_children ;
                              // ----------
                              ;
                              ({ /* letn5051 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5052 */
                                        left_child_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                        true ;
                                      }) &&  ({ /* progn5054 */
                                        left_child_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn5059 */
                                    (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn5061 */
                                        Maybe_BTree_int_User_pair_t match5000  = max_BTree_int_User (left_child );
                                        typeof((((match5000 . __h_data). Just). __h_0_mem)) max ;
                                        typeof((max . __h_0_mem)) max_key ;
                                        // ----------
                                        ;
                                        ({ /* letn5063 */
                                          bool __h_case_result  = (true  &&  (((match5000 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5064 */
                                                  max  = (((match5000 . __h_data). Just). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn5066 */
                                                    max_key  = (max . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn5071 */
                                              ({ /* letn5073 */
                                                Either_BTree_int_User_Error_BTree_int_User match5018  = delete_BTree_int_User (left_child , max_key , NULL );
                                                typeof((((match5018 . __h_data). Right). __h_0_mem)) nchild ;
                                                // ----------
                                                ;
                                                ({ /* letn5075 */
                                                  bool __h_case_result  = (true  &&  (((match5018 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5076 */
                                                        nchild  = (((match5018 . __h_data). Right). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn5081 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                    }) : ({ /* letn5083 */
                                                      Either_BTree_int_User_Error_BTree_int_User passthru  = match5018 ;
                                                      // ----------
                                                      ;
                                                      ({ /* progn5085 */
                                                        passthru ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn5087 */
                                              // ----------
                                              ;
                                              ({ /* progn5089 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* letn5093 */
                                    typeof((((left_child -> __h_data). Leaf). __h_0_mem)) left_child_items ;
                                    // ----------
                                    ;
                                    ({ /* letn5095 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn5096 */
                                            left_child_items  = (((left_child -> __h_data). Leaf). __h_0_mem) ;
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn5101 */
                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn5113 */
                                              Maybe_BTree_int_User_pair_t match5111  = max_BTree_int_User (left_child );
                                              typeof((((match5111 . __h_data). Just). __h_0_mem)) max ;
                                              typeof((max . __h_0_mem)) max_key ;
                                              // ----------
                                              ;
                                              ({ /* letn5115 */
                                                bool __h_case_result  = (true  &&  (((match5111 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5116 */
                                                        max  = (((match5111 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) &&  (true  &&  ({ /* progn5118 */
                                                          max_key  = (max . __h_0_mem) ;
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn5123 */
                                                    ({ /* letn5130 */
                                                      Either_BTree_int_User_Error_BTree_int_User match5129  = delete_BTree_int_User (left_child , max_key , NULL );
                                                      typeof((((match5129 . __h_data). Right). __h_0_mem)) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn5132 */
                                                        bool __h_case_result  = (true  &&  (((match5129 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5133 */
                                                              nchild  = (((match5129 . __h_data). Right). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn5138 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                          }) : ({ /* letn5146 */
                                                            Either_BTree_int_User_Error_BTree_int_User passthru  = match5129 ;
                                                            // ----------
                                                            ;
                                                            ({ /* progn5148 */
                                                              passthru ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn5152 */
                                                    // ----------
                                                    ;
                                                    ({ /* progn5154 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* letn5160 */
                                          // ----------
                                          ;
                                          ({ /* progn5162 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn5168 */
                      // ----------
                      ;
                      ({ /* progn5170 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* letn5176 */
              // ----------
              ;
              ({ /* progn5178 */
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
    return ({ /* letn5207 */
        Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn5213 */
          typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
          typeof((head . __h_0_mem)) key ;
          typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
          // ----------
          ;
          ({ /* letn5215 */
            bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn5216 */
                      head  = (((current -> __h_data). Cons). __h_0_mem) ;
                      true ;
                    }) &&  (true  &&  ({ /* progn5218 */
                        key  = (head . __h_0_mem) ;
                        true ;
                      }) ) ) &&  ({ /* progn5220 */
                    tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* progn5225 */
                ({ /* letn5231 */
                  Ordering match5230  = compareKey (skey , key );
                  // ----------
                  ;
                  ({ /* letn5233 */
                    bool __h_case_result  = (true  &&  ((match5230 . __h_ctor) ==  __h_LT_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn5237 */
                        ({ /* letn5244 */
                          Maybe_Rc_BTree_int_User match5243  = nth_List_Rc_BTree_int_User (index , children );
                          typeof((((match5243 . __h_data). Just). __h_0_mem)) child ;
                          // ----------
                          ;
                          ({ /* letn5246 */
                            bool __h_case_result  = (true  &&  (((match5243 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5247 */
                                  child  = (((match5243 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn5252 */
                                ({ /* letn5259 */
                                  Maybe_BTree_int_User match5258  = deref_Rc_BTree_int_User (child );
                                  typeof((((match5258 . __h_data). Just). __h_0_mem)) tr ;
                                  // ----------
                                  ;
                                  ({ /* letn5261 */
                                    bool __h_case_result  = (true  &&  (((match5258 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5262 */
                                          tr  = (((match5258 . __h_data). Just). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn5267 */
                                        ({ /* letn5273 */
                                          // ----------
                                          ;
                                          ({ /* letn5275 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Branch_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn5279 */
                                                ({ /* letn5286 */
                                                  Either_BTree_int_User_Error_BTree_int_User match5285  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                  typeof((((match5285 . __h_data). Right). __h_0_mem)) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn5288 */
                                                    bool __h_case_result  = (true  &&  (((match5285 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5289 */
                                                          nchild  = (((match5285 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn5294 */
                                                        ({ /* letn5300 */
                                                          typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                          typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn5302 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5303 */
                                                                    child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn5305 */
                                                                    child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn5310 */
                                                                ({ /* letn5317 */
                                                                  Maybe_Rc_BTree_int_User match5316  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match5316 . __h_data). Just). __h_0_mem)) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn5319 */
                                                                    bool __h_case_result  = (true  &&  (((match5316 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5320 */
                                                                          wleft  = (((match5316 . __h_data). Just). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn5325 */
                                                                        ({ /* letn5332 */
                                                                          Maybe_BTree_int_User match5331  = deref_Rc_BTree_int_User (wleft );
                                                                          typeof((((match5331 . __h_data). Just). __h_0_mem)) left_child ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn5334 */
                                                                            bool __h_case_result  = (true  &&  (((match5331 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5335 */
                                                                                  left_child  = (((match5331 . __h_data). Just). __h_0_mem) ;
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn5340 */
                                                                                ({ /* letn5346 */
                                                                                  typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5348 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5349 */
                                                                                            left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn5351 */
                                                                                            left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5356 */
                                                                                        ({ /* letn5359 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn5366 */
                                                                                        typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn5368 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5369 */
                                                                                                  left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn5371 */
                                                                                                  left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn5376 */
                                                                                              ({ /* letn5378 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn5382 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* progn5384 */
                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              }) : ({ /* letn5390 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn5392 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* letn5398 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn5400 */
                                                                          ({ /* letn5407 */
                                                                            Maybe_Rc_BTree_int_User match5406  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match5406 . __h_data). Just). __h_0_mem)) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn5409 */
                                                                              bool __h_case_result  = (true  &&  (((match5406 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5410 */
                                                                                    wright  = (((match5406 . __h_data). Just). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn5415 */
                                                                                  ({ /* letn5422 */
                                                                                    Maybe_BTree_int_User match5421  = deref_Rc_BTree_int_User (wright );
                                                                                    typeof((((match5421 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* letn5424 */
                                                                                      bool __h_case_result  = (true  &&  (((match5421 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5425 */
                                                                                            right_child  = (((match5421 . __h_data). Just). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* progn5430 */
                                                                                          ({ /* letn5436 */
                                                                                            typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn5438 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5439 */
                                                                                                      right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn5441 */
                                                                                                      right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn5446 */
                                                                                                  ({ /* letn5449 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn5456 */
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn5458 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5459 */
                                                                                                            right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn5461 */
                                                                                                            right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn5466 */
                                                                                                        ({ /* letn5468 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn5472 */
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* progn5474 */
                                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        }) : ({ /* letn5480 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* progn5482 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* letn5488 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* progn5490 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn5496 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn5498 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn5506 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match5285 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn5508 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn5512 */
                                                // ----------
                                                ;
                                                ({ /* letn5514 */
                                                  bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn5518 */
                                                      ({ /* letn5524 */
                                                        Either_BTree_int_User_Error_BTree_int_User match5523  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                        typeof((((match5523 . __h_data). Right). __h_0_mem)) nchild ;
                                                        // ----------
                                                        ;
                                                        ({ /* letn5526 */
                                                          bool __h_case_result  = (true  &&  (((match5523 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5527 */
                                                                nchild  = (((match5523 . __h_data). Right). __h_0_mem) ;
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* progn5532 */
                                                              ({ /* letn5538 */
                                                                typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                                typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                                // ----------
                                                                ;
                                                                ({ /* letn5540 */
                                                                  bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5541 */
                                                                          child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                          true ;
                                                                        }) &&  ({ /* progn5543 */
                                                                          child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* progn5548 */
                                                                      ({ /* letn5550 */
                                                                        Maybe_Rc_BTree_int_User match5316  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                        typeof((((match5316 . __h_data). Just). __h_0_mem)) wleft ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* letn5552 */
                                                                          bool __h_case_result  = (true  &&  (((match5316 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5553 */
                                                                                wleft  = (((match5316 . __h_data). Just). __h_0_mem) ;
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* progn5558 */
                                                                              ({ /* letn5560 */
                                                                                Maybe_BTree_int_User match5331  = deref_Rc_BTree_int_User (wleft );
                                                                                typeof((((match5331 . __h_data). Just). __h_0_mem)) left_child ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* letn5562 */
                                                                                  bool __h_case_result  = (true  &&  (((match5331 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5563 */
                                                                                        left_child  = (((match5331 . __h_data). Just). __h_0_mem) ;
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* progn5568 */
                                                                                      ({ /* letn5570 */
                                                                                        typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn5572 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5573 */
                                                                                                  left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn5575 */
                                                                                                  left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn5580 */
                                                                                              ({ /* letn5582 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn5584 */
                                                                                              typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                              typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* letn5586 */
                                                                                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5587 */
                                                                                                        left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                        true ;
                                                                                                      }) &&  ({ /* progn5589 */
                                                                                                        left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* progn5594 */
                                                                                                    ({ /* letn5596 */
                                                                                                      BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                    });
                                                                                                  }) : ({ /* letn5598 */
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* progn5600 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* letn5602 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* progn5604 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            }) : ({ /* letn5606 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* progn5608 */
                                                                                ({ /* letn5610 */
                                                                                  Maybe_Rc_BTree_int_User match5406  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                  typeof((((match5406 . __h_data). Just). __h_0_mem)) wright ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5612 */
                                                                                    bool __h_case_result  = (true  &&  (((match5406 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5613 */
                                                                                          wright  = (((match5406 . __h_data). Just). __h_0_mem) ;
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5618 */
                                                                                        ({ /* letn5620 */
                                                                                          Maybe_BTree_int_User match5421  = deref_Rc_BTree_int_User (wright );
                                                                                          typeof((((match5421 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* letn5622 */
                                                                                            bool __h_case_result  = (true  &&  (((match5421 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5623 */
                                                                                                  right_child  = (((match5421 . __h_data). Just). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* progn5628 */
                                                                                                ({ /* letn5630 */
                                                                                                  typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn5632 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5633 */
                                                                                                            right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn5635 */
                                                                                                            right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn5640 */
                                                                                                        ({ /* letn5642 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn5644 */
                                                                                                        typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                        typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* letn5646 */
                                                                                                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5647 */
                                                                                                                  right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                                  true ;
                                                                                                                }) &&  ({ /* progn5649 */
                                                                                                                  right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                                  true ;
                                                                                                                }) ) ) );
                                                                                                          // ----------
                                                                                                          
                                                                                                          ((__h_case_result ) ? ({ /* progn5654 */
                                                                                                              ({ /* letn5656 */
                                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                                // ----------
                                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                              });
                                                                                                            }) : ({ /* letn5658 */
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* progn5660 */
                                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                              });
                                                                                                            }));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                });
                                                                                              }) : ({ /* letn5662 */
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* progn5664 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* letn5666 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* progn5668 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* letn5672 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* progn5674 */
                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }) : ({ /* letn5678 */
                                                              Either_BTree_int_User_Error_BTree_int_User passthru  = match5523 ;
                                                              // ----------
                                                              ;
                                                              ({ /* progn5680 */
                                                                passthru ;
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* letn5684 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn5686 */
                                                        ({ /* letn5693 */
                                                          Either_BTree_int_User_Error_BTree_int_User match5692  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                          typeof((((match5692 . __h_data). Right). __h_0_mem)) nchild ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn5695 */
                                                            bool __h_case_result  = (true  &&  (((match5692 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5696 */
                                                                  nchild  = (((match5692 . __h_data). Right). __h_0_mem) ;
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn5701 */
                                                                borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                              }) : ({ /* letn5706 */
                                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match5692 ;
                                                                // ----------
                                                                ;
                                                                ({ /* progn5708 */
                                                                  passthru ;
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
                                      }) : ({ /* letn5712 */
                                        // ----------
                                        ;
                                        ({ /* progn5714 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* letn5720 */
                                // ----------
                                ;
                                ({ /* progn5722 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn5728 */
                        // ----------
                        ;
                        ({ /* letn5730 */
                          bool __h_case_result  = (true  &&  ((match5230 . __h_ctor) ==  __h_EQ_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn5734 */
                              ({ /* letn5737 */
                                Either_BTree_int_User_Error_BTree_int_User result  = borrowInternal_BTree_int_User (tree , items , children , current , index , callback );
                                // ----------
                                { /* let5742 */
                                  // ----------
                                  ;
                                  ({ /* letn5744 */
                                    bool __h_case_result  = (true  &&  ((result . __h_ctor) ==  __h_Right_t  ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block5750 */
                                        if (callback )
                                          { /* block5755 */
                                            callback (head );
                                          }
                                      }
                                  });
                                }
                                result ;
                              });
                            }) : ({ /* letn5759 */
                              // ----------
                              ;
                              ({ /* progn5761 */
                                deleteInternal (tree , items , children , Just_List_BTree_int_User_pair_t (current ), tail , (index  +  1 ));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* letn5766 */
                // ----------
                ;
                ({ /* progn5768 */
                  ({ /* letn5775 */
                    Maybe_Rc_BTree_int_User match5774  = nth_List_Rc_BTree_int_User (index , children );
                    typeof((((match5774 . __h_data). Just). __h_0_mem)) child ;
                    // ----------
                    ;
                    ({ /* letn5777 */
                      bool __h_case_result  = (true  &&  (((match5774 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5778 */
                            child  = (((match5774 . __h_data). Just). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn5783 */
                          ({ /* letn5790 */
                            Maybe_BTree_int_User match5789  = deref_Rc_BTree_int_User (child );
                            typeof((((match5789 . __h_data). Just). __h_0_mem)) tr ;
                            // ----------
                            ;
                            ({ /* letn5792 */
                              bool __h_case_result  = (true  &&  (((match5789 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5793 */
                                    tr  = (((match5789 . __h_data). Just). __h_0_mem) ;
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn5798 */
                                  ({ /* letn5804 */
                                    // ----------
                                    ;
                                    ({ /* letn5806 */
                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Branch_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn5810 */
                                          ({ /* letn5817 */
                                            Either_BTree_int_User_Error_BTree_int_User match5816  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                            typeof((((match5816 . __h_data). Right). __h_0_mem)) nchild ;
                                            // ----------
                                            ;
                                            ({ /* letn5819 */
                                              bool __h_case_result  = (true  &&  (((match5816 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5820 */
                                                    nchild  = (((match5816 . __h_data). Right). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn5825 */
                                                  ({ /* letn5831 */
                                                    typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                    typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn5833 */
                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5834 */
                                                              child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn5836 */
                                                              child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn5841 */
                                                          ({ /* letn5848 */
                                                            Maybe_Rc_BTree_int_User match5847  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                            typeof((((match5847 . __h_data). Just). __h_0_mem)) wleft ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn5850 */
                                                              bool __h_case_result  = (true  &&  (((match5847 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5851 */
                                                                    wleft  = (((match5847 . __h_data). Just). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn5856 */
                                                                  ({ /* letn5863 */
                                                                    Maybe_BTree_int_User match5862  = deref_Rc_BTree_int_User (wleft );
                                                                    typeof((((match5862 . __h_data). Just). __h_0_mem)) left_child ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn5865 */
                                                                      bool __h_case_result  = (true  &&  (((match5862 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5866 */
                                                                            left_child  = (((match5862 . __h_data). Just). __h_0_mem) ;
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn5871 */
                                                                          ({ /* letn5877 */
                                                                            typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                            typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn5879 */
                                                                              bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5880 */
                                                                                      left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                      true ;
                                                                                    }) &&  ({ /* progn5882 */
                                                                                      left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                      true ;
                                                                                    }) ) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn5887 */
                                                                                  ({ /* letn5890 */
                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                    // ----------
                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                  });
                                                                                }) : ({ /* letn5897 */
                                                                                  typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5899 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5900 */
                                                                                            left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn5902 */
                                                                                            left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5907 */
                                                                                        ({ /* letn5909 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn5913 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* progn5915 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* letn5921 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn5923 */
                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* letn5929 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn5931 */
                                                                    ({ /* letn5938 */
                                                                      Maybe_Rc_BTree_int_User match5937  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      typeof((((match5937 . __h_data). Just). __h_0_mem)) wright ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* letn5940 */
                                                                        bool __h_case_result  = (true  &&  (((match5937 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5941 */
                                                                              wright  = (((match5937 . __h_data). Just). __h_0_mem) ;
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* progn5946 */
                                                                            ({ /* letn5953 */
                                                                              Maybe_BTree_int_User match5952  = deref_Rc_BTree_int_User (wright );
                                                                              typeof((((match5952 . __h_data). Just). __h_0_mem)) right_child ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* letn5955 */
                                                                                bool __h_case_result  = (true  &&  (((match5952 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5956 */
                                                                                      right_child  = (((match5952 . __h_data). Just). __h_0_mem) ;
                                                                                      true ;
                                                                                    }) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* progn5961 */
                                                                                    ({ /* letn5967 */
                                                                                      typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                      typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* letn5969 */
                                                                                        bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5970 */
                                                                                                right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                true ;
                                                                                              }) &&  ({ /* progn5972 */
                                                                                                right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                true ;
                                                                                              }) ) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* progn5977 */
                                                                                            ({ /* letn5980 */
                                                                                              BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                              // ----------
                                                                                              Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                            });
                                                                                          }) : ({ /* letn5987 */
                                                                                            typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn5989 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5990 */
                                                                                                      right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn5992 */
                                                                                                      right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn5997 */
                                                                                                  ({ /* letn5999 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn6003 */
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* progn6005 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  }) : ({ /* letn6011 */
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* progn6013 */
                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* letn6019 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* progn6021 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn6027 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6029 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn6037 */
                                                  Either_BTree_int_User_Error_BTree_int_User passthru  = match5816 ;
                                                  // ----------
                                                  ;
                                                  ({ /* progn6039 */
                                                    passthru ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* letn6043 */
                                          // ----------
                                          ;
                                          ({ /* letn6045 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Internal_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn6049 */
                                                ({ /* letn6055 */
                                                  Either_BTree_int_User_Error_BTree_int_User match6054  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                  typeof((((match6054 . __h_data). Right). __h_0_mem)) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn6057 */
                                                    bool __h_case_result  = (true  &&  (((match6054 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6058 */
                                                          nchild  = (((match6054 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn6063 */
                                                        ({ /* letn6069 */
                                                          typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                          typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn6071 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6072 */
                                                                    child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn6074 */
                                                                    child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn6079 */
                                                                ({ /* letn6081 */
                                                                  Maybe_Rc_BTree_int_User match5847  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match5847 . __h_data). Just). __h_0_mem)) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6083 */
                                                                    bool __h_case_result  = (true  &&  (((match5847 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6084 */
                                                                          wleft  = (((match5847 . __h_data). Just). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6089 */
                                                                        ({ /* letn6091 */
                                                                          Maybe_BTree_int_User match5862  = deref_Rc_BTree_int_User (wleft );
                                                                          typeof((((match5862 . __h_data). Just). __h_0_mem)) left_child ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6093 */
                                                                            bool __h_case_result  = (true  &&  (((match5862 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6094 */
                                                                                  left_child  = (((match5862 . __h_data). Just). __h_0_mem) ;
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6099 */
                                                                                ({ /* letn6101 */
                                                                                  typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn6103 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6104 */
                                                                                            left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn6106 */
                                                                                            left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn6111 */
                                                                                        ({ /* letn6113 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn6115 */
                                                                                        typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn6117 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6118 */
                                                                                                  left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn6120 */
                                                                                                  left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn6125 */
                                                                                              ({ /* letn6127 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn6129 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* progn6131 */
                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              }) : ({ /* letn6133 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6135 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* letn6137 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6139 */
                                                                          ({ /* letn6141 */
                                                                            Maybe_Rc_BTree_int_User match5937  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match5937 . __h_data). Just). __h_0_mem)) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn6143 */
                                                                              bool __h_case_result  = (true  &&  (((match5937 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6144 */
                                                                                    wright  = (((match5937 . __h_data). Just). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn6149 */
                                                                                  ({ /* letn6151 */
                                                                                    Maybe_BTree_int_User match5952  = deref_Rc_BTree_int_User (wright );
                                                                                    typeof((((match5952 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* letn6153 */
                                                                                      bool __h_case_result  = (true  &&  (((match5952 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6154 */
                                                                                            right_child  = (((match5952 . __h_data). Just). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* progn6159 */
                                                                                          ({ /* letn6161 */
                                                                                            typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn6163 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6164 */
                                                                                                      right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn6166 */
                                                                                                      right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn6171 */
                                                                                                  ({ /* letn6173 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn6175 */
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn6177 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6178 */
                                                                                                            right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn6180 */
                                                                                                            right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn6185 */
                                                                                                        ({ /* letn6187 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn6189 */
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* progn6191 */
                                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        }) : ({ /* letn6193 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* progn6195 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* letn6197 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* progn6199 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn6203 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn6205 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn6209 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match6054 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn6211 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn6215 */
                                                // ----------
                                                ;
                                                ({ /* progn6217 */
                                                  ({ /* letn6224 */
                                                    Either_BTree_int_User_Error_BTree_int_User match6223  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                    typeof((((match6223 . __h_data). Right). __h_0_mem)) nchild ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6226 */
                                                      bool __h_case_result  = (true  &&  (((match6223 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6227 */
                                                            nchild  = (((match6223 . __h_data). Right). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6232 */
                                                          borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                        }) : ({ /* letn6237 */
                                                          Either_BTree_int_User_Error_BTree_int_User passthru  = match6223 ;
                                                          // ----------
                                                          ;
                                                          ({ /* progn6239 */
                                                            passthru ;
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
                                }) : ({ /* letn6243 */
                                  // ----------
                                  ;
                                  ({ /* progn6245 */
                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (((BTree_int_User_pair_t){ }), index ));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* letn6252 */
                          // ----------
                          ;
                          ({ /* progn6254 */
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
        ({ /* letn6262 */
          Either_BTree_int_User_Error_BTree_int_User rs  = ({ /* letn6267 */
            typeof((((result . __h_data). Right). __h_0_mem)) ntr ;
            // ----------
            ;
            ({ /* letn6269 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6270 */
                    ntr  = (((result . __h_data). Right). __h_0_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn6275 */
                  ({ /* letn6281 */
                    typeof((((ntr -> __h_data). Branch). __h_0_mem)) items ;
                    typeof((((ntr -> __h_data). Branch). __h_1_mem)) children ;
                    // ----------
                    ;
                    ({ /* letn6283 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6284 */
                              items  = (((ntr -> __h_data). Branch). __h_0_mem) ;
                              true ;
                            }) &&  ({ /* progn6286 */
                              children  = (((ntr -> __h_data). Branch). __h_1_mem) ;
                              true ;
                            }) ) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn6291 */
                          ({ /* letn6294 */
                            size_t items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* letn6304 */
                                typeof((((wparent . __h_data). Just). __h_0_mem)) ptree ;
                                // ----------
                                ;
                                ({ /* letn6306 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6307 */
                                        ptree  = (((wparent . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn6312 */
                                      ({ /* letn6318 */
                                        typeof((((ptree -> __h_data). Branch). __h_0_mem)) pitems ;
                                        // ----------
                                        ;
                                        ({ /* letn6320 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn6321 */
                                                pitems  = (((ptree -> __h_data). Branch). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn6326 */
                                              ({ /* letn6333 */
                                                Maybe_BTree_int_User_pair_t match6332  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                typeof((((match6332 . __h_data). Just). __h_0_mem)) bitem ;
                                                // ----------
                                                ;
                                                ({ /* letn6335 */
                                                  bool __h_case_result  = (true  &&  (((match6332 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6336 */
                                                        bitem  = (((match6332 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn6341 */
                                                      ({ /* letn6344 */
                                                        BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                        // ----------
                                                        Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6354 */
                                                            Ordering match6353  = compareKey (({ /* letn6359 */
                                                              typeof((bitem . __h_0_mem)) key ;
                                                              // ----------
                                                              ;
                                                              ({ /* letn6361 */
                                                                bool __h_case_result  = (true  &&  ({ /* progn6362 */
                                                                    key  = (bitem . __h_0_mem) ;
                                                                    true ;
                                                                  }) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* progn6367 */
                                                                    key ;
                                                                  }) : ({ /* letn6371 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* progn6373 */
                                                                      skey ;
                                                                    });
                                                                  }));
                                                              });
                                                            }), ({ /* letn6380 */
                                                              typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6378_0_arg ;
                                                              typeof((__h_match6378_0_arg . __h_0_mem)) key ;
                                                              // ----------
                                                              ;
                                                              ({ /* letn6382 */
                                                                bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6383 */
                                                                        __h_match6378_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                        true ;
                                                                      }) &&  (true  &&  ({ /* progn6385 */
                                                                          key  = (__h_match6378_0_arg . __h_0_mem) ;
                                                                          true ;
                                                                        }) ) ) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* progn6390 */
                                                                    key ;
                                                                  }) : ({ /* letn6394 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* progn6396 */
                                                                      skey ;
                                                                    });
                                                                  }));
                                                              });
                                                            }));
                                                            // ----------
                                                            ;
                                                            ({ /* letn6399 */
                                                              bool __h_case_result  = (true  &&  ((match6353 . __h_ctor) ==  __h_LT_t  ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn6403 */
                                                                  0;
                                                                }) : ({ /* letn6407 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn6409 */
                                                                    items_len ;
                                                                  });
                                                                }));
                                                            });
                                                          })), cloneAll_Rc_BTree_int_User (children )));
                                                      });
                                                    }) : ({ /* letn6414 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn6416 */
                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn6422 */
                                              typeof((((ptree -> __h_data). Internal). __h_0_mem)) pitems ;
                                              // ----------
                                              ;
                                              ({ /* letn6424 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn6425 */
                                                      pitems  = (((ptree -> __h_data). Internal). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn6430 */
                                                    ({ /* letn6436 */
                                                      Maybe_BTree_int_User_pair_t match6435  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match6435 . __h_data). Just). __h_0_mem)) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn6438 */
                                                        bool __h_case_result  = (true  &&  (((match6435 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6439 */
                                                              bitem  = (((match6435 . __h_data). Just). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn6444 */
                                                            ({ /* letn6446 */
                                                              BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6448 */
                                                                  Ordering match6353  = compareKey (({ /* letn6449 */
                                                                    typeof((bitem . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6451 */
                                                                      bool __h_case_result  = (true  &&  ({ /* progn6452 */
                                                                          key  = (bitem . __h_0_mem) ;
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6457 */
                                                                          key ;
                                                                        }) : ({ /* letn6459 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6461 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* letn6463 */
                                                                    typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6378_0_arg ;
                                                                    typeof((__h_match6378_0_arg . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6465 */
                                                                      bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6466 */
                                                                              __h_match6378_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                              true ;
                                                                            }) &&  (true  &&  ({ /* progn6468 */
                                                                                key  = (__h_match6378_0_arg . __h_0_mem) ;
                                                                                true ;
                                                                              }) ) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6473 */
                                                                          key ;
                                                                        }) : ({ /* letn6475 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6477 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6480 */
                                                                    bool __h_case_result  = (true  &&  ((match6353 . __h_ctor) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6484 */
                                                                        0;
                                                                      }) : ({ /* letn6486 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6488 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), cloneAll_Rc_BTree_int_User (children )));
                                                            });
                                                          }) : ({ /* letn6492 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn6494 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn6498 */
                                                    // ----------
                                                    ;
                                                    ({ /* progn6500 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* letn6506 */
                                      // ----------
                                      ;
                                      ({ /* progn6508 */
                                        (((items_len  ==  0 )) ? ({ /* letn6515 */
                                            typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
                                            // ----------
                                            ;
                                            ({ /* letn6517 */
                                              bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn6518 */
                                                    head  = (((children -> __h_data). Cons). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn6523 */
                                                  ({ /* letn6530 */
                                                    Maybe_BTree_int_User match6529  = deref_Rc_BTree_int_User (clone_Rc_BTree_int_User (head ));
                                                    typeof((((match6529 . __h_data). Just). __h_0_mem)) chtr ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6533 */
                                                      bool __h_case_result  = (true  &&  (((match6529 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6534 */
                                                            chtr  = (((match6529 . __h_data). Just). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6539 */
                                                          ({ /* letn6542 */
                                                            BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                            // ----------
                                                            Right_BTree_int_User_Error_BTree_int_User (chtr );
                                                          });
                                                        }) : ({ /* letn6548 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6550 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn6556 */
                                                  // ----------
                                                  ;
                                                  ({ /* progn6558 */
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
                        }) : ({ /* letn6562 */
                          typeof((((ntr -> __h_data). Internal). __h_0_mem)) items ;
                          typeof((((ntr -> __h_data). Internal). __h_1_mem)) children ;
                          // ----------
                          ;
                          ({ /* letn6564 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6565 */
                                    items  = (((ntr -> __h_data). Internal). __h_0_mem) ;
                                    true ;
                                  }) &&  ({ /* progn6567 */
                                    children  = (((ntr -> __h_data). Internal). __h_1_mem) ;
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn6572 */
                                ({ /* letn6574 */
                                  size_t items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* letn6576 */
                                      typeof((((wparent . __h_data). Just). __h_0_mem)) ptree ;
                                      // ----------
                                      ;
                                      ({ /* letn6578 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6579 */
                                              ptree  = (((wparent . __h_data). Just). __h_0_mem) ;
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* progn6584 */
                                            ({ /* letn6586 */
                                              typeof((((ptree -> __h_data). Branch). __h_0_mem)) pitems ;
                                              // ----------
                                              ;
                                              ({ /* letn6588 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn6589 */
                                                      pitems  = (((ptree -> __h_data). Branch). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn6594 */
                                                    ({ /* letn6596 */
                                                      Maybe_BTree_int_User_pair_t match6332  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match6332 . __h_data). Just). __h_0_mem)) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn6598 */
                                                        bool __h_case_result  = (true  &&  (((match6332 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6599 */
                                                              bitem  = (((match6332 . __h_data). Just). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn6604 */
                                                            ({ /* letn6606 */
                                                              BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6608 */
                                                                  Ordering match6353  = compareKey (({ /* letn6609 */
                                                                    typeof((bitem . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6611 */
                                                                      bool __h_case_result  = (true  &&  ({ /* progn6612 */
                                                                          key  = (bitem . __h_0_mem) ;
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6617 */
                                                                          key ;
                                                                        }) : ({ /* letn6619 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6621 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* letn6623 */
                                                                    typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6378_0_arg ;
                                                                    typeof((__h_match6378_0_arg . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6625 */
                                                                      bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6626 */
                                                                              __h_match6378_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                              true ;
                                                                            }) &&  (true  &&  ({ /* progn6628 */
                                                                                key  = (__h_match6378_0_arg . __h_0_mem) ;
                                                                                true ;
                                                                              }) ) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6633 */
                                                                          key ;
                                                                        }) : ({ /* letn6635 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6637 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6640 */
                                                                    bool __h_case_result  = (true  &&  ((match6353 . __h_ctor) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6644 */
                                                                        0;
                                                                      }) : ({ /* letn6646 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6648 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), cloneAll_Rc_BTree_int_User (children )));
                                                            });
                                                          }) : ({ /* letn6650 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn6652 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn6654 */
                                                    typeof((((ptree -> __h_data). Internal). __h_0_mem)) pitems ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6656 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn6657 */
                                                            pitems  = (((ptree -> __h_data). Internal). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6662 */
                                                          ({ /* letn6664 */
                                                            Maybe_BTree_int_User_pair_t match6435  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                            typeof((((match6435 . __h_data). Just). __h_0_mem)) bitem ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn6666 */
                                                              bool __h_case_result  = (true  &&  (((match6435 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6667 */
                                                                    bitem  = (((match6435 . __h_data). Just). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn6672 */
                                                                  ({ /* letn6674 */
                                                                    BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6676 */
                                                                        Ordering match6353  = compareKey (({ /* letn6677 */
                                                                          typeof((bitem . __h_0_mem)) key ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6679 */
                                                                            bool __h_case_result  = (true  &&  ({ /* progn6680 */
                                                                                key  = (bitem . __h_0_mem) ;
                                                                                true ;
                                                                              }) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6685 */
                                                                                key ;
                                                                              }) : ({ /* letn6687 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6689 */
                                                                                  skey ;
                                                                                });
                                                                              }));
                                                                          });
                                                                        }), ({ /* letn6691 */
                                                                          typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6378_0_arg ;
                                                                          typeof((__h_match6378_0_arg . __h_0_mem)) key ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6693 */
                                                                            bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6694 */
                                                                                    __h_match6378_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) &&  (true  &&  ({ /* progn6696 */
                                                                                      key  = (__h_match6378_0_arg . __h_0_mem) ;
                                                                                      true ;
                                                                                    }) ) ) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6701 */
                                                                                key ;
                                                                              }) : ({ /* letn6703 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6705 */
                                                                                  skey ;
                                                                                });
                                                                              }));
                                                                          });
                                                                        }));
                                                                        // ----------
                                                                        ;
                                                                        ({ /* letn6708 */
                                                                          bool __h_case_result  = (true  &&  ((match6353 . __h_ctor) ==  __h_LT_t  ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* progn6712 */
                                                                              0;
                                                                            }) : ({ /* letn6714 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* progn6716 */
                                                                                items_len ;
                                                                              });
                                                                            }));
                                                                        });
                                                                      })), cloneAll_Rc_BTree_int_User (children )));
                                                                  });
                                                                }) : ({ /* letn6718 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn6720 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn6722 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6724 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* letn6726 */
                                            // ----------
                                            ;
                                            ({ /* progn6728 */
                                              (((items_len  ==  0 )) ? ({ /* letn6730 */
                                                  typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn6732 */
                                                    bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn6733 */
                                                          head  = (((children -> __h_data). Cons). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn6738 */
                                                        ({ /* letn6740 */
                                                          Maybe_BTree_int_User match6529  = deref_Rc_BTree_int_User (clone_Rc_BTree_int_User (head ));
                                                          typeof((((match6529 . __h_data). Just). __h_0_mem)) chtr ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn6742 */
                                                            bool __h_case_result  = (true  &&  (((match6529 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6743 */
                                                                  chtr  = (((match6529 . __h_data). Just). __h_0_mem) ;
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn6748 */
                                                                ({ /* letn6750 */
                                                                  BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                                  // ----------
                                                                  Right_BTree_int_User_Error_BTree_int_User (chtr );
                                                                });
                                                              }) : ({ /* letn6752 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn6754 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn6756 */
                                                        // ----------
                                                        ;
                                                        ({ /* progn6758 */
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
                              }) : ({ /* letn6762 */
                                // ----------
                                ;
                                ({ /* progn6764 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* letn6768 */
                  // ----------
                  ;
                  ({ /* progn6770 */
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
    return ({ /* letn6786 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn6788 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn6789 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn6791 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn6793 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn6798 */
              ({ /* letn6804 */
                Ordering match6803  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn6806 */
                  bool __h_case_result  = (true  &&  ((match6803 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn6810 */
                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                    }) : ({ /* letn6816 */
                      // ----------
                      ;
                      ({ /* letn6818 */
                        bool __h_case_result  = (true  &&  ((match6803 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn6822 */
                            ({ /* letn6825 */
                              Either_BTree_int_User_Error_BTree_int_User result  = Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current )));
                              // ----------
                              { /* let6832 */
                                // ----------
                                ;
                                ({ /* letn6834 */
                                  bool __h_case_result  = (true  &&  ((result . __h_ctor) ==  __h_Right_t  ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block6840 */
                                      if (callback )
                                        { /* block6845 */
                                          callback (head );
                                        }
                                    }
                                });
                              }
                              result ;
                            });
                          }) : ({ /* letn6849 */
                            // ----------
                            ;
                            ({ /* progn6851 */
                              deleteLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn6855 */
              // ----------
              ;
              ({ /* progn6857 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
              });
            }));
        });
      });
  }
  return ({ /* letn6862 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn6867 */
        typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
        typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
        // ----------
        ;
        ({ /* letn6869 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6870 */
                  items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn6872 */
                  children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn6877 */
              deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
            }) : ({ /* letn6883 */
              typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
              typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
              // ----------
              ;
              ({ /* letn6885 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6886 */
                        items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                        true ;
                      }) &&  ({ /* progn6888 */
                        children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn6893 */
                    deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
                  }) : ({ /* letn6897 */
                    typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                    // ----------
                    ;
                    ({ /* letn6899 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn6900 */
                            items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn6905 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* letn6909 */
                          // ----------
                          ;
                          ({ /* progn6911 */
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
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], size_t len ) {
  return ({ /* letn6928 */
      BTree_int_User tree  = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
      // ----------
      for (size_t i  = 0; (i  <  len  ); (++i )) {
          { /* let6937 */
            Either_BTree_int_User_Error_BTree_int_User match6936  = insert_BTree_int_User (tree , keys [i ], values [i ]);
            typeof((((match6936 . __h_data). Right). __h_0_mem)) new_tree ;
            // ----------
            ;
            ({ /* letn6940 */
              bool __h_case_result  = (true  &&  (((match6936 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6941 */
                    new_tree  = (((match6936 . __h_data). Right). __h_0_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* block6948 */
                  { /* block6950 */
                    free_BTree_int_User ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* let6956 */
                  Either_BTree_int_User_Error_BTree_int_User left  = match6936 ;
                  // ----------
                  ;
                  { /* block6958 */
                    { /* block6960 */
                      free_BTree_int_User ((&tree ));
                      return left ;
                    }
                  }
                }
            });
          }
      }
      Right_BTree_int_User_Error_BTree_int_User (tree );
    });
}
size_t show_BTree_int_User (FILE * file , BTree_int_User tree ) {
  auto size_t showTree (int indent , BTree_int_User tree );
  size_t showChildren (int indent , List_Rc_BTree_int_User children ) {
    return ({ /* letn6973 */
        typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((children -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn6975 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6976 */
                  head  = (((children -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn6978 */
                  tail  = (((children -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn6983 */
              (({ /* letn6989 */
                  // ----------
                  ;
                  ({ /* letn6991 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn6995 */
                        ({ /* letn7002 */
                          Maybe_BTree_int_User match7001  = deref_Rc_BTree_int_User (head );
                          typeof((((match7001 . __h_data). Just). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn7004 */
                            bool __h_case_result  = (true  &&  (((match7001 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7005 */
                                  tr  = (((match7001 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn7010 */
                                (showTree (indent , tr ) +  fprintf (file , "\n") );
                              }) : ({ /* letn7014 */
                                // ----------
                                ;
                                ({ /* progn7016 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn7020 */
                        // ----------
                        ;
                        ({ /* progn7022 */
                          ({ /* letn7029 */
                            Maybe_BTree_int_User match7028  = deref_Rc_BTree_int_User (head );
                            typeof((((match7028 . __h_data). Just). __h_0_mem)) tr ;
                            // ----------
                            ;
                            ({ /* letn7031 */
                              bool __h_case_result  = (true  &&  (((match7028 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7032 */
                                    tr  = (((match7028 . __h_data). Just). __h_0_mem) ;
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn7037 */
                                  showTree (indent , tr );
                                }) : ({ /* letn7041 */
                                  // ----------
                                  ;
                                  ({ /* progn7043 */
                                    0;
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }) +  showChildren (indent , tail ) );
            }) : ({ /* letn7047 */
              // ----------
              ;
              ({ /* progn7049 */
                0;
              });
            }));
        });
      });
  }
  size_t showTree (int indent , BTree_int_User tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* letn7056 */
          typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
          typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
          // ----------
          ;
          ({ /* letn7058 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7059 */
                    items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn7061 */
                    children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* progn7066 */
                (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* letn7073 */
                    // ----------
                    ;
                    ({ /* letn7075 */
                      bool __h_case_result  = (true  &&  ((children -> __h_ctor) ==  __h_Cons_t  ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn7079 */
                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                        }) : ({ /* letn7083 */
                          // ----------
                          ;
                          ({ /* progn7085 */
                            0;
                          });
                        }));
                    });
                  }) );
              }) : ({ /* letn7089 */
                typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
                typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
                // ----------
                ;
                ({ /* letn7091 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7092 */
                          items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                          true ;
                        }) &&  ({ /* progn7094 */
                          children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7099 */
                      (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* letn7101 */
                          // ----------
                          ;
                          ({ /* letn7103 */
                            bool __h_case_result  = (true  &&  ((children -> __h_ctor) ==  __h_Cons_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn7107 */
                                (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                              }) : ({ /* letn7109 */
                                // ----------
                                ;
                                ({ /* progn7111 */
                                  0;
                                });
                              }));
                          });
                        }) );
                    }) : ({ /* letn7115 */
                      typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                      // ----------
                      ;
                      ({ /* letn7117 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7118 */
                              items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn7123 */
                            show_List_BTree_int_User_pair_t (file , items );
                          }) : ({ /* letn7128 */
                            // ----------
                            ;
                            ({ /* progn7130 */
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
    { /* let7143 */
      typeof((((currentChild -> __h_data). Cons). __h_0_mem)) wheadC ;
      typeof((((currentChild -> __h_data). Cons). __h_1_mem)) tailC ;
      // ----------
      ;
      ({ /* letn7145 */
        bool __h_case_result  = (true  &&  (((currentChild -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7146 */
                wheadC  = (((currentChild -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn7148 */
                tailC  = (((currentChild -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block7155 */
            { /* let7159 */
              Maybe_BTree_int_User match7158  = deref_Rc_BTree_int_User (wheadC );
              typeof((((match7158 . __h_data). Just). __h_0_mem)) headC ;
              // ----------
              ;
              ({ /* letn7162 */
                bool __h_case_result  = (true  &&  (((match7158 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7163 */
                      headC  = (((match7158 . __h_data). Just). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* block7170 */
                    { /* let7174 */
                      // ----------
                      ;
                      ({ /* letn7176 */
                        bool __h_case_result  = (true  &&  ((tailC -> __h_ctor) ==  __h_Cons_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* block7182 */
                            { /* block7184 */
                              { /* let7188 */
                                typeof((((headC -> __h_data). Branch). __h_0_mem)) items ;
                                typeof((((headC -> __h_data). Branch). __h_1_mem)) children ;
                                // ----------
                                ;
                                ({ /* letn7190 */
                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7191 */
                                          items  = (((headC -> __h_data). Branch). __h_0_mem) ;
                                          true ;
                                        }) &&  ({ /* progn7193 */
                                          children  = (((headC -> __h_data). Branch). __h_1_mem) ;
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block7200 */
                                      traverseInternal (items , children );
                                    }
                                  else
                                    { /* let7205 */
                                      typeof((((headC -> __h_data). Internal). __h_0_mem)) items ;
                                      typeof((((headC -> __h_data). Internal). __h_1_mem)) children ;
                                      // ----------
                                      ;
                                      ({ /* letn7207 */
                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7208 */
                                                items  = (((headC -> __h_data). Internal). __h_0_mem) ;
                                                true ;
                                              }) &&  ({ /* progn7210 */
                                                children  = (((headC -> __h_data). Internal). __h_1_mem) ;
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        
                                        if (__h_case_result )
                                          { /* block7217 */
                                            traverseInternal (items , children );
                                          }
                                        else
                                          { /* let7222 */
                                            typeof((((headC -> __h_data). Leaf). __h_0_mem)) items ;
                                            // ----------
                                            ;
                                            ({ /* letn7224 */
                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7225 */
                                                    items  = (((headC -> __h_data). Leaf). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* block7232 */
                                                  traverseLeaf (items , True ());
                                                }
                                            });
                                          }
                                      });
                                    }
                                });
                              }
                              { /* let7236 */
                                typeof((((currentItem -> __h_data). Cons). __h_0_mem)) headI ;
                                typeof((((currentItem -> __h_data). Cons). __h_1_mem)) tailI ;
                                // ----------
                                ;
                                ({ /* letn7238 */
                                  bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7239 */
                                          headI  = (((currentItem -> __h_data). Cons). __h_0_mem) ;
                                          true ;
                                        }) &&  ({ /* progn7241 */
                                          tailI  = (((currentItem -> __h_data). Cons). __h_1_mem) ;
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block7248 */
                                      { /* block7250 */
                                        callback (headI , True ());
                                        traverseInternal (tailI , tailC );
                                      }
                                    }
                                });
                              }
                            }
                          }
                        else
                          { /* let7255 */
                            // ----------
                            ;
                            { /* block7257 */
                              { /* block7259 */
                                { /* let7263 */
                                  typeof((((headC -> __h_data). Branch). __h_0_mem)) items ;
                                  typeof((((headC -> __h_data). Branch). __h_1_mem)) children ;
                                  // ----------
                                  ;
                                  ({ /* letn7265 */
                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7266 */
                                            items  = (((headC -> __h_data). Branch). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn7268 */
                                            children  = (((headC -> __h_data). Branch). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block7275 */
                                        traverseInternal (items , children );
                                      }
                                    else
                                      { /* let7280 */
                                        typeof((((headC -> __h_data). Internal). __h_0_mem)) items ;
                                        typeof((((headC -> __h_data). Internal). __h_1_mem)) children ;
                                        // ----------
                                        ;
                                        ({ /* letn7282 */
                                          bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7283 */
                                                  items  = (((headC -> __h_data). Internal). __h_0_mem) ;
                                                  true ;
                                                }) &&  ({ /* progn7285 */
                                                  children  = (((headC -> __h_data). Internal). __h_1_mem) ;
                                                  true ;
                                                }) ) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* block7292 */
                                              traverseInternal (items , children );
                                            }
                                          else
                                            { /* let7297 */
                                              typeof((((headC -> __h_data). Leaf). __h_0_mem)) items ;
                                              // ----------
                                              ;
                                              ({ /* letn7299 */
                                                bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7300 */
                                                      items  = (((headC -> __h_data). Leaf). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                if (__h_case_result )
                                                  { /* block7307 */
                                                    traverseLeaf (items , False ());
                                                  }
                                              });
                                            }
                                        });
                                      }
                                  });
                                }
                                { /* let7311 */
                                  typeof((((currentItem -> __h_data). Cons). __h_0_mem)) headI ;
                                  typeof((((currentItem -> __h_data). Cons). __h_1_mem)) tailI ;
                                  // ----------
                                  ;
                                  ({ /* letn7313 */
                                    bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7314 */
                                            headI  = (((currentItem -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn7316 */
                                            tailI  = (((currentItem -> __h_data). Cons). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block7323 */
                                        { /* block7325 */
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
    { /* let7331 */
      typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn7333 */
        bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7334 */
                head  = (((current -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn7336 */
                tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block7343 */
            { /* block7345 */
              callback (head , ({ /* letn7351 */
                  // ----------
                  ;
                  ({ /* letn7353 */
                    bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor) ==  __h_True_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7357 */
                        hasNextLeaf ;
                      }) : ({ /* letn7361 */
                        // ----------
                        ;
                        ({ /* progn7363 */
                          ({ /* letn7369 */
                            // ----------
                            ;
                            ({ /* letn7371 */
                              bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn7375 */
                                  True ();
                                }) : ({ /* letn7379 */
                                  // ----------
                                  ;
                                  ({ /* progn7381 */
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
  { /* let7385 */
    typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
    typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
    // ----------
    ;
    ({ /* letn7387 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7388 */
              items  = (((tree -> __h_data). Branch). __h_0_mem) ;
              true ;
            }) &&  ({ /* progn7390 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* block7397 */
          traverseInternal (items , children );
        }
      else
        { /* let7402 */
          typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
          typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
          // ----------
          ;
          ({ /* letn7404 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7405 */
                    items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn7407 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            if (__h_case_result )
              { /* block7414 */
                traverseInternal (items , children );
              }
            else
              { /* let7419 */
                typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                // ----------
                ;
                ({ /* letn7421 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7422 */
                        items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* block7429 */
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
    return ({ /* letn7446 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7448 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7449 */
                  head  = (((current -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn7451 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7456 */
              ({ /* letn7462 */
                // ----------
                ;
                ({ /* letn7464 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7468 */
                      ({ /* letn7475 */
                        Maybe_BTree_int_User match7474  = deref_Rc_BTree_int_User (head );
                        typeof((((match7474 . __h_data). Just). __h_0_mem)) child ;
                        // ----------
                        ;
                        ({ /* letn7477 */
                          bool __h_case_result  = (true  &&  (((match7474 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7478 */
                                child  = (((match7474 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn7483 */
                              ({ /* letn7489 */
                                typeof((((child -> __h_data). Branch). __h_1_mem)) nchildren ;
                                // ----------
                                ;
                                ({ /* letn7491 */
                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7492 */
                                        nchildren  = (((child -> __h_data). Branch). __h_1_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn7497 */
                                      maxInternal (nchildren );
                                    }) : ({ /* letn7501 */
                                      typeof((((child -> __h_data). Internal). __h_1_mem)) nchildren ;
                                      // ----------
                                      ;
                                      ({ /* letn7503 */
                                        bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7504 */
                                              nchildren  = (((child -> __h_data). Internal). __h_1_mem) ;
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* progn7509 */
                                            maxInternal (nchildren );
                                          }) : ({ /* letn7513 */
                                            typeof((((child -> __h_data). Leaf). __h_0_mem)) items ;
                                            // ----------
                                            ;
                                            ({ /* letn7515 */
                                              bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7516 */
                                                    items  = (((child -> __h_data). Leaf). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn7521 */
                                                  maxLeaf (items );
                                                }) : ({ /* letn7525 */
                                                  // ----------
                                                  ;
                                                  ({ /* progn7527 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          }));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn7532 */
                              // ----------
                              ;
                              ({ /* progn7534 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn7539 */
                      // ----------
                      ;
                      ({ /* progn7541 */
                        maxInternal (tail );
                      });
                    }));
                });
              });
            }) : ({ /* letn7545 */
              // ----------
              ;
              ({ /* progn7547 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current ) {
    return ({ /* letn7557 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7559 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7560 */
                  head  = (((current -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn7562 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7567 */
              ({ /* letn7573 */
                // ----------
                ;
                ({ /* letn7575 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7579 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* letn7584 */
                      // ----------
                      ;
                      ({ /* progn7586 */
                        maxLeaf (tail );
                      });
                    }));
                });
              });
            }) : ({ /* letn7590 */
              // ----------
              ;
              ({ /* progn7592 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn7599 */
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn7601 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7602 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn7607 */
            maxInternal (children );
          }) : ({ /* letn7611 */
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn7613 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7614 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn7619 */
                  maxInternal (children );
                }) : ({ /* letn7623 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn7625 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7626 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7631 */
                        maxLeaf (items );
                      }) : ({ /* letn7635 */
                        // ----------
                        ;
                        ({ /* progn7637 */
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
    return ({ /* letn7655 */
        typeof((((first -> __h_data). Cons). __h_0_mem)) head ;
        // ----------
        ;
        ({ /* letn7657 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn7658 */
                head  = (((first -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7663 */
              ({ /* letn7670 */
                Maybe_BTree_int_User match7669  = deref_Rc_BTree_int_User (head );
                typeof((((match7669 . __h_data). Just). __h_0_mem)) child ;
                // ----------
                ;
                ({ /* letn7672 */
                  bool __h_case_result  = (true  &&  (((match7669 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7673 */
                        child  = (((match7669 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7678 */
                      ({ /* letn7684 */
                        typeof((((child -> __h_data). Branch). __h_1_mem)) nchildren ;
                        // ----------
                        ;
                        ({ /* letn7686 */
                          bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7687 */
                                nchildren  = (((child -> __h_data). Branch). __h_1_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn7692 */
                              minInternal (nchildren );
                            }) : ({ /* letn7696 */
                              typeof((((child -> __h_data). Internal). __h_1_mem)) nchildren ;
                              // ----------
                              ;
                              ({ /* letn7698 */
                                bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7699 */
                                      nchildren  = (((child -> __h_data). Internal). __h_1_mem) ;
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn7704 */
                                    minInternal (nchildren );
                                  }) : ({ /* letn7708 */
                                    typeof((((child -> __h_data). Leaf). __h_0_mem)) items ;
                                    // ----------
                                    ;
                                    ({ /* letn7710 */
                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7711 */
                                            items  = (((child -> __h_data). Leaf). __h_0_mem) ;
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn7716 */
                                          minLeaf (items );
                                        }) : ({ /* letn7720 */
                                          // ----------
                                          ;
                                          ({ /* progn7722 */
                                            Nothing_BTree_int_User_pair_t ();
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn7727 */
                      // ----------
                      ;
                      ({ /* progn7729 */
                        Nothing_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* letn7734 */
              // ----------
              ;
              ({ /* progn7736 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first ) {
    return ({ /* letn7746 */
        typeof((((first -> __h_data). Cons). __h_0_mem)) head ;
        // ----------
        ;
        ({ /* letn7748 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn7749 */
                head  = (((first -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7754 */
              Just_BTree_int_User_pair_t (head );
            }) : ({ /* letn7759 */
              // ----------
              ;
              ({ /* progn7761 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn7768 */
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn7770 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7771 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn7776 */
            minInternal (children );
          }) : ({ /* letn7780 */
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn7782 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7783 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn7788 */
                  minInternal (children );
                }) : ({ /* letn7792 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn7794 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7795 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7800 */
                        minLeaf (items );
                      }) : ({ /* letn7804 */
                        // ----------
                        ;
                        ({ /* progn7806 */
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
    return ({ /* letn7828 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7830 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn7831 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn7833 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn7835 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7840 */
              ({ /* letn7846 */
                Ordering match7845  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn7848 */
                  bool __h_case_result  = (true  &&  ((match7845 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7852 */
                      ({ /* letn7859 */
                        Maybe_Rc_BTree_int_User match7858  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match7858 . __h_data). Just). __h_0_mem)) node ;
                        // ----------
                        ;
                        ({ /* letn7861 */
                          bool __h_case_result  = (true  &&  (((match7858 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7862 */
                                node  = (((match7858 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn7867 */
                              ({ /* letn7874 */
                                Maybe_BTree_int_User match7873  = deref_Rc_BTree_int_User (node );
                                typeof((((match7873 . __h_data). Just). __h_0_mem)) tr ;
                                // ----------
                                ;
                                ({ /* letn7876 */
                                  bool __h_case_result  = (true  &&  (((match7873 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7877 */
                                        tr  = (((match7873 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn7882 */
                                      search_BTree_int_User (tr , skey );
                                    }) : ({ /* letn7887 */
                                      // ----------
                                      ;
                                      ({ /* progn7889 */
                                        Nothing_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn7894 */
                              // ----------
                              ;
                              ({ /* progn7896 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn7901 */
                      // ----------
                      ;
                      ({ /* letn7903 */
                        bool __h_case_result  = (true  &&  ((match7845 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn7907 */
                            Just_BTree_int_User_pair_t (head );
                          }) : ({ /* letn7912 */
                            // ----------
                            ;
                            ({ /* progn7914 */
                              ({ /* letn7920 */
                                // ----------
                                ;
                                ({ /* letn7922 */
                                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn7926 */
                                      ({ /* letn7933 */
                                        Maybe_Rc_BTree_int_User match7932  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                        typeof((((match7932 . __h_data). Just). __h_0_mem)) node ;
                                        // ----------
                                        ;
                                        ({ /* letn7935 */
                                          bool __h_case_result  = (true  &&  (((match7932 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7936 */
                                                node  = (((match7932 . __h_data). Just). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn7941 */
                                              ({ /* letn7948 */
                                                Maybe_BTree_int_User match7947  = deref_Rc_BTree_int_User (node );
                                                typeof((((match7947 . __h_data). Just). __h_0_mem)) tr ;
                                                // ----------
                                                ;
                                                ({ /* letn7950 */
                                                  bool __h_case_result  = (true  &&  (((match7947 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7951 */
                                                        tr  = (((match7947 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn7956 */
                                                      search_BTree_int_User (tr , skey );
                                                    }) : ({ /* letn7961 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn7963 */
                                                        Nothing_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn7968 */
                                              // ----------
                                              ;
                                              ({ /* progn7970 */
                                                Nothing_BTree_int_User_pair_t ();
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* letn7975 */
                                      // ----------
                                      ;
                                      ({ /* progn7977 */
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
            }) : ({ /* letn7981 */
              // ----------
              ;
              ({ /* progn7983 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t searchLeaf (List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* letn7994 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7996 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn7997 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn7999 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn8001 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8006 */
              ({ /* letn8012 */
                Ordering match8011  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8014 */
                  bool __h_case_result  = (true  &&  ((match8011 . __h_ctor) ==  __h_EQ_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8018 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* letn8023 */
                      // ----------
                      ;
                      ({ /* progn8025 */
                        ({ /* letn8031 */
                          // ----------
                          ;
                          ({ /* letn8033 */
                            bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8037 */
                                Nothing_BTree_int_User_pair_t ();
                              }) : ({ /* letn8042 */
                                // ----------
                                ;
                                ({ /* progn8044 */
                                  searchLeaf (tail , (index  +  1 ));
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* letn8048 */
              // ----------
              ;
              ({ /* progn8050 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn8057 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8059 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8060 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8062 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn8067 */
            searchInternal (children , items , 0);
          }) : ({ /* letn8071 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8073 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8074 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8076 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn8081 */
                  searchInternal (children , items , 0);
                }) : ({ /* letn8085 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8087 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8088 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8093 */
                        searchLeaf (items , 0);
                      }) : ({ /* letn8097 */
                        // ----------
                        ;
                        ({ /* progn8099 */
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
    { /* block8112 */
      return Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_ORDER (3));
    }
  Either_BTree_int_User_Error_BTree_int_User insertInternal (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* letn8128 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8130 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8131 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8133 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn8135 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8140 */
              ({ /* letn8146 */
                Ordering match8145  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8148 */
                  bool __h_case_result  = (true  &&  ((match8145 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8152 */
                      ({ /* letn8159 */
                        Maybe_Rc_BTree_int_User match8158  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match8158 . __h_data). Just). __h_0_mem)) child ;
                        // ----------
                        ;
                        ({ /* letn8161 */
                          bool __h_case_result  = (true  &&  (((match8158 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8162 */
                                child  = (((match8158 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn8167 */
                              ({ /* letn8174 */
                                Maybe_BTree_int_User match8173  = deref_Rc_BTree_int_User (child );
                                typeof((((match8173 . __h_data). Just). __h_0_mem)) tr ;
                                // ----------
                                ;
                                ({ /* letn8176 */
                                  bool __h_case_result  = (true  &&  (((match8173 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8177 */
                                        tr  = (((match8173 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn8182 */
                                      ({ /* letn8189 */
                                        Either_BTree_int_User_Error_BTree_int_User match8188  = insert_BTree_int_User (tr , skey , svalue );
                                        typeof((((match8188 . __h_data). Right). __h_0_mem)) child_tree ;
                                        // ----------
                                        ;
                                        ({ /* letn8191 */
                                          bool __h_case_result  = (true  &&  (((match8188 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8192 */
                                                child_tree  = (((match8188 . __h_data). Right). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn8197 */
                                              ({ /* letn8203 */
                                                typeof((((child_tree -> __h_data). Branch). __h_0_mem)) child_items ;
                                                typeof((((child_tree -> __h_data). Branch). __h_1_mem)) child_children ;
                                                // ----------
                                                ;
                                                ({ /* letn8205 */
                                                  bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8206 */
                                                          child_items  = (((child_tree -> __h_data). Branch). __h_0_mem) ;
                                                          true ;
                                                        }) &&  ({ /* progn8208 */
                                                          child_children  = (((child_tree -> __h_data). Branch). __h_1_mem) ;
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn8213 */
                                                      ({ /* letn8220 */
                                                        typeof((((child_items -> __h_data). Cons). __h_0_mem)) single_item ;
                                                        typeof((((child_items -> __h_data). Cons). __h_1_mem)) __h_match8218_1_arg ;
                                                        // ----------
                                                        ;
                                                        ({ /* letn8222 */
                                                          bool __h_case_result  = (true  &&  (((child_items -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8223 */
                                                                    single_item  = (((child_items -> __h_data). Cons). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn8225 */
                                                                    __h_match8218_1_arg  = (((child_items -> __h_data). Cons). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) &&  (true  &&  ((__h_match8218_1_arg -> __h_ctor) ==  __h_Nil_t  ) ) ) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* progn8230 */
                                                              ({ /* letn8233 */
                                                                BTree_int_User child_tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = child_tree ;
                                                                // ----------
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* letn8244 */
                                                                    List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                                    List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                    List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                    List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                    // ----------
                                                                    cloneAll_Rc_BTree_int_User (r4 );
                                                                  })));
                                                              });
                                                            }) : ({ /* letn8253 */
                                                              // ----------
                                                              ;
                                                              ({ /* progn8255 */
                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* letn8261 */
                                                      // ----------
                                                      ;
                                                      ({ /* letn8263 */
                                                        bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor) ==  __h_Internal_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn8267 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8278 */
                                                                List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                                List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                                                List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                                                List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                // ----------
                                                                append_List_Rc_BTree_int_User (r2 , r5 );
                                                              })));
                                                          }) : ({ /* letn8289 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn8291 */
                                                              Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8302 */
                                                                  List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                                  List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                                                  List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                  List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                                                  List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                  // ----------
                                                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                                                })));
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn8313 */
                                              Either_BTree_int_User_Error_BTree_int_User passthru  = match8188 ;
                                              // ----------
                                              ;
                                              ({ /* progn8315 */
                                                passthru ;
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* letn8319 */
                                      // ----------
                                      ;
                                      ({ /* progn8321 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn8327 */
                              // ----------
                              ;
                              ({ /* progn8329 */
                                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn8337 */
                      // ----------
                      ;
                      ({ /* letn8339 */
                        bool __h_case_result  = (true  &&  ((match8145 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn8343 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* letn8349 */
                            // ----------
                            ;
                            ({ /* progn8351 */
                              insertInternal (items , children , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn8355 */
              // ----------
              ;
              ({ /* progn8357 */
                ({ /* letn8364 */
                  Maybe_Rc_BTree_int_User match8363  = nth_List_Rc_BTree_int_User (index , children );
                  typeof((((match8363 . __h_data). Just). __h_0_mem)) child ;
                  // ----------
                  ;
                  ({ /* letn8366 */
                    bool __h_case_result  = (true  &&  (((match8363 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8367 */
                          child  = (((match8363 . __h_data). Just). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8372 */
                        ({ /* letn8379 */
                          Maybe_BTree_int_User match8378  = deref_Rc_BTree_int_User (child );
                          typeof((((match8378 . __h_data). Just). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn8381 */
                            bool __h_case_result  = (true  &&  (((match8378 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8382 */
                                  tr  = (((match8378 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8387 */
                                ({ /* letn8394 */
                                  Either_BTree_int_User_Error_BTree_int_User match8393  = insert_BTree_int_User (tr , skey , svalue );
                                  typeof((((match8393 . __h_data). Right). __h_0_mem)) child_tree ;
                                  // ----------
                                  ;
                                  ({ /* letn8396 */
                                    bool __h_case_result  = (true  &&  (((match8393 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8397 */
                                          child_tree  = (((match8393 . __h_data). Right). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn8402 */
                                        ({ /* letn8408 */
                                          typeof((((child_tree -> __h_data). Branch). __h_0_mem)) child_items ;
                                          typeof((((child_tree -> __h_data). Branch). __h_1_mem)) child_children ;
                                          // ----------
                                          ;
                                          ({ /* letn8410 */
                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8411 */
                                                    child_items  = (((child_tree -> __h_data). Branch). __h_0_mem) ;
                                                    true ;
                                                  }) &&  ({ /* progn8413 */
                                                    child_children  = (((child_tree -> __h_data). Branch). __h_1_mem) ;
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn8418 */
                                                ({ /* letn8425 */
                                                  typeof((((child_items -> __h_data). Cons). __h_0_mem)) single_item ;
                                                  typeof((((child_items -> __h_data). Cons). __h_1_mem)) __h_match8423_1_arg ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn8427 */
                                                    bool __h_case_result  = (true  &&  (((child_items -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8428 */
                                                              single_item  = (((child_items -> __h_data). Cons). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn8430 */
                                                              __h_match8423_1_arg  = (((child_items -> __h_data). Cons). __h_1_mem) ;
                                                              true ;
                                                            }) ) &&  (true  &&  ((__h_match8423_1_arg -> __h_ctor) ==  __h_Nil_t  ) ) ) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn8435 */
                                                        ({ /* letn8438 */
                                                          BTree_int_User child_tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = child_tree ;
                                                          // ----------
                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* letn8449 */
                                                              List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                              List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                              List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (child_children , r2 );
                                                              List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r1 , r3 );
                                                              // ----------
                                                              cloneAll_Rc_BTree_int_User (r4 );
                                                            })));
                                                        });
                                                      }) : ({ /* letn8458 */
                                                        // ----------
                                                        ;
                                                        ({ /* progn8460 */
                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn8466 */
                                                // ----------
                                                ;
                                                ({ /* letn8468 */
                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn8472 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8481 */
                                                          List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                          List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                                          List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                          // ----------
                                                          append_List_Rc_BTree_int_User (r2 , r3 );
                                                        })));
                                                    }) : ({ /* letn8490 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn8492 */
                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8501 */
                                                            List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                            List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                                            List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                            // ----------
                                                            append_List_Rc_BTree_int_User (r2 , r3 );
                                                          })));
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn8510 */
                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match8393 ;
                                        // ----------
                                        ;
                                        ({ /* progn8512 */
                                          passthru ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* letn8516 */
                                // ----------
                                ;
                                ({ /* progn8518 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (((BTree_int_User_pair_t){ }), index ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn8525 */
                        // ----------
                        ;
                        ({ /* progn8527 */
                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* letn8533 */
                              List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = wrap_List_BTree_int_User_pair_t (((BTree_int_User_pair_t){ skey , svalue }));
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
    return ({ /* letn8549 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8551 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8552 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8554 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn8556 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8561 */
              ({ /* letn8567 */
                Ordering match8566  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8569 */
                  bool __h_case_result  = (true  &&  ((match8566 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8573 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                    }) : ({ /* letn8581 */
                      // ----------
                      ;
                      ({ /* letn8583 */
                        bool __h_case_result  = (true  &&  ((match8566 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn8587 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* letn8593 */
                            // ----------
                            ;
                            ({ /* progn8595 */
                              insertLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn8599 */
              // ----------
              ;
              ({ /* progn8601 */
                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* letn8607 */
                    List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = wrap_List_BTree_int_User_pair_t (((BTree_int_User_pair_t){ skey , svalue }));
                    // ----------
                    append_List_BTree_int_User_pair_t (items , r1 );
                  })));
              });
            }));
        });
      });
  }
  return ({ /* letn8616 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8618 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8619 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8621 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn8626 */
            ({ /* letn8632 */
              Either_BTree_int_User_Error_BTree_int_User match8631  = insertInternal (items , children , items , 0);
              typeof((((match8631 . __h_data). Right). __h_0_mem)) tr ;
              // ----------
              ;
              ({ /* letn8634 */
                bool __h_case_result  = (true  &&  (((match8631 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8635 */
                      tr  = (((match8631 . __h_data). Right). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn8640 */
                    Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                  }) : ({ /* letn8646 */
                    Either_BTree_int_User_Error_BTree_int_User passthru  = match8631 ;
                    // ----------
                    ;
                    ({ /* progn8648 */
                      passthru ;
                    });
                  }));
              });
            });
          }) : ({ /* letn8652 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8654 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8655 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8657 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn8662 */
                  ({ /* letn8664 */
                    Either_BTree_int_User_Error_BTree_int_User match8631  = insertInternal (items , children , items , 0);
                    typeof((((match8631 . __h_data). Right). __h_0_mem)) tr ;
                    // ----------
                    ;
                    ({ /* letn8666 */
                      bool __h_case_result  = (true  &&  (((match8631 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8667 */
                            tr  = (((match8631 . __h_data). Right). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn8672 */
                          Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                        }) : ({ /* letn8674 */
                          Either_BTree_int_User_Error_BTree_int_User passthru  = match8631 ;
                          // ----------
                          ;
                          ({ /* progn8676 */
                            passthru ;
                          });
                        }));
                    });
                  });
                }) : ({ /* letn8680 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8682 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8683 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8688 */
                        ({ /* letn8694 */
                          Either_BTree_int_User_Error_BTree_int_User match8693  = insertLeaf (items , items , 0);
                          typeof((((match8693 . __h_data). Right). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn8696 */
                            bool __h_case_result  = (true  &&  (((match8693 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8697 */
                                  tr  = (((match8693 . __h_data). Right). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8702 */
                                Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                              }) : ({ /* letn8708 */
                                Either_BTree_int_User_Error_BTree_int_User passthru  = match8693 ;
                                // ----------
                                ;
                                ({ /* progn8710 */
                                  passthru ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn8714 */
                        // ----------
                        ;
                        ({ /* progn8716 */
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
  { /* let8724 */
    BTree_int_User this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_int_User children ) {
      { /* let8730 */
        typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((children -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8732 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn8733 */
                  head  = (((children -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn8735 */
                  tail  = (((children -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          if (__h_case_result )
            { /* block8742 */
              { /* block8744 */
                free_Rc_BTree_int_User ((&head ));
                freeChildren (tail );
              }
            }
        });
      }
    }
    { /* let8749 */
      typeof((((this -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((this -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8751 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8752 */
                items  = (((this -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8754 */
                children  = (((this -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block8761 */
            { /* block8763 */
              free_List_BTree_int_User_pair_t ((&items ));
              freeChildren (children );
              free_List_Rc_BTree_int_User ((&children ));
              free (this );
            }
          }
        else
          { /* let8774 */
            typeof((((this -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((this -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8776 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8777 */
                      items  = (((this -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8779 */
                      children  = (((this -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              if (__h_case_result )
                { /* block8786 */
                  { /* block8788 */
                    free_List_BTree_int_User_pair_t ((&items ));
                    freeChildren (children );
                    free_List_Rc_BTree_int_User ((&children ));
                    free (this );
                  }
                }
              else
                { /* let8795 */
                  typeof((((this -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8797 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8798 */
                          items  = (((this -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* block8805 */
                        { /* block8807 */
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
__attribute__((weak)) void free_BTree_int_User_pointer (BTree_int_User ** this_ptr ) {
  if (this_ptr )
    { /* block8817 */
      free_BTree_int_User ((*this_ptr ));
    }
}
BTree_int_User__H_Table * const get_BTree_int_User__H_Table () {
  static BTree_int_User__H_Table table  = { free_BTree_int_User , pure_BTree_int_User , show_BTree_int_User , traverse_BTree_int_User , max_BTree_int_User , min_BTree_int_User , delete_BTree_int_User , search_BTree_int_User , insert_BTree_int_User , order_BTree_int_User };
  return (&table );
}
BTree_int_User Branch_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* let8827 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* let8833 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items ) {
  { /* let8839 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Leaf_t , .__h_data._ = { items }});
    return instance ;
  }
}
#endif /* __BTree_int_User__H_IMPL__ */ 
BTree_int_User ins (BTree_int_User tree , int key , int salary , int grade ) {
  ({ /* letn8849 */
    Either_BTree_int_User_Error_BTree_int_User match8848  = insert_BTree_int_User (tree , key , ((User){ salary , grade }));
    typeof((((match8848 . __h_data). Right). __h_0_mem)) ntr ;
    // ----------
    ;
    ({ /* letn8851 */
      bool __h_case_result  = (true  &&  (((match8848 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8852 */
            ntr  = (((match8848 . __h_data). Right). __h_0_mem) ;
            true ;
          }) ) );
      // ----------
      
      ((__h_case_result ) ? ({ /* progn8857 */
          return ntr ;
        }) : ({ /* letn8861 */
          // ----------
          ;
          ({ /* progn8863 */
            { /* block8865 */
              bad  = (bad  +  1 );
              return Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
            }
          });
        }));
    });
  });
}
BTree_int_User del (BTree_int_User tree , int key ) {
  ({ /* letn8875 */
    Either_BTree_int_User_Error_BTree_int_User match8874  = delete_BTree_int_User (tree , key , NULL );
    typeof((((match8874 . __h_data). Right). __h_0_mem)) ntr ;
    // ----------
    ;
    ({ /* letn8877 */
      bool __h_case_result  = (true  &&  (((match8874 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8878 */
            ntr  = (((match8874 . __h_data). Right). __h_0_mem) ;
            true ;
          }) ) );
      // ----------
      
      ((__h_case_result ) ? ({ /* progn8883 */
          return ntr ;
        }) : ({ /* letn8887 */
          // ----------
          ;
          ({ /* progn8889 */
            { /* block8891 */
              bad  = (bad  +  1 );
              return Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
            }
          });
        }));
    });
  });
}
long salaryOf (BTree_int_User tree , int key ) {
  return ({ /* letn8903 */
      Maybe_BTree_int_User_pair_t match8900  = search_BTree_int_User (tree , key );
      typeof((((match8900 . __h_data). Just). __h_0_mem)) __h_match8900_0_arg ;
      typeof((__h_match8900_0_arg . __h_1_mem)) __h_match8901_1_arg ;
      typeof((__h_match8901_1_arg . __h_0_mem)) salary ;
      // ----------
      ;
      ({ /* letn8905 */
        bool __h_case_result  = (true  &&  (((match8900 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn8906 */
                __h_match8900_0_arg  = (((match8900 . __h_data). Just). __h_0_mem) ;
                true ;
              }) &&  (true  &&  (({ /* progn8908 */
                    __h_match8901_1_arg  = (__h_match8900_0_arg . __h_1_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8910 */
                      salary  = (__h_match8901_1_arg . __h_0_mem) ;
                      true ;
                    }) ) ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn8915 */
            ((long)salary );
          }) : ({ /* letn8919 */
            // ----------
            ;
            ({ /* progn8921 */
              -1;
            });
          }));
      });
    });
}
void __ciciliL_8925 (BTree_int_User_pair_t item , Bool hasNext ) {
  { /* let8931 */
    typeof((item . __h_1_mem)) __h_match8929_1_arg ;
    typeof((__h_match8929_1_arg . __h_0_mem)) salary ;
    // ----------
    ;
    ({ /* letn8933 */
      bool __h_case_result  = (true  &&  (({ /* progn8934 */
            __h_match8929_1_arg  = (item . __h_1_mem) ;
            true ;
          }) &&  (true  &&  ({ /* progn8936 */
              salary  = (__h_match8929_1_arg . __h_0_mem) ;
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* block8943 */
          { /* block8945 */
            seen  = (seen  +  1 );
            total  = (total  +  salary  );
          }
        }
    });
  }
}
long countAll (BTree_int_User tree ) {
  seen  = 0;
  total  = 0;
  traverse_BTree_int_User (tree , __ciciliL_8925 );
  return seen ;
}
int main () {
  ({ /* letn8951 */
    BTree_int_User t0  __attribute__((__cleanup__(free_BTree_int_User ))) = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
    // ----------
    bad  += check ("an empty tree has no minimum", ({ /* letn8960 */
          Maybe_BTree_int_User_pair_t match8959  = min_BTree_int_User (t0 );
          // ----------
          ;
          ({ /* letn8962 */
            bool __h_case_result  = (true  &&  ((match8959 . __h_ctor) ==  __h_Just_t  ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* progn8966 */
                1;
              }) : ({ /* letn8970 */
                // ----------
                ;
                ({ /* progn8972 */
                  0;
                });
              }));
          });
        }), 0) ;
    bad  += check ("an empty tree traverses to nothing", countAll (t0 ), 0) ;
    ({ /* letn8975 */
      BTree_int_User t1  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t0 , 30, 3000, 1);
      // ----------
      ({ /* letn8979 */
        BTree_int_User t2  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t1 , 20, 2000, 1);
        // ----------
        ({ /* letn8983 */
          BTree_int_User t3  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t2 , 40, 4000, 2);
          // ----------
          ({ /* letn8987 */
            BTree_int_User t4  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t3 , 18, 1800, 2);
            // ----------
            ({ /* letn8991 */
              BTree_int_User t5  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t4 , 28, 2800, 3);
              // ----------
              ({ /* letn8995 */
                BTree_int_User t6  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t5 , 50, 5000, 3);
                // ----------
                ({ /* letn8999 */
                  BTree_int_User t7  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t6 , 10, 1000, 1);
                  // ----------
                  ({ /* letn9003 */
                    BTree_int_User t8  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t7 , 42, 4200, 2);
                    // ----------
                    ({ /* letn9007 */
                      BTree_int_User t9  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t8 , 52, 5200, 3);
                      // ----------
                      ({ /* letn9011 */
                        BTree_int_User ta  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t9 , 8, 800, 1);
                        // ----------
                        bad  += check ("ten keys traverse in order", countAll (ta ), 10) ;
                        bad  += check ("and their salaries add up", total , 29800) ;
                        bad  += check ("search finds the root key", salaryOf (ta , 30), 3000) ;
                        bad  += check ("search finds a leaf key", salaryOf (ta , 8), 800) ;
                        bad  += check ("search finds the last key", salaryOf (ta , 52), 5200) ;
                        bad  += check ("search misses what is absent", salaryOf (ta , 99), -1) ;
                        bad  += check ("the minimum is the smallest key", ({ /* letn9020 */
                              Maybe_BTree_int_User_pair_t match9018  = min_BTree_int_User (ta );
                              typeof((((match9018 . __h_data). Just). __h_0_mem)) __h_match9018_0_arg ;
                              typeof((__h_match9018_0_arg . __h_0_mem)) key ;
                              // ----------
                              ;
                              ({ /* letn9022 */
                                bool __h_case_result  = (true  &&  (((match9018 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn9023 */
                                        __h_match9018_0_arg  = (((match9018 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) &&  (true  &&  ({ /* progn9025 */
                                          key  = (__h_match9018_0_arg . __h_0_mem) ;
                                          true ;
                                        }) ) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn9030 */
                                    ((long)key );
                                  }) : ({ /* letn9034 */
                                    // ----------
                                    ;
                                    ({ /* progn9036 */
                                      -1;
                                    });
                                  }));
                              });
                            }), 8) ;
                        bad  += check ("the maximum is the largest key", ({ /* letn9044 */
                              Maybe_BTree_int_User_pair_t match9042  = max_BTree_int_User (ta );
                              typeof((((match9042 . __h_data). Just). __h_0_mem)) __h_match9042_0_arg ;
                              typeof((__h_match9042_0_arg . __h_0_mem)) key ;
                              // ----------
                              ;
                              ({ /* letn9046 */
                                bool __h_case_result  = (true  &&  (((match9042 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn9047 */
                                        __h_match9042_0_arg  = (((match9042 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) &&  (true  &&  ({ /* progn9049 */
                                          key  = (__h_match9042_0_arg . __h_0_mem) ;
                                          true ;
                                        }) ) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn9054 */
                                    ((long)key );
                                  }) : ({ /* letn9058 */
                                    // ----------
                                    ;
                                    ({ /* progn9060 */
                                      -1;
                                    });
                                  }));
                              });
                            }), 52) ;
                        ({ /* letn9063 */
                          BTree_int_User d1  __attribute__((__cleanup__(free_BTree_int_User ))) = del (ta , 30);
                          // ----------
                          ({ /* letn9067 */
                            BTree_int_User d2  __attribute__((__cleanup__(free_BTree_int_User ))) = del (d1 , 8);
                            // ----------
                            ({ /* letn9071 */
                              BTree_int_User d3  __attribute__((__cleanup__(free_BTree_int_User ))) = del (d2 , 52);
                              // ----------
                              bad  += check ("three deletions leave seven", countAll (d3 ), 7) ;
                              bad  += check ("and the deleted key is gone", salaryOf (d3 , 30), -1) ;
                              bad  += check ("while its neighbour is not", salaryOf (d3 , 28), 2800) ;
                              bad  += check ("the minimum moved up", ({ /* letn9080 */
                                    Maybe_BTree_int_User_pair_t match9078  = min_BTree_int_User (d3 );
                                    typeof((((match9078 . __h_data). Just). __h_0_mem)) __h_match9078_0_arg ;
                                    typeof((__h_match9078_0_arg . __h_0_mem)) key ;
                                    // ----------
                                    ;
                                    ({ /* letn9082 */
                                      bool __h_case_result  = (true  &&  (((match9078 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn9083 */
                                              __h_match9078_0_arg  = (((match9078 . __h_data). Just). __h_0_mem) ;
                                              true ;
                                            }) &&  (true  &&  ({ /* progn9085 */
                                                key  = (__h_match9078_0_arg . __h_0_mem) ;
                                                true ;
                                              }) ) ) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn9090 */
                                          ((long)key );
                                        }) : ({ /* letn9094 */
                                          // ----------
                                          ;
                                          ({ /* progn9096 */
                                            -1;
                                          });
                                        }));
                                    });
                                  }), 10) ;
                            });
                          });
                        });
                      });
                    });
                  });
                });
              });
            });
          });
        });
      });
    });
  });
  if (bad  ==  0 )
    printf ("btree-persistent: all ok\n");
  else
    printf ("btree-persistent: %d FAILED\n", bad );
  return bad ;
}
