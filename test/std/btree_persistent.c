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
typedef Rc_BTree_int_User (*Rc_BTree_int_User_to_Rc_BTree_int_User_t) (Rc_BTree_int_User value );
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
  union { /* ciciliUnion839 */
    struct { /* ciciliStruct840 */
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
  union { /* ciciliUnion903 */
    struct { /* ciciliStruct904 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Branch , _2 ;
    struct { /* ciciliStruct905 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Internal , _1 ;
    struct { /* ciciliStruct906 */
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
  { /* let971 */
    // ----------
    ;
    ({ /* letn973 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      
      if (__h_case_result )
        { /* block979 */
          printf ("invalid B-Tree object");
        }
      else
        { /* let984 */
          typeof((((error . __h_data). ERR_INVALID_ORDER). __h_0_mem)) order ;
          // ----------
          ;
          ({ /* letn986 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* progn987 */
                  order  = (((error . __h_data). ERR_INVALID_ORDER). __h_0_mem) ;
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* block994 */
                printf ("invalid B-Tree order: %zu", order );
              }
            else
              { /* let999 */
                typeof((((error . __h_data). ERR_UNIQUE_KEY). __h_0_mem)) item ;
                // ----------
                ;
                ({ /* letn1001 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* progn1002 */
                        item  = (((error . __h_data). ERR_UNIQUE_KEY). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* block1009 */
                      { /* block1011 */
                        printf ("unique key: ");
                        ({ /* letn1021 */
                          typeof((item . __h_0_mem)) id ;
                          typeof((item . __h_1_mem)) __h_match1019_1_arg ;
                          typeof((__h_match1019_1_arg . __h_0_mem)) salary ;
                          typeof((__h_match1019_1_arg . __h_1_mem)) grade ;
                          // ----------
                          ;
                          ({ /* letn1023 */
                            bool __h_case_result  = (true  &&  ((({ /* progn1024 */
                                    id  = (item . __h_0_mem) ;
                                    true ;
                                  }) &&  ({ /* progn1026 */
                                    __h_match1019_1_arg  = (item . __h_1_mem) ;
                                    true ;
                                  }) ) &&  (true  &&  (({ /* progn1028 */
                                      salary  = (__h_match1019_1_arg . __h_0_mem) ;
                                      true ;
                                    }) &&  ({ /* progn1030 */
                                      grade  = (__h_match1019_1_arg . __h_1_mem) ;
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn1035 */
                                fprintf (stdout , "(id: %d, salary: %d, grade: %d)", id , salary , grade );
                              }) : ({ /* letn1039 */
                                // ----------
                                ;
                                ({ /* progn1041 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* let1046 */
                      typeof((((error . __h_data). ERR_NOT_FOUND). __h_0_mem)) key ;
                      // ----------
                      ;
                      ({ /* letn1048 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* progn1049 */
                              key  = (((error . __h_data). ERR_NOT_FOUND). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* block1056 */
                            { /* block1058 */
                              printf ("key not found: ");
                              fprintf (stdout , "%d", key );
                            }
                          }
                        else
                          { /* let1066 */
                            typeof((((error . __h_data). ERR_ACCESS_DEAD_CHILD). __h_0_mem)) item ;
                            typeof((((error . __h_data). ERR_ACCESS_DEAD_CHILD). __h_1_mem)) index ;
                            // ----------
                            ;
                            ({ /* letn1068 */
                              bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* progn1069 */
                                      item  = (((error . __h_data). ERR_ACCESS_DEAD_CHILD). __h_0_mem) ;
                                      true ;
                                    }) &&  ({ /* progn1071 */
                                      index  = (((error . __h_data). ERR_ACCESS_DEAD_CHILD). __h_1_mem) ;
                                      true ;
                                    }) ) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* block1078 */
                                  { /* block1080 */
                                    printf ("dead child at index: %zu of item: ", index );
                                    ({ /* letn1090 */
                                      typeof((item . __h_0_mem)) id ;
                                      typeof((item . __h_1_mem)) __h_match1088_1_arg ;
                                      typeof((__h_match1088_1_arg . __h_0_mem)) salary ;
                                      typeof((__h_match1088_1_arg . __h_1_mem)) grade ;
                                      // ----------
                                      ;
                                      ({ /* letn1092 */
                                        bool __h_case_result  = (true  &&  ((({ /* progn1093 */
                                                id  = (item . __h_0_mem) ;
                                                true ;
                                              }) &&  ({ /* progn1095 */
                                                __h_match1088_1_arg  = (item . __h_1_mem) ;
                                                true ;
                                              }) ) &&  (true  &&  (({ /* progn1097 */
                                                  salary  = (__h_match1088_1_arg . __h_0_mem) ;
                                                  true ;
                                                }) &&  ({ /* progn1099 */
                                                  grade  = (__h_match1088_1_arg . __h_1_mem) ;
                                                  true ;
                                                }) ) ) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* progn1104 */
                                            fprintf (stdout , "(id: %d, salary: %d, grade: %d)", id , salary , grade );
                                          }) : ({ /* letn1108 */
                                            // ----------
                                            ;
                                            ({ /* progn1110 */
                                              0;
                                            });
                                          }));
                                      });
                                    });
                                  }
                                }
                              else
                                { /* let1115 */
                                  typeof((((error . __h_data). ERR_INVALID_BRANCH). __h_0_mem)) branch ;
                                  // ----------
                                  ;
                                  ({ /* letn1117 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* progn1118 */
                                          branch  = (((error . __h_data). ERR_INVALID_BRANCH). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block1125 */
                                        { /* block1127 */
                                          printf ("invalid branch: ");
                                          show_BTree_int_User (stdout , branch );
                                        }
                                      }
                                    else
                                      { /* let1133 */
                                        typeof((((error . __h_data). ERR_CANT_BORROW). __h_0_mem)) reason ;
                                        // ----------
                                        ;
                                        ({ /* letn1135 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* progn1136 */
                                                reason  = (((error . __h_data). ERR_CANT_BORROW). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* block1143 */
                                              printf ("borrow error: %s", reason );
                                            }
                                          else
                                            { /* let1148 */
                                              // ----------
                                              ;
                                              { /* block1150 */
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
    { /* block1159 */
      free_BTree_int_User_Error ((*this ));
    }
}
const BTree_int_User_Error__H_Table * const get_BTree_int_User_Error__H_Table () {
  static const BTree_int_User_Error__H_Table table  = { free_BTree_int_User_Error , show_BTree_int_User_Error };
  return (&table );
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_OBJECT () {
  { /* let1169 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (size_t order ) {
  { /* let1174 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item ) {
  { /* let1179 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key ) {
  { /* let1184 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , size_t index ) {
  { /* let1189 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch ) {
  { /* let1194 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason ) {
  { /* let1199 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_CANT_BORROW_t , .__h_data._ = { reason }});
    // ----------
    return instance ;
  }
}
#endif /* __BTree_int_User_Error__H_IMPL__ */ 
#ifndef __Bool__H_IMPL__
#define __Bool__H_IMPL__
int show_Bool (FILE * file , Bool value ) {
  return ({ /* letn1210 */
      // ----------
      ;
      ({ /* letn1212 */
        bool __h_case_result  = (true  &&  ((value . __h_ctor) ==  __h_False_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1216 */
            fprintf (file , "%s", "False");
          }) : ({ /* letn1220 */
            // ----------
            ;
            ({ /* progn1222 */
              fprintf (file , "%s", "True");
            });
          }));
      });
    });
}
Bool or_Bool (Bool lhs , Bool rhs ) {
  return ({ /* letn1230 */
      // ----------
      ;
      ({ /* letn1232 */
        bool __h_case_result  = (true  &&  ((lhs . __h_ctor) ==  __h_True_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1236 */
            True ();
          }) : ({ /* letn1240 */
            // ----------
            ;
            ({ /* progn1242 */
              ({ /* letn1248 */
                // ----------
                ;
                ({ /* letn1250 */
                  bool __h_case_result  = (true  &&  ((rhs . __h_ctor) ==  __h_True_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1254 */
                      True ();
                    }) : ({ /* letn1258 */
                      // ----------
                      ;
                      ({ /* progn1260 */
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
  return ({ /* letn1268 */
      // ----------
      ;
      ({ /* letn1270 */
        bool __h_case_result  = (true  &&  ((lhs . __h_ctor) ==  __h_False_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1274 */
            False ();
          }) : ({ /* letn1278 */
            // ----------
            ;
            ({ /* progn1280 */
              ({ /* letn1286 */
                // ----------
                ;
                ({ /* letn1288 */
                  bool __h_case_result  = (true  &&  ((rhs . __h_ctor) ==  __h_False_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1292 */
                      False ();
                    }) : ({ /* letn1296 */
                      // ----------
                      ;
                      ({ /* progn1298 */
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
    { /* block1307 */
      free_Bool ((*this ));
    }
}
const Bool__H_Table * const get_Bool__H_Table () {
  static const Bool__H_Table table  = { free_Bool , show_Bool , or_Bool , and_Bool };
  return (&table );
}
Bool True () {
  { /* let1316 */
    Bool instance  = ((Bool){ get_Bool__H_Table (), __h_True_t });
    // ----------
    return instance ;
  }
}
Bool False () {
  { /* let1320 */
    Bool instance  = ((Bool){ get_Bool__H_Table (), __h_False_t });
    // ----------
    return instance ;
  }
}
#endif /* __Bool__H_IMPL__ */ 
#ifndef __Ordering__H_IMPL__
#define __Ordering__H_IMPL__
int show_Ordering (FILE * file , Ordering value ) {
  return ({ /* letn1331 */
      // ----------
      ;
      ({ /* letn1333 */
        bool __h_case_result  = (true  &&  ((value . __h_ctor) ==  __h_LT_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1337 */
            fprintf (file , "%s", "LT");
          }) : ({ /* letn1341 */
            // ----------
            ;
            ({ /* letn1343 */
              bool __h_case_result  = (true  &&  ((value . __h_ctor) ==  __h_EQ_t  ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn1347 */
                  fprintf (file , "%s", "EQ");
                }) : ({ /* letn1351 */
                  // ----------
                  ;
                  ({ /* progn1353 */
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
    { /* block1362 */
      free_Ordering ((*this ));
    }
}
const Ordering__H_Table * const get_Ordering__H_Table () {
  static const Ordering__H_Table table  = { free_Ordering , show_Ordering };
  return (&table );
}
Ordering LT () {
  { /* let1371 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_LT_t });
    // ----------
    return instance ;
  }
}
Ordering EQ () {
  { /* let1375 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_EQ_t });
    // ----------
    return instance ;
  }
}
Ordering GT () {
  { /* let1379 */
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
    { /* block1393 */
      free_Either_BTree_int_User_Error_BTree_int_User ((*this ));
    }
}
const Either_BTree_int_User_Error_BTree_int_User__H_Table * const get_Either_BTree_int_User_Error_BTree_int_User__H_Table () {
  static const Either_BTree_int_User_Error_BTree_int_User__H_Table table  = { free_Either_BTree_int_User_Error_BTree_int_User };
  return (&table );
}
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value ) {
  { /* let1403 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* let1408 */
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
    { /* block1422 */
      free_Maybe_BTree_int_User ((*this ));
    }
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table () {
  static const Maybe_BTree_int_User__H_Table table  = { free_Maybe_BTree_int_User };
  return (&table );
}
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value ) {
  { /* let1432 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* let1437 */
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
    { /* block1451 */
      free_Maybe_BTree_int_User_pair_t ((*this ));
    }
}
const Maybe_BTree_int_User_pair_t__H_Table * const get_Maybe_BTree_int_User_pair_t__H_Table () {
  static const Maybe_BTree_int_User_pair_t__H_Table table  = { free_Maybe_BTree_int_User_pair_t };
  return (&table );
}
Maybe_BTree_int_User_pair_t Just_BTree_int_User_pair_t (BTree_int_User_pair_t value ) {
  { /* let1461 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
  { /* let1466 */
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
    { /* block1482 */
      free_Maybe_BTree_int_User_pair_t ((*this ));
    }
}
const Maybe_BTree_int_User_pair_t__H_Table * const get_Maybe_BTree_int_User_pair_t__H_Table () {
  static const Maybe_BTree_int_User_pair_t__H_Table table  = { free_Maybe_BTree_int_User_pair_t };
  return (&table );
}
Maybe_BTree_int_User_pair_t Just_BTree_int_User_pair_t (BTree_int_User_pair_t value ) {
  { /* let1492 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
  { /* let1497 */
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
    return ({ /* letn1509 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn1511 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1512 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1514 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn1519 */
              ({ /* letn1521 */
                BTree_int_User_pair_t * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* letn1525 */
              // ----------
              ;
              ({ /* progn1527 */
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
  return (((buf  ==  NULL  )) ? Nil_BTree_int_User_pair_t () : ({ /* letn1538 */
        BTree_int_User_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_BTree_int_User_pair_t () : Cons_BTree_int_User_pair_t (item , pure_List_BTree_int_User_pair_t ((++buf ), (--len ))));
      }));
}
size_t show_List_BTree_int_User_pair_t (FILE * file , List_BTree_int_User_pair_t list ) {
  return ({ /* letn1550 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1552 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1553 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1555 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1560 */
            (({ /* letn1566 */
                // ----------
                ;
                ({ /* letn1568 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1572 */
                      (({ /* letn1582 */
                          typeof((head . __h_0_mem)) id ;
                          typeof((head . __h_1_mem)) __h_match1580_1_arg ;
                          typeof((__h_match1580_1_arg . __h_0_mem)) salary ;
                          typeof((__h_match1580_1_arg . __h_1_mem)) grade ;
                          // ----------
                          ;
                          ({ /* letn1584 */
                            bool __h_case_result  = (true  &&  ((({ /* progn1585 */
                                    id  = (head . __h_0_mem) ;
                                    true ;
                                  }) &&  ({ /* progn1587 */
                                    __h_match1580_1_arg  = (head . __h_1_mem) ;
                                    true ;
                                  }) ) &&  (true  &&  (({ /* progn1589 */
                                      salary  = (__h_match1580_1_arg . __h_0_mem) ;
                                      true ;
                                    }) &&  ({ /* progn1591 */
                                      grade  = (__h_match1580_1_arg . __h_1_mem) ;
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn1596 */
                                fprintf (file , "(id: %d, salary: %d, grade: %d)", id , salary , grade );
                              }) : ({ /* letn1600 */
                                // ----------
                                ;
                                ({ /* progn1602 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* letn1606 */
                      // ----------
                      ;
                      ({ /* progn1608 */
                        ({ /* letn1618 */
                          typeof((head . __h_0_mem)) id ;
                          typeof((head . __h_1_mem)) __h_match1616_1_arg ;
                          typeof((__h_match1616_1_arg . __h_0_mem)) salary ;
                          typeof((__h_match1616_1_arg . __h_1_mem)) grade ;
                          // ----------
                          ;
                          ({ /* letn1620 */
                            bool __h_case_result  = (true  &&  ((({ /* progn1621 */
                                    id  = (head . __h_0_mem) ;
                                    true ;
                                  }) &&  ({ /* progn1623 */
                                    __h_match1616_1_arg  = (head . __h_1_mem) ;
                                    true ;
                                  }) ) &&  (true  &&  (({ /* progn1625 */
                                      salary  = (__h_match1616_1_arg . __h_0_mem) ;
                                      true ;
                                    }) &&  ({ /* progn1627 */
                                      grade  = (__h_match1616_1_arg . __h_1_mem) ;
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn1632 */
                                fprintf (file , "(id: %d, salary: %d, grade: %d)", id , salary , grade );
                              }) : ({ /* letn1636 */
                                // ----------
                                ;
                                ({ /* progn1638 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_BTree_int_User_pair_t (file , tail ) );
          }) : ({ /* letn1643 */
            // ----------
            ;
            ({ /* progn1645 */
              0;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn1653 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1655 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1656 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1658 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1663 */
            Cons_BTree_int_User_pair_t (head , copy_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* letn1669 */
            // ----------
            ;
            ({ /* progn1671 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index ) {
  return ({ /* letn1680 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1682 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1683 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1685 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1690 */
            Cons_BTree_int_User_pair_t (head , replaceAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* letn1696 */
            // ----------
            ;
            ({ /* progn1698 */
              ({ /* letn1704 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn1706 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1707 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1712 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* letn1718 */
                      // ----------
                      ;
                      ({ /* progn1720 */
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
  return ({ /* letn1729 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1731 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1732 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1734 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1739 */
            Cons_BTree_int_User_pair_t (head , deleteAt_List_BTree_int_User_pair_t (tail , (index  -  1 )));
          }) : ({ /* letn1745 */
            // ----------
            ;
            ({ /* progn1747 */
              ({ /* letn1753 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn1755 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1756 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1761 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* letn1766 */
                      // ----------
                      ;
                      ({ /* progn1768 */
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
  return ({ /* letn1777 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1779 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1780 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1782 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1787 */
            Cons_BTree_int_User_pair_t (head , insertAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* letn1793 */
            // ----------
            ;
            ({ /* progn1795 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (list ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed ) {
  return ({ /* letn1805 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1807 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1808 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1810 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1815 */
            Cons_BTree_int_User_pair_t (head , replace_List_BTree_int_User_pair_t (tail , item , aimed ));
          }) : ({ /* letn1821 */
            // ----------
            ;
            ({ /* progn1823 */
              ({ /* letn1829 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn1831 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1832 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1837 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* letn1843 */
                      // ----------
                      ;
                      ({ /* progn1845 */
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
  return ({ /* letn1854 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1856 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1857 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1859 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1864 */
            Cons_BTree_int_User_pair_t (head , delete_List_BTree_int_User_pair_t (tail , aimed ));
          }) : ({ /* letn1870 */
            // ----------
            ;
            ({ /* progn1872 */
              ({ /* letn1878 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn1880 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1881 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1886 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* letn1891 */
                      // ----------
                      ;
                      ({ /* progn1893 */
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
  return ({ /* letn1902 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1904 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1905 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1907 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1912 */
            Cons_BTree_int_User_pair_t (head , insert_List_BTree_int_User_pair_t (tail , item , rlist ));
          }) : ({ /* letn1918 */
            // ----------
            ;
            ({ /* progn1920 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  List_BTree_int_User_pair_t _reverse (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t rlist ) {
    return ({ /* letn1931 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn1933 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1934 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1936 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn1941 */
              _reverse (tail , Cons_BTree_int_User_pair_t (head , rlist ));
            }) : ({ /* letn1946 */
              // ----------
              ;
              ({ /* progn1948 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* letn1954 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1956 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1957 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1959 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1964 */
            _reverse (tail , Cons_BTree_int_User_pair_t (head , Nil_BTree_int_User_pair_t ()));
          }) : ({ /* letn1970 */
            // ----------
            ;
            ({ /* progn1972 */
              list ;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist ) {
  return ({ /* letn1980 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1982 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1983 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1985 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1990 */
            Cons_BTree_int_User_pair_t (head , append_List_BTree_int_User_pair_t (tail , rlist ));
          }) : ({ /* letn1996 */
            // ----------
            ;
            ({ /* progn1998 */
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
  return (((len  <=  0 )) ? Nil_BTree_int_User_pair_t () : ({ /* letn2013 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn2015 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2016 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2018 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn2023 */
              Cons_BTree_int_User_pair_t (head , take_List_BTree_int_User_pair_t ((--len ), tail ));
            }) : ({ /* letn2029 */
              // ----------
              ;
              ({ /* progn2031 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn2040 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2042 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2043 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2048 */
            ({ /* letn2054 */
              // ----------
              ;
              ({ /* letn2056 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn2060 */
                    copy_List_BTree_int_User_pair_t (list );
                  }) : ({ /* letn2065 */
                    // ----------
                    ;
                    ({ /* progn2067 */
                      last_List_BTree_int_User_pair_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn2072 */
            // ----------
            ;
            ({ /* progn2074 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn2084 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2086 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2087 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2089 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2094 */
            Cons_BTree_int_User_pair_t (head , init_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* letn2100 */
            // ----------
            ;
            ({ /* progn2102 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
size_t hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t desired ) {
  return ({ /* letn2111 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2113 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2114 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2119 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_int_User_pair_t (tail , (--desired )) ));
          }) : ({ /* letn2125 */
            // ----------
            ;
            ({ /* progn2127 */
              0;
            });
          }));
      });
    });
}
size_t len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn2135 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2137 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2138 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2143 */
            (1 +  len_List_BTree_int_User_pair_t (tail ) );
          }) : ({ /* letn2148 */
            // ----------
            ;
            ({ /* progn2150 */
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
  return (((len  <=  0 )) ? copy_List_BTree_int_User_pair_t (list ) : ({ /* letn2163 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn2165 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2166 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn2171 */
              drop_List_BTree_int_User_pair_t ((--len ), tail );
            }) : ({ /* letn2176 */
              // ----------
              ;
              ({ /* progn2178 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn2188 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn2190 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2191 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2196 */
            Just_BTree_int_User_pair_t (head );
          }) : ({ /* letn2201 */
            // ----------
            ;
            ({ /* progn2203 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list ) {
  return ({ /* letn2212 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2214 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2215 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2220 */
            nthcdr_List_BTree_int_User_pair_t ((--index ), tail );
          }) : ({ /* letn2225 */
            // ----------
            ;
            ({ /* progn2227 */
              list ;
            });
          }));
      });
    });
}
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list ) {
  return ({ /* letn2236 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2238 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2239 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2241 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2246 */
            (((index  ==  0 )) ? Just_BTree_int_User_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_int_User_pair_t () : nth_List_BTree_int_User_pair_t ((--index ), tail )));
          }) : ({ /* letn2255 */
            // ----------
            ;
            ({ /* progn2257 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
void free_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t * this_ptr ) {
  { /* let2262 */
    List_BTree_int_User_pair_t this  = (*this_ptr );
    // ----------
    { /* let2266 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2268 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2269 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block2276 */
            { /* block2278 */
              free (this );
              free_List_BTree_int_User_pair_t ((&tail ));
            }
          }
        else
          { /* let2286 */
            // ----------
            ;
            ({ /* letn2288 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block2294 */
                  { /* block2296 */
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
    { /* block2305 */
      free_List_BTree_int_User_pair_t ((*this_ptr ));
    }
}
List_BTree_int_User_pair_t__H_Table * const get_List_BTree_int_User_pair_t__H_Table () {
  static List_BTree_int_User_pair_t__H_Table table  = { free_List_BTree_int_User_pair_t , toArray_List_BTree_int_User_pair_t , wrap_List_BTree_int_User_pair_t , pure_List_BTree_int_User_pair_t , show_List_BTree_int_User_pair_t , copy_List_BTree_int_User_pair_t , replaceAt_List_BTree_int_User_pair_t , deleteAt_List_BTree_int_User_pair_t , insertAt_List_BTree_int_User_pair_t , replace_List_BTree_int_User_pair_t , delete_List_BTree_int_User_pair_t , insert_List_BTree_int_User_pair_t , reverse_List_BTree_int_User_pair_t , append_List_BTree_int_User_pair_t , push_List_BTree_int_User_pair_t , take_List_BTree_int_User_pair_t , last_List_BTree_int_User_pair_t , init_List_BTree_int_User_pair_t , hasLen_List_BTree_int_User_pair_t , len_List_BTree_int_User_pair_t , tail_List_BTree_int_User_pair_t , drop_List_BTree_int_User_pair_t , head_List_BTree_int_User_pair_t , nthcdr_List_BTree_int_User_pair_t , nth_List_BTree_int_User_pair_t };
  return (&table );
}
List_BTree_int_User_pair_t Cons_BTree_int_User_pair_t (BTree_int_User_pair_t head , List_BTree_int_User_pair_t tail ) {
  { /* let2315 */
    List_BTree_int_User_pair_t instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_BTree_int_User_pair_t Nil_BTree_int_User_pair_t () {
  { /* let2321 */
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
    { /* block2336 */
      free_Maybe_List_BTree_int_User_pair_t ((*this ));
    }
}
const Maybe_List_BTree_int_User_pair_t__H_Table * const get_Maybe_List_BTree_int_User_pair_t__H_Table () {
  static const Maybe_List_BTree_int_User_pair_t__H_Table table  = { free_Maybe_List_BTree_int_User_pair_t };
  return (&table );
}
Maybe_List_BTree_int_User_pair_t Just_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t value ) {
  { /* let2346 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t () {
  { /* let2351 */
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
    { /* block2365 */
      free_Maybe_List_BTree_int_User_pair_t ((*this ));
    }
}
const Maybe_List_BTree_int_User_pair_t__H_Table * const get_Maybe_List_BTree_int_User_pair_t__H_Table () {
  static const Maybe_List_BTree_int_User_pair_t__H_Table table  = { free_Maybe_List_BTree_int_User_pair_t };
  return (&table );
}
Maybe_List_BTree_int_User_pair_t Just_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t value ) {
  { /* let2375 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t () {
  { /* let2380 */
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
    { /* block2415 */
      if ((*(rc -> count)) ==  1 )
        { /* block2421 */
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
    { /* block2436 */
      (++(*(rc -> count)));
      return ((rc_BTree_int_User){ (rc -> ptr), (rc -> count)});
    }
  return ((rc_BTree_int_User){ NULL , NULL });
}
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User obj ) {
  return ({ /* letn2444 */
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
    { /* block2452 */
      return NULL ;
    }
  (++(*(box -> count)));
  return ({ /* letn2454 */
      Rc_BTree_int_User fresh  = malloc (sizeof(rc_BTree_int_User ));
      // ----------
      (fresh -> ptr) = (box -> ptr);
      (fresh -> count) = (box -> count);
      fresh ;
    });
}
__attribute__((weak)) Maybe_ref_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User box ) {
  if (box  ==  NULL  )
    { /* block2463 */
      return ((Maybe_ref_BTree_int_User){ .ctor = NOTHING_CTOR });
    }
  return get_rc_BTree_int_User (box );
}
void free_Rc_BTree_int_User_value (Rc_BTree_int_User box ) {
  if (box )
    { /* block2472 */
      free_rc_BTree_int_User (box );
      free (box );
    }
}
__attribute__((weak)) void free_Rc_BTree_int_User (Rc_BTree_int_User * box ) {
  if (box )
    { /* block2480 */
      free_Rc_BTree_int_User_value ((*box ));
      (*box ) = NULL ;
    }
}
__attribute__((weak)) void free_Rc_BTree_int_User_pointer (Rc_BTree_int_User ** box ) {
  if (box )
    { /* block2488 */
      free_Rc_BTree_int_User ((*box ));
    }
}
Maybe_BTree_int_User deref_Rc_BTree_int_User (Rc_BTree_int_User box ) {
  return ({ /* letn2498 */
      Maybe_ref_BTree_int_User matchn2497  = get_Rc_BTree_int_User (box );
      // ----------
      ((((matchn2497 . ctor) ==  JUST_CTOR  )) ? ({ /* letn2500 */
          BTree_int_User * restrict child  = (((matchn2497 . data). just). value);
          // ----------
          Just_BTree_int_User ((*child ));
        }) : ({ /* progn2503 */
          Nothing_BTree_int_User ();
        }));
    });
}
List_Rc_BTree_int_User cloneAll_Rc_BTree_int_User (List_Rc_BTree_int_User children ) {
  return fmap_Functor_List_Rc_BTree_int_User (({ /* progn2515 */
      Rc_BTree_int_User __ciciliC_2514 (Rc_BTree_int_User __h_value ) {
        return clone_Rc_BTree_int_User (__h_value );
      }
      __ciciliC_2514 ;
    }), children );
}
List_Rc_BTree_int_User replaceChild_Rc_BTree_int_User (List_Rc_BTree_int_User children , BTree_int_User nchild , size_t index ) {
  return ({ /* letn2528 */
      typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((children -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2530 */
        bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2531 */
                head  = (((children -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2533 */
                tail  = (((children -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2538 */
            (((index  ==  0 )) ? Cons_Rc_BTree_int_User (new_Rc_BTree_int_User (nchild ), cloneAll_Rc_BTree_int_User (tail )) : Cons_Rc_BTree_int_User (clone_Rc_BTree_int_User (head ), replaceChild_Rc_BTree_int_User (tail , nchild , (index  -  1 ))));
          }) : ({ /* letn2549 */
            // ----------
            ;
            ({ /* progn2551 */
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
    { /* block2567 */
      free_Maybe_Rc_BTree_int_User ((*this ));
    }
}
const Maybe_Rc_BTree_int_User__H_Table * const get_Maybe_Rc_BTree_int_User__H_Table () {
  static const Maybe_Rc_BTree_int_User__H_Table table  = { free_Maybe_Rc_BTree_int_User };
  return (&table );
}
Maybe_Rc_BTree_int_User Just_Rc_BTree_int_User (Rc_BTree_int_User value ) {
  Rc_BTree_int_User * __moved_value __attribute__((__cleanup__( free_Rc_BTree_int_User_pointer))) = (& value) ;
  { /* let2578 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { ((Rc_BTree_int_User   )({ /* letnmove2581 */
          Rc_BTree_int_User moved_var2580  = value ;
          // ----------
          memset ((&value ), 0, sizeof(value ));
          moved_var2580 ;
        }))}});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User () {
  { /* let2586 */
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
    return ({ /* letn2598 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn2600 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2601 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2603 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn2608 */
              ({ /* letn2610 */
                Rc_BTree_int_User * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* letn2614 */
              // ----------
              ;
              ({ /* progn2616 */
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
  return (((buf  ==  NULL  )) ? Nil_Rc_BTree_int_User () : ({ /* letn2626 */
        Rc_BTree_int_User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Rc_BTree_int_User () : Cons_Rc_BTree_int_User (item , pure_List_Rc_BTree_int_User ((++buf ), (--len ))));
      }));
}
size_t show_List_Rc_BTree_int_User (FILE * file , List_Rc_BTree_int_User list ) {
  return ({ /* letn2638 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2640 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2641 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2643 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2648 */
            (({ /* letn2654 */
                // ----------
                ;
                ({ /* letn2656 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2660 */
                      (({ /* letn2672 */
                          Maybe_BTree_int_User match2671  = deref_Rc_BTree_int_User (head );
                          typeof((((match2671 . __h_data). Just). __h_0_mem)) child ;
                          // ----------
                          ;
                          ({ /* letn2674 */
                            bool __h_case_result  = (true  &&  (((match2671 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn2675 */
                                  child  = (((match2671 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn2680 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* letn2685 */
                                // ----------
                                ;
                                ({ /* progn2687 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* letn2691 */
                      // ----------
                      ;
                      ({ /* progn2693 */
                        ({ /* letn2702 */
                          Maybe_BTree_int_User match2701  = deref_Rc_BTree_int_User (head );
                          typeof((((match2701 . __h_data). Just). __h_0_mem)) child ;
                          // ----------
                          ;
                          ({ /* letn2704 */
                            bool __h_case_result  = (true  &&  (((match2701 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn2705 */
                                  child  = (((match2701 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn2710 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* letn2714 */
                                // ----------
                                ;
                                ({ /* progn2716 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_Rc_BTree_int_User (file , tail ) );
          }) : ({ /* letn2721 */
            // ----------
            ;
            ({ /* progn2723 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn2731 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2733 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2734 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2736 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2741 */
            Cons_Rc_BTree_int_User (head , copy_List_Rc_BTree_int_User (tail ));
          }) : ({ /* letn2747 */
            // ----------
            ;
            ({ /* progn2749 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index ) {
  return ({ /* letn2758 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2760 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2761 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2763 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2768 */
            Cons_Rc_BTree_int_User (head , replaceAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* letn2774 */
            // ----------
            ;
            ({ /* progn2776 */
              ({ /* letn2782 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2784 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2785 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2790 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* letn2796 */
                      // ----------
                      ;
                      ({ /* progn2798 */
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
  return ({ /* letn2807 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2809 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2810 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2812 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2817 */
            Cons_Rc_BTree_int_User (head , deleteAt_List_Rc_BTree_int_User (tail , (index  -  1 )));
          }) : ({ /* letn2823 */
            // ----------
            ;
            ({ /* progn2825 */
              ({ /* letn2831 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2833 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2834 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2839 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* letn2844 */
                      // ----------
                      ;
                      ({ /* progn2846 */
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
  return ({ /* letn2855 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2857 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2858 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2860 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2865 */
            Cons_Rc_BTree_int_User (head , insertAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* letn2871 */
            // ----------
            ;
            ({ /* progn2873 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (list ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed ) {
  return ({ /* letn2883 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2885 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2886 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2888 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2893 */
            Cons_Rc_BTree_int_User (head , replace_List_Rc_BTree_int_User (tail , item , aimed ));
          }) : ({ /* letn2899 */
            // ----------
            ;
            ({ /* progn2901 */
              ({ /* letn2907 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2909 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2910 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2915 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* letn2921 */
                      // ----------
                      ;
                      ({ /* progn2923 */
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
  return ({ /* letn2932 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2934 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2935 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2937 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2942 */
            Cons_Rc_BTree_int_User (head , delete_List_Rc_BTree_int_User (tail , aimed ));
          }) : ({ /* letn2948 */
            // ----------
            ;
            ({ /* progn2950 */
              ({ /* letn2956 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2958 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2959 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2964 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* letn2969 */
                      // ----------
                      ;
                      ({ /* progn2971 */
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
  return ({ /* letn2980 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2982 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2983 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2985 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2990 */
            Cons_Rc_BTree_int_User (head , insert_List_Rc_BTree_int_User (tail , item , rlist ));
          }) : ({ /* letn2996 */
            // ----------
            ;
            ({ /* progn2998 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  List_Rc_BTree_int_User _reverse (List_Rc_BTree_int_User list , List_Rc_BTree_int_User rlist ) {
    return ({ /* letn3009 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3011 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3012 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3014 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3019 */
              _reverse (tail , Cons_Rc_BTree_int_User (head , rlist ));
            }) : ({ /* letn3024 */
              // ----------
              ;
              ({ /* progn3026 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* letn3032 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3034 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3035 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3037 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3042 */
            _reverse (tail , Cons_Rc_BTree_int_User (head , Nil_Rc_BTree_int_User ()));
          }) : ({ /* letn3048 */
            // ----------
            ;
            ({ /* progn3050 */
              list ;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist ) {
  return ({ /* letn3058 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3060 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3061 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3063 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3068 */
            Cons_Rc_BTree_int_User (head , append_List_Rc_BTree_int_User (tail , rlist ));
          }) : ({ /* letn3074 */
            // ----------
            ;
            ({ /* progn3076 */
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
  return (((len  <=  0 )) ? Nil_Rc_BTree_int_User () : ({ /* letn3091 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3093 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3094 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3096 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3101 */
              Cons_Rc_BTree_int_User (head , take_List_Rc_BTree_int_User ((--len ), tail ));
            }) : ({ /* letn3107 */
              // ----------
              ;
              ({ /* progn3109 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn3118 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3120 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3121 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3126 */
            ({ /* letn3132 */
              // ----------
              ;
              ({ /* letn3134 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn3138 */
                    copy_List_Rc_BTree_int_User (list );
                  }) : ({ /* letn3143 */
                    // ----------
                    ;
                    ({ /* progn3145 */
                      last_List_Rc_BTree_int_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn3150 */
            // ----------
            ;
            ({ /* progn3152 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn3162 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3164 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3165 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3167 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3172 */
            Cons_Rc_BTree_int_User (head , init_List_Rc_BTree_int_User (tail ));
          }) : ({ /* letn3178 */
            // ----------
            ;
            ({ /* progn3180 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
size_t hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t desired ) {
  return ({ /* letn3189 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3191 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3192 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3197 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_int_User (tail , (--desired )) ));
          }) : ({ /* letn3203 */
            // ----------
            ;
            ({ /* progn3205 */
              0;
            });
          }));
      });
    });
}
size_t len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn3213 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3215 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3216 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3221 */
            (1 +  len_List_Rc_BTree_int_User (tail ) );
          }) : ({ /* letn3226 */
            // ----------
            ;
            ({ /* progn3228 */
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
  return (((len  <=  0 )) ? copy_List_Rc_BTree_int_User (list ) : ({ /* letn3241 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3243 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3244 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3249 */
              drop_List_Rc_BTree_int_User ((--len ), tail );
            }) : ({ /* letn3254 */
              // ----------
              ;
              ({ /* progn3256 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn3266 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn3268 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3269 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3274 */
            Just_Rc_BTree_int_User (head );
          }) : ({ /* letn3279 */
            // ----------
            ;
            ({ /* progn3281 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list ) {
  return ({ /* letn3290 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3292 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3293 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3298 */
            nthcdr_List_Rc_BTree_int_User ((--index ), tail );
          }) : ({ /* letn3303 */
            // ----------
            ;
            ({ /* progn3305 */
              list ;
            });
          }));
      });
    });
}
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list ) {
  return ({ /* letn3314 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3316 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3317 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3319 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3324 */
            (((index  ==  0 )) ? Just_Rc_BTree_int_User (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_int_User () : nth_List_Rc_BTree_int_User ((--index ), tail )));
          }) : ({ /* letn3333 */
            // ----------
            ;
            ({ /* progn3335 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
void free_List_Rc_BTree_int_User (List_Rc_BTree_int_User * this_ptr ) {
  { /* let3340 */
    List_Rc_BTree_int_User this  = (*this_ptr );
    // ----------
    { /* let3344 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3346 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3347 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block3354 */
            { /* block3356 */
              free (this );
              free_List_Rc_BTree_int_User ((&tail ));
            }
          }
        else
          { /* let3364 */
            // ----------
            ;
            ({ /* letn3366 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block3372 */
                  { /* block3374 */
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
    { /* block3382 */
      free_List_Rc_BTree_int_User ((*this_ptr ));
    }
}
List_Rc_BTree_int_User__H_Table * const get_List_Rc_BTree_int_User__H_Table () {
  static List_Rc_BTree_int_User__H_Table table  = { free_List_Rc_BTree_int_User , toArray_List_Rc_BTree_int_User , wrap_List_Rc_BTree_int_User , pure_List_Rc_BTree_int_User , show_List_Rc_BTree_int_User , copy_List_Rc_BTree_int_User , replaceAt_List_Rc_BTree_int_User , deleteAt_List_Rc_BTree_int_User , insertAt_List_Rc_BTree_int_User , replace_List_Rc_BTree_int_User , delete_List_Rc_BTree_int_User , insert_List_Rc_BTree_int_User , reverse_List_Rc_BTree_int_User , append_List_Rc_BTree_int_User , push_List_Rc_BTree_int_User , take_List_Rc_BTree_int_User , last_List_Rc_BTree_int_User , init_List_Rc_BTree_int_User , hasLen_List_Rc_BTree_int_User , len_List_Rc_BTree_int_User , tail_List_Rc_BTree_int_User , drop_List_Rc_BTree_int_User , head_List_Rc_BTree_int_User , nthcdr_List_Rc_BTree_int_User , nth_List_Rc_BTree_int_User };
  return (&table );
}
List_Rc_BTree_int_User Cons_Rc_BTree_int_User (Rc_BTree_int_User head , List_Rc_BTree_int_User tail ) {
  Rc_BTree_int_User * __moved_head __attribute__((__cleanup__( free_Rc_BTree_int_User_pointer))) = (& head) ;
  { /* let3393 */
    List_Rc_BTree_int_User instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h_Cons_t , .__h_data.Cons = { ((Rc_BTree_int_User   )({ /* letnmove3397 */
              Rc_BTree_int_User moved_var3396  = head ;
              // ----------
              memset ((&head ), 0, sizeof(head ));
              moved_var3396 ;
            })), tail }});
    return instance ;
  }
}
List_Rc_BTree_int_User Nil_Rc_BTree_int_User () {
  { /* let3402 */
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
    { /* block3417 */
      free_Maybe_List_Rc_BTree_int_User ((*this ));
    }
}
const Maybe_List_Rc_BTree_int_User__H_Table * const get_Maybe_List_Rc_BTree_int_User__H_Table () {
  static const Maybe_List_Rc_BTree_int_User__H_Table table  = { free_Maybe_List_Rc_BTree_int_User };
  return (&table );
}
Maybe_List_Rc_BTree_int_User Just_List_Rc_BTree_int_User (List_Rc_BTree_int_User value ) {
  { /* let3427 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_int_User Nothing_List_Rc_BTree_int_User () {
  { /* let3432 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_int_User__H_IMPL__
#define __Functor_List_Rc_BTree_int_User__H_IMPL__
List_Rc_BTree_int_User fmap_Functor_List_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input ) {
  return ({ /* letn3450 */
      typeof((((input -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((input -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3452 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3453 */
                head  = (((input -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3455 */
                tail  = (((input -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3460 */
            Cons_Rc_BTree_int_User (a_b (head ), fmap_Functor_List_Rc_BTree_int_User (a_b , tail ));
          }) : ({ /* letn3467 */
            // ----------
            ;
            ({ /* progn3469 */
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
    { /* block3479 */
      free_Functor_List_Rc_BTree_int_User ((*this ));
    }
}
const Functor_List_Rc_BTree_int_User__H_Table * const get_Functor_List_Rc_BTree_int_User__H_Table () {
  static const Functor_List_Rc_BTree_int_User__H_Table table  = { free_Functor_List_Rc_BTree_int_User , fmap_Functor_List_Rc_BTree_int_User };
  return (&table );
}
Functor_List_Rc_BTree_int_User Functor_List_Rc_BTree_int_User_ctor () {
  { /* let3489 */
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
  return ({ /* letn3509 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn3511 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn3512 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3514 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3519 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* letn3525 */
                BTree_int_User tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tree ;
                // ----------
                Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3536 */
                    Maybe_BTree_int_User_pair_t match3535  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                    typeof((((match3535 . __h_data). Just). __h_0_mem)) nitem ;
                    // ----------
                    ;
                    ({ /* letn3539 */
                      bool __h_case_result  = (true  &&  (((match3535 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3540 */
                            nitem  = (((match3535 . __h_data). Just). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn3545 */
                          nitem ;
                        }) : ({ /* letn3549 */
                          // ----------
                          ;
                          ({ /* progn3551 */
                            ((BTree_int_User_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* letn3563 */
                      List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                      // ----------
                      cloneAll_Rc_BTree_int_User (r1 );
                    }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* letn3574 */
                      List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                      // ----------
                      cloneAll_Rc_BTree_int_User (r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* letn3581 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn3583 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn3584 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn3586 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn3591 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* letn3593 */
                      BTree_int_User tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tree ;
                      // ----------
                      Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3595 */
                          Maybe_BTree_int_User_pair_t match3535  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                          typeof((((match3535 . __h_data). Just). __h_0_mem)) nitem ;
                          // ----------
                          ;
                          ({ /* letn3597 */
                            bool __h_case_result  = (true  &&  (((match3535 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3598 */
                                  nitem  = (((match3535 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn3603 */
                                nitem ;
                              }) : ({ /* letn3605 */
                                // ----------
                                ;
                                ({ /* progn3607 */
                                  ((BTree_int_User_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* letn3609 */
                            List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                            // ----------
                            cloneAll_Rc_BTree_int_User (r1 );
                          }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* letn3611 */
                            List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                            // ----------
                            cloneAll_Rc_BTree_int_User (r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* letn3615 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn3617 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn3618 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn3623 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* letn3629 */
                            BTree_int_User tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tree ;
                            // ----------
                            Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3639 */
                                Maybe_BTree_int_User_pair_t match3638  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                                typeof((((match3638 . __h_data). Just). __h_0_mem)) nitem ;
                                // ----------
                                ;
                                ({ /* letn3642 */
                                  bool __h_case_result  = (true  &&  (((match3638 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3643 */
                                        nitem  = (((match3638 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn3648 */
                                      nitem ;
                                    }) : ({ /* letn3652 */
                                      // ----------
                                      ;
                                      ({ /* progn3654 */
                                        ((BTree_int_User_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2));
                          }) : tree );
                      }) : ({ /* letn3670 */
                        // ----------
                        ;
                        ({ /* progn3672 */
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
  return ({ /* letn3680 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn3682 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn3683 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3685 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3690 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3702 */
                Maybe_BTree_int_User_pair_t match3701  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                typeof((((match3701 . __h_data). Just). __h_0_mem)) nitem ;
                // ----------
                ;
                ({ /* letn3705 */
                  bool __h_case_result  = (true  &&  (((match3701 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3706 */
                        nitem  = (((match3701 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3711 */
                      nitem ;
                    }) : ({ /* letn3715 */
                      // ----------
                      ;
                      ({ /* progn3717 */
                        ((BTree_int_User_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* letn3728 */
                  List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                  // ----------
                  cloneAll_Rc_BTree_int_User (r1 );
                }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* letn3739 */
                  List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                  // ----------
                  cloneAll_Rc_BTree_int_User (r1 );
                })))}), 2)) : tree );
          }) : ({ /* letn3746 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn3748 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn3749 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn3751 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn3756 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3758 */
                      Maybe_BTree_int_User_pair_t match3701  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                      typeof((((match3701 . __h_data). Just). __h_0_mem)) nitem ;
                      // ----------
                      ;
                      ({ /* letn3760 */
                        bool __h_case_result  = (true  &&  (((match3701 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3761 */
                              nitem  = (((match3701 . __h_data). Just). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn3766 */
                            nitem ;
                          }) : ({ /* letn3768 */
                            // ----------
                            ;
                            ({ /* progn3770 */
                              ((BTree_int_User_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* letn3772 */
                        List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        cloneAll_Rc_BTree_int_User (r1 );
                      }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* letn3774 */
                        List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        cloneAll_Rc_BTree_int_User (r1 );
                      })))}), 2)) : tree );
                }) : ({ /* letn3778 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn3780 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn3781 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn3786 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3798 */
                            Maybe_BTree_int_User_pair_t match3797  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                            typeof((((match3797 . __h_data). Just). __h_0_mem)) nitem ;
                            // ----------
                            ;
                            ({ /* letn3801 */
                              bool __h_case_result  = (true  &&  (((match3797 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3802 */
                                    nitem  = (((match3797 . __h_data). Just). __h_0_mem) ;
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn3807 */
                                  nitem ;
                                }) : ({ /* letn3811 */
                                  // ----------
                                  ;
                                  ({ /* progn3813 */
                                    ((BTree_int_User_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2)) : tree );
                      }) : ({ /* letn3828 */
                        // ----------
                        ;
                        ({ /* progn3830 */
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
  return ({ /* letn3843 */
      BTree_int_User merged  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_items , right_items ), ({ /* letn3848 */
        List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (left_children , right_children );
        // ----------
        cloneAll_Rc_BTree_int_User (r1 );
      }));
      // ----------
      ({ /* letn3859 */
        BTree_int_User tmp_child  = splitForDelete_BTree_int_User (merged );
        typeof((((tmp_child -> __h_data). Branch). __h_0_mem)) __h_match3857_0_arg ;
        typeof((((__h_match3857_0_arg -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((tmp_child -> __h_data). Branch). __h_1_mem)) tmp_children ;
        // ----------
        ;
        ({ /* letn3861 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor) ==  __h_Branch_t  ) &&  ((({ /* progn3862 */
                    __h_match3857_0_arg  = (((tmp_child -> __h_data). Branch). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  (((__h_match3857_0_arg -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3864 */
                        head  = (((__h_match3857_0_arg -> __h_data). Cons). __h_0_mem) ;
                        true ;
                      }) ) ) ) &&  ({ /* progn3866 */
                  tmp_children  = (((tmp_child -> __h_data). Branch). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3871 */
              ({ /* letn3874 */
                BTree_int_User merged_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = merged ;
                BTree_int_User tmp_child_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tmp_child ;
                // ----------
                Internal_BTree_int_User (replaceAt_List_BTree_int_User_pair_t (items , head , pitem_index ), ({ /* letn3886 */
                    List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                    List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (pchild_index , r1 );
                    List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((pchild_index  +  1 ), r1 );
                    List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (tmp_children , r3 );
                    List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r2 , r4 );
                    // ----------
                    cloneAll_Rc_BTree_int_User (r5 );
                  }));
              });
            }) : ({ /* letn3896 */
              // ----------
              ;
              ({ /* letn3898 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor) ==  __h_Internal_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn3902 */
                    Internal_BTree_int_User (deleteAt_List_BTree_int_User_pair_t (items , pitem_index ), ({ /* letn3908 */
                        List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                        // ----------
                        replaceChild_Rc_BTree_int_User (r1 , merged , pchild_index );
                      }));
                  }) : ({ /* letn3914 */
                    // ----------
                    ;
                    ({ /* progn3916 */
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
    return ({ /* letn3947 */
        Maybe_Rc_BTree_int_User match3946  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match3946 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn3949 */
          bool __h_case_result  = (true  &&  (((match3946 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3950 */
                right_child_rc  = (((match3946 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3955 */
              ({ /* letn3962 */
                Maybe_BTree_int_User match3961  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match3961 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn3964 */
                  bool __h_case_result  = (true  &&  (((match3961 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3965 */
                        right_child  = (((match3961 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3970 */
                      ({ /* letn3976 */
                        typeof((((right_child -> __h_data). Leaf). __h_0_mem)) right_child_items ;
                        // ----------
                        ;
                        ({ /* letn3978 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn3979 */
                                right_child_items  = (((right_child -> __h_data). Leaf). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn3984 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn3994 */
                                  typeof((((right_child_items -> __h_data). Cons). __h_0_mem)) first_item ;
                                  typeof((((right_child_items -> __h_data). Cons). __h_1_mem)) tail ;
                                  // ----------
                                  ;
                                  ({ /* letn3996 */
                                    bool __h_case_result  = (true  &&  (((right_child_items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3997 */
                                            first_item  = (((right_child_items -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn3999 */
                                            tail  = (((right_child_items -> __h_data). Cons). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4004 */
                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , first_item , current ), ({ /* letn4018 */
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
                                      }) : ({ /* letn4037 */
                                        // ----------
                                        ;
                                        ({ /* progn4039 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* letn4048 */
                                  typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
                                  // ----------
                                  ;
                                  ({ /* letn4050 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4051 */
                                          head  = (((current -> __h_data). Cons). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4056 */
                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4069 */
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
                                      }) : ({ /* letn4084 */
                                        // ----------
                                        ;
                                        ({ /* progn4086 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R2"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* letn4092 */
                              // ----------
                              ;
                              ({ /* progn4094 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4100 */
                      // ----------
                      ;
                      ({ /* progn4102 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4108 */
              // ----------
              ;
              ({ /* progn4110 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowLeft (List_BTree_int_User_pair_t child_items ) {
    return ({ /* letn4124 */
        typeof((((wleft . __h_data). Just). __h_0_mem)) left ;
        typeof((((left -> __h_data). Cons). __h_0_mem)) left_item ;
        // ----------
        ;
        ({ /* letn4126 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4127 */
                  left  = (((wleft . __h_data). Just). __h_0_mem) ;
                  true ;
                }) &&  (true  &&  (((left -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4129 */
                      left_item  = (((left -> __h_data). Cons). __h_0_mem) ;
                      true ;
                    }) ) ) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4134 */
              ({ /* letn4141 */
                Maybe_Rc_BTree_int_User match4140  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                typeof((((match4140 . __h_data). Just). __h_0_mem)) left_child_rc ;
                // ----------
                ;
                ({ /* letn4143 */
                  bool __h_case_result  = (true  &&  (((match4140 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4144 */
                        left_child_rc  = (((match4140 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4149 */
                      ({ /* letn4156 */
                        Maybe_BTree_int_User match4155  = deref_Rc_BTree_int_User (left_child_rc );
                        typeof((((match4155 . __h_data). Just). __h_0_mem)) left_child ;
                        // ----------
                        ;
                        ({ /* letn4158 */
                          bool __h_case_result  = (true  &&  (((match4155 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4159 */
                                left_child  = (((match4155 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4164 */
                              ({ /* letn4170 */
                                typeof((((left_child -> __h_data). Leaf). __h_0_mem)) left_child_items ;
                                // ----------
                                ;
                                ({ /* letn4172 */
                                  bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4173 */
                                        left_child_items  = (((left_child -> __h_data). Leaf). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn4178 */
                                      (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4189 */
                                          List_BTree_int_User_pair_t last  = last_List_BTree_int_User_pair_t (left_child_items );
                                          typeof((((last -> __h_data). Cons). __h_0_mem)) last_item ;
                                          // ----------
                                          ;
                                          ({ /* letn4191 */
                                            bool __h_case_result  = (true  &&  (((last -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4192 */
                                                  last_item  = (((last -> __h_data). Cons). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4197 */
                                                ({ /* letn4200 */
                                                  List_BTree_int_User_pair_t last_spent  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = last ;
                                                  // ----------
                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , last_item , left ), ({ /* letn4213 */
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
                                              }) : ({ /* letn4231 */
                                                // ----------
                                                ;
                                                ({ /* progn4233 */
                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 2"));
                                                });
                                              }));
                                          });
                                        }) : ({ /* letn4241 */
                                          Either_BTree_int_User_Error_BTree_int_User match4240  = borrowRight (child_items );
                                          // ----------
                                          ;
                                          ({ /* letn4243 */
                                            bool __h_case_result  = (true  &&  ((match4240 . __h_ctor) ==  __h_Left_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4247 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , left ), ({ /* letn4260 */
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
                                              }) : ({ /* letn4275 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4240 ;
                                                // ----------
                                                ;
                                                ({ /* progn4277 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        }));
                                    }) : ({ /* letn4281 */
                                      // ----------
                                      ;
                                      ({ /* progn4283 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 3"));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn4289 */
                              // ----------
                              ;
                              ({ /* progn4291 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 4"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4297 */
                      // ----------
                      ;
                      ({ /* progn4299 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 5"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4305 */
              // ----------
              ;
              ({ /* progn4307 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* letn4310 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn4315 */
        typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
        // ----------
        ;
        ({ /* letn4317 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn4318 */
                child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4323 */
              (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4334 */
                  BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* letn4339 */
              typeof((((nchild -> __h_data). Internal). __h_0_mem)) child_items ;
              // ----------
              ;
              ({ /* letn4341 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn4342 */
                      child_items  = (((nchild -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn4347 */
                    (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4349 */
                        BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* letn4353 */
                    typeof((((nchild -> __h_data). Leaf). __h_0_mem)) child_items ;
                    // ----------
                    ;
                    ({ /* letn4355 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4356 */
                            child_items  = (((nchild -> __h_data). Leaf). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn4361 */
                          (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4363 */
                              BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* letn4367 */
                          // ----------
                          ;
                          ({ /* progn4369 */
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
    return ({ /* letn4398 */
        Maybe_Rc_BTree_int_User match4397  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4397 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn4400 */
          bool __h_case_result  = (true  &&  (((match4397 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4401 */
                right_child_rc  = (((match4397 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4406 */
              ({ /* letn4413 */
                Maybe_BTree_int_User match4412  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match4412 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn4415 */
                  bool __h_case_result  = (true  &&  (((match4412 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4416 */
                        right_child  = (((match4412 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4421 */
                      ({ /* letn4427 */
                        typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_child_items ;
                        typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_child_children ;
                        // ----------
                        ;
                        ({ /* letn4429 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4430 */
                                  right_child_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                  true ;
                                }) &&  ({ /* progn4432 */
                                  right_child_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4437 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4449 */
                                  Maybe_BTree_int_User_pair_t match4447  = min_BTree_int_User (right_child );
                                  typeof((((match4447 . __h_data). Just). __h_0_mem)) min ;
                                  typeof((min . __h_0_mem)) min_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4451 */
                                    bool __h_case_result  = (true  &&  (((match4447 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4452 */
                                            min  = (((match4447 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4454 */
                                              min_key  = (min . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4459 */
                                        ({ /* letn4466 */
                                          Either_BTree_int_User_Error_BTree_int_User match4465  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match4465 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn4468 */
                                            bool __h_case_result  = (true  &&  (((match4465 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4469 */
                                                  nchild  = (((match4465 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4474 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                              }) : ({ /* letn4482 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4465 ;
                                                // ----------
                                                ;
                                                ({ /* progn4484 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn4488 */
                                        // ----------
                                        ;
                                        ({ /* progn4490 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* letn4499 */
                                  typeof((((current -> __h_data). Cons). __h_0_mem)) current_item ;
                                  typeof((current_item . __h_0_mem)) current_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4501 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4502 */
                                            current_item  = (((current -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4504 */
                                              current_key  = (current_item . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4509 */
                                        ({ /* letn4517 */
                                          List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                          List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                          BTree_int_User r4  __attribute__((__cleanup__(free_BTree_int_User ))) = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), cloneAll_Rc_BTree_int_User (r2 ));
                                          List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                          List_Rc_BTree_int_User r7  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                          // ----------
                                          ({ /* letn4531 */
                                            Either_BTree_int_User_Error_BTree_int_User match4530  = delete_BTree_int_User (r4 , current_key , NULL );
                                            typeof((((match4530 . __h_data). Right). __h_0_mem)) ntree ;
                                            // ----------
                                            ;
                                            ({ /* letn4533 */
                                              bool __h_case_result  = (true  &&  (((match4530 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4534 */
                                                    ntree  = (((match4530 . __h_data). Right). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn4539 */
                                                  ({ /* letn4546 */
                                                    BTree_int_User tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                    typeof((((tmp_result -> __h_data). Branch). __h_0_mem)) branch_items ;
                                                    typeof((((tmp_result -> __h_data). Branch). __h_1_mem)) branch_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn4548 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4549 */
                                                              branch_items  = (((tmp_result -> __h_data). Branch). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn4551 */
                                                              branch_children  = (((tmp_result -> __h_data). Branch). __h_1_mem) ;
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn4556 */
                                                          ({ /* letn4562 */
                                                            typeof((((branch_items -> __h_data). Cons). __h_0_mem)) branch_head ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn4564 */
                                                              bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4565 */
                                                                    branch_head  = (((branch_items -> __h_data). Cons). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn4570 */
                                                                  ({ /* letn4573 */
                                                                    BTree_int_User ntree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntree ;
                                                                    BTree_int_User tmp_result_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tmp_result ;
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* letn4583 */
                                                                        List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                        List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                        // ----------
                                                                        cloneAll_Rc_BTree_int_User (r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* letn4590 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn4592 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn4598 */
                                                          // ----------
                                                          ;
                                                          ({ /* letn4600 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn4604 */
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4613 */
                                                                    Rc_BTree_int_User r9  __attribute__((__cleanup__(free_Rc_BTree_int_User ))) = new_Rc_BTree_int_User (ntree );
                                                                    List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (((Rc_BTree_int_User   )({ /* letnmove4617 */
                                                                      Rc_BTree_int_User moved_var4616  = r9 ;
                                                                      // ----------
                                                                      memset ((&r9 ), 0, sizeof(r9 ));
                                                                      moved_var4616 ;
                                                                    })), r7 );
                                                                    List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                    // ----------
                                                                    cloneAll_Rc_BTree_int_User (r11 );
                                                                  })));
                                                              }) : ({ /* letn4624 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn4626 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn4632 */
                                                  Either_BTree_int_User_Error_BTree_int_User passthru  = match4530 ;
                                                  // ----------
                                                  ;
                                                  ({ /* progn4634 */
                                                    passthru ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* letn4638 */
                                        // ----------
                                        ;
                                        ({ /* progn4640 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* letn4646 */
                              typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_child_items ;
                              typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_child_children ;
                              // ----------
                              ;
                              ({ /* letn4648 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn4649 */
                                        right_child_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                        true ;
                                      }) &&  ({ /* progn4651 */
                                        right_child_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn4656 */
                                    (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4658 */
                                        Maybe_BTree_int_User_pair_t match4447  = min_BTree_int_User (right_child );
                                        typeof((((match4447 . __h_data). Just). __h_0_mem)) min ;
                                        typeof((min . __h_0_mem)) min_key ;
                                        // ----------
                                        ;
                                        ({ /* letn4660 */
                                          bool __h_case_result  = (true  &&  (((match4447 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4661 */
                                                  min  = (((match4447 . __h_data). Just). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn4663 */
                                                    min_key  = (min . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn4668 */
                                              ({ /* letn4670 */
                                                Either_BTree_int_User_Error_BTree_int_User match4465  = delete_BTree_int_User (right_child , min_key , NULL );
                                                typeof((((match4465 . __h_data). Right). __h_0_mem)) nchild ;
                                                // ----------
                                                ;
                                                ({ /* letn4672 */
                                                  bool __h_case_result  = (true  &&  (((match4465 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4673 */
                                                        nchild  = (((match4465 . __h_data). Right). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn4678 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                                    }) : ({ /* letn4680 */
                                                      Either_BTree_int_User_Error_BTree_int_User passthru  = match4465 ;
                                                      // ----------
                                                      ;
                                                      ({ /* progn4682 */
                                                        passthru ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn4684 */
                                              // ----------
                                              ;
                                              ({ /* progn4686 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* letn4688 */
                                        typeof((((current -> __h_data). Cons). __h_0_mem)) current_item ;
                                        typeof((current_item . __h_0_mem)) current_key ;
                                        // ----------
                                        ;
                                        ({ /* letn4690 */
                                          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4691 */
                                                  current_item  = (((current -> __h_data). Cons). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn4693 */
                                                    current_key  = (current_item . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn4698 */
                                              ({ /* letn4700 */
                                                List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                BTree_int_User r4  __attribute__((__cleanup__(free_BTree_int_User ))) = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), cloneAll_Rc_BTree_int_User (r2 ));
                                                List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                List_Rc_BTree_int_User r7  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ({ /* letn4702 */
                                                  Either_BTree_int_User_Error_BTree_int_User match4530  = delete_BTree_int_User (r4 , current_key , NULL );
                                                  typeof((((match4530 . __h_data). Right). __h_0_mem)) ntree ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn4704 */
                                                    bool __h_case_result  = (true  &&  (((match4530 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4705 */
                                                          ntree  = (((match4530 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn4710 */
                                                        ({ /* letn4712 */
                                                          BTree_int_User tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                          typeof((((tmp_result -> __h_data). Branch). __h_0_mem)) branch_items ;
                                                          typeof((((tmp_result -> __h_data). Branch). __h_1_mem)) branch_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn4714 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4715 */
                                                                    branch_items  = (((tmp_result -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn4717 */
                                                                    branch_children  = (((tmp_result -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn4722 */
                                                                ({ /* letn4724 */
                                                                  typeof((((branch_items -> __h_data). Cons). __h_0_mem)) branch_head ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn4726 */
                                                                    bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4727 */
                                                                          branch_head  = (((branch_items -> __h_data). Cons). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn4732 */
                                                                        ({ /* letn4734 */
                                                                          BTree_int_User ntree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntree ;
                                                                          BTree_int_User tmp_result_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tmp_result ;
                                                                          // ----------
                                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* letn4736 */
                                                                              List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                              List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                              // ----------
                                                                              cloneAll_Rc_BTree_int_User (r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* letn4738 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn4740 */
                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn4742 */
                                                                // ----------
                                                                ;
                                                                ({ /* letn4744 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* progn4748 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4750 */
                                                                          Rc_BTree_int_User r9  __attribute__((__cleanup__(free_Rc_BTree_int_User ))) = new_Rc_BTree_int_User (ntree );
                                                                          List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (((Rc_BTree_int_User   )({ /* letnmove4752 */
                                                                            Rc_BTree_int_User moved_var4751  = r9 ;
                                                                            // ----------
                                                                            memset ((&r9 ), 0, sizeof(r9 ));
                                                                            moved_var4751 ;
                                                                          })), r7 );
                                                                          List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                          // ----------
                                                                          cloneAll_Rc_BTree_int_User (r11 );
                                                                        })));
                                                                    }) : ({ /* letn4755 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* progn4757 */
                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn4759 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match4530 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn4761 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* letn4763 */
                                              // ----------
                                              ;
                                              ({ /* progn4765 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* letn4769 */
                                    // ----------
                                    ;
                                    ({ /* progn4771 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4777 */
                      // ----------
                      ;
                      ({ /* progn4779 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4785 */
              // ----------
              ;
              ({ /* progn4787 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowRightLeaf (List_BTree_int_User_pair_t left_child_items ) {
    return ({ /* letn4801 */
        Maybe_Rc_BTree_int_User match4800  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4800 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn4803 */
          bool __h_case_result  = (true  &&  (((match4800 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4804 */
                right_child_rc  = (((match4800 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4809 */
              ({ /* letn4816 */
                Maybe_BTree_int_User match4815  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match4815 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn4818 */
                  bool __h_case_result  = (true  &&  (((match4815 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4819 */
                        right_child  = (((match4815 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4824 */
                      ({ /* letn4830 */
                        typeof((((right_child -> __h_data). Leaf). __h_0_mem)) right_child_items ;
                        // ----------
                        ;
                        ({ /* letn4832 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4833 */
                                right_child_items  = (((right_child -> __h_data). Leaf). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4838 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4850 */
                                  Maybe_BTree_int_User_pair_t match4848  = min_BTree_int_User (right_child );
                                  typeof((((match4848 . __h_data). Just). __h_0_mem)) min ;
                                  typeof((min . __h_0_mem)) min_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4852 */
                                    bool __h_case_result  = (true  &&  (((match4848 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4853 */
                                            min  = (((match4848 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4855 */
                                              min_key  = (min . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4860 */
                                        ({ /* letn4867 */
                                          Either_BTree_int_User_Error_BTree_int_User match4866  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match4866 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn4869 */
                                            bool __h_case_result  = (true  &&  (((match4866 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4870 */
                                                  nchild  = (((match4866 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4875 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                              }) : ({ /* letn4883 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4866 ;
                                                // ----------
                                                ;
                                                ({ /* progn4885 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn4889 */
                                        // ----------
                                        ;
                                        ({ /* progn4891 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4904 */
                                  List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                  List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                  List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                  List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                  List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , right_child_items ))), r4 );
                                  // ----------
                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                }))));
                            }) : ({ /* letn4917 */
                              // ----------
                              ;
                              ({ /* progn4919 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4925 */
                      // ----------
                      ;
                      ({ /* progn4927 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4933 */
              // ----------
              ;
              ({ /* progn4935 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* letn4940 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn4946 */
        Maybe_Rc_BTree_int_User match4945  = nth_List_Rc_BTree_int_User (index , children );
        typeof((((match4945 . __h_data). Just). __h_0_mem)) left_child_rc ;
        // ----------
        ;
        ({ /* letn4948 */
          bool __h_case_result  = (true  &&  (((match4945 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4949 */
                left_child_rc  = (((match4945 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4954 */
              ({ /* letn4961 */
                Maybe_BTree_int_User match4960  = deref_Rc_BTree_int_User (left_child_rc );
                typeof((((match4960 . __h_data). Just). __h_0_mem)) left_child ;
                // ----------
                ;
                ({ /* letn4963 */
                  bool __h_case_result  = (true  &&  (((match4960 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4964 */
                        left_child  = (((match4960 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4969 */
                      ({ /* letn4975 */
                        typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_child_items ;
                        typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_child_children ;
                        // ----------
                        ;
                        ({ /* letn4977 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4978 */
                                  left_child_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                  true ;
                                }) &&  ({ /* progn4980 */
                                  left_child_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4985 */
                              (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4997 */
                                  Maybe_BTree_int_User_pair_t match4995  = max_BTree_int_User (left_child );
                                  typeof((((match4995 . __h_data). Just). __h_0_mem)) max ;
                                  typeof((max . __h_0_mem)) max_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4999 */
                                    bool __h_case_result  = (true  &&  (((match4995 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5000 */
                                            max  = (((match4995 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn5002 */
                                              max_key  = (max . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn5007 */
                                        ({ /* letn5014 */
                                          Either_BTree_int_User_Error_BTree_int_User match5013  = delete_BTree_int_User (left_child , max_key , NULL );
                                          typeof((((match5013 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn5016 */
                                            bool __h_case_result  = (true  &&  (((match5013 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5017 */
                                                  nchild  = (((match5013 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn5022 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                              }) : ({ /* letn5030 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match5013 ;
                                                // ----------
                                                ;
                                                ({ /* progn5032 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn5036 */
                                        // ----------
                                        ;
                                        ({ /* progn5038 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* letn5044 */
                              typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_child_items ;
                              typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_child_children ;
                              // ----------
                              ;
                              ({ /* letn5046 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5047 */
                                        left_child_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                        true ;
                                      }) &&  ({ /* progn5049 */
                                        left_child_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn5054 */
                                    (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn5056 */
                                        Maybe_BTree_int_User_pair_t match4995  = max_BTree_int_User (left_child );
                                        typeof((((match4995 . __h_data). Just). __h_0_mem)) max ;
                                        typeof((max . __h_0_mem)) max_key ;
                                        // ----------
                                        ;
                                        ({ /* letn5058 */
                                          bool __h_case_result  = (true  &&  (((match4995 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5059 */
                                                  max  = (((match4995 . __h_data). Just). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn5061 */
                                                    max_key  = (max . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn5066 */
                                              ({ /* letn5068 */
                                                Either_BTree_int_User_Error_BTree_int_User match5013  = delete_BTree_int_User (left_child , max_key , NULL );
                                                typeof((((match5013 . __h_data). Right). __h_0_mem)) nchild ;
                                                // ----------
                                                ;
                                                ({ /* letn5070 */
                                                  bool __h_case_result  = (true  &&  (((match5013 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5071 */
                                                        nchild  = (((match5013 . __h_data). Right). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn5076 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                    }) : ({ /* letn5078 */
                                                      Either_BTree_int_User_Error_BTree_int_User passthru  = match5013 ;
                                                      // ----------
                                                      ;
                                                      ({ /* progn5080 */
                                                        passthru ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn5082 */
                                              // ----------
                                              ;
                                              ({ /* progn5084 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* letn5088 */
                                    typeof((((left_child -> __h_data). Leaf). __h_0_mem)) left_child_items ;
                                    // ----------
                                    ;
                                    ({ /* letn5090 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn5091 */
                                            left_child_items  = (((left_child -> __h_data). Leaf). __h_0_mem) ;
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn5096 */
                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn5108 */
                                              Maybe_BTree_int_User_pair_t match5106  = max_BTree_int_User (left_child );
                                              typeof((((match5106 . __h_data). Just). __h_0_mem)) max ;
                                              typeof((max . __h_0_mem)) max_key ;
                                              // ----------
                                              ;
                                              ({ /* letn5110 */
                                                bool __h_case_result  = (true  &&  (((match5106 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5111 */
                                                        max  = (((match5106 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) &&  (true  &&  ({ /* progn5113 */
                                                          max_key  = (max . __h_0_mem) ;
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn5118 */
                                                    ({ /* letn5125 */
                                                      Either_BTree_int_User_Error_BTree_int_User match5124  = delete_BTree_int_User (left_child , max_key , NULL );
                                                      typeof((((match5124 . __h_data). Right). __h_0_mem)) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn5127 */
                                                        bool __h_case_result  = (true  &&  (((match5124 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5128 */
                                                              nchild  = (((match5124 . __h_data). Right). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn5133 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                          }) : ({ /* letn5141 */
                                                            Either_BTree_int_User_Error_BTree_int_User passthru  = match5124 ;
                                                            // ----------
                                                            ;
                                                            ({ /* progn5143 */
                                                              passthru ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn5147 */
                                                    // ----------
                                                    ;
                                                    ({ /* progn5149 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* letn5155 */
                                          // ----------
                                          ;
                                          ({ /* progn5157 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn5163 */
                      // ----------
                      ;
                      ({ /* progn5165 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* letn5171 */
              // ----------
              ;
              ({ /* progn5173 */
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
    return ({ /* letn5202 */
        Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn5208 */
          typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
          typeof((head . __h_0_mem)) key ;
          typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
          // ----------
          ;
          ({ /* letn5210 */
            bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn5211 */
                      head  = (((current -> __h_data). Cons). __h_0_mem) ;
                      true ;
                    }) &&  (true  &&  ({ /* progn5213 */
                        key  = (head . __h_0_mem) ;
                        true ;
                      }) ) ) &&  ({ /* progn5215 */
                    tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* progn5220 */
                ({ /* letn5226 */
                  Ordering match5225  = compareKey (skey , key );
                  // ----------
                  ;
                  ({ /* letn5228 */
                    bool __h_case_result  = (true  &&  ((match5225 . __h_ctor) ==  __h_LT_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn5232 */
                        ({ /* letn5239 */
                          Maybe_Rc_BTree_int_User match5238  = nth_List_Rc_BTree_int_User (index , children );
                          typeof((((match5238 . __h_data). Just). __h_0_mem)) child ;
                          // ----------
                          ;
                          ({ /* letn5241 */
                            bool __h_case_result  = (true  &&  (((match5238 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5242 */
                                  child  = (((match5238 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn5247 */
                                ({ /* letn5254 */
                                  Maybe_BTree_int_User match5253  = deref_Rc_BTree_int_User (child );
                                  typeof((((match5253 . __h_data). Just). __h_0_mem)) tr ;
                                  // ----------
                                  ;
                                  ({ /* letn5256 */
                                    bool __h_case_result  = (true  &&  (((match5253 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5257 */
                                          tr  = (((match5253 . __h_data). Just). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn5262 */
                                        ({ /* letn5268 */
                                          // ----------
                                          ;
                                          ({ /* letn5270 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Branch_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn5274 */
                                                ({ /* letn5281 */
                                                  Either_BTree_int_User_Error_BTree_int_User match5280  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                  typeof((((match5280 . __h_data). Right). __h_0_mem)) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn5283 */
                                                    bool __h_case_result  = (true  &&  (((match5280 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5284 */
                                                          nchild  = (((match5280 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn5289 */
                                                        ({ /* letn5295 */
                                                          typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                          typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn5297 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5298 */
                                                                    child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn5300 */
                                                                    child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn5305 */
                                                                ({ /* letn5312 */
                                                                  Maybe_Rc_BTree_int_User match5311  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match5311 . __h_data). Just). __h_0_mem)) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn5314 */
                                                                    bool __h_case_result  = (true  &&  (((match5311 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5315 */
                                                                          wleft  = (((match5311 . __h_data). Just). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn5320 */
                                                                        ({ /* letn5327 */
                                                                          Maybe_BTree_int_User match5326  = deref_Rc_BTree_int_User (wleft );
                                                                          typeof((((match5326 . __h_data). Just). __h_0_mem)) left_child ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn5329 */
                                                                            bool __h_case_result  = (true  &&  (((match5326 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5330 */
                                                                                  left_child  = (((match5326 . __h_data). Just). __h_0_mem) ;
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn5335 */
                                                                                ({ /* letn5341 */
                                                                                  typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5343 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5344 */
                                                                                            left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn5346 */
                                                                                            left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5351 */
                                                                                        ({ /* letn5354 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn5361 */
                                                                                        typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn5363 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5364 */
                                                                                                  left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn5366 */
                                                                                                  left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn5371 */
                                                                                              ({ /* letn5373 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn5377 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* progn5379 */
                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              }) : ({ /* letn5385 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn5387 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* letn5393 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn5395 */
                                                                          ({ /* letn5402 */
                                                                            Maybe_Rc_BTree_int_User match5401  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match5401 . __h_data). Just). __h_0_mem)) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn5404 */
                                                                              bool __h_case_result  = (true  &&  (((match5401 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5405 */
                                                                                    wright  = (((match5401 . __h_data). Just). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn5410 */
                                                                                  ({ /* letn5417 */
                                                                                    Maybe_BTree_int_User match5416  = deref_Rc_BTree_int_User (wright );
                                                                                    typeof((((match5416 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* letn5419 */
                                                                                      bool __h_case_result  = (true  &&  (((match5416 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5420 */
                                                                                            right_child  = (((match5416 . __h_data). Just). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* progn5425 */
                                                                                          ({ /* letn5431 */
                                                                                            typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn5433 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5434 */
                                                                                                      right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn5436 */
                                                                                                      right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn5441 */
                                                                                                  ({ /* letn5444 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn5451 */
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn5453 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5454 */
                                                                                                            right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn5456 */
                                                                                                            right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn5461 */
                                                                                                        ({ /* letn5463 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn5467 */
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* progn5469 */
                                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        }) : ({ /* letn5475 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* progn5477 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* letn5483 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* progn5485 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn5491 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn5493 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn5501 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match5280 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn5503 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn5507 */
                                                // ----------
                                                ;
                                                ({ /* letn5509 */
                                                  bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn5513 */
                                                      ({ /* letn5519 */
                                                        Either_BTree_int_User_Error_BTree_int_User match5518  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                        typeof((((match5518 . __h_data). Right). __h_0_mem)) nchild ;
                                                        // ----------
                                                        ;
                                                        ({ /* letn5521 */
                                                          bool __h_case_result  = (true  &&  (((match5518 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5522 */
                                                                nchild  = (((match5518 . __h_data). Right). __h_0_mem) ;
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* progn5527 */
                                                              ({ /* letn5533 */
                                                                typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                                typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                                // ----------
                                                                ;
                                                                ({ /* letn5535 */
                                                                  bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5536 */
                                                                          child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                          true ;
                                                                        }) &&  ({ /* progn5538 */
                                                                          child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* progn5543 */
                                                                      ({ /* letn5545 */
                                                                        Maybe_Rc_BTree_int_User match5311  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                        typeof((((match5311 . __h_data). Just). __h_0_mem)) wleft ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* letn5547 */
                                                                          bool __h_case_result  = (true  &&  (((match5311 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5548 */
                                                                                wleft  = (((match5311 . __h_data). Just). __h_0_mem) ;
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* progn5553 */
                                                                              ({ /* letn5555 */
                                                                                Maybe_BTree_int_User match5326  = deref_Rc_BTree_int_User (wleft );
                                                                                typeof((((match5326 . __h_data). Just). __h_0_mem)) left_child ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* letn5557 */
                                                                                  bool __h_case_result  = (true  &&  (((match5326 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5558 */
                                                                                        left_child  = (((match5326 . __h_data). Just). __h_0_mem) ;
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* progn5563 */
                                                                                      ({ /* letn5565 */
                                                                                        typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn5567 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5568 */
                                                                                                  left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn5570 */
                                                                                                  left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn5575 */
                                                                                              ({ /* letn5577 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn5579 */
                                                                                              typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                              typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* letn5581 */
                                                                                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5582 */
                                                                                                        left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                        true ;
                                                                                                      }) &&  ({ /* progn5584 */
                                                                                                        left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* progn5589 */
                                                                                                    ({ /* letn5591 */
                                                                                                      BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                    });
                                                                                                  }) : ({ /* letn5593 */
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* progn5595 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* letn5597 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* progn5599 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            }) : ({ /* letn5601 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* progn5603 */
                                                                                ({ /* letn5605 */
                                                                                  Maybe_Rc_BTree_int_User match5401  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                  typeof((((match5401 . __h_data). Just). __h_0_mem)) wright ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5607 */
                                                                                    bool __h_case_result  = (true  &&  (((match5401 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5608 */
                                                                                          wright  = (((match5401 . __h_data). Just). __h_0_mem) ;
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5613 */
                                                                                        ({ /* letn5615 */
                                                                                          Maybe_BTree_int_User match5416  = deref_Rc_BTree_int_User (wright );
                                                                                          typeof((((match5416 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* letn5617 */
                                                                                            bool __h_case_result  = (true  &&  (((match5416 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5618 */
                                                                                                  right_child  = (((match5416 . __h_data). Just). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* progn5623 */
                                                                                                ({ /* letn5625 */
                                                                                                  typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn5627 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5628 */
                                                                                                            right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn5630 */
                                                                                                            right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn5635 */
                                                                                                        ({ /* letn5637 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn5639 */
                                                                                                        typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                        typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* letn5641 */
                                                                                                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5642 */
                                                                                                                  right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                                  true ;
                                                                                                                }) &&  ({ /* progn5644 */
                                                                                                                  right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                                  true ;
                                                                                                                }) ) ) );
                                                                                                          // ----------
                                                                                                          
                                                                                                          ((__h_case_result ) ? ({ /* progn5649 */
                                                                                                              ({ /* letn5651 */
                                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                                // ----------
                                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                              });
                                                                                                            }) : ({ /* letn5653 */
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* progn5655 */
                                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                              });
                                                                                                            }));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                });
                                                                                              }) : ({ /* letn5657 */
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* progn5659 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* letn5661 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* progn5663 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* letn5667 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* progn5669 */
                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }) : ({ /* letn5673 */
                                                              Either_BTree_int_User_Error_BTree_int_User passthru  = match5518 ;
                                                              // ----------
                                                              ;
                                                              ({ /* progn5675 */
                                                                passthru ;
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* letn5679 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn5681 */
                                                        ({ /* letn5688 */
                                                          Either_BTree_int_User_Error_BTree_int_User match5687  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                          typeof((((match5687 . __h_data). Right). __h_0_mem)) nchild ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn5690 */
                                                            bool __h_case_result  = (true  &&  (((match5687 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5691 */
                                                                  nchild  = (((match5687 . __h_data). Right). __h_0_mem) ;
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn5696 */
                                                                borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                              }) : ({ /* letn5701 */
                                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match5687 ;
                                                                // ----------
                                                                ;
                                                                ({ /* progn5703 */
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
                                      }) : ({ /* letn5707 */
                                        // ----------
                                        ;
                                        ({ /* progn5709 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* letn5715 */
                                // ----------
                                ;
                                ({ /* progn5717 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn5723 */
                        // ----------
                        ;
                        ({ /* letn5725 */
                          bool __h_case_result  = (true  &&  ((match5225 . __h_ctor) ==  __h_EQ_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn5729 */
                              ({ /* letn5732 */
                                Either_BTree_int_User_Error_BTree_int_User result  = borrowInternal_BTree_int_User (tree , items , children , current , index , callback );
                                // ----------
                                { /* let5737 */
                                  // ----------
                                  ;
                                  ({ /* letn5739 */
                                    bool __h_case_result  = (true  &&  ((result . __h_ctor) ==  __h_Right_t  ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block5745 */
                                        if (callback )
                                          { /* block5750 */
                                            callback (head );
                                          }
                                      }
                                  });
                                }
                                result ;
                              });
                            }) : ({ /* letn5754 */
                              // ----------
                              ;
                              ({ /* progn5756 */
                                deleteInternal (tree , items , children , Just_List_BTree_int_User_pair_t (current ), tail , (index  +  1 ));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* letn5761 */
                // ----------
                ;
                ({ /* progn5763 */
                  ({ /* letn5770 */
                    Maybe_Rc_BTree_int_User match5769  = nth_List_Rc_BTree_int_User (index , children );
                    typeof((((match5769 . __h_data). Just). __h_0_mem)) child ;
                    // ----------
                    ;
                    ({ /* letn5772 */
                      bool __h_case_result  = (true  &&  (((match5769 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5773 */
                            child  = (((match5769 . __h_data). Just). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn5778 */
                          ({ /* letn5785 */
                            Maybe_BTree_int_User match5784  = deref_Rc_BTree_int_User (child );
                            typeof((((match5784 . __h_data). Just). __h_0_mem)) tr ;
                            // ----------
                            ;
                            ({ /* letn5787 */
                              bool __h_case_result  = (true  &&  (((match5784 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5788 */
                                    tr  = (((match5784 . __h_data). Just). __h_0_mem) ;
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn5793 */
                                  ({ /* letn5799 */
                                    // ----------
                                    ;
                                    ({ /* letn5801 */
                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Branch_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn5805 */
                                          ({ /* letn5812 */
                                            Either_BTree_int_User_Error_BTree_int_User match5811  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                            typeof((((match5811 . __h_data). Right). __h_0_mem)) nchild ;
                                            // ----------
                                            ;
                                            ({ /* letn5814 */
                                              bool __h_case_result  = (true  &&  (((match5811 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5815 */
                                                    nchild  = (((match5811 . __h_data). Right). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn5820 */
                                                  ({ /* letn5826 */
                                                    typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                    typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn5828 */
                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5829 */
                                                              child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn5831 */
                                                              child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn5836 */
                                                          ({ /* letn5843 */
                                                            Maybe_Rc_BTree_int_User match5842  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                            typeof((((match5842 . __h_data). Just). __h_0_mem)) wleft ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn5845 */
                                                              bool __h_case_result  = (true  &&  (((match5842 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5846 */
                                                                    wleft  = (((match5842 . __h_data). Just). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn5851 */
                                                                  ({ /* letn5858 */
                                                                    Maybe_BTree_int_User match5857  = deref_Rc_BTree_int_User (wleft );
                                                                    typeof((((match5857 . __h_data). Just). __h_0_mem)) left_child ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn5860 */
                                                                      bool __h_case_result  = (true  &&  (((match5857 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5861 */
                                                                            left_child  = (((match5857 . __h_data). Just). __h_0_mem) ;
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn5866 */
                                                                          ({ /* letn5872 */
                                                                            typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                            typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn5874 */
                                                                              bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5875 */
                                                                                      left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                      true ;
                                                                                    }) &&  ({ /* progn5877 */
                                                                                      left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                      true ;
                                                                                    }) ) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn5882 */
                                                                                  ({ /* letn5885 */
                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                    // ----------
                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                  });
                                                                                }) : ({ /* letn5892 */
                                                                                  typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5894 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5895 */
                                                                                            left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn5897 */
                                                                                            left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5902 */
                                                                                        ({ /* letn5904 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn5908 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* progn5910 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* letn5916 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn5918 */
                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* letn5924 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn5926 */
                                                                    ({ /* letn5933 */
                                                                      Maybe_Rc_BTree_int_User match5932  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      typeof((((match5932 . __h_data). Just). __h_0_mem)) wright ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* letn5935 */
                                                                        bool __h_case_result  = (true  &&  (((match5932 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5936 */
                                                                              wright  = (((match5932 . __h_data). Just). __h_0_mem) ;
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* progn5941 */
                                                                            ({ /* letn5948 */
                                                                              Maybe_BTree_int_User match5947  = deref_Rc_BTree_int_User (wright );
                                                                              typeof((((match5947 . __h_data). Just). __h_0_mem)) right_child ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* letn5950 */
                                                                                bool __h_case_result  = (true  &&  (((match5947 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5951 */
                                                                                      right_child  = (((match5947 . __h_data). Just). __h_0_mem) ;
                                                                                      true ;
                                                                                    }) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* progn5956 */
                                                                                    ({ /* letn5962 */
                                                                                      typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                      typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* letn5964 */
                                                                                        bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5965 */
                                                                                                right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                true ;
                                                                                              }) &&  ({ /* progn5967 */
                                                                                                right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                true ;
                                                                                              }) ) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* progn5972 */
                                                                                            ({ /* letn5975 */
                                                                                              BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                              // ----------
                                                                                              Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                            });
                                                                                          }) : ({ /* letn5982 */
                                                                                            typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn5984 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5985 */
                                                                                                      right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn5987 */
                                                                                                      right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn5992 */
                                                                                                  ({ /* letn5994 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn5998 */
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* progn6000 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  }) : ({ /* letn6006 */
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* progn6008 */
                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* letn6014 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* progn6016 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn6022 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6024 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn6032 */
                                                  Either_BTree_int_User_Error_BTree_int_User passthru  = match5811 ;
                                                  // ----------
                                                  ;
                                                  ({ /* progn6034 */
                                                    passthru ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* letn6038 */
                                          // ----------
                                          ;
                                          ({ /* letn6040 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Internal_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn6044 */
                                                ({ /* letn6050 */
                                                  Either_BTree_int_User_Error_BTree_int_User match6049  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                  typeof((((match6049 . __h_data). Right). __h_0_mem)) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn6052 */
                                                    bool __h_case_result  = (true  &&  (((match6049 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6053 */
                                                          nchild  = (((match6049 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn6058 */
                                                        ({ /* letn6064 */
                                                          typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                          typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn6066 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6067 */
                                                                    child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn6069 */
                                                                    child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn6074 */
                                                                ({ /* letn6076 */
                                                                  Maybe_Rc_BTree_int_User match5842  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match5842 . __h_data). Just). __h_0_mem)) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6078 */
                                                                    bool __h_case_result  = (true  &&  (((match5842 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6079 */
                                                                          wleft  = (((match5842 . __h_data). Just). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6084 */
                                                                        ({ /* letn6086 */
                                                                          Maybe_BTree_int_User match5857  = deref_Rc_BTree_int_User (wleft );
                                                                          typeof((((match5857 . __h_data). Just). __h_0_mem)) left_child ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6088 */
                                                                            bool __h_case_result  = (true  &&  (((match5857 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6089 */
                                                                                  left_child  = (((match5857 . __h_data). Just). __h_0_mem) ;
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6094 */
                                                                                ({ /* letn6096 */
                                                                                  typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn6098 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6099 */
                                                                                            left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn6101 */
                                                                                            left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn6106 */
                                                                                        ({ /* letn6108 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn6110 */
                                                                                        typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn6112 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6113 */
                                                                                                  left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn6115 */
                                                                                                  left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn6120 */
                                                                                              ({ /* letn6122 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn6124 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* progn6126 */
                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              }) : ({ /* letn6128 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6130 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* letn6132 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6134 */
                                                                          ({ /* letn6136 */
                                                                            Maybe_Rc_BTree_int_User match5932  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match5932 . __h_data). Just). __h_0_mem)) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn6138 */
                                                                              bool __h_case_result  = (true  &&  (((match5932 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6139 */
                                                                                    wright  = (((match5932 . __h_data). Just). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn6144 */
                                                                                  ({ /* letn6146 */
                                                                                    Maybe_BTree_int_User match5947  = deref_Rc_BTree_int_User (wright );
                                                                                    typeof((((match5947 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* letn6148 */
                                                                                      bool __h_case_result  = (true  &&  (((match5947 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6149 */
                                                                                            right_child  = (((match5947 . __h_data). Just). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* progn6154 */
                                                                                          ({ /* letn6156 */
                                                                                            typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn6158 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6159 */
                                                                                                      right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn6161 */
                                                                                                      right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn6166 */
                                                                                                  ({ /* letn6168 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn6170 */
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn6172 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6173 */
                                                                                                            right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn6175 */
                                                                                                            right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn6180 */
                                                                                                        ({ /* letn6182 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn6184 */
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* progn6186 */
                                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        }) : ({ /* letn6188 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* progn6190 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* letn6192 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* progn6194 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn6198 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn6200 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn6204 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match6049 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn6206 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn6210 */
                                                // ----------
                                                ;
                                                ({ /* progn6212 */
                                                  ({ /* letn6219 */
                                                    Either_BTree_int_User_Error_BTree_int_User match6218  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                    typeof((((match6218 . __h_data). Right). __h_0_mem)) nchild ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6221 */
                                                      bool __h_case_result  = (true  &&  (((match6218 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6222 */
                                                            nchild  = (((match6218 . __h_data). Right). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6227 */
                                                          borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                        }) : ({ /* letn6232 */
                                                          Either_BTree_int_User_Error_BTree_int_User passthru  = match6218 ;
                                                          // ----------
                                                          ;
                                                          ({ /* progn6234 */
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
                                }) : ({ /* letn6238 */
                                  // ----------
                                  ;
                                  ({ /* progn6240 */
                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (((BTree_int_User_pair_t){ }), index ));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* letn6247 */
                          // ----------
                          ;
                          ({ /* progn6249 */
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
        ({ /* letn6257 */
          Either_BTree_int_User_Error_BTree_int_User rs  = ({ /* letn6262 */
            typeof((((result . __h_data). Right). __h_0_mem)) ntr ;
            // ----------
            ;
            ({ /* letn6264 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6265 */
                    ntr  = (((result . __h_data). Right). __h_0_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn6270 */
                  ({ /* letn6276 */
                    typeof((((ntr -> __h_data). Branch). __h_0_mem)) items ;
                    typeof((((ntr -> __h_data). Branch). __h_1_mem)) children ;
                    // ----------
                    ;
                    ({ /* letn6278 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6279 */
                              items  = (((ntr -> __h_data). Branch). __h_0_mem) ;
                              true ;
                            }) &&  ({ /* progn6281 */
                              children  = (((ntr -> __h_data). Branch). __h_1_mem) ;
                              true ;
                            }) ) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn6286 */
                          ({ /* letn6289 */
                            size_t items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* letn6299 */
                                typeof((((wparent . __h_data). Just). __h_0_mem)) ptree ;
                                // ----------
                                ;
                                ({ /* letn6301 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6302 */
                                        ptree  = (((wparent . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn6307 */
                                      ({ /* letn6313 */
                                        typeof((((ptree -> __h_data). Branch). __h_0_mem)) pitems ;
                                        // ----------
                                        ;
                                        ({ /* letn6315 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn6316 */
                                                pitems  = (((ptree -> __h_data). Branch). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn6321 */
                                              ({ /* letn6328 */
                                                Maybe_BTree_int_User_pair_t match6327  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                typeof((((match6327 . __h_data). Just). __h_0_mem)) bitem ;
                                                // ----------
                                                ;
                                                ({ /* letn6330 */
                                                  bool __h_case_result  = (true  &&  (((match6327 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6331 */
                                                        bitem  = (((match6327 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn6336 */
                                                      ({ /* letn6339 */
                                                        BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                        // ----------
                                                        Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6349 */
                                                            Ordering match6348  = compareKey (({ /* letn6354 */
                                                              typeof((bitem . __h_0_mem)) key ;
                                                              // ----------
                                                              ;
                                                              ({ /* letn6356 */
                                                                bool __h_case_result  = (true  &&  ({ /* progn6357 */
                                                                    key  = (bitem . __h_0_mem) ;
                                                                    true ;
                                                                  }) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* progn6362 */
                                                                    key ;
                                                                  }) : ({ /* letn6366 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* progn6368 */
                                                                      skey ;
                                                                    });
                                                                  }));
                                                              });
                                                            }), ({ /* letn6375 */
                                                              typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6373_0_arg ;
                                                              typeof((__h_match6373_0_arg . __h_0_mem)) key ;
                                                              // ----------
                                                              ;
                                                              ({ /* letn6377 */
                                                                bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6378 */
                                                                        __h_match6373_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                        true ;
                                                                      }) &&  (true  &&  ({ /* progn6380 */
                                                                          key  = (__h_match6373_0_arg . __h_0_mem) ;
                                                                          true ;
                                                                        }) ) ) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* progn6385 */
                                                                    key ;
                                                                  }) : ({ /* letn6389 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* progn6391 */
                                                                      skey ;
                                                                    });
                                                                  }));
                                                              });
                                                            }));
                                                            // ----------
                                                            ;
                                                            ({ /* letn6394 */
                                                              bool __h_case_result  = (true  &&  ((match6348 . __h_ctor) ==  __h_LT_t  ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn6398 */
                                                                  0;
                                                                }) : ({ /* letn6402 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn6404 */
                                                                    items_len ;
                                                                  });
                                                                }));
                                                            });
                                                          })), cloneAll_Rc_BTree_int_User (children )));
                                                      });
                                                    }) : ({ /* letn6409 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn6411 */
                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn6417 */
                                              typeof((((ptree -> __h_data). Internal). __h_0_mem)) pitems ;
                                              // ----------
                                              ;
                                              ({ /* letn6419 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn6420 */
                                                      pitems  = (((ptree -> __h_data). Internal). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn6425 */
                                                    ({ /* letn6431 */
                                                      Maybe_BTree_int_User_pair_t match6430  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match6430 . __h_data). Just). __h_0_mem)) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn6433 */
                                                        bool __h_case_result  = (true  &&  (((match6430 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6434 */
                                                              bitem  = (((match6430 . __h_data). Just). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn6439 */
                                                            ({ /* letn6441 */
                                                              BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6443 */
                                                                  Ordering match6348  = compareKey (({ /* letn6444 */
                                                                    typeof((bitem . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6446 */
                                                                      bool __h_case_result  = (true  &&  ({ /* progn6447 */
                                                                          key  = (bitem . __h_0_mem) ;
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6452 */
                                                                          key ;
                                                                        }) : ({ /* letn6454 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6456 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* letn6458 */
                                                                    typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6373_0_arg ;
                                                                    typeof((__h_match6373_0_arg . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6460 */
                                                                      bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6461 */
                                                                              __h_match6373_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                              true ;
                                                                            }) &&  (true  &&  ({ /* progn6463 */
                                                                                key  = (__h_match6373_0_arg . __h_0_mem) ;
                                                                                true ;
                                                                              }) ) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6468 */
                                                                          key ;
                                                                        }) : ({ /* letn6470 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6472 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6475 */
                                                                    bool __h_case_result  = (true  &&  ((match6348 . __h_ctor) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6479 */
                                                                        0;
                                                                      }) : ({ /* letn6481 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6483 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), cloneAll_Rc_BTree_int_User (children )));
                                                            });
                                                          }) : ({ /* letn6487 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn6489 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn6493 */
                                                    // ----------
                                                    ;
                                                    ({ /* progn6495 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* letn6501 */
                                      // ----------
                                      ;
                                      ({ /* progn6503 */
                                        (((items_len  ==  0 )) ? ({ /* letn6510 */
                                            typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
                                            // ----------
                                            ;
                                            ({ /* letn6512 */
                                              bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn6513 */
                                                    head  = (((children -> __h_data). Cons). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn6518 */
                                                  ({ /* letn6525 */
                                                    Maybe_BTree_int_User match6524  = deref_Rc_BTree_int_User (clone_Rc_BTree_int_User (head ));
                                                    typeof((((match6524 . __h_data). Just). __h_0_mem)) chtr ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6528 */
                                                      bool __h_case_result  = (true  &&  (((match6524 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6529 */
                                                            chtr  = (((match6524 . __h_data). Just). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6534 */
                                                          ({ /* letn6537 */
                                                            BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                            // ----------
                                                            Right_BTree_int_User_Error_BTree_int_User (chtr );
                                                          });
                                                        }) : ({ /* letn6543 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6545 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn6551 */
                                                  // ----------
                                                  ;
                                                  ({ /* progn6553 */
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
                        }) : ({ /* letn6557 */
                          typeof((((ntr -> __h_data). Internal). __h_0_mem)) items ;
                          typeof((((ntr -> __h_data). Internal). __h_1_mem)) children ;
                          // ----------
                          ;
                          ({ /* letn6559 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6560 */
                                    items  = (((ntr -> __h_data). Internal). __h_0_mem) ;
                                    true ;
                                  }) &&  ({ /* progn6562 */
                                    children  = (((ntr -> __h_data). Internal). __h_1_mem) ;
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn6567 */
                                ({ /* letn6569 */
                                  size_t items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* letn6571 */
                                      typeof((((wparent . __h_data). Just). __h_0_mem)) ptree ;
                                      // ----------
                                      ;
                                      ({ /* letn6573 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6574 */
                                              ptree  = (((wparent . __h_data). Just). __h_0_mem) ;
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* progn6579 */
                                            ({ /* letn6581 */
                                              typeof((((ptree -> __h_data). Branch). __h_0_mem)) pitems ;
                                              // ----------
                                              ;
                                              ({ /* letn6583 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn6584 */
                                                      pitems  = (((ptree -> __h_data). Branch). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn6589 */
                                                    ({ /* letn6591 */
                                                      Maybe_BTree_int_User_pair_t match6327  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match6327 . __h_data). Just). __h_0_mem)) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn6593 */
                                                        bool __h_case_result  = (true  &&  (((match6327 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6594 */
                                                              bitem  = (((match6327 . __h_data). Just). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn6599 */
                                                            ({ /* letn6601 */
                                                              BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6603 */
                                                                  Ordering match6348  = compareKey (({ /* letn6604 */
                                                                    typeof((bitem . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6606 */
                                                                      bool __h_case_result  = (true  &&  ({ /* progn6607 */
                                                                          key  = (bitem . __h_0_mem) ;
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6612 */
                                                                          key ;
                                                                        }) : ({ /* letn6614 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6616 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* letn6618 */
                                                                    typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6373_0_arg ;
                                                                    typeof((__h_match6373_0_arg . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6620 */
                                                                      bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6621 */
                                                                              __h_match6373_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                              true ;
                                                                            }) &&  (true  &&  ({ /* progn6623 */
                                                                                key  = (__h_match6373_0_arg . __h_0_mem) ;
                                                                                true ;
                                                                              }) ) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6628 */
                                                                          key ;
                                                                        }) : ({ /* letn6630 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6632 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6635 */
                                                                    bool __h_case_result  = (true  &&  ((match6348 . __h_ctor) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6639 */
                                                                        0;
                                                                      }) : ({ /* letn6641 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6643 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), cloneAll_Rc_BTree_int_User (children )));
                                                            });
                                                          }) : ({ /* letn6645 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn6647 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn6649 */
                                                    typeof((((ptree -> __h_data). Internal). __h_0_mem)) pitems ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6651 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn6652 */
                                                            pitems  = (((ptree -> __h_data). Internal). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6657 */
                                                          ({ /* letn6659 */
                                                            Maybe_BTree_int_User_pair_t match6430  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                            typeof((((match6430 . __h_data). Just). __h_0_mem)) bitem ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn6661 */
                                                              bool __h_case_result  = (true  &&  (((match6430 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6662 */
                                                                    bitem  = (((match6430 . __h_data). Just). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn6667 */
                                                                  ({ /* letn6669 */
                                                                    BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6671 */
                                                                        Ordering match6348  = compareKey (({ /* letn6672 */
                                                                          typeof((bitem . __h_0_mem)) key ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6674 */
                                                                            bool __h_case_result  = (true  &&  ({ /* progn6675 */
                                                                                key  = (bitem . __h_0_mem) ;
                                                                                true ;
                                                                              }) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6680 */
                                                                                key ;
                                                                              }) : ({ /* letn6682 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6684 */
                                                                                  skey ;
                                                                                });
                                                                              }));
                                                                          });
                                                                        }), ({ /* letn6686 */
                                                                          typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6373_0_arg ;
                                                                          typeof((__h_match6373_0_arg . __h_0_mem)) key ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6688 */
                                                                            bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6689 */
                                                                                    __h_match6373_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) &&  (true  &&  ({ /* progn6691 */
                                                                                      key  = (__h_match6373_0_arg . __h_0_mem) ;
                                                                                      true ;
                                                                                    }) ) ) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6696 */
                                                                                key ;
                                                                              }) : ({ /* letn6698 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6700 */
                                                                                  skey ;
                                                                                });
                                                                              }));
                                                                          });
                                                                        }));
                                                                        // ----------
                                                                        ;
                                                                        ({ /* letn6703 */
                                                                          bool __h_case_result  = (true  &&  ((match6348 . __h_ctor) ==  __h_LT_t  ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* progn6707 */
                                                                              0;
                                                                            }) : ({ /* letn6709 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* progn6711 */
                                                                                items_len ;
                                                                              });
                                                                            }));
                                                                        });
                                                                      })), cloneAll_Rc_BTree_int_User (children )));
                                                                  });
                                                                }) : ({ /* letn6713 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn6715 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn6717 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6719 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* letn6721 */
                                            // ----------
                                            ;
                                            ({ /* progn6723 */
                                              (((items_len  ==  0 )) ? ({ /* letn6725 */
                                                  typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn6727 */
                                                    bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn6728 */
                                                          head  = (((children -> __h_data). Cons). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn6733 */
                                                        ({ /* letn6735 */
                                                          Maybe_BTree_int_User match6524  = deref_Rc_BTree_int_User (clone_Rc_BTree_int_User (head ));
                                                          typeof((((match6524 . __h_data). Just). __h_0_mem)) chtr ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn6737 */
                                                            bool __h_case_result  = (true  &&  (((match6524 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6738 */
                                                                  chtr  = (((match6524 . __h_data). Just). __h_0_mem) ;
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn6743 */
                                                                ({ /* letn6745 */
                                                                  BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                                  // ----------
                                                                  Right_BTree_int_User_Error_BTree_int_User (chtr );
                                                                });
                                                              }) : ({ /* letn6747 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn6749 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn6751 */
                                                        // ----------
                                                        ;
                                                        ({ /* progn6753 */
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
                              }) : ({ /* letn6757 */
                                // ----------
                                ;
                                ({ /* progn6759 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* letn6763 */
                  // ----------
                  ;
                  ({ /* progn6765 */
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
    return ({ /* letn6781 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn6783 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn6784 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn6786 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn6788 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn6793 */
              ({ /* letn6799 */
                Ordering match6798  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn6801 */
                  bool __h_case_result  = (true  &&  ((match6798 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn6805 */
                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                    }) : ({ /* letn6811 */
                      // ----------
                      ;
                      ({ /* letn6813 */
                        bool __h_case_result  = (true  &&  ((match6798 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn6817 */
                            ({ /* letn6820 */
                              Either_BTree_int_User_Error_BTree_int_User result  = Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current )));
                              // ----------
                              { /* let6827 */
                                // ----------
                                ;
                                ({ /* letn6829 */
                                  bool __h_case_result  = (true  &&  ((result . __h_ctor) ==  __h_Right_t  ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block6835 */
                                      if (callback )
                                        { /* block6840 */
                                          callback (head );
                                        }
                                    }
                                });
                              }
                              result ;
                            });
                          }) : ({ /* letn6844 */
                            // ----------
                            ;
                            ({ /* progn6846 */
                              deleteLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn6850 */
              // ----------
              ;
              ({ /* progn6852 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
              });
            }));
        });
      });
  }
  return ({ /* letn6857 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn6862 */
        typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
        typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
        // ----------
        ;
        ({ /* letn6864 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6865 */
                  items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn6867 */
                  children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn6872 */
              deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
            }) : ({ /* letn6878 */
              typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
              typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
              // ----------
              ;
              ({ /* letn6880 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6881 */
                        items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                        true ;
                      }) &&  ({ /* progn6883 */
                        children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn6888 */
                    deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
                  }) : ({ /* letn6892 */
                    typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                    // ----------
                    ;
                    ({ /* letn6894 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn6895 */
                            items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn6900 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* letn6904 */
                          // ----------
                          ;
                          ({ /* progn6906 */
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
  return ({ /* letn6923 */
      BTree_int_User tree  = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
      // ----------
      for (size_t i  = 0; (i  <  len  ); (++i )) {
          { /* let6932 */
            Either_BTree_int_User_Error_BTree_int_User match6931  = insert_BTree_int_User (tree , keys [i ], values [i ]);
            typeof((((match6931 . __h_data). Right). __h_0_mem)) new_tree ;
            // ----------
            ;
            ({ /* letn6935 */
              bool __h_case_result  = (true  &&  (((match6931 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6936 */
                    new_tree  = (((match6931 . __h_data). Right). __h_0_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* block6943 */
                  { /* block6945 */
                    free_BTree_int_User ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* let6951 */
                  Either_BTree_int_User_Error_BTree_int_User left  = match6931 ;
                  // ----------
                  ;
                  { /* block6953 */
                    { /* block6955 */
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
    return ({ /* letn6968 */
        typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((children -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn6970 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6971 */
                  head  = (((children -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn6973 */
                  tail  = (((children -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn6978 */
              (({ /* letn6984 */
                  // ----------
                  ;
                  ({ /* letn6986 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn6990 */
                        ({ /* letn6997 */
                          Maybe_BTree_int_User match6996  = deref_Rc_BTree_int_User (head );
                          typeof((((match6996 . __h_data). Just). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn6999 */
                            bool __h_case_result  = (true  &&  (((match6996 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7000 */
                                  tr  = (((match6996 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn7005 */
                                (showTree (indent , tr ) +  fprintf (file , "\n") );
                              }) : ({ /* letn7009 */
                                // ----------
                                ;
                                ({ /* progn7011 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn7015 */
                        // ----------
                        ;
                        ({ /* progn7017 */
                          ({ /* letn7024 */
                            Maybe_BTree_int_User match7023  = deref_Rc_BTree_int_User (head );
                            typeof((((match7023 . __h_data). Just). __h_0_mem)) tr ;
                            // ----------
                            ;
                            ({ /* letn7026 */
                              bool __h_case_result  = (true  &&  (((match7023 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7027 */
                                    tr  = (((match7023 . __h_data). Just). __h_0_mem) ;
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn7032 */
                                  showTree (indent , tr );
                                }) : ({ /* letn7036 */
                                  // ----------
                                  ;
                                  ({ /* progn7038 */
                                    0;
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }) +  showChildren (indent , tail ) );
            }) : ({ /* letn7042 */
              // ----------
              ;
              ({ /* progn7044 */
                0;
              });
            }));
        });
      });
  }
  size_t showTree (int indent , BTree_int_User tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* letn7051 */
          typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
          typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
          // ----------
          ;
          ({ /* letn7053 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7054 */
                    items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn7056 */
                    children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* progn7061 */
                (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* letn7068 */
                    // ----------
                    ;
                    ({ /* letn7070 */
                      bool __h_case_result  = (true  &&  ((children -> __h_ctor) ==  __h_Cons_t  ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn7074 */
                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                        }) : ({ /* letn7078 */
                          // ----------
                          ;
                          ({ /* progn7080 */
                            0;
                          });
                        }));
                    });
                  }) );
              }) : ({ /* letn7084 */
                typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
                typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
                // ----------
                ;
                ({ /* letn7086 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7087 */
                          items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                          true ;
                        }) &&  ({ /* progn7089 */
                          children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7094 */
                      (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* letn7096 */
                          // ----------
                          ;
                          ({ /* letn7098 */
                            bool __h_case_result  = (true  &&  ((children -> __h_ctor) ==  __h_Cons_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn7102 */
                                (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                              }) : ({ /* letn7104 */
                                // ----------
                                ;
                                ({ /* progn7106 */
                                  0;
                                });
                              }));
                          });
                        }) );
                    }) : ({ /* letn7110 */
                      typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                      // ----------
                      ;
                      ({ /* letn7112 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7113 */
                              items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn7118 */
                            show_List_BTree_int_User_pair_t (file , items );
                          }) : ({ /* letn7123 */
                            // ----------
                            ;
                            ({ /* progn7125 */
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
    { /* let7138 */
      typeof((((currentChild -> __h_data). Cons). __h_0_mem)) wheadC ;
      typeof((((currentChild -> __h_data). Cons). __h_1_mem)) tailC ;
      // ----------
      ;
      ({ /* letn7140 */
        bool __h_case_result  = (true  &&  (((currentChild -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7141 */
                wheadC  = (((currentChild -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn7143 */
                tailC  = (((currentChild -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block7150 */
            { /* let7154 */
              Maybe_BTree_int_User match7153  = deref_Rc_BTree_int_User (wheadC );
              typeof((((match7153 . __h_data). Just). __h_0_mem)) headC ;
              // ----------
              ;
              ({ /* letn7157 */
                bool __h_case_result  = (true  &&  (((match7153 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7158 */
                      headC  = (((match7153 . __h_data). Just). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* block7165 */
                    { /* let7169 */
                      // ----------
                      ;
                      ({ /* letn7171 */
                        bool __h_case_result  = (true  &&  ((tailC -> __h_ctor) ==  __h_Cons_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* block7177 */
                            { /* block7179 */
                              { /* let7183 */
                                typeof((((headC -> __h_data). Branch). __h_0_mem)) items ;
                                typeof((((headC -> __h_data). Branch). __h_1_mem)) children ;
                                // ----------
                                ;
                                ({ /* letn7185 */
                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7186 */
                                          items  = (((headC -> __h_data). Branch). __h_0_mem) ;
                                          true ;
                                        }) &&  ({ /* progn7188 */
                                          children  = (((headC -> __h_data). Branch). __h_1_mem) ;
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block7195 */
                                      traverseInternal (items , children );
                                    }
                                  else
                                    { /* let7200 */
                                      typeof((((headC -> __h_data). Internal). __h_0_mem)) items ;
                                      typeof((((headC -> __h_data). Internal). __h_1_mem)) children ;
                                      // ----------
                                      ;
                                      ({ /* letn7202 */
                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7203 */
                                                items  = (((headC -> __h_data). Internal). __h_0_mem) ;
                                                true ;
                                              }) &&  ({ /* progn7205 */
                                                children  = (((headC -> __h_data). Internal). __h_1_mem) ;
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        
                                        if (__h_case_result )
                                          { /* block7212 */
                                            traverseInternal (items , children );
                                          }
                                        else
                                          { /* let7217 */
                                            typeof((((headC -> __h_data). Leaf). __h_0_mem)) items ;
                                            // ----------
                                            ;
                                            ({ /* letn7219 */
                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7220 */
                                                    items  = (((headC -> __h_data). Leaf). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* block7227 */
                                                  traverseLeaf (items , True ());
                                                }
                                            });
                                          }
                                      });
                                    }
                                });
                              }
                              { /* let7231 */
                                typeof((((currentItem -> __h_data). Cons). __h_0_mem)) headI ;
                                typeof((((currentItem -> __h_data). Cons). __h_1_mem)) tailI ;
                                // ----------
                                ;
                                ({ /* letn7233 */
                                  bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7234 */
                                          headI  = (((currentItem -> __h_data). Cons). __h_0_mem) ;
                                          true ;
                                        }) &&  ({ /* progn7236 */
                                          tailI  = (((currentItem -> __h_data). Cons). __h_1_mem) ;
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block7243 */
                                      { /* block7245 */
                                        callback (headI , True ());
                                        traverseInternal (tailI , tailC );
                                      }
                                    }
                                });
                              }
                            }
                          }
                        else
                          { /* let7250 */
                            // ----------
                            ;
                            { /* block7252 */
                              { /* block7254 */
                                { /* let7258 */
                                  typeof((((headC -> __h_data). Branch). __h_0_mem)) items ;
                                  typeof((((headC -> __h_data). Branch). __h_1_mem)) children ;
                                  // ----------
                                  ;
                                  ({ /* letn7260 */
                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7261 */
                                            items  = (((headC -> __h_data). Branch). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn7263 */
                                            children  = (((headC -> __h_data). Branch). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block7270 */
                                        traverseInternal (items , children );
                                      }
                                    else
                                      { /* let7275 */
                                        typeof((((headC -> __h_data). Internal). __h_0_mem)) items ;
                                        typeof((((headC -> __h_data). Internal). __h_1_mem)) children ;
                                        // ----------
                                        ;
                                        ({ /* letn7277 */
                                          bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7278 */
                                                  items  = (((headC -> __h_data). Internal). __h_0_mem) ;
                                                  true ;
                                                }) &&  ({ /* progn7280 */
                                                  children  = (((headC -> __h_data). Internal). __h_1_mem) ;
                                                  true ;
                                                }) ) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* block7287 */
                                              traverseInternal (items , children );
                                            }
                                          else
                                            { /* let7292 */
                                              typeof((((headC -> __h_data). Leaf). __h_0_mem)) items ;
                                              // ----------
                                              ;
                                              ({ /* letn7294 */
                                                bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7295 */
                                                      items  = (((headC -> __h_data). Leaf). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                if (__h_case_result )
                                                  { /* block7302 */
                                                    traverseLeaf (items , False ());
                                                  }
                                              });
                                            }
                                        });
                                      }
                                  });
                                }
                                { /* let7306 */
                                  typeof((((currentItem -> __h_data). Cons). __h_0_mem)) headI ;
                                  typeof((((currentItem -> __h_data). Cons). __h_1_mem)) tailI ;
                                  // ----------
                                  ;
                                  ({ /* letn7308 */
                                    bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7309 */
                                            headI  = (((currentItem -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn7311 */
                                            tailI  = (((currentItem -> __h_data). Cons). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block7318 */
                                        { /* block7320 */
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
    { /* let7326 */
      typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn7328 */
        bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7329 */
                head  = (((current -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn7331 */
                tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block7338 */
            { /* block7340 */
              callback (head , ({ /* letn7346 */
                  // ----------
                  ;
                  ({ /* letn7348 */
                    bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor) ==  __h_True_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7352 */
                        hasNextLeaf ;
                      }) : ({ /* letn7356 */
                        // ----------
                        ;
                        ({ /* progn7358 */
                          ({ /* letn7364 */
                            // ----------
                            ;
                            ({ /* letn7366 */
                              bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn7370 */
                                  True ();
                                }) : ({ /* letn7374 */
                                  // ----------
                                  ;
                                  ({ /* progn7376 */
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
  { /* let7380 */
    typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
    typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
    // ----------
    ;
    ({ /* letn7382 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7383 */
              items  = (((tree -> __h_data). Branch). __h_0_mem) ;
              true ;
            }) &&  ({ /* progn7385 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* block7392 */
          traverseInternal (items , children );
        }
      else
        { /* let7397 */
          typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
          typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
          // ----------
          ;
          ({ /* letn7399 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7400 */
                    items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn7402 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            if (__h_case_result )
              { /* block7409 */
                traverseInternal (items , children );
              }
            else
              { /* let7414 */
                typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                // ----------
                ;
                ({ /* letn7416 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7417 */
                        items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* block7424 */
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
    return ({ /* letn7441 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7443 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7444 */
                  head  = (((current -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn7446 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7451 */
              ({ /* letn7457 */
                // ----------
                ;
                ({ /* letn7459 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7463 */
                      ({ /* letn7470 */
                        Maybe_BTree_int_User match7469  = deref_Rc_BTree_int_User (head );
                        typeof((((match7469 . __h_data). Just). __h_0_mem)) child ;
                        // ----------
                        ;
                        ({ /* letn7472 */
                          bool __h_case_result  = (true  &&  (((match7469 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7473 */
                                child  = (((match7469 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn7478 */
                              ({ /* letn7484 */
                                typeof((((child -> __h_data). Branch). __h_1_mem)) nchildren ;
                                // ----------
                                ;
                                ({ /* letn7486 */
                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7487 */
                                        nchildren  = (((child -> __h_data). Branch). __h_1_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn7492 */
                                      maxInternal (nchildren );
                                    }) : ({ /* letn7496 */
                                      typeof((((child -> __h_data). Internal). __h_1_mem)) nchildren ;
                                      // ----------
                                      ;
                                      ({ /* letn7498 */
                                        bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7499 */
                                              nchildren  = (((child -> __h_data). Internal). __h_1_mem) ;
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* progn7504 */
                                            maxInternal (nchildren );
                                          }) : ({ /* letn7508 */
                                            typeof((((child -> __h_data). Leaf). __h_0_mem)) items ;
                                            // ----------
                                            ;
                                            ({ /* letn7510 */
                                              bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7511 */
                                                    items  = (((child -> __h_data). Leaf). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn7516 */
                                                  maxLeaf (items );
                                                }) : ({ /* letn7520 */
                                                  // ----------
                                                  ;
                                                  ({ /* progn7522 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          }));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn7527 */
                              // ----------
                              ;
                              ({ /* progn7529 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn7534 */
                      // ----------
                      ;
                      ({ /* progn7536 */
                        maxInternal (tail );
                      });
                    }));
                });
              });
            }) : ({ /* letn7540 */
              // ----------
              ;
              ({ /* progn7542 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current ) {
    return ({ /* letn7552 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7554 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7555 */
                  head  = (((current -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn7557 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7562 */
              ({ /* letn7568 */
                // ----------
                ;
                ({ /* letn7570 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7574 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* letn7579 */
                      // ----------
                      ;
                      ({ /* progn7581 */
                        maxLeaf (tail );
                      });
                    }));
                });
              });
            }) : ({ /* letn7585 */
              // ----------
              ;
              ({ /* progn7587 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn7594 */
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn7596 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7597 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn7602 */
            maxInternal (children );
          }) : ({ /* letn7606 */
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn7608 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7609 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn7614 */
                  maxInternal (children );
                }) : ({ /* letn7618 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn7620 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7621 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7626 */
                        maxLeaf (items );
                      }) : ({ /* letn7630 */
                        // ----------
                        ;
                        ({ /* progn7632 */
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
    return ({ /* letn7650 */
        typeof((((first -> __h_data). Cons). __h_0_mem)) head ;
        // ----------
        ;
        ({ /* letn7652 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn7653 */
                head  = (((first -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7658 */
              ({ /* letn7665 */
                Maybe_BTree_int_User match7664  = deref_Rc_BTree_int_User (head );
                typeof((((match7664 . __h_data). Just). __h_0_mem)) child ;
                // ----------
                ;
                ({ /* letn7667 */
                  bool __h_case_result  = (true  &&  (((match7664 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7668 */
                        child  = (((match7664 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7673 */
                      ({ /* letn7679 */
                        typeof((((child -> __h_data). Branch). __h_1_mem)) nchildren ;
                        // ----------
                        ;
                        ({ /* letn7681 */
                          bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7682 */
                                nchildren  = (((child -> __h_data). Branch). __h_1_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn7687 */
                              minInternal (nchildren );
                            }) : ({ /* letn7691 */
                              typeof((((child -> __h_data). Internal). __h_1_mem)) nchildren ;
                              // ----------
                              ;
                              ({ /* letn7693 */
                                bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7694 */
                                      nchildren  = (((child -> __h_data). Internal). __h_1_mem) ;
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn7699 */
                                    minInternal (nchildren );
                                  }) : ({ /* letn7703 */
                                    typeof((((child -> __h_data). Leaf). __h_0_mem)) items ;
                                    // ----------
                                    ;
                                    ({ /* letn7705 */
                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7706 */
                                            items  = (((child -> __h_data). Leaf). __h_0_mem) ;
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn7711 */
                                          minLeaf (items );
                                        }) : ({ /* letn7715 */
                                          // ----------
                                          ;
                                          ({ /* progn7717 */
                                            Nothing_BTree_int_User_pair_t ();
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn7722 */
                      // ----------
                      ;
                      ({ /* progn7724 */
                        Nothing_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* letn7729 */
              // ----------
              ;
              ({ /* progn7731 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first ) {
    return ({ /* letn7741 */
        typeof((((first -> __h_data). Cons). __h_0_mem)) head ;
        // ----------
        ;
        ({ /* letn7743 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn7744 */
                head  = (((first -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7749 */
              Just_BTree_int_User_pair_t (head );
            }) : ({ /* letn7754 */
              // ----------
              ;
              ({ /* progn7756 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn7763 */
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn7765 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7766 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn7771 */
            minInternal (children );
          }) : ({ /* letn7775 */
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn7777 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7778 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn7783 */
                  minInternal (children );
                }) : ({ /* letn7787 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn7789 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7790 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7795 */
                        minLeaf (items );
                      }) : ({ /* letn7799 */
                        // ----------
                        ;
                        ({ /* progn7801 */
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
    return ({ /* letn7823 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7825 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn7826 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn7828 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn7830 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7835 */
              ({ /* letn7841 */
                Ordering match7840  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn7843 */
                  bool __h_case_result  = (true  &&  ((match7840 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7847 */
                      ({ /* letn7854 */
                        Maybe_Rc_BTree_int_User match7853  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match7853 . __h_data). Just). __h_0_mem)) node ;
                        // ----------
                        ;
                        ({ /* letn7856 */
                          bool __h_case_result  = (true  &&  (((match7853 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7857 */
                                node  = (((match7853 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn7862 */
                              ({ /* letn7869 */
                                Maybe_BTree_int_User match7868  = deref_Rc_BTree_int_User (node );
                                typeof((((match7868 . __h_data). Just). __h_0_mem)) tr ;
                                // ----------
                                ;
                                ({ /* letn7871 */
                                  bool __h_case_result  = (true  &&  (((match7868 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7872 */
                                        tr  = (((match7868 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn7877 */
                                      search_BTree_int_User (tr , skey );
                                    }) : ({ /* letn7882 */
                                      // ----------
                                      ;
                                      ({ /* progn7884 */
                                        Nothing_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn7889 */
                              // ----------
                              ;
                              ({ /* progn7891 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn7896 */
                      // ----------
                      ;
                      ({ /* letn7898 */
                        bool __h_case_result  = (true  &&  ((match7840 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn7902 */
                            Just_BTree_int_User_pair_t (head );
                          }) : ({ /* letn7907 */
                            // ----------
                            ;
                            ({ /* progn7909 */
                              ({ /* letn7915 */
                                // ----------
                                ;
                                ({ /* letn7917 */
                                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn7921 */
                                      ({ /* letn7928 */
                                        Maybe_Rc_BTree_int_User match7927  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                        typeof((((match7927 . __h_data). Just). __h_0_mem)) node ;
                                        // ----------
                                        ;
                                        ({ /* letn7930 */
                                          bool __h_case_result  = (true  &&  (((match7927 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7931 */
                                                node  = (((match7927 . __h_data). Just). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn7936 */
                                              ({ /* letn7943 */
                                                Maybe_BTree_int_User match7942  = deref_Rc_BTree_int_User (node );
                                                typeof((((match7942 . __h_data). Just). __h_0_mem)) tr ;
                                                // ----------
                                                ;
                                                ({ /* letn7945 */
                                                  bool __h_case_result  = (true  &&  (((match7942 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7946 */
                                                        tr  = (((match7942 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn7951 */
                                                      search_BTree_int_User (tr , skey );
                                                    }) : ({ /* letn7956 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn7958 */
                                                        Nothing_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn7963 */
                                              // ----------
                                              ;
                                              ({ /* progn7965 */
                                                Nothing_BTree_int_User_pair_t ();
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* letn7970 */
                                      // ----------
                                      ;
                                      ({ /* progn7972 */
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
            }) : ({ /* letn7976 */
              // ----------
              ;
              ({ /* progn7978 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t searchLeaf (List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* letn7989 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7991 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn7992 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn7994 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn7996 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8001 */
              ({ /* letn8007 */
                Ordering match8006  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8009 */
                  bool __h_case_result  = (true  &&  ((match8006 . __h_ctor) ==  __h_EQ_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8013 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* letn8018 */
                      // ----------
                      ;
                      ({ /* progn8020 */
                        ({ /* letn8026 */
                          // ----------
                          ;
                          ({ /* letn8028 */
                            bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8032 */
                                Nothing_BTree_int_User_pair_t ();
                              }) : ({ /* letn8037 */
                                // ----------
                                ;
                                ({ /* progn8039 */
                                  searchLeaf (tail , (index  +  1 ));
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* letn8043 */
              // ----------
              ;
              ({ /* progn8045 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn8052 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8054 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8055 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8057 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn8062 */
            searchInternal (children , items , 0);
          }) : ({ /* letn8066 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8068 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8069 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8071 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn8076 */
                  searchInternal (children , items , 0);
                }) : ({ /* letn8080 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8082 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8083 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8088 */
                        searchLeaf (items , 0);
                      }) : ({ /* letn8092 */
                        // ----------
                        ;
                        ({ /* progn8094 */
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
    { /* block8107 */
      return Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_ORDER (3));
    }
  Either_BTree_int_User_Error_BTree_int_User insertInternal (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* letn8123 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8125 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8126 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8128 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn8130 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8135 */
              ({ /* letn8141 */
                Ordering match8140  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8143 */
                  bool __h_case_result  = (true  &&  ((match8140 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8147 */
                      ({ /* letn8154 */
                        Maybe_Rc_BTree_int_User match8153  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match8153 . __h_data). Just). __h_0_mem)) child ;
                        // ----------
                        ;
                        ({ /* letn8156 */
                          bool __h_case_result  = (true  &&  (((match8153 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8157 */
                                child  = (((match8153 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn8162 */
                              ({ /* letn8169 */
                                Maybe_BTree_int_User match8168  = deref_Rc_BTree_int_User (child );
                                typeof((((match8168 . __h_data). Just). __h_0_mem)) tr ;
                                // ----------
                                ;
                                ({ /* letn8171 */
                                  bool __h_case_result  = (true  &&  (((match8168 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8172 */
                                        tr  = (((match8168 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn8177 */
                                      ({ /* letn8184 */
                                        Either_BTree_int_User_Error_BTree_int_User match8183  = insert_BTree_int_User (tr , skey , svalue );
                                        typeof((((match8183 . __h_data). Right). __h_0_mem)) child_tree ;
                                        // ----------
                                        ;
                                        ({ /* letn8186 */
                                          bool __h_case_result  = (true  &&  (((match8183 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8187 */
                                                child_tree  = (((match8183 . __h_data). Right). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn8192 */
                                              ({ /* letn8198 */
                                                typeof((((child_tree -> __h_data). Branch). __h_0_mem)) child_items ;
                                                typeof((((child_tree -> __h_data). Branch). __h_1_mem)) child_children ;
                                                // ----------
                                                ;
                                                ({ /* letn8200 */
                                                  bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8201 */
                                                          child_items  = (((child_tree -> __h_data). Branch). __h_0_mem) ;
                                                          true ;
                                                        }) &&  ({ /* progn8203 */
                                                          child_children  = (((child_tree -> __h_data). Branch). __h_1_mem) ;
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn8208 */
                                                      ({ /* letn8215 */
                                                        typeof((((child_items -> __h_data). Cons). __h_0_mem)) single_item ;
                                                        typeof((((child_items -> __h_data). Cons). __h_1_mem)) __h_match8213_1_arg ;
                                                        // ----------
                                                        ;
                                                        ({ /* letn8217 */
                                                          bool __h_case_result  = (true  &&  (((child_items -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8218 */
                                                                    single_item  = (((child_items -> __h_data). Cons). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn8220 */
                                                                    __h_match8213_1_arg  = (((child_items -> __h_data). Cons). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) &&  (true  &&  ((__h_match8213_1_arg -> __h_ctor) ==  __h_Nil_t  ) ) ) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* progn8225 */
                                                              ({ /* letn8228 */
                                                                BTree_int_User child_tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = child_tree ;
                                                                // ----------
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* letn8239 */
                                                                    List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                                    List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                    List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                    List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                    // ----------
                                                                    cloneAll_Rc_BTree_int_User (r4 );
                                                                  })));
                                                              });
                                                            }) : ({ /* letn8248 */
                                                              // ----------
                                                              ;
                                                              ({ /* progn8250 */
                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* letn8256 */
                                                      // ----------
                                                      ;
                                                      ({ /* letn8258 */
                                                        bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor) ==  __h_Internal_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn8262 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8273 */
                                                                List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                                List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                                                List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                                                List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                // ----------
                                                                append_List_Rc_BTree_int_User (r2 , r5 );
                                                              })));
                                                          }) : ({ /* letn8284 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn8286 */
                                                              Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8297 */
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
                                            }) : ({ /* letn8308 */
                                              Either_BTree_int_User_Error_BTree_int_User passthru  = match8183 ;
                                              // ----------
                                              ;
                                              ({ /* progn8310 */
                                                passthru ;
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* letn8314 */
                                      // ----------
                                      ;
                                      ({ /* progn8316 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn8322 */
                              // ----------
                              ;
                              ({ /* progn8324 */
                                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn8332 */
                      // ----------
                      ;
                      ({ /* letn8334 */
                        bool __h_case_result  = (true  &&  ((match8140 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn8338 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* letn8344 */
                            // ----------
                            ;
                            ({ /* progn8346 */
                              insertInternal (items , children , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn8350 */
              // ----------
              ;
              ({ /* progn8352 */
                ({ /* letn8359 */
                  Maybe_Rc_BTree_int_User match8358  = nth_List_Rc_BTree_int_User (index , children );
                  typeof((((match8358 . __h_data). Just). __h_0_mem)) child ;
                  // ----------
                  ;
                  ({ /* letn8361 */
                    bool __h_case_result  = (true  &&  (((match8358 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8362 */
                          child  = (((match8358 . __h_data). Just). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8367 */
                        ({ /* letn8374 */
                          Maybe_BTree_int_User match8373  = deref_Rc_BTree_int_User (child );
                          typeof((((match8373 . __h_data). Just). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn8376 */
                            bool __h_case_result  = (true  &&  (((match8373 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8377 */
                                  tr  = (((match8373 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8382 */
                                ({ /* letn8389 */
                                  Either_BTree_int_User_Error_BTree_int_User match8388  = insert_BTree_int_User (tr , skey , svalue );
                                  typeof((((match8388 . __h_data). Right). __h_0_mem)) child_tree ;
                                  // ----------
                                  ;
                                  ({ /* letn8391 */
                                    bool __h_case_result  = (true  &&  (((match8388 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8392 */
                                          child_tree  = (((match8388 . __h_data). Right). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn8397 */
                                        ({ /* letn8403 */
                                          typeof((((child_tree -> __h_data). Branch). __h_0_mem)) child_items ;
                                          typeof((((child_tree -> __h_data). Branch). __h_1_mem)) child_children ;
                                          // ----------
                                          ;
                                          ({ /* letn8405 */
                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8406 */
                                                    child_items  = (((child_tree -> __h_data). Branch). __h_0_mem) ;
                                                    true ;
                                                  }) &&  ({ /* progn8408 */
                                                    child_children  = (((child_tree -> __h_data). Branch). __h_1_mem) ;
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn8413 */
                                                ({ /* letn8420 */
                                                  typeof((((child_items -> __h_data). Cons). __h_0_mem)) single_item ;
                                                  typeof((((child_items -> __h_data). Cons). __h_1_mem)) __h_match8418_1_arg ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn8422 */
                                                    bool __h_case_result  = (true  &&  (((child_items -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8423 */
                                                              single_item  = (((child_items -> __h_data). Cons). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn8425 */
                                                              __h_match8418_1_arg  = (((child_items -> __h_data). Cons). __h_1_mem) ;
                                                              true ;
                                                            }) ) &&  (true  &&  ((__h_match8418_1_arg -> __h_ctor) ==  __h_Nil_t  ) ) ) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn8430 */
                                                        ({ /* letn8433 */
                                                          BTree_int_User child_tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = child_tree ;
                                                          // ----------
                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* letn8444 */
                                                              List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                              List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                              List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (child_children , r2 );
                                                              List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r1 , r3 );
                                                              // ----------
                                                              cloneAll_Rc_BTree_int_User (r4 );
                                                            })));
                                                        });
                                                      }) : ({ /* letn8453 */
                                                        // ----------
                                                        ;
                                                        ({ /* progn8455 */
                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn8461 */
                                                // ----------
                                                ;
                                                ({ /* letn8463 */
                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn8467 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8476 */
                                                          List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                          List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                                          List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                          // ----------
                                                          append_List_Rc_BTree_int_User (r2 , r3 );
                                                        })));
                                                    }) : ({ /* letn8485 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn8487 */
                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8496 */
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
                                      }) : ({ /* letn8505 */
                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match8388 ;
                                        // ----------
                                        ;
                                        ({ /* progn8507 */
                                          passthru ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* letn8511 */
                                // ----------
                                ;
                                ({ /* progn8513 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (((BTree_int_User_pair_t){ }), index ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn8520 */
                        // ----------
                        ;
                        ({ /* progn8522 */
                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* letn8528 */
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
    return ({ /* letn8544 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8546 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8547 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8549 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn8551 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8556 */
              ({ /* letn8562 */
                Ordering match8561  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8564 */
                  bool __h_case_result  = (true  &&  ((match8561 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8568 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                    }) : ({ /* letn8576 */
                      // ----------
                      ;
                      ({ /* letn8578 */
                        bool __h_case_result  = (true  &&  ((match8561 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn8582 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* letn8588 */
                            // ----------
                            ;
                            ({ /* progn8590 */
                              insertLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn8594 */
              // ----------
              ;
              ({ /* progn8596 */
                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* letn8602 */
                    List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = wrap_List_BTree_int_User_pair_t (((BTree_int_User_pair_t){ skey , svalue }));
                    // ----------
                    append_List_BTree_int_User_pair_t (items , r1 );
                  })));
              });
            }));
        });
      });
  }
  return ({ /* letn8611 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8613 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8614 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8616 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn8621 */
            ({ /* letn8627 */
              Either_BTree_int_User_Error_BTree_int_User match8626  = insertInternal (items , children , items , 0);
              typeof((((match8626 . __h_data). Right). __h_0_mem)) tr ;
              // ----------
              ;
              ({ /* letn8629 */
                bool __h_case_result  = (true  &&  (((match8626 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8630 */
                      tr  = (((match8626 . __h_data). Right). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn8635 */
                    Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                  }) : ({ /* letn8641 */
                    Either_BTree_int_User_Error_BTree_int_User passthru  = match8626 ;
                    // ----------
                    ;
                    ({ /* progn8643 */
                      passthru ;
                    });
                  }));
              });
            });
          }) : ({ /* letn8647 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8649 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8650 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8652 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn8657 */
                  ({ /* letn8659 */
                    Either_BTree_int_User_Error_BTree_int_User match8626  = insertInternal (items , children , items , 0);
                    typeof((((match8626 . __h_data). Right). __h_0_mem)) tr ;
                    // ----------
                    ;
                    ({ /* letn8661 */
                      bool __h_case_result  = (true  &&  (((match8626 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8662 */
                            tr  = (((match8626 . __h_data). Right). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn8667 */
                          Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                        }) : ({ /* letn8669 */
                          Either_BTree_int_User_Error_BTree_int_User passthru  = match8626 ;
                          // ----------
                          ;
                          ({ /* progn8671 */
                            passthru ;
                          });
                        }));
                    });
                  });
                }) : ({ /* letn8675 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8677 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8678 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8683 */
                        ({ /* letn8689 */
                          Either_BTree_int_User_Error_BTree_int_User match8688  = insertLeaf (items , items , 0);
                          typeof((((match8688 . __h_data). Right). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn8691 */
                            bool __h_case_result  = (true  &&  (((match8688 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8692 */
                                  tr  = (((match8688 . __h_data). Right). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8697 */
                                Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                              }) : ({ /* letn8703 */
                                Either_BTree_int_User_Error_BTree_int_User passthru  = match8688 ;
                                // ----------
                                ;
                                ({ /* progn8705 */
                                  passthru ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn8709 */
                        // ----------
                        ;
                        ({ /* progn8711 */
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
  { /* let8719 */
    BTree_int_User this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_int_User children ) {
      { /* let8725 */
        typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((children -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8727 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn8728 */
                  head  = (((children -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn8730 */
                  tail  = (((children -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          if (__h_case_result )
            { /* block8737 */
              { /* block8739 */
                free_Rc_BTree_int_User ((&head ));
                freeChildren (tail );
              }
            }
        });
      }
    }
    { /* let8744 */
      typeof((((this -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((this -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8746 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8747 */
                items  = (((this -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8749 */
                children  = (((this -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block8756 */
            { /* block8758 */
              free_List_BTree_int_User_pair_t ((&items ));
              freeChildren (children );
              free_List_Rc_BTree_int_User ((&children ));
              free (this );
            }
          }
        else
          { /* let8769 */
            typeof((((this -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((this -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8771 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8772 */
                      items  = (((this -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8774 */
                      children  = (((this -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              if (__h_case_result )
                { /* block8781 */
                  { /* block8783 */
                    free_List_BTree_int_User_pair_t ((&items ));
                    freeChildren (children );
                    free_List_Rc_BTree_int_User ((&children ));
                    free (this );
                  }
                }
              else
                { /* let8790 */
                  typeof((((this -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8792 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8793 */
                          items  = (((this -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* block8800 */
                        { /* block8802 */
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
    { /* block8812 */
      free_BTree_int_User ((*this_ptr ));
    }
}
BTree_int_User__H_Table * const get_BTree_int_User__H_Table () {
  static BTree_int_User__H_Table table  = { free_BTree_int_User , pure_BTree_int_User , show_BTree_int_User , traverse_BTree_int_User , max_BTree_int_User , min_BTree_int_User , delete_BTree_int_User , search_BTree_int_User , insert_BTree_int_User , order_BTree_int_User };
  return (&table );
}
BTree_int_User Branch_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* let8822 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* let8828 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items ) {
  { /* let8834 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Leaf_t , .__h_data._ = { items }});
    return instance ;
  }
}
#endif /* __BTree_int_User__H_IMPL__ */ 
BTree_int_User ins (BTree_int_User tree , int key , int salary , int grade ) {
  ({ /* letn8844 */
    Either_BTree_int_User_Error_BTree_int_User match8843  = insert_BTree_int_User (tree , key , ((User){ salary , grade }));
    typeof((((match8843 . __h_data). Right). __h_0_mem)) ntr ;
    // ----------
    ;
    ({ /* letn8846 */
      bool __h_case_result  = (true  &&  (((match8843 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8847 */
            ntr  = (((match8843 . __h_data). Right). __h_0_mem) ;
            true ;
          }) ) );
      // ----------
      
      ((__h_case_result ) ? ({ /* progn8852 */
          return ntr ;
        }) : ({ /* letn8856 */
          // ----------
          ;
          ({ /* progn8858 */
            { /* block8860 */
              bad  = (bad  +  1 );
              return Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
            }
          });
        }));
    });
  });
}
BTree_int_User del (BTree_int_User tree , int key ) {
  ({ /* letn8870 */
    Either_BTree_int_User_Error_BTree_int_User match8869  = delete_BTree_int_User (tree , key , NULL );
    typeof((((match8869 . __h_data). Right). __h_0_mem)) ntr ;
    // ----------
    ;
    ({ /* letn8872 */
      bool __h_case_result  = (true  &&  (((match8869 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8873 */
            ntr  = (((match8869 . __h_data). Right). __h_0_mem) ;
            true ;
          }) ) );
      // ----------
      
      ((__h_case_result ) ? ({ /* progn8878 */
          return ntr ;
        }) : ({ /* letn8882 */
          // ----------
          ;
          ({ /* progn8884 */
            { /* block8886 */
              bad  = (bad  +  1 );
              return Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
            }
          });
        }));
    });
  });
}
long salaryOf (BTree_int_User tree , int key ) {
  return ({ /* letn8898 */
      Maybe_BTree_int_User_pair_t match8895  = search_BTree_int_User (tree , key );
      typeof((((match8895 . __h_data). Just). __h_0_mem)) __h_match8895_0_arg ;
      typeof((__h_match8895_0_arg . __h_1_mem)) __h_match8896_1_arg ;
      typeof((__h_match8896_1_arg . __h_0_mem)) salary ;
      // ----------
      ;
      ({ /* letn8900 */
        bool __h_case_result  = (true  &&  (((match8895 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn8901 */
                __h_match8895_0_arg  = (((match8895 . __h_data). Just). __h_0_mem) ;
                true ;
              }) &&  (true  &&  (({ /* progn8903 */
                    __h_match8896_1_arg  = (__h_match8895_0_arg . __h_1_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8905 */
                      salary  = (__h_match8896_1_arg . __h_0_mem) ;
                      true ;
                    }) ) ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn8910 */
            ((long)salary );
          }) : ({ /* letn8914 */
            // ----------
            ;
            ({ /* progn8916 */
              -1;
            });
          }));
      });
    });
}
void __ciciliL_8920 (BTree_int_User_pair_t item , Bool hasNext ) {
  { /* let8926 */
    typeof((item . __h_1_mem)) __h_match8924_1_arg ;
    typeof((__h_match8924_1_arg . __h_0_mem)) salary ;
    // ----------
    ;
    ({ /* letn8928 */
      bool __h_case_result  = (true  &&  (({ /* progn8929 */
            __h_match8924_1_arg  = (item . __h_1_mem) ;
            true ;
          }) &&  (true  &&  ({ /* progn8931 */
              salary  = (__h_match8924_1_arg . __h_0_mem) ;
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* block8938 */
          { /* block8940 */
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
  traverse_BTree_int_User (tree , __ciciliL_8920 );
  return seen ;
}
int main () {
  ({ /* letn8946 */
    BTree_int_User t0  __attribute__((__cleanup__(free_BTree_int_User ))) = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
    // ----------
    bad  += check ("an empty tree has no minimum", ({ /* letn8955 */
          Maybe_BTree_int_User_pair_t match8954  = min_BTree_int_User (t0 );
          // ----------
          ;
          ({ /* letn8957 */
            bool __h_case_result  = (true  &&  ((match8954 . __h_ctor) ==  __h_Just_t  ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* progn8961 */
                1;
              }) : ({ /* letn8965 */
                // ----------
                ;
                ({ /* progn8967 */
                  0;
                });
              }));
          });
        }), 0) ;
    bad  += check ("an empty tree traverses to nothing", countAll (t0 ), 0) ;
    ({ /* letn8970 */
      BTree_int_User t1  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t0 , 30, 3000, 1);
      // ----------
      ({ /* letn8974 */
        BTree_int_User t2  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t1 , 20, 2000, 1);
        // ----------
        ({ /* letn8978 */
          BTree_int_User t3  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t2 , 40, 4000, 2);
          // ----------
          ({ /* letn8982 */
            BTree_int_User t4  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t3 , 18, 1800, 2);
            // ----------
            ({ /* letn8986 */
              BTree_int_User t5  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t4 , 28, 2800, 3);
              // ----------
              ({ /* letn8990 */
                BTree_int_User t6  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t5 , 50, 5000, 3);
                // ----------
                ({ /* letn8994 */
                  BTree_int_User t7  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t6 , 10, 1000, 1);
                  // ----------
                  ({ /* letn8998 */
                    BTree_int_User t8  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t7 , 42, 4200, 2);
                    // ----------
                    ({ /* letn9002 */
                      BTree_int_User t9  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t8 , 52, 5200, 3);
                      // ----------
                      ({ /* letn9006 */
                        BTree_int_User ta  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t9 , 8, 800, 1);
                        // ----------
                        bad  += check ("ten keys traverse in order", countAll (ta ), 10) ;
                        bad  += check ("and their salaries add up", total , 29800) ;
                        bad  += check ("search finds the root key", salaryOf (ta , 30), 3000) ;
                        bad  += check ("search finds a leaf key", salaryOf (ta , 8), 800) ;
                        bad  += check ("search finds the last key", salaryOf (ta , 52), 5200) ;
                        bad  += check ("search misses what is absent", salaryOf (ta , 99), -1) ;
                        bad  += check ("the minimum is the smallest key", ({ /* letn9015 */
                              Maybe_BTree_int_User_pair_t match9013  = min_BTree_int_User (ta );
                              typeof((((match9013 . __h_data). Just). __h_0_mem)) __h_match9013_0_arg ;
                              typeof((__h_match9013_0_arg . __h_0_mem)) key ;
                              // ----------
                              ;
                              ({ /* letn9017 */
                                bool __h_case_result  = (true  &&  (((match9013 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn9018 */
                                        __h_match9013_0_arg  = (((match9013 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) &&  (true  &&  ({ /* progn9020 */
                                          key  = (__h_match9013_0_arg . __h_0_mem) ;
                                          true ;
                                        }) ) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn9025 */
                                    ((long)key );
                                  }) : ({ /* letn9029 */
                                    // ----------
                                    ;
                                    ({ /* progn9031 */
                                      -1;
                                    });
                                  }));
                              });
                            }), 8) ;
                        bad  += check ("the maximum is the largest key", ({ /* letn9039 */
                              Maybe_BTree_int_User_pair_t match9037  = max_BTree_int_User (ta );
                              typeof((((match9037 . __h_data). Just). __h_0_mem)) __h_match9037_0_arg ;
                              typeof((__h_match9037_0_arg . __h_0_mem)) key ;
                              // ----------
                              ;
                              ({ /* letn9041 */
                                bool __h_case_result  = (true  &&  (((match9037 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn9042 */
                                        __h_match9037_0_arg  = (((match9037 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) &&  (true  &&  ({ /* progn9044 */
                                          key  = (__h_match9037_0_arg . __h_0_mem) ;
                                          true ;
                                        }) ) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn9049 */
                                    ((long)key );
                                  }) : ({ /* letn9053 */
                                    // ----------
                                    ;
                                    ({ /* progn9055 */
                                      -1;
                                    });
                                  }));
                              });
                            }), 52) ;
                        ({ /* letn9058 */
                          BTree_int_User d1  __attribute__((__cleanup__(free_BTree_int_User ))) = del (ta , 30);
                          // ----------
                          ({ /* letn9062 */
                            BTree_int_User d2  __attribute__((__cleanup__(free_BTree_int_User ))) = del (d1 , 8);
                            // ----------
                            ({ /* letn9066 */
                              BTree_int_User d3  __attribute__((__cleanup__(free_BTree_int_User ))) = del (d2 , 52);
                              // ----------
                              bad  += check ("three deletions leave seven", countAll (d3 ), 7) ;
                              bad  += check ("and the deleted key is gone", salaryOf (d3 , 30), -1) ;
                              bad  += check ("while its neighbour is not", salaryOf (d3 , 28), 2800) ;
                              bad  += check ("the minimum moved up", ({ /* letn9075 */
                                    Maybe_BTree_int_User_pair_t match9073  = min_BTree_int_User (d3 );
                                    typeof((((match9073 . __h_data). Just). __h_0_mem)) __h_match9073_0_arg ;
                                    typeof((__h_match9073_0_arg . __h_0_mem)) key ;
                                    // ----------
                                    ;
                                    ({ /* letn9077 */
                                      bool __h_case_result  = (true  &&  (((match9073 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn9078 */
                                              __h_match9073_0_arg  = (((match9073 . __h_data). Just). __h_0_mem) ;
                                              true ;
                                            }) &&  (true  &&  ({ /* progn9080 */
                                                key  = (__h_match9073_0_arg . __h_0_mem) ;
                                                true ;
                                              }) ) ) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn9085 */
                                          ((long)key );
                                        }) : ({ /* letn9089 */
                                          // ----------
                                          ;
                                          ({ /* progn9091 */
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
